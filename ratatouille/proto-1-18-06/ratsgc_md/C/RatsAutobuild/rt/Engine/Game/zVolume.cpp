/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zVolume.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800EABE0 -> 0x800EB168
*/
// total size: 0x10
struct basic_rect {
    // Static members
    static struct basic_rect m_Null; // size: 0x10
    static struct basic_rect m_Unit; // size: 0x10

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
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
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x20
struct xQCData {
    // Members
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    struct xVec3 min; // offset 0x8, size 0xC
    struct xVec3 max; // offset 0x14, size 0xC
};
// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x24
struct xBBox {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    struct xBox box; // offset 0xC, size 0x18
};
// total size: 0x14
struct xCylinder {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x30
struct xMat3x3 {
    // Members
    struct xVec3 right; // offset 0x0, size 0xC
    int flags; // offset 0xC, size 0x4
    struct xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x4C
struct xBound {
    // Members
    struct xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        struct xSphere sph; // offset 0x24, size 0x10
        struct xBBox box; // offset 0x24, size 0x24
        struct xCylinder cyl; // offset 0x24, size 0x14
    };
    struct xMat4x3 * mat; // offset 0x48, size 0x4
};
// total size: 0x64
struct xVolumeAsset : public xBaseAsset {
    // Members
    unsigned int flags; // offset 0x8, size 0x4
    struct xBound bound; // offset 0xC, size 0x4C
    float rot; // offset 0x58, size 0x4
    float xpivot; // offset 0x5C, size 0x4
    float zpivot; // offset 0x60, size 0x4
};
// total size: 0x0
struct xSerial {};
// total size: 0x14
class xVolume : public xBase {
    // Members
public:
    struct xVolumeAsset * asset; // offset 0x10, size 0x4
};
// total size: 0x14
class zVolume : public xVolume {};
static class zVolume * vols; // size: 0x4, address: 0x803C2658
static unsigned short nvols; // size: 0x2, address: 0x803C265C
// Range: 0x800EABE0 -> 0x800EAC18
static void zVolumeInit(class zVolume * vol /* r31 */, struct xVolumeAsset * asset /* r0 */) {}

unsigned int gActiveHeap; // size: 0x4, address: 0x803C1074
// Range: 0x800EAC18 -> 0x800EACBC
void zVolumeInit() {
    // Local variables
    unsigned short i; // r30
    unsigned int size; // r1+0x8
    struct xVolumeAsset * asset; // r3

    // References
    // -> static class zVolume * vols;
    // -> static unsigned short nvols;
    // -> unsigned int gActiveHeap;
}

// Range: 0x800EACBC -> 0x800EAD14
void zVolumeSetup() {
    // Local variables
    unsigned int i; // r30

    // References
    // -> static unsigned short nvols;
    // -> static class zVolume * vols;
}

// Range: 0x800EAD14 -> 0x800EAD28
class zVolume * zVolumeGetVolume(unsigned short n /* r0 */) {
    // References
    // -> static class zVolume * vols;
}

int gOccludeCount; // size: 0x4, address: 0x803C2660
class zVolume * gOccludeList[10]; // size: 0x28, address: 0x803C2664
int gOccludeCalcCount; // size: 0x4, address: 0x803C268C
// total size: 0x10
struct xVec4 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x50
struct PreCalcOcclude {
    // Members
    struct xVec4 DepthVec; // offset 0x0, size 0x10
    struct xVec4 FrustVec[4]; // offset 0x10, size 0x40
};
struct PreCalcOcclude gOccludeCalc[10]; // size: 0x320, address: 0x80376010
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// Range: 0x800EAD28 -> 0x800EB070
void zVolume_OccludePrecalc(struct xVec3 * camPos /* r25 */) {
    // Local variables
    int i; // r27
    int j; // r20
    struct xVec3 corner[5]; // r1+0x60
    struct xVolumeAsset * a; // r20
    float c; // f0
    float s; // f0
    struct PreCalcOcclude * calc; // r26
    struct xVec3 d1; // r1+0x14
    struct xVec3 d2; // r1+0x8
    struct xVec4 locFrustVec[4]; // r1+0x20
    float depthdot; // f30
    float camdot; // f29
    float testdot1; // f0
    float testdot2; // f0

    // References
    // -> int gOccludeCount;
    // -> int gOccludeCalcCount;
    // -> struct PreCalcOcclude gOccludeCalc[10];
    // -> class zVolume * gOccludeList[10];
}

// Range: 0x800EB070 -> 0x800EB168
void zVolumeEventCB(struct xBase * to /* r4 */, unsigned int toEvent /* r0 */) {
    // Local variables
    class zVolume * vol; // r4
    int i; // r0

    // References
    // -> int gOccludeCount;
    // -> class zVolume * gOccludeList[10];
}


