/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\ax\src\AXAux.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80396CC4 -> 0x803971C8
*/
static long __AXBufferAuxA[3][480]; // size: 0x1680, address: 0x80D3E020
static long __AXBufferAuxB[3][480]; // size: 0x1680, address: 0x80D3F6A0
static void (* __AXCallbackAuxA)(void *, void *); // size: 0x4, address: 0x80D6BD70
static void (* __AXCallbackAuxB)(void *, void *); // size: 0x4, address: 0x80D6BD74
static void * __AXContextAuxA; // size: 0x4, address: 0x80D6BD78
static void * __AXContextAuxB; // size: 0x4, address: 0x80D6BD7C
static long * __AXAuxADspWrite; // size: 0x4, address: 0x80D6BD80
static long * __AXAuxADspRead; // size: 0x4, address: 0x80D6BD84
static long * __AXAuxBDspWrite; // size: 0x4, address: 0x80D6BD88
static long * __AXAuxBDspRead; // size: 0x4, address: 0x80D6BD8C
static unsigned long __AXAuxDspWritePosition; // size: 0x4, address: 0x80D6BD90
static unsigned long __AXAuxDspReadPosition; // size: 0x4, address: 0x80D6BD94
static unsigned long __AXAuxDspWritePositionDpl2; // size: 0x4, address: 0x80D6BD98
static unsigned long __AXAuxDspReadPositionDpl2; // size: 0x4, address: 0x80D6BD9C
static unsigned long __AXAuxCpuReadWritePosition; // size: 0x4, address: 0x80D6BDA0
// Range: 0x80396CC4 -> 0x80396D7C
void __AXAuxInit() {
    // Local variables
    int i; // r31
    long * pA; // r30
    long * pB; // r29

    // References
    // -> static long __AXBufferAuxB[3][480];
    // -> static long __AXBufferAuxA[3][480];
    // -> static unsigned long __AXAuxCpuReadWritePosition;
    // -> static unsigned long __AXAuxDspReadPositionDpl2;
    // -> static unsigned long __AXAuxDspWritePositionDpl2;
    // -> static unsigned long __AXAuxDspReadPosition;
    // -> static unsigned long __AXAuxDspWritePosition;
    // -> static void * __AXContextAuxB;
    // -> static void * __AXContextAuxA;
    // -> static void (* __AXCallbackAuxB)(void *, void *);
    // -> static void (* __AXCallbackAuxA)(void *, void *);
}

// Range: 0x80396D7C -> 0x80396DB8
void __AXAuxQuit() {
    // References
    // -> static void (* __AXCallbackAuxB)(void *, void *);
    // -> static void (* __AXCallbackAuxA)(void *, void *);
}

// Range: 0x80396DB8 -> 0x80396DEC
void __AXGetAuxAInput(unsigned long * p /* r3 */) {
    // References
    // -> static unsigned long __AXAuxDspWritePosition;
    // -> static long __AXBufferAuxA[3][480];
    // -> static void (* __AXCallbackAuxA)(void *, void *);
}

// Range: 0x80396DEC -> 0x80396E0C
void __AXGetAuxAInputDpl2(unsigned long * p /* r3 */) {
    // References
    // -> static unsigned long __AXAuxDspWritePosition;
    // -> static long __AXBufferAuxB[3][480];
}

// Range: 0x80396E0C -> 0x80396E28
void __AXGetAuxAOutput(unsigned long * p /* r3 */) {
    // References
    // -> static unsigned long __AXAuxDspReadPosition;
    // -> static long __AXBufferAuxA[3][480];
}

// Range: 0x80396E28 -> 0x80396E48
void __AXGetAuxAOutputDpl2R(unsigned long * p /* r3 */) {
    // References
    // -> static unsigned long __AXAuxDspReadPosition;
    // -> static long __AXBufferAuxA[3][480];
}

// Range: 0x80396E48 -> 0x80396E68
void __AXGetAuxAOutputDpl2Ls(unsigned long * p /* r3 */) {
    // References
    // -> static unsigned long __AXAuxDspReadPosition;
    // -> static long __AXBufferAuxA[3][480];
}

// Range: 0x80396E68 -> 0x80396E88
void __AXGetAuxAOutputDpl2Rs(unsigned long * p /* r3 */) {
    // References
    // -> static unsigned long __AXAuxDspReadPosition;
    // -> static long __AXBufferAuxB[3][480];
}

// Range: 0x80396E88 -> 0x80396EBC
void __AXGetAuxBInput(unsigned long * p /* r3 */) {
    // References
    // -> static unsigned long __AXAuxDspWritePosition;
    // -> static long __AXBufferAuxB[3][480];
    // -> static void (* __AXCallbackAuxB)(void *, void *);
}

// Range: 0x80396EBC -> 0x80396ED8
void __AXGetAuxBOutput(unsigned long * p /* r3 */) {
    // References
    // -> static unsigned long __AXAuxDspReadPosition;
    // -> static long __AXBufferAuxB[3][480];
}

// Range: 0x80396ED8 -> 0x80396EF4
void __AXGetAuxBForDPL2(unsigned long * p /* r3 */) {
    // References
    // -> static unsigned long __AXAuxDspWritePositionDpl2;
    // -> static long __AXBufferAuxB[3][480];
}

// Range: 0x80396EF4 -> 0x80396F10
void __AXGetAuxBOutputDPL2(unsigned long * p /* r3 */) {
    // References
    // -> static unsigned long __AXAuxDspReadPositionDpl2;
    // -> static long __AXBufferAuxB[3][480];
}

unsigned long __AXClMode; // size: 0x4, address: 0x80D6BDB8
// total size: 0x10
struct AX_AUX_DATA_DPL2 {
    // Members
    long * l; // offset 0x0, size 0x4
    long * r; // offset 0x4, size 0x4
    long * ls; // offset 0x8, size 0x4
    long * rs; // offset 0xC, size 0x4
};
// total size: 0xC
struct AX_AUX_DATA {
    // Members
    long * l; // offset 0x0, size 0x4
    long * r; // offset 0x4, size 0x4
    long * s; // offset 0x8, size 0x4
};
// Range: 0x80396F10 -> 0x803971B0
void __AXProcessAux() {
    // Local variables
    struct AX_AUX_DATA_DPL2 auxData; // r1+0x20
    struct AX_AUX_DATA auxData; // r1+0x14
    struct AX_AUX_DATA auxData; // r1+0x8

    // References
    // -> static unsigned long __AXAuxCpuReadWritePosition;
    // -> static unsigned long __AXAuxDspReadPositionDpl2;
    // -> static unsigned long __AXAuxDspWritePositionDpl2;
    // -> static unsigned long __AXAuxDspReadPosition;
    // -> static unsigned long __AXAuxDspWritePosition;
    // -> static void * __AXContextAuxB;
    // -> static void (* __AXCallbackAuxB)(void *, void *);
    // -> static long __AXBufferAuxB[3][480];
    // -> unsigned long __AXClMode;
    // -> static void * __AXContextAuxA;
    // -> static void (* __AXCallbackAuxA)(void *, void *);
    // -> static long __AXBufferAuxA[3][480];
    // -> static long * __AXAuxBDspRead;
    // -> static long * __AXAuxBDspWrite;
    // -> static long * __AXAuxADspRead;
    // -> static long * __AXAuxADspWrite;
}

// Range: 0x803971B0 -> 0x803971BC
void AXRegisterAuxACallback(void (* callback)(void *, void *) /* r3 */, void * context /* r4 */) {
    // References
    // -> static void * __AXContextAuxA;
    // -> static void (* __AXCallbackAuxA)(void *, void *);
}

// Range: 0x803971BC -> 0x803971C8
void AXRegisterAuxBCallback(void (* callback)(void *, void *) /* r3 */, void * context /* r4 */) {
    // References
    // -> static void * __AXContextAuxB;
    // -> static void (* __AXCallbackAuxB)(void *, void *);
}


