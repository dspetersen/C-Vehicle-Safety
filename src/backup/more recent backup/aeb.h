#ifndef AEB_H
#define AEB_H

#include <math.h>
#include "speedometer.h"
#include "nxt_interface.h"
#include "constants.h"
#include "eaeb.h"

typedef struct AEBStruct
{
    U8  activated;
    U8  distanceIndex;
    U32 lastTimeReadPath;
    U32 lastTimeReadDist;
    S32 distanceToObj1;
    S32 distanceToObj2;
    float distanceFromPath;
    float distances[SAMPLE_COUNT];
//    float distance;
} AEBStruct;
AEBStruct aeb;

void aebInitialise();

float getBrakeDistance ();

float getDistanceTravelled();

int updateDistanceFromPath();

float getDistanceToImpact();

void runAEB();

void addDistanceToArray(float item);

#endif
