/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zWallNet.h
*/
// signature: zWallNet::IsInsideBound(int, const xVec3 &) const
// Range: 0x800DA620 -> 0x800DA728
bool zWallNet::IsInsideBound(class zWallNet * this /* r29 */, class xVec3 & pos /* r30 */) const {
}
// signature: zWallNet::IsOnSideOfEdgeXZ(int, const xVec3 &, bool) const
// Range: 0x800CF7B0 -> 0x800CF84C
bool zWallNet::IsOnSideOfEdgeXZ() const {
}
// signature: zWallNet::EdgeIntersectsLineSegmentXZ(int, const xVec3 &, const xVec3 &) const
// Range: 0x801872E0 -> 0x801873C4
bool zWallNet::EdgeIntersectsLineSegmentXZ() const {
}
// signature: zWallNet::IsInTriangle(int, const xVec3 &) const
// Range: 0x801868B0 -> 0x80186BA4
bool zWallNet::IsInTriangle(class zWallNet * this /* r30 */, class xVec3 & pos /* r31 */) const {
}
// signature: zWallNet::GetTriEdgeNormal(int, int, xVec3 &) const
// Range: 0x800CF850 -> 0x800CF934
void zWallNet::GetTriEdgeNormal(int sptEdgeIndex /* r30 */, class xVec3 & oNormal /* r31 */) const {
}
// signature: zWallNet::GetTriConx(int, int) const
// Range: 0x800CF9C0 -> 0x800CF9D8
int zWallNet::GetTriConx() const {
}
// signature: zWallNet::IsInsideBoundXZ(zWallNetBound *, const xVec3 &) const
// Range: 0x800DA100 -> 0x800DA1F8
bool zWallNet::IsInsideBoundXZ() const {
    // Local variables
    int firstVertexID; // reg65535
    int lastVertexID; // reg65535
    float posX; // f5
    float posZ; // f6
    bool inside; // r7
    int i; // r8
    int j; // r6

    {
        // Range: 0x800DA124 -> 0x800DA1F0
        {
            // Range: 0x800DA158 -> 0x800DA198
            // Local variables
            float m; // f1
        }
        {
            // Range: 0x800DA19C -> 0x800DA1F0
            // Local variables
            float m; // f1
        }
    }
}
// signature: zWallNet::IsOnSideOfEdgeXZ(const zWallNetEdge *, const xVec3 &, bool) const
// Range: 0x80186360 -> 0x801863EC
bool zWallNet::IsOnSideOfEdgeXZ() const {
    // Local variables
    float dot; // f1
}
// signature: zWallNet::GetClosestPointOnEdgeXZ(const zWallNetEdge *, const xVec3 &, xVec3 &) const
// Range: 0x80186310 -> 0x80186360
void zWallNet::GetClosestPointOnEdgeXZ() const {
}
// Range: 0x800CF6F0 -> 0x800CF7A4
bool zWallNet::IsInTriangleXZ(class zWallNet * this /* r29 */, class zWallNetTriangle * tri /* r30 */, class xVec3 & pos /* r31 */) const {
}
// Range: 0x801A7F40 -> 0x801A82A4
bool zWallNet::IsInTriangle(class zWallNet * this /* r30 */, class zWallNetTriangle * tri /* r27 */, class xVec3 & pos /* r31 */) const {
    // Local variables
    float yOnTri; // f31
    float lowerLimit; // f2
    float upperLimit; // f1
}
// signature: zWallNet::FindYOnTriangleFromXZ(const zWallNetTriangle *, float, float, float &) const
// Range: 0x800DA730 -> 0x800DA9A8
bool zWallNet::FindYOnTriangleFromXZ(class zWallNet * this /* r30 */, float x /* f29 */, float z /* f28 */, float & outY /* r31 */) const {
    // Local variables
    int vID1; // r0
    int vID2; // r27
    int vID3; // r26
    class xVec3 v1; // r1+0x50
    class xVec3 v2; // r1+0x44
    class xVec3 v3; // r1+0x38
    class xVec3 pos; // r1+0x2C
    class xVec3 e0; // r1+0x20
    class xVec3 e1; // r1+0x14
    class xVec3 e2; // r1+0x8
    float dot01; // f0
    float dot02; // f0
    float dot11; // f0
    float dot12; // f0
    float dot22; // f0
    float denom; // f4
    float s; // f28
    float t; // f29
}
// Range: 0x801870B0 -> 0x801872D4
int zWallNet::GetConnectedTriangleIDOnPathXZ(class zWallNet * this /* r27 */, int triID /* r28 */, class xVec3 & srcPos /* r29 */, class xVec3 & dstPos /* r30 */) const {
}
// Range: 0x800DA050 -> 0x800DA0F8
bool zWallNet::IsInsideWallNetXZ(class zWallNet * this /* r27 */, class xVec3 & pos /* r28 */) const {
    // Local variables
    int numberOfBounds; // r0

    {
        // Range: 0x800DA09C -> 0x800DA0E0
        // Local variables
        int i; // r29
    }
}
// Range: 0x800DA580 -> 0x800DA618
bool zWallNet::IsInsideWallNet(class zWallNet * this /* r28 */, class xVec3 & pos /* r29 */) const {
    // Local variables
    int numberOfBounds; // r0

    {
        // Range: 0x800DA5CC -> 0x800DA600
        // Local variables
        int i; // r30
    }
}
