/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBiplanePlayerActions.cpp
*/
static unsigned int pipperShotCount; // size: 0x4, address: 0x80818464
static float pipperTimeIndex; // size: 0x4, address: 0x80818468
static bool pipperFireLeft; // size: 0x1, address: 0x807A2F80
static unsigned int shotCount; // size: 0x4, address: 0x8081846C
static float timeIndex; // size: 0x4, address: 0x80818470
static bool fireLeft; // size: 0x1, address: 0x807A2F81
// Range: 0x800A2BD0 -> 0x800A2E10
void zBiplanePlayerFlyAndShoot::AddStates(class zBiplanePlayerFlyAndShoot * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x800A2E10 -> 0x800A2E78
void zBiplanePlayerFlyAndShoot::AddActionTransitions(class zBiplanePlayerFlyAndShoot * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zBiplanePlayerFlyAndShoot::AddInternalTransitions(xAnimTable *)
// Range: 0x800A2E80 -> 0x800A2E84
void zBiplanePlayerFlyAndShoot::AddInternalTransitions() {
}
// signature: zBiplanePlayerFlyAndShoot::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A2E90 -> 0x800A3060
void zBiplanePlayerFlyAndShoot::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x800A34E0 -> 0x800A3788
void zBiplanePlayerFlyAndShoot::Reset(class zBiplanePlayerFlyAndShoot * this /* r31 */) {
}
// Range: 0x800A3790 -> 0x800A3968
void zBiplanePlayerFlyAndShoot::Setup(class zBiplanePlayerFlyAndShoot * this /* r29 */) {
}
// Range: 0x800A3970 -> 0x800A3CA4
void zBiplanePlayerFlyAndShoot::Begin(class zBiplanePlayerFlyAndShoot * this /* r30 */) {
    // Local variables
    class zBiplanePlayer * bPlayer; // r28
    class EventActionOneInt params; // r1+0x14

    {
        // Range: 0x800A3C24 -> 0x800A3C84
        // Local variables
        float params[4]; // r1+0x18
    }

    // References
    // -> static class xGroup * biplaneDialogGroup[9];
}
// Range: 0x800A3CB0 -> 0x800A3F6C
void zBiplanePlayerFlyAndShoot::End(class zBiplanePlayerFlyAndShoot * this /* r30 */) {
    // Local variables
    unsigned int oldMode; // r31

    {
        // Range: 0x800A3D28 -> 0x800A3D40
        // Local variables
        int i; // r28
    }
}
// Range: 0x800A3F70 -> 0x800A40E8
void zBiplanePlayerFlyAndShoot::Damage(class zBiplanePlayerFlyAndShoot * this /* r30 */, class zCombatDamageInfo & damageInfo /* r31 */) {
    {
        // Range: 0x800A3FF8 -> 0x800A4078
        // Local variables
        float dotAt; // f0

        {
            // Range: 0x800A4030 -> 0x800A4078
            // Local variables
            float dotRight; // f0
        }
    }
}
// Range: 0x800A40F0 -> 0x800A4480
void zBiplanePlayerFlyAndShoot::Move(class zBiplanePlayerFlyAndShoot * this /* r30 */, class xScene * s /* r31 */, float dt /* f31 */, class xEntFrame * frame /* r29 */) {
}
// Range: 0x800A4490 -> 0x800A5F2C
void zBiplanePlayerFlyAndShoot::Update(class zBiplanePlayerFlyAndShoot * this /* r29 */, float dt /* f30 */) {
    // Local variables
    class xVec3 targetDirection; // r1+0xD0
    float toHitDistance; // r1+0x20
    bool hitDetected; // r31
    class xBase * pipperHitObj; // r30
    float rangeSq; // f31

    {
        // Range: 0x800A453C -> 0x800A4844
        // Local variables
        class xVec3 oldPlayerPos; // r1+0xDC

        {
            // Range: 0x800A4574 -> 0x800A4694
            // Local variables
            float r; // f0
            float p; // f0
            float y; // f0
        }
    }
    {
        // Range: 0x800A4E4C -> 0x800A5038
        // Local variables
        float curRange; // f0
        class xMat4x3 flightMat; // r1+0x228
        int numEnemies; // r0
        class xVec3 enemies[8]; // r1+0x268
        float cosRange; // f0

        {
            // Range: 0x800A4E98 -> 0x800A5030
            // Local variables
            int i; // r6

            {
                // Range: 0x800A4E98 -> 0x800A5030
                // Local variables
                float newRange; // f11
            }
        }
    }
    {
        // Range: 0x800A5094 -> 0x800A5878
        // Local variables
        float pipperTimeLimit; // f2
        bool shootFrame; // r0

        {
            // Range: 0x800A50F8 -> 0x800A5878
            // Local variables
            class zFXSpawn * bulletSoundSpawnPt; // r15
            class zFXSpawn * bulletSpawnPt; // r16
            class xVec3 bulletPos; // r1+0xB8
            class xMat3x3 bulletRot; // r1+0x1F8
            class xVec3 firingDirection; // r1+0xC4
            float hitDist; // f0

            {
                // Range: 0x800A55D8 -> 0x800A5878
                // Local variables
                class xMat4x3 targetFacing; // r1+0x1B8
                class xVec3 hitPos; // r1+0xAC
                float hitDist; // f3
                class EventActionHit hitParams; // r1+0x120

                {
                    // Range: 0x800A576C -> 0x800A5804
                    // Local variables
                    class zFXSpawn * impactSpawnPoint; // r0
                }
                {
                    // Range: 0x800A5804 -> 0x800A5878
                    // Local variables
                    class zFXSpawn * smokeSpawnPoint; // r0
                    class zFXSpawn * impactSpawnPoint; // r0
                }
            }
        }
    }
    {
        // Range: 0x800A5878 -> 0x800A5ACC
        // Local variables
        class zRayHitCollector hitCollector; // r1+0x100

        {
            // Range: 0x800A58BC -> 0x800A5ACC
            {
                // Range: 0x800A58CC -> 0x800A5ACC
                // Local variables
                class EventActionHit hitParams; // r1+0xE8

                {
                    // Range: 0x800A5A50 -> 0x800A5ACC
                    // Local variables
                    class EventActionEnt targetEntParams; // r1+0x50
                }
            }
        }
    }
    {
        // Range: 0x800A5B14 -> 0x800A5BE0
        // Local variables
        class EventActionOneInt params; // r1+0x1C
    }
    {
        // Range: 0x800A5BF0 -> 0x800A5C38
        // Local variables
        class EventActionOneInt params; // r1+0x18
    }
    {
        // Range: 0x800A5C74 -> 0x800A5E5C
        // Local variables
        int i; // r15

        {
            // Range: 0x800A5C74 -> 0x800A5E5C
            // Local variables
            class xVec2 targetPos; // r1+0x38
            class xVec2 goalAt; // r1+0x40
            class xVec2 targetAt; // r1+0x48
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> struct {} __vt__Q225zBiplanePlayerFlyAndShoot16zRayHitCollector;
    // -> class xMat4x3 g_I3;
    // -> class zGameCheats gGameCheats;
    // -> static float pipperTimeIndex;
    // -> float dt;
    // -> class zGlobals globals;
}
// Range: 0x800A5FF0 -> 0x800A61D8
void zBiplanePlayerFlyAndShoot::UpdateLean(class zBiplanePlayerFlyAndShoot * this /* r31 */, float dt /* f30 */) {
    // Local variables
    float leanYaw; // f31
    float targetLeanLerp; // f2

    {
        // Range: 0x800A60E0 -> 0x800A61B4
        // Local variables
        float difference; // f4
        float lerpSpeed; // f3
    }
}
// signature: zBiplanePlayerFlyAndShoot::FlightControl(float, float, float)
// Range: 0x800A61E0 -> 0x800A61EC
void zBiplanePlayerFlyAndShoot::FlightControl() {
}
// signature: zBiplanePlayerFlyAndShoot::RibbonFX(float)
// Range: 0x800A6230 -> 0x800A64E8
void zBiplanePlayerFlyAndShoot::RibbonFX(class zBiplanePlayerFlyAndShoot * this /* r27 */) {
    {
        // Range: 0x800A624C -> 0x800A64C8
        // Local variables
        float posneg[2]; // r1+0x8
        int bone[2]; // r1+0x10

        {
            // Range: 0x800A6284 -> 0x800A629C
            // Local variables
            int i; // r20
        }
        {
            // Range: 0x800A62B4 -> 0x800A64B0
            // Local variables
            int i; // r28

            {
                // Range: 0x800A62B4 -> 0x800A64B0
                // Local variables
                class xMat4x3 camMat; // r1+0x18
                class zCam * cam; // r0
                class xMat4x3 mat; // r1+0x58
            }
        }
    }
}
// Range: 0x800A64F0 -> 0x800A7240
void zBiplanePlayerFlyAndShoot::GunRayCast(class zBiplanePlayerFlyAndShoot * this /* r28 */, class zRayHitCollector & hitCollector /* r29 */) const {
    // Local variables
    float timeLimit; // f2
    class zFXSpawn * bulletSpawnPt; // r27
    class zFXSpawn * bulletSoundSpawnPt; // r30
    class zCamBiplaneGlide * flyingCam; // r0
    class xMat4x3 flightMat; // r1+0x288
    class xVec3 targetVec; // r1+0x23C
    class xVec3 targetDirection; // r1+0x230
    float vOffset; // f31
    float hOffset; // f30
    class hkVector4 hkTargetVec; // r1+0x220
    class hkVector4 hkPlayerVec; // r1+0x210

    {
        // Range: 0x800A6940 -> 0x800A69A8
        // Local variables
        class EventActionTwoInts eventParams; // r1+0x10
    }
    {
        // Range: 0x800A6C44 -> 0x800A6C44
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x800A6C44 -> 0x800A6C44
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x800A6CF0 -> 0x800A6CF0
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x800A6CF0 -> 0x800A6CF0
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x800A6D48 -> 0x800A7214
        // Local variables
        class xVec3 bulletPos; // r1+0x1EC
        class xMat4x3 targetFacing; // r1+0x248
        class xVec3 hitPos; // r1+0x1F8
        class xVec3 firingDirection; // r1+0x204
        float hitDist; // f0
        unsigned int markerDist; // r0

        {
            // Range: 0x800A7130 -> 0x800A71A0
            // Local variables
            class zFXSpawn * impactSpawnPoint; // r0
        }
        {
            // Range: 0x800A71A0 -> 0x800A7214
            // Local variables
            class zFXSpawn * smokeSpawnPoint; // r0
            class zFXSpawn * impactSpawnPoint; // r0
        }
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> static unsigned int shotCount;
    // -> static bool fireLeft;
    // -> class zGameCheats gGameCheats;
    // -> class zGlobals globals;
    // -> static float timeIndex;
    // -> float dt;
}
// Range: 0x800A7240 -> 0x800A77A4
void zBiplanePlayerFlyAndShoot::FireSpecialWeapon(class zBiplanePlayerFlyAndShoot * this /* r29 */) {
    {
        // Range: 0x800A728C -> 0x800A7504
        // Local variables
        float rangeSq; // f31

        {
            // Range: 0x800A72A0 -> 0x800A74E8
            // Local variables
            int i; // r30

            {
                // Range: 0x800A72A0 -> 0x800A74E8
                // Local variables
                class EventActionSpecWeapHit hitParams; // r1+0x34
                class xVec2 targetPos; // r1+0x10
                class xVec2 goalAt; // r1+0x18
                class xVec2 targetAt; // r1+0x20
            }
        }
    }
    {
        // Range: 0x800A7528 -> 0x800A7588
        // Local variables
        class EventActionOneInt params; // r1+0xC
    }
    {
        // Range: 0x800A758C -> 0x800A75EC
        // Local variables
        class EventActionOneInt params; // r1+0x8
    }

    // References
    // -> static class xGroup * biplaneDialogGroup[9];
    // -> class xGlobals * xglobals;
}
// Range: 0x800A77D0 -> 0x800A7818
void zBiplanePlayerFlyAndShoot::ApplyGust(class xVec3 & gustVec /* r31 */) {
    // Local variables
    class zPlayerJump * jump; // r0
}
// Range: 0x800A7820 -> 0x800A782C
float zBiplanePlayerFlyAndShoot::GetSpecWeapsRange() {
}
// Range: 0x800A7830 -> 0x800A783C
float zBiplanePlayerFlyAndShoot::GetMaxFiringRange() {
}
// Range: 0x800A7840 -> 0x800A78A8
void zBiplanePlayerFlyAndShoot::StartHudFlashing(class zBiplanePlayerFlyAndShoot * this /* r31 */) {
    {
        // Range: 0x800A7854 -> 0x800A7894
        // Local variables
        class EventActionOneInt params; // r1+0x8
    }
}
// Range: 0x800A78B0 -> 0x800A7AF0
void zBiplanePlayerFallToDeath::AddStates(class zBiplanePlayerFallToDeath * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zBiplanePlayerFallToDeath::AddActionTransitions(xAnimTable *)
// Range: 0x800A7AF0 -> 0x800A7B08
void zBiplanePlayerFallToDeath::AddActionTransitions() {
}
// signature: zBiplanePlayerFallToDeath::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A7B10 -> 0x800A7CE0
void zBiplanePlayerFallToDeath::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// signature: zBiplanePlayerFallToDeath::AddInternalTransitions(xAnimTable *)
// Range: 0x800A81E0 -> 0x800A81E4
void zBiplanePlayerFallToDeath::AddInternalTransitions() {
}
// Range: 0x800A81F0 -> 0x800A82A8
void zBiplanePlayerFallToDeath::Setup(class zBiplanePlayerFallToDeath * this /* r29 */) {
}
// Range: 0x800A82B0 -> 0x800A82D0
void zBiplanePlayerFallToDeath::Reset() {
}
// Range: 0x800A82D0 -> 0x800A84FC
void zBiplanePlayerFallToDeath::Begin(class zBiplanePlayerFallToDeath * this /* r31 */) {
    {
        // Range: 0x800A848C -> 0x800A84DC
        // Local variables
        class zFXSpawn * deathSpiralSoundFXSpanwPt; // r0
    }
}
// Range: 0x800A8500 -> 0x800A8628
void zBiplanePlayerFallToDeath::End(class zBiplanePlayerFallToDeath * this /* r29 */) {
}
// signature: zBiplanePlayerFallToDeath::FlightControl(float, float, float)
// Range: 0x800A8630 -> 0x800A8798
void zBiplanePlayerFallToDeath::FlightControl() {
    // Local variables
    class xMat4x3 playerMat; // r1+0x8
    float y; // f0
    float p; // f0
    float r; // f0
}
// Range: 0x800A87A0 -> 0x800A8C4C
void zBiplanePlayerFallToDeath::Update(class zBiplanePlayerFallToDeath * this /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x800A897C -> 0x800A8B70
        // Local variables
        class xVec3 oldPlayerPos; // r1+0x1C
    }

    // References
    // -> class zGlobals globals;
    // -> class Scene * primaryScene;
}
// signature: zBiplanePlayerIdle::AddActionTransitions(xAnimTable *)
// Range: 0x800A8D50 -> 0x800A8D68
void zBiplanePlayerIdle::AddActionTransitions() {
}
// signature: zBiplanePlayerIdle::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A8D70 -> 0x800A8D74
void zBiplanePlayerIdle::AddTransitionsFrom() {
}
// signature: zBiplanePlayerIdle::AddInternalTransitions(xAnimTable *)
// Range: 0x800A8D80 -> 0x800A8D84
void zBiplanePlayerIdle::AddInternalTransitions() {
}
// signature: zBiplanePlayerWalk::AddActionTransitions(xAnimTable *)
// Range: 0x800A8D90 -> 0x800A8D94
void zBiplanePlayerWalk::AddActionTransitions() {
}
// signature: zBiplanePlayerRun::AddActionTransitions(xAnimTable *)
// Range: 0x800A8DA0 -> 0x800A8DA4
void zBiplanePlayerRun::AddActionTransitions() {
}
// signature: zBiplanePlayerJump::AddActionTransitions(xAnimTable *)
// Range: 0x800A8DB0 -> 0x800A8DB4
void zBiplanePlayerJump::AddActionTransitions() {
}
// signature: zBiplanePlayerFall::AddActionTransitions(xAnimTable *)
// Range: 0x800A8DC0 -> 0x800A8DC4
void zBiplanePlayerFall::AddActionTransitions() {
}
// signature: zBiplanePlayerLand::AddActionTransitions(xAnimTable *)
// Range: 0x800A8DD0 -> 0x800A8DD4
void zBiplanePlayerLand::AddActionTransitions() {
}
// signature: zBiplanePlayerLedge::AddActionTransitions(xAnimTable *)
// Range: 0x800A8DE0 -> 0x800A8DE4
void zBiplanePlayerLedge::AddActionTransitions() {
}
// Range: 0x800A8DF0 -> 0x800A8EB4
void zBiplanePlayerCheat::AddActionTransitions(class zBiplanePlayerCheat * this /* r28 */, class xAnimTable * table /* r29 */) {
}
// Range: 0x800A8FC0 -> 0x800A9070
void zBiplanePlayerCustomAnim::AddActionTransitions(class xAnimTable * table /* r28 */) {
}
