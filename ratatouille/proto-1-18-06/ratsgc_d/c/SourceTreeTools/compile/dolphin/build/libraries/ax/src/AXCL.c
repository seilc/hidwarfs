/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\ax\src\AXCL.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803971C8 -> 0x803976FC
*/
static unsigned short __AXCommandList[2][384]; // size: 0x600, address: 0x80D40D20
static unsigned long __AXCommandListPosition; // size: 0x4, address: 0x80D6BDA8
static unsigned short * __AXClWrite; // size: 0x4, address: 0x80D6BDAC
static unsigned long __AXCommandListCycles; // size: 0x4, address: 0x80D6BDB0
static unsigned long __AXCompressor; // size: 0x4, address: 0x80D6BDB4
// Range: 0x803971C8 -> 0x803971D0
unsigned long __AXGetCommandListCycles() {
    // References
    // -> static unsigned long __AXCommandListCycles;
}

// Range: 0x803971D0 -> 0x8039722C
unsigned long __AXGetCommandListAddress() {
    // Local variables
    unsigned long address; // r31

    // References
    // -> static unsigned long __AXCommandListPosition;
    // -> static unsigned short __AXCommandList[2][384];
    // -> static unsigned short * __AXClWrite;
}

// Range: 0x8039722C -> 0x80397244
void __AXWriteToCommandList(unsigned short data /* r3 */) {
    // References
    // -> static unsigned short * __AXClWrite;
}

unsigned long __AXClMode; // size: 0x4, address: 0x80D6BDB8
unsigned short __AXCompressorTable[3360]; // size: 0x1A40, address: 0x80536A40
// Range: 0x80397244 -> 0x8039761C
void __AXNextFrame(void * sbuffer /* r31 */, void * buffer /* r29 */) {
    // Local variables
    unsigned long data; // r1+0x10
    unsigned short * pCommandList; // r30

    // References
    // -> static unsigned long __AXCommandListCycles;
    // -> unsigned short __AXCompressorTable[3360];
    // -> static unsigned long __AXCompressor;
    // -> unsigned long __AXClMode;
    // -> static unsigned short * __AXClWrite;
}

// Range: 0x8039761C -> 0x803976B4
void __AXClInit() {
    // References
    // -> static unsigned long __AXCompressor;
    // -> static unsigned short __AXCommandList[2][384];
    // -> static unsigned short * __AXClWrite;
    // -> static unsigned long __AXCommandListPosition;
    // -> unsigned long __AXClMode;
}

// Range: 0x803976B4 -> 0x803976E0
void __AXClQuit() {}

// Range: 0x803976E0 -> 0x803976F4
void AXSetMode(unsigned long mode /* r3 */) {
    // References
    // -> unsigned long __AXClMode;
}

// Range: 0x803976F4 -> 0x803976FC
unsigned long AXGetMode() {
    // References
    // -> unsigned long __AXClMode;
}


