/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042F380 -> 0x0042F84C
*/
// Range: 0x42F380 -> 0x42F84C
static signed int FastIntersectSphereTriangle(class RwSphere * sphere /* r2 */, class RwV3d * v0 /* r2 */, class RwV3d * v1 /* r2 */, class RwV3d * v2 /* r2 */, class RwV3d * normal /* r2 */, float * distance /* r2 */, class RwV3d * vc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x42F380 -> 0x42F84C
        float nDotN; // r29
        float distToPlane; // r29
        float sphereRadiusSquared; // r10
        float factor; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042F850 -> 0x0042FB98
*/
// Range: 0x42F850 -> 0x42FB98
class xClumpCollBSPTree * xClumpColl_ForAllIntersections(class xClumpCollBSPTree * tree /* r16 */, class RpIntersection * intersection /* r2 */, class RpCollisionTriangle * (* callBack)(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *) /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x42F850 -> 0x42FB98
        class CallBackParam cbParam; // r29+0xE0
        class PolyLineTestParam isData; // r29+0x80
        class PolyTestParam isData; // r29+0x50
        class TestSphere testSphere; // r29+0xD8
        class PolyTestParam isData; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042FBA0 -> 0x0042FDE8
*/
// Range: 0x42FBA0 -> 0x42FDE8
static signed int LeafNodeBoxPolyIntersect(class xClumpCollBSPTriangle * triangles /* r20 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x42FBA0 -> 0x42FDE8
        class PolyTestParam * isData; // r23
        class CallBackParam * cbParam; // r2
        class RwV3d * v1; // r19
        class RwV3d * v2; // r18
        class RpCollisionTriangle collisionTri; // r29+0xA0
        float lengthSq; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042FDF0 -> 0x00430058
*/
// Range: 0x42FDF0 -> 0x430058
static signed int LeafNodeSpherePolyIntersect(class xClumpCollBSPTriangle * triangles /* r20 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x42FDF0 -> 0x430058
        class PolyTestParam * isData; // r2
        class CallBackParam * cbParam; // r2
        class TestSphere * testSphere; // r2
        class RwV3d * v0; // r2
        class RwV3d * v1; // r2
        class RwV3d * v2; // r2
        float distance; // r29+0xFC
        class RpCollisionTriangle collisionTri; // r29+0xD0
        class RwV3d vc[3]; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00430060 -> 0x00430464
*/
// Range: 0x430060 -> 0x430464
static signed int LeafNodeLinePolyIntersect(class xClumpCollBSPTriangle * triangles /* r20 */, void * data /* r19 */) {
    /* anonymous block */ {
        // Range: 0x430060 -> 0x430464
        class PolyLineTestParam * isData; // r2
        class CallBackParam * cbParam; // r2
        class RwV3d * v0; // r2
        class RwV3d * v1; // r5
        class RwV3d * v2; // r4
        float distance; // r29+0xFC
        class RpCollisionTriangle collisionTri; // r29+0xB0
        class RwV3d vTmp; // r29+0xF0
        class RwV3d vTmp2; // r29+0xE0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00430470 -> 0x0043107C
*/
// Range: 0x430470 -> 0x43107C
class xClumpCollBSPTree * xClumpColl_ForAllCapsuleLeafNodeIntersections(class xClumpCollBSPTree * tree /* r29+0xBC */, class RwLine * line /* r2 */, float radius /* r20 */, class xClumpCollV3dGradient * grad /* r21 */, signed int (* callBack)(class xClumpCollBSPTriangle *, void *) /* r29+0xB8 */, void * data /* r29+0xB4 */) {
    /* anonymous block */ {
        // Range: 0x430470 -> 0x43107C
        signed int nStack; // r20
        class nodeInfo nodeStack[33]; // r29+0x400
        class RwLine lineStack[33]; // r29+0xE0
        class RwLine currLine; // r29+0xC0
        class RwSplitBits lStart; // r29+0x55C
        class RwSplitBits lEnd; // r29+0x558
        class RwSplitBits rStart; // r29+0x554
        class RwSplitBits rEnd; // r29+0x550
        class xClumpCollBSPBranchNode * branch; // r3
        class RwV3d vTmp; // r29+0x540
        float delta; // r29+0x560
        class RwV3d vTmp; // r29+0x530
        float delta; // r29+0x560
        class RwV3d vLeft; // r29+0x520
        class RwV3d vRight; // r29+0x510
        float delta; // r29+0x560
        float delta; // r29+0x560
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00431080 -> 0x00431C70
*/
// Range: 0x431080 -> 0x431C70
class xClumpCollBSPTree * xClumpColl_ForAllLineLeafNodeIntersections(class xClumpCollBSPTree * tree /* r29+0xAC */, class RwLine * line /* r2 */, class xClumpCollV3dGradient * grad /* r21 */, signed int (* callBack)(class xClumpCollBSPTriangle *, void *) /* r29+0xA8 */, void * data /* r29+0xA4 */) {
    /* anonymous block */ {
        // Range: 0x431080 -> 0x431C70
        signed int nStack; // r20
        class nodeInfo nodeStack[33]; // r29+0x3F0
        class RwLine lineStack[33]; // r29+0xD0
        class RwLine currLine; // r29+0xB0
        class RwSplitBits lStart; // r29+0x54C
        class RwSplitBits lEnd; // r29+0x548
        class RwSplitBits rStart; // r29+0x544
        class RwSplitBits rEnd; // r29+0x540
        class xClumpCollBSPBranchNode * branch; // r3
        class RwV3d vTmp; // r29+0x530
        float delta; // r29+0x550
        class RwV3d vTmp; // r29+0x520
        float delta; // r29+0x550
        class RwV3d vLeft; // r29+0x510
        class RwV3d vRight; // r29+0x500
        float delta; // r29+0x550
        float delta; // r29+0x550
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00431C70 -> 0x00431DAC
*/
// Range: 0x431C70 -> 0x431DAC
class xClumpCollBSPTree * xClumpColl_ForAllBoxLeafNodeIntersections(class xClumpCollBSPTree * tree /* r20 */, class RwBBox * box /* r19 */, signed int (* callBack)(class xClumpCollBSPTriangle *, void *) /* r18 */, void * data /* r17 */) {
    /* anonymous block */ {
        // Range: 0x431C70 -> 0x431DAC
        signed int nStack; // r16
        class nodeInfo nodeStack[33]; // r29+0x60
        class xClumpCollBSPBranchNode * branch; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00431DB0 -> 0x00431DB8
*/
// Range: 0x431DB0 -> 0x431DB8
void xClumpColl_InstancePointers() {
    /* anonymous block */ {
        // Range: 0x431DB0 -> 0x431DB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00431DC0 -> 0x00431E44
*/
// Range: 0x431DC0 -> 0x431E44
class xClumpCollBSPTree * xClumpColl_StaticBufferInit(void * data /* r18 */) {
    /* anonymous block */ {
        // Range: 0x431DC0 -> 0x431E44
        unsigned int * header; // r2
        unsigned int numBranchNodes; // r2
        unsigned int numTriangles; // r2
        class xClumpCollBSPTree * tree; // r2
    }
}


