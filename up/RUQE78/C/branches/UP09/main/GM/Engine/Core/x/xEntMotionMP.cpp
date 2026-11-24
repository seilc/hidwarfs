/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xEntMotionMP.cpp
*/
// signature: xEntMPGetNext(xEntMotion *, xMovePoint *, xScene *)
// Range: 0x80058280 -> 0x800583D0
void xEntMPGetNext(class xEntMotion * motion /* r30 */) {
    // Local variables
    class xEntMPData * mp; // r31
    class xVec3 tempdir; // r1+0x8

    {
        // Range: 0x80058300 -> 0x80058364
        // Local variables
        class xMat3x3 mat; // r1+0x18
    }
}
// Range: 0x800583D0 -> 0x80058708
bool MovePointData::Move(class MovePointData * this /* r31 */, class xEntMotion * motion /* r29 */, float dt /* f31 */) {
    // Local variables
    float speedCur; // f3

    {
        // Range: 0x800585CC -> 0x800585F4
        // Local variables
        class xMovePoint * prev; // r0
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80058710 -> 0x800587DC
void MovePointData::Reset() {
}
// signature: MovePointData::Setup(float)
// Range: 0x800587E0 -> 0x80058858
void MovePointData::Setup() {
}
// signature: MovePointData::GetLinearPos(xVec3 &, float, bool)
// Range: 0x80058860 -> 0x80058930
void MovePointData::GetLinearPos() {
}
// signature: xGetSplinePos(float, xVec3 &, xVec3 &, xMat4x3 &, xEntMotion *, const xSpline3 *, const unsigned short, const unsigned char)
// Range: 0x80058930 -> 0x80059024
bool xGetSplinePos(float dt /* f31 */, class xVec3 & scale /* r29 */, class xMat4x3 & mat /* r30 */, class xEntMotion * motion /* r24 */, class xSpline3 * spl /* r25 */, unsigned short motionFlags /* r26 */, unsigned char use_banking /* r27 */) {
    // Local variables
    class xEntMPData * mp; // r0
    class xVec3 direction; // r1+0x44
    class xVec3 bank; // r1+0x38
    class xMat3x3 tmpmat; // r1+0x50
    class xQuat quat; // r1+0x28
    class xQuat qold; // r1+0x18
    float qdot; // f1
    bool res; // r31
    float u; // f30

    {
        // Range: 0x800589C0 -> 0x80058FF8
        {
            // Range: 0x80058AA4 -> 0x80058C9C
            // Local variables
            class xVec3 gravity; // r1+0x8
        }
    }

    // References
    // -> class xQuat g_IQ;
    // -> class zGlobals globals;
}
// signature: xEntMPMove(xEntMotion *, xScene *, float, xEntFrame *)
// Range: 0x80059030 -> 0x80059640
void xEntMPMove(class xEntMotion * motion /* r28 */, float dt /* f31 */, class xEntFrame * frame /* r29 */) {
    // Local variables
    class xEntMPData * mp; // r30
    class xVec3 tgt; // r1+0x3C
    class xVec3 scale; // r1+0x30

    {
        // Range: 0x800592C8 -> 0x80059448
        // Local variables
        class xQuat quat; // r1+0x20
    }
    {
        // Range: 0x80059448 -> 0x80059560
        // Local variables
        class xVec3 targetPos; // r1+0x14
    }
}
// signature: xEntMPAccelerate(xEntMotion *, float, float, xEnt *)
// Range: 0x80059640 -> 0x80059670
void xEntMPAccelerate() {
}
