/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xParticleBatch.cpp
*/
int parThroughputCur; // size: 0x4, address: 0x80722900
float parThroughputAvg[256]; // size: 0x400, address: 0x80722908
float parThroughput; // size: 0x4, address: 0x80722D08
static int lastRenderNum; // size: 0x4, address: 0x80722D0C
static int lastUpdateNum; // size: 0x4, address: 0x80722D10
static class internal_system systems[320]; // size: 0x4600, address: 0x80722D18
static class system_bucket buckets[320]; // size: 0x1400, address: 0x80727318
static class block_info * head_free_block; // size: 0x4, address: 0x80728718
static int free_block_count; // size: 0x4, address: 0x8072871C
static unsigned char * block_buffer; // size: 0x4, address: 0x80728720
static class block_info block_info_buffer[64]; // size: 0x300, address: 0x80728728
static int systems_size; // size: 0x4, address: 0x80728A28
static int buckets_size; // size: 0x4, address: 0x80728A2C
class Wii_GeometryStateOp geomStateOp; // size: 0x48, address: 0x80728A30
// signature: @unnamed@WAD00_cpp@::free_block(@unnamed@WAD00_cpp@::block_info *)
// Range: 0x8003D3A0 -> 0x8003D3C4
static void @unnamed@WAD00_cpp@::free_block() {
    // References
    // -> static int free_block_count;
    // -> static class block_info * head_free_block;
}
// signature: @unnamed@WAD00_cpp@::add_to_bucket(@unnamed@WAD00_cpp@::internal_system &)
// Range: 0x8003D410 -> 0x8003D764
static void @unnamed@WAD00_cpp@::add_to_bucket() {
    // Local variables
    class system_bucket * begin_bucket; // r7
    class system_bucket * end_bucket; // r8
    class system_bucket key; // r1+0x8

    // References
    // -> static class system_bucket buckets[320];
    // -> static int buckets_size;
}
// Range: 0x8003D770 -> 0x8003D8D0
static void @unnamed@WAD00_cpp@::refresh_blocks(class internal_system & system /* r30 */) {
    // Local variables
    class block_info * b; // r4
    class block_info * * pb; // r28
}
// signature: xParticleBatchPreload(int, float)
// Range: 0x8003DCB0 -> 0x8003DE60
void xParticleBatchPreload(float dt /* f31 */) {
    // Local variables
    class internal_system * system; // r29
    int numPar; // r28
    bool lost_any; // r27
    class block_info * block; // r3
    int numUsedPar; // r26
    float boundLower[3]; // r1+0x20
    float boundUpper[3]; // r1+0x14

    {
        // Range: 0x8003DD6C -> 0x8003DE20
        // Local variables
        int newused; // r0
        int numVisible; // r1+0x10
    }

    // References
    // -> static class internal_system systems[320];
}
// Range: 0x8003DE60 -> 0x8003DECC
void xParticleBatchSceneEnter() {
    // References
    // -> static int buckets_size;
    // -> static int systems_size;
    // -> static unsigned char * block_buffer;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8003DED0 -> 0x8003DF58
void xParticleBatchReset() {
    // Local variables
    class internal_system * sys; // r5
    class internal_system * end_sys; // r3
    class block_info * b; // r3
    class block_info * endb; // r5
    unsigned char * mem; // r6

    // References
    // -> static int free_block_count;
    // -> static unsigned char * block_buffer;
    // -> static class block_info * head_free_block;
    // -> static class block_info block_info_buffer[64];
    // -> static class internal_system systems[320];
    // -> static int systems_size;
}
// Range: 0x8003DF60 -> 0x8003E898
void xParticleBatchPreRender() {
    // Local variables
    float dt; // f30

    // References
    // -> float parThroughput;
    // -> float parThroughputAvg[256];
    // -> int parThroughputCur;
    // -> double secondsPerTick;
    // -> static int lastUpdateNum;
    // -> static int lastRenderNum;
    // -> class Scene * primaryScene;
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> class Wii_GeometryStateOp geomStateOp;
    // -> static class system_bucket buckets[320];
    // -> static int buckets_size;
    // -> class xGlobals * xglobals;
}
// signature: xParticleBatchAddSystem(const xParticleBatchSystem &)
// Range: 0x8003E8A0 -> 0x8003E968
int xParticleBatchAddSystem() {
    // Local variables
    class internal_system & isys; // r30

    // References
    // -> static class internal_system systems[320];
    // -> static int systems_size;
}
// signature: xParticleBatchReplaceSystem(int, const xParticleBatchSystem &)
// Range: 0x8003E970 -> 0x8003EAA0
void xParticleBatchReplaceSystem(class xParticleBatchSystem & system /* r30 */) {
    // Local variables
    class internal_system & isys; // r31

    // References
    // -> static class system_bucket buckets[320];
    // -> static int buckets_size;
    // -> static class internal_system systems[320];
}
// signature: xParticleBatchSetTexture(int, Graphics::Texture *)
// Range: 0x8003EAA0 -> 0x8003EAC0
void xParticleBatchSetTexture() {
    // References
    // -> static class internal_system systems[320];
}
// signature: xParticleBatchRequest(int, float, int)
// Range: 0x8003EAC0 -> 0x8003EC38
float xParticleBatchRequest() {
    // Local variables
    float throttledAmount; // f1
    class internal_system & s; // r3
    float newBlockUsage; // f5
    float free_percent; // f0

    {
        // Range: 0x8003EB00 -> 0x8003EBA8
        // Local variables
        float systemFreePercent; // f3
    }
    {
        // Range: 0x8003EC1C -> 0x8003EC30
        // Local variables
        float newAmount; // f0
    }

    // References
    // -> static int free_block_count;
    // -> static class internal_system systems[320];
}
// signature: xParticleBatchEmit(int, int, unsigned char **)
// Range: 0x8003EC40 -> 0x8003ED7C
int xParticleBatchEmit() {
    // Local variables
    class internal_system & isys; // r6
    int remain; // r7

    // References
    // -> static int free_block_count;
    // -> static class block_info * head_free_block;
    // -> static class internal_system systems[320];
}
