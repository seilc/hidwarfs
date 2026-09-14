/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zConditional.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80097710 -> 0x80097B1C
*/
// Range: 0x80097710 -> 0x80097730
void zConditionalInit(void * b /* r0 */, void * asset /* r0 */) {}

// total size: 0x10
struct zVarEntry {
    // Members
    unsigned int entry; // offset 0x0, size 0x4
    unsigned int varNameID; // offset 0x4, size 0x4
    char * varName; // offset 0x8, size 0x4
    unsigned int (* varCB)(void *); // offset 0xC, size 0x4
};
struct zVarEntry zVarEntryTable[]; // size: 0x0, address: 0x802DBF54
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
// Range: 0x80097730 -> 0x800977D0
void zConditionalInit(struct xBase * b /* r30 */, struct zCondAsset * asset /* r31 */) {
    // Local variables
    struct _zConditional * c; // r0
    int i; // r0

    // References
    // -> struct zVarEntry zVarEntryTable[];
}

// Range: 0x800977D0 -> 0x800977F4
void zConditionalReset(struct _zConditional * ent /* r0 */) {}

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
// Range: 0x800977F4 -> 0x80097814
void zConditionalSave(struct _zConditional * ent /* r0 */, struct xSerial * s /* r0 */) {}

// Range: 0x80097814 -> 0x80097834
void zConditionalLoad(struct _zConditional * ent /* r0 */, struct xSerial * s /* r0 */) {}

// Range: 0x80097834 -> 0x80097914
unsigned int zConditional_GetCount(struct _zConditional * c /* r27 */) {
    // Local variables
    struct zVarEntry * v; // r29
    void * context; // r6
    int i; // r28
    unsigned int id; // r3
    unsigned int temp; // r0

    // References
    // -> struct zVarEntry zVarEntryTable[];
}

// Range: 0x80097914 -> 0x80097A60
unsigned int zConditional_Evaluate(struct _zConditional * c /* r31 */) {
    // Local variables
    unsigned int temp; // r0
    void * context; // r5
    unsigned int id; // r3
}

// Range: 0x80097A60 -> 0x80097B1C
void zConditionalEventCB(struct xBase * to /* r4 */, unsigned int toEvent /* r0 */) {
    // Local variables
    struct _zConditional * t; // r31
    unsigned int event; // r5
}


