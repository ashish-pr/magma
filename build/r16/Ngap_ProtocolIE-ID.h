/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-CommonDataTypes"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_ProtocolIE_ID_H_
#define	_Ngap_ProtocolIE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_ProtocolIE-ID */
typedef long	 Ngap_ProtocolIE_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_ProtocolIE_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_ID;
asn_struct_free_f Ngap_ProtocolIE_ID_free;
asn_struct_print_f Ngap_ProtocolIE_ID_print;
asn_constr_check_f Ngap_ProtocolIE_ID_constraint;
ber_type_decoder_f Ngap_ProtocolIE_ID_decode_ber;
der_type_encoder_f Ngap_ProtocolIE_ID_encode_der;
xer_type_decoder_f Ngap_ProtocolIE_ID_decode_xer;
xer_type_encoder_f Ngap_ProtocolIE_ID_encode_xer;
oer_type_decoder_f Ngap_ProtocolIE_ID_decode_oer;
oer_type_encoder_f Ngap_ProtocolIE_ID_encode_oer;
per_type_decoder_f Ngap_ProtocolIE_ID_decode_uper;
per_type_encoder_f Ngap_ProtocolIE_ID_encode_uper;
per_type_decoder_f Ngap_ProtocolIE_ID_decode_aper;
per_type_encoder_f Ngap_ProtocolIE_ID_encode_aper;
#define Ngap_ProtocolIE_ID_id_AllowedNSSAI	((Ngap_ProtocolIE_ID_t)0)
#define Ngap_ProtocolIE_ID_id_AMFName	((Ngap_ProtocolIE_ID_t)1)
#define Ngap_ProtocolIE_ID_id_AMFOverloadResponse	((Ngap_ProtocolIE_ID_t)2)
#define Ngap_ProtocolIE_ID_id_AMFSetID	((Ngap_ProtocolIE_ID_t)3)
#define Ngap_ProtocolIE_ID_id_AMF_TNLAssociationFailedToSetupList	((Ngap_ProtocolIE_ID_t)4)
#define Ngap_ProtocolIE_ID_id_AMF_TNLAssociationSetupList	((Ngap_ProtocolIE_ID_t)5)
#define Ngap_ProtocolIE_ID_id_AMF_TNLAssociationToAddList	((Ngap_ProtocolIE_ID_t)6)
#define Ngap_ProtocolIE_ID_id_AMF_TNLAssociationToRemoveList	((Ngap_ProtocolIE_ID_t)7)
#define Ngap_ProtocolIE_ID_id_AMF_TNLAssociationToUpdateList	((Ngap_ProtocolIE_ID_t)8)
#define Ngap_ProtocolIE_ID_id_AMFTrafficLoadReductionIndication	((Ngap_ProtocolIE_ID_t)9)
#define Ngap_ProtocolIE_ID_id_AMF_UE_NGAP_ID	((Ngap_ProtocolIE_ID_t)10)
#define Ngap_ProtocolIE_ID_id_AssistanceDataForPaging	((Ngap_ProtocolIE_ID_t)11)
#define Ngap_ProtocolIE_ID_id_BroadcastCancelledAreaList	((Ngap_ProtocolIE_ID_t)12)
#define Ngap_ProtocolIE_ID_id_BroadcastCompletedAreaList	((Ngap_ProtocolIE_ID_t)13)
#define Ngap_ProtocolIE_ID_id_CancelAllWarningMessages	((Ngap_ProtocolIE_ID_t)14)
#define Ngap_ProtocolIE_ID_id_Cause	((Ngap_ProtocolIE_ID_t)15)
#define Ngap_ProtocolIE_ID_id_CellIDListForRestart	((Ngap_ProtocolIE_ID_t)16)
#define Ngap_ProtocolIE_ID_id_ConcurrentWarningMessageInd	((Ngap_ProtocolIE_ID_t)17)
#define Ngap_ProtocolIE_ID_id_CoreNetworkAssistanceInformationForInactive	((Ngap_ProtocolIE_ID_t)18)
#define Ngap_ProtocolIE_ID_id_CriticalityDiagnostics	((Ngap_ProtocolIE_ID_t)19)
#define Ngap_ProtocolIE_ID_id_DataCodingScheme	((Ngap_ProtocolIE_ID_t)20)
#define Ngap_ProtocolIE_ID_id_DefaultPagingDRX	((Ngap_ProtocolIE_ID_t)21)
#define Ngap_ProtocolIE_ID_id_DirectForwardingPathAvailability	((Ngap_ProtocolIE_ID_t)22)
#define Ngap_ProtocolIE_ID_id_EmergencyAreaIDListForRestart	((Ngap_ProtocolIE_ID_t)23)
#define Ngap_ProtocolIE_ID_id_EmergencyFallbackIndicator	((Ngap_ProtocolIE_ID_t)24)
#define Ngap_ProtocolIE_ID_id_EUTRA_CGI	((Ngap_ProtocolIE_ID_t)25)
#define Ngap_ProtocolIE_ID_id_FiveG_S_TMSI	((Ngap_ProtocolIE_ID_t)26)
#define Ngap_ProtocolIE_ID_id_GlobalRANNodeID	((Ngap_ProtocolIE_ID_t)27)
#define Ngap_ProtocolIE_ID_id_GUAMI	((Ngap_ProtocolIE_ID_t)28)
#define Ngap_ProtocolIE_ID_id_HandoverType	((Ngap_ProtocolIE_ID_t)29)
#define Ngap_ProtocolIE_ID_id_IMSVoiceSupportIndicator	((Ngap_ProtocolIE_ID_t)30)
#define Ngap_ProtocolIE_ID_id_IndexToRFSP	((Ngap_ProtocolIE_ID_t)31)
#define Ngap_ProtocolIE_ID_id_InfoOnRecommendedCellsAndRANNodesForPaging	((Ngap_ProtocolIE_ID_t)32)
#define Ngap_ProtocolIE_ID_id_LocationReportingRequestType	((Ngap_ProtocolIE_ID_t)33)
#define Ngap_ProtocolIE_ID_id_MaskedIMEISV	((Ngap_ProtocolIE_ID_t)34)
#define Ngap_ProtocolIE_ID_id_MessageIdentifier	((Ngap_ProtocolIE_ID_t)35)
#define Ngap_ProtocolIE_ID_id_MobilityRestrictionList	((Ngap_ProtocolIE_ID_t)36)
#define Ngap_ProtocolIE_ID_id_NASC	((Ngap_ProtocolIE_ID_t)37)
#define Ngap_ProtocolIE_ID_id_NAS_PDU	((Ngap_ProtocolIE_ID_t)38)
#define Ngap_ProtocolIE_ID_id_NASSecurityParametersFromNGRAN	((Ngap_ProtocolIE_ID_t)39)
#define Ngap_ProtocolIE_ID_id_NewAMF_UE_NGAP_ID	((Ngap_ProtocolIE_ID_t)40)
#define Ngap_ProtocolIE_ID_id_NewSecurityContextInd	((Ngap_ProtocolIE_ID_t)41)
#define Ngap_ProtocolIE_ID_id_NGAP_Message	((Ngap_ProtocolIE_ID_t)42)
#define Ngap_ProtocolIE_ID_id_NGRAN_CGI	((Ngap_ProtocolIE_ID_t)43)
#define Ngap_ProtocolIE_ID_id_NGRANTraceID	((Ngap_ProtocolIE_ID_t)44)
#define Ngap_ProtocolIE_ID_id_NR_CGI	((Ngap_ProtocolIE_ID_t)45)
#define Ngap_ProtocolIE_ID_id_NRPPa_PDU	((Ngap_ProtocolIE_ID_t)46)
#define Ngap_ProtocolIE_ID_id_NumberOfBroadcastsRequested	((Ngap_ProtocolIE_ID_t)47)
#define Ngap_ProtocolIE_ID_id_OldAMF	((Ngap_ProtocolIE_ID_t)48)
#define Ngap_ProtocolIE_ID_id_OverloadStartNSSAIList	((Ngap_ProtocolIE_ID_t)49)
#define Ngap_ProtocolIE_ID_id_PagingDRX	((Ngap_ProtocolIE_ID_t)50)
#define Ngap_ProtocolIE_ID_id_PagingOrigin	((Ngap_ProtocolIE_ID_t)51)
#define Ngap_ProtocolIE_ID_id_PagingPriority	((Ngap_ProtocolIE_ID_t)52)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceAdmittedList	((Ngap_ProtocolIE_ID_t)53)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceFailedToModifyListModRes	((Ngap_ProtocolIE_ID_t)54)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceFailedToSetupListCxtRes	((Ngap_ProtocolIE_ID_t)55)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceFailedToSetupListHOAck	((Ngap_ProtocolIE_ID_t)56)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceFailedToSetupListPSReq	((Ngap_ProtocolIE_ID_t)57)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceFailedToSetupListSURes	((Ngap_ProtocolIE_ID_t)58)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceHandoverList	((Ngap_ProtocolIE_ID_t)59)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceListCxtRelCpl	((Ngap_ProtocolIE_ID_t)60)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceListHORqd	((Ngap_ProtocolIE_ID_t)61)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceModifyListModCfm	((Ngap_ProtocolIE_ID_t)62)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceModifyListModInd	((Ngap_ProtocolIE_ID_t)63)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceModifyListModReq	((Ngap_ProtocolIE_ID_t)64)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceModifyListModRes	((Ngap_ProtocolIE_ID_t)65)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceNotifyList	((Ngap_ProtocolIE_ID_t)66)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceReleasedListNot	((Ngap_ProtocolIE_ID_t)67)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceReleasedListPSAck	((Ngap_ProtocolIE_ID_t)68)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceReleasedListPSFail	((Ngap_ProtocolIE_ID_t)69)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceReleasedListRelRes	((Ngap_ProtocolIE_ID_t)70)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceSetupListCxtReq	((Ngap_ProtocolIE_ID_t)71)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceSetupListCxtRes	((Ngap_ProtocolIE_ID_t)72)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceSetupListHOReq	((Ngap_ProtocolIE_ID_t)73)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceSetupListSUReq	((Ngap_ProtocolIE_ID_t)74)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceSetupListSURes	((Ngap_ProtocolIE_ID_t)75)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceToBeSwitchedDLList	((Ngap_ProtocolIE_ID_t)76)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceSwitchedList	((Ngap_ProtocolIE_ID_t)77)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceToReleaseListHOCmd	((Ngap_ProtocolIE_ID_t)78)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceToReleaseListRelCmd	((Ngap_ProtocolIE_ID_t)79)
#define Ngap_ProtocolIE_ID_id_PLMNSupportList	((Ngap_ProtocolIE_ID_t)80)
#define Ngap_ProtocolIE_ID_id_PWSFailedCellIDList	((Ngap_ProtocolIE_ID_t)81)
#define Ngap_ProtocolIE_ID_id_RANNodeName	((Ngap_ProtocolIE_ID_t)82)
#define Ngap_ProtocolIE_ID_id_RANPagingPriority	((Ngap_ProtocolIE_ID_t)83)
#define Ngap_ProtocolIE_ID_id_RANStatusTransfer_TransparentContainer	((Ngap_ProtocolIE_ID_t)84)
#define Ngap_ProtocolIE_ID_id_RAN_UE_NGAP_ID	((Ngap_ProtocolIE_ID_t)85)
#define Ngap_ProtocolIE_ID_id_RelativeAMFCapacity	((Ngap_ProtocolIE_ID_t)86)
#define Ngap_ProtocolIE_ID_id_RepetitionPeriod	((Ngap_ProtocolIE_ID_t)87)
#define Ngap_ProtocolIE_ID_id_ResetType	((Ngap_ProtocolIE_ID_t)88)
#define Ngap_ProtocolIE_ID_id_RoutingID	((Ngap_ProtocolIE_ID_t)89)
#define Ngap_ProtocolIE_ID_id_RRCEstablishmentCause	((Ngap_ProtocolIE_ID_t)90)
#define Ngap_ProtocolIE_ID_id_RRCInactiveTransitionReportRequest	((Ngap_ProtocolIE_ID_t)91)
#define Ngap_ProtocolIE_ID_id_RRCState	((Ngap_ProtocolIE_ID_t)92)
#define Ngap_ProtocolIE_ID_id_SecurityContext	((Ngap_ProtocolIE_ID_t)93)
#define Ngap_ProtocolIE_ID_id_SecurityKey	((Ngap_ProtocolIE_ID_t)94)
#define Ngap_ProtocolIE_ID_id_SerialNumber	((Ngap_ProtocolIE_ID_t)95)
#define Ngap_ProtocolIE_ID_id_ServedGUAMIList	((Ngap_ProtocolIE_ID_t)96)
#define Ngap_ProtocolIE_ID_id_SliceSupportList	((Ngap_ProtocolIE_ID_t)97)
#define Ngap_ProtocolIE_ID_id_SONConfigurationTransferDL	((Ngap_ProtocolIE_ID_t)98)
#define Ngap_ProtocolIE_ID_id_SONConfigurationTransferUL	((Ngap_ProtocolIE_ID_t)99)
#define Ngap_ProtocolIE_ID_id_SourceAMF_UE_NGAP_ID	((Ngap_ProtocolIE_ID_t)100)
#define Ngap_ProtocolIE_ID_id_SourceToTarget_TransparentContainer	((Ngap_ProtocolIE_ID_t)101)
#define Ngap_ProtocolIE_ID_id_SupportedTAList	((Ngap_ProtocolIE_ID_t)102)
#define Ngap_ProtocolIE_ID_id_TAIListForPaging	((Ngap_ProtocolIE_ID_t)103)
#define Ngap_ProtocolIE_ID_id_TAIListForRestart	((Ngap_ProtocolIE_ID_t)104)
#define Ngap_ProtocolIE_ID_id_TargetID	((Ngap_ProtocolIE_ID_t)105)
#define Ngap_ProtocolIE_ID_id_TargetToSource_TransparentContainer	((Ngap_ProtocolIE_ID_t)106)
#define Ngap_ProtocolIE_ID_id_TimeToWait	((Ngap_ProtocolIE_ID_t)107)
#define Ngap_ProtocolIE_ID_id_TraceActivation	((Ngap_ProtocolIE_ID_t)108)
#define Ngap_ProtocolIE_ID_id_TraceCollectionEntityIPAddress	((Ngap_ProtocolIE_ID_t)109)
#define Ngap_ProtocolIE_ID_id_UEAggregateMaximumBitRate	((Ngap_ProtocolIE_ID_t)110)
#define Ngap_ProtocolIE_ID_id_UE_associatedLogicalNG_connectionList	((Ngap_ProtocolIE_ID_t)111)
#define Ngap_ProtocolIE_ID_id_UEContextRequest	((Ngap_ProtocolIE_ID_t)112)
#define Ngap_ProtocolIE_ID_id_UE_NGAP_IDs	((Ngap_ProtocolIE_ID_t)114)
#define Ngap_ProtocolIE_ID_id_UEPagingIdentity	((Ngap_ProtocolIE_ID_t)115)
#define Ngap_ProtocolIE_ID_id_UEPresenceInAreaOfInterestList	((Ngap_ProtocolIE_ID_t)116)
#define Ngap_ProtocolIE_ID_id_UERadioCapability	((Ngap_ProtocolIE_ID_t)117)
#define Ngap_ProtocolIE_ID_id_UERadioCapabilityForPaging	((Ngap_ProtocolIE_ID_t)118)
#define Ngap_ProtocolIE_ID_id_UESecurityCapabilities	((Ngap_ProtocolIE_ID_t)119)
#define Ngap_ProtocolIE_ID_id_UnavailableGUAMIList	((Ngap_ProtocolIE_ID_t)120)
#define Ngap_ProtocolIE_ID_id_UserLocationInformation	((Ngap_ProtocolIE_ID_t)121)
#define Ngap_ProtocolIE_ID_id_WarningAreaList	((Ngap_ProtocolIE_ID_t)122)
#define Ngap_ProtocolIE_ID_id_WarningMessageContents	((Ngap_ProtocolIE_ID_t)123)
#define Ngap_ProtocolIE_ID_id_WarningSecurityInfo	((Ngap_ProtocolIE_ID_t)124)
#define Ngap_ProtocolIE_ID_id_WarningType	((Ngap_ProtocolIE_ID_t)125)
#define Ngap_ProtocolIE_ID_id_AdditionalUL_NGU_UP_TNLInformation	((Ngap_ProtocolIE_ID_t)126)
#define Ngap_ProtocolIE_ID_id_DataForwardingNotPossible	((Ngap_ProtocolIE_ID_t)127)
#define Ngap_ProtocolIE_ID_id_DL_NGU_UP_TNLInformation	((Ngap_ProtocolIE_ID_t)128)
#define Ngap_ProtocolIE_ID_id_NetworkInstance	((Ngap_ProtocolIE_ID_t)129)
#define Ngap_ProtocolIE_ID_id_PDUSessionAggregateMaximumBitRate	((Ngap_ProtocolIE_ID_t)130)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceFailedToModifyListModCfm	((Ngap_ProtocolIE_ID_t)131)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceFailedToSetupListCxtFail	((Ngap_ProtocolIE_ID_t)132)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceListCxtRelReq	((Ngap_ProtocolIE_ID_t)133)
#define Ngap_ProtocolIE_ID_id_PDUSessionType	((Ngap_ProtocolIE_ID_t)134)
#define Ngap_ProtocolIE_ID_id_QosFlowAddOrModifyRequestList	((Ngap_ProtocolIE_ID_t)135)
#define Ngap_ProtocolIE_ID_id_QosFlowSetupRequestList	((Ngap_ProtocolIE_ID_t)136)
#define Ngap_ProtocolIE_ID_id_QosFlowToReleaseList	((Ngap_ProtocolIE_ID_t)137)
#define Ngap_ProtocolIE_ID_id_SecurityIndication	((Ngap_ProtocolIE_ID_t)138)
#define Ngap_ProtocolIE_ID_id_UL_NGU_UP_TNLInformation	((Ngap_ProtocolIE_ID_t)139)
#define Ngap_ProtocolIE_ID_id_UL_NGU_UP_TNLModifyList	((Ngap_ProtocolIE_ID_t)140)
#define Ngap_ProtocolIE_ID_id_WarningAreaCoordinates	((Ngap_ProtocolIE_ID_t)141)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceSecondaryRATUsageList	((Ngap_ProtocolIE_ID_t)142)
#define Ngap_ProtocolIE_ID_id_HandoverFlag	((Ngap_ProtocolIE_ID_t)143)
#define Ngap_ProtocolIE_ID_id_SecondaryRATUsageInformation	((Ngap_ProtocolIE_ID_t)144)
#define Ngap_ProtocolIE_ID_id_PDUSessionResourceReleaseResponseTransfer	((Ngap_ProtocolIE_ID_t)145)
#define Ngap_ProtocolIE_ID_id_RedirectionVoiceFallback	((Ngap_ProtocolIE_ID_t)146)
#define Ngap_ProtocolIE_ID_id_UERetentionInformation	((Ngap_ProtocolIE_ID_t)147)
#define Ngap_ProtocolIE_ID_id_S_NSSAI	((Ngap_ProtocolIE_ID_t)148)
#define Ngap_ProtocolIE_ID_id_PSCellInformation	((Ngap_ProtocolIE_ID_t)149)
#define Ngap_ProtocolIE_ID_id_LastEUTRAN_PLMNIdentity	((Ngap_ProtocolIE_ID_t)150)
#define Ngap_ProtocolIE_ID_id_MaximumIntegrityProtectedDataRate_DL	((Ngap_ProtocolIE_ID_t)151)
#define Ngap_ProtocolIE_ID_id_AdditionalDLForwardingUPTNLInformation	((Ngap_ProtocolIE_ID_t)152)
#define Ngap_ProtocolIE_ID_id_AdditionalDLUPTNLInformationForHOList	((Ngap_ProtocolIE_ID_t)153)
#define Ngap_ProtocolIE_ID_id_AdditionalNGU_UP_TNLInformation	((Ngap_ProtocolIE_ID_t)154)
#define Ngap_ProtocolIE_ID_id_AdditionalDLQosFlowPerTNLInformation	((Ngap_ProtocolIE_ID_t)155)
#define Ngap_ProtocolIE_ID_id_SecurityResult	((Ngap_ProtocolIE_ID_t)156)
#define Ngap_ProtocolIE_ID_id_ENDC_SONConfigurationTransferDL	((Ngap_ProtocolIE_ID_t)157)
#define Ngap_ProtocolIE_ID_id_ENDC_SONConfigurationTransferUL	((Ngap_ProtocolIE_ID_t)158)
#define Ngap_ProtocolIE_ID_id_OldAssociatedQosFlowList_ULendmarkerexpected	((Ngap_ProtocolIE_ID_t)159)
#define Ngap_ProtocolIE_ID_id_CNTypeRestrictionsForEquivalent	((Ngap_ProtocolIE_ID_t)160)
#define Ngap_ProtocolIE_ID_id_CNTypeRestrictionsForServing	((Ngap_ProtocolIE_ID_t)161)
#define Ngap_ProtocolIE_ID_id_NewGUAMI	((Ngap_ProtocolIE_ID_t)162)
#define Ngap_ProtocolIE_ID_id_ULForwarding	((Ngap_ProtocolIE_ID_t)163)
#define Ngap_ProtocolIE_ID_id_ULForwardingUP_TNLInformation	((Ngap_ProtocolIE_ID_t)164)
#define Ngap_ProtocolIE_ID_id_CNAssistedRANTuning	((Ngap_ProtocolIE_ID_t)165)
#define Ngap_ProtocolIE_ID_id_CommonNetworkInstance	((Ngap_ProtocolIE_ID_t)166)
#define Ngap_ProtocolIE_ID_id_NGRAN_TNLAssociationToRemoveList	((Ngap_ProtocolIE_ID_t)167)
#define Ngap_ProtocolIE_ID_id_TNLAssociationTransportLayerAddressNGRAN	((Ngap_ProtocolIE_ID_t)168)
#define Ngap_ProtocolIE_ID_id_EndpointIPAddressAndPort	((Ngap_ProtocolIE_ID_t)169)
#define Ngap_ProtocolIE_ID_id_LocationReportingAdditionalInfo	((Ngap_ProtocolIE_ID_t)170)
#define Ngap_ProtocolIE_ID_id_SourceToTarget_AMFInformationReroute	((Ngap_ProtocolIE_ID_t)171)
#define Ngap_ProtocolIE_ID_id_AdditionalULForwardingUPTNLInformation	((Ngap_ProtocolIE_ID_t)172)
#define Ngap_ProtocolIE_ID_id_SCTP_TLAs	((Ngap_ProtocolIE_ID_t)173)
#define Ngap_ProtocolIE_ID_id_DataForwardingResponseERABList	((Ngap_ProtocolIE_ID_t)174)
#define Ngap_ProtocolIE_ID_id_RIMInformationTransfer	((Ngap_ProtocolIE_ID_t)175)
#define Ngap_ProtocolIE_ID_id_GUAMIType	((Ngap_ProtocolIE_ID_t)176)

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_ProtocolIE_ID_H_ */
#include <asn_internal.h>
