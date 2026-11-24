/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xParticleBatch.cpp
*/
int parThroughputCur; // size: 0x4, address: 0x8080AA94
float parThroughputAvg[256]; // size: 0x400, address: 0x8080AA98
float parThroughput; // size: 0x4, address: 0x8080AE98
static int lastRenderNum; // size: 0x4, address: 0x8080AE9C
static int lastUpdateNum; // size: 0x4, address: 0x8080AEA0
static class internal_system systems[256]; // size: 0x4000, address: 0x8080AEA8
static class system_bucket buckets[1][256]; // size: 0x1000, address: 0x8080EEA8
static class block_info * head_free_block; // size: 0x4, address: 0x8080FEA8
static int free_block_count; // size: 0x4, address: 0x8080FEAC
static unsigned char * block_buffer; // size: 0x4, address: 0x8080FEB0
static class block_info block_info_buffer[64]; // size: 0x300, address: 0x8080FEB8
static int systems_size; // size: 0x4, address: 0x808101B8
static int buckets_size[1]; // size: 0x4, address: 0x808101BC
class Wii_GeometryStateOp geomStateOp; // size: 0x48, address: 0x808101C0
// signature: @unnamed@WAD00_cpp@::remove_from_bucket(@unnamed@WAD00_cpp@::internal_system &)
// Range: 0x80072500 -> 0x800725C4
static void @unnamed@WAD00_cpp@::remove_from_bucket() {
    // Local variables
    int & bsize; // r0
    class system_bucket * begin_bucket; // reg65535
    class system_bucket * end_bucket; // r4
    class internal_system * it; // r8
    class internal_system * * itp; // r5
    class system_bucket * bucket; // r9

    // References
    // -> static class system_bucket buckets[1][256];
    // -> static int buckets_size[1];
}
// Range: 0x800725D0 -> 0x80072700
static void @unnamed@WAD00_cpp@::merge_blocks(class internal_system & system /* r28 */) {
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
// signature: @unnamed@WAD00_cpp@::refresh_blocks(@unnamed@WAD00_cpp@::internal_system &)
// Range: 0x80072700 -> 0x80072780
static void @unnamed@WAD00_cpp@::refresh_blocks() {
    // Local variables
    class block_info * b; // r7
    class block_info * * pb; // r8

    // References
    // -> static int free_block_count;
    // -> static class block_info * head_free_block;
}
// Range: 0x80072780 -> 0x80072C64
static void @unnamed@WAD00_cpp@::pre_render_buckets(class system_bucket * first /* r1+0x10 */, class system_bucket * last /* r1+0x14 */, float dt /* f31 */) {
    // Local variables
    class Time tstart; // r1+0x40
    class Matrix43 * viewpMat[4]; // r1+0x70
    unsigned short viewpMask[4]; // r1+0x38
    int numViewp; // r22
    int parUpdated; // r21
    int parTotal; // r20

    {
        // Range: 0x800727E4 -> 0x80072828
        // Local variables
        int i; // r16
    }
    {
        // Range: 0x80072834 -> 0x80072AFC
        // Local variables
        class system_bucket * bucket; // r0

        {
            // Range: 0x80072834 -> 0x80072AFC
            // Local variables
            class internal_system * system; // r19

            {
                // Range: 0x80072834 -> 0x80072AF0
                // Local variables
                float boundUpper[3]; // r1+0x58
                float boundLower[3]; // r1+0x64
                int numUsedPar; // r16
                unsigned char * tempMem; // r17
                class block_info * block; // r3
                bool lost_any; // r18

                {
                    // Range: 0x80072834 -> 0x80072834
                    // Local variables
                    int newused; // r0
                    int numVisible; // r1+0x18
                }
                {
                    // Range: 0x80072834 -> 0x80072AC8
                    // Local variables
                    class ParticleSorter sorter; // r1+0x80
                    class Vector4 boundSphere; // r1+0x48
                    class BroadBound bounds; // r1+0x98

                    {
                        // Range: 0x80072834 -> 0x80072ABC
                        // Local variables
                        int curViewp; // r15

                        {
                            // Range: 0x80072834 -> 0x80072ABC
                            // Local variables
                            class Scene * scene; // r0
                            class ParticleGeometry geom; // r1+0xB8
                        }
                    }
                }
            }
        }
    }
    {
        // Range: 0x80072B94 -> 0x80072C30
        // Local variables
        int i; // r0
    }

    // References
    // -> float parThroughput;
    // -> float parThroughputAvg[256];
    // -> int parThroughputCur;
    // -> static int lastUpdateNum;
    // -> static int lastRenderNum;
}
// Range: 0x80073DB0 -> 0x80073FA8
void xParticleBatchSceneEnter() {
    // References
    // -> static int buckets_size[1];
    // -> static int systems_size;
    // -> static unsigned char * block_buffer;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80073FB0 -> 0x80074044
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
    // -> static class internal_system systems[256];
    // -> static int systems_size;
}
// Range: 0x80074050 -> 0x80074078
void xParticleBatchPreRender() {
    // Local variables
    float dt; // f1

    // References
    // -> static class system_bucket buckets[1][256];
    // -> static int buckets_size[1];
    // -> class xGlobals * xglobals;
}
// signature: xParticleBatchAddSystem(const xParticleBatchSystem &)
// Range: 0x80074080 -> 0x800742E0
int xParticleBatchAddSystem() {
    // Local variables
    int system_id; // r31
    class internal_system & isys; // r30

    // References
    // -> static class system_bucket buckets[1][256];
    // -> static int buckets_size[1];
    // -> static int systems_size;
    // -> static class internal_system systems[256];
}
// signature: xParticleBatchReplaceSystem(int, const xParticleBatchSystem &)
// Range: 0x800742E0 -> 0x800744C8
void xParticleBatchReplaceSystem(class xParticleBatchSystem & system /* r30 */) {
    // Local variables
    class internal_system & isys; // r31

    // References
    // -> static int buckets_size[1];
    // -> static class system_bucket buckets[1][256];
    // -> static int free_block_count;
    // -> static class block_info * head_free_block;
    // -> static class internal_system systems[256];
}
// signature: xParticleBatchSetTexture(int, Graphics::Texture *)
// Range: 0x800744D0 -> 0x800744E8
void xParticleBatchSetTexture() {
    // References
    // -> static class internal_system systems[256];
}
// signature: xParticleBatchRequest(int, float, int)
// Range: 0x800744F0 -> 0x80074638
float xParticleBatchRequest() {
    // Local variables
    float throttledAmount; // f1
    class internal_system & s; // r5
    float newBlockUsage; // f5
    float free_percent; // f0

    {
        // Range: 0x80074514 -> 0x800745BC
        // Local variables
        float systemFreePercent; // f3
    }
    {
        // Range: 0x8007461C -> 0x80074630
        // Local variables
        float newAmount; // f0
    }

    // References
    // -> static int free_block_count;
    // -> static class internal_system systems[256];
}
// signature: xParticleBatchEmit(int, int, unsigned char **)
// Range: 0x80074640 -> 0x80074780
int xParticleBatchEmit() {
    // Local variables
    class internal_system & isys; // r6
    int remain; // r7

    // References
    // -> static int free_block_count;
    // -> static class block_info * head_free_block;
    // -> static class internal_system systems[256];
}
