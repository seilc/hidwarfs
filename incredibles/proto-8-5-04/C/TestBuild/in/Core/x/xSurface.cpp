/*
    Compile unit: C:\TestBuild\in\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class xSurface * surfs; // size: 0x4, address: 0x608B7C
static unsigned short nsurfs; // size: 0x2, address: 0x608B80
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
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
class xSerial {};
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
    void (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // offset 0xC, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0190 -> 0x001C01B8
*/
// Range: 0x1C0190 -> 0x1C01B8
class xSurface * xSurfaceGetByIdx(unsigned short n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C0190 -> 0x1C01B8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C01C0 -> 0x001C01C8
*/
// Range: 0x1C01C0 -> 0x1C01C8
unsigned short xSurfaceGetNumSurfaces() {
    /* anonymous block */ {
        // Range: 0x1C01C0 -> 0x1C01C8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C01D0 -> 0x001C01D8
*/
// Range: 0x1C01D0 -> 0x1C01D8
void xSurfaceReset() {
    /* anonymous block */ {
        // Range: 0x1C01D0 -> 0x1C01D8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C01E0 -> 0x001C01E8
*/
// Range: 0x1C01E0 -> 0x1C01E8
void xSurfaceLoad(class xSurface * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C01E0 -> 0x1C01E8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C01F0 -> 0x001C01F8
*/
// Range: 0x1C01F0 -> 0x1C01F8
void xSurfaceSave(class xSurface * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C01F0 -> 0x1C01F8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0200 -> 0x001C0208
*/
// Range: 0x1C0200 -> 0x1C0208
void xSurfaceExit() {
    /* anonymous block */ {
        // Range: 0x1C0200 -> 0x1C0208
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0210 -> 0x001C0378
*/
// Range: 0x1C0210 -> 0x1C0378
void xSurfaceInit(unsigned short num_surfs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C0210 -> 0x1C0378
        unsigned short i; // r6
    }
}


