/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeFogBreath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002790E0 -> 0x00279854
*/
// Range: 0x2790E0 -> 0x279854
signed int FogSysUpdate(unsigned char * mem /* r20 */, signed int count /* r2 */, class ptank_pool & apool /* r2 */, float dt /* r25 */) {
    /* anonymous block */ {
        // Range: 0x2790E0 -> 0x279854
        class ptank_pool__pos_color_size_rot * pool; // r19
        class FogParticle * par; // r18
        class FogParticle * end; // r17
        class xVec3 pos_plyr; // r29+0x130
        class FogBreathEmitter * emitter; // r16
        float tym_life; // r29+0x140
        float rat_rev; // r29+0x140
        float rat; // r24
        float fac_keep; // r29+0x140
        float beans; // r29+0x140
        float arch; // r29+0x140
        float dim; // r29+0x140
        float ds2_plyr; // r29+0x140
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeFogBreath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00279860 -> 0x002798A8
*/
// Range: 0x279860 -> 0x2798A8
void FogSysInit(class NPARMgmt * mgmt /* r2 */, class xParticleBatchSystem * pbs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x279860 -> 0x2798A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeFogBreath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002798B0 -> 0x002798FC
*/
// Range: 0x2798B0 -> 0x2798FC
void FogSysTweaks(char * prefix_root /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2798B0 -> 0x2798FC
        char prefix_base[128]; // r29+0x90
        char prefix[128]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypeFogBreath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00279900 -> 0x00279E04
*/
// Range: 0x279900 -> 0x279E04
// this: r21
void FogBreathEmitter::SpewVolume(class xVec3 * pos /* r20 */, class xMat3x3 * axis /* r19 */) {
    /* anonymous block */ {
        // Range: 0x279900 -> 0x279E04
        signed int pbs_id; // r2
        signed int cnt_remain; // r22
        unsigned char * mem; // r29+0x12C
        signed int num_par; // r2
        class FogParticle * par; // r18
        signed int i; // r23
        float samecalc; // r29+0x130
    }
}


