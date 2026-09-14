/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSpherePolygonUnprocessed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00416F40 -> 0x004170F0
*/
// Range: 0x416F40 -> 0x4170F0
static unsigned char TriangleTestSphereToTwoPoints(class xSweptSphere & sphere /* r19 */, class xCollideSphereToPolygonResults & results /* r18 */, class xVec3 & pt0 /* r17 */, class xVec3 & pt1 /* r16 */) {
    /* anonymous block */ {
        // Range: 0x416F40 -> 0x4170F0
        class xCollideSphereToPointResults vertex_collide0; // r29+0x5C
        class xCollideSphereToPointResults vertex_collide1; // r29+0x58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSpherePolygonUnprocessed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004170F0 -> 0x00417558
*/
// Range: 0x4170F0 -> 0x417558
static unsigned char TriangleTestSphereToThreePoints(class xSweptSphere & sphere /* r20 */, class xCollideSphereToPolygonResults & results /* r19 */, class xVec3 & pt0 /* r18 */, class xVec3 & pt1 /* r17 */, class xVec3 & pt2 /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4170F0 -> 0x417558
        class xCollideSphereToPointResults vertex_collide0; // r29+0x6C
        class xCollideSphereToPointResults vertex_collide1; // r29+0x68
        class xCollideSphereToPointResults vertex_collide2; // r29+0x64
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSpherePolygonUnprocessed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00417560 -> 0x00417834
*/
// Range: 0x417560 -> 0x417834
unsigned char xSweptSphereToTriangleUnprocessed(class xSweptSphere & sphere /* r3 */, class xVec3 & pt0 /* r2 */, class xVec3 & pt1 /* r2 */, class xVec3 & pt2 /* r2 */, class xCollideSphereToPolygonResults & results /* r16 */, class xPlane & surface /* r2 */) {
    /* anonymous block */ {
        // Range: 0x417560 -> 0x417834
        float vertical_de; // r29+0x100
        float to_plane_move_dist; // r20
        class xSweptSphere at_plane_sphere; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSpherePolygonUnprocessed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00417840 -> 0x00417C60
*/
// Range: 0x417840 -> 0x417C60
unsigned char xSweptSphereToTriangleDoubleSidedUnprocessed(class xSweptSphere & sphere /* r3 */, class xVec3 & pt0 /* r2 */, class xVec3 & pt1 /* r2 */, class xVec3 & pt2 /* r2 */, class xCollideSphereToPolygonResults & results /* r16 */, class xPlane & surface /* r2 */) {
    /* anonymous block */ {
        // Range: 0x417840 -> 0x417C60
        float vertical_de; // r29+0x1D0
        float to_plane_move_dist; // r20
        class xSweptSphere at_plane_sphere; // r29+0x100
        float vertical_de; // r29+0x1D0
        float to_plane_move_dist; // r20
        class xSweptSphere at_plane_sphere; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSpherePolygonUnprocessed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00417C60 -> 0x00418CD8
*/
// Range: 0x417C60 -> 0x418CD8
unsigned char TriangleTestSphereOnPlaneUnprocessed(class xPlane & surface /* r21 */, class xVec3 & p0 /* r20 */, class xVec3 & p1 /* r19 */, class xVec3 & p2 /* r18 */, class xSweptSphere & sphere /* r17 */, class xCollideSphereToPolygonResults & results /* r16 */, float vertical_d0 /* r29+0x190 */) {
    /* anonymous block */ {
        // Range: 0x417C60 -> 0x418CD8
        class xVec3 edge0dir; // r29+0x180
        class xVec3 edge1dir; // r29+0x170
        class xVec3 edge2dir; // r29+0x160
        class xPlane edge0plane; // r29+0xF0
        class xPlane edge1plane; // r29+0xE0
        class xPlane edge2plane; // r29+0xD0
        float above_edge_de; // r29+0x190
        class xCollideSphereToLineSegmentResults edge_collide; // r29+0xC0
    }
}


