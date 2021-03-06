/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_RainSensor_H_
#define	_RainSensor_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RainSensor {
	RainSensor_none	= 0,
	RainSensor_lightMist	= 1,
	RainSensor_heavyMist	= 2,
	RainSensor_lightRainOrDrizzle	= 3,
	RainSensor_rain	= 4,
	RainSensor_moderateRain	= 5,
	RainSensor_heavyRain	= 6,
	RainSensor_heavyDownpour	= 7
} e_RainSensor;

/* RainSensor */
typedef long	 RainSensor_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RainSensor;
asn_struct_free_f RainSensor_free;
asn_struct_print_f RainSensor_print;
asn_constr_check_f RainSensor_constraint;
ber_type_decoder_f RainSensor_decode_ber;
der_type_encoder_f RainSensor_encode_der;
xer_type_decoder_f RainSensor_decode_xer;
xer_type_encoder_f RainSensor_encode_xer;
per_type_decoder_f RainSensor_decode_uper;
per_type_encoder_f RainSensor_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RainSensor_H_ */
#include "asn_internal.h"
