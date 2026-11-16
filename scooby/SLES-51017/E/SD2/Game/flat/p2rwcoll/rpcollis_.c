/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\rpcollis_.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char rcsid[68]; // size: 0x44, address: 0x0
signed int _rpCollisionNumInstances; // size: 0x4, address: 0x358FD0
signed int _rpCollisionGlobalsOffset; // size: 0x4, address: 0x358FD4
signed int _rpCollisionAtomicDataOffset; // size: 0x4, address: 0x358FD8
signed int _rpCollisionGeometryDataOffset; // size: 0x4, address: 0x358FDC
signed int _rpCollisionWorldSectorDataOffset; // size: 0x4, address: 0x358FE0
signed int CollisionDataStreamGetSize(void *, signed int, signed int); // size: 0x0, address: 0x275EC0
class RwStream * CollisionDataStreamWrite(class RwStream *, signed int, void *, signed int, signed int); // size: 0x0, address: 0x2760B0
class RwStream * CollisionDataStreamRead(class RwStream *, signed int, void *, signed int, signed int); // size: 0x0, address: 0x275F20
void * CollisionDataDestroy(void *, signed int, signed int); // size: 0x0, address: 0x2761D0
void * CollisionDataCreate(void *, signed int, signed int); // size: 0x0, address: 0x2761C0
void * CollisionAtomicInit(void *, signed int, signed int); // size: 0x0, address: 0x2761A0
void * CollisionClose(void *, signed int, signed int); // size: 0x0, address: 0x276250
void * CollisionOpen(void *, signed int, signed int); // size: 0x0, address: 0x276270
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x2B6420
// total size: 0x10
class RpCollisionData {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    class RpCollBSPTree * tree; // offset 0x4, size 0x4
    signed int numTriangles; // offset 0x8, size 0x4
    unsigned short * triangleMap; // offset 0xC, size 0x4
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
// total size: 0x8
class RpCollBSPTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short index; // offset 0x6, size 0x2
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
// total size: 0x4
class RpCollBSPLeafNode {
    // Members
public:
    unsigned short numPolygons; // offset 0x0, size 0x2
    unsigned short firstPolygon; // offset 0x2, size 0x2
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
// total size: 0xC
class RwStreamMemory {
    // Members
public:
    unsigned int position; // offset 0x0, size 0x4
    unsigned int nSize; // offset 0x4, size 0x4
    unsigned char * memBlock; // offset 0x8, size 0x4
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
// total size: 0x10
class RpCollBSPTree {
    // Members
public:
    unsigned int numLeafNodes; // offset 0x0, size 0x4
    class RpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    class RpCollBSPLeafNode * leafNodes; // offset 0x8, size 0x4
    unsigned char pad[4]; // offset 0xC, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\rpcollis_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00275D60 -> 0x00275EB4
*/
// Range: 0x275D60 -> 0x275EB4
signed int RpCollisionPluginAttach() {
    /* anonymous block */ {
        // Range: 0x275D60 -> 0x275EB4
        signed int result; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\rpcollis_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00275EC0 -> 0x00275F14
*/
// Range: 0x275EC0 -> 0x275F14
static signed int CollisionDataStreamGetSize(void * object /* r2 */, signed int offsetInObject /* r2 */) {
    /* anonymous block */ {
        // Range: 0x275EC0 -> 0x275F14
        unsigned int binarySize; // r17
        class RpCollisionData * data; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\rpcollis_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00275F20 -> 0x002760AC
*/
// Range: 0x275F20 -> 0x2760AC
static class RwStream * CollisionDataStreamRead(class RwStream * stream /* r21 */, signed int binaryLength /* r2 */, void * object /* r20 */, signed int offset /* r22 */) {
    /* anonymous block */ {
        // Range: 0x275F20 -> 0x2760AC
        signed int i; // r29+0x8C
        unsigned short * triIndex; // r18
        signed int numTri; // r17
        signed int treeSize; // r17
        signed int numTris; // r29+0x88
        signed int numLeaves; // r29+0x84
        class RpCollisionData * data; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\rpcollis_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002760B0 -> 0x00276194
*/
// Range: 0x2760B0 -> 0x276194
static class RwStream * CollisionDataStreamWrite(class RwStream * stream /* r16 */, void * object /* r2 */, signed int offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2760B0 -> 0x276194
        signed int i; // r29+0x4C
        unsigned short * triIndex; // r17
        signed int numTri; // r18
        class RpCollisionData * data; // r17
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\rpcollis_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002761A0 -> 0x002761B4
*/
// Range: 0x2761A0 -> 0x2761B4
static void * CollisionAtomicInit(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2761A0 -> 0x2761B4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\rpcollis_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002761C0 -> 0x002761D0
*/
// Range: 0x2761C0 -> 0x2761D0
static void * CollisionDataCreate(void * object /* r2 */, signed int offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2761C0 -> 0x2761D0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\rpcollis_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002761D0 -> 0x00276248
*/
// Range: 0x2761D0 -> 0x276248
static void * CollisionDataDestroy(void * object /* r16 */, signed int offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2761D0 -> 0x276248
        class RpCollisionData * * extData; // r17
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\rpcollis_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00276250 -> 0x00276264
*/
// Range: 0x276250 -> 0x276264
static void * CollisionClose(void * instance /* r2 */) {
    /* anonymous block */ {
        // Range: 0x276250 -> 0x276264
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\rpcollis_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00276270 -> 0x00276298
*/
// Range: 0x276270 -> 0x276298
static void * CollisionOpen(void * instance /* r2 */) {
    /* anonymous block */ {
        // Range: 0x276270 -> 0x276298
    }
}


