/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\ax\src\AXSPB.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80397D40 -> 0x80397FB0
*/
// total size: 0x36
struct _AXSPB {
    // Members
    unsigned short dpopLHi; // offset 0x0, size 0x2
    unsigned short dpopLLo; // offset 0x2, size 0x2
    signed short dpopLDelta; // offset 0x4, size 0x2
    unsigned short dpopRHi; // offset 0x6, size 0x2
    unsigned short dpopRLo; // offset 0x8, size 0x2
    signed short dpopRDelta; // offset 0xA, size 0x2
    unsigned short dpopSHi; // offset 0xC, size 0x2
    unsigned short dpopSLo; // offset 0xE, size 0x2
    signed short dpopSDelta; // offset 0x10, size 0x2
    unsigned short dpopALHi; // offset 0x12, size 0x2
    unsigned short dpopALLo; // offset 0x14, size 0x2
    signed short dpopALDelta; // offset 0x16, size 0x2
    unsigned short dpopARHi; // offset 0x18, size 0x2
    unsigned short dpopARLo; // offset 0x1A, size 0x2
    signed short dpopARDelta; // offset 0x1C, size 0x2
    unsigned short dpopASHi; // offset 0x1E, size 0x2
    unsigned short dpopASLo; // offset 0x20, size 0x2
    signed short dpopASDelta; // offset 0x22, size 0x2
    unsigned short dpopBLHi; // offset 0x24, size 0x2
    unsigned short dpopBLLo; // offset 0x26, size 0x2
    signed short dpopBLDelta; // offset 0x28, size 0x2
    unsigned short dpopBRHi; // offset 0x2A, size 0x2
    unsigned short dpopBRLo; // offset 0x2C, size 0x2
    signed short dpopBRDelta; // offset 0x2E, size 0x2
    unsigned short dpopBSHi; // offset 0x30, size 0x2
    unsigned short dpopBSLo; // offset 0x32, size 0x2
    signed short dpopBSDelta; // offset 0x34, size 0x2
};
static struct _AXSPB __AXStudio; // size: 0x36, address: 0x80D45DC0
static long __AXSpbAL; // size: 0x4, address: 0x80D6BDF8
static long __AXSpbAR; // size: 0x4, address: 0x80D6BDFC
static long __AXSpbAS; // size: 0x4, address: 0x80D6BE00
static long __AXSpbAAL; // size: 0x4, address: 0x80D6BE04
static long __AXSpbAAR; // size: 0x4, address: 0x80D6BE08
static long __AXSpbAAS; // size: 0x4, address: 0x80D6BE0C
static long __AXSpbABL; // size: 0x4, address: 0x80D6BE10
static long __AXSpbABR; // size: 0x4, address: 0x80D6BE14
static long __AXSpbABS; // size: 0x4, address: 0x80D6BE18
// Range: 0x80397D40 -> 0x80397D4C
unsigned long __AXGetStudio() {
    // References
    // -> static struct _AXSPB __AXStudio;
}

// Range: 0x80397D4C -> 0x80397DD4
void __AXDepopFade(long * hostSum /* r3 */, long * dspVolume /* r4 */, signed short * dspDelta /* r5 */) {
    // Local variables
    int frames; // r30
    long delta; // r31
}

// Range: 0x80397DD4 -> 0x80397E9C
void __AXPrintStudio() {
    // References
    // -> static struct _AXSPB __AXStudio;
    // -> static long __AXSpbABS;
    // -> static long __AXSpbABR;
    // -> static long __AXSpbABL;
    // -> static long __AXSpbAAS;
    // -> static long __AXSpbAAR;
    // -> static long __AXSpbAAL;
    // -> static long __AXSpbAS;
    // -> static long __AXSpbAR;
    // -> static long __AXSpbAL;
}

// Range: 0x80397E9C -> 0x80397EF0
void __AXSPBInit() {
    // References
    // -> static long __AXSpbABS;
    // -> static long __AXSpbABR;
    // -> static long __AXSpbABL;
    // -> static long __AXSpbAAS;
    // -> static long __AXSpbAAR;
    // -> static long __AXSpbAAL;
    // -> static long __AXSpbAS;
    // -> static long __AXSpbAR;
    // -> static long __AXSpbAL;
}

// Range: 0x80397EF0 -> 0x80397F1C
void __AXSPBQuit() {}

// total size: 0x24
struct _AXPBMIX {
    // Members
    unsigned short vL; // offset 0x0, size 0x2
    unsigned short vDeltaL; // offset 0x2, size 0x2
    unsigned short vR; // offset 0x4, size 0x2
    unsigned short vDeltaR; // offset 0x6, size 0x2
    unsigned short vAuxAL; // offset 0x8, size 0x2
    unsigned short vDeltaAuxAL; // offset 0xA, size 0x2
    unsigned short vAuxAR; // offset 0xC, size 0x2
    unsigned short vDeltaAuxAR; // offset 0xE, size 0x2
    unsigned short vAuxBL; // offset 0x10, size 0x2
    unsigned short vDeltaAuxBL; // offset 0x12, size 0x2
    unsigned short vAuxBR; // offset 0x14, size 0x2
    unsigned short vDeltaAuxBR; // offset 0x16, size 0x2
    unsigned short vAuxBS; // offset 0x18, size 0x2
    unsigned short vDeltaAuxBS; // offset 0x1A, size 0x2
    unsigned short vS; // offset 0x1C, size 0x2
    unsigned short vDeltaS; // offset 0x1E, size 0x2
    unsigned short vAuxAS; // offset 0x20, size 0x2
    unsigned short vDeltaAuxAS; // offset 0x22, size 0x2
};
// total size: 0xE
struct _AXPBITD {
    // Members
    unsigned short flag; // offset 0x0, size 0x2
    unsigned short bufferHi; // offset 0x2, size 0x2
    unsigned short bufferLo; // offset 0x4, size 0x2
    unsigned short shiftL; // offset 0x6, size 0x2
    unsigned short shiftR; // offset 0x8, size 0x2
    unsigned short targetShiftL; // offset 0xA, size 0x2
    unsigned short targetShiftR; // offset 0xC, size 0x2
};
// total size: 0xE
struct _AXPBUPDATE {
    // Members
    unsigned short updNum[5]; // offset 0x0, size 0xA
    unsigned short dataHi; // offset 0xA, size 0x2
    unsigned short dataLo; // offset 0xC, size 0x2
};
// total size: 0x12
struct _AXPBDPOP {
    // Members
    signed short aL; // offset 0x0, size 0x2
    signed short aAuxAL; // offset 0x2, size 0x2
    signed short aAuxBL; // offset 0x4, size 0x2
    signed short aR; // offset 0x6, size 0x2
    signed short aAuxAR; // offset 0x8, size 0x2
    signed short aAuxBR; // offset 0xA, size 0x2
    signed short aS; // offset 0xC, size 0x2
    signed short aAuxAS; // offset 0xE, size 0x2
    signed short aAuxBS; // offset 0x10, size 0x2
};
// total size: 0x4
struct _AXPBVE {
    // Members
    unsigned short currentVolume; // offset 0x0, size 0x2
    signed short currentDelta; // offset 0x2, size 0x2
};
// total size: 0x6
struct _AXPBFIR {
    // Members
    unsigned short numCoefs; // offset 0x0, size 0x2
    unsigned short coefsHi; // offset 0x2, size 0x2
    unsigned short coefsLo; // offset 0x4, size 0x2
};
// total size: 0x10
struct _AXPBADDR {
    // Members
    unsigned short loopFlag; // offset 0x0, size 0x2
    unsigned short format; // offset 0x2, size 0x2
    unsigned short loopAddressHi; // offset 0x4, size 0x2
    unsigned short loopAddressLo; // offset 0x6, size 0x2
    unsigned short endAddressHi; // offset 0x8, size 0x2
    unsigned short endAddressLo; // offset 0xA, size 0x2
    unsigned short currentAddressHi; // offset 0xC, size 0x2
    unsigned short currentAddressLo; // offset 0xE, size 0x2
};
// total size: 0x28
struct _AXPBADPCM {
    // Members
    unsigned short a[8][2]; // offset 0x0, size 0x20
    unsigned short gain; // offset 0x20, size 0x2
    unsigned short pred_scale; // offset 0x22, size 0x2
    unsigned short yn1; // offset 0x24, size 0x2
    unsigned short yn2; // offset 0x26, size 0x2
};
// total size: 0xE
struct _AXPBSRC {
    // Members
    unsigned short ratioHi; // offset 0x0, size 0x2
    unsigned short ratioLo; // offset 0x2, size 0x2
    unsigned short currentAddressFrac; // offset 0x4, size 0x2
    unsigned short last_samples[4]; // offset 0x6, size 0x8
};
// total size: 0x6
struct _AXPBADPCMLOOP {
    // Members
    unsigned short loop_pred_scale; // offset 0x0, size 0x2
    unsigned short loop_yn1; // offset 0x2, size 0x2
    unsigned short loop_yn2; // offset 0x4, size 0x2
};
// total size: 0x8
struct _AXPBLPF {
    // Members
    unsigned short on; // offset 0x0, size 0x2
    unsigned short yn1; // offset 0x2, size 0x2
    unsigned short a0; // offset 0x4, size 0x2
    unsigned short b0; // offset 0x6, size 0x2
};
// total size: 0xF4
struct _AXPB {
    // Members
    unsigned short nextHi; // offset 0x0, size 0x2
    unsigned short nextLo; // offset 0x2, size 0x2
    unsigned short currHi; // offset 0x4, size 0x2
    unsigned short currLo; // offset 0x6, size 0x2
    unsigned short srcSelect; // offset 0x8, size 0x2
    unsigned short coefSelect; // offset 0xA, size 0x2
    unsigned short mixerCtrl; // offset 0xC, size 0x2
    unsigned short state; // offset 0xE, size 0x2
    unsigned short type; // offset 0x10, size 0x2
    struct _AXPBMIX mix; // offset 0x12, size 0x24
    struct _AXPBITD itd; // offset 0x36, size 0xE
    struct _AXPBUPDATE update; // offset 0x44, size 0xE
    struct _AXPBDPOP dpop; // offset 0x52, size 0x12
    struct _AXPBVE ve; // offset 0x64, size 0x4
    struct _AXPBFIR fir; // offset 0x68, size 0x6
    struct _AXPBADDR addr; // offset 0x6E, size 0x10
    struct _AXPBADPCM adpcm; // offset 0x7E, size 0x28
    struct _AXPBSRC src; // offset 0xA6, size 0xE
    struct _AXPBADPCMLOOP adpcmLoop; // offset 0xB4, size 0x6
    struct _AXPBLPF lpf; // offset 0xBA, size 0x8
    unsigned short pad[25]; // offset 0xC2, size 0x32
};
// Range: 0x80397F1C -> 0x80397FB0
void __AXDepopVoice(struct _AXPB * p /* r3 */) {
    // References
    // -> static long __AXSpbABS;
    // -> static long __AXSpbAAS;
    // -> static long __AXSpbAS;
    // -> static long __AXSpbABR;
    // -> static long __AXSpbAAR;
    // -> static long __AXSpbAR;
    // -> static long __AXSpbABL;
    // -> static long __AXSpbAAL;
    // -> static long __AXSpbAL;
}


