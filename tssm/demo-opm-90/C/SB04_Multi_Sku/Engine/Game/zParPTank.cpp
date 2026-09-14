/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030E560 -> 0x0030E63C
*/
// Range: 0x30E560 -> 0x30E63C
void zParPTankRender() {
    /* anonymous block */ {
        // Range: 0x30E560 -> 0x30E63C
        class zParPTank * zp; // r19
        signed int renders; // r18
        signed int paused; // r2
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030E640 -> 0x0030E728
*/
// Range: 0x30E640 -> 0x30E728
void zParPTankExit() {
    /* anonymous block */ {
        // Range: 0x30E640 -> 0x30E728
        class zParPTank * zp; // r17
        unsigned int i; // r16
        class RwFrame * tmpframe; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030E730 -> 0x0030E97C
*/
// Range: 0x30E730 -> 0x30E97C
void zParPTankSpawnEffectsParticles(class xVec3 * pos /* r19 */, class xVec3 * vel /* r18 */, unsigned int count /* r17 */) {
    /* anonymous block */ {
        // Range: 0x30E730 -> 0x30E97C
        class zParPTank * zp; // r2
        class RpPTankLockStruct posLock; // r29+0x58
        class RpPTankLockStruct vtx2TexCoordsLock; // r29+0x50
        unsigned int poslock_base; // r2
        unsigned int uvlock_base; // r2
        class xVec3 * ref_pos; // r7
        class RwCamera * camera; // r2
        unsigned int i; // r6
        class RwTexCoords * uv; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030E980 -> 0x0030EC9C
*/
// Range: 0x30E980 -> 0x30EC9C
static void zParPTankEffectsParticleUpdate(class zParPTank * zp /* r20 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x30E980 -> 0x30EC9C
        class RpPTankLockStruct plock; // r29+0x78
        class RpPTankLockStruct uvlock; // r29+0x70
        unsigned int plock_base; // r2
        unsigned int uvlock_base; // r2
        class BubbleData * base_xp; // r2
        class BubbleData * xp; // r19
        float damp; // r29+0x80
        unsigned int i; // r4
        class RwTexCoords * uv; // r2
        class xVec3 * pos; // r18
        class RwTexCoords * end_uv; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030ECA0 -> 0x0030EF0C
*/
// Range: 0x30ECA0 -> 0x30EF0C
static void zParPTankEffectsParticleCreate(class zParPTank * zp /* r20 */, unsigned int max_particles /* r2 */, void (* update)(class zParPTank *, float) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30ECA0 -> 0x30EF0C
        class RwTexture * tex; // r19
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030EF10 -> 0x0030F118
*/
// Range: 0x30EF10 -> 0x30F118
static void zParPTankSteamUpdate(class zParPTank * zp /* r16 */, float dt /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x30EF10 -> 0x30F118
        class RpPTankLockStruct plock; // r29+0x28
        class RpPTankLockStruct uvlock; // r29+0x20
        unsigned int plock_base; // r2
        unsigned int uvlock_base; // r2
        unsigned int i; // r6
        class RwTexCoords * uv; // r2
        class RwTexCoords * end_uv; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030F120 -> 0x0030F370
*/
// Range: 0x30F120 -> 0x30F370
static void zParPTankSteamCreate(class zParPTank * zp /* r20 */, unsigned int max_particles /* r2 */, void (* update)(class zParPTank *, float) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30F120 -> 0x30F370
        class RwTexture * tex; // r19
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030F370 -> 0x0030F520
*/
// Range: 0x30F370 -> 0x30F520
void zParPTankSpawnSnow(class xVec3 * pos /* r19 */, class xVec3 * vel /* r18 */, unsigned int count /* r16 */) {
    /* anonymous block */ {
        // Range: 0x30F370 -> 0x30F520
        unsigned int old_size; // r2
        class snow_particle_data * it; // r17
        class snow_particle_data * end; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030F520 -> 0x0030FBA4
*/
// Range: 0x30F520 -> 0x30FBA4
static void zParPTankSnowUpdate(class zParPTank * zp /* r22 */, float dt /* r24 */) {
    /* anonymous block */ {
        // Range: 0x30F520 -> 0x30FBA4
        class snow_particle_data * end; // r20
        float fadein_life; // r23
        float fadeout_life; // r22
        float ilife; // r29+0xE0
        float ifadein; // r21
        float ifadeout; // r20
        class snow_particle_data * it; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030FBB0 -> 0x0030FBC4
*/
// Range: 0x30FBB0 -> 0x30FBC4
void zParPTankSpawnMenuBubbles(class xVec3 * pos /* r2 */, class xVec3 * vel /* r2 */, unsigned int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30FBB0 -> 0x30FBC4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030FBD0 -> 0x0030FBE4
*/
// Range: 0x30FBD0 -> 0x30FBE4
signed int zParPTankBubblesAvailable() {
    /* anonymous block */ {
        // Range: 0x30FBD0 -> 0x30FBE4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030FBF0 -> 0x0030FC58
*/
// Range: 0x30FBF0 -> 0x30FC58
void zParPTankSpawnBubbles(class xVec3 * pos /* r18 */, class xVec3 * vel /* r17 */, unsigned int count /* r16 */, float scale /* r20 */) {
    /* anonymous block */ {
        // Range: 0x30FBF0 -> 0x30FC58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030FC60 -> 0x00310064
*/
// Range: 0x30FC60 -> 0x310064
static void zParPTankSpawnBubbles(class xVec3 * pos /* r20 */, class xVec3 * vel /* r19 */, unsigned int count /* r23 */, float scale /* r20 */, class zParPTank * zp /* r18 */) {
    /* anonymous block */ {
        // Range: 0x30FC60 -> 0x310064
        class RpPTankLockStruct plock; // r29+0x138
        class RpPTankLockStruct clock; // r29+0x130
        class RpPTankLockStruct slock; // r29+0x128
        class RpPTankLockStruct uvlock; // r29+0x120
        unsigned int plock_base; // r2
        unsigned int clock_base; // r2
        unsigned int slock_base; // r2
        unsigned int uvlock_base; // r2
        class xVec3 * ref_pos; // r17
        class RwCamera * camera; // r2
        unsigned int i; // r16
        class RwTexCoords * uv; // r2
        class RwV2d * size; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00310070 -> 0x0031071C
*/
// Range: 0x310070 -> 0x31071C
static void zParPTankBubbleUpdate(class zParPTank * zp /* r20 */, float dt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x310070 -> 0x31071C
        class RpPTankLockStruct plock; // r29+0xE8
        class RpPTankLockStruct clock; // r29+0xE0
        class RpPTankLockStruct slock; // r29+0xD8
        class RpPTankLockStruct uvlock; // r29+0xD0
        unsigned int plock_base; // r2
        unsigned int clock_base; // r2
        unsigned int slock_base; // r2
        unsigned int uvlock_base; // r2
        float damp; // r21
        class BubbleData * base_xp; // r2
        class BubbleData * xp; // r19
        unsigned int i; // r18
        class xVec3 * pos; // r2
        class RwTexCoords * uv; // r2
        class RwRGBA * color; // r2
        class RwTexCoords * uv; // r2
        class RwTexCoords * end_uv; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00310720 -> 0x00310894
*/
// Range: 0x310720 -> 0x310894
static void zParPTankMenuBubbleCreate(class zParPTank * zp /* r17 */, unsigned int max_particles /* r2 */, void (* update)(class zParPTank *, float) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x310720 -> 0x310894
        class RwTexture * tex; // r16
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003108A0 -> 0x00310A14
*/
// Range: 0x3108A0 -> 0x310A14
static void zParPTankBubbleCreate(class zParPTank * zp /* r17 */, unsigned int max_particles /* r2 */, void (* update)(class zParPTank *, float) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3108A0 -> 0x310A14
        class RwTexture * tex; // r16
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00310A20 -> 0x00310C08
*/
// Range: 0x310A20 -> 0x310C08
static void zParPTankSparkleUpdate(class zParPTank * zp /* r16 */, float dt /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x310A20 -> 0x310C08
        class RpPTankLockStruct plock; // r29+0x28
        class RpPTankLockStruct uvlock; // r29+0x20
        unsigned int plock_base; // r2
        unsigned int uvlock_base; // r2
        unsigned int i; // r6
        class RwTexCoords * uv; // r2
        class RwTexCoords * end_uv; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zParPTank.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00310C10 -> 0x00310E60
*/
// Range: 0x310C10 -> 0x310E60
static void zParPTankSparkleCreate(class zParPTank * zp /* r20 */, unsigned int max_particles /* r2 */, void (* update)(class zParPTank *, float) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x310C10 -> 0x310E60
        class RwTexture * tex; // r19
        class RwFrame * frame; // r2
    }
}


