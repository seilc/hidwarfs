/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSBPlayerHoseMode.cpp
*/
static class zFXSpawn * spraySpawnAsset; // size: 0x4, address: 0x80754B30
static float coeffsTable[17][4]; // size: 0x110, address: 0x80754B38
// signature: zSBPlayerHoseMode::Init(zSBPlayer *)
// Range: 0x80159550 -> 0x80159670
void zSBPlayerHoseMode::Init(class zSBPlayerHoseMode * this /* r31 */) {
    // References
    // -> static class zFXSpawn * spraySpawnAsset;
    // -> static float coeffsTable[17][4];
}
// Range: 0x80159670 -> 0x80159778
void zSBPlayerHoseMode::InitializeSquirtValues(class zSBPlayerHoseMode * this /* r31 */) {
    // Local variables
    class xVec3 p1; // r1+0x14
    class xVec3 p2; // r1+0x8
}
// Range: 0x80159780 -> 0x8015A720
void zSBPlayerHoseMode::Update(class zSBPlayerHoseMode * this /* r30 */, float dt /* f30 */) {
    // Local variables
    class EventActionOneFloat params; // r1+0x10

    {
        // Range: 0x80159930 -> 0x80159AD0
        // Local variables
        bool stopSquirt; // r27
    }
    {
        // Range: 0x80159B7C -> 0x8015A6E0
        // Local variables
        class xVec3 lastHit; // r1+0x54
        class xVec3 dd; // r1+0x60
        class xVec3 sPos3; // r1+0x6C
        class xVec3 sPos2; // r1+0x78
        class xVec3 sPos1; // r1+0x84
        class xVec3 sPos; // r1+0x90
        class MappedLaser * p; // r31
        class xVec3 xOffV3; // r1+0x9C
        class xVec3 xOffV2; // r1+0xA8
        class xVec3 xOffV1; // r1+0xB4
        float stickOffsetX; // f7
        float coeff; // f27
        float variableRatio; // f1
        float l1; // f0
        class xVec3 dir01; // r1+0xC0
        float l; // f0
        class xVec3 dir00; // r1+0xCC
        class xVec3 p03; // r1+0xD8
        class xVec3 p02; // r1+0xE4
        class xVec3 p01; // r1+0xF0
        class xVec3 p00; // r1+0xFC
        float scaleP02; // f27
        float scaleP01; // f28
        float fluidRatio; // f0
        float fluidTime; // f0
        float vertOffLeanBack; // f28
        float vertOff; // f29
        float horizOffLeanBack; // f2
        float horizOff; // f1
        class xVec3 newAt; // r1+0x108
        float leanLerp; // f31
        float targetVelX; // f2
        float stickX; // f2
        float targetVelY; // f2
        float stickY; // f2
        class xMat4x3 mat; // r1+0x1A8
        class xVec3 p2; // r1+0x114
        class xVec3 p1; // r1+0x120

        {
            // Range: 0x8015A2FC -> 0x8015A4BC
            // Local variables
            float minDist; // f27

            {
                // Range: 0x8015A330 -> 0x8015A398
                // Local variables
                class xMat4x3 lastHitMat; // r1+0x168
            }
            {
                // Range: 0x8015A3B8 -> 0x8015A408
                // Local variables
                int i; // r27

                {
                    // Range: 0x8015A3B8 -> 0x8015A408
                    // Local variables
                    float dist; // f1
                }
            }
            {
                // Range: 0x8015A468 -> 0x8015A4BC
                // Local variables
                class zCombatDamageInfo damageInfo; // r1+0x12C
            }
        }
        {
            // Range: 0x8015A520 -> 0x8015A5AC
            // Local variables
            int tt; // r4
        }
        {
            // Range: 0x8015A5E4 -> 0x8015A688
            // Local variables
            int j; // r26

            {
                // Range: 0x8015A5E4 -> 0x8015A688
                // Local variables
                float _z; // f3
                float _y; // f2
                float _x; // f1
            }
        }
    }

    // References
    // -> static float coeffsTable[17][4];
    // -> class xVec3 m_Null;
    // -> class xMat4x3 g_I3;
    // -> class xGlobals * xglobals;
    // -> static class zFXSpawn * spraySpawnAsset;
}
// Range: 0x8015A720 -> 0x8015A770
void zSBPlayerHoseMode::SetFluidToMax() {
    // Local variables
    class EventActionOneFloat params; // r1+0x8
}
// Range: 0x8015A770 -> 0x8015A77C
float zSBPlayerHoseMode::GetFluidMax() {
}
// Range: 0x8015A780 -> 0x8015ABD8
bool zSBPlayerHoseMode::CheckForHit(class zSBPlayerHoseMode * this /* r25 */, class xVec3 & p1 /* r26 */, class xVec3 & p2 /* r27 */, class xVec3 & p3 /* r28 */, class xVec3 & p4 /* r29 */, class xVec3 & lastHit /* r30 */) {
    // Local variables
    class LOSChecker losChecker; // r1+0x40
    class hkVector4 vA; // r1+0x30
    class hkVector4 vB; // r1+0x20
    float hDist; // f31
    bool objectWasHit; // r31
    class xVec3 lastDir; // r1+0x10

    {
        // Range: 0x8015A820 -> 0x8015A820
        {
            // Range: 0x8015A820 -> 0x8015A820
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8015A878 -> 0x8015A878
        {
            // Range: 0x8015A878 -> 0x8015A878
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8015A92C -> 0x8015A92C
        {
            // Range: 0x8015A92C -> 0x8015A92C
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8015A9B0 -> 0x8015A9B0
        {
            // Range: 0x8015A9B0 -> 0x8015A9B0
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8015AA60 -> 0x8015AA60
        {
            // Range: 0x8015AA60 -> 0x8015AA60
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8015AAE4 -> 0x8015AAE4
        {
            // Range: 0x8015AAE4 -> 0x8015AAE4
            // Local variables
            class TimerCommand * h; // r4
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__10LOSChecker;
}
// Range: 0x8015ABE0 -> 0x8015ADA8
bool zSBPlayerHoseMode::ProcessCollision(class zSBPlayerHoseMode * this /* r30 */, class xBase * hitObject /* r31 */) {
    // Local variables
    float damageAmount; // f31
    class EventActionHit params; // r1+0x10

    {
        // Range: 0x8015AD1C -> 0x8015AD84
        // Local variables
        class zCombatDamageInfo damageInfo; // r1+0x28
    }

    // References
    // -> class xVec3 m_Null;
}
