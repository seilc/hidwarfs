/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B4C60 -> 0x003B4C68
*/
// Range: 0x3B4C60 -> 0x3B4C68
void xParEmitterDestroy() {
    /* anonymous block */ {
        // Range: 0x3B4C60 -> 0x3B4C68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B4C70 -> 0x003B4CBC
*/
// Range: 0x3B4C70 -> 0x3B4CBC
void xParEmitterUpdate(class xBase * to /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x3B4C70 -> 0x3B4CBC
        class xParEmitter * pe; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B4CC0 -> 0x003C114C
*/
// Range: 0x3B4CC0 -> 0x3C114C
class xPar * xParEmitterEmit(class xParEmitter * pe /* r20 */, float emit_dt /* r29 */, float par_dt /* r28 */) {
    /* anonymous block */ {
        // Range: 0x3B4CC0 -> 0x3C114C
        signed int left'8565; // r2
        unsigned int * next'8564; // r2
        class xPar * last_p; // r29+0x1F0
        class xParEmitterAsset * pea; // r2
        class xParEmitterAsset * a; // r21
        class xParEmitterPropsAsset * prop; // r29+0x1E0
        signed int rate_has_elapsed; // r2
        float rate; // r29+0xC00
        class xParInterp * r; // r2
        signed int count; // r29+0x1D0
        class xParSys * ps; // r2
        class xParGroup * g; // r2
        class xPar * p; // r19
        float life; // r29+0xC00
        float size_birth; // r29+0xC00
        float size_death; // r29+0xC00
        class xVec3 emitPosition; // r29+0xBF0
        class xBase * attachObject; // r29+0x1C0
        unsigned int attachGroupIndex; // r29+0x1B0
        unsigned int attachGroupTotal; // r29+0x1AC
        signed int emitAgain; // r29+0x190
        signed int emitterIsAttachedToObject; // r29+0x180
        class xBase * emitObj; // r29+0x17C
        signed int marker; // r19
        class xGroup * g; // r2
        unsigned int get_rnd_group_idx; // r2
        class xEnt * attach_ent; // r29+0x178
        class xMat4x3 * bone_mat; // r29+0x170
        class xVec3 bone_vel; // r29+0xBE0
        class xVec3 add_vel; // r29+0xBD0
        float last_emit_time; // r27
        signed int i; // r29+0x160
        signed int c; // r29+0x150
        float fc1; // r31
        float fc2; // r29+0xC00
        class xBase * obj; // r2
        unsigned char tempGroupInitialized; // r2
        class xPar * save_next; // r2
        float u; // r4
        class xVec3 pos_diff; // r29+0xBC0
        float initial_length; // r29+0xC00
        class xParGroup temp_group; // @ 0x00696890
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C1150 -> 0x003C14A0
*/
// Range: 0x3C1150 -> 0x3C14A0
class xPar * xParEmitterEmitSetTexIdxs(class xPar * p /* r2 */, class xParSys * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C1150 -> 0x3C14A0
        class xParCmdTex * tex; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C14A0 -> 0x003C17EC
*/
// Range: 0x3C14A0 -> 0x3C17EC
float xParInterpCompute(signed int interp_mode /* r2 */, class xParInterp * r /* r16 */, float time /* r29+0x20 */, signed int time_has_elapsed /* r2 */, float lastVal /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x3C14A0 -> 0x3C17EC
        float val; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C17F0 -> 0x003C1C98
*/
// Range: 0x3C17F0 -> 0x3C1C98
class xPar * xParEmitterEmitCustom(class xParEmitter * p /* r20 */, float dt /* r20 */, class xParEmitterCustomSettings * info /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3C17F0 -> 0x3C1C98
        unsigned int flags; // r2
        class xParEmitterAsset * pe; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C1CA0 -> 0x003C1D54
*/
// Range: 0x3C1CA0 -> 0x3C1D54
void xParEmitterEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C1CA0 -> 0x3C1D54
        class xParEmitter * t; // r16
        class xParEmitterCustomSettings fake_settings; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C1D60 -> 0x003C1E50
*/
// Range: 0x3C1D60 -> 0x3C1E50
void xParEmitterSetup(class xParEmitter * t /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3C1D60 -> 0x3C1E50
        class xEnt * ent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C1E50 -> 0x003C228C
*/
// Range: 0x3C1E50 -> 0x3C228C
void xParEmitterInit(class xBase * b /* r18 */, class xParEmitterAsset * pea /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3C1E50 -> 0x3C228C
        class xParEmitterPropsAsset * prop; // r16
        class xParEmitter * t; // r2
        signed int i; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C2290 -> 0x003C2298
*/
// Range: 0x3C2290 -> 0x3C2298
void xParEmitterInit(void * b /* r2 */, void * tasset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C2290 -> 0x3C2298
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C22A0 -> 0x003C2364
*/
// Range: 0x3C22A0 -> 0x3C2364
signed int xParInterpConvertInterpMode(class xParInterp * p /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C22A0 -> 0x3C2364
    }
}


