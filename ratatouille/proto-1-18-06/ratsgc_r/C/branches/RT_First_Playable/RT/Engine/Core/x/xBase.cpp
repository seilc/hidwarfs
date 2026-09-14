/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xBase.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000B9F0 -> 0x8000BE20
*/
char __FUNCTION__$localstatic1$xBaseIsEntity__FPC5xBase[14]; // size: 0xE, address: 0x80BFB6B0
static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFB6C0
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
// Range: 0x8000B9F0 -> 0x8000BAE8
void xBaseInit(struct xBase * xb /* r30 */, const struct xBaseAsset * asset /* r31 */) {
    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFB6CC
// Range: 0x8000BAE8 -> 0x8000BB50
void xBaseSetup(struct xBase * xb /* r0 */) {
    // References
    // -> static char __FUNCTION__[11];
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFB6D8
// total size: 0x0
struct st_SERIAL_CLIENTINFO {};
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
// total size: 0x1C
struct xSerial {
    // Members
private:
    unsigned int idtag; // offset 0x0, size 0x4
    int baseoff; // offset 0x4, size 0x4
    struct st_SERIAL_CLIENTINFO * ctxtdata; // offset 0x8, size 0x4
    int warned; // offset 0xC, size 0x4
    int curele; // offset 0x10, size 0x4
    int bitidx; // offset 0x14, size 0x4
    int bittally; // offset 0x18, size 0x4
};
// Range: 0x8000BB50 -> 0x8000BC44
void xBaseSave(struct xBase * ent /* r30 */, struct xSerial * s /* r31 */) {
    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFB6E4
// Range: 0x8000BC44 -> 0x8000BD40
void xBaseLoad(struct xBase * ent /* r30 */, struct xSerial * s /* r31 */) {
    // Local variables
    int b; // r1+0x8

    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFB6F0
// Range: 0x8000BD40 -> 0x8000BE20
void xBaseReset(struct xBase * xb /* r30 */, struct xBaseAsset * asset /* r31 */) {
    // References
    // -> static char __FUNCTION__[11];
}


