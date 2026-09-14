/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\pad\src\Padclamp.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803D80EC -> 0x803D8378
*/
// total size: 0xA
struct PADClampRegion {
    // Members
    unsigned char minTrigger; // offset 0x0, size 0x1
    unsigned char maxTrigger; // offset 0x1, size 0x1
    signed char minStick; // offset 0x2, size 0x1
    signed char maxStick; // offset 0x3, size 0x1
    signed char xyStick; // offset 0x4, size 0x1
    signed char minSubstick; // offset 0x5, size 0x1
    signed char maxSubstick; // offset 0x6, size 0x1
    signed char xySubstick; // offset 0x7, size 0x1
    signed char radStick; // offset 0x8, size 0x1
    signed char radSubstick; // offset 0x9, size 0x1
};
static struct PADClampRegion ClampRegion; // size: 0xA, address: 0x804E7770
// Range: 0x803D80EC -> 0x803D8294
static void ClampStick(signed char * px /* r3 */, signed char * py /* r4 */, signed char max /* r5 */, signed char xy /* r6 */, signed char min /* r7 */) {
    // Local variables
    int x; // r31
    int y; // r30
    int signX; // r28
    int signY; // r27
    int d; // r29
}

// Range: 0x803D8294 -> 0x803D82D4
static void ClampTrigger(unsigned char * trigger /* r3 */, unsigned char min /* r4 */, unsigned char max /* r5 */) {}

// total size: 0xC
struct PADStatus {
    // Members
    unsigned short button; // offset 0x0, size 0x2
    signed char stickX; // offset 0x2, size 0x1
    signed char stickY; // offset 0x3, size 0x1
    signed char substickX; // offset 0x4, size 0x1
    signed char substickY; // offset 0x5, size 0x1
    unsigned char triggerLeft; // offset 0x6, size 0x1
    unsigned char triggerRight; // offset 0x7, size 0x1
    unsigned char analogA; // offset 0x8, size 0x1
    unsigned char analogB; // offset 0x9, size 0x1
    signed char err; // offset 0xA, size 0x1
};
// Range: 0x803D82D4 -> 0x803D8378
void PADClamp(struct PADStatus * status /* r30 */) {
    // Local variables
    int i; // r29

    // References
    // -> static struct PADClampRegion ClampRegion;
}


