/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_Dynamic5QIDescriptor_H_
#define	_Ngap_Dynamic5QIDescriptor_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_PriorityLevelQos.h"
#include "Ngap_PacketDelayBudget.h"
#include "Ngap_PacketErrorRate.h"
#include "Ngap_FiveQI.h"
#include "Ngap_DelayCritical.h"
#include "Ngap_AveragingWindow.h"
#include "Ngap_MaximumDataBurstVolume.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_Dynamic5QIDescriptor */
typedef struct Ngap_Dynamic5QIDescriptor {
	Ngap_PriorityLevelQos_t	 priorityLevelQos;
	Ngap_PacketDelayBudget_t	 packetDelayBudget;
	Ngap_PacketErrorRate_t	 packetErrorRate;
	Ngap_FiveQI_t	*fiveQI;	/* OPTIONAL */
	Ngap_DelayCritical_t	*delayCritical;	/* OPTIONAL */
	Ngap_AveragingWindow_t	*averagingWindow;	/* OPTIONAL */
	Ngap_MaximumDataBurstVolume_t	*maximumDataBurstVolume;	/* OPTIONAL */
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_Dynamic5QIDescriptor_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_Dynamic5QIDescriptor;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_Dynamic5QIDescriptor_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_Dynamic5QIDescriptor_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_Dynamic5QIDescriptor_H_ */
#include <asn_internal.h>
