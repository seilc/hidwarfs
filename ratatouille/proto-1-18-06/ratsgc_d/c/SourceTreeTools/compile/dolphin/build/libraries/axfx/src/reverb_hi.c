/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\axfx\src\reverb_hi.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80399998 -> 0x8039A9D8
*/
// total size: 0x14
struct AXFX_REVHI_DELAYLINE {
    // Members
    long inPoint; // offset 0x0, size 0x4
    long outPoint; // offset 0x4, size 0x4
    long length; // offset 0x8, size 0x4
    float * inputs; // offset 0xC, size 0x4
    float lastOutput; // offset 0x10, size 0x4
};
// Range: 0x80399998 -> 0x803999CC
static void DLsetdelay(struct AXFX_REVHI_DELAYLINE * dl /* r3 */, long lag /* r4 */) {}

void * (* __AXFXAlloc)(unsigned long); // size: 0x4, address: 0x80D67FF0
// Range: 0x803999CC -> 0x80399A8C
static int DLcreate(struct AXFX_REVHI_DELAYLINE * dl /* r31 */, long max_length /* r30 */) {
    // References
    // -> void * (* __AXFXAlloc)(unsigned long);
}

void (* __AXFXFree)(void *); // size: 0x4, address: 0x80D67FF4
// Range: 0x80399A8C -> 0x80399AC0
static void DLdelete(struct AXFX_REVHI_DELAYLINE * dl /* r1+0x8 */) {
    // References
    // -> void (* __AXFXFree)(void *);
}

static long lens$102[8]; // size: 0x20, address: 0x8053A3A8
// total size: 0x1C4
struct AXFX_REVHI_WORK {
    // Members
    struct AXFX_REVHI_DELAYLINE AP[9]; // offset 0x0, size 0xB4
    struct AXFX_REVHI_DELAYLINE C[9]; // offset 0xB4, size 0xB4
    float allPassCoeff; // offset 0x168, size 0x4
    float combCoef[9]; // offset 0x16C, size 0x24
    float lpLastout[3]; // offset 0x190, size 0xC
    float level; // offset 0x19C, size 0x4
    float damping; // offset 0x1A0, size 0x4
    long preDelayTime; // offset 0x1A4, size 0x4
    float crosstalk; // offset 0x1A8, size 0x4
    float * preDelayLine[3]; // offset 0x1AC, size 0xC
    float * preDelayPtr[3]; // offset 0x1B8, size 0xC
};
// Range: 0x80399AC0 -> 0x8039A01C
static int ReverbHICreate(struct AXFX_REVHI_WORK * rv /* r31 */, float coloration /* f26 */, float time /* f27 */, float mix /* f28 */, float damping /* f29 */, float preDelay /* f31 */, float crosstalk /* f30 */) {
    // Local variables
    unsigned char i; // r30
    unsigned char k; // r28

    // References
    // -> void * (* __AXFXAlloc)(unsigned long);
    // -> static long lens$102[8];
}

static double i2fMagic; // size: 0x8, address: 0x80D71B78
static float value1_0; // size: 0x4, address: 0x80D71B80
// Range: 0x8039A01C -> 0x8039A1AC
static void DoCrossTalk(long * l /* r3 */, long * r /* r4 */, float cross /* f1 */, float invcross /* f2 */) {}

static float value0_3; // size: 0x4, address: 0x80D71B84
static float value0_6; // size: 0x4, address: 0x80D71B88
// Range: 0x8039A1AC -> 0x8039A6B8
static void HandleReverb(long * sptr /* r3 */, struct AXFX_REVHI_WORK * rv /* r4 */, long k /* r5 */) {}

// Range: 0x8039A6B8 -> 0x8039A7A0
static void ReverbHICallback(long * left /* r28 */, long * right /* r29 */, long * surround /* r1+0x10 */, struct AXFX_REVHI_WORK * rv /* r31 */) {
    // Local variables
    unsigned char k; // r30
}

// Range: 0x8039A7A0 -> 0x8039A8E0
static void ReverbHIFree(struct AXFX_REVHI_WORK * rv /* r30 */) {
    // Local variables
    unsigned char i; // r31

    // References
    // -> void (* __AXFXFree)(void *);
}

// total size: 0x1E0
struct AXFX_REVERBHI {
    // Members
    struct AXFX_REVHI_WORK rv; // offset 0x0, size 0x1C4
    unsigned char tempDisableFX; // offset 0x1C4, size 0x1
    float coloration; // offset 0x1C8, size 0x4
    float mix; // offset 0x1CC, size 0x4
    float time; // offset 0x1D0, size 0x4
    float damping; // offset 0x1D4, size 0x4
    float preDelay; // offset 0x1D8, size 0x4
    float crosstalk; // offset 0x1DC, size 0x4
};
// Range: 0x8039A8E0 -> 0x8039A948
int AXFXReverbHiInit(struct AXFX_REVERBHI * rev /* r31 */) {
    // Local variables
    int ret; // r30
    int old; // r29
}

// Range: 0x8039A948 -> 0x8039A98C
int AXFXReverbHiShutdown(struct AXFX_REVERBHI * rev /* r1+0x8 */) {
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
// Range: 0x8039A98C -> 0x8039A9D8
void AXFXReverbHiCallback(struct AXFX_BUFFERUPDATE * bufferUpdate /* r31 */, struct AXFX_REVERBHI * reverb /* r30 */) {}


