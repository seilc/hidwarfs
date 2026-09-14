/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\mix\src\mix.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803C9B14 -> 0x803CB2C8
*/
unsigned short __MIXVolumeTable[965]; // size: 0x78A, address: 0x80547668
int __MIXPanTable[128]; // size: 0x200, address: 0x80547DF4
signed short __MIX_DPL2_front[128]; // size: 0x100, address: 0x80547FF4
signed short __MIX_DPL2_rear[128]; // size: 0x100, address: 0x805480F4
unsigned char __MIXAIVolumeTable[50]; // size: 0x32, address: 0x805481F4
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
// total size: 0x60
struct MIXChannel {
    // Members
    struct _AXVPB * axvpb; // offset 0x0, size 0x4
    unsigned long mode; // offset 0x4, size 0x4
    int input; // offset 0x8, size 0x4
    int auxA; // offset 0xC, size 0x4
    int auxB; // offset 0x10, size 0x4
    int pan; // offset 0x14, size 0x4
    int span; // offset 0x18, size 0x4
    int fader; // offset 0x1C, size 0x4
    int l; // offset 0x20, size 0x4
    int r; // offset 0x24, size 0x4
    int f; // offset 0x28, size 0x4
    int b; // offset 0x2C, size 0x4
    int l1; // offset 0x30, size 0x4
    int r1; // offset 0x34, size 0x4
    unsigned short v; // offset 0x38, size 0x2
    unsigned short v1; // offset 0x3A, size 0x2
    unsigned short vL; // offset 0x3C, size 0x2
    unsigned short vL1; // offset 0x3E, size 0x2
    unsigned short vR; // offset 0x40, size 0x2
    unsigned short vR1; // offset 0x42, size 0x2
    unsigned short vS; // offset 0x44, size 0x2
    unsigned short vS1; // offset 0x46, size 0x2
    unsigned short vAL; // offset 0x48, size 0x2
    unsigned short vAL1; // offset 0x4A, size 0x2
    unsigned short vAR; // offset 0x4C, size 0x2
    unsigned short vAR1; // offset 0x4E, size 0x2
    unsigned short vAS; // offset 0x50, size 0x2
    unsigned short vAS1; // offset 0x52, size 0x2
    unsigned short vBL; // offset 0x54, size 0x2
    unsigned short vBL1; // offset 0x56, size 0x2
    unsigned short vBR; // offset 0x58, size 0x2
    unsigned short vBR1; // offset 0x5A, size 0x2
    unsigned short vBS; // offset 0x5C, size 0x2
    unsigned short vBS1; // offset 0x5E, size 0x2
};
static struct MIXChannel __MIXChannel[64]; // size: 0x1800, address: 0x80D59630
static int __MIXDvdStreamAttenCurrent; // size: 0x4, address: 0x80D6BFF8
static int __MIXDvdStreamAttenUser; // size: 0x4, address: 0x80D6BFFC
static unsigned long __MIXSoundMode; // size: 0x4, address: 0x80D6C000
// Range: 0x803C9B14 -> 0x803C9B68
static unsigned short __MIXGetVolume(int db_ /* r3 */) {
    // Local variables
    int db; // r31

    // References
    // -> unsigned short __MIXVolumeTable[965];
}

// Range: 0x803C9B68 -> 0x803C9CB0
static void __MIXSetPan(struct MIXChannel * channel /* r31 */) {
    // Local variables
    int pan; // r29
    int span; // r28
    int ipan; // r27
    int ispan; // r26

    // References
    // -> int __MIXPanTable[128];
    // -> signed short __MIX_DPL2_rear[128];
    // -> signed short __MIX_DPL2_front[128];
    // -> static unsigned long __MIXSoundMode;
}

// Range: 0x803C9CB0 -> 0x803C9D44
static void __MIXResetChannel(struct MIXChannel * channel /* r31 */) {}

// Range: 0x803C9D44 -> 0x803C9D64
static int __MIXClampPan(int pan /* r3 */) {}

// Range: 0x803C9D64 -> 0x803C9DC8
void MIXInit() {
    // Local variables
    int i; // r31

    // References
    // -> static unsigned long __MIXSoundMode;
    // -> static int __MIXDvdStreamAttenUser;
    // -> static int __MIXDvdStreamAttenCurrent;
    // -> static struct MIXChannel __MIXChannel[64];
}

// Range: 0x803C9DC8 -> 0x803C9DCC
void MIXQuit() {}

// Range: 0x803C9DCC -> 0x803C9E30
void MIXSetSoundMode(unsigned long mode /* r31 */) {
    // References
    // -> static unsigned long __MIXSoundMode;
}

// Range: 0x803C9E30 -> 0x803CA5A4
void MIXInitChannel(struct _AXVPB * axvpb /* r28 */, unsigned long mode /* r1+0xC */, int input /* r26 */, int auxA /* r1+0x14 */, int auxB /* r1+0x18 */, int pan /* r1+0x1C */, int span /* r1+0x20 */, int fader /* r1+0x24 */) {
    // Local variables
    int old; // r27
    struct MIXChannel * c; // r31
    unsigned short mixerCtrl; // r29
    unsigned short * p; // r30

    // References
    // -> static unsigned long __MIXSoundMode;
    // -> static struct MIXChannel __MIXChannel[64];
}

// Range: 0x803CA5A4 -> 0x803CA608
void MIXReleaseChannel(struct _AXVPB * axvpb /* r31 */) {
    // References
    // -> static struct MIXChannel __MIXChannel[64];
}

// Range: 0x803CA608 -> 0x803CA640
void MIXSetInput(struct _AXVPB * p /* r3 */, int dB /* r4 */) {
    // Local variables
    struct MIXChannel * channel; // r31

    // References
    // -> static struct MIXChannel __MIXChannel[64];
}

// Range: 0x803CA640 -> 0x803CA680
int MIXAuxAIsPostFader(struct _AXVPB * p /* r3 */) {
    // Local variables
    struct MIXChannel * channel; // r31

    // References
    // -> static struct MIXChannel __MIXChannel[64];
}

// Range: 0x803CA680 -> 0x803CA6B8
void MIXSetAuxA(struct _AXVPB * p /* r3 */, int dB /* r4 */) {
    // Local variables
    struct MIXChannel * channel; // r31

    // References
    // -> static struct MIXChannel __MIXChannel[64];
}

// Range: 0x803CA6B8 -> 0x803CA6E4
int MIXGetAuxA(struct _AXVPB * p /* r3 */) {
    // Local variables
    struct MIXChannel * channel; // r31

    // References
    // -> static struct MIXChannel __MIXChannel[64];
}

// Range: 0x803CA6E4 -> 0x803CA724
int MIXAuxBIsPostFader(struct _AXVPB * p /* r3 */) {
    // Local variables
    struct MIXChannel * channel; // r31

    // References
    // -> static struct MIXChannel __MIXChannel[64];
}

// Range: 0x803CA724 -> 0x803CA768
void MIXSetAuxB(struct _AXVPB * p /* r3 */, int dB /* r4 */) {
    // Local variables
    struct MIXChannel * channel; // r31

    // References
    // -> static struct MIXChannel __MIXChannel[64];
    // -> static unsigned long __MIXSoundMode;
}

// Range: 0x803CA768 -> 0x803CA7A8
int MIXGetAuxB(struct _AXVPB * p /* r3 */) {
    // Local variables
    struct MIXChannel * channel; // r31

    // References
    // -> static struct MIXChannel __MIXChannel[64];
    // -> static unsigned long __MIXSoundMode;
}

// Range: 0x803CA7A8 -> 0x803CA80C
void MIXSetPan(struct _AXVPB * p /* r1+0x8 */, int pan /* r1+0xC */) {
    // Local variables
    struct MIXChannel * channel; // r31

    // References
    // -> static struct MIXChannel __MIXChannel[64];
}

// Range: 0x803CA80C -> 0x803CA838
int MIXGetPan(struct _AXVPB * p /* r3 */) {
    // Local variables
    struct MIXChannel * channel; // r31

    // References
    // -> static struct MIXChannel __MIXChannel[64];
}

// Range: 0x803CA838 -> 0x803CA89C
void MIXSetSPan(struct _AXVPB * p /* r1+0x8 */, int span /* r1+0xC */) {
    // Local variables
    struct MIXChannel * channel; // r31

    // References
    // -> static struct MIXChannel __MIXChannel[64];
}

// Range: 0x803CA89C -> 0x803CA8C8
int MIXGetSPan(struct _AXVPB * p /* r3 */) {
    // Local variables
    struct MIXChannel * channel; // r31

    // References
    // -> static struct MIXChannel __MIXChannel[64];
}

// Range: 0x803CA8C8 -> 0x803CA908
int MIXIsMute(struct _AXVPB * p /* r3 */) {
    // Local variables
    struct MIXChannel * channel; // r31

    // References
    // -> static struct MIXChannel __MIXChannel[64];
}

// Range: 0x803CA908 -> 0x803CA934
int MIXGetFader(struct _AXVPB * p /* r3 */) {
    // Local variables
    struct MIXChannel * channel; // r31

    // References
    // -> static struct MIXChannel __MIXChannel[64];
}

// Range: 0x803CA934 -> 0x803CB2C8
void MIXUpdateSettings() {
    // Local variables
    int i; // r26
    int setNewMixLevel; // r25
    int setNewInputLevel; // r24
    struct MIXChannel * c; // r31
    struct _AXVPB * axvpb; // r28
    unsigned short mixerCtrl; // r30
    unsigned short * p; // r29

    // References
    // -> static int __MIXDvdStreamAttenCurrent;
    // -> unsigned char __MIXAIVolumeTable[50];
    // -> static int __MIXDvdStreamAttenUser;
    // -> static unsigned long __MIXSoundMode;
    // -> static struct MIXChannel __MIXChannel[64];
}


