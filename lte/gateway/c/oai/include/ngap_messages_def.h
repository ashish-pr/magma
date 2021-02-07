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
/*****************************************************************************

  Source      ngap_messages_def.h
  Date        2020/09/08
  Subsystem   Access and Mobility Management Function
  Description Defines Access and Mobility Management Messages

*****************************************************************************/

MESSAGE_DEF(NGAP_UPLINK_NAS_LOG, IttiMsgText, ngap_uplink_nas_log)
MESSAGE_DEF(NGAP_NG_SETUP_LOG, IttiMsgText, ngap_ng_setup_log)
MESSAGE_DEF(
    NGAP_INITIAL_UE_MESSAGE_LOG, IttiMsgText, ngap_initial_ue_message_log)
MESSAGE_DEF(
    NGAP_UE_CONTEXT_RELEASE_REQ_LOG, IttiMsgText,
    ngap_ue_context_release_req_log)
MESSAGE_DEF(
    NGAP_UE_RADIO_CAPABILITY_INFO_INDICATION_LOG, IttiMsgText,
    ngap_ue_radio_capability_info_indication_log)
MESSAGE_DEF(
    NGAP_NAS_NON_DELIVERY_INDICATION_LOG, IttiMsgText,
    ngap_nas_non_delivery_indication_log)
MESSAGE_DEF(
    NGAP_INITIAL_CONTEXT_SETUP_RSP_LOG, IttiMsgText,
    ngap_initial_context_setup_rsp_log)
MESSAGE_DEF(
    NGAP_UE_CONTEXT_RELEASE_LOG, IttiMsgText, ngap_ue_context_release_log)
MESSAGE_DEF(
    NGAP_INITIAL_CONTEXT_SETUP_FAILURE_LOG, IttiMsgText,
    ngap_initial_context_setup_failure_log)
MESSAGE_DEF(
    NGAP_INITIAL_CONTEXT_SETUP_LOG, IttiMsgText, ngap_initial_context_setup_log)

MESSAGE_DEF(
    NGAP_UE_CONTEXT_RELEASE_REQ, itti_ngap_ue_context_release_req_t,
    ngap_ue_context_release_req)
MESSAGE_DEF(
    NGAP_UE_CONTEXT_RELEASE_COMMAND, itti_ngap_ue_context_release_command_t,
    ngap_ue_context_release_command)
MESSAGE_DEF(
    NGAP_UE_CONTEXT_RELEASE_COMPLETE, itti_ngap_ue_context_release_complete_t,
    ngap_ue_context_release_complete)
MESSAGE_DEF(
    NGAP_NAS_DL_DATA_REQ, itti_ngap_nas_dl_data_req_t, ngap_nas_dl_data_req)
MESSAGE_DEF(
    NGAP_INITIAL_UE_MESSAGE, itti_ngap_initial_ue_message_t,
    ngap_initial_ue_message)
