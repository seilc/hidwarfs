/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EC0B0 -> 0x003EC560
*/
// Range: 0x3EC0B0 -> 0x3EC560
void xEntMotionTranslate(class xEntMotion * motion /* r2 */, class xVec3 * dpos /* r2 */, class xMat4x3 * dmat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3EC0B0 -> 0x3EC560
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EC560 -> 0x003EC6EC
*/
// Range: 0x3EC560 -> 0x3EC6EC
void xEntMechReverse(class xEntMotion * motion /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3EC560 -> 0x3EC6EC
        class xEntMechData * mech; // r2
        class xEntMotionMechData * mkasst; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EC6F0 -> 0x003EC7FC
*/
// Range: 0x3EC6F0 -> 0x3EC7FC
void xEntMechForward(class xEntMotion * motion /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3EC6F0 -> 0x3EC7FC
        class xEntMechData * mech; // r2
        class xEntMotionMechData * mkasst; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EC800 -> 0x003ECAF8
*/
// Range: 0x3EC800 -> 0x3ECAF8
static unsigned int xEntRotMove(class xEntMotion * motion /* r18 */, float dt /* r29+0x40 */, class xEntFrame * frame /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3EC800 -> 0x3ECAF8
        class xEntMechData * mech; // r16
        class xEntMotionMechData * mkasst; // r2
        unsigned int last; // r16
        float tmradj; // r3
        float rem; // r2
        float speed; // r2
        class xEnt * ownr; // r2
        class xEntAsset * easst; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003ECB00 -> 0x003ECF50
*/
// Range: 0x3ECB00 -> 0x3ECF50
static unsigned int xEntSldMove(class xEntMotion * motion /* r2 */, float dt /* r29 */, class xEntFrame * frame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3ECB00 -> 0x3ECF50
        class xEntMechData * mech; // r3
        class xEntMotionMechData * mkasst; // r2
        unsigned int last; // r2
        float tmradj; // r3
        float rem; // r2
        float speed; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003ECF50 -> 0x003ED3F0
*/
// Range: 0x3ECF50 -> 0x3ED3F0
static unsigned int xEntScale(class xEntMotion * motion /* r2 */, float dt /* r29 */, class xEntFrame * frame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3ECF50 -> 0x3ED3F0
        class xEntMechData * mech; // r2
        class xEntMotionMechData * mkasst; // r9
        unsigned int last; // r2
        float scale; // r29
        float u; // r3
        float scale_adjust; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003ED3F0 -> 0x003ED80C
*/
// Range: 0x3ED3F0 -> 0x3ED80C
static void xEntMechMove(class xEntMotion * motion /* r19 */, class xScene * sc /* r10 */, float dt /* r20 */, class xEntFrame * frame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3ED3F0 -> 0x3ED80C
        class xEntMechData * mech; // r2
        class xEntMotionMechData * mkasst; // r2
        unsigned int last; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003ED810 -> 0x003ED950
*/
// Range: 0x3ED810 -> 0x3ED950
static void xEntPenMove(class xEntMotion * motion /* r18 */, float dt /* r20 */, class xEntFrame * frame /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3ED810 -> 0x3ED950
        class xEntPenData * pen; // r16
        class xEntMotionPenData * aspen; // r2
        float th; // r29+0xA0
        float tf; // r29+0xA0
        float u; // r29+0xA0
        float v; // r29+0xA0
        float dangle; // r29+0xA0
        float newt; // r29+0xA0
        float rem; // r29+0xA0
        class xMat4x3 delta_mat; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003ED950 -> 0x003EE198
*/
// Range: 0x3ED950 -> 0x3EE198
static void xEntSplineMove(class xEntMotion * motion /* r16 */, float dt /* r25 */, class xEntFrame * frame /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3ED950 -> 0x3EE198
        class xEntSplineData * spline_data; // r2
        unsigned char still_on_spline; // r2
        class xVec3 target_position; // r29+0x1F0
        class xVec3 new_position; // r29+0x1E0
        class xVec3 dir; // r29+0x1D0
        class xMat3x3 mat; // r29+0x80
        class xQuat target_orient; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EE1A0 -> 0x003EED84
*/
// Range: 0x3EE1A0 -> 0x3EED84
static void xEntMPMove(class xEntMotion * motion /* r21 */, class xScene * sc /* r20 */, float dt /* r24 */, class xEntFrame * frame /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3EE1A0 -> 0x3EED84
        class xEntMPData * mp; // r18
        float newdist; // r29+0x1C0
        class xMovePoint * prev; // r2
        float qdot; // r29+0x1C0
        class xVec3 tgt; // r29+0x1B0
        class xVec3 direction; // r29+0x1A0
        class xVec3 bank; // r29+0x190
        class xQuat quat; // r29+0xD0
        class xQuat qold; // r29+0xC0
        class xMat3x3 tmpmat; // r29+0x90
        float u; // r23
        class xVec3 gravity; // r29+0x180
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EED90 -> 0x003EEEF0
*/
// Range: 0x3EED90 -> 0x3EEEF0
static void xEntMPGetNext(class xEntMotion * motion /* r17 */, class xMovePoint * prev /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3EED90 -> 0x3EEEF0
        class xEntMPData * mp; // r2
        class xVec3 tempdir; // r29+0x60
        class xMat3x3 mat; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EEEF0 -> 0x003EF038
*/
// Range: 0x3EEEF0 -> 0x3EF038
static void xEntOrbitMove(class xEntMotion * motion /* r17 */, float dt /* r21 */, class xEntFrame * frame /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3EEEF0 -> 0x3EF038
        float th; // r29+0x40
        float u; // r22
        float newt; // r1
        float rem; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EF040 -> 0x003EF2F4
*/
// Range: 0x3EF040 -> 0x3EF2F4
static void xEntERMove(class xEntMotion * motion /* r2 */, float dt /* r29 */, class xEntFrame * frame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3EF040 -> 0x3EF2F4
        float newt; // r29
        float rem; // r2
        float scale; // r29
        float rem; // r29
        float scale; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EF300 -> 0x003EF400
*/
// Range: 0x3EF300 -> 0x3EF400
void xEntMotionMove(class xEntMotion * motion /* r16 */, class xScene * sc /* r2 */, float dt /* r20 */, class xEntFrame * frame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3EF300 -> 0x3EF400
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EF400 -> 0x003EFB0C
*/
// Range: 0x3EF400 -> 0x3EFB0C
void xEntMotionReset(class xEntMotion * motion /* r16 */, class xScene * sc /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3EF400 -> 0x3EFB0C
        class xEntMotionPenData * aspen; // r2
        float dangle; // r29+0xD0
        class xMat3x3 pshrot; // r29+0x70
        class xVec3 totop; // r29+0xC0
        class xVec3 pshtotop; // r29+0xB0
        class xVec3 pshdelta; // r29+0xA0
        class xMat3x3 * modlrot; // r2
        class xVec3 * modlpos; // r18
        class xEnt * ownr; // r2
        class xEntMotionMechData * mkasst; // r2
        class xEntMechData * mech; // r2
        float scale; // r3
        float model_scale; // r2
        float asset_scale; // r1
        float drot; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EFB10 -> 0x003EFCD4
*/
// Range: 0x3EFB10 -> 0x3EFCD4
void xEntMotionSetup(class xEntMotion * motion /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3EFB10 -> 0x3EFCD4
        class xModelInstance * model; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntMotion.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EFCE0 -> 0x003EFFC8
*/
// Range: 0x3EFCE0 -> 0x3EFFC8
void xEntMotionInit(class xEntMotion * motion /* r2 */, class xEnt * owner /* r2 */, class xEntMotionAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3EFCE0 -> 0x3EFFC8
        class xEntMotionMechData * mkasst; // r7
    }
}


