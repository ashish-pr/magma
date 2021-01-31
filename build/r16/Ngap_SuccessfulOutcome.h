/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Descriptions"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_SuccessfulOutcome_H_
#define	_Ngap_SuccessfulOutcome_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_ProcedureCode.h"
#include "Ngap_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "Ngap_AMFConfigurationUpdate.h"
#include "Ngap_AMFConfigurationUpdateAcknowledge.h"
#include "Ngap_AMFConfigurationUpdateFailure.h"
#include "Ngap_HandoverCancel.h"
#include "Ngap_HandoverCancelAcknowledge.h"
#include "Ngap_HandoverRequired.h"
#include "Ngap_HandoverCommand.h"
#include "Ngap_HandoverPreparationFailure.h"
#include "Ngap_HandoverRequest.h"
#include "Ngap_HandoverRequestAcknowledge.h"
#include "Ngap_HandoverFailure.h"
#include "Ngap_InitialContextSetupRequest.h"
#include "Ngap_InitialContextSetupResponse.h"
#include "Ngap_InitialContextSetupFailure.h"
#include "Ngap_NGReset.h"
#include "Ngap_NGResetAcknowledge.h"
#include "Ngap_NGSetupRequest.h"
#include "Ngap_NGSetupResponse.h"
#include "Ngap_NGSetupFailure.h"
#include "Ngap_PathSwitchRequest.h"
#include "Ngap_PathSwitchRequestAcknowledge.h"
#include "Ngap_PathSwitchRequestFailure.h"
#include "Ngap_PDUSessionResourceModifyRequest.h"
#include "Ngap_PDUSessionResourceModifyResponse.h"
#include "Ngap_PDUSessionResourceModifyIndication.h"
#include "Ngap_PDUSessionResourceModifyConfirm.h"
#include "Ngap_PDUSessionResourceReleaseCommand.h"
#include "Ngap_PDUSessionResourceReleaseResponse.h"
#include "Ngap_PDUSessionResourceSetupRequest.h"
#include "Ngap_PDUSessionResourceSetupResponse.h"
#include "Ngap_PWSCancelRequest.h"
#include "Ngap_PWSCancelResponse.h"
#include "Ngap_RANConfigurationUpdate.h"
#include "Ngap_RANConfigurationUpdateAcknowledge.h"
#include "Ngap_RANConfigurationUpdateFailure.h"
#include "Ngap_UEContextModificationRequest.h"
#include "Ngap_UEContextModificationResponse.h"
#include "Ngap_UEContextModificationFailure.h"
#include "Ngap_UEContextReleaseCommand.h"
#include "Ngap_UEContextReleaseComplete.h"
#include "Ngap_UERadioCapabilityCheckRequest.h"
#include "Ngap_UERadioCapabilityCheckResponse.h"
#include "Ngap_WriteReplaceWarningRequest.h"
#include "Ngap_WriteReplaceWarningResponse.h"
#include "Ngap_AMFStatusIndication.h"
#include "Ngap_CellTrafficTrace.h"
#include "Ngap_DeactivateTrace.h"
#include "Ngap_DownlinkNASTransport.h"
#include "Ngap_DownlinkNonUEAssociatedNRPPaTransport.h"
#include "Ngap_DownlinkRANConfigurationTransfer.h"
#include "Ngap_DownlinkRANStatusTransfer.h"
#include "Ngap_DownlinkUEAssociatedNRPPaTransport.h"
#include "Ngap_ErrorIndication.h"
#include "Ngap_HandoverNotify.h"
#include "Ngap_InitialUEMessage.h"
#include "Ngap_LocationReport.h"
#include "Ngap_LocationReportingControl.h"
#include "Ngap_LocationReportingFailureIndication.h"
#include "Ngap_NASNonDeliveryIndication.h"
#include "Ngap_OverloadStart.h"
#include "Ngap_OverloadStop.h"
#include "Ngap_Paging.h"
#include "Ngap_PDUSessionResourceNotify.h"
#include "Ngap_PrivateMessage.h"
#include "Ngap_PWSFailureIndication.h"
#include "Ngap_PWSRestartIndication.h"
#include "Ngap_RerouteNASRequest.h"
#include "Ngap_RRCInactiveTransitionReport.h"
#include "Ngap_SecondaryRATDataUsageReport.h"
#include "Ngap_TraceFailureIndication.h"
#include "Ngap_TraceStart.h"
#include "Ngap_UEContextReleaseRequest.h"
#include "Ngap_UERadioCapabilityInfoIndication.h"
#include "Ngap_UETNLABindingReleaseRequest.h"
#include "Ngap_UplinkNASTransport.h"
#include "Ngap_UplinkNonUEAssociatedNRPPaTransport.h"
#include "Ngap_UplinkRANConfigurationTransfer.h"
#include "Ngap_UplinkRANStatusTransfer.h"
#include "Ngap_UplinkUEAssociatedNRPPaTransport.h"
#include "Ngap_UplinkRIMInformationTransfer.h"
#include "Ngap_DownlinkRIMInformationTransfer.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_SuccessfulOutcome__value_PR {
	Ngap_SuccessfulOutcome__value_PR_NOTHING,	/* No components present */
	Ngap_SuccessfulOutcome__value_PR_AMFConfigurationUpdateAcknowledge,
	Ngap_SuccessfulOutcome__value_PR_HandoverCancelAcknowledge,
	Ngap_SuccessfulOutcome__value_PR_HandoverCommand,
	Ngap_SuccessfulOutcome__value_PR_HandoverRequestAcknowledge,
	Ngap_SuccessfulOutcome__value_PR_InitialContextSetupResponse,
	Ngap_SuccessfulOutcome__value_PR_NGResetAcknowledge,
	Ngap_SuccessfulOutcome__value_PR_NGSetupResponse,
	Ngap_SuccessfulOutcome__value_PR_PathSwitchRequestAcknowledge,
	Ngap_SuccessfulOutcome__value_PR_PDUSessionResourceModifyResponse,
	Ngap_SuccessfulOutcome__value_PR_PDUSessionResourceModifyConfirm,
	Ngap_SuccessfulOutcome__value_PR_PDUSessionResourceReleaseResponse,
	Ngap_SuccessfulOutcome__value_PR_PDUSessionResourceSetupResponse,
	Ngap_SuccessfulOutcome__value_PR_PWSCancelResponse,
	Ngap_SuccessfulOutcome__value_PR_RANConfigurationUpdateAcknowledge,
	Ngap_SuccessfulOutcome__value_PR_UEContextModificationResponse,
	Ngap_SuccessfulOutcome__value_PR_UEContextReleaseComplete,
	Ngap_SuccessfulOutcome__value_PR_UERadioCapabilityCheckResponse,
	Ngap_SuccessfulOutcome__value_PR_WriteReplaceWarningResponse
} Ngap_SuccessfulOutcome__value_PR;

/* Ngap_SuccessfulOutcome */
typedef struct Ngap_SuccessfulOutcome {
	Ngap_ProcedureCode_t	 procedureCode;
	Ngap_Criticality_t	 criticality;
	struct Ngap_SuccessfulOutcome__value {
		Ngap_SuccessfulOutcome__value_PR present;
		union Ngap_SuccessfulOutcome__Ngap_value_u {
			Ngap_AMFConfigurationUpdateAcknowledge_t	 AMFConfigurationUpdateAcknowledge;
			Ngap_HandoverCancelAcknowledge_t	 HandoverCancelAcknowledge;
			Ngap_HandoverCommand_t	 HandoverCommand;
			Ngap_HandoverRequestAcknowledge_t	 HandoverRequestAcknowledge;
			Ngap_InitialContextSetupResponse_t	 InitialContextSetupResponse;
			Ngap_NGResetAcknowledge_t	 NGResetAcknowledge;
			Ngap_NGSetupResponse_t	 NGSetupResponse;
			Ngap_PathSwitchRequestAcknowledge_t	 PathSwitchRequestAcknowledge;
			Ngap_PDUSessionResourceModifyResponse_t	 PDUSessionResourceModifyResponse;
			Ngap_PDUSessionResourceModifyConfirm_t	 PDUSessionResourceModifyConfirm;
			Ngap_PDUSessionResourceReleaseResponse_t	 PDUSessionResourceReleaseResponse;
			Ngap_PDUSessionResourceSetupResponse_t	 PDUSessionResourceSetupResponse;
			Ngap_PWSCancelResponse_t	 PWSCancelResponse;
			Ngap_RANConfigurationUpdateAcknowledge_t	 RANConfigurationUpdateAcknowledge;
			Ngap_UEContextModificationResponse_t	 UEContextModificationResponse;
			Ngap_UEContextReleaseComplete_t	 UEContextReleaseComplete;
			Ngap_UERadioCapabilityCheckResponse_t	 UERadioCapabilityCheckResponse;
			Ngap_WriteReplaceWarningResponse_t	 WriteReplaceWarningResponse;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_SuccessfulOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_SuccessfulOutcome;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_SuccessfulOutcome_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_SuccessfulOutcome_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_SuccessfulOutcome_H_ */
#include <asn_internal.h>
