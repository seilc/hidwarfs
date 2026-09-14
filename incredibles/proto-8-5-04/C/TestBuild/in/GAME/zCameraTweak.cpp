/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float zcam_near_d; // size: 0x4, address: 0x607904
float zcam_near_h; // size: 0x4, address: 0x607908
float zcam_near_pitch; // size: 0x4, address: 0x60790C
float zcam_far_d; // size: 0x4, address: 0x607910
float zcam_far_h; // size: 0x4, address: 0x607914
float zcam_far_pitch; // size: 0x4, address: 0x607918
signed int zcam_near; // size: 0x4, address: 0x0
static signed int sCamTweakCount; // size: 0x4, address: 0x608DFC
static class zCamTweak sCamTweakList[8]; // size: 0xA0, address: 0x67F350
static float sCamTweakLerp; // size: 0x4, address: 0x608E00
static float sCamTweakTime; // size: 0x4, address: 0x608E04
static float sCamTweakPitch[2]; // size: 0x8, address: 0x608E08
static float sCamTweakDistMult[2]; // size: 0x8, address: 0x608E10
static float sCamTweakPitchCur; // size: 0x4, address: 0x608E18
static float sCamTweakDistMultCur; // size: 0x4, address: 0x608E1C
static float sCamD; // size: 0x4, address: 0x0
static float sCamH; // size: 0x4, address: 0x0
static float sCamPitch; // size: 0x4, address: 0x0
static class zCamTweakLook zcam_neartweak; // size: 0xC, address: 0x67F3F0
static class zCamTweakLook zcam_fartweak; // size: 0xC, address: 0x67F400
void zCameraTweak_EventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x20FC90
// total size: 0x14
class zCameraTweak : public xBase {
    // Members
public:
    class CameraTweak_asset * casset; // offset 0x10, size 0x4
};
// total size: 0x0
class xSerial {};
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
// total size: 0xC
class zCamTweakLook {
    // Members
public:
    float h; // offset 0x0, size 0x4
    float dist; // offset 0x4, size 0x4
    float pitch; // offset 0x8, size 0x4
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
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};

/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FC90 -> 0x0020FD44
*/
// Range: 0x20FC90 -> 0x20FD44
void zCameraTweak_EventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20FC90 -> 0x20FD44
        class zCameraTweak * tweak; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FD50 -> 0x0020FD58
*/
// Range: 0x20FD50 -> 0x20FD58
void zCameraTweak_Load(class zCameraTweak * tweak /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20FD50 -> 0x20FD58
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FD60 -> 0x0020FD68
*/
// Range: 0x20FD60 -> 0x20FD68
void zCameraTweak_Save(class zCameraTweak * tweak /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20FD60 -> 0x20FD68
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FD70 -> 0x0020FDCC
*/
// Range: 0x20FD70 -> 0x20FDCC
void zCameraTweak_Init(class xBase & data /* r17 */, class xDynAsset & asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x20FD70 -> 0x20FDCC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FDD0 -> 0x0020FE04
*/
// Range: 0x20FDD0 -> 0x20FE04
void zCameraTweakGlobal_Reset() {
    /* anonymous block */ {
        // Range: 0x20FDD0 -> 0x20FE04
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FE10 -> 0x0020FF48
*/
// Range: 0x20FE10 -> 0x20FF48
void zCameraTweakGlobal_Remove(unsigned int owner /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20FE10 -> 0x20FF48
        signed int i; // r7
        signed int j; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FF50 -> 0x00210174
*/
// Range: 0x20FF50 -> 0x210174
void zCameraTweakGlobal_Add(unsigned int owner /* r2 */, float priority /* r29 */, float time /* r29 */, float pitch /* r29 */, float distMult /* r29 */) {
    /* anonymous block */ {
        // Range: 0x20FF50 -> 0x210174
        signed int i; // r6
        signed int j; // r8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210180 -> 0x0021025C
*/
// Range: 0x210180 -> 0x21025C
void zCameraTweakGlobal_Init() {
    /* anonymous block */ {
        // Range: 0x210180 -> 0x21025C
    }
}


