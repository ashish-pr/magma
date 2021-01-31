/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#include "Ngap_DRBsToQosFlowsMappingItem.h"

#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_DRBsToQosFlowsMappingItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_DRBsToQosFlowsMappingItem, dRB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_DRB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_DRBsToQosFlowsMappingItem, associatedQosFlowList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_AssociatedQosFlowList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"associatedQosFlowList"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_DRBsToQosFlowsMappingItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_6983P43,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_DRBsToQosFlowsMappingItem_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_Ngap_DRBsToQosFlowsMappingItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_DRBsToQosFlowsMappingItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dRB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* associatedQosFlowList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_DRBsToQosFlowsMappingItem_specs_1 = {
	sizeof(struct Ngap_DRBsToQosFlowsMappingItem),
	offsetof(struct Ngap_DRBsToQosFlowsMappingItem, _asn_ctx),
	asn_MAP_Ngap_DRBsToQosFlowsMappingItem_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Ngap_DRBsToQosFlowsMappingItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_DRBsToQosFlowsMappingItem = {
	"DRBsToQosFlowsMappingItem",
	"DRBsToQosFlowsMappingItem",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_DRBsToQosFlowsMappingItem_tags_1,
	sizeof(asn_DEF_Ngap_DRBsToQosFlowsMappingItem_tags_1)
		/sizeof(asn_DEF_Ngap_DRBsToQosFlowsMappingItem_tags_1[0]), /* 1 */
	asn_DEF_Ngap_DRBsToQosFlowsMappingItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_DRBsToQosFlowsMappingItem_tags_1)
		/sizeof(asn_DEF_Ngap_DRBsToQosFlowsMappingItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_DRBsToQosFlowsMappingItem_1,
	3,	/* Elements count */
	&asn_SPC_Ngap_DRBsToQosFlowsMappingItem_specs_1	/* Additional specs */
};

