/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_201603DA.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -S/home/gmb/TMX-OAM/Build/asn1c/skeletons`
 */

#include "ObstacleDetection.h"

static int
memb_description_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 523 && value <= 541)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_description_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  523,  541 }	/* (523..541) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ObstacleDetection_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ObstacleDetection, obDist),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObstacleDistance,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"obDist"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ObstacleDetection, obDirect),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSRC_Angle,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"obDirect"
		},
	{ ATF_POINTER, 2, offsetof(struct ObstacleDetection, description),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ITIScodes,
		0,
		memb_description_constraint_1,
		0,	/* OER is not compiled, use -gen-OER */
		&asn_PER_memb_description_constr_4,
		0,
		"description"
		},
	{ ATF_POINTER, 1, offsetof(struct ObstacleDetection, locationDetails),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GenericLocations,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"locationDetails"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ObstacleDetection, dateTime),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DDateTime,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"dateTime"
		},
	{ ATF_POINTER, 1, offsetof(struct ObstacleDetection, vertEvent),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VerticalAccelerationThreshold,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"vertEvent"
		},
};
static const int asn_MAP_ObstacleDetection_oms_1[] = { 2, 3, 5 };
static const ber_tlv_tag_t asn_DEF_ObstacleDetection_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ObstacleDetection_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* obDist */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* obDirect */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* description */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* locationDetails */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dateTime */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* vertEvent */
};
asn_SEQUENCE_specifics_t asn_SPC_ObstacleDetection_specs_1 = {
	sizeof(struct ObstacleDetection),
	offsetof(struct ObstacleDetection, _asn_ctx),
	asn_MAP_ObstacleDetection_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_ObstacleDetection_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ObstacleDetection = {
	"ObstacleDetection",
	"ObstacleDetection",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_ObstacleDetection_tags_1,
	sizeof(asn_DEF_ObstacleDetection_tags_1)
		/sizeof(asn_DEF_ObstacleDetection_tags_1[0]), /* 1 */
	asn_DEF_ObstacleDetection_tags_1,	/* Same as above */
	sizeof(asn_DEF_ObstacleDetection_tags_1)
		/sizeof(asn_DEF_ObstacleDetection_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_ObstacleDetection_1,
	6,	/* Elements count */
	&asn_SPC_ObstacleDetection_specs_1	/* Additional specs */
};

