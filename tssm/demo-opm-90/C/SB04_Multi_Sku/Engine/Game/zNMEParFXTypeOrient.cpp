/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeOrient.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00277390 -> 0x0027870C
*/
// Range: 0x277390 -> 0x27870C
signed int OrientSysUpdate(unsigned char * mem /* r22 */, signed int count /* r2 */, class ptank_pool & apool /* r2 */, float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x277390 -> 0x27870C
        class ptank_pool__color_mat_uv2 * pool; // r20
        class OrientParticle * par; // r19
        class OrientParticle * end; // r18
        class xVec3 pos_plyr; // r29+0x1E0
        class OrientEmitter * emitter; // r17
        float tym_life; // r29+0x1F0
        float rat_rev; // r29+0x1F0
        float rat; // r20
        class OrientCurve node_eval; // r29+0x1D0
        signed int idx; // r4
        signed int linearize; // r2
        signed int systemUsesHDR; // r23
        float fac_randSaddle; // r29+0x1F0
        class xColor_tag par_color; // r29+0x1EC
        float adjAlpha; // r2
        unsigned char alftest; // r3
        float sum; // r2
        class Damage * dmg; // r2
        float ds2_plyr; // r29+0x1F0
        float sv; // r29+0x1F0
        float cv; // r29+0x1F0
        class xVec3 dir_over; // r29+0x1C0
        float scaleSize; // r29+0x1F0
        float wid_par; // r29+0x1F0
        float hyt_par; // r29+0x1F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeOrient.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00278710 -> 0x00278758
*/
// Range: 0x278710 -> 0x278758
void OrientSysInit_Hot(class NPARMgmt * mgmt /* r2 */, class xParticleBatchSystem * pbs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x278710 -> 0x278758
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeOrient.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00278760 -> 0x002787A8
*/
// Range: 0x278760 -> 0x2787A8
void OrientSysInit_Dull(class NPARMgmt * mgmt /* r2 */, class xParticleBatchSystem * pbs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x278760 -> 0x2787A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeOrient.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002787B0 -> 0x002787FC
*/
// Range: 0x2787B0 -> 0x2787FC
void OrientSysTweaks(char * prefix_root /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2787B0 -> 0x2787FC
        char prefix_base[128]; // r29+0x90
        char prefix[128]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeOrient.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00278800 -> 0x002790D4
*/
// Range: 0x278800 -> 0x2790D4
// this: r21
void OrientEmitter::EmitRing(class xVec3 * pos_center /* r20 */, class xVec3 * dir_axis /* r19 */, float rad_emitCaller /* r26 */, float pct_spdRamp /* r25 */, signed int num_emitCaller /* r2 */) {
    /* anonymous block */ {
        // Range: 0x278800 -> 0x2790D4
        signed int pbs_id; // r29+0xE0
        signed int num_desire; // r29+0xD0
        signed int cnt_remain; // r2
        signed int num_emitted; // r18
        class xVec3 dir_perp; // r29+0x230
        class xVec3 dir_orth; // r29+0x220
        float darc; // r24
        unsigned char * mem; // r29+0x23C
        signed int num_par; // r2
        class OrientParticle * par; // r17
        signed int i; // r16
        float samecalc; // r29+0x240
        float ang_curr; // r29+0x240
        class xVec3 dir_outward; // r29+0x210
        float rad_emit; // r10
    }
}


