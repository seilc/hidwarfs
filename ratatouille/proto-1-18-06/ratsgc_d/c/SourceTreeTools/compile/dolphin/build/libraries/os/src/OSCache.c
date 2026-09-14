/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSCache.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D0C7C -> 0x803D10D8
*/
// Range: 0x803D0C7C -> 0x803D0C90
void DCEnable() {}

// Range: 0x803D0C90 -> 0x803D0CBC
void DCInvalidateRange(void * addr /* r3 */, unsigned long nBytes /* r4 */) {}

// Range: 0x803D0CBC -> 0x803D0CEC
void DCFlushRange(void * addr /* r3 */, unsigned long nBytes /* r4 */) {}

// Range: 0x803D0CEC -> 0x803D0D1C
void DCStoreRange(void * addr /* r3 */, unsigned long nBytes /* r4 */) {}

// Range: 0x803D0D1C -> 0x803D0D48
void DCFlushRangeNoSync(void * addr /* r3 */, unsigned long nBytes /* r4 */) {}

// Range: 0x803D0D48 -> 0x803D0D7C
void ICInvalidateRange(void * addr /* r3 */, unsigned long nBytes /* r4 */) {}

// Range: 0x803D0D7C -> 0x803D0D8C
void ICFlashInvalidate() {}

// Range: 0x803D0D8C -> 0x803D0DA0
void ICEnable() {}

// Range: 0x803D0DA0 -> 0x803D0DC8
void LCDisable() {}

// Range: 0x803D0DC8 -> 0x803D0E14
static void L2Init() {
    // Local variables
    unsigned long oldMSR; // r31
}

// Range: 0x803D0E14 -> 0x803D0E40
void L2Enable() {}

// Range: 0x803D0E40 -> 0x803D0E70
void L2Disable() {}

// Range: 0x803D0E70 -> 0x803D0EDC
void L2GlobalInvalidate() {}

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
// Range: 0x803D0EDC -> 0x803D102C
void DMAErrorHandler(struct OSContext * context /* r29 */) {
    // Local variables
    unsigned long hid2; // r30
}

// Range: 0x803D102C -> 0x803D10D8
void __OSCacheInit() {}


