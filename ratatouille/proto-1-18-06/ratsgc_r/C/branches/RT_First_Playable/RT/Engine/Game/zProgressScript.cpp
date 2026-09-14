/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zProgressScript.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801AC61C -> 0x801ACB34
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
// Range: 0x801AC61C -> 0x801AC63C
void zProgressScript_Init(void * b /* r0 */, void * sasset /* r0 */) {}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80C02720
unsigned int gActiveHeap; // size: 0x4, address: 0x80C07448
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
// total size: 0xC
struct xProgressScriptAsset : public xBaseAsset {
    // Members
    unsigned int eventCount; // offset 0x8, size 0x4
};
// total size: 0x24
struct xProgressScriptEventAsset {
    // Members
    float percent; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
    unsigned int widget; // offset 0x8, size 0x4
    unsigned int paramEvent; // offset 0xC, size 0x4
    float param[4]; // offset 0x10, size 0x10
    unsigned int paramWidget; // offset 0x20, size 0x4
};
// total size: 0x28
struct zProgressScript : public xBase {
    // Members
    struct xProgressScriptAsset * sasset; // offset 0x10, size 0x4
    struct xProgressScriptEventAsset * events; // offset 0x14, size 0x4
    int numFlagWords; // offset 0x18, size 0x4
    unsigned int * flags; // offset 0x1C, size 0x4
    float percent; // offset 0x20, size 0x4
    int current; // offset 0x24, size 0x4
};
// Range: 0x801AC63C -> 0x801AC798
void zProgressScript_Init(struct xBase * b /* r30 */, struct xProgressScriptAsset * sasset /* r31 */) {
    // Local variables
    struct zProgressScript * s; // r30

    // References
    // -> unsigned int gActiveHeap;
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[22]; // size: 0x16, address: 0x80C02738
// Range: 0x801AC798 -> 0x801AC89C
void zProgressScript_Reset(struct zProgressScript * s /* r31 */) {
    // Local variables
    int i; // r6

    // References
    // -> static char __FUNCTION__[22];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80C02750
// total size: 0x0
struct xSerial {};
// Range: 0x801AC89C -> 0x801AC96C
void zProgressScript_Save(struct zProgressScript * ent /* r30 */, struct xSerial * s /* r31 */) {
    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80C02768
// Range: 0x801AC96C -> 0x801ACA3C
void zProgressScript_Load(struct zProgressScript * ent /* r30 */, struct xSerial * s /* r31 */) {
    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[24]; // size: 0x18, address: 0x80C02780
// Range: 0x801ACA3C -> 0x801ACB34
void zProgressScript_EventCB(struct xBase * to /* r31 */, unsigned int toEvent /* r30 */) {
    // Local variables
    struct zProgressScript * s; // r31

    // References
    // -> static char __FUNCTION__[24];
}


