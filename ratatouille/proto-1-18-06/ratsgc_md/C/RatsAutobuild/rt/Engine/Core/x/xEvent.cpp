/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xEvent.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002F75C -> 0x8002FA38
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
// Range: 0x8002F75C -> 0x8002F79C
void zEntEvent(char * to /* r0 */, unsigned int toEvent /* r31 */) {
    // Local variables
    unsigned int id; // r0
    struct xBase * sendTo; // r0
}

// Range: 0x8002F79C -> 0x8002F7D8
void zEntEvent(unsigned int toID /* r0 */, unsigned int toEvent /* r31 */) {
    // Local variables
    struct xBase * sendTo; // r0
}

// Range: 0x8002F7D8 -> 0x8002F828
void zEntEvent(unsigned int toID /* r0 */, unsigned int toEvent /* r31 */, float toParam0 /* f0 */, float toParam1 /* f0 */, float toParam2 /* f0 */, float toParam3 /* f0 */) {
    // Local variables
    struct xBase * sendTo; // r0
    float toParam[4]; // r1+0x8
}

unsigned int gThisPlayer; // size: 0x4, address: 0x803C0DA0
unsigned int gThisCameraTarget; // size: 0x4, address: 0x803C0DA4
enum ForceEvent {
    FE_YES = 0,
    FE_NO = 1,
};
// Range: 0x8002F828 -> 0x8002FA38
void zEntEvent(struct xBase * from /* r27 */, struct xBase * to /* r28 */, unsigned int toEvent /* r29 */, const float * toParam /* r25 */, struct xBase * toParamWidget /* r31 */, unsigned int toParamWidgetID /* r30 */, enum ForceEvent forceEvent /* r26 */) {
    // Local variables
    const struct xLinkAsset * idx; // r31
    int i; // r30
    struct xBase * sendTo; // r26
    struct xBase * b; // r8

    // References
    // -> unsigned int gThisCameraTarget;
    // -> unsigned int gThisPlayer;
}


