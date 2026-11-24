/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zRunEntLaser.cpp
*/
float DEFAULT_SPEED; // size: 0x4, address: 0x806C1DB4
float DEFAULT_LIFESPAN; // size: 0x4, address: 0x806C1DB8
float IMPACT_IMPULSE; // size: 0x4, address: 0x806C1DBC
int KILL_DELAY_FRAMES; // size: 0x4, address: 0x806C1DC0
// signature: zRunEntLaser::SetTargetDir(const xVec3 *)
// Range: 0x8012F0E0 -> 0x8012F154
void zRunEntLaser::SetTargetDir(class zRunEntLaser * this /* r31 */) {
    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x8012F160 -> 0x8012F1C8
void zRunEntLaser::Initialize() {
    // References
    // -> float DEFAULT_LIFESPAN;
    // -> float DEFAULT_SPEED;
}
// Range: 0x8012F1D0 -> 0x8012F1D8
void zRunEntLaser::Exit() {
}
// signature: zRunEntLaser::Setup(const zRuntimeEntityCreateInfo *)
// Range: 0x8012F1E0 -> 0x8012F1E8
void zRunEntLaser::Setup() {
}
// Range: 0x8012F1F0 -> 0x8012F694
bool zRunEntLaser::Update(class zRunEntLaser * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float nextTime; // f31
    float nextTotalTime; // f30
    float actualDt; // f0
    class xMat4x3 curMat; // r1+0x160
    class xMat4x3 nextMat; // r1+0x120
    class xBase * base; // r1+0x14
    float hitFraction; // r1+0x10
    class xVec3 hitNormal; // r1+0x58

    {
        // Range: 0x8012F31C -> 0x8012F640
        // Local variables
        bool reflect; // r28
        float actualHitTime; // f3
        float actualHitDist; // r31
        class xVec3 targetDist; // r1+0x4C

        {
            // Range: 0x8012F3A0 -> 0x8012F404
            {
                // Range: 0x8012F3D0 -> 0x8012F404
                // Local variables
                class SurfaceGamePlay * surface; // r0
            }
        }
        {
            // Range: 0x8012F404 -> 0x8012F484
            // Local variables
            class xVec3 reflectedDir; // r1+0x40
            class xMat4x3 newNextMat; // r1+0xE0
        }
        {
            // Range: 0x8012F484 -> 0x8012F640
            // Local variables
            class xEnt * ent; // r28

            {
                // Range: 0x8012F4C0 -> 0x8012F50C
                // Local variables
                class xMat4x3 hitMat; // r1+0xA0
            }
            {
                // Range: 0x8012F554 -> 0x8012F628
                // Local variables
                class hkpRigidBody * rb; // r28

                {
                    // Range: 0x8012F564 -> 0x8012F5DC
                    // Local variables
                    class hkVector4 impulseVec; // r1+0x30
                }
                {
                    // Range: 0x8012F5DC -> 0x8012F628
                    // Local variables
                    class hkpPropertyValue val; // r1+0x20
                }
            }
        }
    }

    // References
    // -> float IMPACT_IMPULSE;
    // -> class xVec3 m_Null;
    // -> int KILL_DELAY_FRAMES;
}
// Range: 0x8012F6E0 -> 0x8012F734
void zRunEntLaser::Spawned(class zRunEntLaser * this /* r31 */) {
}
// signature: zRunEntLaser::Killed(bool)
// Range: 0x8012F740 -> 0x8012F748
void zRunEntLaser::Killed() {
}
// signature: zRunEntLaser::GetCurMatrix(xMat4x3 *)
// Range: 0x8012F750 -> 0x8012F758
void zRunEntLaser::GetCurMatrix() {
}
// Range: 0x8012F760 -> 0x8012F7CC
void zRunEntLaser::_GetMatrix(class zRunEntLaser * this /* r30 */, class xMat4x3 * mat /* r31 */, float time /* f31 */) {
}
// Range: 0x8012F7D0 -> 0x8012F868
void zRunEntLaser::_GetReflection(class xVec3 * targetDir /* r29 */, class xVec3 * normalVec /* r30 */, class xVec3 * reflectedDir /* r31 */) {
    // Local variables
    float scaler; // f4
}
// Range: 0x8012F870 -> 0x8012F8F0
class xEnt * zRunEntLaser::_GetEntity(class xBase * base /* r30 */) {
    // Local variables
    class xEnt * ent; // r31
}
// signature: zRunEntLaser::_GetRigidBody(const xBase *)
// Range: 0x8012F8F0 -> 0x8012F930
class hkpRigidBody * zRunEntLaser::_GetRigidBody() {
    // Local variables
    class hkpRigidBody * rb; // r3
}
// signature: zRunEntLaserLOSChecker::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x80188D90 -> 0x80188E84
void zRunEntLaserLOSChecker::addRayHit(class zRunEntLaserLOSChecker * this /* r29 */, class hkpShapeRayCastCollectorOutput & hitInfo /* r30 */) {
    // Local variables
    class hkpCollidable * collidable; // r0
    class hkpWorldObject * worldObject; // r3
    class xBase * base; // r0

    {
        // Range: 0x80188E0C -> 0x80188E3C
        // Local variables
        int i; // r5
    }
}
// Range: 0x8012F930 -> 0x8012FB60
bool zRunEntLaser::_CheckLineOfSight(class xVec3 * start /* r27 */, class xVec3 * end /* r28 */, class xBase * * outputHitObj /* r29 */, float * outputHitFraction /* r30 */, class xVec3 * outputNormal /* r31 */) {
    // Local variables
    class zRunEntLaserLOSChecker losChecker; // r1+0x40

    {
        // Range: 0x8012F988 -> 0x8012F9D8
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x8012FA08 -> 0x8012FA08
        {
            // Range: 0x8012FA08 -> 0x8012FA08
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8012FA94 -> 0x8012FA94
        {
            // Range: 0x8012FA94 -> 0x8012FA94
            // Local variables
            class TimerCommand * h; // r4
        }
    }

    // References
    // -> class xVec3 g_O3;
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__22zRunEntLaserLOSChecker;
}
// signature: zRunEntLaser::_IsInsideHavokWorld(const xVec3 *, const xVec3 *)
// Range: 0x8012FB60 -> 0x8012FC3C
bool zRunEntLaser::_IsInsideHavokWorld(class xVec3 * end /* r31 */) {
    // Local variables
    class xVec3 minWorld; // r1+0x3C
    class xVec3 maxWorld; // r1+0x30
    class hkVector4 minWorldhk; // r1+0x20
    class hkVector4 maxWorldhk; // r1+0x10
}
