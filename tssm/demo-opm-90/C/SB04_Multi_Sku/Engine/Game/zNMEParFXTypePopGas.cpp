/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePopGas.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002751A0 -> 0x0027597C
*/
// Range: 0x2751A0 -> 0x27597C
signed int PopGasSysUpdate(unsigned char * mem /* r20 */, signed int count /* r2 */, class ptank_pool & apool /* r2 */, float dt /* r25 */) {
    /* anonymous block */ {
        // Range: 0x2751A0 -> 0x27597C
        class ptank_pool__pos_color_size_rot * pool; // r19
        class PopGasParticle * par; // r18
        class PopGasParticle * end; // r17
        class xVec3 pos_plyr; // r29+0x130
        class PopGasEmitter * emitter; // r16
        float tym_life; // r29+0x140
        float rat_rev; // r29+0x140
        float rat; // r24
        float fac_keep; // r29+0x140
        float beans; // r29+0x140
        float fac_accelSide; // r29+0x140
        float arch; // r29+0x140
        float dim; // r29+0x140
        float ds2_plyr; // r29+0x140
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePopGas.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00275980 -> 0x002759C8
*/
// Range: 0x275980 -> 0x2759C8
void PopGasSysInit(class NPARMgmt * mgmt /* r2 */, class xParticleBatchSystem * pbs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x275980 -> 0x2759C8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePopGas.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002759D0 -> 0x00275A1C
*/
// Range: 0x2759D0 -> 0x275A1C
void PopGasSysTweaks(char * prefix_root /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2759D0 -> 0x275A1C
        char prefix_base[128]; // r29+0x90
        char prefix[128]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePopGas.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00275A20 -> 0x00275C78
*/
// Range: 0x275A20 -> 0x275C78
// this: r21
void PopGasEmitter::PopRockTrail(class xVec3 * pos /* r20 */, class xVec3 * dir_emit /* r19 */) {
    /* anonymous block */ {
        // Range: 0x275A20 -> 0x275C78
        signed int pbs_id; // r2
        signed int cnt_remain; // r30
        unsigned char * mem; // r29+0xCC
        signed int num_par; // r2
        class PopGasParticle * par; // r18
        signed int i; // r17
        float spd; // r29+0xD0
        float samecalc; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePopGas.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00275C80 -> 0x00276174
*/
// Range: 0x275C80 -> 0x276174
// this: r21
void PopGasEmitter::Fountain(class xVec3 * pos /* r20 */, class xVec3 * vel_drift /* r19 */) {
    /* anonymous block */ {
        // Range: 0x275C80 -> 0x276174
        signed int pbs_id; // r2
        signed int cnt_remain; // r29+0xC0
        signed int num_emitted; // r18
        unsigned char * mem; // r29+0x16C
        signed int num_par; // r2
        float darc; // r21
        float ang_curr; // r29+0x170
        class PopGasParticle * par; // r17
        signed int i; // r16
        class xVec3 dir; // r29+0x160
        float samecalc; // r29+0x170
    }
}


