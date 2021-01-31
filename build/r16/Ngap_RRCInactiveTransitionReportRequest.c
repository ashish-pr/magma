/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#include "Ngap_RRCInactiveTransitionReportRequest.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_Ngap_RRCInactiveTransitionReportRequest_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Ngap_RRCInactiveTransitionReportRequest_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_Ngap_RRCInactiveTransitionReportRequest_value2enum_1[] = {
	{ 0,	34,	"subsequent-state-transition-report" },
	{ 1,	33,	"single-rrc-connected-state-report" },
	{ 2,	13,	"cancel-report" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_Ngap_RRCInactiveTransitionReportRequest_enum2value_1[] = {
	2,	/* cancel-report(2) */
	1,	/* single-rrc-connected-state-report(1) */
	0	/* subsequent-state-transition-report(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_Ngap_RRCInactiveTransitionReportRequest_specs_1 = {
	asn_MAP_Ngap_RRCInactiveTransitionReportRequest_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_Ngap_RRCInactiveTransitionReportRequest_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Ngap_RRCInactiveTransitionReportRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Ngap_RRCInactiveTransitionReportRequest = {
	"RRCInactiveTransitionReportRequest",
	"RRCInactiveTransitionReportRequest",
	&asn_OP_NativeEnumerated,
	asn_DEF_Ngap_RRCInactiveTransitionReportRequest_tags_1,
	sizeof(asn_DEF_Ngap_RRCInactiveTransitionReportRequest_tags_1)
		/sizeof(asn_DEF_Ngap_RRCInactiveTransitionReportRequest_tags_1[0]), /* 1 */
	asn_DEF_Ngap_RRCInactiveTransitionReportRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_RRCInactiveTransitionReportRequest_tags_1)
		/sizeof(asn_DEF_Ngap_RRCInactiveTransitionReportRequest_tags_1[0]), /* 1 */
	{ &asn_OER_type_Ngap_RRCInactiveTransitionReportRequest_constr_1, &asn_PER_type_Ngap_RRCInactiveTransitionReportRequest_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Ngap_RRCInactiveTransitionReportRequest_specs_1	/* Additional specs */
};

