/*
    Compile unit: E:\SD2\Game\flat\zFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int zFogEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x1CD120
// total size: 0x24
class zFogAsset : public p2BaseAsset {
    // Members
public:
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
class _zFog : public xBase {
    // Members
public:
    class zFogAsset * tasset; // offset 0x10, size 0x4
};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class p2LinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
// total size: 0x0
class xSerial {};
// total size: 0x1C
class iFogParams {
    // Members
public:
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    class RwRGBA fogcolor; // offset 0x10, size 0x4
    class RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x20
class p2LinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class p2BaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};

/*
    Compile unit: E:\SD2\Game\flat\zFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CD110 -> 0x001CD118
*/
// Range: 0x1CD110 -> 0x1CD118
void zFogUpdate() {
    /* anonymous block */ {
        // Range: 0x1CD110 -> 0x1CD118
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CD120 -> 0x001CD224
*/
// Range: 0x1CD120 -> 0x1CD224
signed int zFogEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1CD120 -> 0x1CD224
        class iFogParams fog; // r29+0x10
        class _zFog * t; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CD230 -> 0x001CD238
*/
// Range: 0x1CD230 -> 0x1CD238
void zFogLoad(class _zFog * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1CD230 -> 0x1CD238
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CD240 -> 0x001CD248
*/
// Range: 0x1CD240 -> 0x1CD248
void zFogSave(class _zFog * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1CD240 -> 0x1CD248
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CD250 -> 0x001CD2B0
*/
// Range: 0x1CD250 -> 0x1CD2B0
void zFogInit(void * b /* r17 */, void * tasset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1CD250 -> 0x1CD2B0
    }
}


