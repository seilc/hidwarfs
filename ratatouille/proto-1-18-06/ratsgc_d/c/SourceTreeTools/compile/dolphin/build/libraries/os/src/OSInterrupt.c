/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSInterrupt.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D32DC -> 0x803D3DD4
*/
unsigned long long __OSSpuriousInterrupts; // size: 0x8, address: 0x80D6C0F0
// total size: 0x2C8
struct OSContext {
    // Members
    unsigned long gpr[32]; // offset 0x0, size 0x80
    unsigned long cr; // offset 0x80, size 0x4
    unsigned long lr; // offset 0x84, size 0x4
    unsigned long ctr; // offset 0x88, size 0x4
    unsigned long xer; // offset 0x8C, size 0x4
    double fpr[32]; // offset 0x90, size 0x100
    unsigned long fpscr_pad; // offset 0x190, size 0x4
    unsigned long fpscr; // offset 0x194, size 0x4
    unsigned long srr0; // offset 0x198, size 0x4
    unsigned long srr1; // offset 0x19C, size 0x4
    unsigned short mode; // offset 0x1A0, size 0x2
    unsigned short state; // offset 0x1A2, size 0x2
    unsigned long gqr[8]; // offset 0x1A4, size 0x20
    unsigned long psf_pad; // offset 0x1C4, size 0x4
    double psf[32]; // offset 0x1C8, size 0x100
};
static void (* * InterruptHandlerTable)(signed short, struct OSContext *); // size: 0x4, address: 0x80D6C0F8
static unsigned long InterruptPrioTable[11]; // size: 0x2C, address: 0x8054B4B8
char * __OSInterruptNames[33]; // size: 0x84, address: 0x8054B590
char * __OSPIErrors[8]; // size: 0x20, address: 0x8054B6E4
// Range: 0x803D32DC -> 0x803D32F0
int OSDisableInterrupts() {}

// Range: 0x803D32F0 -> 0x803D3304
int OSEnableInterrupts() {}

// Range: 0x803D3304 -> 0x803D3328
int OSRestoreInterrupts(int level /* r3 */) {}

// Range: 0x803D3328 -> 0x803D33EC
void (* __OSSetInterruptHandler(signed short interrupt /* r30 */, void (* handler)(signed short, struct OSContext *) /* r1+0xC */))(signed short, struct OSContext *) {
    // Local variables
    void (* oldHandler)(signed short, struct OSContext *); // r29

    // References
    // -> static void (* * InterruptHandlerTable)(signed short, struct OSContext *);
}

// Range: 0x803D33EC -> 0x803D3494
void (* __OSGetInterruptHandler(signed short interrupt /* r30 */))(signed short, struct OSContext *) {
    // References
    // -> static void (* * InterruptHandlerTable)(signed short, struct OSContext *);
}

// Range: 0x803D3494 -> 0x803D3530
void __OSInterruptInit() {
    // References
    // -> static void (* * InterruptHandlerTable)(signed short, struct OSContext *);
}

// Range: 0x803D3530 -> 0x803D3824
static unsigned long SetInterruptMask(unsigned long mask /* r3 */, unsigned long current /* r4 */) {
    // Local variables
    unsigned long reg; // r31
}

// Range: 0x803D3824 -> 0x803D38AC
unsigned long __OSMaskInterrupts(unsigned long global /* r29 */) {
    // Local variables
    int enabled; // r27
    unsigned long prev; // r31
    unsigned long local; // r28
    unsigned long mask; // r30
}

// Range: 0x803D38AC -> 0x803D3934
unsigned long __OSUnmaskInterrupts(unsigned long global /* r31 */) {
    // Local variables
    int enabled; // r27
    unsigned long prev; // r30
    unsigned long local; // r28
    unsigned long mask; // r29
}

signed short __OSLastInterrupt; // size: 0x2, address: 0x80D6C100
long long __OSLastInterruptTime; // size: 0x8, address: 0x80D6C108
unsigned long __OSLastInterruptSrr0; // size: 0x4, address: 0x80D6C0FC
// Range: 0x803D3934 -> 0x803D3D84
void __OSDispatchInterrupt(struct OSContext * context /* r26 */) {
    // Local variables
    unsigned long intsr; // r29
    unsigned long reg; // r30
    unsigned long cause; // r31
    unsigned long unmasked; // r25
    unsigned long * prio; // r24
    signed short interrupt; // r27
    void (* handler)(signed short, struct OSContext *); // r23

    // References
    // -> char * __OSInterruptNames[33];
    // -> unsigned long __OSLastInterruptSrr0;
    // -> long long __OSLastInterruptTime;
    // -> signed short __OSLastInterrupt;
    // -> static unsigned long InterruptPrioTable[11];
    // -> char * __OSPIErrors[8];
    // -> unsigned long long __OSSpuriousInterrupts;
}

// Range: 0x803D3D84 -> 0x803D3DD4
static void ExternalInterruptHandler(unsigned char exception /* r3 */, struct OSContext * context /* r4 */) {}


