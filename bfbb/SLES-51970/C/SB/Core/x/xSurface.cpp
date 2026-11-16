/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class xSurface * surfs; // size: 0x4, address: 0x50F074
static unsigned short nsurfs; // size: 0x2, address: 0x50F078
unsigned int gActiveHeap; // size: 0x4, address: 0x50EF44
// total size: 0x28
class xSurface : public xBase {
    // Members
public:
    unsigned int idx; // offset 0x10, size 0x4
    unsigned int type; // offset 0x14, size 0x4
    union { // inferred
        unsigned int mat_idx; // offset 0x18, size 0x4
        class xEnt * ent; // offset 0x18, size 0x4
        void * obj; // offset 0x18, size 0x4
    };
    float friction; // offset 0x1C, size 0x4
    unsigned char state; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    void * moprops; // offset 0x24, size 0x4
};
// total size: 0x0
class xSerial {};
// total size: 0x20
class xLinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x0
class xEnt {};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E540 -> 0x0020E568
*/
// Range: 0x20E540 -> 0x20E568
class xSurface * xSurfaceGetByIdx(unsigned short n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20E540 -> 0x20E568
    }
}


/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E570 -> 0x0020E578
*/
// Range: 0x20E570 -> 0x20E578
unsigned short xSurfaceGetNumSurfaces() {
    /* anonymous block */ {
        // Range: 0x20E570 -> 0x20E578
    }
}


/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E580 -> 0x0020E588
*/
// Range: 0x20E580 -> 0x20E588
void xSurfaceReset() {
    /* anonymous block */ {
        // Range: 0x20E580 -> 0x20E588
    }
}


/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E590 -> 0x0020E598
*/
// Range: 0x20E590 -> 0x20E598
void xSurfaceLoad(class xSurface * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20E590 -> 0x20E598
    }
}


/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E5A0 -> 0x0020E5A8
*/
// Range: 0x20E5A0 -> 0x20E5A8
void xSurfaceSave(class xSurface * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20E5A0 -> 0x20E5A8
    }
}


/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E5B0 -> 0x0020E5B8
*/
// Range: 0x20E5B0 -> 0x20E5B8
void xSurfaceExit() {
    /* anonymous block */ {
        // Range: 0x20E5B0 -> 0x20E5B8
    }
}


/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E5C0 -> 0x0020E724
*/
// Range: 0x20E5C0 -> 0x20E724
void xSurfaceInit(unsigned short num_surfs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20E5C0 -> 0x20E724
        unsigned short i; // r6
    }
}


