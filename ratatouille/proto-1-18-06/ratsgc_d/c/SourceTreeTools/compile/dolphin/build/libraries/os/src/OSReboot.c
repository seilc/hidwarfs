/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSReboot.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D4438 -> 0x803D44B0
*/
static void * SaveStart; // size: 0x4, address: 0x80D6C110
static void * SaveEnd; // size: 0x4, address: 0x80D6C114
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
// Range: 0x803D4438 -> 0x803D449C
void __OSReboot(unsigned long resetCode /* r1+0x8 */, unsigned long bootDol /* r1+0xC */) {
    // Local variables
    struct OSContext exceptionContext; // r1+0x18
    char * argvToPass; // r1+0x10
}

// Range: 0x803D449C -> 0x803D44B0
void OSGetSaveRegion(void * start /* r3 */, void * end /* r4 */) {
    // References
    // -> static void * SaveEnd;
    // -> static void * SaveStart;
}


