/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A9750 -> 0x004A9DF0
*/
// Range: 0x4A9750 -> 0x4A9DF0
void iPadDebugRender() {
    /* anonymous block */ {
        // Range: 0x4A9750 -> 0x4A9DF0
        signed int i; // r20
        char tmpstr[512]; // r29+0x260
        char padstatestr[32]; // r29+0x240
        char trcstatestr[32]; // r29+0x220
        class xtextbox tb; // @ 0x007BF6D0
        signed char @11662; // @ 0x00638578
        char trc_state_strings[11][33]; // @ 0x006055C0
        char state_strings[4][16]; // @ 0x00605580
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A9DF0 -> 0x004A9F70
*/
// Range: 0x4A9DF0 -> 0x4A9F70
void iPadStartRumble(class _tagxPad * pad /* r2 */, float intensity /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x4A9DF0 -> 0x4A9F70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A9F70 -> 0x004A9F8C
*/
// Range: 0x4A9F70 -> 0x4A9F8C
void iPadStopRumble(class _tagxPad * pad /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A9F70 -> 0x4A9F8C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A9F90 -> 0x004AA3C4
*/
// Range: 0x4A9F90 -> 0x4AA3C4
signed int iPadUpdate(class _tagxPad * pad /* r17 */, unsigned int * on /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4A9F90 -> 0x4AA3C4
        signed int temp; // r2
        unsigned int temp_on; // r4
        signed int result; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AA3D0 -> 0x004AA4F4
*/
// Range: 0x4AA3D0 -> 0x4AA4F4
static void iPadTRCUpdate(class _tagxPad * pad /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4AA3D0 -> 0x4AA4F4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AA500 -> 0x004AA574
*/
// Range: 0x4AA500 -> 0x4AA574
class _tagxPad * iPadEnable(class _tagxPad * pad /* r16 */, signed short port /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AA500 -> 0x4AA574
        enum _tagPadInit pad_init; // r29+0x2C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AA580 -> 0x004AA968
*/
// Range: 0x4AA580 -> 0x4AA968
class _tagxPad * iPadEnableGuts(class _tagxPad * pad /* r17 */, enum _tagPadInit * pad_init /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4AA580 -> 0x4AA968
        signed int i; // r29+0x48
        signed int id; // r29+0x44
        signed int exid; // r29+0x40
        unsigned char tryOpen; // r29+0x4F
        signed int state2; // r29+0x3C
        signed int state3; // r29+0x38
        signed int state4; // r29+0x34
        signed int state5; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iPad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AA970 -> 0x004AA9B4
*/
// Range: 0x4AA970 -> 0x4AA9B4
signed int iPadInit() {
    /* anonymous block */ {
        // Range: 0x4AA970 -> 0x4AA9B4
    }
}


