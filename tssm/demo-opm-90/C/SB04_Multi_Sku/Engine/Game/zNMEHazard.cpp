/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029C5E0 -> 0x0029C970
*/
// Range: 0x29C5E0 -> 0x29C970
// this: r18
void zNMEHazard::StagColGeneral(signed int who /* r17 */) {
    /* anonymous block */ {
        // Range: 0x29C5E0 -> 0x29C970
        class xParabola * parab; // r16
        float tym_chkAhead; // r3
        float tym_alive; // r29+0x140
        float tym_ahead; // r21
        class xVec3 pos_here; // r29+0x130
        class xVec3 pos_there; // r29+0x120
        class xSweptSphere sws; // r29+0x50
        signed int rc; // r4
        float spd_avg; // r29+0x140
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029C970 -> 0x0029CAA0
*/
// Range: 0x29C970 -> 0x29CAA0
// this: r17
signed int zNMEHazard::StaggeredCollide() {
    /* anonymous block */ {
        // Range: 0x29C970 -> 0x29CAA0
        class HAZCollide * hazcol; // r2
        class xCollis colrec; // @ 0x00653FB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029CAA0 -> 0x0029CC08
*/
// Range: 0x29CAA0 -> 0x29CC08
// this: r18
void zNMEHazard::PreCollide(float acc_grav /* r29+0x40 */, float tym_collDelay /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x29CAA0 -> 0x29CC08
        class HAZLob * hazlob; // r2
        class xParabola * parab; // r17
        signed int rc; // r2
        class xCollis colrec; // @ 0x00653F50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029CC10 -> 0x0029CD8C
*/
// Range: 0x29CC10 -> 0x29CD8C
// this: r16
void zNMEHazard::OrientToDir(class xVec3 * vec_path /* r2 */, signed int doTheTwist /* r17 */) {
    /* anonymous block */ {
        // Range: 0x29CC10 -> 0x29CD8C
        float mag; // r29+0xA0
        class xMat3x3 mat_rot; // r29+0x60
        class xVec3 dir; // r29+0x90
        float tym_live; // r29+0xA0
        float ang_spun; // r29+0xA0
        class xMat3x3 mat_spiral; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029CD90 -> 0x0029CDE0
*/
// Range: 0x29CD90 -> 0x29CDE0
// this: r2
void zNMEHazard::TypData_RotMatSet(class xMat3x3 * mat_rot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29CD90 -> 0x29CDE0
        class xMat4x3 * frame; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029CDE0 -> 0x0029D0D8
*/
// Range: 0x29CDE0 -> 0x29D0D8
// this: r19
signed int zNMEHazard::ColTestCapsule(class xBound * bnd_tgt /* r18 */, class xVec3 * pos /* r2 */, float radiusCaller /* r29+0x190 */, class xVec3 * vel /* r17 */, float tym /* r21 */, signed int isPlayer /* r16 */) {
    /* anonymous block */ {
        // Range: 0x29CDE0 -> 0x29D0D8
        class xVec3 pos_from; // r29+0x180
        class xVec3 pos_dest; // r29+0x170
        class xSweptSphere sws; // r29+0x60
        signed int rc; // r2
        float dst_effective; // r2
        float tym_inFuture; // r29+0x190
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029D0E0 -> 0x0029D130
*/
// Range: 0x29D0E0 -> 0x29D130
// this: r2
void zNMEHazard::PosSet(class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29D0E0 -> 0x29D130
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029D130 -> 0x0029D1B8
*/
// Range: 0x29D130 -> 0x29D1B8
// this: r2
void zNMEHazard::Start(class xVec3 * pos /* r2 */, float tym /* r29 */) {
    /* anonymous block */ {
        // Range: 0x29D130 -> 0x29D1B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029D1C0 -> 0x0029D250
*/
// Range: 0x29D1C0 -> 0x29D250
// this: r16
void zNMEHazard::Discard() {
    /* anonymous block */ {
        // Range: 0x29D1C0 -> 0x29D250
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029D250 -> 0x0029D3B8
*/
// Range: 0x29D250 -> 0x29D3B8
// this: r16
signed int zNMEHazard::GrabModel() {
    /* anonymous block */ {
        // Range: 0x29D250 -> 0x29D3B8
        class zNMEHazardType * hth; // r2
        class RpAtomic * raw_model; // r2
        class xVec3 ang_orient; // r29+0x60
        class xMat4x3 frame; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029D3C0 -> 0x0029D548
*/
// Range: 0x29D3C0 -> 0x29D548
// this: r20
signed int zNMEHazard::Reconfigure(enum en_haztyp haztype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x29D3C0 -> 0x29D548
        class HAZNotify * noter; // r2
        class zNMECommon * npc_old; // r2
        class xVec3 pos_old; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029D550 -> 0x0029D5DC
*/
// Range: 0x29D550 -> 0x29D5DC
// this: r17
signed int zNMEHazard::ConfigHelper(enum en_haztyp haztype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29D550 -> 0x29D5DC
        signed int result; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029D5E0 -> 0x0029D688
*/
// Range: 0x29D5E0 -> 0x29D688
void HAZ_Iterate(unsigned char (* fp)(class zNMEHazard &, void *) /* r20 */, void * context /* r19 */, signed int flag_filter /* r18 */) {
    /* anonymous block */ {
        // Range: 0x29D5E0 -> 0x29D688
        class zNMEHazard * haz; // r17
        class zNMEHazard * end; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029D690 -> 0x0029D708
*/
// Range: 0x29D690 -> 0x29D708
class zNMEHazard * HAZ_Acquire() {
    /* anonymous block */ {
        // Range: 0x29D690 -> 0x29D708
        class zNMEHazard * da_haz; // r2
        signed int i; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029D710 -> 0x0029DB78
*/
// Range: 0x29D710 -> 0x29DB78
void RenderGenerally(signed int doOpaqueStuff /* r18 */) {
    /* anonymous block */ {
        // Range: 0x29D710 -> 0x29DB78
        signed int i; // r17
        class st_XORDEREDARRAY * hazlist; // r20
        enum _SDRenderState old_rendstat; // r23
        class zNMEHazard * haz; // r19
        signed int resetBlend; // r22
        signed int resetHDR; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029DB80 -> 0x0029E22C
*/
// Range: 0x29DB80 -> 0x29E22C
void Timestep(float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x29DB80 -> 0x29E22C
        signed int verify; // r2
        signed int skip_verify; // r2
        class st_XORDEREDARRAY * hazlist; // r16
        signed int i; // r18
        class zNMEHazard * haz; // r2
        signed int i; // r20
        class zNMEHazard * haz; // r19
        signed int i; // r22
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E230 -> 0x0029E26C
*/
// Range: 0x29E230 -> 0x29E26C
static signed int HAZ_ord_sorttest(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29E230 -> 0x29E26C
        class zNMEHazard * key; // r2
        class zNMEHazard * item; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E270 -> 0x0029E3B8
*/
// Range: 0x29E270 -> 0x29E3B8
void ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x29E270 -> 0x29E3B8
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E3C0 -> 0x0029E4B0
*/
// Range: 0x29E3C0 -> 0x29E4B0
void SceneReset() {
    /* anonymous block */ {
        // Range: 0x29E3C0 -> 0x29E4B0
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E4B0 -> 0x0029E52C
*/
// Range: 0x29E4B0 -> 0x29E52C
// this: r2
void zMODHazard::SceneFinish() {
    /* anonymous block */ {
        // Range: 0x29E4B0 -> 0x29E52C
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E530 -> 0x0029E5E4
*/
// Range: 0x29E530 -> 0x29E5E4
void ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x29E530 -> 0x29E5E4
        signed int i; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E5F0 -> 0x0029E61C
*/
// Range: 0x29E5F0 -> 0x29E61C
// this: r2
void zMODHazard::ModulePrepUse() {
    /* anonymous block */ {
        // Range: 0x29E5F0 -> 0x29E61C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A6E40 -> 0x002A6E48
*/
// Range: 0x2A6E40 -> 0x2A6E48
// this: r2
void zMODHazard::Render() {
    /* anonymous block */ {
        // Range: 0x2A6E40 -> 0x2A6E48
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A6E50 -> 0x002A6E58
*/
// Range: 0x2A6E50 -> 0x2A6E58
// this: r2
void zMODHazard::PostRender() {
    /* anonymous block */ {
        // Range: 0x2A6E50 -> 0x2A6E58
    }
}


