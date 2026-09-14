/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctbsp_.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char rcsid[12]; // size: 0xC, address: 0x0
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x2B5AD0
// total size: 0x10
class RpCollBSPTree {
    // Members
public:
    unsigned int numLeafNodes; // offset 0x0, size 0x4
    class RpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    class RpCollBSPLeafNode * leafNodes; // offset 0x8, size 0x4
    unsigned char pad[4]; // offset 0xC, size 0x4
};
// total size: 0x4
class RpCollBSPLeafNode {
    // Members
public:
    unsigned short numPolygons; // offset 0x0, size 0x2
    unsigned short firstPolygon; // offset 0x2, size 0x2
};
enum RwStreamType {
    rwNASTREAM = 0,
    rwSTREAMFILE = 1,
    rwSTREAMFILENAME = 2,
    rwSTREAMMEMORY = 3,
    rwSTREAMCUSTOM = 4,
    rwSTREAMTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x14
class RwStreamUnion {
    // Members
public:
    union { // inferred
        class RwStreamMemory memory; // offset 0x0, size 0xC
        class RwStreamFile file; // offset 0x0, size 0x4
        class RwStreamCustom custom; // offset 0x0, size 0x14
    };
};
enum RwStreamAccessType {
    rwNASTREAMACCESS = 0,
    rwSTREAMREAD = 1,
    rwSTREAMWRITE = 2,
    rwSTREAMAPPEND = 3,
    rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
class RpCollBSPBranchNode {
    // Members
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned char leftType; // offset 0x2, size 0x1
    unsigned char rightType; // offset 0x3, size 0x1
    unsigned short leftNode; // offset 0x4, size 0x2
    unsigned short rightNode; // offset 0x6, size 0x2
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x24
class RwStream {
    // Members
public:
    enum RwStreamType type; // offset 0x0, size 0x4
    enum RwStreamAccessType accessType; // offset 0x4, size 0x4
    signed int position; // offset 0x8, size 0x4
    class RwStreamUnion Type; // offset 0xC, size 0x14
    signed int rwOwned; // offset 0x20, size 0x4
};
// total size: 0xC
class RwStreamMemory {
    // Members
public:
    unsigned int position; // offset 0x0, size 0x4
    unsigned int nSize; // offset 0x4, size 0x4
    unsigned char * memBlock; // offset 0x8, size 0x4
};
// total size: 0x8
class nodeInfo {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned int index; // offset 0x4, size 0x4
};
// total size: 0x4
class RwSplitBits {
    // Members
public:
    union { // inferred
        float nReal; // offset 0x0, size 0x4
        signed int nInt; // offset 0x0, size 0x4
        unsigned int nUInt; // offset 0x0, size 0x4
    };
};
// total size: 0x4
class RwStreamFile {
    // Members
public:
    union { // inferred
        void * fpFile; // offset 0x0, size 0x4
        void * constfpFile; // offset 0x0, size 0x4
    };
};
// total size: 0x18
class RwLine {
    // Members
public:
    class RwV3d start; // offset 0x0, size 0xC
    class RwV3d end; // offset 0xC, size 0xC
};
// total size: 0x18
class RpV3dGradient {
    // Members
public:
    float dydx; // offset 0x0, size 0x4
    float dzdx; // offset 0x4, size 0x4
    float dxdy; // offset 0x8, size 0x4
    float dzdy; // offset 0xC, size 0x4
    float dxdz; // offset 0x10, size 0x4
    float dydz; // offset 0x14, size 0x4
};
// total size: 0x14
class RwStreamCustom {
    // Members
public:
    signed int (* sfnclose)(void *); // offset 0x0, size 0x4
    unsigned int (* sfnread)(void *, void *, unsigned int); // offset 0x4, size 0x4
    signed int (* sfnwrite)(void *, void *, unsigned int); // offset 0x8, size 0x4
    signed int (* sfnskip)(void *, unsigned int); // offset 0xC, size 0x4
    void * data; // offset 0x10, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctbsp_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270520 -> 0x0027065C
*/
// Range: 0x270520 -> 0x27065C
class RpCollBSPTree * _rpCollBSPTreeForAllBoxLeafNodeIntersections(class RpCollBSPTree * tree /* r20 */, class RwBBox * box /* r19 */, signed int (* callBack)(signed int, signed int, void *) /* r18 */, void * data /* r17 */) {
    /* anonymous block */ {
        // Range: 0x270520 -> 0x27065C
        class RpCollBSPBranchNode * branch; // r4
        class RpCollBSPLeafNode * leaf; // r2
        class nodeInfo nodeStack[33]; // r29+0x60
        signed int nStack; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctbsp_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270660 -> 0x00270FCC
*/
// Range: 0x270660 -> 0x270FCC
class RpCollBSPTree * _rpCollBSPTreeForAllLineLeafNodeIntersections(class RpCollBSPTree * tree /* r23 */, class RwLine * line /* r2 */, class RpV3dGradient * grad /* r21 */, signed int (* callBack)(signed int, signed int, void *) /* r30 */, void * data /* r29+0xDC */) {
    /* anonymous block */ {
        // Range: 0x270660 -> 0x270FCC
        float delta; // r5
        float delta; // r6
        float delta; // r5
        float delta; // r5
        class RpCollBSPBranchNode * branch; // r2
        class RwSplitBits rEnd; // r29+0x53C
        class RwSplitBits rStart; // r29+0x538
        class RwSplitBits lEnd; // r29+0x534
        class RwSplitBits lStart; // r29+0x530
        class RpCollBSPLeafNode * leaf; // r2
        class RwLine currLine; // r29+0x510
        class RwLine lineStack[33]; // r29+0x1F0
        class nodeInfo nodeStack[33]; // r29+0xE0
        signed int nStack; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctbsp_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270FD0 -> 0x00270FE8
*/
// Range: 0x270FD0 -> 0x270FE8
signed int _rpCollBSPTreeStreamGetSize(class RpCollBSPTree * tree /* r2 */) {
    /* anonymous block */ {
        // Range: 0x270FD0 -> 0x270FE8
        signed int size; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctbsp_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270FF0 -> 0x00271178
*/
// Range: 0x270FF0 -> 0x271178
class RpCollBSPTree * _rpCollBSPTreeStreamRead(class RpCollBSPTree * tree /* r19 */, class RwStream * stream /* r18 */) {
    /* anonymous block */ {
        // Range: 0x270FF0 -> 0x271178
        unsigned int data; // r29+0x5C
        unsigned int indices; // r29+0x58
        unsigned int types; // r29+0x54
        class RpCollBSPLeafNode * leaf; // r17
        class RpCollBSPBranchNode * branch; // r17
        unsigned int numBranches; // r16
        unsigned int numLeaves; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctbsp_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00271180 -> 0x002712D8
*/
// Range: 0x271180 -> 0x2712D8
class RpCollBSPTree * _rpCollBSPTreeStreamWrite(class RpCollBSPTree * tree /* r19 */, class RwStream * stream /* r18 */) {
    /* anonymous block */ {
        // Range: 0x271180 -> 0x2712D8
        unsigned int data; // r29+0x5C
        unsigned int indices; // r29+0x58
        unsigned int types; // r29+0x54
        class RpCollBSPLeafNode * leaf; // r17
        class RpCollBSPBranchNode * branch; // r17
        unsigned int numBranches; // r16
        unsigned int numLeaves; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctbsp_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002712E0 -> 0x0027130C
*/
// Range: 0x2712E0 -> 0x27130C
void _rpCollBSPTreeDestroy(class RpCollBSPTree * tree /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2712E0 -> 0x27130C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctbsp_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00271310 -> 0x00271328
*/
// Range: 0x271310 -> 0x271328
signed int _rpCollBSPTreeMemGetSize(signed int numLeafNodes /* r2 */) {
    /* anonymous block */ {
        // Range: 0x271310 -> 0x271328
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctbsp_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00271330 -> 0x0027136C
*/
// Range: 0x271330 -> 0x27136C
class RpCollBSPTree * _rpCollBSPTreeInit(class RpCollBSPTree * tree /* r2 */, signed int numLeafNodes /* r2 */) {
    /* anonymous block */ {
        // Range: 0x271330 -> 0x27136C
        signed int numBranchNodes; // r2
    }
}


