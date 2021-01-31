/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_LastVisitedCellInformation_H_
#define	_Ngap_LastVisitedCellInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_LastVisitedNGRANCellInformation.h"
#include "Ngap_LastVisitedEUTRANCellInformation.h"
#include "Ngap_LastVisitedUTRANCellInformation.h"
#include "Ngap_LastVisitedGERANCellInformation.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_LastVisitedCellInformation_PR {
	Ngap_LastVisitedCellInformation_PR_NOTHING,	/* No components present */
	Ngap_LastVisitedCellInformation_PR_nGRANCell,
	Ngap_LastVisitedCellInformation_PR_eUTRANCell,
	Ngap_LastVisitedCellInformation_PR_uTRANCell,
	Ngap_LastVisitedCellInformation_PR_gERANCell
	/* Extensions may appear below */
	
} Ngap_LastVisitedCellInformation_PR;

/* Ngap_LastVisitedCellInformation */
typedef struct Ngap_LastVisitedCellInformation {
	Ngap_LastVisitedCellInformation_PR present;
	union Ngap_LastVisitedCellInformation_u {
		Ngap_LastVisitedNGRANCellInformation_t	 nGRANCell;
		Ngap_LastVisitedEUTRANCellInformation_t	 eUTRANCell;
		Ngap_LastVisitedUTRANCellInformation_t	 uTRANCell;
		Ngap_LastVisitedGERANCellInformation_t	 gERANCell;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_LastVisitedCellInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_LastVisitedCellInformation;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_LastVisitedCellInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_LastVisitedCellInformation_1[4];
extern asn_per_constraints_t asn_PER_type_Ngap_LastVisitedCellInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_LastVisitedCellInformation_H_ */
#include <asn_internal.h>
