/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#include "Ngap_IntegrityProtectionResult.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_Ngap_IntegrityProtectionResult_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Ngap_IntegrityProtectionResult_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_Ngap_IntegrityProtectionResult_value2enum_1[] = {
	{ 0,	9,	"performed" },
	{ 1,	13,	"not-performed" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_Ngap_IntegrityProtectionResult_enum2value_1[] = {
	1,	/* not-performed(1) */
	0	/* performed(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_Ngap_IntegrityProtectionResult_specs_1 = {
	asn_MAP_Ngap_IntegrityProtectionResult_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_Ngap_IntegrityProtectionResult_enum2value_1,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Ngap_IntegrityProtectionResult_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Ngap_IntegrityProtectionResult = {
	"IntegrityProtectionResult",
	"IntegrityProtectionResult",
	&asn_OP_NativeEnumerated,
	asn_DEF_Ngap_IntegrityProtectionResult_tags_1,
	sizeof(asn_DEF_Ngap_IntegrityProtectionResult_tags_1)
		/sizeof(asn_DEF_Ngap_IntegrityProtectionResult_tags_1[0]), /* 1 */
	asn_DEF_Ngap_IntegrityProtectionResult_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_IntegrityProtectionResult_tags_1)
		/sizeof(asn_DEF_Ngap_IntegrityProtectionResult_tags_1[0]), /* 1 */
	{ &asn_OER_type_Ngap_IntegrityProtectionResult_constr_1, &asn_PER_type_Ngap_IntegrityProtectionResult_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Ngap_IntegrityProtectionResult_specs_1	/* Additional specs */
};

