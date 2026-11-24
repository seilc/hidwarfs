/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zRunEntLaser.cpp
*/
float DEFAULT_SPEED; // size: 0x4, address: 0x807B4F4C
float DEFAULT_LIFESPAN; // size: 0x4, address: 0x807B4F50
float IMPACT_IMPULSE; // size: 0x4, address: 0x807B4F54
int KILL_DELAY_FRAMES; // size: 0x4, address: 0x807B4F58
// Range: 0x80228EA0 -> 0x80228F08
void zRunEntLaser::Initialize() {
    // References
    // -> float DEFAULT_LIFESPAN;
    // -> float DEFAULT_SPEED;
}
// Range: 0x80228F10 -> 0x80228F2C
void zRunEntLaser::Exit() {
}
// Range: 0x80228F30 -> 0x80228F34
void zRunEntLaser::Deinitialize() {
}
// signature: zRunEntLaser::Setup(const zRuntimeEntityCreateInfo *)
// Range: 0x80228F40 -> 0x80228F48
void zRunEntLaser::Setup() {
}
// Range: 0x80228F50 -> 0x80228F54
void zRunEntLaser::Cleanup() {
}
// Range: 0x80228F60 -> 0x80229AC0
bool zRunEntLaser::Update(class zRunEntLaser * this /* r30 */, float dt /* f31 */) {
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
        // Range: 0x80229074 -> 0x802290EC
        // Local variables
        class zRuntimeEntityFX * fx; // r20
    }
    {
        // Range: 0x8022911C -> 0x80229A40
        // Local variables
        bool reflect; // r22
        float actualHitTime; // f2
        float actualHitDist; // r31
        class xVec3 targetDist; // r1+0x5C

        {
            // Range: 0x80229330 -> 0x802293A0
            // Local variables
            class xEnt * ent; // r0

            {
                // Range: 0x8022935C -> 0x802293A0
                // Local variables
                class SurfaceGamePlay * surface; // r0
            }
        }
        {
            // Range: 0x802293A0 -> 0x8022966C
            // Local variables
            class xVec3 reflectedDir; // r1+0x50
            class xMat4x3 newNextMat; // r1+0x1B0
            class zRuntimeEntityFX * fx; // r20
        }
        {
            // Range: 0x8022966C -> 0x80229A40
            // Local variables
            class xEnt * ent; // r3

            {
                // Range: 0x80229718 -> 0x8022980C
                // Local variables
                class xMat4x3 hitMat; // r1+0x170
            }
            {
                // Range: 0x80229880 -> 0x80229A28
                // Local variables
                class hkpRigidBody * rb; // r31

                {
                    // Range: 0x802298CC -> 0x8022999C
                    // Local variables
                    class hkVector4 impulseVec; // r1+0x40
                }
                {
                    // Range: 0x8022999C -> 0x80229A28
                    // Local variables
                    class hkpPropertyValue val; // r1+0x20
                }
            }
        }
    }

    // References
    // -> float IMPACT_IMPULSE;
    // -> class xVec3 m_Null;
    // -> unsigned int g_rttidParentTable[246];
    // -> class xVec3 m_UnitAxisY;
    // -> int KILL_DELAY_FRAMES;
}
// Range: 0x80229AC0 -> 0x80229B54
void zRunEntLaser::Spawned(class zRunEntLaser * this /* r31 */) {
}
// signature: zRunEntLaser::Killed(bool)
// Range: 0x80229B60 -> 0x80229C20
void zRunEntLaser::Killed(class zRunEntLaser * this /* r31 */) {
}
// signature: zRunEntLaser::GetCurMatrix(xMat4x3 *)
// Range: 0x80229C20 -> 0x80229CE0
void zRunEntLaser::GetCurMatrix() {
}
// signature: zRunEntLaserLOSChecker::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x80290670 -> 0x80290770
void zRunEntLaserLOSChecker::addRayHit() {
    // Local variables
    class hkpWorldObject * worldObject; // r0
    class xBase * base; // r8

    {
        // Range: 0x80290728 -> 0x8029073C
        // Local variables
        int i; // r0
    }
}
// Range: 0x80229CE0 -> 0x80229FE8
bool zRunEntLaser::_CheckLineOfSight(class xVec3 * start /* r27 */, class xVec3 * end /* r28 */, class xBase * * outputHitObj /* r29 */, float * outputHitFraction /* r30 */, class xVec3 * outputNormal /* r31 */) {
    // Local variables
    class zRunEntLaserLOSChecker losChecker; // r1+0x80

    {
        // Range: 0x80229D38 -> 0x80229D38
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x80229E40 -> 0x80229E40
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x80229E40 -> 0x80229E40
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x80229EEC -> 0x80229EEC
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x80229EEC -> 0x80229EEC
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> class xVec3 g_O3;
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__22zRunEntLaserLOSChecker;
}
