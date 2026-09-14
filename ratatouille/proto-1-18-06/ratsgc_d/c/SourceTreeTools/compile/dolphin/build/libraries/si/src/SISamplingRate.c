/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\si\src\SISamplingRate.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803DB480 -> 0x803DB59C
*/
static unsigned long SamplingRate; // size: 0x4, address: 0x80D6C1A0
// total size: 0x4
struct XY {
    // Members
    unsigned short line; // offset 0x0, size 0x2
    unsigned char count; // offset 0x2, size 0x1
};
static struct XY XYNTSC[12]; // size: 0x30, address: 0x8054D240
static struct XY XYPAL[12]; // size: 0x30, address: 0x8054D270
// Range: 0x803DB480 -> 0x803DB578
void SISetSamplingRate(unsigned long msec /* r30 */) {
    // Local variables
    struct XY * xy; // r29
    int progressive; // r28
    int enabled; // r27

    // References
    // -> static struct XY XYNTSC[12];
    // -> static struct XY XYPAL[12];
    // -> static unsigned long SamplingRate;
}

// Range: 0x803DB578 -> 0x803DB59C
void SIRefreshSamplingRate() {
    // References
    // -> static unsigned long SamplingRate;
}


