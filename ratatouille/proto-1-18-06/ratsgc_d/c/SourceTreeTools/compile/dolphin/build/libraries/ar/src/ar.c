/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\ar\src\ar.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80395408 -> 0x80395EBC
*/
const char * __ARVersion; // size: 0x4, address: 0x80D67FA8
static void (* __AR_Callback)(); // size: 0x4, address: 0x80D6BD20
static unsigned long __AR_Size; // size: 0x4, address: 0x80D6BD24
static unsigned long __AR_InternalSize; // size: 0x4, address: 0x80D6BD28
static unsigned long __AR_ExpansionSize; // size: 0x4, address: 0x80D6BD2C
static unsigned long __AR_StackPointer; // size: 0x4, address: 0x80D6BD30
static unsigned long __AR_FreeBlocks; // size: 0x4, address: 0x80D6BD34
static unsigned long * __AR_BlockLength; // size: 0x4, address: 0x80D6BD38
static int __AR_init_flag; // size: 0x4, address: 0x80D6BD3C
// Range: 0x80395408 -> 0x80395450
void (* ARRegisterDMACallback(void (* callback)() /* r1+0x8 */))() {
    // Local variables
    void (* old_callback)(); // r31
    int old; // r30

    // References
    // -> static void (* __AR_Callback)();
}

// Range: 0x80395450 -> 0x80395494
unsigned long ARGetDMAStatus() {
    // Local variables
    int old; // r31
    unsigned long val; // r30
}

// Range: 0x80395494 -> 0x80395604
void ARStartDMA(unsigned long type /* r1+0x8 */, unsigned long mainmem_addr /* r29 */, unsigned long aram_addr /* r27 */, unsigned long length /* r30 */) {
    // Local variables
    int old; // r28
}

// Range: 0x80395604 -> 0x8039560C
int ARCheckInit() {
    // References
    // -> static int __AR_init_flag;
}

// Range: 0x8039560C -> 0x80395718
unsigned long ARInit(unsigned long * stack_index_addr /* r1+0x8 */, unsigned long num_entries /* r1+0xC */) {
    // Local variables
    int old; // r30
    unsigned short refresh; // r31

    // References
    // -> static unsigned long __AR_StackPointer;
    // -> static int __AR_init_flag;
    // -> static unsigned long * __AR_BlockLength;
    // -> static unsigned long __AR_FreeBlocks;
    // -> static void (* __AR_Callback)();
    // -> const char * __ARVersion;
}

// Range: 0x80395718 -> 0x80395720
unsigned long ARGetBaseAddress() {}

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
// Range: 0x80395720 -> 0x8039579C
static void __ARHandler(struct OSContext * context /* r1+0xC */) {
    // Local variables
    struct OSContext exceptionContext; // r1+0x10
    unsigned short tmp; // r31

    // References
    // -> static void (* __AR_Callback)();
}

// Range: 0x8039579C -> 0x803957CC
void __ARClearInterrupt() {
    // Local variables
    unsigned short tmp; // r31
}

// Range: 0x803957CC -> 0x803957DC
unsigned short __ARGetInterruptStatus() {}

// Range: 0x803957DC -> 0x803957F0
static void __ARWaitForDMA() {}

// Range: 0x803957F0 -> 0x803958E4
static void __ARWriteDMA(unsigned long mmem_addr /* r29 */, unsigned long aram_addr /* r30 */, unsigned long length /* r31 */) {}

// Range: 0x803958E4 -> 0x803959D8
static void __ARReadDMA(unsigned long mmem_addr /* r29 */, unsigned long aram_addr /* r30 */, unsigned long length /* r31 */) {}

// Range: 0x803959D8 -> 0x80395EBC
static void __ARChecksize() {
    // Local variables
    unsigned char test_data_pad[63]; // r1+0x1C8
    unsigned char dummy_data_pad[63]; // r1+0x188
    unsigned char buffer_pad[63]; // r1+0x148
    unsigned char save_pad_1[63]; // r1+0x108
    unsigned char save_pad_2[63]; // r1+0xC8
    unsigned char save_pad_3[63]; // r1+0x88
    unsigned char save_pad_4[63]; // r1+0x48
    unsigned char save_pad_5[63]; // r1+0x8
    unsigned long * test_data; // r29
    unsigned long * dummy_data; // r26
    unsigned long * buffer; // r30
    unsigned long * save1; // r28
    unsigned long * save2; // r25
    unsigned long * save3; // r24
    unsigned long * save4; // r23
    unsigned long * save5; // r21
    unsigned short ARAM_mode; // r27
    unsigned long ARAM_size; // r31
    unsigned long i; // r22

    // References
    // -> static unsigned long __AR_Size;
    // -> static unsigned long __AR_ExpansionSize;
    // -> static unsigned long __AR_InternalSize;
}


