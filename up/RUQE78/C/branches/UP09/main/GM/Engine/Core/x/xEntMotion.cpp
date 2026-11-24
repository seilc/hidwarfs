/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xEntMotion.cpp
*/
// signature: xEntMotionInit(xEntMotion *, xEnt *, xEntMotionAsset *)
// Range: 0x80055390 -> 0x8005554C
void xEntMotionInit() {
    // References
    // -> class xMat4x3 g_I3;
}
// signature: xEntMotionSetup(xEntMotion *, xScene *)
// Range: 0x80055550 -> 0x800556B8
void xEntMotionSetup(class xEntMotion * motion /* r31 */) {
    {
        // Range: 0x80055650 -> 0x800556A4
        // Local variables
        class xEntMechData * mech; // r0
    }
}
// signature: xEntMotionSetSldData(xEntMotion *)
// Range: 0x800556C0 -> 0x80055908
void xEntMotionSetSldData() {
    // Local variables
    class xEnt * ownr; // r4
    class Mech_Type * mkasst; // r7
    class xEntMechData * mech; // r0
    float scale; // f5
    float model_scale; // f1
    float asset_scale; // f2
}
// Range: 0x80055910 -> 0x80055D88
void xEntMotionReset(class xEntMotion * motion /* r30 */, class xScene * sc /* r28 */) {
    {
        // Range: 0x80055B30 -> 0x80055BDC
        // Local variables
        class xVec3 startPosition; // r1+0x20
    }
    {
        // Range: 0x80055BF4 -> 0x80055D60
        // Local variables
        float drot; // f31
        class xEntMechData * mech; // r0
        class Mech_Type * mkasst; // r0
    }
}
// signature: xEntMotionReallyReset(xEntMotion *, xScene *)
// Range: 0x80055D90 -> 0x80055DBC
void xEntMotionReallyReset() {
}
// Range: 0x80055DC0 -> 0x80055F10
bool xEntMotionMove(class xEntMotion * motion /* r29 */, class xScene * sc /* r30 */, float dt /* f29 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    bool moved; // r7
}
// signature: xEntSplineMove(xEntMotion *, xScene *, float, xEntFrame *)
// Range: 0x80055F10 -> 0x800567A0
static void xEntSplineMove(class xEntMotion * motion /* r29 */, float dt /* f30 */, class xEntFrame * frame /* r30 */) {
    // Local variables
    class xEntSplineData * spline_data; // r0
    bool still_on_spline; // r0
    class xVec3 target_position; // r1+0x64

    {
        // Range: 0x80056094 -> 0x8005676C
        // Local variables
        class xQuat target_orient; // r1+0x30
        class xMat3x3 mat; // r1+0x70
        class xVec3 acc; // r1+0x40
        class xVec3 dir; // r1+0x4C
        class xVec3 scale; // r1+0x58
    }

    // References
    // -> class xVec3 g_O3;
}
// Range: 0x800567A0 -> 0x80056C18
bool doMechMove(class xEntMotion * motion /* r28 */, class xScene * sc /* r24 */, float dt /* f31 */, class xEntFrame * frame /* r25 */, float & remaining /* r26 */) {
    // Local variables
    float secondaryRemaining; // r1+0x8
    class xEntMechData * mech; // r0
    class Mech_Type * mkasst; // r31
    unsigned int last; // r30
    bool reallyDidMove; // r29
}
// signature: xEntScale(xEntMotion *, xScene *, float, xEntFrame *, float &)
// Range: 0x80056C20 -> 0x8005727C
static unsigned int xEntScale() {
    // Local variables
    class xEntMechData * mech; // r0
    class Mech_Type * mkasst; // r8
    unsigned int last; // r9
    float scale; // f1
    float u; // f3
    float scale_adjust; // f0
}
// signature: xEntSldMove(xEntMotion *, xScene *, float, xEntFrame *, float &)
// Range: 0x80057280 -> 0x80057988
static unsigned int xEntSldMove() {
    // Local variables
    class xEntMechData * mech; // r0
    class Mech_Type * mkasst; // r7
    unsigned int last; // r8
    float speed; // f0
    float before; // f4
    float after; // f2
    class xVec3 delta; // r1+0x74
    class xVec3 tmpSldAxis; // r1+0x68

    {
        // Range: 0x800574EC -> 0x80057530
        // Local variables
        float diff; // f0
    }
    {
        // Range: 0x80057534 -> 0x80057564
        // Local variables
        float diff; // f0
    }
    {
        // Range: 0x80057564 -> 0x800575AC
        // Local variables
        float diff; // f0
    }
    {
        // Range: 0x800575B0 -> 0x800575F4
        // Local variables
        float diff; // f0
    }
    {
        // Range: 0x800575F8 -> 0x80057628
        // Local variables
        float diff; // f0
    }
    {
        // Range: 0x80057628 -> 0x80057674
        // Local variables
        float diff; // f0
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisX;
}
// signature: xEntRotMove(xEntMotion *, xScene *, float, xEntFrame *, float &)
// Range: 0x80057990 -> 0x80057EB4
static unsigned int xEntRotMove(class xEntMotion * motion /* r28 */, class xEntFrame * frame /* r29 */, float & remaining /* r27 */) {
    // Local variables
    class xEntMechData * mech; // r0
    class Mech_Type * mkasst; // r31
    unsigned int last; // r30
    float tmpRot; // f0
    float before; // f4
    float after; // f30
    class xMat3x3 rotMat; // r1+0x48
    class xVec3 tmpRotAxis; // r1+0x8
    class xEnt * ownr; // r3

    {
        // Range: 0x80057A24 -> 0x80057A74
        // Local variables
        float drot; // f0
    }
    {
        // Range: 0x80057AB0 -> 0x80057C98
        // Local variables
        float speed; // f0

        {
            // Range: 0x80057AD4 -> 0x80057B18
            // Local variables
            float diff; // f0
        }
        {
            // Range: 0x80057B1C -> 0x80057B4C
            // Local variables
            float diff; // f0
        }
        {
            // Range: 0x80057B4C -> 0x80057B94
            // Local variables
            float diff; // f0
        }
        {
            // Range: 0x80057B98 -> 0x80057BDC
            // Local variables
            float diff; // f0
        }
        {
            // Range: 0x80057BE0 -> 0x80057C10
            // Local variables
            float diff; // f0
        }
        {
            // Range: 0x80057C10 -> 0x80057C5C
            // Local variables
            float diff; // f0
        }
    }
    {
        // Range: 0x80057DF8 -> 0x80057E7C
        // Local variables
        class xEntAsset * easst; // r3
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisX;
}
// signature: xEntMechForward(xEntMotion *)
// Range: 0x80057EC0 -> 0x80057FC8
void xEntMechForward() {
    // Local variables
    class xEntMechData * mech; // r0
    class Mech_Type * mkasst; // r6
}
// signature: xEntMechReverse(xEntMotion *)
// Range: 0x80057FD0 -> 0x80058140
void xEntMechReverse() {
    // Local variables
    class xEntMechData * mech; // r0
    class Mech_Type * mkasst; // r5
}
// signature: xEntMotionTranslate(xEntMotion *, const xVec3 *, xMat4x3 *)
// Range: 0x80058140 -> 0x80058278
void xEntMotionTranslate() {
}
