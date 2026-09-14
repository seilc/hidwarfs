/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePlasma.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00276180 -> 0x00276C28
*/
// Range: 0x276180 -> 0x276C28
signed int PlasmaSysUpdate(unsigned char * mem /* r20 */, signed int count /* r2 */, class ptank_pool & apool /* r2 */, float dt /* r25 */) {
    /* anonymous block */ {
        // Range: 0x276180 -> 0x276C28
        class ptank_pool__pos_color_size_rot_uv2 * pool; // r19
        class PlasmaParticle * par; // r18
        class PlasmaParticle * end; // r17
        class xVec3 pos_plyr; // r29+0x140
        class PlasmaEmitter * emitter; // r16
        float tym_life; // r29+0x150
        float rat_rev; // r29+0x150
        float rat; // r24
        float fac_keep; // r29+0x150
        float beans; // r29+0x150
        float fac_accelSide; // r29+0x150
        float arch; // r29+0x150
        float dim; // r29+0x150
        float cfac; // r29+0x150
        float ds2_plyr; // r29+0x150
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePlasma.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00276C30 -> 0x00276C78
*/
// Range: 0x276C30 -> 0x276C78
void PlasmaSysInit(class NPARMgmt * mgmt /* r2 */, class xParticleBatchSystem * pbs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x276C30 -> 0x276C78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePlasma.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00276C80 -> 0x00276CCC
*/
// Range: 0x276C80 -> 0x276CCC
void PlasmaSysTweaks(char * prefix_root /* r2 */) {
    /* anonymous block */ {
        // Range: 0x276C80 -> 0x276CCC
        char prefix_base[128]; // r29+0x90
        char prefix[128]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePlasma.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00276CD0 -> 0x00277390
*/
// Range: 0x276CD0 -> 0x277390
// this: r21
void PlasmaEmitter::ArcWelder(class xVec3 * pos /* r20 */, class xVec3 * dir_axis /* r19 */, float pct_spdRamp /* r25 */, signed int num_emitOverride /* r2 */) {
    /* anonymous block */ {
        // Range: 0x276CD0 -> 0x277390
        signed int pbs_id; // r29+0xD0
        signed int num_emitted; // r18
        signed int cnt_remain; // r29+0xC0
        class xVec3 dir_perp; // r29+0x1E0
        class xVec3 dir_orth; // r29+0x1D0
        unsigned char * mem; // r29+0x1EC
        signed int num_par; // r2
        float darc; // r24
        class PlasmaParticle * par; // r17
        signed int i; // r16
        float ang_curr; // r29+0x1F0
        class xVec3 dir_outward; // r29+0x1C0
        float samecalc; // r29+0x1F0
    }
}


