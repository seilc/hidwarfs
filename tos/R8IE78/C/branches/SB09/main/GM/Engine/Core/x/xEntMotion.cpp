/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xEntMotion.cpp
*/
// signature: xEntMotionInit(xEntMotion *, xEnt *, xEntMotionAsset *)
// Range: 0x8002C2A0 -> 0x8002C3FC
void xEntMotionInit() {
    {
        // Range: 0x8002C2D4 -> 0x8002C3D0
        // Local variables
        class Mech_Type * mkasst; // r0
    }

    // References
    // -> class xMat4x3 g_I3;
}
// signature: xEntSpeedDataReset(MovePointData *)
// Range: 0x8002C400 -> 0x8002C418
static void xEntSpeedDataReset() {
}
// signature: xEntMotionSetup(xEntMotion *, xScene *)
// Range: 0x8002C420 -> 0x8002C5A0
void xEntMotionSetup(class xEntMotion * motion /* r31 */) {
    {
        // Range: 0x8002C538 -> 0x8002C58C
        // Local variables
        class xEntMechData * mech; // r0
    }
}
// Range: 0x8002C5A0 -> 0x8002C800
void xEntMotionSetSldData(class xEntMotion * motion /* r29 */) {
    // Local variables
    class xEnt * ownr; // r4
    class Mech_Type * mkasst; // r31
    class xEntMechData * mech; // r30
    float scale; // f2
    float model_scale; // f1
    float asset_scale; // f3
}
// Range: 0x8002C800 -> 0x8002CBC8
void xEntMotionReset(class xEntMotion * motion /* r31 */, class xScene * sc /* r28 */) {
    {
        // Range: 0x8002C984 -> 0x8002CA2C
        // Local variables
        class xVec3 startPosition; // r1+0x14
    }
    {
        // Range: 0x8002CA44 -> 0x8002CBA8
        // Local variables
        float drot; // f31
        class xEntMechData * mech; // r0
        class Mech_Type * mkasst; // r0
    }
}
// signature: xEntMotionReallyReset(xEntMotion *, xScene *)
// Range: 0x8002CBD0 -> 0x8002CBFC
void xEntMotionReallyReset() {
}
// Range: 0x8002CC00 -> 0x8002D0C0
bool xEntMotionMove(class xEntMotion * motion /* r28 */, class xScene * sc /* r27 */, float dt /* f31 */, class xEntFrame * frame /* r29 */, class xMat4x3 * mat /* r30 */) {
    // Local variables
    bool moved; // r8

    // References
    // -> class xVec3 g_O3;
}
// Range: 0x8002D0C0 -> 0x8002D54C
bool doMechMove(class xEntMotion * motion /* r28 */, class xScene * sc /* r23 */, float dt /* f31 */, class xEntFrame * frame /* r24 */, class xMat4x3 * mat /* r25 */, float & remaining /* r26 */) {
    // Local variables
    float secondaryRemaining; // r1+0x8
    class xEntMechData * mech; // r0
    class Mech_Type * mkasst; // r31
    unsigned int last; // r30
    bool reallyDidMove; // r29
}
// signature: xEntScale(xEntMotion *, xScene *, float, xEntFrame *, xMat4x3 *, float &)
// Range: 0x8002D550 -> 0x8002D8C8
static unsigned int xEntScale(class xEntFrame * frame /* r28 */, class xMat4x3 * mat /* r29 */) {
    // Local variables
    class xEntMechData * mech; // r0
    class Mech_Type * mkasst; // r5
    unsigned int last; // r30
    float scale; // f1
    float u; // f3
    float scale_adjust; // f31
}
// signature: xEntSldMove(xEntMotion *, xScene *, float, xEntFrame *, float &)
// Range: 0x8002D8D0 -> 0x8002DDA8
static unsigned int xEntSldMove(class xEntMotion * motion /* r27 */, float dt /* f29 */, class xEntFrame * frame /* r28 */, float & remaining /* r29 */) {
    // Local variables
    class xEntMechData * mech; // r31
    class Mech_Type * mkasst; // r30
    unsigned int last; // r27
    float speed; // f31
    float before; // f4
    float after; // f30
    class xVec3 delta; // r1+0x44
    class xVec3 tmpSldAxis; // r1+0x38

    {
        // Range: 0x8002DB00 -> 0x8002DCE0
        // Local variables
        float & scale; // r0

        {
            // Range: 0x8002DB24 -> 0x8002DB6C
            // Local variables
            float diff; // f0
        }
        {
            // Range: 0x8002DB70 -> 0x8002DB98
            // Local variables
            float diff; // f0
        }
        {
            // Range: 0x8002DB98 -> 0x8002DBD8
            // Local variables
            float diff; // f0
        }
        {
            // Range: 0x8002DBDC -> 0x8002DC24
            // Local variables
            float diff; // f0
        }
        {
            // Range: 0x8002DC28 -> 0x8002DC50
            // Local variables
            float diff; // f0
        }
        {
            // Range: 0x8002DC50 -> 0x8002DC90
            // Local variables
            float diff; // f0
        }
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisX;
}
// signature: xEntRotMove(xEntMotion *, xScene *, float, xEntFrame *, xMat4x3 *, float &)
// Range: 0x8002DDB0 -> 0x8002E1DC
static unsigned int xEntRotMove(class xEntMotion * motion /* r28 */, class xEntFrame * frame /* r29 */, class xMat4x3 * mat /* r30 */, float & remaining /* r26 */) {
    // Local variables
    class xEntMechData * mech; // r0
    class Mech_Type * mkasst; // r31
    unsigned int last; // r27
    float tmpRot; // f0
    float before; // f4
    float after; // f30
    class xMat3x3 rotMat; // r1+0x48
    class xVec3 tmpRotAxis; // r1+0x8
    class xEnt * ownr; // r3

    {
        // Range: 0x8002DE44 -> 0x8002DE7C
        // Local variables
        float drot; // f0
    }
    {
        // Range: 0x8002DEB8 -> 0x8002E098
        // Local variables
        float speed; // f0

        {
            // Range: 0x8002DEDC -> 0x8002DF24
            // Local variables
            float diff; // f0
        }
        {
            // Range: 0x8002DF28 -> 0x8002DF58
            // Local variables
            float diff; // f0
        }
        {
            // Range: 0x8002DF58 -> 0x8002DFA4
            // Local variables
            float diff; // f0
        }
        {
            // Range: 0x8002DFA8 -> 0x8002DFF0
            // Local variables
            float diff; // f0
        }
        {
            // Range: 0x8002DFF4 -> 0x8002E024
            // Local variables
            float diff; // f0
        }
        {
            // Range: 0x8002E024 -> 0x8002E074
            // Local variables
            float diff; // f0
        }
    }
    {
        // Range: 0x8002E174 -> 0x8002E1A4
        // Local variables
        class xEntAsset * easst; // r28
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisX;
}
// signature: xEntMechForward(xEntMotion *)
// Range: 0x8002E1E0 -> 0x8002E2E8
void xEntMechForward() {
    // Local variables
    class xEntMechData * mech; // r0
    class Mech_Type * mkasst; // r6
}
// signature: xEntMechReverse(xEntMotion *)
// Range: 0x8002E2F0 -> 0x8002E460
void xEntMechReverse() {
    // Local variables
    class xEntMechData * mech; // r0
    class Mech_Type * mkasst; // r5
}
// signature: xEntMotionTranslate(xEntMotion *, const xVec3 *, xMat4x3 *)
// Range: 0x8002E460 -> 0x8002E4D0
void xEntMotionTranslate(class xEntMotion * motion /* r30 */, class xMat4x3 * dmat /* r31 */) {
}
