/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zLaser.cpp
*/
// signature: zLaser::Init(xEnt *, zTarget *)
// Range: 0x800E50A0 -> 0x800E5188
void zLaser::Init() {
}
// Range: 0x800E51A0 -> 0x800E5224
void zLaser::Update(class zLaser * this /* r31 */, float dt /* f31 */) {
}
// signature: zLaser::EndUpdate(float)
// Range: 0x800E5230 -> 0x800E5234
void zLaser::EndUpdate() {
}
// Range: 0x800E5240 -> 0x800E5254
void zLaser::Exit() {
}
// Range: 0x800E5260 -> 0x800E5458
void zLaser::Shoot(class zLaser * this /* r27 */, class xVec3 * optTargetDir /* r28 */) {
    // Local variables
    class zRunEntLaser * laser; // r29
    class xVec3 laserStartPos; // r1+0x30

    {
        // Range: 0x800E52F4 -> 0x800E530C
        // Local variables
        int i; // r31
    }
    {
        // Range: 0x800E5344 -> 0x800E53B4
        // Local variables
        class xVec3 centerPos; // r1+0x24
    }
    {
        // Range: 0x800E53E8 -> 0x800E5430
        // Local variables
        class xVec3 targetDirection; // r1+0x18
        float toHitDistance; // r1+0x8
    }
}
// Range: 0x800E5480 -> 0x800E5498
void zLaser::Upgrade() {
}
// Range: 0x800E54A0 -> 0x800E54AC
void zLaser::PermanentlyUpgrade() {
}
// Range: 0x800E54B0 -> 0x800E54D0
class xVec3 zLaser::GetStartPos() {
}
// signature: zLaser::CheckLOS(const xBase *, const xVec3 &, float)
// Range: 0x800E54D0 -> 0x800E54E4
bool zLaser::CheckLOS(class xBase * targetBase /* r0 */) {
}
// Range: 0x800E54F0 -> 0x800E5518
class LaserInfo * zLaser::_GetCurrentLI() {
}
// signature: zLaser::_GetEntCenterFromAABB(const xEnt *, xVec3 &)
// Range: 0x800E5520 -> 0x800E5748
void zLaser::_GetEntCenterFromAABB(class xVec3 * center /* r30 */) {
    {
        // Range: 0x800E5534 -> 0x800E5620
        // Local variables
        class hkVector4 aabbCenter; // r1+0x20
        class hkAabb aabb; // r1+0x50
        class hkTransform xform; // r1+0xB0
    }
    {
        // Range: 0x800E5624 -> 0x800E5710
        // Local variables
        class hkVector4 aabbCenter; // r1+0x10
        class hkAabb aabb; // r1+0x30
        class hkTransform xform; // r1+0x70
        class zNPCEntity * npcEnt; // r0
    }
}
// signature: zLaserLOSChecker::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x80151FE0 -> 0x801520B0
void zLaserLOSChecker::addRayHit() {
    // Local variables
    class hkpWorldObject * worldObject; // r0
    class xBase * base; // r8
}
// Range: 0x800E5760 -> 0x800E5A00
bool zLaser::_CheckLOS(class xBase * startBase /* r28 */, class xBase * targetBase /* r29 */, class xVec3 * targetPos /* r31 */, float minDist /* f31 */) {
    // Local variables
    class xVec3 startPos; // r1+0x5C
    float minHitFraction; // f1
    class zLaserLOSChecker losChecker; // r1+0x68

    {
        // Range: 0x800E5880 -> 0x800E5880
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x800E5880 -> 0x800E5880
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x800E594C -> 0x800E594C
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x800E594C -> 0x800E594C
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__16zLaserLOSChecker;
}
// signature: zLaser::_CheckMultipleLOS(const hkVector4 &, const hkVector4 *, int, zLaser::zLaserLOSCombinedCollector *, unsigned int, const hkpCollisionFilter *)
// Range: 0x800E5A80 -> 0x800E5D24
void zLaser::_CheckMultipleLOS(class hkVector4 * startPos /* r25 */, class hkVector4 * target_array /* r26 */, int rays /* r27 */, class zLaserLOSCombinedCollector * collector_array /* r28 */, class hkpCollisionFilter * filter /* r29 */) {
    // Local variables
    int inputSize; // r30
    int aabbSize; // r0
    char * cache; // r31
    class hkpWorldRayCastInput * dynInputs; // r0
    char * aabbCache; // r30
    class hkAabb aabb; // r1+0x10
    class hkpWorldRayCaster rayCaster; // r1+0x30
    int stride; // r0
    bool earlyOut; // r24

    {
        // Range: 0x800E5B48 -> 0x800E5BF0
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x800E5C30 -> 0x800E5CC0
        // Local variables
        int offset; // r23

        {
            // Range: 0x800E5C30 -> 0x800E5CC0
            // Local variables
            int iterationRays; // r22

            {
                // Range: 0x800E5C84 -> 0x800E5CB8
                // Local variables
                int i; // r4
            }
        }
    }

    // References
    // -> struct {} __vt__17hkpWorldRayCaster;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zLaser::CheckMultipleLOS(zLaser::LOSInfo *, int, int *, bool)
// Range: 0x800E5D30 -> 0x800E60AC
bool zLaser::CheckMultipleLOS(class zLaser * this /* r25 */, class LOSInfo * info /* r26 */, int rays /* r27 */, int * hitValue /* r28 */) {
    // Local variables
    class hkVector4 target_array[1000]; // r31+0xA0
    class zLaserLOSCombinedCollector collector_array[1000]; // r31-0x7CF0
    class hkVector4 startPos; // r31+0x90
    bool ret; // r23

    {
        // Range: 0x800E5E54 -> 0x800E5F58
        // Local variables
        int i; // r0

        {
            // Range: 0x800E5E54 -> 0x800E5F58
            // Local variables
            float minHitFraction; // f0
        }
    }
    {
        // Range: 0x800E5F64 -> 0x800E5F64
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x800E5F64 -> 0x800E5F64
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x800E5FDC -> 0x800E5FDC
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x800E5FDC -> 0x800E5FDC
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x800E6034 -> 0x800E6064
        // Local variables
        int i; // r5
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> float hkInfinity;
}
