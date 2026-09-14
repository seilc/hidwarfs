/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupplement.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C410 -> 0x0026C460
*/
// Range: 0x26C410 -> 0x26C460
void NMEC_SimpShadowCacheRelease(class xShadowSimpleCache * entShad /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26C410 -> 0x26C460
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupplement.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C460 -> 0x0026C504
*/
// Range: 0x26C460 -> 0x26C504
class xShadowSimpleCache * NMEC_SimpShadowCacheReserve() {
    /* anonymous block */ {
        // Range: 0x26C460 -> 0x26C504
        class xShadowSimpleCache * da_simpShad; // r16
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupplement.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C510 -> 0x0026C638
*/
// Range: 0x26C510 -> 0x26C638
void NMEC_RenderProjTexture(class RwRaster * rast /* r18 */, float factor /* r21 */, class xMat4x3 * mat /* r17 */, float radius /* r20 */, float height /* r29+0x90 */, class xShadowCache * cache /* r16 */, signed int fillCache /* r2 */, class xEnt * ent /* r22 */) {
    /* anonymous block */ {
        // Range: 0x26C510 -> 0x26C638
        signed int i; // r21
        class xEnt * ent_tgt; // r2
        unsigned int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupplement.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C640 -> 0x0026C950
*/
// Range: 0x26C640 -> 0x26C950
void NMEC_MakeASplash(class xMat4x3 * mat_orient /* r18 */, enum en_typeSplash typ_splash /* r2 */, float radius /* r29+0x70 */, float tym_duration /* r29+0x70 */) {
    /* anonymous block */ {
        // Range: 0x26C640 -> 0x26C950
        float rad_splash; // r21
        float tym_splash; // r20
        enum en_haztyp hazTypeForSplash[7]; // r29+0x50
        enum en_haztyp hazType; // r2
        class zNMEHazard * haz; // r17
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupplement.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C950 -> 0x0026CC18
*/
// Range: 0x26C950 -> 0x26CC18
void NMEC_MakeASplash(class NMECSplashData * splash /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26C950 -> 0x26CC18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupplement.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026CC20 -> 0x0026CFF0
*/
// Range: 0x26CC20 -> 0x26CFF0
void NMEC_BurstBubble(class xVec3 * pos_base /* r21 */, float rad_pop /* r25 */, signed int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26CC20 -> 0x26CFF0
        float inc_hyt; // r24
        signed int i; // r20
        signed int j; // r19
        float hyt; // r23
        float rat_hyt; // r29+0xA0
        float rad_cur; // r22
        float curang; // r1
        class xVec3 pos_emit; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupplement.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026CFF0 -> 0x0026D738
*/
// Range: 0x26CFF0 -> 0x26D738
void NMEC_MakeLightningInfo(enum en_npclyt style /* r2 */, class _tagLightningAdd * info /* r16 */) {
    /* anonymous block */ {
        // Range: 0x26CFF0 -> 0x26D738
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupplement.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026D740 -> 0x0026DC94
*/
// Range: 0x26D740 -> 0x26DC94
// this: r18
void zMODSupple::StingerUpdate() {
    /* anonymous block */ {
        // Range: 0x26D740 -> 0x26DC94
        signed int num_plyrbone; // r3
        signed int idx_base; // r2
        signed int idx_list[3]; // r29+0x140
        class xMat4x3 * mat_list[3]; // r29+0x80
        signed int i; // r12
        signed int idx; // r5
        class xVec3 pos_pctr; // r29+0x130
        class xMat4x3 mat_plyrroot; // r29+0x40
        signed int i; // r17
        class xVec3 pos_from; // r29+0x120
        class xVec3 pos_dest; // r29+0x110
        class xVec3 pos_dest; // r29+0x100
        class xVec3 pos_outer; // r29+0xF0
        class xVec3 vec_elechair; // @ 0x0061AD08
        signed int lessismore; // @ 0x006373D8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupplement.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026DCA0 -> 0x0026DE18
*/
// Range: 0x26DCA0 -> 0x26DE18
// this: r18
void zMODSupple::StingerPrepare() {
    /* anonymous block */ {
        // Range: 0x26DCA0 -> 0x26DE18
        class _tagLightningAdd info; // r29+0x40
        class xVec3 pos_beg; // r29+0xB0
        signed int i; // r17
        signed int num_plyrbone; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupplement.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026DE20 -> 0x0026DFD4
*/
// Range: 0x26DE20 -> 0x26DFD4
// this: r16
void zMODSupple::Timestep(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x26DE20 -> 0x26DFD4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupplement.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026DFE0 -> 0x0026E138
*/
// Range: 0x26DFE0 -> 0x26E138
// this: r2
void zMODSupple::SceneReset() {
    /* anonymous block */ {
        // Range: 0x26DFE0 -> 0x26E138
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupplement.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E140 -> 0x0026E1A0
*/
// Range: 0x26E140 -> 0x26E1A0
void ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x26E140 -> 0x26E1A0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupplement.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E1A0 -> 0x0026E330
*/
// Range: 0x26E1A0 -> 0x26E330
// this: r16
void zMODSupple::ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x26E1A0 -> 0x26E330
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupplement.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E330 -> 0x0026E338
*/
// Range: 0x26E330 -> 0x26E338
void ModulePrepUse() {
    /* anonymous block */ {
        // Range: 0x26E330 -> 0x26E338
    }
}


