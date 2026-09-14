/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zScript.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D8F28 -> 0x800D93EC
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
// Range: 0x800D8F28 -> 0x800D8F48
void zScriptInit(void * b /* r0 */, void * tasset /* r0 */) {}

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
// total size: 0x14
struct xScriptAsset : public xBaseAsset {
    // Members
    float scaleFactor; // offset 0x8, size 0x4
    unsigned int eventCount; // offset 0xC, size 0x4
    unsigned char loop; // offset 0x10, size 0x1
    unsigned char pad[3]; // offset 0x11, size 0x3
};
// total size: 0x24
struct xScriptEventAsset {
    // Members
    float time; // offset 0x0, size 0x4
    unsigned int widget; // offset 0x4, size 0x4
    unsigned int paramEvent; // offset 0x8, size 0x4
    float param[4]; // offset 0xC, size 0x10
    unsigned int paramWidget; // offset 0x1C, size 0x4
    unsigned char enabled; // offset 0x20, size 0x1
};
// total size: 0x24
struct _zScript : public xBase {
    // Members
    struct xScriptAsset * tasset; // offset 0x10, size 0x4
    struct xScriptEventAsset * current; // offset 0x14, size 0x4
    unsigned char state; // offset 0x18, size 0x1
    unsigned char pad[3]; // offset 0x19, size 0x3
    float time; // offset 0x1C, size 0x4
    float scaleFactor; // offset 0x20, size 0x4
};
// Range: 0x800D8F48 -> 0x800D8FC8
void zScriptInit(struct xBase * b /* r30 */, struct xScriptAsset * tasset /* r31 */) {
    // Local variables
    struct _zScript * t; // r3
}

// Range: 0x800D8FC8 -> 0x800D9020
void zScriptReset(struct _zScript * t /* r31 */) {}

// total size: 0x0
struct xSerial {};
// Range: 0x800D9020 -> 0x800D9040
void zScriptSave(struct _zScript * ent /* r0 */, struct xSerial * s /* r0 */) {}

// Range: 0x800D9040 -> 0x800D9060
void zScriptLoad(struct _zScript * ent /* r0 */, struct xSerial * s /* r0 */) {}

// Range: 0x800D9060 -> 0x800D91F8
void zScriptEventCB(struct xBase * to /* r4 */, unsigned int toEvent /* r0 */, const float * toParam /* r0 */) {
    // Local variables
    struct _zScript * t; // r31
}

unsigned int gThisPlayer; // size: 0x4, address: 0x803C0DA0
// Range: 0x800D91F8 -> 0x800D937C
static unsigned char zScriptExecuteEvents(struct _zScript * t /* r30 */, float start /* f30 */, float end /* f31 */) {
    // Local variables
    struct xScriptEventAsset * endEvent; // r31
    unsigned int widget; // r0
    struct xBase * b; // r29
    struct xBase * paramWidget; // r7
    struct xScriptEventAsset * curr; // r8

    // References
    // -> unsigned int gThisPlayer;
}

// Range: 0x800D937C -> 0x800D93EC
void zScriptUpdate(struct xBase * to /* r31 */, float dt /* f31 */) {
    // Local variables
    struct _zScript * t; // r0
}


