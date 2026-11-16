/*
    Compile unit: E:\SD2\Game\flat\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class _tagxRumble mRumbleList[32]; // size: 0x200, address: 0x3605B0
class _tagxPad mPad[4]; // size: 0x1A0, address: 0x3607B0
class _tagxPad * gDebugPad; // size: 0x4, address: 0x3585A8
class _tagxPad * gPlayerPad; // size: 0x4, address: 0x3585AC
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

/*
    Compile unit: E:\SD2\Game\flat\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00112720 -> 0x001128C8
*/
// Range: 0x112720 -> 0x1128C8
signed int xPadAddRumble(signed int idx /* r2 */, enum _tagRumbleType type /* r21 */, float time /* r20 */, signed int replace /* r2 */, unsigned int fxflags /* r20 */) {
    /* anonymous block */ {
        // Range: 0x112720 -> 0x1128C8
        class _tagxRumble * last_r; // r18
        class _tagxRumble * r; // r3
        class _tagxPad * pad; // r17
        signed int appended; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001128D0 -> 0x00112948
*/
// Range: 0x1128D0 -> 0x112948
void xPadDestroyRumbleChain(signed int idx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1128D0 -> 0x112948
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00112950 -> 0x00112958
*/
// Range: 0x112950 -> 0x112958
void xPadKill() {
    /* anonymous block */ {
        // Range: 0x112950 -> 0x112958
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00112960 -> 0x00112F34
*/
// Range: 0x112960 -> 0x112F34
signed int xPadUpdate(signed int idx /* r16 */, float time_passed /* r20 */) {
    /* anonymous block */ {
        // Range: 0x112960 -> 0x112F34
        unsigned int fake_dpad; // r4
        class _tagxRumble * r; // r17
        class _tagxPad * p; // r16
        unsigned int new_on; // r29+0x4C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00112F40 -> 0x00112FF0
*/
// Range: 0x112F40 -> 0x112FF0
void xPadRumbleEnable(signed int idx /* r2 */, signed int enable /* r2 */) {
    /* anonymous block */ {
        // Range: 0x112F40 -> 0x112FF0
        class _tagxPad * p; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00112FF0 -> 0x00113070
*/
// Range: 0x112FF0 -> 0x113070
class _tagxPad * xPadEnable(signed int idx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x112FF0 -> 0x113070
        class _tagxPad * p; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00113070 -> 0x001130D8
*/
// Range: 0x113070 -> 0x1130D8
signed int xPadInit() {
    /* anonymous block */ {
        // Range: 0x113070 -> 0x1130D8
    }
}


