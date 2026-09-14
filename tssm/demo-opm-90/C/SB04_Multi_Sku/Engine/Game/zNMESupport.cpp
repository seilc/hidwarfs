/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupport.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026AF40 -> 0x0026B0B4
*/
// Range: 0x26AF40 -> 0x26B0B4
enum iSndHandle zNME_SNDPlay3D(class zNMECommon * npc /* r18 */, enum eNMESound soundEnum /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26AF40 -> 0x26B0B4
        unsigned int sndFlags; // r2
        class xEnt * ent; // r2
        enum iSndGroupHandle sndHdl; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupport.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026B0C0 -> 0x0026B2C0
*/
// Range: 0x26B0C0 -> 0x26B2C0
void NMEC_GenSmooth(class xVec3 * * pos_base /* r2 */, class xVec3 * * pos_mid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26B0C0 -> 0x26B2C0
        signed int i; // r9
        float u; // r29
        float u3; // r29
        float prepute[4][4]; // @ 0x00667F70
        float yews[4]; // @ 0x0061AD20
        signed int init; // @ 0x006373E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupport.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026B2C0 -> 0x0026B2D4
*/
// Range: 0x26B2C0 -> 0x26B2D4
class RwRaster * NMEC_FindRWRaster(class RwTexture * txtr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26B2C0 -> 0x26B2D4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupport.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026B2E0 -> 0x0026B310
*/
// Range: 0x26B2E0 -> 0x26B310
class RwRaster * NMEC_FindRWRaster(unsigned int hashid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26B2E0 -> 0x26B310
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupport.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026B310 -> 0x0026B34C
*/
// Range: 0x26B310 -> 0x26B34C
class RwRaster * NMEC_FindRWRaster(char * txtrname /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26B310 -> 0x26B34C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupport.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026B350 -> 0x0026B378
*/
// Range: 0x26B350 -> 0x26B378
class RwTexture * NMEC_FindRWTexture(char * txtrname /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26B350 -> 0x26B378
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupport.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026B380 -> 0x0026B418
*/
// Range: 0x26B380 -> 0x26B418
float NMEC_ds2_toCam(class xVec3 * pos_from /* r2 */, class xVec3 * delta /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26B380 -> 0x26B418
        class xVec3 delt; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupport.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026B420 -> 0x0026B5A8
*/
// Range: 0x26B420 -> 0x26B5A8
signed int NMEC_LineHitsBound(class xVec3 * a /* r18 */, class xVec3 * b /* r19 */, class xBound * bnd /* r17 */, class xCollis * callers_colrec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26B420 -> 0x26B5A8
        class xCollis * colrec; // r16
        class xCollis local_colrec; // r29+0x80
        class xVec3 vec; // r29+0x100
        float len; // r2
        class xRay3 ray; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupport.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026B5B0 -> 0x0026BBE8
*/
// Range: 0x26B5B0 -> 0x26BBE8
float NMEC_aimVary(class xVec3 * dir_aim /* r21 */, class xVec3 * pos_src /* r20 */, class xVec3 * pos_tgt /* r19 */, float dst_vary /* r22 */, signed int flg_vary /* r18 */, class xVec3 * pos_aimPoint /* r17 */) {
    /* anonymous block */ {
        // Range: 0x26B5B0 -> 0x26BBE8
        class xVec3 dir_toReal; // r29+0x170
        float mag_vary; // r21
        float mag_updown; // r29+0x180
        float fv; // r29+0x180
        class xVec3 dir_left; // r29+0x160
        class xVec3 vec_offset; // r29+0x150
        class xVec3 pos_tgtFake; // r29+0x140
        class xVec3 dir_toFake; // r29+0x130
        float dst_toFake; // r29+0x180
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupport.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026BBF0 -> 0x0026C238
*/
// Range: 0x26BBF0 -> 0x26C238
// this: r16
void NMELaser::Render(class xVec3 * pos_src /* r2 */, class xVec3 * pos_tgt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26BBF0 -> 0x26C238
        signed int i; // r6
        class RxObjSpace3DVertex * vtx_horz; // r5
        class RxObjSpace3DVertex * vtx_vert; // r4
        class xVec3 dir_axis; // r29+0x60
        float rat; // r29+0x70
        float v; // r29+0x70
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        enum _SDRenderState old_rendstat; // r18
        signed int bgg; // r2
        class RxObjSpace3DVertex laser_vtxbuf[2][14]; // @ 0x00667B80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupport.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C240 -> 0x0026C248
*/
// Range: 0x26C240 -> 0x26C248
void Timestep() {
    /* anonymous block */ {
        // Range: 0x26C240 -> 0x26C248
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupport.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C250 -> 0x0026C258
*/
// Range: 0x26C250 -> 0x26C258
void SceneReset() {
    /* anonymous block */ {
        // Range: 0x26C250 -> 0x26C258
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupport.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C260 -> 0x0026C384
*/
// Range: 0x26C260 -> 0x26C384
void ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x26C260 -> 0x26C384
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupport.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C390 -> 0x0026C398
*/
// Range: 0x26C390 -> 0x26C398
void SceneFinish() {
    /* anonymous block */ {
        // Range: 0x26C390 -> 0x26C398
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESupport.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C3A0 -> 0x0026C3A8
*/
// Range: 0x26C3A0 -> 0x26C3A8
void ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x26C3A0 -> 0x26C3A8
    }
}


