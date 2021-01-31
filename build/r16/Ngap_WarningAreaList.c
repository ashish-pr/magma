/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#include "Ngap_WarningAreaList.h"

static asn_oer_constraints_t asn_OER_type_Ngap_WarningAreaList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Ngap_WarningAreaList_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Ngap_WarningAreaList_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_WarningAreaList, choice.eUTRA_CGIListForWarning),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_EUTRA_CGIListForWarning,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRA-CGIListForWarning"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_WarningAreaList, choice.nR_CGIListForWarning),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_NR_CGIListForWarning,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nR-CGIListForWarning"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_WarningAreaList, choice.tAIListForWarning),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_TAIListForWarning,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tAIListForWarning"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_WarningAreaList, choice.emergencyAreaIDList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_EmergencyAreaIDList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"emergencyAreaIDList"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_WarningAreaList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eUTRA-CGIListForWarning */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nR-CGIListForWarning */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tAIListForWarning */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* emergencyAreaIDList */
};
asn_CHOICE_specifics_t asn_SPC_Ngap_WarningAreaList_specs_1 = {
	sizeof(struct Ngap_WarningAreaList),
	offsetof(struct Ngap_WarningAreaList, _asn_ctx),
	offsetof(struct Ngap_WarningAreaList, present),
	sizeof(((struct Ngap_WarningAreaList *)0)->present),
	asn_MAP_Ngap_WarningAreaList_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	4	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_WarningAreaList = {
	"WarningAreaList",
	"WarningAreaList",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_Ngap_WarningAreaList_constr_1, &asn_PER_type_Ngap_WarningAreaList_constr_1, CHOICE_constraint },
	asn_MBR_Ngap_WarningAreaList_1,
	4,	/* Elements count */
	&asn_SPC_Ngap_WarningAreaList_specs_1	/* Additional specs */
};

