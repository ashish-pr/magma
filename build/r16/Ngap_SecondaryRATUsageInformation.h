/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_SecondaryRATUsageInformation_H_
#define	_Ngap_SecondaryRATUsageInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_PDUSessionUsageReport;
struct Ngap_QoSFlowsUsageReportList;
struct Ngap_ProtocolExtensionContainer;

/* Ngap_SecondaryRATUsageInformation */
typedef struct Ngap_SecondaryRATUsageInformation {
	struct Ngap_PDUSessionUsageReport	*pDUSessionUsageReport;	/* OPTIONAL */
	struct Ngap_QoSFlowsUsageReportList	*qosFlowsUsageReportList;	/* OPTIONAL */
	struct Ngap_ProtocolExtensionContainer	*iE_Extension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_SecondaryRATUsageInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_SecondaryRATUsageInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_SecondaryRATUsageInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_SecondaryRATUsageInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_SecondaryRATUsageInformation_H_ */
#include <asn_internal.h>
