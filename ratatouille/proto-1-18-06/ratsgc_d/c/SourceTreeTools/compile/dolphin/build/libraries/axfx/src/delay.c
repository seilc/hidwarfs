/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\axfx\src\delay.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8039ABE0 -> 0x8039AC88
*/
// total size: 0xC
struct AXFX_BUFFERUPDATE {
    // Members
    long * left; // offset 0x0, size 0x4
    long * right; // offset 0x4, size 0x4
    long * surround; // offset 0x8, size 0x4
};
// total size: 0x60
struct AXFX_DELAY {
    // Members
    unsigned long currentSize[3]; // offset 0x0, size 0xC
    unsigned long currentPos[3]; // offset 0xC, size 0xC
    unsigned long currentFeedback[3]; // offset 0x18, size 0xC
    unsigned long currentOutput[3]; // offset 0x24, size 0xC
    long * left; // offset 0x30, size 0x4
    long * right; // offset 0x34, size 0x4
    long * sur; // offset 0x38, size 0x4
    unsigned long delay[3]; // offset 0x3C, size 0xC
    unsigned long feedback[3]; // offset 0x48, size 0xC
    unsigned long output[3]; // offset 0x54, size 0xC
};
void (* __AXFXFree)(void *); // size: 0x4, address: 0x80D67FF4
// Range: 0x8039ABE0 -> 0x8039AC88
int AXFXDelayShutdown(struct AXFX_DELAY * delay /* r31 */) {
    // Local variables
    int old; // r30

    // References
    // -> void (* __AXFXFree)(void *);
}


