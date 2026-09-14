/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSurface.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80074950 -> 0x80074A70
*/
// total size: 0x20
struct xLinkAsset {
    // Members
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x10
struct xBase {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    const struct xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(struct xBase *, struct xBase *, unsigned int, float *, struct xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x0
struct xEnt {};
// total size: 0x28
struct xSurface : public xBase {
    // Members
    unsigned int idx; // offset 0x10, size 0x4
    unsigned int type; // offset 0x14, size 0x4
    union { // inferred
        unsigned int mat_idx; // offset 0x18, size 0x4
        struct xEnt * ent; // offset 0x18, size 0x4
        void * obj; // offset 0x18, size 0x4
    };
    float friction; // offset 0x1C, size 0x4
    unsigned char state; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    void * moprops; // offset 0x24, size 0x4
};
static struct xSurface * surfs; // size: 0x4, address: 0x803C1590
static unsigned short nsurfs; // size: 0x2, address: 0x803C1594
unsigned int gActiveHeap; // size: 0x4, address: 0x803C1074
// Range: 0x80074950 -> 0x800749C8
void xSurfaceInit(unsigned short num_surfs /* r0 */) {
    // Local variables
    unsigned short i; // r6

    // References
    // -> static struct xSurface * surfs;
    // -> static unsigned short nsurfs;
    // -> unsigned int gActiveHeap;
}

// Range: 0x800749FC -> 0x80074A00
void xSurfaceExit() {}

// total size: 0x0
struct xSerial {};
// Range: 0x80074A00 -> 0x80074A20
void xSurfaceSave(struct xSurface * ent /* r0 */, struct xSerial * s /* r0 */) {}

// Range: 0x80074A20 -> 0x80074A40
void xSurfaceLoad(struct xSurface * ent /* r0 */, struct xSerial * s /* r0 */) {}

// Range: 0x80074A40 -> 0x80074A44
void xSurfaceReset() {}

// Range: 0x80074A44 -> 0x80074A4C
unsigned short xSurfaceGetNumSurfaces() {
    // References
    // -> static unsigned short nsurfs;
}

// Range: 0x80074A4C -> 0x80074A70
struct xSurface * xSurfaceGetByIdx(unsigned short n /* r0 */) {
    // References
    // -> static struct xSurface * surfs;
}


