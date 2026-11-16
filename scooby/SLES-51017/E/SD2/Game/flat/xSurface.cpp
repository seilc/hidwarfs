/*
    Compile unit: E:\SD2\Game\flat\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class xSurface * surfs; // size: 0x4, address: 0x358B1C
static unsigned short nsurfs; // size: 0x2, address: 0x358B20
unsigned int gActiveHeap; // size: 0x4, address: 0x358634
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
// total size: 0x0
class xSerial {};
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
    Code range: 0x001A45B0 -> 0x001A45D8
*/
// Range: 0x1A45B0 -> 0x1A45D8
class xSurface * xSurfaceGetByIdx(unsigned short n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A45B0 -> 0x1A45D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A45E0 -> 0x001A45E8
*/
// Range: 0x1A45E0 -> 0x1A45E8
unsigned short xSurfaceGetNumSurfaces() {
    /* anonymous block */ {
        // Range: 0x1A45E0 -> 0x1A45E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A45F0 -> 0x001A45F8
*/
// Range: 0x1A45F0 -> 0x1A45F8
void xSurfaceReset() {
    /* anonymous block */ {
        // Range: 0x1A45F0 -> 0x1A45F8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A4600 -> 0x001A4608
*/
// Range: 0x1A4600 -> 0x1A4608
void xSurfaceLoad(class xSurface * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A4600 -> 0x1A4608
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A4610 -> 0x001A4618
*/
// Range: 0x1A4610 -> 0x1A4618
void xSurfaceSave(class xSurface * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A4610 -> 0x1A4618
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A4620 -> 0x001A4628
*/
// Range: 0x1A4620 -> 0x1A4628
void xSurfaceExit() {
    /* anonymous block */ {
        // Range: 0x1A4620 -> 0x1A4628
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A4630 -> 0x001A46C0
*/
// Range: 0x1A4630 -> 0x1A46C0
void xSurfaceInit(unsigned short num_surfs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A4630 -> 0x1A46C0
        unsigned short i; // r6
    }
}


