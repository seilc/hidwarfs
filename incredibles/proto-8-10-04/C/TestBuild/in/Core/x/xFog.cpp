/*
    Compile unit: C:\TestBuild\in\Core\x\xFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
void xFogEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x1D07F0
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // offset 0xC, size 0x4
};
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
// total size: 0x14
class _xFog : public xBase {
    // Members
public:
    class xFogAsset * tasset; // offset 0x10, size 0x4
};
// total size: 0x0
class xSerial {};
// total size: 0x24
class xFogAsset : public xBaseAsset {
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
class xLinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D07E0 -> 0x001D07E8
*/
// Range: 0x1D07E0 -> 0x1D07E8
void xFogUpdate() {
    /* anonymous block */ {
        // Range: 0x1D07E0 -> 0x1D07E8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D07F0 -> 0x001D08F0
*/
// Range: 0x1D07F0 -> 0x1D08F0
void xFogEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D07F0 -> 0x1D08F0
        class _xFog * t; // r2
        class iFogParams fog; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D08F0 -> 0x001D08F8
*/
// Range: 0x1D08F0 -> 0x1D08F8
void xFogLoad(class _xFog * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D08F0 -> 0x1D08F8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0900 -> 0x001D0908
*/
// Range: 0x1D0900 -> 0x1D0908
void xFogSave(class _xFog * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D0900 -> 0x1D0908
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0910 -> 0x001D0970
*/
// Range: 0x1D0910 -> 0x1D0970
void xFogInit(void * b /* r17 */, void * tasset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1D0910 -> 0x1D0970
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0970 -> 0x001D0980
*/
// Range: 0x1D0970 -> 0x1D0980
void xFogClearFog() {
    /* anonymous block */ {
        // Range: 0x1D0970 -> 0x1D0980
    }
}


