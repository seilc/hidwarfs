/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXTableBossDenTwo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BE2A0 -> 0x004BE2A8
*/
// Range: 0x4BE2A0 -> 0x4BE2A8
static void NCIN_BoneEmitExhaust_Twk() {
    /* anonymous block */ {
        // Range: 0x4BE2A0 -> 0x4BE2A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXTableBossDenTwo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BE2B0 -> 0x004BE550
*/
// Range: 0x4BE2B0 -> 0x4BE550
static void NCIN_BoneEmitExhaust_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4BE2B0 -> 0x4BE550
        signed int idx_bone; // r2
        class xMat4x3 * mat_bone; // r2
        class xMat4x3 * mat_root; // r2
        class xVec3 pos_emit; // r29+0x90
        class xVec3 dir_rel; // r29+0x80
        class xVec3 dir_emit; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXTableBossDenTwo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BE550 -> 0x004BE558
*/
// Range: 0x4BE550 -> 0x4BE558
static void NCIN_SplashExhaust_Twk() {
    /* anonymous block */ {
        // Range: 0x4BE550 -> 0x4BE558
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXTableBossDenTwo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BE560 -> 0x004BE68C
*/
// Range: 0x4BE560 -> 0x4BE68C
static void NCIN_SplashExhaust_Upd(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4BE560 -> 0x4BE68C
        class xVec3 pos_emit; // r29+0x20
        class xVec3 dir_emit; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXTableBossDenTwo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BE690 -> 0x004BE9C0
*/
// Range: 0x4BE690 -> 0x4BE9C0
static void NCIN_HazBowWave_AR(class NCINEntry * fxrec /* r20 */, class RwMatrixTag * animMat /* r19 */, unsigned int animIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4BE690 -> 0x4BE9C0
        class zNMEHazard * haz; // r18
        float siz_bowWave; // r3
        class xMat4x3 * mat_root; // r2
        signed int idx_bone; // r2
        float dang; // r29+0x140
        class xVec3 pos_emit; // r29+0x130
        class xMat3x3 mat_setHazard; // r29+0x90
        class xMat4x3 * mat_bone; // r17
        class xVec3 vec_offset; // r29+0x120
        class xMat3x3 mat_rot; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXTableBossDenTwo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BE9C0 -> 0x004BEAC4
*/
// Range: 0x4BE9C0 -> 0x4BEAC4
static void NCIN_HazBowWave_Upd(class NCINEntry * fxrec /* r17 */, signed int killit /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4BE9C0 -> 0x4BEAC4
        class NCINHaz * storage; // r2
        class zNMEHazard * haz; // r18
        signed int rc; // r2
    }
}


