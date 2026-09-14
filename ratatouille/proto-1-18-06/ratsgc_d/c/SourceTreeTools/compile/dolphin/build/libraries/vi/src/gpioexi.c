/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\vi\src\gpioexi.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803CDB0C -> 0x803CDFCC
*/
static unsigned char shadowGPIOOE; // size: 0x1, address: 0x80D6C078
static unsigned char shadowGPIOData; // size: 0x1, address: 0x80D6C079
// Range: 0x803CDB0C -> 0x803CDBA4
void __VIInitI2C() {
    // Local variables
    long long time; // r30
}

// Range: 0x803CDBA4 -> 0x803CDBE0
static void initGpioExi() {
    // References
    // -> static unsigned char shadowGPIOOE;
    // -> static unsigned char shadowGPIOData;
}

// Range: 0x803CDBE0 -> 0x803CDC2C
void __VISetSCL(int value /* r1+0x8 */) {
    // References
    // -> static unsigned char shadowGPIOOE;
}

// Range: 0x803CDC2C -> 0x803CDC68
int __VIGetSCL() {
    // Local variables
    unsigned char value; // r1+0x8
}

// Range: 0x803CDC68 -> 0x803CDCB4
void __VISetSDA(int value /* r1+0x8 */) {
    // References
    // -> static unsigned char shadowGPIOOE;
}

// Range: 0x803CDCB4 -> 0x803CDCF0
int __VIGetSDA() {
    // Local variables
    unsigned char value; // r1+0x8
}

// Range: 0x803CDCF0 -> 0x803CDD54
static void setVideoReset(int value /* r1+0x8 */) {
    // References
    // -> static unsigned char shadowGPIOOE;
    // -> static unsigned char shadowGPIOData;
}

// Range: 0x803CDD54 -> 0x803CDDB8
static void setI2CEnable(int value /* r1+0x8 */) {
    // References
    // -> static unsigned char shadowGPIOOE;
    // -> static unsigned char shadowGPIOData;
}

// Range: 0x803CDDB8 -> 0x803CDDE8
static int gpioOutput(unsigned char value /* r1+0x8 */) {}

// Range: 0x803CDDE8 -> 0x803CDE18
static int gpioOE(unsigned char value /* r1+0x8 */) {}

// Range: 0x803CDE18 -> 0x803CDEF4
static int gpioOut(unsigned long addr /* r1+0x8 */, unsigned char value /* r1+0xC */) {
    // Local variables
    unsigned long cmd; // r1+0x10
}

// Range: 0x803CDEF4 -> 0x803CDFCC
static int gpioInput(unsigned char * p /* r1+0x8 */) {
    // Local variables
    unsigned long cmd; // r1+0xC
}


