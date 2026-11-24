/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zRunEntLaser.cpp
*/
float DEFAULT_SPEED; // size: 0x4, address: 0x80700838
float DEFAULT_LIFESPAN; // size: 0x4, address: 0x8070083C
float IMPACT_IMPULSE; // size: 0x4, address: 0x80700840
int KILL_DELAY_FRAMES; // size: 0x4, address: 0x80700844
// Range: 0x801AFCE0 -> 0x801B04A0
void zRunEntLaser::SetTargetPosPredicted(class zRunEntLaser * this /* r31 */, class xVec3 * targetPos /* r28 */, class xVec3 * targetVel /* r29 */, float timeToLaunch /* f30 */, class xVec3 * shootOffset /* r30 */, float maxPredictionTime /* f31 */) {
    // Local variables
    float targetSpeed2; // f0
    float targetSpeed; // f0
    float speedSum; // f26
    class xVec3 toDestination; // r1+0x5C
    float distance; // f0
    float predictedTime; // f6
    class xVec3 predictedPos; // r1+0x50

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisZ;
}
// signature: zRunEntLaser::SetTargetPos(const xVec3 *, xVec3 *)
// Range: 0x801B04A0 -> 0x801B06E8
void zRunEntLaser::SetTargetPos(class zRunEntLaser * this /* r30 */) {
    // Local variables
    class xVec3 targetDir; // r1+0x14

    {
        // Range: 0x801B04C4 -> 0x801B052C
        // Local variables
        class xVec3 targetPosWOffset; // r1+0x8
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisZ;
}
// signature: zRunEntLaser::SetTargetDir(const xVec3 *)
// Range: 0x801B06F0 -> 0x801B077C
void zRunEntLaser::SetTargetDir() {
    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zRunEntLaser::SetStartPos(const xVec3 *)
// Range: 0x801B0780 -> 0x801B07B0
void zRunEntLaser::SetStartPos() {
}
// signature: zRunEntLaser::SetLifeSpan(float)
// Range: 0x801B07B0 -> 0x801B07C0
void zRunEntLaser::SetLifeSpan() {
}
// signature: zRunEntLaser::AddToFilter(xBase *)
// Range: 0x801B07C0 -> 0x801B07E4
void zRunEntLaser::AddToFilter() {
}
// Range: 0x801B07F0 -> 0x801B0858
void zRunEntLaser::Initialize() {
    // References
    // -> float DEFAULT_LIFESPAN;
    // -> float DEFAULT_SPEED;
}
// Range: 0x801B0860 -> 0x801B087C
void zRunEntLaser::Exit() {
}
// Range: 0x801B0880 -> 0x801B0884
void zRunEntLaser::Deinitialize() {
}
// signature: zRunEntLaser::Setup(const zRuntimeEntityCreateInfo *)
// Range: 0x801B0890 -> 0x801B0898
void zRunEntLaser::Setup() {
}
// Range: 0x801B08A0 -> 0x801B08A4
void zRunEntLaser::Cleanup() {
}
// Range: 0x801B08B0 -> 0x801B08F8
void zRunEntLaser::Flush() {
}
// Range: 0x801B0900 -> 0x801B1580
bool zRunEntLaser::Update(class zRunEntLaser * this /* r30 */, float dt /* f28 */) {
    // Local variables
    float nextTime; // f31
    float nextTotalTime; // f30
    float actualDt; // f2
    class xMat4x3 curMat; // r1+0x230
    class xMat4x3 nextMat; // r1+0x1F0
    class xBase * base; // r1+0x14
    float hitFraction; // r1+0x10
    class xVec3 hitNormal; // r1+0x68

    {
        // Range: 0x801B0A44 -> 0x801B0AC0
        // Local variables
        class zRuntimeEntityFX * fx; // r20
    }
    {
        // Range: 0x801B0AF0 -> 0x801B14E0
        // Local variables
        bool reflect; // r20
        float actualHitTime; // f2
        float actualHitDist; // r31
        class xVec3 targetDist; // r1+0x5C

        {
            // Range: 0x801B0D0C -> 0x801B0D68
            // Local variables
            class xEnt * ent; // r0

            {
                // Range: 0x801B0D38 -> 0x801B0D68
                // Local variables
                class SurfaceGamePlay * surface; // r0
            }
        }
        {
            // Range: 0x801B0D68 -> 0x801B1044
            // Local variables
            class xVec3 reflectedDir; // r1+0x50
            class xMat4x3 newNextMat; // r1+0x1B0
            class zRuntimeEntityFX * fx; // r20
        }
        {
            // Range: 0x801B1044 -> 0x801B14E0
            // Local variables
            class xEnt * ent; // r31

            {
                // Range: 0x801B10C0 -> 0x801B11B4
                // Local variables
                class xMat4x3 hitMat; // r1+0x170
            }
            {
                // Range: 0x801B12C8 -> 0x801B1314
                // Local variables
                class zProjectile * proj; // r3
            }
            {
                // Range: 0x801B1314 -> 0x801B14C8
                // Local variables
                class hkpRigidBody * rb; // r31

                {
                    // Range: 0x801B1358 -> 0x801B1438
                    // Local variables
                    class hkVector4 impulseVec; // r1+0x40
                }
                {
                    // Range: 0x801B1438 -> 0x801B14C8
                    // Local variables
                    class hkpPropertyValue val; // r1+0x20
                }
            }
        }
    }

    // References
    // -> float IMPACT_IMPULSE;
    // -> class xVec3 m_Null;
    // -> class zGlobals globals;
    // -> class xVec3 m_UnitAxisY;
    // -> int KILL_DELAY_FRAMES;
}
// Range: 0x801B1580 -> 0x801B1780
void zRunEntLaser::Spawned(class zRunEntLaser * this /* r31 */) {
}
// signature: zRunEntLaser::Killed(bool)
// Range: 0x801B1780 -> 0x801B1788
void zRunEntLaser::Killed() {
}
// signature: zRunEntLaser::GetCurMatrix(xMat4x3 *)
// Range: 0x801B1790 -> 0x801B1850
void zRunEntLaser::GetCurMatrix() {
}
// signature: zRunEntLaserLOSChecker::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x801D9AC0 -> 0x801D9BC0
void zRunEntLaserLOSChecker::addRayHit() {
    // Local variables
    class hkpWorldObject * worldObject; // r0
    class xBase * base; // r8

    {
        // Range: 0x801D9B78 -> 0x801D9B8C
        // Local variables
        int i; // r0
    }
}
// Range: 0x801B1850 -> 0x801B1B58
bool zRunEntLaser::_CheckLineOfSight(class xVec3 * start /* r27 */, class xVec3 * end /* r28 */, class xBase * * outputHitObj /* r29 */, float * outputHitFraction /* r30 */, class xVec3 * outputNormal /* r31 */) {
    // Local variables
    class zRunEntLaserLOSChecker losChecker; // r1+0x80

    {
        // Range: 0x801B18A8 -> 0x801B18A8
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x801B19B0 -> 0x801B19B0
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x801B19B0 -> 0x801B19B0
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x801B1A5C -> 0x801B1A5C
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x801B1A5C -> 0x801B1A5C
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> class xVec3 g_O3;
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__22zRunEntLaserLOSChecker;
}
