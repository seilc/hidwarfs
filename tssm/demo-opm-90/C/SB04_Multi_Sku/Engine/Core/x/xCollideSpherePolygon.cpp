/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSpherePolygon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0041C120 -> 0x0041C320
*/
// Range: 0x41C120 -> 0x41C320
static unsigned char PolygonTestBH0a(signed int i /* r21 */, float closest_dist_squ /* r20 */, class xPlane & surface /* r23 */, class xEdge * edges /* r20 */, signed int num_edges /* r19 */, class xSweptSphere & sphere /* r18 */, class xCollideSphereToPolygonResults & results /* r17 */) {
    /* anonymous block */ {
        // Range: 0x41C120 -> 0x41C320
        class xCollideSphereToLineSegmentResults edge_collide; // r29+0xA0
        class xCollideSphereToPointResults vertex_collide; // r29+0xBC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSpherePolygon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0041C320 -> 0x0041C5C8
*/
// Range: 0x41C320 -> 0x41C5C8
static unsigned char PolygonTestAH0c(signed int i /* r21 */, float closest_dist_squ /* r20 */, class xPlane & surface /* r23 */, class xEdge * edges /* r22 */, signed int num_edges /* r20 */, class xSweptSphere & sphere /* r19 */, class xCollideSphereToPolygonResults & results /* r18 */) {
    /* anonymous block */ {
        // Range: 0x41C320 -> 0x41C5C8
        class xCollideSphereToLineSegmentResults edge_collide; // r29+0xA0
        class xCollideSphereToPointResults vertex_collide; // r29+0xBC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSpherePolygon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0041C5D0 -> 0x0041C754
*/
// Range: 0x41C5D0 -> 0x41C754
static unsigned char PolygonTestAH0b(signed int i /* r21 */, float closest_dist_squ /* r20 */, class xEdge * edges /* r2 */, signed int num_edges /* r20 */, class xSweptSphere & sphere /* r19 */, class xCollideSphereToPolygonResults & results /* r18 */) {
    /* anonymous block */ {
        // Range: 0x41C5D0 -> 0x41C754
        class xCollideSphereToLineSegmentResults edge_collide; // r29+0x80
        class xCollideSphereToPointResults vertex_collide; // r29+0x9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSpherePolygon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0041C760 -> 0x0041CA30
*/
// Range: 0x41C760 -> 0x41CA30
static unsigned char PolygonTestAH0a(signed int i /* r21 */, float closest_dist_squ /* r20 */, class xEdge * edges /* r20 */, signed int num_edges /* r22 */, class xSweptSphere & sphere /* r19 */, class xCollideSphereToPolygonResults & results /* r18 */) {
    /* anonymous block */ {
        // Range: 0x41C760 -> 0x41CA30
        class xCollideSphereToLineSegmentResults edge_collide; // r29+0x90
        class xCollideSphereToPointResults vertex_collide; // r29+0xAC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSpherePolygon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0041CA30 -> 0x0041D648
*/
// Range: 0x41CA30 -> 0x41D648
static unsigned char PolygonTestSphereOnPlane(class xPlane & surface /* r23 */, class xEdge * edges /* r21 */, signed int num_edges /* r20 */, class xSweptSphere & sphere /* r19 */, class xCollideSphereToPolygonResults & results /* r18 */, float vertical_d0 /* r29+0xB0 */) {
    /* anonymous block */ {
        // Range: 0x41CA30 -> 0x41D648
        float above_edge_de; // r29+0xB0
        class xCollideSphereToLineSegmentResults edge_collide; // r29+0x90
        class xCollideSphereToPointResults vertex_collide; // r29+0xAC
        signed int i; // r17
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSpherePolygon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0041D650 -> 0x0041D7F0
*/
// Range: 0x41D650 -> 0x41D7F0
unsigned char xSweptSphereToPolygon(class xSweptSphere & sphere /* r3 */, class xPlane & surface /* r2 */, class xEdge * edges /* r2 */, signed int num_edges /* r2 */, class xCollideSphereToPolygonResults & results /* r16 */) {
    /* anonymous block */ {
        // Range: 0x41D650 -> 0x41D7F0
        float vertical_de; // r29+0x100
        float to_plane_move_dist; // r20
        class xSweptSphere at_plane_sphere; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSpherePolygon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0041D7F0 -> 0x0041DD44
*/
// Range: 0x41D7F0 -> 0x41DD44
unsigned char xSweptSphereToLineSement(class xSweptSphere & sphere /* r2 */, class xVec3 & segment_start /* r2 */, class xVec3 & segment_dir /* r2 */, float segment_length /* r29+0x10 */, class xCollideSphereToLineSegmentResults & results /* r2 */) {
    /* anonymous block */ {
        // Range: 0x41D7F0 -> 0x41DD44
        float proj_center_along_seg_de; // r16
        float proj_center_above_seg_de; // r1
        float travel_total; // r29+0x10
        float travel_percent; // r29+0x10
        float impact_along_dist; // r29+0x10
        float travel_total; // r29+0x10
        float travel_percent; // r29+0x10
        float impact_along_dist; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSpherePolygon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0041DD50 -> 0x0041DE54
*/
// Range: 0x41DD50 -> 0x41DE54
unsigned char xSweptSphereToPoint(class xSweptSphere & sphere /* r2 */, class xVec3 & pt /* r2 */, class xCollideSphereToPointResults & results /* r2 */) {
    /* anonymous block */ {
        // Range: 0x41DD50 -> 0x41DE54
        float sphere_radius_squ; // r29
        float along_d_impact; // r29
    }
}


