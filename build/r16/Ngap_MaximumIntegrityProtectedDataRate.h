/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_MaximumIntegrityProtectedDataRate_H_
#define	_Ngap_MaximumIntegrityProtectedDataRate_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_MaximumIntegrityProtectedDataRate {
	Ngap_MaximumIntegrityProtectedDataRate_bitrate64kbs	= 0,
	Ngap_MaximumIntegrityProtectedDataRate_maximum_UE_rate	= 1
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_MaximumIntegrityProtectedDataRate;

/* Ngap_MaximumIntegrityProtectedDataRate */
typedef long	 Ngap_MaximumIntegrityProtectedDataRate_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_MaximumIntegrityProtectedDataRate_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_MaximumIntegrityProtectedDataRate;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_MaximumIntegrityProtectedDataRate_specs_1;
asn_struct_free_f Ngap_MaximumIntegrityProtectedDataRate_free;
asn_struct_print_f Ngap_MaximumIntegrityProtectedDataRate_print;
asn_constr_check_f Ngap_MaximumIntegrityProtectedDataRate_constraint;
ber_type_decoder_f Ngap_MaximumIntegrityProtectedDataRate_decode_ber;
der_type_encoder_f Ngap_MaximumIntegrityProtectedDataRate_encode_der;
xer_type_decoder_f Ngap_MaximumIntegrityProtectedDataRate_decode_xer;
xer_type_encoder_f Ngap_MaximumIntegrityProtectedDataRate_encode_xer;
oer_type_decoder_f Ngap_MaximumIntegrityProtectedDataRate_decode_oer;
oer_type_encoder_f Ngap_MaximumIntegrityProtectedDataRate_encode_oer;
per_type_decoder_f Ngap_MaximumIntegrityProtectedDataRate_decode_uper;
per_type_encoder_f Ngap_MaximumIntegrityProtectedDataRate_encode_uper;
per_type_decoder_f Ngap_MaximumIntegrityProtectedDataRate_decode_aper;
per_type_encoder_f Ngap_MaximumIntegrityProtectedDataRate_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_MaximumIntegrityProtectedDataRate_H_ */
#include <asn_internal.h>
