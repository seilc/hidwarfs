/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCamDriver.cpp
*/
class zCamRayHelper rayHelper; // size: 0x1, address: 0x80732540
// signature: zCamDriverNS::zNearFarHitCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x800AD7C0 -> 0x800AD8A0
void zCamDriverNS::zNearFarHitCollector::addRayHit(class zNearFarHitCollector * this /* r29 */, class hkpShapeRayCastCollectorOutput & hitInfo /* r30 */) {
    {
        // Range: 0x800AD7D4 -> 0x800AD888
        // Local variables
        class hkpRigidBody * tmprb; // r0
        bool ignore; // r31

        {
            // Range: 0x800AD7FC -> 0x800AD840
            // Local variables
            class xBase * obj; // r3
        }
    }
}
// signature: zCamTargetHistory::reset(const xVec3 &)
// Range: 0x8008C410 -> 0x8008C450
void zCamTargetHistory::reset(class zCamTargetHistory * this /* r31 */) {
}
// Range: 0x8008C450 -> 0x8008C4C0
void zCamTargetHistory::addLastKnownToTable(class zCamTargetHistory * this /* r31 */) {
}
// Range: 0x8008C4C0 -> 0x8008C6B4
void zCamTargetHistory::add(class zCamTargetHistory * this /* r29 */, class xVec3 & targetLoc /* r30 */) {
    {
        // Range: 0x8008C52C -> 0x8008C678
        // Local variables
        int index; // r31
        class xVec3 v1; // r1+0x30
        class xVec3 previousPoint; // r1+0x3C
        float dist1; // f29

        {
            // Range: 0x8008C5C4 -> 0x8008C678
            // Local variables
            float dist2; // f0
            class xVec3 v2; // r1+0x24

            {
                // Range: 0x8008C650 -> 0x8008C678
                // Local variables
                float hitDist; // r1+0x8
            }
        }
    }
}
// signature: zCamTargetHistory::get(int) const
// Range: 0x8008C710 -> 0x8008C760
class xVec3 & zCamTargetHistory::get() const {
}
// signature: zCamDriver::RemoveTarget(zCamTarget *)
// Range: 0x8008C760 -> 0x8008C7B0
void zCamDriver::RemoveTarget() {
    {
        // Range: 0x8008C764 -> 0x8008C7AC
        // Local variables
        int ii; // r0
    }
}
// Range: 0x8008C7B0 -> 0x8008C8DC
void zCamDriver::blend_targets(class zCamTarget * * targets /* r25 */, int targetCount /* r26 */, class xVec3 & loc /* r27 */, class xVec3 & loc_unrooted /* r28 */, class xVec3 & loc_motion /* r29 */) {
    // Local variables
    int ii; // r30
}
// Range: 0x8008C8E0 -> 0x8008C934
void zCamDriver::create(class zCamDriver * this /* r31 */) {
}
// signature: zCamDriver::init(xCamGroup &)
// Range: 0x8008C940 -> 0x8008CA0C
void zCamDriver::init(class zCamDriver * this /* r29 */) {
    // Local variables
    int playerIndex; // r30

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8008CA80 -> 0x8008CAB8
void zCamDriver::start(class zCamDriver * this /* r31 */) {
}
// Range: 0x8008CAC0 -> 0x8008CCE4
void zCamDriver::reset(class zCamDriver * this /* r30 */, class xVec3 & targetLoc /* r26 */, class zCamBasis & basis /* r31 */, class zCamRestConfig & restConfig /* r27 */) {
    {
        // Range: 0x8008CAF0 -> 0x8008CB28
        // Local variables
        int ii; // r28
    }
}
// signature: zCamDriver::update(xScene &, float)
// Range: 0x8008CDD0 -> 0x8008D774
void zCamDriver::update(class zCamDriver * this /* r28 */, float dt /* f29 */) {
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
        // Range: 0x8008CE24 -> 0x8008CE94
        // Local variables
        int ii; // r27
    }
    {
        // Range: 0x8008CFA4 -> 0x8008D02C
        // Local variables
        class xVec3 isectDir; // r1+0x80
        class xVec3 isectPoint; // r1+0x8C
    }
    {
        // Range: 0x8008D0A0 -> 0x8008D19C
        // Local variables
        class rayInfo basisRay; // r1+0xD0

        {
            // Range: 0x8008D0E8 -> 0x8008D19C
            // Local variables
            class xVec3 isectDir; // r1+0x68
            class xVec3 isectPoint; // r1+0x74
        }
    }
    {
        // Range: 0x8008D268 -> 0x8008D3A0
        // Local variables
        class xVec3 occludeTarget; // r1+0x5C

        {
            // Range: 0x8008D2B0 -> 0x8008D394
            // Local variables
            class zCamBasis occludeGoalBasis; // r1+0x128
            class zCamBasis occludeBasis; // r1+0x158
        }
    }
    {
        // Range: 0x8008D418 -> 0x8008D4C8
        // Local variables
        float scale_y; // f0
        float scale_xz; // f2
        float vmax_y; // f30
        float vmax_xz; // f3
    }
    {
        // Range: 0x8008D4C8 -> 0x8008D51C
        // Local variables
        float scale; // f0
        float vmax; // f3
    }
    {
        // Range: 0x8008D54C -> 0x8008D5A0
        // Local variables
        float vmax_y; // f30
        float vmax_xz; // f3
    }
    {
        // Range: 0x8008D5A0 -> 0x8008D5C8
        // Local variables
        float vmax; // f3
    }

    // References
    // -> static float sCamTweakFOVCur;
    // -> static class xVec3 sCamTweakPos;
}
// signature: zCamDriver::update_input(float, const zCamBasis &, zCamRestConfig &, zCamVelocity &)
// Range: 0x8008DBF0 -> 0x8008DD9C
void zCamDriver::update_input(class zCamDriver * this /* r29 */, float dt /* f31 */, class zCamBasis & basis /* r30 */, class zCamVelocity & inputVel /* r31 */) {
    // Local variables
    float mag; // f0

    {
        // Range: 0x8008DC54 -> 0x8008DD7C
        // Local variables
        class zCamVelocity vel; // r1+0x8

        {
            // Range: 0x8008DC5C -> 0x8008DCE8
            // Local variables
            float dist; // f0
        }
    }

    // References
    // -> bool tweakChanged;
}
// signature: zCamDriver::update_goal(float, const zCamBasis &, const zCamRestConfig &, const zCamTarget **, int, const xVec3 &, const xVec3 &, zCamVelocity &, zCamBasis &)
// Range: 0x8008DDA0 -> 0x8008DE44
void zCamDriver::update_goal(class zCamDriver * this /* r28 */, class zCamBasis & basis /* r29 */, class zCamRestConfig & restConfig /* r30 */, class zCamBasis & goalBasis /* r31 */) {
}
// signature: zCamDriver::apply_input(float, const zCamRestConfig &, zCamBasis &, zCamVelocity &)
// Range: 0x8008DE50 -> 0x8008DF60
void zCamDriver::apply_input(class zCamDriver * this /* r29 */, float dt /* f31 */, class zCamRestConfig & restConfig /* r30 */, class zCamBasis & basis /* r31 */) {
    {
        // Range: 0x8008DEA0 -> 0x8008DF14
        // Local variables
        float goalTheta; // f1
    }
}
// Range: 0x8008DF60 -> 0x8008E0B0
void zCamDriver::apply_basis(class zCamDriver * this /* r30 */) {
    // Local variables
    class xVec3 heading; // r1+0x8
    float xzdist2; // f1

    {
        // Range: 0x8008DFBC -> 0x8008E090
        // Local variables
        float pitch; // f2
        float yaw; // f31
    }
}
// signature: zCamDriver::CastCameraRay(const xVec3 *, const xVec3 *, float &, float)
// Range: 0x8008E130 -> 0x8008E2F0
bool zCamDriver::CastCameraRay(class xVec3 * end /* r29 */, float & nearDist /* r31 */, float minDistance /* f30 */) {
    // Local variables
    class hkVector4 rayFrom; // r1+0x30
    class hkVector4 rayTo; // r1+0x20
    class hkVector4 ray; // r1+0x10
    float rayLength; // f0
    class zNearFarHitCollector nearFarHitCollector; // r1+0x40

    {
        // Range: 0x8008E1F0 -> 0x8008E1F0
        {
            // Range: 0x8008E1F0 -> 0x8008E1F0
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008E268 -> 0x8008E268
        {
            // Range: 0x8008E268 -> 0x8008E268
            // Local variables
            class TimerCommand * h; // r4
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__Q212zCamDriverNS20zNearFarHitCollector;
}
