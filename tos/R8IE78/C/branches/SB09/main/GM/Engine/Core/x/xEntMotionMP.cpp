/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xEntMotionMP.cpp
*/
// signature: xEntMPGetNext(xEntMotion *, xMovePoint *, xScene *)
// Range: 0x8002E4D0 -> 0x8002E604
void xEntMPGetNext(class xEntMotion * motion /* r30 */) {
    // Local variables
    class xEntMPData * mp; // r31
    class xVec3 tempdir; // r1+0x8

    {
        // Range: 0x8002E550 -> 0x8002E59C
        // Local variables
        class xMat3x3 mat; // r1+0x18
    }
}
// signature: xEntSpeedDataUpdate(MovePointData *, float)
// Range: 0x8002E610 -> 0x8002E6AC
void xEntSpeedDataUpdate() {
}
// Range: 0x8002E6B0 -> 0x8002E96C
bool MovePointData::Move(class MovePointData * this /* r30 */, class xEntMotion * motion /* r31 */, float dt /* f31 */) {
    // Local variables
    float speedCur; // f3

    {
        // Range: 0x8002E894 -> 0x8002E948
        // Local variables
        float storedDist; // f31

        {
            // Range: 0x8002E8C4 -> 0x8002E8E8
            // Local variables
            class xMovePoint * prev; // r0
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x8002E970 -> 0x8002EA10
void MovePointData::Reset(class MovePointData * this /* r31 */) {
}
// signature: MovePointData::Setup(float)
// Range: 0x8002EA10 -> 0x8002EA88
void MovePointData::Setup() {
}
// signature: MovePointData::GetLinearPos(xVec3 &, float, bool)
// Range: 0x8002EA90 -> 0x8002EADC
void MovePointData::GetLinearPos(class MovePointData * this /* r5 */) {
}
// signature: xGetSplinePos(float, xVec3 &, xVec3 &, xMat4x3 &, xEntMotion *, const xSpline3 *, const unsigned short, const unsigned char)
// Range: 0x8002EB30 -> 0x8002EE44
bool xGetSplinePos(float dt /* f31 */, class xVec3 & scale /* r30 */, class xMat4x3 & mat /* r31 */, class xEntMotion * motion /* r25 */, class xSpline3 * spl /* r26 */, unsigned short motionFlags /* r27 */, unsigned char use_banking /* r28 */) {
    // Local variables
    class xEntMPData * mp; // r0
    class xVec3 direction; // r1+0x44
    class xVec3 bank; // r1+0x38
    class xMat3x3 tmpmat; // r1+0x50
    class xQuat quat; // r1+0x28
    class xQuat qold; // r1+0x18
    float qdot; // f30
    bool res; // r29
    float u; // f30

    {
        // Range: 0x8002EB8C -> 0x8002EE18
        {
            // Range: 0x8002EC54 -> 0x8002ECF8
            // Local variables
            class xVec3 gravity; // r1+0x8
        }
    }

    // References
    // -> class zGlobals globals;
}
// signature: xEntMPMove(xEntMotion *, xScene *, float, xEntFrame *, xMat4x3 *)
// Range: 0x8002EE50 -> 0x8002F1F8
void xEntMPMove(class xEntMotion * motion /* r28 */, float dt /* f31 */, class xEntFrame * frame /* r29 */, class xMat4x3 * mat /* r30 */) {
    // Local variables
    class xEntMPData * mp; // r31
    class xVec3 tgt; // r1+0x3C
    class xVec3 scale; // r1+0x30

    {
        // Range: 0x8002EFD0 -> 0x8002F090
        // Local variables
        class xQuat quat; // r1+0x20
    }
    {
        // Range: 0x8002F090 -> 0x8002F130
        // Local variables
        class xVec3 targetPos; // r1+0x14
    }
}
// signature: xEntMPAccelerate(xEntMotion *, float, float, xEnt *)
// Range: 0x8002F200 -> 0x8002F230
void xEntMPAccelerate() {
}
// signature: xEntMPSetup(xEntMotion *, float, float, xEnt *)
// Range: 0x8002F230 -> 0x8002F244
void xEntMPSetup() {
}
