/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "RSM"
 * 	found in "RSM.asn"
 */

#ifndef	_ParticipantData_H_
#define	_ParticipantData_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ParticipantType.h"
#include <NativeInteger.h>
#include "SourceType.h"
#include <OCTET_STRING.h>
#include "DSecond.h"
#include "PositionOffsetLLV.h"
#include "PositionConfidenceSet.h"
#include "TransmissionState.h"
#include "Speed.h"
#include "Heading.h"
#include "SteeringWheelAngle.h"
#include "VehicleSize.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MotionConfidenceSet;
struct AccelerationSet4Way;
struct VehicleClassification;

/* ParticipantData */
typedef struct ParticipantData {
	ParticipantType_t	 ptcType;
	long	 ptcId;
	SourceType_t	 source;
	OCTET_STRING_t	*id	/* OPTIONAL */;
	OCTET_STRING_t	*plateNo	/* OPTIONAL */;
	DSecond_t	 secMark;
	PositionOffsetLLV_t	 pos;
	PositionConfidenceSet_t	 accuracy;
	TransmissionState_t	*transmission	/* OPTIONAL */;
	Speed_t	 speed;
	Heading_t	 heading;
	SteeringWheelAngle_t	*angle	/* OPTIONAL */;
	struct MotionConfidenceSet	*motionCfd	/* OPTIONAL */;
	struct AccelerationSet4Way	*accelSet	/* OPTIONAL */;
	VehicleSize_t	 size;
	struct VehicleClassification	*vehicleClass	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ParticipantData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ParticipantData;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MotionConfidenceSet.h"
#include "AccelerationSet4Way.h"
#include "VehicleClassification.h"

#endif	/* _ParticipantData_H_ */
#include <asn_internal.h>
