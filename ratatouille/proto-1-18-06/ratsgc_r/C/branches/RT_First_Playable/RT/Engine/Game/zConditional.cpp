/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zConditional.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80103260 -> 0x80103AE0
*/
// Range: 0x80103260 -> 0x80103280
void zConditionalInit(void * b /* r0 */, void * asset /* r0 */) {}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFFD48
// total size: 0x10
struct zVarEntry {
    // Members
    unsigned int entry; // offset 0x0, size 0x4
    unsigned int varNameID; // offset 0x4, size 0x4
    char * varName; // offset 0x8, size 0x4
    unsigned int (* varCB)(void *); // offset 0xC, size 0x4
};
struct zVarEntry zVarEntryTable[]; // size: 0x0, address: 0x8043CCAC
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
// total size: 0x18
struct zCondAsset : public xBaseAsset {
    // Members
    unsigned int constNum; // offset 0x8, size 0x4
    unsigned int expr1; // offset 0xC, size 0x4
    unsigned int op; // offset 0x10, size 0x4
    unsigned int value_asset; // offset 0x14, size 0x4
};
// total size: 0x18
struct _zConditional : public xBase {
    // Members
    struct zCondAsset * asset; // offset 0x10, size 0x4
    struct zVarEntry * varEntry; // offset 0x14, size 0x4
};
// Range: 0x80103280 -> 0x801033E8
void zConditionalInit(struct xBase * b /* r31 */, struct zCondAsset * asset /* r30 */) {
    // Local variables
    struct _zConditional * c; // r0
    int i; // r5

    // References
    // -> static char __FUNCTION__[17];
    // -> struct zVarEntry zVarEntryTable[];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80BFFD5C
// Range: 0x801033E8 -> 0x801034B4
void zConditionalReset(struct _zConditional * ent /* r31 */) {
    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFFD70
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
// Range: 0x801034B4 -> 0x80103584
void zConditionalSave(struct _zConditional * ent /* r30 */, struct xSerial * s /* r31 */) {
    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFFD84
// Range: 0x80103584 -> 0x80103654
void zConditionalLoad(struct _zConditional * ent /* r30 */, struct xSerial * s /* r31 */) {
    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[22]; // size: 0x16, address: 0x80BFFD98
// Range: 0x80103654 -> 0x801037B0
unsigned int zConditional_GetCount(struct _zConditional * c /* r31 */) {
    // Local variables
    struct zVarEntry * v; // r29
    void * context; // r5
    int i; // r28
    unsigned int id; // r3
    unsigned int temp; // r3

    // References
    // -> struct zVarEntry zVarEntryTable[];
    // -> static char __FUNCTION__[22];
}

static char __FUNCTION__[22]; // size: 0x16, address: 0x80BFFDB0
// Range: 0x801037B0 -> 0x80103980
unsigned int zConditional_Evaluate(struct _zConditional * c /* r31 */) {
    // Local variables
    unsigned int temp; // r0
    void * context; // r5
    unsigned int id; // r3

    // References
    // -> static char __FUNCTION__[22];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80BFFDC8
// Range: 0x80103980 -> 0x80103AE0
void zConditionalEventCB(struct xBase * to /* r31 */, unsigned int toEvent /* r30 */) {
    // Local variables
    struct _zConditional * t; // r31
    unsigned int event; // r5

    // References
    // -> static char __FUNCTION__[20];
}


