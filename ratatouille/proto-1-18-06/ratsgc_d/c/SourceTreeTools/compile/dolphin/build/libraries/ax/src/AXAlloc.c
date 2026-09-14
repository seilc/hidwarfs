/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\ax\src\AXAlloc.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80396430 -> 0x80396CC4
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
static struct _AXVPB * __AXStackHead[32]; // size: 0x80, address: 0x80D3DF08
static struct _AXVPB * __AXStackTail[32]; // size: 0x80, address: 0x80D3DF88
static struct _AXVPB * __AXCallbackStack; // size: 0x4, address: 0x80D6BD68
// Range: 0x80396430 -> 0x80396498
static unsigned long __AXCheckStacks() {
    // Local variables
    unsigned long i; // r31
    unsigned long voices; // r29
    struct _AXVPB * voice; // r30

    // References
    // -> static struct _AXVPB * __AXStackHead[32];
}

// Range: 0x80396498 -> 0x803964F8
struct _AXVPB * __AXGetStackHead(unsigned long priority /* r31 */) {
    // References
    // -> static struct _AXVPB * __AXStackHead[32];
}

// Range: 0x803964F8 -> 0x80396570
void __AXServiceCallbackStack() {
    // Local variables
    struct _AXVPB * p; // r31
}

// Range: 0x80396570 -> 0x803965CC
void __AXInitVoiceStacks() {
    // Local variables
    unsigned long i; // r31

    // References
    // -> static struct _AXVPB * __AXStackTail[32];
    // -> static struct _AXVPB * __AXStackHead[32];
    // -> static struct _AXVPB * __AXCallbackStack;
}

// Range: 0x803965CC -> 0x803965FC
void __AXAllocInit() {}

// Range: 0x803965FC -> 0x8039662C
void __AXAllocQuit() {}

// Range: 0x8039662C -> 0x80396698
void __AXPushFreeStack(struct _AXVPB * p /* r31 */) {
    // References
    // -> static struct _AXVPB * __AXStackHead[32];
}

// Range: 0x80396698 -> 0x803966CC
struct _AXVPB * __AXPopFreeStack() {
    // Local variables
    struct _AXVPB * p; // r31

    // References
    // -> static struct _AXVPB * __AXStackHead[32];
}

// Range: 0x803966CC -> 0x803966DC
void __AXPushCallbackStack(struct _AXVPB * p /* r3 */) {
    // References
    // -> static struct _AXVPB * __AXCallbackStack;
}

// Range: 0x803966DC -> 0x80396708
struct _AXVPB * __AXPopCallbackStack() {
    // Local variables
    struct _AXVPB * p; // r31

    // References
    // -> static struct _AXVPB * __AXCallbackStack;
}

// Range: 0x80396708 -> 0x80396804
void __AXRemoveFromStack(struct _AXVPB * p /* r29 */) {
    // Local variables
    unsigned long i; // r30
    struct _AXVPB * head; // r28
    struct _AXVPB * tail; // r27

    // References
    // -> static struct _AXVPB * __AXStackTail[32];
    // -> static struct _AXVPB * __AXStackHead[32];
}

// Range: 0x80396804 -> 0x803968C8
void __AXPushStackHead(struct _AXVPB * p /* r30 */, unsigned long priority /* r31 */) {
    // References
    // -> static struct _AXVPB * __AXStackTail[32];
    // -> static struct _AXVPB * __AXStackHead[32];
}

// Range: 0x803968C8 -> 0x803969D4
struct _AXVPB * __AXPopStackFromBottom(unsigned long priority /* r31 */) {
    // Local variables
    struct _AXVPB * p; // r29

    // References
    // -> static struct _AXVPB * __AXStackTail[32];
    // -> static struct _AXVPB * __AXStackHead[32];
}

// Range: 0x803969D4 -> 0x80396A9C
void AXFreeVoice(struct _AXVPB * p /* r31 */) {
    // Local variables
    int old; // r29
}

// Range: 0x80396A9C -> 0x80396BD8
struct _AXVPB * AXAcquireVoice(unsigned long priority /* r28 */, void (* callback)(void *) /* r1+0xC */, unsigned long userContext /* r1+0x10 */) {
    // Local variables
    int old; // r27
    struct _AXVPB * p; // r31
    unsigned long i; // r29
}

// Range: 0x80396BD8 -> 0x80396CC4
void AXSetVoicePriority(struct _AXVPB * p /* r30 */, unsigned long priority /* r29 */) {
    // Local variables
    int old; // r28
}


