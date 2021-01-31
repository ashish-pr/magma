/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_ReflectiveQosAttribute_H_
#define	_Ngap_ReflectiveQosAttribute_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_ReflectiveQosAttribute {
	Ngap_ReflectiveQosAttribute_subject_to	= 0
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_ReflectiveQosAttribute;

/* Ngap_ReflectiveQosAttribute */
typedef long	 Ngap_ReflectiveQosAttribute_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_ReflectiveQosAttribute_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ReflectiveQosAttribute;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_ReflectiveQosAttribute_specs_1;
asn_struct_free_f Ngap_ReflectiveQosAttribute_free;
asn_struct_print_f Ngap_ReflectiveQosAttribute_print;
asn_constr_check_f Ngap_ReflectiveQosAttribute_constraint;
ber_type_decoder_f Ngap_ReflectiveQosAttribute_decode_ber;
der_type_encoder_f Ngap_ReflectiveQosAttribute_encode_der;
xer_type_decoder_f Ngap_ReflectiveQosAttribute_decode_xer;
xer_type_encoder_f Ngap_ReflectiveQosAttribute_encode_xer;
oer_type_decoder_f Ngap_ReflectiveQosAttribute_decode_oer;
oer_type_encoder_f Ngap_ReflectiveQosAttribute_encode_oer;
per_type_decoder_f Ngap_ReflectiveQosAttribute_decode_uper;
per_type_encoder_f Ngap_ReflectiveQosAttribute_encode_uper;
per_type_decoder_f Ngap_ReflectiveQosAttribute_decode_aper;
per_type_encoder_f Ngap_ReflectiveQosAttribute_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_ReflectiveQosAttribute_H_ */
#include <asn_internal.h>
