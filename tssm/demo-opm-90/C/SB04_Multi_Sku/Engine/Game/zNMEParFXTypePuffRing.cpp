/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePuffRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00273470 -> 0x00273D68
*/
// Range: 0x273470 -> 0x273D68
signed int PuffSysUpdate(unsigned char * mem /* r20 */, signed int count /* r2 */, class ptank_pool & apool /* r2 */, float dt /* r25 */) {
    /* anonymous block */ {
        // Range: 0x273470 -> 0x273D68
        class ptank_pool__pos_color_size_rot_uv2 * pool; // r19
        class PuffParticle * par; // r18
        class PuffParticle * end; // r17
        class xVec3 pos_plyr; // r29+0x140
        class PuffEmitter * emitter; // r16
        float tym_life; // r29+0x150
        float rat_rev; // r29+0x150
        float rat; // r24
        float fac_keep; // r29+0x150
        float beans; // r29+0x150
        float arch; // r29+0x150
        float dim; // r29+0x150
        float ds2_plyr; // r29+0x150
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePuffRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00273D70 -> 0x00273DB8
*/
// Range: 0x273D70 -> 0x273DB8
void PuffSysInit_Glow(class NPARMgmt * mgmt /* r2 */, class xParticleBatchSystem * pbs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x273D70 -> 0x273DB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePuffRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00273DC0 -> 0x00273E04
*/
// Range: 0x273DC0 -> 0x273E04
void PuffSysInit_Hot(class NPARMgmt * mgmt /* r2 */, class xParticleBatchSystem * pbs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x273DC0 -> 0x273E04
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePuffRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00273E10 -> 0x00273E54
*/
// Range: 0x273E10 -> 0x273E54
void PuffSysInit_Dull(class NPARMgmt * mgmt /* r2 */, class xParticleBatchSystem * pbs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x273E10 -> 0x273E54
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePuffRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00273E60 -> 0x00273EAC
*/
// Range: 0x273E60 -> 0x273EAC
void PuffSysTweaks(char * prefix_root /* r2 */) {
    /* anonymous block */ {
        // Range: 0x273E60 -> 0x273EAC
        char prefix_base[128]; // r29+0x90
        char prefix[128]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePuffRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00273EB0 -> 0x00274240
*/
// Range: 0x273EB0 -> 0x274240
// this: r21
void PuffEmitter::Footstroke(class xVec3 * pos /* r20 */, class xVec3 * dir_emit /* r19 */) {
    /* anonymous block */ {
        // Range: 0x273EB0 -> 0x274240
        signed int pbs_id; // r2
        signed int cnt_remain; // r30
        unsigned char * mem; // r29+0xCC
        signed int num_par; // r2
        class PuffParticle * par; // r18
        signed int i; // r17
        float spd; // r29+0xD0
        float fac_randSaddle; // r7
        float samecalc; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePuffRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00274240 -> 0x00274760
*/
// Range: 0x274240 -> 0x274760
// this: r21
void PuffEmitter::RoundRing(class xVec3 * pos /* r20 */, float radius /* r22 */, class xVec3 * vel_drift /* r19 */) {
    /* anonymous block */ {
        // Range: 0x274240 -> 0x274760
        signed int pbs_id; // r2
        signed int cnt_remain; // r18
        signed int num_emitted; // r22
        unsigned char * mem; // r29+0x11C
        signed int num_par; // r2
        float darc; // r21
        class PuffParticle * par; // r17
        signed int i; // r23
        float ang_curr; // r29+0x120
        class xVec3 dir; // r29+0x110
        float fac_randSaddle; // r3
        float samecalc; // r29+0x120
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePuffRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00274760 -> 0x00274C74
*/
// Range: 0x274760 -> 0x274C74
// this: r21
void PuffEmitter::ImpactRing(class xVec3 * pos /* r20 */, class xVec3 * vel_drift /* r19 */) {
    /* anonymous block */ {
        // Range: 0x274760 -> 0x274C74
        signed int pbs_id; // r2
        signed int cnt_remain; // r18
        signed int num_emitted; // r22
        unsigned char * mem; // r29+0x11C
        signed int num_par; // r2
        float darc; // r21
        class PuffParticle * par; // r17
        signed int i; // r23
        float ang_curr; // r29+0x120
        class xVec3 dir; // r29+0x110
        float fac_randSaddle; // r3
        float samecalc; // r29+0x120
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEParFXTypePuffRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00274C80 -> 0x00275194
*/
// Range: 0x274C80 -> 0x275194
// this: r21
void PuffEmitter::PropWash(class xVec3 * pos /* r20 */, class xVec3 * vel_drift /* r19 */) {
    /* anonymous block */ {
        // Range: 0x274C80 -> 0x275194
        signed int pbs_id; // r2
        signed int cnt_remain; // r18
        signed int num_emitted; // r22
        unsigned char * mem; // r29+0x11C
        signed int num_par; // r2
        float darc; // r21
        class PuffParticle * par; // r17
        signed int i; // r23
        float ang_curr; // r29+0x120
        class xVec3 dir; // r29+0x110
        float fac_randSaddle; // r3
        float samecalc; // r29+0x120
    }
}


