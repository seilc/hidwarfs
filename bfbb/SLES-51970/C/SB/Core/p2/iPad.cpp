/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned char mReadData[32]; // size: 0x20, address: 0x532600
static __int128 mPadDmaBuffer[4][16]; // size: 0x400, address: 0x532640
static unsigned char mActDirect[6]; // size: 0x6, address: 0x50ED28
static unsigned char mActAlign[6]; // size: 0x6, address: 0x50ED30
static float mLargeMotor[4]; // size: 0x10, address: 0x532A40
class _tagTRCPadInfo gTrcPad[4]; // size: 0x30, address: 0x5B9E70
// total size: 0x148
class _tagxPad {
    // Members
public:
    unsigned char value[22]; // offset 0x0, size 0x16
    unsigned char last_value[22]; // offset 0x16, size 0x16
    unsigned int on; // offset 0x2C, size 0x4
    unsigned int pressed; // offset 0x30, size 0x4
    unsigned int released; // offset 0x34, size 0x4
    class _tagPadAnalog analog1; // offset 0x38, size 0x2
    class _tagPadAnalog analog2; // offset 0x3A, size 0x2
    enum _tagPadState state; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    class _tagxRumble rumble_head; // offset 0x44, size 0x10
    signed short port; // offset 0x54, size 0x2
    signed short slot; // offset 0x56, size 0x2
    class _tagiPad context; // offset 0x58, size 0x4
    float al2d_timer; // offset 0x5C, size 0x4
    float ar2d_timer; // offset 0x60, size 0x4
    float d_timer; // offset 0x64, size 0x4
    float up_tmr[22]; // offset 0x68, size 0x58
    float down_tmr[22]; // offset 0xC0, size 0x58
    class analog_data analog[2]; // offset 0x118, size 0x30
};
// total size: 0x18
class analog_data {
    // Members
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x4
class _tagiTRCPadInfo {
    // Members
public:
    enum _tagPadInit pad_init; // offset 0x0, size 0x4
};
// total size: 0x10
class _tagxRumble {
    // Members
public:
    enum _tagRumbleType type; // offset 0x0, size 0x4
    float seconds; // offset 0x4, size 0x4
    class _tagxRumble * next; // offset 0x8, size 0x4
    signed short active; // offset 0xC, size 0x2
    unsigned short fxflags; // offset 0xE, size 0x2
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
enum _tagTRCState {
    TRC_Unknown = 0,
    TRC_PadMissing = 1,
    TRC_PadInserted = 2,
    TRC_PadInvalidNoAnalog = 3,
    TRC_PadInvalidType = 4,
    TRC_DiskNotIdentified = 5,
    TRC_DiskIdentified = 6,
    TRC_DiskTrayOpen = 7,
    TRC_DiskTrayClosed = 8,
    TRC_DiskNoDisk = 9,
    TRC_DiskInvalid = 10,
    TRC_DiskRetry = 11,
    TRC_DiskFatal = 12,
    TRC_Total = 13,
};
enum _tagPadInit {
    ePadInit_Open1 = 0,
    ePadInit_WaitStable2 = 1,
    ePadInit_EnableAnalog3 = 2,
    ePadInit_EnableAnalog3LetsAllPissOffChris = 3,
    ePadInit_EnableRumble4 = 4,
    ePadInit_EnableRumbleTest5 = 5,
    ePadInit_PressureS6 = 6,
    ePadInit_PressureSTest7 = 7,
    ePadInit_Complete8a = 8,
    ePadInit_Complete8b = 9,
    ePadInit_Finished9 = 10,
};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
// total size: 0xC
class _tagTRCPadInfo : public _tagiTRCPadInfo {
    // Members
public:
    signed int id; // offset 0x4, size 0x4
    enum _tagTRCState state; // offset 0x8, size 0x4
};
enum _tagRumbleType {
    eRumble_Off = 0,
    eRumble_Hi = 1,
    eRumble_VeryLightHi = 2,
    eRumble_VeryLight = 3,
    eRumble_LightHi = 4,
    eRumble_Light = 5,
    eRumble_MediumHi = 6,
    eRumble_Medium = 7,
    eRumble_HeavyHi = 8,
    eRumble_Heavy = 9,
    eRumble_VeryHeavyHi = 10,
    eRumble_VeryHeavy = 11,
    eRumble_Total = 12,
    eRumbleForceU32 = 2147483647,
};

/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AF860 -> 0x001AF868
*/
// Range: 0x1AF860 -> 0x1AF868
void iPadKill() {
    /* anonymous block */ {
        // Range: 0x1AF860 -> 0x1AF868
    }
}


/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AF870 -> 0x001AF98C
*/
// Range: 0x1AF870 -> 0x1AF98C
void iPadStartRumble(class _tagxPad * pad /* r2 */, class _tagxRumble * rumble /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AF870 -> 0x1AF98C
    }
}


/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AF990 -> 0x001AF9AC
*/
// Range: 0x1AF990 -> 0x1AF9AC
void iPadStopRumble(class _tagxPad * pad /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AF990 -> 0x1AF9AC
    }
}


/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AF9B0 -> 0x001AFA5C
*/
// Range: 0x1AF9B0 -> 0x1AFA5C
void iPadRumbleFx(class _tagxPad * p /* r2 */, class _tagxRumble * r /* r2 */, float time_passed /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x1AF9B0 -> 0x1AFA5C
        float act; // r2
        float scale; // r1
    }
}


/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AFA60 -> 0x001AFDC4
*/
// Range: 0x1AFA60 -> 0x1AFDC4
signed int iPadUpdate(class _tagxPad * pad /* r17 */, unsigned int * on /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AFA60 -> 0x1AFDC4
        signed int temp; // r2
        unsigned int temp_on; // r2
        signed int result; // r2
    }
}


/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AFDD0 -> 0x001AFEFC
*/
// Range: 0x1AFDD0 -> 0x1AFEFC
static void iPadTRCUpdate(class _tagxPad * pad /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AFDD0 -> 0x1AFEFC
    }
}


/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AFF00 -> 0x001AFF6C
*/
// Range: 0x1AFF00 -> 0x1AFF6C
class _tagxPad * iPadEnable(class _tagxPad * pad /* r16 */, signed short port /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AFF00 -> 0x1AFF6C
        enum _tagPadInit pad_init; // r29+0x2C
    }
}


/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AFF70 -> 0x001B02F8
*/
// Range: 0x1AFF70 -> 0x1B02F8
class _tagxPad * iPadEnableGuts(class _tagxPad * pad /* r17 */, enum _tagPadInit * pad_init /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AFF70 -> 0x1B02F8
        signed int state; // r2
        signed int id; // r18
        signed int exid; // r2
        signed int state3; // r2
        signed int state3; // r2
        signed int state5; // r2
    }
}


/*
    Compile unit: C:\SB\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B0300 -> 0x001B0344
*/
// Range: 0x1B0300 -> 0x1B0344
signed int iPadInit() {
    /* anonymous block */ {
        // Range: 0x1B0300 -> 0x1B0344
    }
}


