/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCamDriver.cpp
*/
class zCamRayHelper rayHelper; // size: 0x1, address: 0x8076B9A8
float LENGTH_EPSILON; // size: 0x4, address: 0x806CBEC0
// signature: zCamDriverNS::zNearFarHitCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x800CC270 -> 0x800CC2C0
void zCamDriverNS::zNearFarHitCollector::addRayHit() {
}
// signature: zCamRayHelper::castRay(const xVec3 &, zCamRayHelper::rayInfo &)
// Range: 0x800976C0 -> 0x80097704
void zCamRayHelper::castRay(class rayInfo * result /* r31 */) {
}
// Range: 0x80097710 -> 0x80097C68
void zCamTargetHistory::add(class zCamTargetHistory * this /* r28 */, class xVec3 * targetLoc /* r29 */) {
    {
        // Range: 0x8009789C -> 0x80097C08
        // Local variables
        int index; // r30
        class xVec3 v1; // r1+0x48
        class xVec3 previousPoint; // r1+0x54
        float dist1; // f29

        {
            // Range: 0x800979F4 -> 0x80097C08
            // Local variables
            float dist2; // f0
            class xVec3 v2; // r1+0x3C

            {
                // Range: 0x80097B98 -> 0x80097C08
                // Local variables
                float hitDist; // r1+0x8
            }
        }
    }
}
// signature: zCamDriver::blend_targets(const zCamTarget **, int, xVec3 &, xVec3 &, xVec3 &)
// Range: 0x80097D50 -> 0x80097F2C
void zCamDriver::blend_targets() {
    // Local variables
    int ii; // r0
}
// Range: 0x80097F30 -> 0x80097F84
void zCamDriver::create(class zCamDriver * this /* r31 */) {
}
// Range: 0x80097F90 -> 0x80098120
void zCamDriver::start(class zCamDriver * this /* r30 */) {
}
// Range: 0x80098120 -> 0x800983F8
void zCamDriver::reset(class zCamDriver * this /* r30 */, class xVec3 * targetLoc /* r25 */, class zCamBasis * basis /* r31 */, class zCamRestConfig * restConfig /* r26 */) {
    {
        // Range: 0x8009817C -> 0x80098184
        // Local variables
        int ii; // r27
    }
}
// signature: zCamDriver::update(xScene &, float)
// Range: 0x80098410 -> 0x80098C10
void zCamDriver::update(class zCamDriver * this /* r27 */, float dt /* f31 */) {
    // Local variables
    bool isCheating; // r0
    bool teleported; // r29
    bool noBlend; // r1+0x10
    class rayInfo pivotRay; // r1+0x108
    class zCamBasis collisionBasis; // r1+0x1B8
    class zCamBasis collisionGoalBasis; // r1+0x188
    class rayInfo centerRay; // r1+0xEC
    bool isOccluded; // r3
    bool doJumpCut; // r28

    {
        // Range: 0x80098460 -> 0x800984CC
        // Local variables
        int ii; // r26
    }
    {
        // Range: 0x800985B0 -> 0x80098634
        // Local variables
        class xVec3 isectDir; // r1+0x80
        class xVec3 isectPoint; // r1+0x8C
    }
    {
        // Range: 0x8009869C -> 0x80098778
        // Local variables
        class rayInfo basisRay; // r1+0xD0

        {
            // Range: 0x800986D0 -> 0x80098778
            // Local variables
            class xVec3 isectDir; // r1+0x68
            class xVec3 isectPoint; // r1+0x74
        }
    }
    {
        // Range: 0x80098838 -> 0x80098974
        // Local variables
        class xVec3 occludeTarget; // r1+0x5C

        {
            // Range: 0x80098880 -> 0x80098968
            // Local variables
            class zCamBasis occludeGoalBasis; // r1+0x128
            class zCamBasis occludeBasis; // r1+0x158
        }
    }
    {
        // Range: 0x800989C4 -> 0x80098A24
        // Local variables
        float scale; // f0
        float vmax; // f3
    }
    {
        // Range: 0x80098A40 -> 0x80098A78
        // Local variables
        float vmax; // f3
    }

    // References
    // -> class zCamRayHelper rayHelper;
}
// signature: zCamDriver::update_input(float, const zCamBasis &, zCamRestConfig &, zCamVelocity &)
// Range: 0x80099120 -> 0x80099300
void zCamDriver::update_input() {
    // Local variables
    float mag; // f0
    class zCamVelocity vel; // r1+0x8

    {
        // Range: 0x80099150 -> 0x800991C4
        // Local variables
        float dist; // f0
    }
}
// signature: zCamDriver::update_goal(float, const zCamBasis &, const zCamRestConfig &, const zCamTarget **, int, const xVec3 &, const xVec3 &, zCamVelocity &, zCamBasis &)
// Range: 0x80099300 -> 0x80099530
void zCamDriver::update_goal(class zCamBasis * basis /* r28 */, class zCamRestConfig * restConfig /* r29 */, class zCamBasis * goalBasis /* r30 */) {
}
// signature: zCamDriver::apply_input(float, const zCamRestConfig &, zCamBasis &, zCamVelocity &)
// Range: 0x80099530 -> 0x800997A8
void zCamDriver::apply_input(class zCamDriver * this /* r28 */, float dt /* f31 */, class zCamRestConfig * restConfig /* r29 */, class zCamBasis * basis /* r30 */) {
    {
        // Range: 0x800995A4 -> 0x800996BC
        // Local variables
        float goalTheta; // f6
    }
}
// Range: 0x800997B0 -> 0x800999C4
void zCamDriver::apply_basis(class zCamDriver * this /* r30 */) {
    // Local variables
    class xVec3 heading; // r1+0x20
    float xzdist2; // f3

    {
        // Range: 0x80099894 -> 0x800999A4
        // Local variables
        float pitch; // f2
        float yaw; // f31
    }
}
// signature: zCamDriver::CastCameraRay(const xVec3 *, const xVec3 *, float &, float)
// Range: 0x800999E0 -> 0x80099C18
bool zCamDriver::CastCameraRay(float * nearDist /* r31 */, float minDistance /* f0 */) {
    // Local variables
    class hkVector4 rayFrom; // r1+0x30
    class hkVector4 rayTo; // r1+0x20
    class hkVector4 ray; // r1+0x10
    float rayLength; // f0
    class zNearFarHitCollector nearFarHitCollector; // r1+0x40

    {
        // Range: 0x80099AF4 -> 0x80099AF4
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x80099AF4 -> 0x80099AF4
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x80099B84 -> 0x80099B84
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x80099B84 -> 0x80099B84
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__Q212zCamDriverNS20zNearFarHitCollector;
    // -> float hkInfinity;
}
