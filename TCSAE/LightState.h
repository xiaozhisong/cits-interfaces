/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "SPATIntersectionState"
 * 	found in "SPATIntersectionState.asn"
 */

#ifndef	_LightState_H_
#define	_LightState_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LightState {
	LightState_unavailable	= 0,
	LightState_dark	= 1,
	LightState_stop_Then_Proceed	= 2,
	LightState_stop_And_Remain	= 3,
	LightState_pre_Movement	= 4,
	LightState_permissive_Movement_Allowed	= 5,
	LightState_protected_Movement_Allowed	= 6,
	LightState_intersection_clearance	= 7,
	LightState_caution_Conflicting_Traffic	= 8
} e_LightState;

/* LightState */
typedef ENUMERATED_t	 LightState_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LightState;
asn_struct_free_f LightState_free;
asn_struct_print_f LightState_print;
asn_constr_check_f LightState_constraint;
ber_type_decoder_f LightState_decode_ber;
der_type_encoder_f LightState_encode_der;
xer_type_decoder_f LightState_decode_xer;
xer_type_encoder_f LightState_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _LightState_H_ */
#include <asn_internal.h>
