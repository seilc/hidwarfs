/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\tool\quat\rtquat.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8046DBBC -> 0x8046E408
*/
static char __dbFunctionName[13]; // size: 0xD, address: 0x804EFA48
// Range: 0x8046DBBC -> 0x8046DC78
void RtQuatAssign(struct RtQuat * to /* r29 */, struct RtQuat * from /* r30 */) {
    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EFA55
// Range: 0x8046DC78 -> 0x8046DD44
void RtQuatNegate(struct RtQuat * result /* r30 */, struct RtQuat * q /* r31 */) {
    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804EFA62
// Range: 0x8046DD44 -> 0x8046DE24
void RtQuatScale(struct RtQuat * result /* r30 */, struct RtQuat * q /* r31 */, float scale /* f31 */) {
    // References
    // -> static char __dbFunctionName[12];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EFA6E
// Range: 0x8046DE24 -> 0x8046DFE8
void RtQuatMultiply(struct RtQuat * result /* r29 */, struct RtQuat * q1 /* r30 */, struct RtQuat * q2 /* r31 */) {
    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EFA7D
// Range: 0x8046DFE8 -> 0x8046E10C
void RtQuatReciprocal(struct RtQuat * result /* r30 */, struct RtQuat * q /* r31 */) {
    // Local variables
    float val; // f31

    // References
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EFA8E
// Range: 0x8046E10C -> 0x8046E408
void RtQuatUnitConvertToMatrix(const struct RtQuat * const qpQuat /* r30 */, struct RwMatrixTag * const mpMatrix /* r31 */) {
    // Local variables
    float x; // f31
    float y; // f30
    float z; // f29
    float w; // f28
    struct RwV3d square; // r1+0x2C
    struct RwV3d cross; // r1+0x20
    struct RwV3d wimag; // r1+0x14
    struct RwMatrixTolerance tolerance; // r1+0x8

    // References
    // -> static char __dbFunctionName[26];
}


