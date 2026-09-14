/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\pipe\p2\p2altmdl.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80462EA0 -> 0x80463018
*/
struct RxHeap * _rxHeapGlobal; // size: 0x4, address: 0x80D6C464
static char __dbFunctionName[17]; // size: 0x11, address: 0x804EF288
// Range: 0x80462EA0 -> 0x80463018
void _rxPacketDestroy(struct RxPacket * packet /* r30 */) {
    // Local variables
    struct RxPipeline * pipeline; // r29
    unsigned int n; // r27
    struct RxCluster * cl; // r31

    // References
    // -> struct RxHeap * _rxHeapGlobal;
    // -> static char __dbFunctionName[17];
}

// total size: 0x18
struct RxExecutionContext {
    // Members
    struct RxPipeline * pipeline; // offset 0x0, size 0x4
    struct RxPipelineNode * currentNode; // offset 0x4, size 0x4
    int exitCode; // offset 0x8, size 0x4
    unsigned int pad; // offset 0xC, size 0x4
    struct RxPipelineNodeParam params; // offset 0x10, size 0x8
};
struct RxExecutionContext _rxExecCtxGlobal; // size: 0x18, address: 0x80D5DE38

