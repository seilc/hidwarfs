/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xParticleBatch.cpp
*/
static int lastRenderNum; // size: 0x4, address: 0x80758AC4
static class internal_system systems[256]; // size: 0x3400, address: 0x80758AC8
static class system_bucket buckets[1][256]; // size: 0x1000, address: 0x8075BEC8
static class block_info * head_free_block; // size: 0x4, address: 0x8075CEC8
static int free_block_count; // size: 0x4, address: 0x8075CECC
static unsigned char * block_buffer; // size: 0x4, address: 0x8075CED0
static class block_info block_info_buffer[32]; // size: 0x180, address: 0x8075CED8
static int systems_size; // size: 0x4, address: 0x8075D058
static int buckets_size[1]; // size: 0x4, address: 0x8075D05C
class Wii_GeometryStateOp geomStateOp; // size: 0x3C, address: 0x8075D060
// Range: 0x80054120 -> 0x80054250
static void @unnamed@WAD00_cpp@::merge_blocks(class internal_system * system /* r28 */) {
    // Local variables
    class block_info * first; // reg65535
    class block_info * second; // r5
    class block_info * s0; // r31
    class block_info * s1; // r30
    class block_info * * ps0; // r29
    class block_info * b; // r6
    class block_info * * pb; // r5

    // References
    // -> static int free_block_count;
    // -> static class block_info * head_free_block;
}
// Range: 0x80054250 -> 0x80054D68
static void @unnamed@WAD00_cpp@::pre_render_buckets(class system_bucket * first /* r1+0x20 */, class system_bucket * last /* r1+0x24 */, float dt /* f31 */) {
    // Local variables
    class Matrix43 * viewpMat[4]; // r1+0x60
    unsigned short viewpMask[4]; // r1+0x30
    int numViewp; // r20
    int parTotal; // r1+0xB8

    {
        // Range: 0x80054284 -> 0x800542C8
        // Local variables
        int i; // r16
    }
    {
        // Range: 0x800542D4 -> 0x80054D20
        // Local variables
        class system_bucket * bucket; // r0

        {
            // Range: 0x800542D4 -> 0x80054D20
            // Local variables
            class internal_system * system; // r19

            {
                // Range: 0x800542D4 -> 0x80054D14
                // Local variables
                int numPar; // r16
                class block_info * endBlock; // r17
                class block_info * block; // r4
                bool lost_any; // r18

                {
                    // Range: 0x800542D4 -> 0x80054C6C
                    // Local variables
                    int curViewp; // r15

                    {
                        // Range: 0x800542D4 -> 0x80054C6C
                        // Local variables
                        class ParticleSorter sorter; // r1+0x70
                        class ParticleGeometry geom; // r1+0x88

                        {
                            // Range: 0x800542E0 -> 0x800542E0
                            // Local variables
                            int newused; // r0
                        }
                    }
                }
            }
        }
    }

    // References
    // -> static int lastRenderNum;
    // -> static int free_block_count;
    // -> static class block_info * head_free_block;
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class Wii_GeometryStateOp geomStateOp;
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
}
// Range: 0x80055260 -> 0x8005544C
void xParticleBatchSceneEnter() {
    // References
    // -> static int systems_size;
    // -> static int buckets_size[1];
    // -> static unsigned char * block_buffer;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80055450 -> 0x80055454
void xParticleBatchSceneExit() {
}
// Range: 0x80055460 -> 0x800554EC
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
    // -> static class block_info block_info_buffer[32];
    // -> static class internal_system systems[256];
    // -> static int systems_size;
}
// Range: 0x800554F0 -> 0x80055518
void xParticleBatchPreRender() {
    // Local variables
    float dt; // f1

    // References
    // -> static class system_bucket buckets[1][256];
    // -> static int buckets_size[1];
    // -> class xGlobals * xglobals;
}
// signature: xParticleBatchAddSystem(const xParticleBatchSystem &)
// Range: 0x80055520 -> 0x80055764
int xParticleBatchAddSystem() {
    // Local variables
    int system_id; // r30
    class internal_system * isys; // r29

    // References
    // -> static class system_bucket buckets[1][256];
    // -> static int buckets_size[1];
    // -> static int systems_size;
    // -> static class internal_system systems[256];
}
// signature: xParticleBatchRequest(int, float, int)
// Range: 0x80055770 -> 0x800558B8
float xParticleBatchRequest() {
    // Local variables
    float throttledAmount; // f1
    class internal_system * s; // r3
    float newBlockUsage; // f5
    float free_percent; // f0

    {
        // Range: 0x800557AC -> 0x8005583C
        // Local variables
        float systemFreePercent; // f3
    }
    {
        // Range: 0x8005589C -> 0x800558B0
        // Local variables
        float newAmount; // f0
    }

    // References
    // -> static int free_block_count;
    // -> static class internal_system systems[256];
}
// signature: xParticleBatchEmit(int, int, unsigned char **)
// Range: 0x800558C0 -> 0x80055A00
int xParticleBatchEmit() {
    // Local variables
    class internal_system * isys; // r6
    int remain; // r7

    // References
    // -> static int free_block_count;
    // -> static class block_info * head_free_block;
    // -> static class internal_system systems[256];
}
