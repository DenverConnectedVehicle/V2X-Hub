/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "Node-XY-26b.h"

static asn_TYPE_member_t asn_MBR_Node_XY_26b_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Node_XY_26b, x),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Offset_B13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"x"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Node_XY_26b, y),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Offset_B13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"y"
		},
};
static ber_tlv_tag_t asn_DEF_Node_XY_26b_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Node_XY_26b_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* x */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* y */
};
static asn_SEQUENCE_specifics_t asn_SPC_Node_XY_26b_specs_1 = {
	sizeof(struct Node_XY_26b),
	offsetof(struct Node_XY_26b, _asn_ctx),
	asn_MAP_Node_XY_26b_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Node_XY_26b = {
	"Node-XY-26b",
	"Node-XY-26b",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Node_XY_26b_tags_1,
	sizeof(asn_DEF_Node_XY_26b_tags_1)
		/sizeof(asn_DEF_Node_XY_26b_tags_1[0]), /* 1 */
	asn_DEF_Node_XY_26b_tags_1,	/* Same as above */
	sizeof(asn_DEF_Node_XY_26b_tags_1)
		/sizeof(asn_DEF_Node_XY_26b_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Node_XY_26b_1,
	2,	/* Elements count */
	&asn_SPC_Node_XY_26b_specs_1	/* Additional specs */
};

