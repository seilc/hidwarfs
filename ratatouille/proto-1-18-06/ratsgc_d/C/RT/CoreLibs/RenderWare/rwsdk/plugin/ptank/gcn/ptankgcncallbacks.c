/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\ptank\gcn\ptankgcncallbacks.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803F28C0 -> 0x803F33C0
*/
static char __dbFunctionName[33]; // size: 0x21, address: 0x804E8D48
// Range: 0x803F28C0 -> 0x803F2C1C
static void PTankGameCubeSetupRenderCallback(struct RpAtomic * atomic /* r28 */) {
    // Local variables
    struct RpPTankAtomicExtPrv * pTankPrvData; // r31
    int renderFlags; // r30

    // References
    // -> static char __dbFunctionName[33];
    // -> int _rpPTankAtomicDataOffset;
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804E8D69
// Range: 0x803F2C1C -> 0x803F2FD8
int _rpPTankGameCubeCreateCallBack(struct RpAtomic * atomic /* r28 */, struct RpPTankData * pTankData /* r1+0x8 */, unsigned int dataFlags /* r22 */) {
    // Local variables
    struct RpGeometry * geometry; // r29
    unsigned int geometryFlag; // r27
    struct RpMaterial * material; // r25
    struct RwSurfaceProperties surfProp; // r1+0x14
    struct RpTriangle triangle; // r1+0xC
    struct RpMeshHeader * meshHeader; // r30
    struct RpMesh * mesh; // r24
    unsigned int size; // r23
    struct RpGameCubeVtxFmt * fmt; // r26

    // References
    // -> static char __dbFunctionName[31];
    // -> struct RxPipeline * _rxPTankGameCubeRenderPipeline;
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804E8D88
// Range: 0x803F2FD8 -> 0x803F30A8
int _rpPTankGameCubeInstanceCallBack(struct RpAtomic * atomic /* r30 */, struct RpPTankData * pTankData /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804E8DA9
// total size: 0x18
struct PTankRenderData {
    // Members
    struct RwV3d invRight; // offset 0x0, size 0xC
    struct RwV3d invUp; // offset 0xC, size 0xC
};
// Range: 0x803F30A8 -> 0x803F33C0
int _rpPTankGameCubeRenderCallBack(struct RpAtomic * atomic /* r25 */, struct RpPTankData * pTankData /* r30 */) {
    // Local variables
    struct RpPTankAtomicExtPrv * pTankPrvData; // r26
    struct PTankRenderData renderData; // r1+0x10
    enum RwBlendFunction srcBlend; // r1+0xC
    enum RwBlendFunction dstBlend; // r1+0x8
    struct RwV3d * right; // r28
    struct RwV3d * up; // r27
    int format; // r24
    struct RwMatrixTag * camLTM; // r31
    float sinA; // f31
    float cosA; // f30

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[31];
    // -> int _rpPTankAtomicDataOffset;
}


