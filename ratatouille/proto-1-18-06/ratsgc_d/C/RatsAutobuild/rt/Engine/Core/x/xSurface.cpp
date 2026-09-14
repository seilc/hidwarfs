/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSurface.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800FCBD8 -> 0x800FCFB8
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
static struct xSurface * surfs; // size: 0x4, address: 0x80D699E0
static unsigned short nsurfs; // size: 0x2, address: 0x80D699E4
static char __FUNCTION__[13]; // size: 0xD, address: 0x80D612F0
unsigned int gActiveHeap; // size: 0x4, address: 0x80D692A8
// Range: 0x800FCBD8 -> 0x800FCCE4
void xSurfaceInit(unsigned short num_surfs /* r1+0x8 */) {
    // Local variables
    unsigned short i; // r31

    // References
    // -> static struct xSurface * surfs;
    // -> static unsigned short nsurfs;
    // -> static char __FUNCTION__[13];
    // -> unsigned int gActiveHeap;
}

// Range: 0x800FCD18 -> 0x800FCD1C
void xSurfaceExit() {}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D612FD
// total size: 0x0
struct xSerial {};
// Range: 0x800FCD1C -> 0x800FCE0C
void xSurfaceSave(struct xSurface * ent /* r30 */, struct xSerial * s /* r31 */) {
    // References
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D6130A
// Range: 0x800FCE0C -> 0x800FCEFC
void xSurfaceLoad(struct xSurface * ent /* r30 */, struct xSerial * s /* r31 */) {
    // References
    // -> static char __FUNCTION__[13];
}

// Range: 0x800FCEFC -> 0x800FCF00
void xSurfaceReset() {}

// Range: 0x800FCF00 -> 0x800FCF08
unsigned short xSurfaceGetNumSurfaces() {
    // References
    // -> static unsigned short nsurfs;
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D61317
// Range: 0x800FCF08 -> 0x800FCFB8
struct xSurface * xSurfaceGetByIdx(unsigned short n /* r31 */) {
    // References
    // -> static struct xSurface * surfs;
    // -> static char __FUNCTION__[17];
    // -> static unsigned short nsurfs;
}


