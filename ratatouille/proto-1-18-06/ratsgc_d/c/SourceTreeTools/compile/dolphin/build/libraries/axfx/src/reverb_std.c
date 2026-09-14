/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\axfx\src\reverb_std.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8039A9D8 -> 0x8039AB90
*/
// total size: 0x14
struct AXFX_REVSTD_DELAYLINE {
    // Members
    long inPoint; // offset 0x0, size 0x4
    long outPoint; // offset 0x4, size 0x4
    long length; // offset 0x8, size 0x4
    float * inputs; // offset 0xC, size 0x4
    float lastOutput; // offset 0x10, size 0x4
};
void (* __AXFXFree)(void *); // size: 0x4, address: 0x80D67FF4
// Range: 0x8039A9D8 -> 0x8039AA0C
static void DLdelete(struct AXFX_REVSTD_DELAYLINE * dl /* r1+0x8 */) {
    // References
    // -> void (* __AXFXFree)(void *);
}

// total size: 0x13C
struct AXFX_REVSTD_WORK {
    // Members
    struct AXFX_REVSTD_DELAYLINE AP[6]; // offset 0x0, size 0x78
    struct AXFX_REVSTD_DELAYLINE C[6]; // offset 0x78, size 0x78
    float allPassCoeff; // offset 0xF0, size 0x4
    float combCoef[6]; // offset 0xF4, size 0x18
    float lpLastout[3]; // offset 0x10C, size 0xC
    float level; // offset 0x118, size 0x4
    float damping; // offset 0x11C, size 0x4
    long preDelayTime; // offset 0x120, size 0x4
    float * preDelayLine[3]; // offset 0x124, size 0xC
    float * preDelayPtr[3]; // offset 0x130, size 0xC
};
// Range: 0x8039AA0C -> 0x8039AB4C
static void ReverbSTDFree(struct AXFX_REVSTD_WORK * rv /* r30 */) {
    // Local variables
    unsigned char i; // r31

    // References
    // -> void (* __AXFXFree)(void *);
}

// total size: 0x154
struct AXFX_REVERBSTD {
    // Members
    struct AXFX_REVSTD_WORK rv; // offset 0x0, size 0x13C
    unsigned char tempDisableFX; // offset 0x13C, size 0x1
    float coloration; // offset 0x140, size 0x4
    float mix; // offset 0x144, size 0x4
    float time; // offset 0x148, size 0x4
    float damping; // offset 0x14C, size 0x4
    float preDelay; // offset 0x150, size 0x4
};
// Range: 0x8039AB4C -> 0x8039AB90
int AXFXReverbStdShutdown(struct AXFX_REVERBSTD * rev /* r1+0x8 */) {
    // Local variables
    int old; // r31
}

// total size: 0xC
struct AXFX_BUFFERUPDATE {
    // Members
    long * left; // offset 0x0, size 0x4
    long * right; // offset 0x4, size 0x4
    long * surround; // offset 0x8, size 0x4
};

