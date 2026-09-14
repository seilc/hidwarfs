/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\plcore\bacolor.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8042FC80 -> 0x80430374
*/
static char __dbFunctionName[13]; // size: 0xD, address: 0x804EC678
static struct RwModuleInfo colorModule; // size: 0x8, address: 0x80D6C300
// Range: 0x8042FC80 -> 0x8042FD00
void * _rwColorOpen(void * instance /* r31 */) {
    // References
    // -> static struct RwModuleInfo colorModule;
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EC685
// Range: 0x8042FD00 -> 0x8042FD80
void * _rwColorClose(void * instance /* r31 */) {
    // References
    // -> static struct RwModuleInfo colorModule;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EC693
// Range: 0x8042FD80 -> 0x8042FEBC
void RwRGBARealAdd(struct RwRGBAReal * result /* r29 */, const struct RwRGBAReal * source1 /* r30 */, const struct RwRGBAReal * source2 /* r31 */) {
    // References
    // -> static char __dbFunctionName[14];
    // -> static struct RwModuleInfo colorModule;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EC6A1
// Range: 0x8042FEBC -> 0x8042FFF8
void RwRGBARealSub(struct RwRGBAReal * result /* r29 */, const struct RwRGBAReal * source1 /* r30 */, const struct RwRGBAReal * source2 /* r31 */) {
    // References
    // -> static char __dbFunctionName[14];
    // -> static struct RwModuleInfo colorModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EC6AF
// Range: 0x8042FFF8 -> 0x8043010C
void RwRGBARealScale(struct RwRGBAReal * result /* r30 */, const struct RwRGBAReal * source /* r31 */, float scalar /* f31 */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo colorModule;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EC6BF
// Range: 0x8043010C -> 0x80430238
void RwRGBAFromRwRGBAReal(struct RwRGBA * result /* r30 */, const struct RwRGBAReal * source /* r31 */) {
    // Local variables
    int quantize; // r29

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EC6D4
// Range: 0x80430238 -> 0x80430374
void RwRGBARealFromRwRGBA(struct RwRGBAReal * result /* r30 */, struct RwRGBA * source /* r31 */) {
    // References
    // -> static char __dbFunctionName[21];
}


