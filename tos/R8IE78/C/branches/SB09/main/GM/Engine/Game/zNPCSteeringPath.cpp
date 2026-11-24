/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCSteeringPath.cpp
*/
// Range: 0x800FD780 -> 0x800FD80C
bool zSteeringPath::IsPointOutsidePath(class zSteeringPath * this /* r30 */, class xVec3 & point /* r31 */) const {
    // Local variables
    class xVec3 pointOnPath; // r1+0x20
    class xVec3 diff; // r1+0x14
}
// signature: zSteeringPathLine::GetProjectionOnPath(xVec3 &, const xVec3 &) const
// Range: 0x800FD810 -> 0x800FD914
float zSteeringPathLine::GetProjectionOnPath(class zSteeringPathLine * this /* r30 */, class xVec3 & output /* r31 */) const {
    // Local variables
    class xVec3 toPos; // r1+0x38
    float u; // f1
}
// signature: zSteeringPathLine::GetFuturePointOnPath(xVec3 &, const xVec3 &, float)
// Range: 0x800FD920 -> 0x800FD9C8
void zSteeringPathLine::GetFuturePointOnPath(class zSteeringPathLine * this /* r30 */, class xVec3 & output /* r31 */, float projectionDist /* f31 */) {
    // Local variables
    class xVec3 currPosOnPath; // r1+0x8
    float u; // f0
    float du; // f3
}
// signature: zSteeringPathLine::GetUpVecAtPoint(xVec3 &, const xVec3 &) const
// Range: 0x800FD9D0 -> 0x800FDA24
void zSteeringPathLine::GetUpVecAtPoint(class zSteeringPathLine * this /* r6 */, class xVec3 & output /* r31 */) const {
    // Local variables
    class xMat3x3 mat; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zSteeringPathLine::Setup(const xVec3 &, const xVec3 &)
// Range: 0x800FDA30 -> 0x800FDAD0
void zSteeringPathLine::Setup(class zSteeringPathLine * this /* r30 */, class xVec3 & p0 /* r31 */) {
    // Local variables
    class xVec3 diff; // r1+0x14
    float mag; // f0
}
// signature: zSteeringPathSpline::GetProjectionOnPath(xVec3 &, const xVec3 &) const
// Range: 0x800FDAD0 -> 0x800FDAEC
float zSteeringPathSpline::GetProjectionOnPath(class xVec3 & output /* r0 */) const {
}
// signature: zSteeringPathSpline::GetFuturePointOnPath(xVec3 &, const xVec3 &, float)
// Range: 0x800FDAF0 -> 0x800FDB68
void zSteeringPathSpline::GetFuturePointOnPath(class zSteeringPathSpline * this /* r30 */, class xVec3 & output /* r31 */, float projectionDist /* f31 */) {
    // Local variables
    class xVec3 pointOnPath; // r1+0x8
    float u; // f0
    float currDist; // f0
}
// signature: zSteeringPathSpline::GetUpVecAtPoint(xVec3 &, const xVec3 &) const
// Range: 0x800FDB70 -> 0x800FDBF0
void zSteeringPathSpline::GetUpVecAtPoint(class zSteeringPathSpline * this /* r30 */, class xVec3 & output /* r31 */) const {
    // Local variables
    class xVec3 pointOnPath; // r1+0x14
    float u; // f0
    class xVec3 dir; // r1+0x8
    class xMat3x3 mat; // r1+0x20

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800FDBF0 -> 0x800FDC74
float zSteeringPathMovePoints::GetProjectionOnPath(class zSteeringPathMovePoints * this /* r29 */, class xVec3 & output /* r30 */, class xVec3 & pos /* r31 */) const {
    // Local variables
    float u; // f1
}
// Range: 0x800FDC80 -> 0x800FDD60
void zSteeringPathMovePoints::GetFuturePointOnPath(class zSteeringPathMovePoints * this /* r29 */, class xVec3 & output /* r30 */, class xVec3 & currPos /* r31 */, float projectionDist /* f31 */) {
}
// Range: 0x800FDD60 -> 0x800FDDD8
void zSteeringPathMovePoints::GetUpVecAtPoint(class zSteeringPathMovePoints * this /* r29 */, class xVec3 & output /* r30 */, class xVec3 & currPos /* r31 */) const {
    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800FDDE0 -> 0x800FDE94
void zSteeringPathMovePoints::SetupNextMP(class zSteeringPathMovePoints * this /* r31 */, class xMovePoint * nextMP /* r8 */, class xVec3 & currPos /* r7 */) {
}
// Range: 0x800FDEA0 -> 0x800FDEFC
void zSteeringPathMovePoints::UpdateToNextMP(class zSteeringPathMovePoints * this /* r30 */, class xVec3 & currPos /* r31 */) {
    {
        // Range: 0x800FDEBC -> 0x800FDEE8
        // Local variables
        class xMovePoint * next; // r1+0x8
    }
}
// Range: 0x800FDF00 -> 0x800FDFA4
float zSteeringPathCircle::GetProjectionOnPath(class zSteeringPathCircle * this /* r29 */, class xVec3 & output /* r30 */, class xVec3 & pos /* r31 */) const {
    // Local variables
    class xVec3 pointOnPlane; // r1+0x14
}
// signature: zSteeringPathCircle::GetFuturePointOnPath(xVec3 &, const xVec3 &, float)
// Range: 0x800FDFB0 -> 0x800FE068
void zSteeringPathCircle::GetFuturePointOnPath(class zSteeringPathCircle * this /* r30 */, class xVec3 & output /* r31 */, float projectionDist /* f31 */) {
    // Local variables
    class xVec3 projectedPoint; // r1+0x14
    float angle; // f31
}
// signature: zSteeringPathCircle::GetUpVecAtPoint(xVec3 &, const xVec3 &) const
// Range: 0x800FE070 -> 0x800FE080
void zSteeringPathCircle::GetUpVecAtPoint(class zSteeringPathCircle * this /* r5 */) const {
}
