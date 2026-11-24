/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zIWallNet.cpp
*/
// Range: 0x800CF2F0 -> 0x800CF384
bool zIWallNet::FindRandomPositionOnWallNetXZ(class zWallNet * wallNet /* r29 */, class xVec3 & center /* r30 */, float radius /* f31 */, class xVec3 & oRandomPosition /* r31 */) {
    // Local variables
    class zWallNetPositionXZ randomizeCenter; // r1+0x8
}
// Range: 0x800CF390 -> 0x800CF510
bool zIWallNet::FindRandomPositionOnWallNetXZ(class zWallNetPositionXZ * center /* r28 */, float radius /* f31 */, class xVec3 & oRandomPosition /* r29 */) {
    {
        // Range: 0x800CF3F4 -> 0x800CF4B8
        // Local variables
        int i; // r30

        {
            // Range: 0x800CF3F4 -> 0x800CF4B8
            // Local variables
            class xVec3 testPoint; // r1+0x8
            float rad; // f26
            float angle; // f27
        }
    }
}
// Range: 0x800CF510 -> 0x800CF6E4
bool zIWallNet::FindRandomPositionOnWallNetXZ(class zWallNet * wallNet /* r30 */, class xVec3 & oRandomPosition /* r31 */) {
    // Local variables
    int v1; // r0
    int v2; // r7
    int v3; // r8
    class xVec3 vert1; // r1+0x5C
    class xVec3 vert2; // r1+0x50
    class xVec3 vert3; // r1+0x44
    float u; // f30
    float v; // f0
    float temp; // f0
    float a; // f30
    float b; // f31
    float c; // f1
}
// Range: 0x800CF9E0 -> 0x800CFD2C
bool zIWallNet::IntersectsSweptCircle(class zWallNet * wallNet /* r22 */, class zWallNetPositionXZ * swcStart /* r18 */, class xVec3 * swcDir /* r17 */, float swcRadius /* f30 */, float swcDistance /* f31 */, class zWallNetCollis & collis /* r23 */) {
    // Local variables
    class zSweptCircle swc; // r1+0x48
    int searchTriangles[256]; // r1+0x488
    int searchTrianglesFront; // r27
    int searchTrianglesBack; // r26
    int isInSearchTriangles[256]; // r1+0x88

    {
        // Range: 0x800CFA90 -> 0x800CFCB4
        // Local variables
        class zSweptCircle tempSwc; // r1+0x8
        int curSearchTriangle; // r25

        {
            // Range: 0x800CFA90 -> 0x800CFCA4
            // Local variables
            int i; // r24

            {
                // Range: 0x800CFA90 -> 0x800CFCA4
                // Local variables
                int connectedTriangle; // r0
            }
        }
    }
}
// signature: zIWallNet::FindWallNet(const xVec3 &, eWallNetUserType, xBase *, int *, bool)
// Range: 0x800CFD30 -> 0x800CFE1C
class zWallNet * zIWallNet::FindWallNet(class xVec3 & pos /* r27 */, int * outTriID /* r28 */) {
    // Local variables
    class FindWNCB finder; // r1+0x8

    // References
    // -> class zGlobals globals;
}
