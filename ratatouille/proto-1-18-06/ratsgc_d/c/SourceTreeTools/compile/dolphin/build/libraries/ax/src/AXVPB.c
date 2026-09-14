/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\ax\src\AXVPB.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80397FB0 -> 0x80399938
*/
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
static struct _AXPB __AXPB[64]; // size: 0x3D00, address: 0x80D45E00
// total size: 0x40
struct _AXPBITDBUFFER {
    // Members
    signed short data[32]; // offset 0x0, size 0x40
};
static struct _AXPBITDBUFFER __AXITD[64]; // size: 0x1000, address: 0x80D49B00
// total size: 0x100
struct _AXPBU {
    // Members
    unsigned short data[128]; // offset 0x0, size 0x100
};
static struct _AXPBU __AXUpdates[64]; // size: 0x4000, address: 0x80D4AB00
// total size: 0x22C
struct _AXVPB {
    // Members
    void * next; // offset 0x0, size 0x4
    void * prev; // offset 0x4, size 0x4
    void * next1; // offset 0x8, size 0x4
    unsigned long priority; // offset 0xC, size 0x4
    void (* callback)(void *); // offset 0x10, size 0x4
    unsigned long userContext; // offset 0x14, size 0x4
    unsigned long index; // offset 0x18, size 0x4
    unsigned long sync; // offset 0x1C, size 0x4
    unsigned long depop; // offset 0x20, size 0x4
    unsigned long updateMS; // offset 0x24, size 0x4
    unsigned long updateCounter; // offset 0x28, size 0x4
    unsigned long updateTotal; // offset 0x2C, size 0x4
    unsigned short * updateWrite; // offset 0x30, size 0x4
    unsigned short updateData[128]; // offset 0x34, size 0x100
    void * itdBuffer; // offset 0x134, size 0x4
    struct _AXPB pb; // offset 0x138, size 0xF4
};
static struct _AXVPB __AXVPB[64]; // size: 0x8B00, address: 0x80D4EB00
static unsigned long __AXSrcCycles[5]; // size: 0x14, address: 0x80536728
static unsigned long __AXMainMixCycles[16]; // size: 0x40, address: 0x8053673C
static unsigned long __AXAuxMixCycles[32]; // size: 0x80, address: 0x8053677C
static unsigned long __AXMaxDspCycles; // size: 0x4, address: 0x80D6BE20
static unsigned long __AXRecDspCycles; // size: 0x4, address: 0x80D6BE24
static unsigned long __AXNumVoices; // size: 0x4, address: 0x80D6BE28
// Range: 0x80397FB0 -> 0x80397FB8
unsigned long __AXGetNumVoices() {
    // References
    // -> static unsigned long __AXNumVoices;
}

// Range: 0x80397FB8 -> 0x80398D14
void __AXServiceVPB(struct _AXVPB * pvpb /* r1+0x8 */) {
    // Local variables
    struct _AXPB * ppbDsp; // r29
    struct _AXPB * ppbUser; // r28
    unsigned long sync; // r24
    unsigned long * src; // r31
    unsigned long * dst; // r30
    unsigned long count; // r1+0x40
    unsigned short * src; // r27
    unsigned short * dst; // r26
    unsigned short * src; // r19
    unsigned short * dst; // r18
    unsigned long * dst_; // r25
    unsigned short * src; // r1+0x3C
    unsigned short * dst; // r1+0x38
    unsigned long * src_; // r1+0x34
    unsigned long * dst_; // r1+0x30
    unsigned long count; // r1+0x2C
    unsigned short * src; // r21
    unsigned short * dst; // r20
    unsigned short * src; // r1+0x28
    unsigned short * dst; // r1+0x24
    unsigned long * src; // r1+0x20
    unsigned long * dst; // r1+0x1C
    unsigned long * src; // r23
    unsigned long * dst; // r22
    unsigned short * src; // r17
    unsigned short * dst; // r16
    unsigned short * src; // r1+0x18
    unsigned short * dst; // r1+0x14
    unsigned short * src; // r1+0x10
    unsigned short * dst; // r1+0xC

    // References
    // -> static struct _AXPBU __AXUpdates[64];
    // -> static struct _AXPB __AXPB[64];
    // -> static unsigned long __AXNumVoices;
}

// Range: 0x80398D14 -> 0x80398D8C
void __AXDumpVPB(struct _AXVPB * pvpb /* r30 */) {
    // Local variables
    struct _AXPB * ppbDsp; // r31

    // References
    // -> static struct _AXPB __AXPB[64];
}

// Range: 0x80398D8C -> 0x80398FE4
void __AXSyncPBs(unsigned long lessDspCycles /* r1+0x8 */) {
    // Local variables
    unsigned long cycles; // r28
    unsigned long i; // r27
    struct _AXVPB * pvpb; // r31

    // References
    // -> static struct _AXPBU __AXUpdates[64];
    // -> static struct _AXPBITDBUFFER __AXITD[64];
    // -> static struct _AXPB __AXPB[64];
    // -> static unsigned long __AXRecDspCycles;
    // -> static unsigned long __AXMaxDspCycles;
    // -> static unsigned long __AXAuxMixCycles[32];
    // -> static unsigned long __AXMainMixCycles[16];
    // -> static unsigned long __AXSrcCycles[5];
    // -> static unsigned long __AXNumVoices;
}

// Range: 0x80398FE4 -> 0x80398FF0
struct _AXPB * __AXGetPBs() {
    // References
    // -> static struct _AXPB __AXPB[64];
}

// Range: 0x80398FF0 -> 0x80399044
void __AXSetPBDefault(struct _AXVPB * p /* r3 */) {}

// Range: 0x80399044 -> 0x80399278
void __AXVPBInit() {
    // Local variables
    unsigned long i; // r30
    struct _AXPB * ppb; // r31
    struct _AXPBITDBUFFER * ppbi; // r26
    struct _AXPBU * ppbu; // r25
    struct _AXVPB * pvpb; // r29
    unsigned long * p; // r28

    // References
    // -> static struct _AXPB __AXPB[64];
    // -> static struct _AXVPB __AXVPB[64];
    // -> static struct _AXPBU __AXUpdates[64];
    // -> static struct _AXPBITDBUFFER __AXITD[64];
    // -> static unsigned long __AXRecDspCycles;
    // -> static unsigned long __AXMaxDspCycles;
}

// Range: 0x80399278 -> 0x803992A4
void __AXVPBQuit() {}

// Range: 0x803992A4 -> 0x803993AC
void AXSetVoiceSrcType(struct _AXVPB * p /* r30 */, unsigned long type /* r28 */) {
    // Local variables
    int old; // r29
    struct _AXPB * ppb; // r31
}

// Range: 0x803993AC -> 0x80399408
void AXSetVoiceState(struct _AXVPB * p /* r31 */, unsigned short state /* r29 */) {
    // Local variables
    int old; // r30
}

// Range: 0x80399408 -> 0x80399458
void AXSetVoiceType(struct _AXVPB * p /* r30 */, unsigned short type /* r1+0xC */) {
    // Local variables
    int old; // r31
}

// Range: 0x80399458 -> 0x8039969C
void AXSetVoiceAddr(struct _AXVPB * p /* r27 */, struct _AXPBADDR * addr /* r29 */) {
    // Local variables
    int old; // r26
    unsigned long * dst; // r31
    unsigned long * src; // r30
}

// Range: 0x8039969C -> 0x80399784
void AXSetVoiceAdpcm(struct _AXVPB * p /* r28 */, struct _AXPBADPCM * adpcm /* r1+0xC */) {
    // Local variables
    int old; // r29
    unsigned long * dst; // r31
    unsigned long * src; // r30
}

// Range: 0x80399784 -> 0x80399848
void AXSetVoiceSrc(struct _AXVPB * p /* r29 */, struct _AXPBSRC * src_ /* r1+0xC */) {
    // Local variables
    int old; // r28
    unsigned short * dst; // r31
    unsigned short * src; // r30
}

// Range: 0x80399848 -> 0x803998C0
void AXSetVoiceSrcRatio(struct _AXVPB * p /* r30 */, float ratio /* r1+0xC */) {
    // Local variables
    unsigned long r; // r31
    int old; // r29
}

// Range: 0x803998C0 -> 0x80399938
void AXSetVoiceAdpcmLoop(struct _AXVPB * p /* r28 */, struct _AXPBADPCMLOOP * adpcmloop /* r1+0xC */) {
    // Local variables
    int old; // r29
    unsigned short * dst; // r31
    unsigned short * src; // r30
}


