/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCSteeringPath.cpp
*/
// Range: 0x801E5E30 -> 0x801E5EEC
bool zSteeringPath::IsPointOutsidePath(class zSteeringPath * this /* r30 */, class xVec3 & point /* r31 */) const {
    // Local variables
    class xVec3 pointOnPath; // r1+0x20
    class xVec3 diff; // r1+0x14
}
// signature: zSteeringPathLine::GetProjectionOnPath(xVec3 &, const xVec3 &) const
// Range: 0x801E5EF0 -> 0x801E6090
float zSteeringPathLine::GetProjectionOnPath() const {
    // Local variables
    class xVec3 toPos; // r1+0x5C
    float u; // f3
}
// signature: zSteeringPathLine::GetFuturePointOnPath(xVec3 &, const xVec3 &, float)
// Range: 0x801E6090 -> 0x801E6174
void zSteeringPathLine::GetFuturePointOnPath(class zSteeringPathLine * this /* r30 */, class xVec3 & output /* r31 */, float projectionDist /* f31 */) {
    // Local variables
    class xVec3 currPosOnPath; // r1+0x8
    float u; // f0
    float du; // f3
}
// signature: zSteeringPathLine::GetUpVecAtPoint(xVec3 &, const xVec3 &) const
// Range: 0x801E6180 -> 0x801E61E0
void zSteeringPathLine::GetUpVecAtPoint(class zSteeringPathLine * this /* r6 */, class xVec3 & output /* r31 */) const {
    // Local variables
    class xMat3x3 mat; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zSteeringPathSpline::GetProjectionOnPath(xVec3 &, const xVec3 &) const
// Range: 0x801E61E0 -> 0x801E61FC
float zSteeringPathSpline::GetProjectionOnPath(class xVec3 & output /* r0 */) const {
}
// signature: zSteeringPathSpline::GetFuturePointOnPath(xVec3 &, const xVec3 &, float)
// Range: 0x801E6200 -> 0x801E6278
void zSteeringPathSpline::GetFuturePointOnPath(class zSteeringPathSpline * this /* r30 */, class xVec3 & output /* r31 */, float projectionDist /* f31 */) {
    // Local variables
    class xVec3 pointOnPath; // r1+0x8
    float u; // f0
    float currDist; // f0
}
// signature: zSteeringPathSpline::GetUpVecAtPoint(xVec3 &, const xVec3 &) const
// Range: 0x801E6280 -> 0x801E630C
void zSteeringPathSpline::GetUpVecAtPoint(class zSteeringPathSpline * this /* r30 */, class xVec3 & output /* r31 */) const {
    // Local variables
    class xVec3 pointOnPath; // r1+0x14
    float u; // f0
    class xVec3 dir; // r1+0x8
    class xMat3x3 mat; // r1+0x20

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x801E6310 -> 0x801E63A8
float zSteeringPathMovePoints::GetProjectionOnPath(class zSteeringPathMovePoints * this /* r29 */, class xVec3 & output /* r30 */, class xVec3 & pos /* r31 */) const {
    // Local variables
    float u; // f1
}
// Range: 0x801E63B0 -> 0x801E6798
void zSteeringPathMovePoints::GetFuturePointOnPath(class zSteeringPathMovePoints * this /* r31 */, class xVec3 & output /* r28 */, class xVec3 & currPos /* r29 */, float projectionDist /* f31 */) {
}
// Range: 0x801E67A0 -> 0x801E6838
void zSteeringPathMovePoints::GetUpVecAtPoint(class zSteeringPathMovePoints * this /* r29 */, class xVec3 & output /* r30 */, class xVec3 & currPos /* r31 */) const {
    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zSteeringPathCircle::GetProjectionOnPath(xVec3 &, const xVec3 &) const
// Range: 0x801E6840 -> 0x801E69CC
float zSteeringPathCircle::GetProjectionOnPath() const {
    // Local variables
    class xVec3 pointOnPlane; // r1+0x20
}
// signature: zSteeringPathCircle::GetFuturePointOnPath(xVec3 &, const xVec3 &, float)
// Range: 0x801E69D0 -> 0x801E6AEC
void zSteeringPathCircle::GetFuturePointOnPath(class zSteeringPathCircle * this /* r30 */, class xVec3 & output /* r31 */, float projectionDist /* f31 */) {
    // Local variables
    class xVec3 projectedPoint; // r1+0x20
    float angle; // f1
}
// signature: zSteeringPathCircle::GetUpVecAtPoint(xVec3 &, const xVec3 &) const
// Range: 0x801E6AF0 -> 0x801E6B0C
void zSteeringPathCircle::GetUpVecAtPoint() const {
}
