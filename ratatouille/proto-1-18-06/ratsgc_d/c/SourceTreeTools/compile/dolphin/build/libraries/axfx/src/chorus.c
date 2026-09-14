/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\axfx\src\chorus.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8039AB90 -> 0x8039ABE0
*/
// total size: 0x24
struct AXFX_CHORUS_SRCINFO {
    // Members
    long * dest; // offset 0x0, size 0x4
    long * smpBase; // offset 0x4, size 0x4
    long * old; // offset 0x8, size 0x4
    unsigned long posLo; // offset 0xC, size 0x4
    unsigned long posHi; // offset 0x10, size 0x4
    unsigned long pitchLo; // offset 0x14, size 0x4
    unsigned long pitchHi; // offset 0x18, size 0x4
    unsigned long trigger; // offset 0x1C, size 0x4
    unsigned long target; // offset 0x20, size 0x4
};
// total size: 0x90
struct AXFX_CHORUS_WORK {
    // Members
    long * lastLeft[3]; // offset 0x0, size 0xC
    long * lastRight[3]; // offset 0xC, size 0xC
    long * lastSur[3]; // offset 0x18, size 0xC
    unsigned char currentLast; // offset 0x24, size 0x1
    long oldLeft[4]; // offset 0x28, size 0x10
    long oldRight[4]; // offset 0x38, size 0x10
    long oldSur[4]; // offset 0x48, size 0x10
    unsigned long currentPosLo; // offset 0x58, size 0x4
    unsigned long currentPosHi; // offset 0x5C, size 0x4
    long pitchOffset; // offset 0x60, size 0x4
    unsigned long pitchOffsetPeriodCount; // offset 0x64, size 0x4
    unsigned long pitchOffsetPeriod; // offset 0x68, size 0x4
    struct AXFX_CHORUS_SRCINFO src; // offset 0x6C, size 0x24
};
// total size: 0x9C
struct AXFX_CHORUS {
    // Members
    struct AXFX_CHORUS_WORK work; // offset 0x0, size 0x90
    unsigned long baseDelay; // offset 0x90, size 0x4
    unsigned long variation; // offset 0x94, size 0x4
    unsigned long period; // offset 0x98, size 0x4
};
void (* __AXFXFree)(void *); // size: 0x4, address: 0x80D67FF4
// Range: 0x8039AB90 -> 0x8039ABE0
int AXFXChorusShutdown(struct AXFX_CHORUS * c /* r1+0x8 */) {
    // Local variables
    int old; // r31

    // References
    // -> void (* __AXFXFree)(void *);
}

// total size: 0xC
struct AXFX_BUFFERUPDATE {
    // Members
    long * left; // offset 0x0, size 0x4
    long * right; // offset 0x4, size 0x4
    long * surround; // offset 0x8, size 0x4
};

