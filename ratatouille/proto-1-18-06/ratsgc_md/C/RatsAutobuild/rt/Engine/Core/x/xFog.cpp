/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFog.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80030180 -> 0x80030374
*/
// Range: 0x80030180 -> 0x800301A8
void xFogClearFog() {}

// Range: 0x800301A8 -> 0x800301C8
void xFogInit(void * b /* r0 */, void * tasset /* r0 */) {}

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
// total size: 0x24
struct xFogAsset : public xBaseAsset {
    // Members
    unsigned char bkgndColor[4]; // offset 0x8, size 0x4
    unsigned char fogColor[4]; // offset 0xC, size 0x4
    float fogDensity; // offset 0x10, size 0x4
    float fogStart; // offset 0x14, size 0x4
    float fogStop; // offset 0x18, size 0x4
    float transitionTime; // offset 0x1C, size 0x4
    unsigned char fogType; // offset 0x20, size 0x1
    unsigned char padFog[3]; // offset 0x21, size 0x3
};
// total size: 0x14
struct _xFog : public xBase {
    // Members
    struct xFogAsset * tasset; // offset 0x10, size 0x4
};
// Range: 0x800301C8 -> 0x8003022C
void xFogInit(struct xBase * b /* r30 */, struct xFogAsset * tasset /* r31 */) {
    // Local variables
    struct _xFog * t; // r0
}

// Range: 0x8003022C -> 0x80030250
void xFogReset(struct _xFog * t /* r0 */) {}

// total size: 0x0
struct xSerial {};
// Range: 0x80030250 -> 0x80030270
void xFogSave(struct _xFog * ent /* r0 */, struct xSerial * s /* r0 */) {}

// Range: 0x80030270 -> 0x80030290
void xFogLoad(struct _xFog * ent /* r0 */, struct xSerial * s /* r0 */) {}

enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x1C
struct iFogParams {
    // Members
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    struct RwRGBA fogcolor; // offset 0x10, size 0x4
    struct RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
// Range: 0x80030290 -> 0x80030370
void xFogEventCB(struct xBase * to /* r4 */, unsigned int toEvent /* r0 */) {
    // Local variables
    struct _xFog * t; // r4
    struct iFogParams fog; // r1+0x8
}

// Range: 0x80030370 -> 0x80030374
void xFogUpdate() {}


