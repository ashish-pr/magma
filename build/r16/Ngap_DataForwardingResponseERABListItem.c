/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#include "Ngap_DataForwardingResponseERABListItem.h"

#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_DataForwardingResponseERABListItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_DataForwardingResponseERABListItem, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_E_RAB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-ID"
		},
	{ ATF_POINTER, 2, offsetof(struct Ngap_DataForwardingResponseERABListItem, dLForwarding),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_DLForwarding,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dLForwarding"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_DataForwardingResponseERABListItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_6983P37,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_DataForwardingResponseERABListItem_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_Ngap_DataForwardingResponseERABListItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_DataForwardingResponseERABListItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dLForwarding */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_DataForwardingResponseERABListItem_specs_1 = {
	sizeof(struct Ngap_DataForwardingResponseERABListItem),
	offsetof(struct Ngap_DataForwardingResponseERABListItem, _asn_ctx),
	asn_MAP_Ngap_DataForwardingResponseERABListItem_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Ngap_DataForwardingResponseERABListItem_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_DataForwardingResponseERABListItem = {
	"DataForwardingResponseERABListItem",
	"DataForwardingResponseERABListItem",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_DataForwardingResponseERABListItem_tags_1,
	sizeof(asn_DEF_Ngap_DataForwardingResponseERABListItem_tags_1)
		/sizeof(asn_DEF_Ngap_DataForwardingResponseERABListItem_tags_1[0]), /* 1 */
	asn_DEF_Ngap_DataForwardingResponseERABListItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_DataForwardingResponseERABListItem_tags_1)
		/sizeof(asn_DEF_Ngap_DataForwardingResponseERABListItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_DataForwardingResponseERABListItem_1,
	3,	/* Elements count */
	&asn_SPC_Ngap_DataForwardingResponseERABListItem_specs_1	/* Additional specs */
};

