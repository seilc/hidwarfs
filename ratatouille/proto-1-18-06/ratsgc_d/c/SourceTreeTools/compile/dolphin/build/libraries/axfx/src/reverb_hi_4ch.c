/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\axfx\src\reverb_hi_4ch.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8039ACE0 -> 0x8039BACC
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
// Range: 0x8039ACE0 -> 0x8039AD14
static void DLsetdelayDpl2(struct AXFX_REVHI_DELAYLINE * dl /* r3 */, long lag /* r4 */) {}

void * (* __AXFXAlloc)(unsigned long); // size: 0x4, address: 0x80D67FF0
// Range: 0x8039AD14 -> 0x8039ADD4
static int DLcreateDpl2(struct AXFX_REVHI_DELAYLINE * dl /* r31 */, long max_length /* r30 */) {
    // References
    // -> void * (* __AXFXAlloc)(unsigned long);
}

void (* __AXFXFree)(void *); // size: 0x4, address: 0x80D67FF4
// Range: 0x8039ADD4 -> 0x8039AE08
static void DLdeleteDpl2(struct AXFX_REVHI_DELAYLINE * dl /* r1+0x8 */) {
    // References
    // -> void (* __AXFXFree)(void *);
}

static long lens$102[9]; // size: 0x24, address: 0x8053A42C
// total size: 0x254
struct AXFX_REVHI_WORK_DPL2 {
    // Members
    struct AXFX_REVHI_DELAYLINE AP[12]; // offset 0x0, size 0xF0
    struct AXFX_REVHI_DELAYLINE C[12]; // offset 0xF0, size 0xF0
    float allPassCoeff; // offset 0x1E0, size 0x4
    float combCoef[12]; // offset 0x1E4, size 0x30
    float lpLastout[4]; // offset 0x214, size 0x10
    float level; // offset 0x224, size 0x4
    float damping; // offset 0x228, size 0x4
    long preDelayTime; // offset 0x22C, size 0x4
    float crosstalk; // offset 0x230, size 0x4
    float * preDelayLine[4]; // offset 0x234, size 0x10
    float * preDelayPtr[4]; // offset 0x244, size 0x10
};
// Range: 0x8039AE08 -> 0x8039B324
static int ReverbHICreateDpl2(struct AXFX_REVHI_WORK_DPL2 * rv /* r31 */, float coloration /* f27 */, float time /* f28 */, float mix /* f29 */, float damping /* f30 */, float preDelay /* f31 */) {
    // Local variables
    unsigned char i; // r30
    unsigned char k; // r28

    // References
    // -> void * (* __AXFXAlloc)(unsigned long);
    // -> static long lens$102[9];
}

static float value0_3; // size: 0x4, address: 0x80D71BB8
static float value0_6; // size: 0x4, address: 0x80D71BBC
static double i2fMagic; // size: 0x8, address: 0x80D71BC0
// Range: 0x8039B324 -> 0x8039B830
static void HandleReverbDpl2(long * sptr /* r3 */, struct AXFX_REVHI_WORK_DPL2 * rv /* r4 */, long k /* r5 */) {}

// Range: 0x8039B830 -> 0x8039B970
static void ReverbHIDpl2Free(struct AXFX_REVHI_WORK_DPL2 * rv /* r30 */) {
    // Local variables
    unsigned char i; // r31

    // References
    // -> void (* __AXFXFree)(void *);
}

// total size: 0x26C
struct AXFX_REVERBHI_DPL2 {
    // Members
    struct AXFX_REVHI_WORK_DPL2 rv; // offset 0x0, size 0x254
    unsigned char tempDisableFX; // offset 0x254, size 0x1
    float coloration; // offset 0x258, size 0x4
    float mix; // offset 0x25C, size 0x4
    float time; // offset 0x260, size 0x4
    float damping; // offset 0x264, size 0x4
    float preDelay; // offset 0x268, size 0x4
};
// Range: 0x8039B970 -> 0x8039B9D4
int AXFXReverbHiInitDpl2(struct AXFX_REVERBHI_DPL2 * reverb /* r31 */) {
    // Local variables
    int ret; // r30
    int old; // r29
}

// Range: 0x8039B9D4 -> 0x8039BA18
int AXFXReverbHiShutdownDpl2(struct AXFX_REVERBHI_DPL2 * reverb /* r1+0x8 */) {
    // Local variables
    int old; // r31
}

// total size: 0x10
struct AXFX_BUFFERUPDATE_DPL2 {
    // Members
    long * L; // offset 0x0, size 0x4
    long * R; // offset 0x4, size 0x4
    long * Ls; // offset 0x8, size 0x4
    long * Rs; // offset 0xC, size 0x4
};
// Range: 0x8039BA18 -> 0x8039BACC
void AXFXReverbHiCallbackDpl2(struct AXFX_BUFFERUPDATE_DPL2 * bufferUpdate /* r30 */, struct AXFX_REVERBHI_DPL2 * reverb /* r31 */) {}


