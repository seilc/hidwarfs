/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xEvent.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006A540 -> 0x8006AD0C
*/
char zEventLogBuf[20][256]; // size: 0x1400, address: 0x80B60318
int zEventLogBufInit; // size: 0x4, address: 0x80D69038
static char __FUNCTION__[10]; // size: 0xA, address: 0x80D5F578
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
// Range: 0x8006A540 -> 0x8006A61C
void zEntEvent(char * to /* r30 */, unsigned int toEvent /* r1+0x8 */) {
    // Local variables
    unsigned int id; // r29
    struct xBase * sendTo; // r31

    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80D5F582
// Range: 0x8006A61C -> 0x8006A6EC
void zEntEvent(unsigned int toID /* r30 */, unsigned int toEvent /* r1+0x8 */) {
    // Local variables
    struct xBase * sendTo; // r31

    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80D5F58C
// Range: 0x8006A6EC -> 0x8006A7F0
void zEntEvent(unsigned int toID /* r30 */, unsigned int toEvent /* r1+0x8 */, float toParam0 /* r1+0xC */, float toParam1 /* r1+0x10 */, float toParam2 /* r1+0x14 */, float toParam3 /* r1+0x18 */) {
    // Local variables
    struct xBase * sendTo; // r31
    float toParam[4]; // r1+0x1C

    // References
    // -> static char __FUNCTION__[10];
}

unsigned int gThisPlayer; // size: 0x4, address: 0x80D6903C
unsigned int gThisCameraTarget; // size: 0x4, address: 0x80D69040
static int reentrantCount; // size: 0x4, address: 0x80D69044
static signed char init; // size: 0x1, address: 0x80D69048
static char __FUNCTION__[10]; // size: 0xA, address: 0x80D5F596
enum ForceEvent {
    FE_YES = 0,
    FE_NO = 1,
};
// Range: 0x8006A7F0 -> 0x8006AC80
void zEntEvent(struct xBase * from /* r28 */, unsigned int fromEvent /* r24 */, struct xBase * to /* r31 */, unsigned int toEvent /* r29 */, const float * toParam /* r22 */, struct xBase * toParamWidget /* r1+0x8 */, unsigned int toParamWidgetID /* r1+0xC */, enum ForceEvent forceEvent /* r1+0x10 */) {
    // Local variables
    const struct xLinkAsset * idx; // r30
    int i; // r26
    struct xBase * sendTo; // r25
    struct xBase * b; // r27

    // References
    // -> static int reentrantCount;
    // -> unsigned int gThisCameraTarget;
    // -> unsigned int gThisPlayer;
    // -> static char __FUNCTION__[10];
    // -> char zEventLogBuf[20][256];
    // -> static signed char init;
}

// Range: 0x8006AC80 -> 0x8006AD0C
void xEventDebugLogDump() {
    // Local variables
    int i; // r31

    // References
    // -> char zEventLogBuf[20][256];
}


