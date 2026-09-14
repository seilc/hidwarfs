/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXShared.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BF6B0 -> 0x004BF830
*/
// Range: 0x4BF6B0 -> 0x4BF830
void zCinFX_StreakBone_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4BF6B0 -> 0x4BF830
        class xMat4x3 * mat_bone; // r2
        class xMat4x3 * mat_root; // r2
        class NCINStreakInput * streakIn; // r2
        class xVec3 pos_a; // r29+0x80
        class xVec3 pos_b; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXShared.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BF830 -> 0x004BF8DC
*/
// Range: 0x4BF830 -> 0x4BF8DC
void zCinFX_StreakBone_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4BF830 -> 0x4BF8DC
        class NCINStreak * streak; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXShared.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BF8E0 -> 0x004BFE88
*/
// Range: 0x4BF8E0 -> 0x4BFE88
void zCinFX_EntityBonePar_AR(class NCINEntry * fxrec /* r17 */, class RwMatrixTag * animMat /* r16 */, unsigned int animIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4BF8E0 -> 0x4BFE88
        float dt; // r24
        class xParEmitter * pe; // r21
        class xParEmitterAsset * a; // r29+0xC0
        class xParEmitterPropsAsset * prop; // r20
        class xParSys * ps; // r22
        class xParGroup * g; // r2
        signed int rate_has_elapsed; // r2
        float rate; // r29+0x160
        signed int count; // r30
        float life; // r23
        float size_birth; // r29+0x160
        float size_death; // r29+0x160
        class xMat4x3 bone_mat; // r29+0xD0
        class xVec3 oldloc; // r29+0x150
        class xVec3 loc; // r29+0x140
        class xVec3 vel; // r29+0x130
        signed int i; // r23
        class xPar * p; // r19
        signed int c; // r18
        float fc1; // r25
        float fc2; // r29+0x160
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXShared.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BFE90 -> 0x004BFED0
*/
// Range: 0x4BFE90 -> 0x4BFED0
void zCinFX_CycleOnce_Upd(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4BFE90 -> 0x4BFED0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXShared.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BFED0 -> 0x004BFF14
*/
// Range: 0x4BFED0 -> 0x4BFF14
void zCinFX_GenNCINInput_Upd(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4BFED0 -> 0x4BFF14
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXShared.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BFF20 -> 0x004BFF3C
*/
// Range: 0x4BFF20 -> 0x4BFF3C
void zCinFX_Generic_Upd(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4BFF20 -> 0x4BFF3C
    }
}


