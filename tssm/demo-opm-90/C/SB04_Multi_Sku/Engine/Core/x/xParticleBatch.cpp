/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9940 -> 0x003A9A9C
*/
// Range: 0x3A9940 -> 0x3A9A9C
// this: r18
signed int xParticleBatchGroup::create_system(class xParticleBatchSystem & system /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3A9940 -> 0x3A9A9C
        unsigned char * end_elements; // r2
        unsigned char * found; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9AA0 -> 0x003A9C50
*/
// Range: 0x3A9AA0 -> 0x3A9C50
static signed int compare_group_systems_function(void * e1 /* r2 */, void * e2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A9AA0 -> 0x3A9C50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9C50 -> 0x003A9C88
*/
// Range: 0x3A9C50 -> 0x3A9C88
// this: r16
void xParticleBatchGroup::create() {
    /* anonymous block */ {
        // Range: 0x3A9C50 -> 0x3A9C88
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9C90 -> 0x003A9DC0
*/
// Range: 0x3A9C90 -> 0x3A9DC0
signed int xParticleBatchEmit(signed int system_id /* r2 */, signed int amount /* r2 */, unsigned char * * mem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A9C90 -> 0x3A9DC0
        class internal_system & isys; // r3
        signed int remain; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9DC0 -> 0x003A9E98
*/
// Range: 0x3A9DC0 -> 0x3A9E98
signed int xParticleBatchAddSystem(class xParticleBatchSystem & system /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A9DC0 -> 0x3A9E98
        signed int system_id; // r16
        class internal_system & isys; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9EA0 -> 0x003A9FF0
*/
// Range: 0x3A9EA0 -> 0x3A9FF0
void xParticleBatchPreRender() {
    /* anonymous block */ {
        // Range: 0x3A9EA0 -> 0x3A9FF0
        float dt; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9FF0 -> 0x003AA06C
*/
// Range: 0x3A9FF0 -> 0x3AA06C
void xParticleBatchReset() {
    /* anonymous block */ {
        // Range: 0x3A9FF0 -> 0x3AA06C
        class internal_system * sys; // r4
        class internal_system * end_sys; // r2
        class block_info * b; // r6
        class block_info * endb; // r2
        unsigned char * mem; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AA070 -> 0x003AA078
*/
// Range: 0x3AA070 -> 0x3AA078
void xParticleBatchSceneExit() {
    /* anonymous block */ {
        // Range: 0x3AA070 -> 0x3AA078
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AA080 -> 0x003AA0CC
*/
// Range: 0x3AA080 -> 0x3AA0CC
void xParticleBatchSceneEnter() {
    /* anonymous block */ {
        // Range: 0x3AA080 -> 0x3AA0CC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AA0D0 -> 0x003AA204
*/
// Range: 0x3AA0D0 -> 0x3AA204
static void merge_blocks(class internal_system & system /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3AA0D0 -> 0x3AA204
        class block_info * first; // r2
        class block_info * second; // r2
        class block_info * s0; // r18
        class block_info * s1; // r17
        class block_info * * ps0; // r16
        class block_info * b; // r6
        class block_info * * pb; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AA210 -> 0x003AA344
*/
// Range: 0x3AA210 -> 0x3AA344
static void add_to_bucket(class internal_system & isys /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3AA210 -> 0x3AA344
        signed int & bsize; // r2
        class system_bucket * begin_bucket; // r18
        class system_bucket * end_bucket; // r2
        class system_bucket key; // r29+0x50
        class system_bucket * bucket; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C6890 -> 0x003C6B0C
*/
// Range: 0x3C6890 -> 0x3C6B0C
static void pre_render_buckets(class system_bucket * first /* r2 */, class system_bucket * last /* r29+0xCC */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3C6890 -> 0x3C6B0C
        class ptank_pool__color_mat pool; // r29+0xD0
        class system_bucket * bucket; // r29+0xB0
        class internal_system * system; // r20
        unsigned char started; // r19
        unsigned char lost_any; // r18
        class block_info * block; // r17
        signed int newused; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C6B10 -> 0x003C6D8C
*/
// Range: 0x3C6B10 -> 0x3C6D8C
static void pre_render_buckets(class system_bucket * first /* r2 */, class system_bucket * last /* r29+0xCC */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3C6B10 -> 0x3C6D8C
        class ptank_pool__color_mat_uv2 pool; // r29+0xD0
        class system_bucket * bucket; // r29+0xB0
        class internal_system * system; // r20
        unsigned char started; // r19
        unsigned char lost_any; // r18
        class block_info * block; // r17
        signed int newused; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C6D90 -> 0x003C700C
*/
// Range: 0x3C6D90 -> 0x3C700C
static void pre_render_buckets(class system_bucket * first /* r2 */, class system_bucket * last /* r29+0xCC */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3C6D90 -> 0x3C700C
        class ptank_pool__pos_color_size pool; // r29+0xD0
        class system_bucket * bucket; // r29+0xB0
        class internal_system * system; // r20
        unsigned char started; // r19
        unsigned char lost_any; // r18
        class block_info * block; // r17
        signed int newused; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C7010 -> 0x003C728C
*/
// Range: 0x3C7010 -> 0x3C728C
static void pre_render_buckets(class system_bucket * first /* r2 */, class system_bucket * last /* r29+0xCC */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3C7010 -> 0x3C728C
        class ptank_pool__pos_color_size_uv2 pool; // r29+0xD0
        class system_bucket * bucket; // r29+0xB0
        class internal_system * system; // r20
        unsigned char started; // r19
        unsigned char lost_any; // r18
        class block_info * block; // r17
        signed int newused; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C7290 -> 0x003C750C
*/
// Range: 0x3C7290 -> 0x3C750C
static void pre_render_buckets(class system_bucket * first /* r2 */, class system_bucket * last /* r29+0xCC */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3C7290 -> 0x3C750C
        class ptank_pool__pos_color_size_rot pool; // r29+0xD0
        class system_bucket * bucket; // r29+0xB0
        class internal_system * system; // r20
        unsigned char started; // r19
        unsigned char lost_any; // r18
        class block_info * block; // r17
        signed int newused; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParticleBatch.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C7510 -> 0x003C778C
*/
// Range: 0x3C7510 -> 0x3C778C
static void pre_render_buckets(class system_bucket * first /* r2 */, class system_bucket * last /* r29+0xCC */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3C7510 -> 0x3C778C
        class ptank_pool__pos_color_size_rot_uv2 pool; // r29+0xD0
        class system_bucket * bucket; // r29+0xB0
        class internal_system * system; // r20
        unsigned char started; // r19
        unsigned char lost_any; // r18
        class block_info * block; // r17
        signed int newused; // r2
    }
}


