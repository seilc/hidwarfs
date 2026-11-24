/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zIWallNet.cpp
*/
// Range: 0x800E3470 -> 0x800E3840
bool zIWallNet::GetWallNetNavHandleOutsideCases(class zWallNetPosition * start /* r30 */, class zWallNetPosition * destination /* r27 */, float boundRadius /* f31 */, class zWallNetNav * oNav /* r31 */) {
    {
        // Range: 0x800E3648 -> 0x800E3660
        // Local variables
        class xVec3 edgeNormal; // r1+0x14
    }
    {
        // Range: 0x800E3660 -> 0x800E3678
        // Local variables
        class xVec3 edgeNormal; // r1+0x8
    }
    {
        // Range: 0x800E37A4 -> 0x800E3804
        // Local variables
        class zWallNetPosition insideDest; // r1+0x20
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800E3840 -> 0x800E3D48
void zIWallNet::GetWallNetNav(class zWallNetPosition * start /* r21 */, class zWallNetPosition * destination /* r22 */, float boundRadius /* f29 */, class zWallNetNav * oNav /* r23 */) {
    // Local variables
    class zWallNetFrustumXZ searchFrustum; // r1+0x8
    int curSearchTriangle; // r26
    int prevEdgeId; // r25
    int curEdgeID; // r24

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800E3D80 -> 0x800E3F38
bool zIWallNet::IntersectsLine(class zWallNet * wallNet /* r27 */, class zWallNetPosition * lineStart /* r31 */, class xVec3 * lineEnd /* r28 */, class zWallNetCollis * collis /* r29 */) {
    // Local variables
    int lineStartTriId; // reg65535
    class xVec3 * startPos; // r31
    int curSearchTriangle; // r30
    int nextSearchTriangle; // r4
    class xVec3 triCollPoint; // r1+0xC
    int sptEdgeIndex; // r1+0x8
    int collisEdgeID; // r6
}
// signature: zIWallNet::IntersectsLine(const zWallNet *, const zWallNetPosition *, const xVec3 *, float, zWallNetCollis &)
// Range: 0x800E48F0 -> 0x800E4944
bool zIWallNet::IntersectsLine() {
    // Local variables
    class xVec3 lineEnd; // r1+0x8
}
// Range: 0x800E4950 -> 0x800E4D44
bool zIWallNet::IntersectsSweptCircle(class zWallNet * wallNet /* r19 */, class zWallNetPosition * swcStart /* r21 */, class xVec3 * swcDir /* r18 */, float swcRadius /* f29 */, float swcDistance /* f31 */, class zWallNetCollis * collis /* r20 */) {
    // Local variables
    class zSweptCircle swc; // r1+0x58
    int searchTriangles[256]; // r1+0x498
    int searchTrianglesFront; // r24
    int searchTrianglesBack; // r23
    int isInSearchTriangles[256]; // r1+0x98

    {
        // Range: 0x800E49FC -> 0x800E4CC0
        // Local variables
        class zSweptCircle tempSwc; // r1+0x18
        int curSearchTriangle; // r22

        {
            // Range: 0x800E49FC -> 0x800E4CA8
            // Local variables
            int i; // r21
        }
    }
}
