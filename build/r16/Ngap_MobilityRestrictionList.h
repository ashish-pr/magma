/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_MobilityRestrictionList_H_
#define	_Ngap_MobilityRestrictionList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_PLMNIdentity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_EquivalentPLMNs;
struct Ngap_RATRestrictions;
struct Ngap_ForbiddenAreaInformation;
struct Ngap_ServiceAreaInformation;
struct Ngap_ProtocolExtensionContainer;

/* Ngap_MobilityRestrictionList */
typedef struct Ngap_MobilityRestrictionList {
	Ngap_PLMNIdentity_t	 servingPLMN;
	struct Ngap_EquivalentPLMNs	*equivalentPLMNs;	/* OPTIONAL */
	struct Ngap_RATRestrictions	*rATRestrictions;	/* OPTIONAL */
	struct Ngap_ForbiddenAreaInformation	*forbiddenAreaInformation;	/* OPTIONAL */
	struct Ngap_ServiceAreaInformation	*serviceAreaInformation;	/* OPTIONAL */
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_MobilityRestrictionList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_MobilityRestrictionList;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_MobilityRestrictionList_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_MobilityRestrictionList_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_MobilityRestrictionList_H_ */
#include <asn_internal.h>
