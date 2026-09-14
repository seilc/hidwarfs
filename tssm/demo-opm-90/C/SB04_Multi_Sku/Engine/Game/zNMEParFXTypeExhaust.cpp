/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeExhaust.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00279E10 -> 0x0027ADB4
*/
// Range: 0x279E10 -> 0x27ADB4
signed int ExhaustSysUpdate_noRot(unsigned char * mem /* r22 */, signed int count /* r2 */, class ptank_pool & apool /* r2 */, float dt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x279E10 -> 0x27ADB4
        class ptank_pool__pos_color_size_uv2 * pool; // r20
        class ExhaustParticle * par; // r19
        class ExhaustParticle * end; // r18
        class xVec3 pos_plyr; // r29+0x170
        class ExhaustEmitter * emitter; // r17
        float tym_life; // r29+0x180
        float rat_rev; // r29+0x180
        float rat; // r1
        class ExhaustCurve node_eval; // r29+0x160
        signed int idx; // r4
        signed int linearize; // r2
        signed int systemUsesHDR; // r2
        class xColor_tag par_color; // r29+0x17C
        float adjAlpha; // r3
        unsigned char alftest; // r3
        float sum; // r3
        class Damage * dmg; // r2
        float ds2_plyr; // r29+0x180
        float scaleSize; // r29+0x180
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeExhaust.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027ADC0 -> 0x0027BDEC
*/
// Range: 0x27ADC0 -> 0x27BDEC
signed int ExhaustSysUpdate(unsigned char * mem /* r22 */, signed int count /* r2 */, class ptank_pool & apool /* r2 */, float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x27ADC0 -> 0x27BDEC
        class ptank_pool__pos_color_size_rot_uv2 * pool; // r20
        class ExhaustParticle * par; // r19
        class ExhaustParticle * end; // r18
        class xVec3 pos_plyr; // r29+0x180
        class ExhaustEmitter * emitter; // r17
        float tym_life; // r29+0x190
        float rat_rev; // r29+0x190
        float rat; // r22
        class ExhaustCurve node_eval; // r29+0x170
        signed int idx; // r4
        signed int linearize; // r2
        signed int systemUsesHDR; // r23
        float fac_randSaddle; // r29+0x190
        class xColor_tag par_color; // r29+0x18C
        float adjAlpha; // r2
        unsigned char alftest; // r3
        float sum; // r2
        class Damage * dmg; // r2
        float ds2_plyr; // r29+0x190
        float scaleSize; // r29+0x190
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeExhaust.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027BDF0 -> 0x0027BE38
*/
// Range: 0x27BDF0 -> 0x27BE38
void ExhaustSysInit_Glow(class NPARMgmt * mgmt /* r2 */, class xParticleBatchSystem * pbs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x27BDF0 -> 0x27BE38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeExhaust.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027BE40 -> 0x0027BE84
*/
// Range: 0x27BE40 -> 0x27BE84
void ExhaustSysInit_Hot(class NPARMgmt * mgmt /* r2 */, class xParticleBatchSystem * pbs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x27BE40 -> 0x27BE84
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeExhaust.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027BE90 -> 0x0027BED8
*/
// Range: 0x27BE90 -> 0x27BED8
void ExhaustSysInit_noRot_Dull(class NPARMgmt * mgmt /* r2 */, class xParticleBatchSystem * pbs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x27BE90 -> 0x27BED8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeExhaust.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027BEE0 -> 0x0027BF24
*/
// Range: 0x27BEE0 -> 0x27BF24
void ExhaustSysInit_Dull(class NPARMgmt * mgmt /* r2 */, class xParticleBatchSystem * pbs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x27BEE0 -> 0x27BF24
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeExhaust.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027BF30 -> 0x0027BF7C
*/
// Range: 0x27BF30 -> 0x27BF7C
void ExhaustSysTweaks(char * prefix_root /* r2 */) {
    /* anonymous block */ {
        // Range: 0x27BF30 -> 0x27BF7C
        char prefix_base[128]; // r29+0x90
        char prefix[128]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeExhaust.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027BF80 -> 0x0027CAC0
*/
// Range: 0x27BF80 -> 0x27CAC0
// this: r21
void ExhaustEmitter::EmitLineUp(class xVec3 * pos_beg /* r20 */, class xVec3 * pos_end /* r16 */, class xVec3 * vel_drift /* r19 */, float pct_spdRamp /* r28 */, signed int num_emitCaller /* r2 */, float rad_emitCaller /* r27 */) {
    /* anonymous block */ {
        // Range: 0x27BF80 -> 0x27CAC0
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
        class ExhaustParticle * par; // r17
        signed int i; // r23
        float samecalc; // r29+0x260
        float ang_curr; // r29+0x260
        class xVec3 dir_outward; // r29+0x210
        float rad_emit; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeExhaust.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027CAC0 -> 0x0027D474
*/
// Range: 0x27CAC0 -> 0x27D474
// this: r21
void ExhaustEmitter::EmitRing(class xVec3 * pos_center /* r22 */, class xVec3 * dir_axis /* r20 */, float rad_emitCaller /* r26 */, float pct_spdRamp /* r25 */, signed int num_emitCaller /* r2 */, class xVec3 * vel_drift /* r19 */) {
    /* anonymous block */ {
        // Range: 0x27CAC0 -> 0x27D474
        signed int pbs_id; // r29+0xC0
        signed int num_desire; // r18
        signed int cnt_remain; // r2
        signed int num_emitted; // r23
        class xVec3 dir_perp; // r29+0x210
        class xVec3 dir_orth; // r29+0x200
        float darc; // r24
        unsigned char * mem; // r29+0x21C
        signed int num_par; // r2
        class ExhaustParticle * par; // r17
        signed int i; // r30
        float samecalc; // r29+0x220
        float ang_curr; // r29+0x220
        class xVec3 dir_outward; // r29+0x1F0
        float rad_emit; // r12
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeExhaust.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027D480 -> 0x0027D4A4
*/
// Range: 0x27D480 -> 0x27D4A4
// this: r2
void ExhaustEmitter::EmitOnAxis(class xVec3 * pos_center /* r2 */, class xVec3 * dir_axis /* r2 */) {
    /* anonymous block */ {
        // Range: 0x27D480 -> 0x27D4A4
    }
}


