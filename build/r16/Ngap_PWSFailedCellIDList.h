/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_PWSFailedCellIDList_H_
#define	_Ngap_PWSFailedCellIDList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_EUTRA-CGIList.h"
#include "Ngap_NR-CGIList.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_PWSFailedCellIDList_PR {
	Ngap_PWSFailedCellIDList_PR_NOTHING,	/* No components present */
	Ngap_PWSFailedCellIDList_PR_eUTRA_CGI_PWSFailedList,
	Ngap_PWSFailedCellIDList_PR_nR_CGI_PWSFailedList
	/* Extensions may appear below */
	
} Ngap_PWSFailedCellIDList_PR;

/* Ngap_PWSFailedCellIDList */
typedef struct Ngap_PWSFailedCellIDList {
	Ngap_PWSFailedCellIDList_PR present;
	union Ngap_PWSFailedCellIDList_u {
		Ngap_EUTRA_CGIList_t	 eUTRA_CGI_PWSFailedList;
		Ngap_NR_CGIList_t	 nR_CGI_PWSFailedList;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_PWSFailedCellIDList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_PWSFailedCellIDList;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_PWSFailedCellIDList_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_PWSFailedCellIDList_1[2];
extern asn_per_constraints_t asn_PER_type_Ngap_PWSFailedCellIDList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_PWSFailedCellIDList_H_ */
#include <asn_internal.h>
