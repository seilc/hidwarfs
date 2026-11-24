/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zIWallNet.cpp
*/
// Range: 0x801864A0 -> 0x80186648
bool zIWallNet::FindRandomPositionOnWallNetXZ(class zWallNetPositionXZ * center /* r28 */, float radius /* f31 */, class xVec3 & oRandomPosition /* r29 */) {
    {
        // Range: 0x8018650C -> 0x801865D0
        // Local variables
        int i; // r30

        {
            // Range: 0x8018650C -> 0x801865D0
            // Local variables
            class xVec3 testPoint; // r1+0x8
            float rad; // f26
            float angle; // f27
        }
    }
}
// Range: 0x80186650 -> 0x80186978
bool zIWallNet::FindRandomPositionOnWallNetXZ(class zWallNet * wallNet /* r29 */, class xVec3 & oRandomPosition /* r31 */) {
    // Local variables
    int v1; // r0
    int v2; // r5
    int v3; // r7
    class xVec3 vert1; // r1+0x98
    class xVec3 vert2; // r1+0x8C
    class xVec3 vert3; // r1+0x80
    float u; // f31
    float v; // f0
    float temp; // f0
    float a; // f8
    float b; // f9
    float c; // f3
}
// Range: 0x80186B70 -> 0x80186F7C
bool zIWallNet::IntersectsSweptCircle(class zWallNet * wallNet /* r19 */, class zWallNetPositionXZ * swcStart /* r21 */, class xVec3 * swcDir /* r18 */, float swcRadius /* f29 */, float swcDistance /* f31 */, class zWallNetCollis & collis /* r20 */) {
    // Local variables
    class zSweptCircle swc; // r1+0x58
    int searchTriangles[256]; // r1+0x498
    int searchTrianglesFront; // r24
    int searchTrianglesBack; // r23
    int isInSearchTriangles[256]; // r1+0x98

    {
        // Range: 0x80186C28 -> 0x80186EEC
        // Local variables
        class zSweptCircle tempSwc; // r1+0x18
        int curSearchTriangle; // r22

        {
            // Range: 0x80186C28 -> 0x80186ED4
            // Local variables
            int i; // r21
        }
    }
}
// signature: zIWallNet::FindWallNet(const xVec3 &, eWallNetUserType, xBase *, int *, bool)
// Range: 0x80186F80 -> 0x8018706C
class zWallNet * zIWallNet::FindWallNet(class xVec3 & pos /* r27 */, int * outTriID /* r28 */) {
    // Local variables
    class FindWNCB finder; // r1+0x8

    // References
    // -> class zGlobals globals;
}
