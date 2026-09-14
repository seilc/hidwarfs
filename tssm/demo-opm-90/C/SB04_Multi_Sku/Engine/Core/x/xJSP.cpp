/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xJSP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00411B80 -> 0x00411F74
*/
// Range: 0x411B80 -> 0x411F74
class xJSPNodeTree * xJSPNodeTreeBuild(class xJSPHeader * jsp /* r2 */) {
    /* anonymous block */ {
        // Range: 0x411B80 -> 0x411F74
        class RpAtomic * * atomCurr'182; // r2
        class RpClump * clump; // r2
        signed int i; // r9
        signed int j; // r8
        signed int atomCount; // r19
        class RpAtomic * * atomList; // r18
        class RpAtomic * * atomCurr; // r29+0x5C
        class xJSPNodeTreeLeaf * tleaf; // r17
        class RpGeometry * geom; // r2
        signed int numVert; // r2
        class RwV3d * vert; // r2
        class xJSPNodeTree * jntree; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xJSP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00411F80 -> 0x004122B8
*/
// Range: 0x411F80 -> 0x4122B8
static void RecurseSplitJSPNode(class xJSPNodeTreeLeaf * tleaf /* r20 */, signed int count /* r19 */, class TempSplitChild * childptr /* r18 */) {
    /* anonymous block */ {
        // Range: 0x411F80 -> 0x4122B8
        signed int i; // r9
        signed int bestaxis; // r29+0x8C
        signed int lastright; // r17
        float bestcoord; // r29+0x88
        class xJSPNodeTreeLeaf templeaf; // r29+0x60
        class TempSplit * thisSplit; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xJSP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004122C0 -> 0x0041271C
*/
// Range: 0x4122C0 -> 0x41271C
static signed int ChooseSplit_MeanMinSum(class xJSPNodeTreeLeaf * tleaf /* r30 */, signed int count /* r21 */, signed int & bestaxis /* r20 */, float & bestcoord /* r19 */) {
    /* anonymous block */ {
        // Range: 0x4122C0 -> 0x41271C
        float bestvolume; // r20
        signed int i; // r7
        signed int axis; // r18
        class RwV3d mean; // r29+0xC0
        float testarray[3]; // r29+0xB0
        float meancoord; // r2
        float coord; // r1
        float testvol; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xJSP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00412720 -> 0x00412A68
*/
// Range: 0x412720 -> 0x412A68
static float GetSplitVolumeSum(class xJSPNodeTreeLeaf * tleaf /* r2 */, signed int count /* r2 */, signed int axis /* r2 */, float coord /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x412720 -> 0x412A68
        signed int i; // r17
        signed int numleft; // r16
        signed int numright; // r25
        class RwBBox leftbox; // r29+0x40
        class RwBBox rightbox; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xJSP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00412A70 -> 0x00412B48
*/
// Range: 0x412A70 -> 0x412B48
static void xJSPNodeLightBuild(class xJSPHeader * jsp /* r16 */) {
    /* anonymous block */ {
        // Range: 0x412A70 -> 0x412B48
        class xJSPNodeLight * nlight; // r9
        class RwLLLink * cur; // r8
        class RwLLLink * end; // r2
        class RpClump * clump; // r2
        class RpAtomic * apAtom; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xJSP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00412B50 -> 0x00412CB0
*/
// Range: 0x412B50 -> 0x412CB0
void xJSP_Destroy(class xJSPHeader * jsp /* r17 */) {
    /* anonymous block */ {
        // Range: 0x412B50 -> 0x412CB0
        signed int i; // r6
        class RwLLLink * cur; // r4
        class RwLLLink * end; // r2
        class RpAtomic * apAtom; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xJSP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00412CB0 -> 0x00413248
*/
// Range: 0x412CB0 -> 0x413248
void xJSP_MultiStreamRead(void * data /* r19 */, unsigned int size /* r18 */, class xJSPHeader * * jsp /* r17 */) {
    /* anonymous block */ {
        // Range: 0x412CB0 -> 0x413248
        signed int i; // r7
        class RpClump * clump; // r18
        class xClumpCollBSPTree * colltree; // r2
        class xJSPHeaderEx * hdr; // r16
        class __rwMark mark; // r29+0x78
        class __rwMark * mp; // r2
        class xJSPHeader * tmphdr; // r2
        class RwV3d * currVec; // r29+0x8C
        class RwV3d * currVec; // r29+0x88
        class xJSPNodeTree * tmpNodeTree; // r2
        unsigned int * stripvecdata; // r2
        class __rwMark * mp2; // r2
        class __rwMark mark2; // r29+0x68
        class RwMemory rwmem; // r29+0x60
        class RwStream * stream; // r17
        signed int i; // r20
        signed int atomCount; // r2
        class RpAtomic * * atomList; // r17
        class RpAtomic * * atomCurr; // r29+0x84
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xJSP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00413250 -> 0x00413348
*/
// Range: 0x413250 -> 0x413348
unsigned int get_matid(class xJSPHeader * jsp /* r20 */, unsigned int old_mat_id /* r5 */, unsigned int jspAssetID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x413250 -> 0x413348
        char num[100]; // r29+0x60
        unsigned int matid; // r2
        signed int count; // r2
        class xJSPHeader * * jsplist; // r2
        signed int i; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xJSP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00413350 -> 0x0041336C
*/
// Range: 0x413350 -> 0x41336C
static class RpAtomic * ListAtomicCB(class RpAtomic * atomic /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x413350 -> 0x41336C
        class RpAtomic * * * aList; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xJSP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00413370 -> 0x004133BC
*/
// Range: 0x413370 -> 0x4133BC
static class RpAtomic * AddAtomicPrecalcedVertCB(class RpAtomic * atomic /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x413370 -> 0x4133BC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xJSP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004133C0 -> 0x0041342C
*/
// Range: 0x4133C0 -> 0x41342C
static class RpAtomic * AddAtomicCB(class RpAtomic * atomic /* r16 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4133C0 -> 0x41342C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xJSP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00413430 -> 0x004134A8
*/
// Range: 0x413430 -> 0x4134A8
static class RpMesh * AddMeshCB(class RpMesh * mesh /* r2 */, void * pData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x413430 -> 0x4134A8
        class RwV3d * * stripVert; // r2
        unsigned int i; // r9
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xJSP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004134B0 -> 0x004134DC
*/
// Range: 0x4134B0 -> 0x4134DC
static class RpAtomic * CountAtomicCB(class RpAtomic * atomic /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4134B0 -> 0x4134DC
    }
}


