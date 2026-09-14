/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\pipe\p2\gcn\nodeDolphinSubmitNoLight.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8046A378 -> 0x8046AFD0
*/
static enum _GXPrimitive _rwDlPrimConvTbl[7]; // size: 0x1C, address: 0x8055AFE0
static char __dbFunctionName[21]; // size: 0x15, address: 0x804EF8C8
static struct rwIm3DPool * _rwDlImmPool; // size: 0x4, address: 0x80D6C468
// Range: 0x8046A378 -> 0x8046A3A0
static int _rwDlImmInstanceNode(const struct RxPipelineNodeParam * params /* r4 */) {
    // References
    // -> static struct rwIm3DPool * _rwDlImmPool;
    // -> static char __dbFunctionName[21];
}

static struct RxNodeDefinition nodeImmInstanceCSL; // size: 0x40, address: 0x8055B00C
static char __dbFunctionName[39]; // size: 0x27, address: 0x804EF8DD
// Range: 0x8046A3A0 -> 0x8046A3C4
struct RxNodeDefinition * RxNodeDefinitionGetGameCubeImmInstance() {
    // References
    // -> static struct RxNodeDefinition nodeImmInstanceCSL;
    // -> static char __dbFunctionName[39];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EF904
// Range: 0x8046A3C4 -> 0x8046A54C
static void _rw3DRenderPrimitiveInit(struct _rwIm3DPoolStash * stash /* r31 */) {
    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EF91D
// Range: 0x8046A54C -> 0x8046AFAC
static int DlSubmitNode() {
    // Local variables
    struct RxObjSpace3DVertex * verts; // r31
    struct _rwIm3DPoolStash * stash; // r26
    unsigned short * indices; // r29
    unsigned short numVertices; // r22
    struct RxObjSpace3DVertex * vert; // r24
    struct RxObjSpace3DVertex * vert; // r23
    unsigned short numTriangles; // r21
    struct RxObjSpace3DVertex * vert; // r30
    struct RxObjSpace3DVertex * vert; // r28
    unsigned short numLines; // r20
    struct RxObjSpace3DVertex * vert; // r27
    struct RxObjSpace3DVertex * vert; // r25
    struct RwError _rwErrorCode; // r1+0x10
    unsigned short numVertices; // r19
    unsigned short numTriangles; // r18
    unsigned short numLines; // r17
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[13];
    // -> static struct rwIm3DPool * _rwDlImmPool;
    // -> static enum _GXPrimitive _rwDlPrimConvTbl[7];
}

static struct RxNodeDefinition nodeDlSubmitNoLightCSL; // size: 0x40, address: 0x8055B0A8
static char __dbFunctionName[41]; // size: 0x29, address: 0x804EF92A
// Range: 0x8046AFAC -> 0x8046AFD0
struct RxNodeDefinition * RxNodeDefinitionGetGameCubeSubmitNoLight() {
    // References
    // -> static struct RxNodeDefinition nodeDlSubmitNoLightCSL;
    // -> static char __dbFunctionName[41];
}


