/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "VehBrake"
 * 	found in "VehBrake.asn"
 */

#ifndef	_BrakePedalStatus_H_
#define	_BrakePedalStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BrakePedalStatus {
	BrakePedalStatus_unavailable	= 0,
	BrakePedalStatus_off	= 1,
	BrakePedalStatus_on	= 2
} e_BrakePedalStatus;

/* BrakePedalStatus */
typedef ENUMERATED_t	 BrakePedalStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BrakePedalStatus;
asn_struct_free_f BrakePedalStatus_free;
asn_struct_print_f BrakePedalStatus_print;
asn_constr_check_f BrakePedalStatus_constraint;
ber_type_decoder_f BrakePedalStatus_decode_ber;
der_type_encoder_f BrakePedalStatus_encode_der;
xer_type_decoder_f BrakePedalStatus_decode_xer;
xer_type_encoder_f BrakePedalStatus_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _BrakePedalStatus_H_ */
#include <asn_internal.h>
