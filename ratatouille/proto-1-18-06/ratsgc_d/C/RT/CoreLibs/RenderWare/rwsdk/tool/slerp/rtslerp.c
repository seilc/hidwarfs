/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\tool\slerp\rtslerp.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804711C8 -> 0x8047197C
*/
static char __dbFunctionName[22]; // size: 0x16, address: 0x804EFCD0
// total size: 0x28
struct RtQuatSlerpCache {
    // Members
    struct RtQuat raFrom; // offset 0x0, size 0x10
    struct RtQuat raTo; // offset 0x10, size 0x10
    float omega; // offset 0x20, size 0x4
    int nearlyZeroOm; // offset 0x24, size 0x4
};
// Range: 0x804711C8 -> 0x80471688
void RtQuatSetupSlerpCache(struct RtQuat * qpFrom /* r27 */, struct RtQuat * qpTo /* r30 */, struct RtQuatSlerpCache * sCache /* r31 */) {
    // Local variables
    float cosOm; // f30
    int obtuseOm; // r26
    float z; // f31
    float p; // f26
    float q; // f25
    float r; // f24
    float w; // f21
    float s; // f29
    float c; // f18
    float df; // f28
    int hx; // r29
    int ix; // r28
    union _rwIEEEFloatShapeType gf_u; // r1+0x18
    int idf; // r25
    union _rwIEEEFloatShapeType gf_u; // r1+0x14
    union _rwIEEEFloatShapeType sf_u; // r1+0x10
    float omega; // f23
    float cosecOm; // f22
    float z; // f27
    float v; // r1+0xC
    float r; // r1+0x8

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804EFCE6
// Range: 0x80471688 -> 0x8047197C
void RtQuatSlerp(struct RtQuat * qpResult /* r30 */, struct RtQuat * qpFrom /* r27 */, struct RtQuat * qpTo /* r28 */, float rT /* f27 */, struct RtQuatSlerpCache * sCache /* r31 */) {
    // Local variables
    float rSclFrom; // f31
    float rSclTo; // f30
    float z; // f29
    float v; // f26
    float r; // f25
    float z; // f28
    float v; // f24
    float r; // f23

    // References
    // -> static char __dbFunctionName[12];
}


