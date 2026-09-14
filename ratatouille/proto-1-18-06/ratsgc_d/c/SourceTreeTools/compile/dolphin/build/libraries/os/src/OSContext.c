/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSContext.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D10D8 -> 0x803D1918
*/
// Range: 0x803D10D8 -> 0x803D11FC
static void __OSLoadFPUContext(unsigned long dummy /* r3 */, struct OSContext * fpucontext /* r4 */) {}

// Range: 0x803D11FC -> 0x803D1324
static void __OSSaveFPUContext(unsigned long dummy1 /* r3 */, unsigned long dummy2 /* r4 */, struct OSContext * fpucontext /* r5 */) {}

// Range: 0x803D1324 -> 0x803D132C
void OSSaveFPUContext(struct OSContext * fpucontext /* r3 */) {}

// Range: 0x803D132C -> 0x803D1388
void OSSetCurrentContext(struct OSContext * context /* r3 */) {}

// Range: 0x803D1388 -> 0x803D1394
struct OSContext * OSGetCurrentContext() {}

// Range: 0x803D1394 -> 0x803D1414
unsigned long OSSaveContext(struct OSContext * context /* r3 */) {}

// Range: 0x803D1414 -> 0x803D14EC
void OSLoadContext(struct OSContext * context /* r3 */) {}

// Range: 0x803D14EC -> 0x803D14F4
unsigned long OSGetStackPointer() {}

// Range: 0x803D14F4 -> 0x803D1524
void OSClearContext(struct OSContext * context /* r3 */) {}

// Range: 0x803D1524 -> 0x803D15E0
void OSInitContext(struct OSContext * context /* r3 */, unsigned long pc /* r4 */, unsigned long newsp /* r5 */) {}

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
// Range: 0x803D15E0 -> 0x803D184C
void OSDumpContext(struct OSContext * context /* r30 */) {
    // Local variables
    unsigned long i; // r31
    unsigned long * p; // r28
    struct OSContext * currentContext; // r27
    struct OSContext fpuContext; // r1+0x10
    int enabled; // r26
}

// Range: 0x803D184C -> 0x803D18D0
static void OSSwitchFPUContext(unsigned char exception /* r3 */, struct OSContext * context /* r4 */) {}

// Range: 0x803D18D0 -> 0x803D1918
void __OSContextInit() {}


