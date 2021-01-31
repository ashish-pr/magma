/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_CauseTransport_H_
#define	_Ngap_CauseTransport_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_CauseTransport {
	Ngap_CauseTransport_transport_resource_unavailable	= 0,
	Ngap_CauseTransport_unspecified	= 1
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_CauseTransport;

/* Ngap_CauseTransport */
typedef long	 Ngap_CauseTransport_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_CauseTransport_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_CauseTransport;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_CauseTransport_specs_1;
asn_struct_free_f Ngap_CauseTransport_free;
asn_struct_print_f Ngap_CauseTransport_print;
asn_constr_check_f Ngap_CauseTransport_constraint;
ber_type_decoder_f Ngap_CauseTransport_decode_ber;
der_type_encoder_f Ngap_CauseTransport_encode_der;
xer_type_decoder_f Ngap_CauseTransport_decode_xer;
xer_type_encoder_f Ngap_CauseTransport_encode_xer;
oer_type_decoder_f Ngap_CauseTransport_decode_oer;
oer_type_encoder_f Ngap_CauseTransport_encode_oer;
per_type_decoder_f Ngap_CauseTransport_decode_uper;
per_type_encoder_f Ngap_CauseTransport_encode_uper;
per_type_decoder_f Ngap_CauseTransport_decode_aper;
per_type_encoder_f Ngap_CauseTransport_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_CauseTransport_H_ */
#include <asn_internal.h>
