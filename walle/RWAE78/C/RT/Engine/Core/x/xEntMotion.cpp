/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xEntMotion.cpp
*/
// signature: xEntMotionInit(xEntMotion *, xEnt *, xEntMotionAsset *)
// Range: 0x80039370 -> 0x80039514
void xEntMotionInit() {
    {
        // Range: 0x80039394 -> 0x80039470
        // Local variables
        class xEntMotionMechData * mkasst; // r0
    }

    // References
    // -> class xMat4x3 g_I3;
}
// signature: xEntMotionSetup(xEntMotion *, xScene *)
// Range: 0x80039520 -> 0x80039884
void xEntMotionSetup(class xEntMotion * motion /* r29 */) {
    {
        // Range: 0x80039570 -> 0x80039754
        // Local variables
        class Curve * pCurve; // r30
    }
    {
        // Range: 0x80039810 -> 0x80039864
        // Local variables
        class xEntMechData * mech; // r0
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xEntMotionSetSldData(xEntMotion *)
// Range: 0x80039890 -> 0x80039AC8
void xEntMotionSetSldData() {
    // Local variables
    class xEnt * ownr; // r5
    class xEntMotionMechData * mkasst; // r0
    class xEntMechData * mech; // r0
    float scale; // f7
    float model_scale; // f1
    float asset_scale; // f2
}
// Range: 0x80039AD0 -> 0x80039E70
void xEntMotionReset(class xEntMotion * motion /* r31 */, class xScene * sc /* r28 */) {
    {
        // Range: 0x80039C0C -> 0x80039CC4
        // Local variables
        class xVec3 startPosition; // r1+0x8
    }
    {
        // Range: 0x80039CDC -> 0x80039E48
        // Local variables
        float drot; // f31
        class xEntMechData * mech; // r0
        class xEntMotionMechData * mkasst; // r0
        class xEnt * ownr; // r4
    }
}
// signature: xEntMotionReallyReset(xEntMotion *, xScene *)
// Range: 0x80039E70 -> 0x80039E9C
void xEntMotionReallyReset() {
}
// signature: xEntMotionMove(xEntMotion *, xScene *, float, xEntFrame *)
// Range: 0x80039EA0 -> 0x80039F40
void xEntMotionMove(class xEntMotion * motion /* r31 */, float dt /* f31 */) {
}
// signature: xEntMPGetNext(xEntMotion *, xMovePoint *, xScene *)
// Range: 0x80039F40 -> 0x8003A084
static void xEntMPGetNext(class xEntMotion * motion /* r31 */) {
    // Local variables
    class xEntMPData * mp; // r0
    class xVec3 tempdir; // r1+0x8

    {
        // Range: 0x80039FB8 -> 0x8003A020
        // Local variables
        class xMat3x3 mat; // r1+0x18
    }
}
// Range: 0x8003A090 -> 0x8003AC94
static void xEntMPMove(class xEntMotion * motion /* r28 */, class xScene * sc /* r29 */, float dt /* f29 */, class xEntFrame * frame /* r30 */) {
    // Local variables
    class xEntMPData * mp; // r0
    float newdist; // f30
    float qdot; // f1
    class xVec3 tgt; // r1+0x58
    class xVec3 direction; // r1+0x4C
    class xVec3 bank; // r1+0x40
    class xQuat quat; // r1+0x30
    class xQuat qold; // r1+0x20
    class xMat3x3 tmpmat; // r1+0x68
    class xVec3 scale; // r1+0x14

    {
        // Range: 0x8003A1C4 -> 0x8003A258
        // Local variables
        class xMovePoint * prev; // r0
    }
    {
        // Range: 0x8003A388 -> 0x8003AA38
        // Local variables
        float u; // f27

        {
            // Range: 0x8003A3CC -> 0x8003AA38
            {
                // Range: 0x8003A4D0 -> 0x8003A6CC
                // Local variables
                class xVec3 gravity; // r1+0x8
            }
        }
    }

    // References
    // -> class xQuat g_IQ;
}
// signature: xEntSplineMove(xEntMotion *, xScene *, float, xEntFrame *)
// Range: 0x8003ACA0 -> 0x8003B58C
static void xEntSplineMove(class xEntMotion * motion /* r29 */, float dt /* f30 */, class xEntFrame * frame /* r30 */) {
    // Local variables
    class xEntSplineData * spline_data; // r0
    bool still_on_spline; // r0
    class xVec3 target_position; // r1+0x60

    {
        // Range: 0x8003AE2C -> 0x8003B54C
        // Local variables
        class xQuat target_orient; // r1+0x38
        class xMat3x3 mat; // r1+0x70
        class xVec3 dir; // r1+0x48
        class xVec3 scale; // r1+0x54
    }

    // References
    // -> class xVec3 g_O3;
}
// Range: 0x8003B590 -> 0x8003B970
static void xEntMechMove(class xEntMotion * motion /* r30 */, class xScene * sc /* r27 */, float dt /* f31 */, class xEntFrame * frame /* r28 */) {
    // Local variables
    class xEntMechData * mech; // r0
    class xEntMotionMechData * mkasst; // r0
    unsigned int last; // r31
}
// signature: xEntScale(xEntMotion *, xScene *, float, xEntFrame *)
// Range: 0x8003B970 -> 0x8003BDBC
static unsigned int xEntScale() {
    // Local variables
    class xEntMechData * mech; // r0
    class xEntMotionMechData * mkasst; // r0
    unsigned int last; // r8
    float scale; // f1
    float u; // f2
    float scale_adjust; // f0
}
// signature: xEntSldMove(xEntMotion *, xScene *, float, xEntFrame *)
// Range: 0x8003BDC0 -> 0x8003C31C
static unsigned int xEntSldMove() {
    // Local variables
    class xEntMechData * mech; // r0
    class xEntMotionMechData * mkasst; // r0
    unsigned int last; // r7
    float speed; // f0
    float tmradj; // f4
    float rem; // f3
    class xVec3 tmpSldAxis; // r1+0x20

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisX;
}
// signature: xEntRotMove(xEntMotion *, xScene *, float, xEntFrame *)
// Range: 0x8003C320 -> 0x8003C758
static unsigned int xEntRotMove(class xEntMotion * motion /* r29 */, class xEntFrame * frame /* r30 */) {
    // Local variables
    class xEntMechData * mech; // r0
    class xEntMotionMechData * mkasst; // r0
    unsigned int last; // r31
    float tmpRot; // f0
    float tmradj; // f3
    float rem; // f4
    class xMat3x3 rotMat; // r1+0x48
    class xVec3 tmpRotAxis; // r1+0x8
    class xEnt * ownr; // r3

    {
        // Range: 0x8003C3AC -> 0x8003C3FC
        // Local variables
        float drot; // f0
    }
    {
        // Range: 0x8003C42C -> 0x8003C544
        // Local variables
        float speed; // f0
    }
    {
        // Range: 0x8003C6A4 -> 0x8003C728
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
// Range: 0x8003C760 -> 0x8003C850
void xEntMechForward() {
    // Local variables
    class xEntMechData * mech; // r0
    class xEntMotionMechData * mkasst; // r0
}
// signature: xEntMechReverse(xEntMotion *)
// Range: 0x8003C850 -> 0x8003C998
void xEntMechReverse() {
    // Local variables
    class xEntMechData * mech; // r0
    class xEntMotionMechData * mkasst; // r0
}
// signature: xEntMotionTranslate(xEntMotion *, const xVec3 *, xMat4x3 *)
// Range: 0x8003C9A0 -> 0x8003CB84
void xEntMotionTranslate() {
}
