/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\db\src\db.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803A3018 -> 0x803A3138
*/
// total size: 0x10
struct DBInterface {
    // Members
    unsigned long bPresent; // offset 0x0, size 0x4
    unsigned long exceptionMask; // offset 0x4, size 0x4
    void (* ExceptionDestination)(); // offset 0x8, size 0x4
    void * exceptionReturn; // offset 0xC, size 0x4
};
struct DBInterface * __DBInterface; // size: 0x4, address: 0x80D6BE48
int DBVerbose; // size: 0x4, address: 0x80D6BE4C
// Range: 0x803A3018 -> 0x803A305C
void DBInit() {
    // References
    // -> int DBVerbose;
    // -> struct DBInterface * __DBInterface;
}

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
// Range: 0x803A305C -> 0x803A30AC
void __DBExceptionDestinationAux() {
    // Local variables
    unsigned long * contextAddr; // r31
    struct OSContext * context; // r30
}

// Range: 0x803A30AC -> 0x803A30BC
void __DBExceptionDestination() {}

// Range: 0x803A30BC -> 0x803A30E8
int __DBIsExceptionMarked(unsigned char exception /* r3 */) {
    // Local variables
    unsigned long mask; // r31

    // References
    // -> struct DBInterface * __DBInterface;
}

// Range: 0x803A30E8 -> 0x803A3138
void DBPrintf() {}


