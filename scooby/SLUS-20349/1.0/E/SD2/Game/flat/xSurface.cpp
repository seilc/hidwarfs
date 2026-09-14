/*
    Compile unit: E:\SD2\Game\flat\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class xSurface * surfs; // size: 0x4, address: 0x35818C
static unsigned short nsurfs; // size: 0x2, address: 0x358190
unsigned int gActiveHeap; // size: 0x4, address: 0x357CAC
// total size: 0x28
class xSurface : public xBase {
    // Members
public:
    unsigned int idx; // offset 0x10, size 0x4
    unsigned int type; // offset 0x14, size 0x4
    union { // inferred
        unsigned int mat_idx; // offset 0x18, size 0x4
        class _xEnt * ent; // offset 0x18, size 0x4
        void * obj; // offset 0x18, size 0x4
    };
    float friction; // offset 0x1C, size 0x4
    unsigned char state; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    void * moprops; // offset 0x24, size 0x4
};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class p2LinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
// total size: 0x0
class xSerial {};
// total size: 0x20
class p2LinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x44
class _xCollis {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    float dist; // offset 0xC, size 0x4
    class _xVec3 norm; // offset 0x10, size 0xC
    class _xVec3 tohit; // offset 0x1C, size 0xC
    class _xVec3 depen; // offset 0x28, size 0xC
    class _xVec3 hdng; // offset 0x34, size 0xC
    class _iCollis ixtra; // offset 0x40, size 0x4
};
// total size: 0x4
class _iCollis {
    // Members
public:
    signed int unknown; // offset 0x0, size 0x4
};
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x0
class _xEnt {};

/*
    Compile unit: E:\SD2\Game\flat\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A3E50 -> 0x001A3E78
*/
// Range: 0x1A3E50 -> 0x1A3E78
class xSurface * xSurfaceGetByIdx(unsigned short n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A3E50 -> 0x1A3E78
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A3E80 -> 0x001A3E88
*/
// Range: 0x1A3E80 -> 0x1A3E88
unsigned short xSurfaceGetNumSurfaces() {
    /* anonymous block */ {
        // Range: 0x1A3E80 -> 0x1A3E88
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A3E90 -> 0x001A3E98
*/
// Range: 0x1A3E90 -> 0x1A3E98
void xSurfaceReset() {
    /* anonymous block */ {
        // Range: 0x1A3E90 -> 0x1A3E98
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A3EA0 -> 0x001A3EA8
*/
// Range: 0x1A3EA0 -> 0x1A3EA8
void xSurfaceLoad(class xSurface * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A3EA0 -> 0x1A3EA8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A3EB0 -> 0x001A3EB8
*/
// Range: 0x1A3EB0 -> 0x1A3EB8
void xSurfaceSave(class xSurface * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A3EB0 -> 0x1A3EB8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A3EC0 -> 0x001A3EC8
*/
// Range: 0x1A3EC0 -> 0x1A3EC8
void xSurfaceExit() {
    /* anonymous block */ {
        // Range: 0x1A3EC0 -> 0x1A3EC8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A3ED0 -> 0x001A3F60
*/
// Range: 0x1A3ED0 -> 0x1A3F60
void xSurfaceInit(unsigned short num_surfs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A3ED0 -> 0x1A3F60
        unsigned short i; // r6
    }
}


