/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCamDriver.cpp
*/
class zCamRayHelper rayHelper; // size: 0x1, address: 0x8081BD58
// signature: zCamDriverNS::zNearFarHitCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x80154D90 -> 0x80154DE0
void zCamDriverNS::zNearFarHitCollector::addRayHit() {
}
// signature: zCamRayHelper::castRay(const xVec3 &, zCamRayHelper::rayInfo &)
// Range: 0x80107530 -> 0x80107574
void zCamRayHelper::castRay(class rayInfo & result /* r31 */) {
}
// Range: 0x80107580 -> 0x80107A90
void zCamTargetHistory::add(class zCamTargetHistory * this /* r30 */, class xVec3 & targetLoc /* r31 */) {
    {
        // Range: 0x801076DC -> 0x80107A60
        // Local variables
        int index; // r6
        class xVec3 v1; // r1+0x48
        class xVec3 previousPoint; // r1+0x54
        float dist1; // f5

        {
            // Range: 0x80107840 -> 0x80107A60
            // Local variables
            float dist2; // f0
            class xVec3 v2; // r1+0x3C

            {
                // Range: 0x801079EC -> 0x80107A60
                // Local variables
                float hitDist; // r1+0x8
            }
        }
    }
}
// signature: zCamDriver::blend_targets(const zCamTarget **, int, xVec3 &, xVec3 &, xVec3 &)
// Range: 0x80107B30 -> 0x80107D0C
void zCamDriver::blend_targets() {
    // Local variables
    int ii; // r0
}
// Range: 0x80107D10 -> 0x80107D64
void zCamDriver::create(class zCamDriver * this /* r31 */) {
}
// Range: 0x80107D70 -> 0x80107F28
void zCamDriver::start(class zCamDriver * this /* r30 */) {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80107F30 -> 0x8010822C
void zCamDriver::reset(class zCamDriver * this /* r30 */, class xVec3 & targetLoc /* r26 */, class zCamBasis & basis /* r31 */, class zCamRestConfig & restConfig /* r27 */) {
    {
        // Range: 0x80107F84 -> 0x80107F8C
        // Local variables
        int ii; // r29
    }
}
// signature: zCamDriver::update(xScene &, float)
// Range: 0x80108310 -> 0x80108B18
void zCamDriver::update(class zCamDriver * this /* r28 */, float dt /* f31 */) {
    // Local variables
    bool isCheating; // r0
    bool teleported; // r30
    bool noBlend; // r1+0x10
    class rayInfo pivotRay; // r1+0x108
    class zCamBasis collisionBasis; // r1+0x1B8
    class zCamBasis collisionGoalBasis; // r1+0x188
    class rayInfo centerRay; // r1+0xEC
    bool isOccluded; // r3
    bool doJumpCut; // r29

    {
        // Range: 0x80108358 -> 0x801083C4
        // Local variables
        int ii; // r27
    }
    {
        // Range: 0x801084A8 -> 0x80108530
        // Local variables
        class xVec3 isectDir; // r1+0x80
        class xVec3 isectPoint; // r1+0x8C
    }
    {
        // Range: 0x80108598 -> 0x80108678
        // Local variables
        class rayInfo basisRay; // r1+0xD0

        {
            // Range: 0x801085CC -> 0x80108678
            // Local variables
            class xVec3 isectDir; // r1+0x68
            class xVec3 isectPoint; // r1+0x74
        }
    }
    {
        // Range: 0x80108738 -> 0x80108874
        // Local variables
        class xVec3 occludeTarget; // r1+0x5C

        {
            // Range: 0x80108780 -> 0x80108868
            // Local variables
            class zCamBasis occludeGoalBasis; // r1+0x128
            class zCamBasis occludeBasis; // r1+0x158
        }
    }
    {
        // Range: 0x801088C8 -> 0x80108928
        // Local variables
        float scale; // f0
        float vmax; // f3
    }
    {
        // Range: 0x80108944 -> 0x8010897C
        // Local variables
        float vmax; // f3
    }

    // References
    // -> class zCamRayHelper rayHelper;
}
// signature: zCamDriver::update_input(float, const zCamBasis &, zCamRestConfig &, zCamVelocity &)
// Range: 0x801092F0 -> 0x801094F8
void zCamDriver::update_input() {
    // Local variables
    float mag; // f0
    class zCamVelocity vel; // r1+0x8

    {
        // Range: 0x801092F4 -> 0x80109394
        // Local variables
        float dist; // f0
    }
}
// signature: zCamDriver::update_goal(float, const zCamBasis &, const zCamRestConfig &, const zCamTarget **, int, const xVec3 &, const xVec3 &, zCamVelocity &, zCamBasis &)
// Range: 0x80109500 -> 0x80109708
void zCamDriver::update_goal(class zCamBasis & basis /* r29 */, class zCamRestConfig & restConfig /* r30 */, class zCamBasis & goalBasis /* r31 */) {
}
// signature: zCamDriver::apply_input(float, const zCamRestConfig &, zCamBasis &, zCamVelocity &)
// Range: 0x80109710 -> 0x801099B4
void zCamDriver::apply_input(class zCamDriver * this /* r29 */, float dt /* f31 */, class zCamRestConfig & restConfig /* r30 */, class zCamBasis & basis /* r31 */) {
    {
        // Range: 0x8010977C -> 0x801098C4
        // Local variables
        float goalTheta; // f6
    }
}
// Range: 0x801099C0 -> 0x80109BEC
void zCamDriver::apply_basis(class zCamDriver * this /* r31 */) {
    // Local variables
    class xVec3 heading; // r1+0x20
    float xzdist2; // f3

    {
        // Range: 0x80109A84 -> 0x80109BD0
        // Local variables
        float pitch; // f2
        float yaw; // f31
    }
}
// signature: zCamDriver::CastCameraRay(const xVec3 *, const xVec3 *, float &, float)
// Range: 0x80109C10 -> 0x80109E2C
bool zCamDriver::CastCameraRay(float & nearDist /* r31 */, float minDistance /* f0 */) {
    // Local variables
    class hkVector4 rayFrom; // r1+0x30
    class hkVector4 rayTo; // r1+0x20
    class hkVector4 ray; // r1+0x10
    float rayLength; // f0
    class zNearFarHitCollector nearFarHitCollector; // r1+0x40

    {
        // Range: 0x80109D0C -> 0x80109D0C
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x80109D0C -> 0x80109D0C
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x80109D9C -> 0x80109D9C
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x80109D9C -> 0x80109D9C
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__Q212zCamDriverNS20zNearFarHitCollector;
    // -> float hkInfinity;
}
