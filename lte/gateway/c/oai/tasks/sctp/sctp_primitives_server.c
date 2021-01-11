/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the terms found in the LICENSE file in the root of this source tree.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

/*! \file sctp_primitives_server.c
    \brief Main server primitives
    \author Sebastien ROUX, Lionel GAUTHIER
    \date 2013
    \version 1.0
    @ingroup _sctp
*/

#include "sctp_primitives_server.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <errno.h>
#include "bstrlib.h"
#include "intertask_interface.h"
#include "intertask_interface_types.h"
#include "itti_free_defined_msg.h"
#include "itti_types.h"

#include "assertions.h"
#include "common_defs.h"
#include "common_types.h"
#include "dynamic_memory_check.h"
#include "log.h"

#include "amf_default_values.h"
#include "mme_default_values.h"
#include "service303.h"
#include "sctp_itti_messaging.h"
#include "sctp_messages_types.h"
#include "sctpd_downlink_client.h"
#include "sctpd_uplink_server.h"

static void sctp_exit(void);

sctp_config_t sctp_conf;
task_zmq_ctx_t sctp_task_zmq_ctx;

static int handle_message(zloop_t* loop, zsock_t* reader, void* arg) {
  zframe_t* msg_frame = zframe_recv(reader);
  assert(msg_frame);
  MessageDef* received_message_p = (MessageDef*) zframe_data(msg_frame);

  switch (ITTI_MSG_ID(received_message_p)) {
    case SCTP_INIT_MSG: {
      if (start_sctpd_uplink_server() < 0) {
        Fatal("Failed to start sctpd uplink server\n");
      }

      if (sctpd_init(&received_message_p->ittiMsg.sctpInit) < 0) {
        Fatal("Failed to init sctpd\n");
      }

      MessageDef* msg;

      if (received_message_p->ittiMsg.sctpInit.ppid == S1AP) {
        msg = itti_alloc_new_message(TASK_S1AP, SCTP_MME_SERVER_INITIALIZED);
        SCTP_MME_SERVER_INITIALIZED(msg).successful = true;
        send_msg_to_task(&sctp_task_zmq_ctx, TASK_MME_APP, msg);

      } else if (received_message_p->ittiMsg.sctpInit.ppid == NGAP) {
        msg = itti_alloc_new_message(TASK_NGAP, SCTP_AMF_SERVER_INITIALIZED);
        SCTP_AMF_SERVER_INITIALIZED(msg).successful = true;
        send_msg_to_task(&sctp_task_zmq_ctx, TASK_AMF_APP, msg);
      } else {
        OAILOG_ERROR(
            LOG_SCTP,
            "Invalid Ppid: %d",
            received_message_p->ittiMsg.sctpInit.ppid);
      }
    } break;

    case SCTP_CLOSE_ASSOCIATION: {
    } break;

    case SCTP_DATA_REQ: {
      uint32_t ppid     = SCTP_DATA_REQ(received_message_p).ppid;
      uint32_t assoc_id = SCTP_DATA_REQ(received_message_p).assoc_id;
      uint16_t stream   = SCTP_DATA_REQ(received_message_p).stream;
      bstring payload   = SCTP_DATA_REQ(received_message_p).payload;

      if (sctpd_send_dl(ppid, assoc_id, stream, payload) < 0) {
        if (ppid == S1AP) {
          OAILOG_DEBUG(
              LOG_SCTP, "Ppid S1AP in sctp_data_req ");
          sctp_itti_send_lower_layer_conf(
              received_message_p->ittiMsgHeader.originTaskId, ppid, assoc_id,
              stream, SCTP_DATA_REQ(received_message_p).mme_ue_s1ap_id, false);
        } else if (ppid == NGAP) {
          OAILOG_DEBUG(
              LOG_SCTP, "ppid match NGAP in sctp_itti_send_lower_layer_conf ");
          sctp_itti_send_lower_layer_conf(
              received_message_p->ittiMsgHeader.originTaskId, ppid, assoc_id,
              stream, SCTP_DATA_REQ(received_message_p).amf_ue_ngap_id, false);
        } else {
          OAILOG_ERROR(
              LOG_SCTP,
              "ppid: %d not matching in sctp_itti_send_lower_layer_conf ",
              ppid);
        }
      }
    } break;

    case MESSAGE_TEST: {
      OAI_FPRINTF_INFO("TASK_SCTP received MESSAGE_TEST\n");
    } break;
    case TERMINATE_MESSAGE: {
      itti_free_msg_content(received_message_p);
      zframe_destroy(&msg_frame);
      sctp_exit();
    } break;

    default: {
      OAILOG_DEBUG(
          LOG_SCTP, "Unkwnon message ID %d:%s\n",
          ITTI_MSG_ID(received_message_p), ITTI_MSG_NAME(received_message_p));
    } break;
  }

  itti_free_msg_content(received_message_p);
  zframe_destroy(&msg_frame);
  return 0;
}

//------------------------------------------------------------------------------
static void* sctp_thread(__attribute__((unused)) void* args_p) {
  itti_mark_task_ready(TASK_SCTP);
  init_task_context(
      TASK_SCTP, (task_id_t[]){TASK_MME_APP, TASK_S1AP, TASK_NGAP}, 3,
      handle_message, &sctp_task_zmq_ctx);

  zloop_start(sctp_task_zmq_ctx.event_loop);
  sctp_exit();
  return NULL;
}

int sctp_init(const mme_config_t* mme_config_p) {
  if (init_sctpd_downlink_client(!mme_config.use_stateless) < 0) {
    OAILOG_ERROR(LOG_SCTP, "failed to init sctpd downlink client\n");
  }

  if (itti_create_task(TASK_SCTP, &sctp_thread, NULL) < 0) {
    OAILOG_ERROR(LOG_SCTP, "create task failed\n");
    return -1;
  }

  return 0;
}

static void sctp_exit(void) {
  destroy_task_context(&sctp_task_zmq_ctx);
  stop_sctpd_uplink_server();
  sctpd_exit();
  OAI_FPRINTF_INFO("TASK_SCTP terminated\n");
  pthread_exit(NULL);
}
