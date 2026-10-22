/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float zcam_near_d; // size: 0x4, address: 0x610D0C
float zcam_near_h; // size: 0x4, address: 0x610D10
float zcam_near_pitch; // size: 0x4, address: 0x610D14
float zcam_far_d; // size: 0x4, address: 0x610D18
float zcam_far_h; // size: 0x4, address: 0x610D1C
float zcam_far_pitch; // size: 0x4, address: 0x610D20
signed int zcam_near; // size: 0x4, address: 0x0
static signed int sCamTweakCount; // size: 0x4, address: 0x61220C
static class zCamTweak sCamTweakList[8]; // size: 0xA0, address: 0x6767D0
static float sCamTweakLerp; // size: 0x4, address: 0x612210
static float sCamTweakTime; // size: 0x4, address: 0x612214
static float sCamTweakPitch[2]; // size: 0x8, address: 0x612218
static float sCamTweakDistMult[2]; // size: 0x8, address: 0x612220
static float sCamTweakPitchCur; // size: 0x4, address: 0x612228
static float sCamTweakDistMultCur; // size: 0x4, address: 0x61222C
static float sCamD; // size: 0x4, address: 0x0
static float sCamH; // size: 0x4, address: 0x0
static float sCamPitch; // size: 0x4, address: 0x0
static class zCamTweakLook zcam_neartweak; // size: 0xC, address: 0x676870
static class zCamTweakLook zcam_fartweak; // size: 0xC, address: 0x676880
void zCameraTweak_EventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x211950
// total size: 0x14
class zCamTweak {
    // Members
public:
    unsigned int owner; // offset 0x0, size 0x4
    float priority; // offset 0x4, size 0x4
    float time; // offset 0x8, size 0x4
    float pitch; // offset 0xC, size 0x4
    float distMult; // offset 0x10, size 0x4
};
// total size: 0x14
class zCameraTweak : public xBase {
    // Members
public:
    class CameraTweak_asset * casset; // offset 0x10, size 0x4
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
// total size: 0x0
class xSerial {};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
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
// total size: 0xC
class zCamTweakLook {
    // Members
public:
    float h; // offset 0x0, size 0x4
    float dist; // offset 0x4, size 0x4
    float pitch; // offset 0x8, size 0x4
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
// total size: 0x20
class CameraTweak_asset : public xDynAsset {
    // Members
public:
    signed int priority; // offset 0x10, size 0x4
    float time; // offset 0x14, size 0x4
    float pitch_adjust; // offset 0x18, size 0x4
    float dist_adjust; // offset 0x1C, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211950 -> 0x00211A04
*/
// Range: 0x211950 -> 0x211A04
void zCameraTweak_EventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x211950 -> 0x211A04
        class zCameraTweak * tweak; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211A10 -> 0x00211A18
*/
// Range: 0x211A10 -> 0x211A18
void zCameraTweak_Load(class zCameraTweak * tweak /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x211A10 -> 0x211A18
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211A20 -> 0x00211A28
*/
// Range: 0x211A20 -> 0x211A28
void zCameraTweak_Save(class zCameraTweak * tweak /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x211A20 -> 0x211A28
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211A30 -> 0x00211A8C
*/
// Range: 0x211A30 -> 0x211A8C
void zCameraTweak_Init(class xBase & data /* r17 */, class xDynAsset & asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x211A30 -> 0x211A8C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211A90 -> 0x00211AC4
*/
// Range: 0x211A90 -> 0x211AC4
void zCameraTweakGlobal_Reset() {
    /* anonymous block */ {
        // Range: 0x211A90 -> 0x211AC4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211AD0 -> 0x00211C08
*/
// Range: 0x211AD0 -> 0x211C08
void zCameraTweakGlobal_Remove(unsigned int owner /* r2 */) {
    /* anonymous block */ {
        // Range: 0x211AD0 -> 0x211C08
        signed int i; // r7
        signed int j; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211C10 -> 0x00211E34
*/
// Range: 0x211C10 -> 0x211E34
void zCameraTweakGlobal_Add(unsigned int owner /* r2 */, float priority /* r29 */, float time /* r29 */, float pitch /* r29 */, float distMult /* r29 */) {
    /* anonymous block */ {
        // Range: 0x211C10 -> 0x211E34
        signed int i; // r6
        signed int j; // r8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211E40 -> 0x00211F1C
*/
// Range: 0x211E40 -> 0x211F1C
void zCameraTweakGlobal_Init() {
    /* anonymous block */ {
        // Range: 0x211E40 -> 0x211F1C
    }
}


