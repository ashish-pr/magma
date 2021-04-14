/**
 * Copyright 2020 The Magma Authors.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <sstream>
#ifdef __cplusplus
extern "C" {
#endif
#include "log.h"
#include "conversions.h"
#include "3gpp_38.401.h"
#ifdef __cplusplus
}
#endif
#include "amf_recv.h"
#include "M5gNasMessage.h"
#include "common_defs.h"
#include "amf_app_ue_context_and_proc.h"
#include "SmfServiceClient.h"

namespace magma5g {
#define IMSI_LEN 15
#define AMF_CAUSE_SUCCESS 1
extern ue_m5gmm_context_s
    ue_m5gmm_global_context;  // TODO This has been taken care in new PR with
                              // multi UE feature

/***************************************************************************
**                                                                        **
** Name:    esm_pt_is_reserved()                                          **
**                                                                        **
** Description: Check Validity of Procedure Transaction Identity          **
**                                                                        **
**                                                                        **
***************************************************************************/
int esm_pt_is_reserved(int pti) {
  return (
      (pti != PROCEDURE_TRANSACTION_IDENTITY_UNASSIGNED_t) &&
      (pti > PROCEDURE_TRANSACTION_IDENTITY_LAST_t));
}

/***************************************************************************
**                                                                        **
** Name:    amf_smf_handle_pdu_establishment_request()                    **
**                                                                        **
** Description: Handler for PDU Establishment Requests                    **
**                                                                        **
**                                                                        **
***************************************************************************/
int amf_smf_handle_pdu_establishment_request(
    SmfMsg* msg, amf_smf_t* amf_smf_msg) {
  int smf_cause = SMF_CAUSE_SUCCESS;
  OAILOG_DEBUG(
      LOG_AMF_APP,
      "AMF SMF Handler- Received PDN Connectivity Request message ");

  // Procedure transaction identity checking
  if ((msg->header.procedure_transaction_id ==
       PROCEDURE_TRANSACTION_IDENTITY_UNASSIGNED_t) ||
      esm_pt_is_reserved(msg->header.procedure_transaction_id)) {
    amf_smf_msg->u.establish.cause_value = SMF_CAUSE_INVALID_PTI_VALUE;
    return (amf_smf_msg->u.establish.cause_value);
  } else {
    amf_smf_msg->u.establish.pti = msg->header.procedure_transaction_id;
  }

  // Get the value of the PDN type indicator
  if (msg->msg.pdu_session_estab_request.pdu_session_type.type_val ==
      PDN_TYPE_IPV4) {
    amf_smf_msg->u.establish.pdu_session_type = NET_PDN_TYPE_IPV4;
  } else if (
      msg->msg.pdu_session_estab_request.pdu_session_type.type_val ==
      PDN_TYPE_IPV6) {
    amf_smf_msg->u.establish.pdu_session_type = NET_PDN_TYPE_IPV6;
  } else if (
      msg->msg.pdu_session_estab_request.pdu_session_type.type_val ==
      PDN_TYPE_IPV4V6) {
    amf_smf_msg->u.establish.pdu_session_type = NET_PDN_TYPE_IPV4V6;
  } else {
    // Unkown PDN type
    amf_smf_msg->u.establish.cause_value = SMF_CAUSE_UNKNOWN_PDN_TYPE;
    return (amf_smf_msg->u.establish.cause_value);
  }
  amf_smf_msg->u.establish.pdu_session_id = msg->header.pdu_session_id;
  amf_smf_msg->u.establish.cause_value    = smf_cause;

  return (smf_cause);
}

/***************************************************************************
**                                                                        **
** Name:    amf_smf_handle_pdu_release_request                            **
**                                                                        **
** Description: handler for PDU session release                           **
**                                                                        **
**                                                                        **
***************************************************************************/
int amf_smf_handle_pdu_release_request(SmfMsg* msg, amf_smf_t* amf_smf_msg) {
  int smf_cause                         = SMF_CAUSE_SUCCESS;
  amf_smf_msg->u.release.pti            = msg->header.procedure_transaction_id;
  amf_smf_msg->u.release.pdu_session_id = msg->header.pdu_session_id;
  amf_smf_msg->u.release.cause_value    = smf_cause;
  return (smf_cause);  // TODO add error checking and return
                       // appropriate cause value
}

/***************************************************************************
**                                                                        **
** Name:    amf_send_pdusession_reject()                                  **
**                                                                        **
** Description: send PDU session reject to UE                             **
**                                                                        **
**                                                                        **
***************************************************************************/
int amf_send_pdusession_reject(
    SmfMsg* reject_req, uint8_t session_id, uint8_t pti, uint8_t cause) {
  uint8_t buffer[5];
  int rc;
  reject_req->header.extended_protocol_discriminator =
      M5G_SESSION_MANAGEMENT_MESSAGES;
  reject_req->header.pdu_session_id           = session_id;
  reject_req->header.procedure_transaction_id = pti;
  reject_req->header.message_type = PDU_SESSION_ESTABLISHMENT_REJECT;
  reject_req->msg.pdu_session_estab_reject.m5gsm_cause.cause_value = cause;
  rc = reject_req->SmfMsgEncodeMsg(reject_req, buffer, 5);
  if (rc > 0) {
    // TODO: Send the message to AS for nas encode
    // and forward to NGAP. Nagetive scenario.
  }
  return rc;
}

/***************************************************************************
**                                                                        **
** Name:    set_amf_smf_context()                                         **
**                                                                        **
** Description: set the smf_context in amf_context                        **
**                                                                        **
**                                                                        **
***************************************************************************/
void set_amf_smf_context(
    PDUSessionEstablishmentRequestMsg* message, smf_context_t* smf_ctx) {
  smf_ctx->smf_proc_data.pdu_session_identity = message->pdu_session_identity;
  smf_ctx->smf_proc_data.pti                  = message->pti;
  smf_ctx->smf_proc_data.message_type         = message->message_type;
  smf_ctx->smf_proc_data.integrity_prot_max_data_rate =
      message->integrity_prot_max_data_rate;
  smf_ctx->smf_proc_data.pdu_session_type = message->pdu_session_type;
  smf_ctx->smf_proc_data.ssc_mode         = message->ssc_mode;
  smf_ctx->pdu_session_version            = 0;  // Initializing pdu version to 0
  memset(
      smf_ctx->gtp_tunnel_id.gnb_gtp_teid_ip_addr, '\0',
      sizeof(smf_ctx->gtp_tunnel_id.gnb_gtp_teid_ip_addr));
  memset(
      smf_ctx->gtp_tunnel_id.gnb_gtp_teid, '\0',
      sizeof(smf_ctx->gtp_tunnel_id.gnb_gtp_teid));
}

/***************************************************************************
**                                                                        **
** Name:    clear_amf_smf_context()                                       **
**                                                                        **
** Description: clear smf_context on session release                      **
**                                                                        **
**                                                                        **
***************************************************************************/
void clear_amf_smf_context(smf_context_t* smf_ctx) {
  memset(
      &(smf_ctx->smf_proc_data.pdu_session_identity), 0,
      sizeof(smf_ctx->smf_proc_data.pdu_session_identity));
  memset(&(smf_ctx->smf_proc_data.pti), 0, sizeof(smf_ctx->smf_proc_data.pti));
  memset(
      &(smf_ctx->smf_proc_data.message_type), 0,
      sizeof(smf_ctx->smf_proc_data.message_type));
  memset(
      &(smf_ctx->smf_proc_data.integrity_prot_max_data_rate), 0,
      sizeof(smf_ctx->smf_proc_data.integrity_prot_max_data_rate));
  memset(
      &(smf_ctx->smf_proc_data.pdu_session_type), 0,
      sizeof(smf_ctx->smf_proc_data.pdu_session_type));
  memset(
      &(smf_ctx->smf_proc_data.ssc_mode), 0,
      sizeof(smf_ctx->smf_proc_data.ssc_mode));
}

/***************************************************************************
**                                                                        **
** Name:    amf_smf_send()                                                **
**                                                                        **
** Description: handler to send session request to SMF                    **
**                                                                        **
**                                                                        **
***************************************************************************/
int amf_smf_send(
    amf_ue_ngap_id_t ue_id, ULNASTransportMsg* msg, int amf_cause) {
  int rc = 1;
  SmfMsg reject_req;
  amf_smf_t amf_smf_msg  = {};
  smf_context_t* smf_ctx = NULL;
  char imsi[IMSI_BCD_DIGITS_MAX + 1];
  if (amf_cause != AMF_CAUSE_SUCCESS) {
    rc = amf_send_pdusession_reject(
        &reject_req, msg->payload_container.smf_msg.header.pdu_session_id,
        msg->payload_container.smf_msg.header.procedure_transaction_id,
        amf_cause);
    return rc;
  }

  ue_m5gmm_context_s* ue_context = amf_ue_context_exists_amf_ue_ngap_id(ue_id);
  if (ue_context) {
    smf_ctx = &(ue_context->amf_context.smf_context);
    IMSI64_TO_STRING(ue_context->amf_context.imsi64, imsi, IMSI_LEN);
  } else {
    ue_context = &ue_m5gmm_global_context;
    smf_ctx    = &ue_m5gmm_global_context.amf_context.smf_context;
    IMSI64_TO_STRING(
        ue_m5gmm_global_context.amf_context.imsi64, imsi, IMSI_LEN);
  }

  // Process the decoded NAS message
  switch (msg->payload_container.smf_msg.header.message_type) {
    case PDU_SESSION_ESTABLISHMENT_REQUEST: {
      amf_cause = amf_smf_handle_pdu_establishment_request(
          &(msg->payload_container.smf_msg), &amf_smf_msg);

      if (amf_cause != SMF_CAUSE_SUCCESS) {
        rc = amf_send_pdusession_reject(
            &reject_req, msg->payload_container.smf_msg.header.pdu_session_id,
            msg->payload_container.smf_msg.header.procedure_transaction_id,
            amf_cause);
        return rc;
      }
      set_amf_smf_context(
          &(msg->payload_container.smf_msg.msg.pdu_session_estab_request),
          smf_ctx);
      memset(
          amf_smf_msg.u.establish.gnb_gtp_teid_ip_addr, '\0',
          sizeof(amf_smf_msg.u.establish.gnb_gtp_teid_ip_addr));
      memset(
          amf_smf_msg.u.establish.gnb_gtp_teid, '\0',
          sizeof(amf_smf_msg.u.establish.gnb_gtp_teid));
      memcpy(
          amf_smf_msg.u.establish.gnb_gtp_teid_ip_addr,
          smf_ctx->gtp_tunnel_id.gnb_gtp_teid_ip_addr, GNB_IPV4_ADDR_LEN);
      memcpy(
          amf_smf_msg.u.establish.gnb_gtp_teid,
          smf_ctx->gtp_tunnel_id.gnb_gtp_teid, GNB_TEID_LEN);
      // send request to SMF over grpc
      rc = create_session_grpc_req(&amf_smf_msg.u.establish, imsi);
    } break;
    case PDU_SESSION_RELEASE_REQUEST: {
      amf_cause = amf_smf_handle_pdu_release_request(
          &(msg->payload_container.smf_msg), &amf_smf_msg);
      OAILOG_DEBUG(
          LOG_AMF_APP,
          "sending PDU session resource release request to gNB \n");
      rc = pdu_session_resource_release_request(ue_context, ue_id);
      if (rc != RETURNok) {
        OAILOG_DEBUG(
            LOG_AMF_APP,
            "PDU session resource release request to gNB failed"
            "\n");
      }
      OAILOG_DEBUG(LOG_AMF_APP, "notifying SMF about PDU session release\n");
      rc = release_session_gprc_req(&amf_smf_msg.u.release, imsi);
      OAILOG_DEBUG(
          LOG_AMF_APP, "clear saved context associated with the PDU session\n");
      clear_amf_smf_context(smf_ctx);
    } break;
    default:
      break;
  }
  return rc;
}

/***************************************************************************
**                                                                        **
** Name:    amf_smf_notification_send()                                   **
**                                                                        **
** Description:                                                           **
** This function for UE idle event notification to SMF or single PDU      **
** session state change to Inactive state and notify to SMF.              **
** 4 types of events are used in proto.                                   **
** PDU_SESSION_INACTIVE_NOTIFY => use for single PDU session notify       **
** UE_IDLE_MODE_NOTIFY     => use for idle mode support                   **
** UE_PAGING_NOTIFY                                                       **
** UE_PERIODIC_REG_ACTIVE_MODE_NOTIFY                                     **
**                                                                        **
***************************************************************************/
int amf_smf_notification_send(
    amf_ue_ngap_id_t ue_id, ue_m5gmm_context_s* ue_context) {
  OAILOG_DEBUG(
      LOG_AMF_APP, " Preparing and sending idle notification to SMF \n");
  int rc = RETURNerror;
  /* Get gRPC structure of notification to be filled common and
   * rat type elements.
   * Only need  to be filled IMSI and ue_state_idle of UE
   */
  magma::lte::SetSmNotificationContext notify_req;
  auto* req_common       = notify_req.mutable_common_context();
  auto* req_rat_specific = notify_req.mutable_rat_specific_notification();
  char imsi[IMSI_BCD_DIGITS_MAX + 1];
  IMSI64_TO_STRING(ue_context->amf_context.imsi64, imsi, 15);

  req_common->mutable_sid()->mutable_id()->assign(imsi);
  req_rat_specific->set_notify_ue_event(
      magma::lte::NotifyUeEvents::UE_IDLE_MODE_NOTIFY);

  OAILOG_DEBUG(
      LOG_AMF_APP,
      " Notification gRPC filled with IMSI %s and "
      "ue_state_idle is set to true \n",
      imsi);

  auto smf_srv_client = std::make_shared<magma5g::AsyncSmfServiceClient>();
  std::thread smf_srv_client_response_handling_thread(
      [&]() { smf_srv_client->rpc_response_loop(); });
  smf_srv_client_response_handling_thread.detach();

  OAILOG_DEBUG(
      LOG_AMF_APP, " Sending filled idle notification to SMF by gRPC \n");
  smf_srv_client->set_smf_notification(notify_req);
  return RETURNok;
}

}  // namespace magma5g