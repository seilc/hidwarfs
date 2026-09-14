/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXSBCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BFF40 -> 0x004BFFD0
*/
// Range: 0x4BFF40 -> 0x4BFFD0
void NCIN_NMEBreathSpew_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4BFF40 -> 0x4BFFD0
        signed int idx_bone; // r2
        class xMat4x3 * mat_root; // r2
        class xMat4x3 * mat_bone; // r2
        class xVec3 pos_emit; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXSBCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004BFFD0 -> 0x004C02A4
*/
// Range: 0x4BFFD0 -> 0x4C02A4
void NCIN_NMEPuffPropWash_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4BFFD0 -> 0x4C02A4
        signed int idx_bone; // r2
        class xMat4x3 * mat_root; // r2
        class xMat4x3 * mat_bone; // r2
        class xVec3 vec_offset; // r29+0x100
        class xVec3 pos_emit; // r29+0xF0
        class xVec3 vel_base; // r29+0xE0
        class xVec3 vel_drift; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXSBCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C02B0 -> 0x004C050C
*/
// Range: 0x4C02B0 -> 0x4C050C
void NCIN_EjectShrapnel_AR(class NCINEntry * fxrec /* r18 */, class RpAtomic * model /* r17 */, class RwMatrixTag * animMat /* r16 */, unsigned int animIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4C02B0 -> 0x4C050C
        unsigned int aid_shrap; // r2
        class zShrapnelAsset * shrap; // r2
        class xMat4x3 mat_bone; // r29+0x40
        class xVec3 vel_rel; // r29+0xF0
        class xVec3 vel_emit; // r29+0xE0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXSBCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C0510 -> 0x004C0760
*/
// Range: 0x4C0510 -> 0x4C0760
void NCIN_NMEEjectShrapnel_AR(class NCINEntry * fxrec /* r18 */, class RpAtomic * model /* r17 */, class RwMatrixTag * animMat /* r16 */, unsigned int animIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4C0510 -> 0x4C0760
        class zShrapnelAsset * shrap; // r2
        class xMat4x3 mat_bone; // r29+0x40
        class xVec3 vel_rel; // r29+0xF0
        class xVec3 vel_emit; // r29+0xE0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXSBCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C0760 -> 0x004C0B60
*/
// Range: 0x4C0760 -> 0x4C0B60
void NCIN_NMERibHelp_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4C0760 -> 0x4C0B60
        class xMat4x3 mat_bone; // r29+0x10
        class xVec3 vec_offset; // r29+0x160
        class xVec3 vec_orient; // r29+0x150
        class xVec3 pos_emit; // r29+0x140
        class xVec3 dir_emit; // r29+0x130
        class RibData * ribhelp; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXSBCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C0B60 -> 0x004C0D18
*/
// Range: 0x4C0B60 -> 0x4C0D18
void NCIN_NMERibHelp_Upd(class NCINEntry * fxrec /* r20 */, signed int killit /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4C0B60 -> 0x4C0D18
        class RibData * ribhelp; // r2
        class NCINRibbon * ribrun; // r2
        class NCINRibbon * ribrun; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXSBCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C0D20 -> 0x004C100C
*/
// Range: 0x4C0D20 -> 0x4C100C
void zCinFX_BubBurst_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4C0D20 -> 0x4C100C
        float dt; // r29+0xB0
        class xVec3 & offset; // r4
        float rate; // r29+0xB0
        class xVec3 & root_vel; // r12
        float rand_diameter; // r1
        float rand_vel; // r29+0xB0
        float scale; // r29+0xB0
        class NCINCustom & data; // r2
        class xVec3 & oldloc; // r2
        class xVec3 & oldvel; // r2
        float & emitted; // r2
        signed int total; // r3
        class xMat4x3 mat; // r29+0x30
        class xVec3 vel; // r29+0xA0
        class xVec3 loc; // r29+0x90
        class xVec3 rloc; // r29+0x80
        class xVec3 rvel; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXSBCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C1010 -> 0x004C1304
*/
// Range: 0x4C1010 -> 0x4C1304
void zCinFX_BubbleTrail_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4C1010 -> 0x4C1304
        float dt; // r29+0xB0
        float rate; // r29+0xB0
        class xVec3 & offset; // r3
        class xVec3 & root_vel; // r12
        float rand_diameter; // r1
        float rand_vel; // r29+0xB0
        float scale; // r29+0xB0
        class NCINCustom & data; // r2
        class xVec3 & oldloc; // r17
        class xVec3 & oldvel; // r16
        float & emitted; // r2
        signed int total; // r2
        class xMat4x3 mat; // r29+0x30
        class xVec3 vel; // r29+0xA0
        class xVec3 loc; // r29+0x90
        class xVec3 rloc; // r29+0x80
        class xVec3 rvel; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXSBCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C1310 -> 0x004C1358
*/
// Range: 0x4C1310 -> 0x4C1358
void zCinFX_BubbleTrail_Upd(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4C1310 -> 0x4C1358
        class NCINCustom & data; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXSBCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C1360 -> 0x004C1504
*/
// Range: 0x4C1360 -> 0x4C1504
void zCinFX_BubTrailBoneSimp_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4C1360 -> 0x4C1504
        class xMat4x3 * mat_root; // r2
        signed int idx_bone; // r2
        class xVec3 pos_emit; // r29+0x30
        class xMat4x3 * mat_bone; // r2
        class xVec3 vec_offset; // r29+0x20
        unsigned int num_emit; // r2
        class xVec3 pos_rand; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFXSBCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C1510 -> 0x004C1624
*/
// Range: 0x4C1510 -> 0x4C1624
void zCinFX_BubSlamBone_AR(class NCINEntry * fxrec /* r6 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4C1510 -> 0x4C1624
        class xMat4x3 * mat_root; // r2
        signed int idx_bone; // r2
        class xVec3 pos_emit; // r29+0x10
    }
}


