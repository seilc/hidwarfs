/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static signed int sCamTweakCount; // size: 0x4, address: 0x50F784
static class zCamTweak sCamTweakList[8]; // size: 0xA0, address: 0x5E5A60
static float sCamTweakLerp; // size: 0x4, address: 0x50F788
static float sCamTweakTime; // size: 0x4, address: 0x50F78C
static float sCamTweakPitch[2]; // size: 0x8, address: 0x50F790
static float sCamTweakDistMult[2]; // size: 0x8, address: 0x50F798
static float sCamTweakPitchCur; // size: 0x4, address: 0x50F7A0
static float sCamTweakDistMultCur; // size: 0x4, address: 0x50F7A4
static float sCamD; // size: 0x4, address: 0x50F7A8
static float sCamH; // size: 0x4, address: 0x50F7AC
static float sCamPitch; // size: 0x4, address: 0x50F7B0
static class zCamTweakLook zcam_neartweak; // size: 0xC, address: 0x5E5B00
static class zCamTweakLook zcam_fartweak; // size: 0xC, address: 0x5E5B10
signed int zCameraTweak_EventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x3B2BF0
signed int zcam_near; // size: 0x4, address: 0x50E734
float zcam_far_d; // size: 0x4, address: 0x50DAA4
float zcam_far_h; // size: 0x4, address: 0x50DAA8
float zcam_far_pitch; // size: 0x4, address: 0x50DAAC
float zcam_near_d; // size: 0x4, address: 0x50DA98
float zcam_near_h; // size: 0x4, address: 0x50DA9C
float zcam_near_pitch; // size: 0x4, address: 0x50DAA0
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
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
class zCameraTweak : public xBase {
    // Members
public:
    class CameraTweak_asset * casset; // offset 0x10, size 0x4
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
// total size: 0xC
class zCamTweakLook {
    // Members
public:
    float h; // offset 0x0, size 0x4
    float dist; // offset 0x4, size 0x4
    float pitch; // offset 0x8, size 0x4
};
// total size: 0x0
class xSerial {};
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
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B2BF0 -> 0x003B2CA8
*/
// Range: 0x3B2BF0 -> 0x3B2CA8
signed int zCameraTweak_EventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3B2BF0 -> 0x3B2CA8
        class zCameraTweak * tweak; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B2CB0 -> 0x003B2CB8
*/
// Range: 0x3B2CB0 -> 0x3B2CB8
void zCameraTweak_Load(class zCameraTweak * tweak /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3B2CB0 -> 0x3B2CB8
    }
}


/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B2CC0 -> 0x003B2CC8
*/
// Range: 0x3B2CC0 -> 0x3B2CC8
void zCameraTweak_Save(class zCameraTweak * tweak /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3B2CC0 -> 0x3B2CC8
    }
}


/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B2CD0 -> 0x003B2D2C
*/
// Range: 0x3B2CD0 -> 0x3B2D2C
void zCameraTweak_Init(class xBase & data /* r17 */, class xDynAsset & asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3B2CD0 -> 0x3B2D2C
    }
}


/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B2D30 -> 0x003B2D38
*/
// Range: 0x3B2D30 -> 0x3B2D38
float zCameraTweakGlobal_GetPitch() {
    /* anonymous block */ {
        // Range: 0x3B2D30 -> 0x3B2D38
    }
}


/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B2D40 -> 0x003B2D48
*/
// Range: 0x3B2D40 -> 0x3B2D48
float zCameraTweakGlobal_GetH() {
    /* anonymous block */ {
        // Range: 0x3B2D40 -> 0x3B2D48
    }
}


/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B2D50 -> 0x003B2D58
*/
// Range: 0x3B2D50 -> 0x3B2D58
float zCameraTweakGlobal_GetD() {
    /* anonymous block */ {
        // Range: 0x3B2D50 -> 0x3B2D58
    }
}


/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B2D60 -> 0x003B2E54
*/
// Range: 0x3B2D60 -> 0x3B2E54
void zCameraTweakGlobal_Update(float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x3B2D60 -> 0x3B2E54
        class zCamTweakLook * tlook; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B2E60 -> 0x003B2E94
*/
// Range: 0x3B2E60 -> 0x3B2E94
void zCameraTweakGlobal_Reset() {
    /* anonymous block */ {
        // Range: 0x3B2E60 -> 0x3B2E94
    }
}


/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B2EA0 -> 0x003B2FC8
*/
// Range: 0x3B2EA0 -> 0x3B2FC8
void zCameraTweakGlobal_Remove(unsigned int owner /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3B2EA0 -> 0x3B2FC8
        signed int i; // r7
        signed int j; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B2FD0 -> 0x003B31E8
*/
// Range: 0x3B2FD0 -> 0x3B31E8
void zCameraTweakGlobal_Add(unsigned int owner /* r2 */, float priority /* r29 */, float time /* r29 */, float pitch /* r29 */, float distMult /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3B2FD0 -> 0x3B31E8
        signed int i; // r6
        signed int j; // r8
    }
}


/*
    Compile unit: C:\SB\Game\zCameraTweak.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B31F0 -> 0x003B32E0
*/
// Range: 0x3B31F0 -> 0x3B32E0
void zCameraTweakGlobal_Init() {
    /* anonymous block */ {
        // Range: 0x3B31F0 -> 0x3B32E0
    }
}


