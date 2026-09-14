/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\tool\intsec\rtintsec.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8046BA80 -> 0x8046DBBC
*/
static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EFA10
// Range: 0x8046BA80 -> 0x8046C2C0
int RtIntersectionSphereTriangle(const struct RwSphere * sphere /* r31 */, const struct RwV3d * v0 /* r29 */, const struct RwV3d * v1 /* r23 */, const struct RwV3d * v2 /* r24 */, struct RwV3d * normal /* r30 */, float * distance /* r25 */) {
    // Local variables
    struct RwV3d vc0; // r1+0x98
    struct RwV3d vc1; // r1+0x8C
    struct RwV3d vc2; // r1+0x80
    struct RwV3d vAtoB; // r1+0x74
    struct RwV3d vN; // r1+0x68
    float nDotN; // f31
    float distToPlane; // f28
    float sphereRadiusSquared; // f29
    struct RwV3d vTmp; // r1+0x5C
    struct RwV3d vTmp2; // r1+0x50
    float length2; // f27
    float factor; // f30
    int n; // r28
    float r1; // r1+0x4C
    float r2; // r1+0x48
    float r3; // r1+0x44
    float r1; // r1+0x40
    float r2; // r1+0x3C
    float r3; // r1+0x38
    int n; // r27
    float r1; // r1+0x34
    float r2; // r1+0x30
    float r3; // r1+0x2C
    float r1; // r1+0x28
    float r2; // r1+0x24
    float r3; // r1+0x20
    int n; // r26
    float r1; // r1+0x1C
    float r2; // r1+0x18
    float r3; // r1+0x14
    float r1; // r1+0x10
    float r2; // r1+0xC
    float r3; // r1+0x8

    // References
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EFA2D
// Range: 0x8046C2C0 -> 0x8046DBBC
int RtIntersectionBBoxTriangle(const struct RwBBox * bbox /* r31 */, const struct RwV3d * v0 /* r30 */, const struct RwV3d * v1 /* r29 */, const struct RwV3d * v2 /* r25 */) {
    // Local variables
    int v0Test; // r28
    int v1Test; // r27
    int v2Test; // r26
    struct RwV3d del; // r1+0x10C
    struct RwV3d hi; // r1+0x100
    struct RwV3d lo; // r1+0xF4
    float tmp; // f31
    float tmp; // f30
    float tmp; // f29
    float tmp; // f28
    float tmp; // f27
    float tmp; // f26
    struct RwV3d del; // r1+0xE8
    struct RwV3d hi; // r1+0xDC
    struct RwV3d lo; // r1+0xD0
    float tmp; // f25
    float tmp; // f24
    float tmp; // f23
    float tmp; // f22
    float tmp; // f21
    float tmp; // f20
    struct RwV3d del; // r1+0xC4
    struct RwV3d hi; // r1+0xB8
    struct RwV3d lo; // r1+0xAC
    float tmp; // f19
    float tmp; // f18
    float tmp; // r1+0x54
    float tmp; // r1+0x50
    float tmp; // r1+0x4C
    float tmp; // r1+0x48
    struct RwV3d v01; // r1+0xA0
    struct RwV3d v02; // r1+0x94
    struct RwV3d norm; // r1+0x88
    struct RwV3d diag; // r1+0x7C
    struct RwV3d tVec; // r1+0x70
    float det; // r1+0x44
    float dist; // r1+0x40
    float u; // r1+0x3C
    float v; // r1+0x38
    struct RwV3d wVec; // r1+0x64
    float u; // r1+0x34
    float v; // r1+0x30
    struct RwV3d wVec; // r1+0x58

    // References
    // -> static char __dbFunctionName[27];
}


