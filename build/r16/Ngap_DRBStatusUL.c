/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#include "Ngap_DRBStatusUL.h"

static asn_oer_constraints_t asn_OER_type_Ngap_DRBStatusUL_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Ngap_DRBStatusUL_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Ngap_DRBStatusUL_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_DRBStatusUL, choice.dRBStatusUL12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_DRBStatusUL12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRBStatusUL12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_DRBStatusUL, choice.dRBStatusUL18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_DRBStatusUL18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRBStatusUL18"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_DRBStatusUL_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dRBStatusUL12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dRBStatusUL18 */
};
asn_CHOICE_specifics_t asn_SPC_Ngap_DRBStatusUL_specs_1 = {
	sizeof(struct Ngap_DRBStatusUL),
	offsetof(struct Ngap_DRBStatusUL, _asn_ctx),
	offsetof(struct Ngap_DRBStatusUL, present),
	sizeof(((struct Ngap_DRBStatusUL *)0)->present),
	asn_MAP_Ngap_DRBStatusUL_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_DRBStatusUL = {
	"DRBStatusUL",
	"DRBStatusUL",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_Ngap_DRBStatusUL_constr_1, &asn_PER_type_Ngap_DRBStatusUL_constr_1, CHOICE_constraint },
	asn_MBR_Ngap_DRBStatusUL_1,
	2,	/* Elements count */
	&asn_SPC_Ngap_DRBStatusUL_specs_1	/* Additional specs */
};

