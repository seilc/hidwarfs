/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeSparky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270B90 -> 0x00271B74
*/
// Range: 0x270B90 -> 0x271B74
signed int SparkySysUpdate(unsigned char * mem /* r22 */, signed int count /* r2 */, class ptank_pool & apool /* r2 */, float dt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x270B90 -> 0x271B74
        class ptank_pool__color_mat_uv2 * pool; // r20
        class SparkyParticle * par; // r19
        class SparkyParticle * end; // r18
        class xVec3 pos_plyr; // r29+0x100
        class SparkyEmitter * emitter; // r17
        float tym_life; // r29+0x110
        float rat_rev; // r29+0x110
        float rat; // r1
        class SparkyCurve node_eval; // r29+0xF0
        signed int idx; // r4
        signed int linearize; // r2
        float factor; // r29+0x110
        class xVec3 dir_trav; // r29+0xE0
        float spd; // r29+0x110
        float recip; // r29+0x110
        signed int systemUsesHDR; // r2
        class xColor_tag par_color; // r29+0x10C
        float adjAlpha; // r3
        unsigned char alftest; // r3
        float sum; // r3
        class Damage * dmg; // r2
        float ds2_plyr; // r29+0x110
        float fac_scale; // r29+0x110
        float w; // r29+0x110
        float h; // r29+0x110
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeSparky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00271B80 -> 0x00271BC8
*/
// Range: 0x271B80 -> 0x271BC8
void SparkySysInit_Glow(class NPARMgmt * mgmt /* r2 */, class xParticleBatchSystem * pbs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x271B80 -> 0x271BC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeSparky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00271BD0 -> 0x00271C18
*/
// Range: 0x271BD0 -> 0x271C18
void SparkySysInit_Hot(class NPARMgmt * mgmt /* r2 */, class xParticleBatchSystem * pbs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x271BD0 -> 0x271C18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeSparky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00271C20 -> 0x00271C68
*/
// Range: 0x271C20 -> 0x271C68
void SparkySysInit_Dull(class NPARMgmt * mgmt /* r2 */, class xParticleBatchSystem * pbs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x271C20 -> 0x271C68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeSparky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00271C70 -> 0x00271CD8
*/
// Range: 0x271C70 -> 0x271CD8
void SparkySysTweaks(char * prefix_root /* r2 */) {
    /* anonymous block */ {
        // Range: 0x271C70 -> 0x271CD8
        char prefix_base[128]; // r29+0x90
        char prefix[128]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeSparky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00271CE0 -> 0x002727D8
*/
// Range: 0x271CE0 -> 0x2727D8
// this: r21
void SparkyEmitter::DenSeaItRain(class xVec3 * pos_beg /* r20 */, class xVec3 * pos_end /* r16 */, class xVec3 * vel_drift /* r19 */, float rad_emitCaller /* r28 */, float fac_spdRamp /* r27 */, signed int num_emitCaller /* r2 */) {
    /* anonymous block */ {
        // Range: 0x271CE0 -> 0x2727D8
        signed int pbs_id; // r30
        signed int num_desire; // r2
        signed int cnt_remain; // r18
        signed int num_emitted; // r22
        class xVec3 dir_axis; // r29+0x250
        class xVec3 dir_perp; // r29+0x240
        class xVec3 dir_orth; // r29+0x230
        class xVec3 dir_seg; // r29+0x220
        float dseg; // r26
        float darc; // r25
        unsigned char * mem; // r29+0x25C
        signed int num_par; // r2
        class SparkyParticle * par; // r17
        signed int i; // r23
        float samecalc; // r29+0x260
        float ang_curr; // r29+0x260
        class xVec3 dir_outward; // r29+0x210
        float rad_emit; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeSparky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002727E0 -> 0x00272B14
*/
// Range: 0x2727E0 -> 0x272B14
// this: r21
void SparkyEmitter::EmitInDir(class xVec3 * pos /* r20 */, class xVec3 * vel /* r19 */, signed int num_emitCaller /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2727E0 -> 0x272B14
        signed int pbs_id; // r23
        signed int num_desire; // r2
        signed int cnt_remain; // r22
        unsigned char * mem; // r29+0x9C
        signed int num_par; // r2
        class SparkyParticle * par; // r18
        signed int i; // r17
        float samecalc; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeSparky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00272B20 -> 0x00273444
*/
// Range: 0x272B20 -> 0x273444
// this: r21
void SparkyEmitter::EmitRing(class xVec3 * pos_center /* r20 */, class xVec3 * dir_axis /* r19 */, float rad_emitCaller /* r26 */, float fac_spdRamp /* r25 */, signed int num_emitCaller /* r2 */) {
    /* anonymous block */ {
        // Range: 0x272B20 -> 0x273444
        signed int pbs_id; // r29+0xE0
        signed int num_desire; // r29+0xD0
        signed int cnt_remain; // r2
        signed int num_emitted; // r18
        class xVec3 dir_perp; // r29+0x230
        class xVec3 dir_orth; // r29+0x220
        float darc; // r24
        unsigned char * mem; // r29+0x23C
        signed int num_par; // r2
        class SparkyParticle * par; // r17
        signed int i; // r16
        float samecalc; // r29+0x240
        float ang_curr; // r29+0x240
        class xVec3 dir_outward; // r29+0x210
        float rad_emit; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeSparky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00273450 -> 0x00273470
*/
// Range: 0x273450 -> 0x273470
// this: r2
void SparkyEmitter::EmitOnAxis(class xVec3 * pos_center /* r2 */, class xVec3 * dir_axis /* r2 */) {
    /* anonymous block */ {
        // Range: 0x273450 -> 0x273470
    }
}


