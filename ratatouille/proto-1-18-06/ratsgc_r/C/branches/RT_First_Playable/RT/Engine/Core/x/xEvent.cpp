/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xEvent.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80059E10 -> 0x8005A510
*/
char zEventLogBuf[20][256]; // size: 0x1400, address: 0x80A5DE60
int zEventLogBufInit; // size: 0x4, address: 0x80C07280
static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFC9A8
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
// Range: 0x80059E10 -> 0x80059EC8
void zEntEvent(char * to /* r30 */, unsigned int toEvent /* r31 */) {
    // Local variables
    unsigned int id; // r0
    struct xBase * sendTo; // r0

    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFC9B4
// Range: 0x80059EC8 -> 0x80059F7C
void zEntEvent(unsigned int toID /* r30 */, unsigned int toEvent /* r31 */) {
    // Local variables
    struct xBase * sendTo; // r0

    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFC9C0
// Range: 0x80059F7C -> 0x8005A064
void zEntEvent(unsigned int toID /* r30 */, unsigned int toEvent /* r31 */, float toParam0 /* f28 */, float toParam1 /* f29 */, float toParam2 /* f30 */, float toParam3 /* f31 */) {
    // Local variables
    struct xBase * sendTo; // r0
    float toParam[4]; // r1+0x8

    // References
    // -> static char __FUNCTION__[10];
}

unsigned int gThisPlayer; // size: 0x4, address: 0x80C07284
unsigned int gThisCameraTarget; // size: 0x4, address: 0x80C07288
static int reentrantCount; // size: 0x4, address: 0x80C0728C
static signed char init; // size: 0x1, address: 0x80C07290
static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFC9CC
enum ForceEvent {
    FE_YES = 0,
    FE_NO = 1,
};
// Range: 0x8005A064 -> 0x8005A48C
void zEntEvent(struct xBase * from /* r29 */, unsigned int fromEvent /* r24 */, struct xBase * to /* r30 */, unsigned int toEvent /* r31 */, const float * toParam /* r25 */, struct xBase * toParamWidget /* r26 */, unsigned int toParamWidgetID /* r28 */, enum ForceEvent forceEvent /* r27 */) {
    // Local variables
    const struct xLinkAsset * idx; // r28
    int i; // r27
    struct xBase * sendTo; // r25
    struct xBase * b; // r8

    // References
    // -> static int reentrantCount;
    // -> unsigned int gThisCameraTarget;
    // -> unsigned int gThisPlayer;
    // -> static char __FUNCTION__[10];
    // -> char zEventLogBuf[20][256];
    // -> static signed char init;
}

// Range: 0x8005A48C -> 0x8005A510
void xEventDebugLogDump() {
    // Local variables
    int i; // r30

    // References
    // -> char zEventLogBuf[20][256];
}


