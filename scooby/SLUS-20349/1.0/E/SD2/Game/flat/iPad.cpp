/*
    Compile unit: E:\SD2\Game\flat\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned char mReadData[32]; // size: 0x20, address: 0x3626C0
static __int128 mPadDmaBuffer[4][16]; // size: 0x400, address: 0x362700
static unsigned char mActDirect[6]; // size: 0x6, address: 0x357C18
static unsigned char mActAlign[6]; // size: 0x6, address: 0x357C20
static float mLargeMotor[4]; // size: 0x10, address: 0x362B00
class _tagTRCPadInfo gTrcPad[4]; // size: 0x30, address: 0x3B1A10
enum _tagTRCState {
    TRC_Unknown = 0,
    TRC_PadMissing = 1,
    TRC_PadInserted = 2,
    TRC_PadInvalidNoAnalog = 3,
    TRC_PadInvalidType = 4,
    TRC_DiskTrayOpen = 5,
    TRC_DiskTrayClosed = 6,
    TRC_DiskInvalid = 7,
    TRC_Total = 8,
};
// total size: 0x68
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
};
enum _tagRumbleType {
    eRumble_Off = 0,
    eRumble_VeryLightHi = 1,
    eRumble_VeryLight = 2,
    eRumble_LightHi = 3,
    eRumble_Light = 4,
    eRumble_MediumHi = 5,
    eRumble_Medium = 6,
    eRumble_HeavyHi = 7,
    eRumble_Heavy = 8,
    eRumble_VeryHeavyHi = 9,
    eRumble_VeryHeavy = 10,
    eRumble_Total = 11,
    eRumbleForceU32 = 2147483647,
};
// total size: 0xC
class _tagTRCPadInfo : public _tagiTRCPadInfo {
    // Members
public:
    signed int id; // offset 0x4, size 0x4
    enum _tagTRCState state; // offset 0x8, size 0x4
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
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
// total size: 0x4
class _tagiTRCPadInfo {
    // Members
public:
    enum _tagPadInit pad_init; // offset 0x0, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111500 -> 0x00111508
*/
// Range: 0x111500 -> 0x111508
void iPadKill() {
    /* anonymous block */ {
        // Range: 0x111500 -> 0x111508
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111510 -> 0x00111604
*/
// Range: 0x111510 -> 0x111604
void iPadStartRumble(class _tagxPad * pad /* r2 */, class _tagxRumble * rumble /* r2 */) {
    /* anonymous block */ {
        // Range: 0x111510 -> 0x111604
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111610 -> 0x0011162C
*/
// Range: 0x111610 -> 0x11162C
void iPadStopRumble(class _tagxPad * pad /* r2 */) {
    /* anonymous block */ {
        // Range: 0x111610 -> 0x11162C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111630 -> 0x001116AC
*/
// Range: 0x111630 -> 0x1116AC
void iPadRumbleFx(class _tagxPad * p /* r16 */, class _tagxRumble * r /* r2 */, float time_passed /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x111630 -> 0x1116AC
        float scale; // r29+0x20
        float act; // r1
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001116B0 -> 0x001119D4
*/
// Range: 0x1116B0 -> 0x1119D4
signed int iPadUpdate(class _tagxPad * pad /* r17 */, unsigned int * on /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1116B0 -> 0x1119D4
        unsigned int temp_on; // r2
        signed int temp; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001119E0 -> 0x00111AF4
*/
// Range: 0x1119E0 -> 0x111AF4
static void iPadTRCUpdate(class _tagxPad * pad /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1119E0 -> 0x111AF4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111B00 -> 0x00111B64
*/
// Range: 0x111B00 -> 0x111B64
class _tagxPad * iPadEnable(class _tagxPad * pad /* r16 */, signed short port /* r2 */) {
    /* anonymous block */ {
        // Range: 0x111B00 -> 0x111B64
        enum _tagPadInit pad_init; // r29+0x2C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111B70 -> 0x00111E48
*/
// Range: 0x111B70 -> 0x111E48
class _tagxPad * iPadEnableGuts(class _tagxPad * pad /* r17 */, enum _tagPadInit * pad_init /* r16 */) {
    /* anonymous block */ {
        // Range: 0x111B70 -> 0x111E48
        signed int state5; // r2
        signed int state3; // r2
        signed int exid; // r2
        signed int id; // r18
        signed int state; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111E50 -> 0x00111F04
*/
// Range: 0x111E50 -> 0x111F04
signed int iPadInit() {
    /* anonymous block */ {
        // Range: 0x111E50 -> 0x111F04
        signed int errorCode; // r2
        char module[2][256]; // r29+0x20
        char empty[1]; // @ 0x0035748C
    }
}


