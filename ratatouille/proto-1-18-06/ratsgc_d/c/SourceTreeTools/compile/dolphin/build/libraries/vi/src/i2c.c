/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\vi\src\i2c.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803CD72C -> 0x803CD9A8
*/
static int lastError; // size: 0x4, address: 0x80D6C070
// Range: 0x803CD72C -> 0x803CD784
static int wait4ClkHigh() {
    // Local variables
    int n; // r31

    // References
    // -> static int lastError;
}

// Range: 0x803CD784 -> 0x803CD870
static int sendSlaveAddr(unsigned char slaveAddr /* r30 */) {
    // Local variables
    int i; // r31

    // References
    // -> static int lastError;
}

// Range: 0x803CD870 -> 0x803CD9A8
int __VISendI2CData(unsigned char slaveAddr /* r1+0x8 */, unsigned char * pData /* r1+0xC */, int nBytes /* r29 */) {
    // Local variables
    int i; // r31
    unsigned char data; // r30

    // References
    // -> static int lastError;
}


