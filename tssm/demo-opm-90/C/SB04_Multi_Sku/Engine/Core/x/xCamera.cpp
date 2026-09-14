/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004328E0 -> 0x00432AAC
*/
// Range: 0x4328E0 -> 0x432AAC
void xCameraRotate(class xCamera * cam /* r16 */, class xVec3 & v /* r17 */, float roll /* r23 */, float time /* r22 */, float accel /* r21 */, float decl /* r20 */) {
    /* anonymous block */ {
        // Range: 0x4328E0 -> 0x432AAC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00432AB0 -> 0x00432C48
*/
// Range: 0x432AB0 -> 0x432C48
void xCameraRotate(class xCamera * cam /* r17 */, class xMat3x3 & m /* r16 */, float time /* r22 */, float accel /* r21 */, float decl /* r20 */) {
    /* anonymous block */ {
        // Range: 0x432AB0 -> 0x432C48
        class xVec3 eu; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00432C50 -> 0x00432DC8
*/
// Range: 0x432C50 -> 0x432DC8
void xCameraLookYPR(class xCamera * cam /* r16 */, unsigned int flags /* r2 */, float yaw /* r29+0x30 */, float pitch /* r22 */, float roll /* r20 */, float tm /* r29+0x30 */, float tm_acc /* r29+0x30 */, float tm_dec /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x432C50 -> 0x432DC8
        float s; // r21
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00432DD0 -> 0x00432FBC
*/
// Range: 0x432DD0 -> 0x432FBC
void xCameraLook(class xCamera * cam /* r16 */, unsigned int flags /* r2 */, class xQuat * orn_goal /* r2 */, float tm /* r29+0x30 */, float tm_acc /* r29+0x30 */, float tm_dec /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x432DD0 -> 0x432FBC
        float s; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00432FC0 -> 0x00433030
*/
// Range: 0x432FC0 -> 0x433030
void xCameraFOV(class xCamera * cam /* r2 */, float fov /* r29 */, float maxSpeed /* r29 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x432FC0 -> 0x433030
        float speed; // r29
        float len; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00433030 -> 0x00433114
*/
// Range: 0x433030 -> 0x433114
void xCameraMove(class xCamera * cam /* r2 */, class xVec3 & loc /* r2 */, float maxSpeed /* r29 */) {
    /* anonymous block */ {
        // Range: 0x433030 -> 0x433114
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00433120 -> 0x00433170
*/
// Range: 0x433120 -> 0x433170
void xCameraMove(class xCamera * cam /* r2 */, class xVec3 & loc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x433120 -> 0x433170
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00433170 -> 0x004333A4
*/
// Range: 0x433170 -> 0x4333A4
void xCameraMove(class xCamera * cam /* r16 */, unsigned int flags /* r2 */, float dgoal /* r21 */, float hgoal /* r29+0x40 */, float pgoal /* r20 */, float tm /* r29+0x40 */, float tm_acc /* r29+0x40 */, float tm_dec /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x433170 -> 0x4333A4
        float s; // r22
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004333B0 -> 0x004333F0
*/
// Range: 0x4333B0 -> 0x4333F0
void xCameraDoCollisions(signed int do_collis /* r2 */, signed int owner /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4333B0 -> 0x4333F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004333F0 -> 0x004333F8
*/
// Range: 0x4333F0 -> 0x4333F8
void xCameraSetTargetOMatrix(class xCamera * cam /* r2 */, class xMat4x3 * mat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4333F0 -> 0x4333F8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00433400 -> 0x00433408
*/
// Range: 0x433400 -> 0x433408
void xCameraSetTargetMatrix(class xCamera * cam /* r2 */, class xMat4x3 * mat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x433400 -> 0x433408
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00433410 -> 0x00433450
*/
// Range: 0x433410 -> 0x433450
void xCameraSetScene(class xCamera * cam /* r2 */, class xScene * sc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x433410 -> 0x433450
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00433450 -> 0x004334FC
*/
// Range: 0x433450 -> 0x4334FC
void xCameraUpdate(class xCamera * cam /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x433450 -> 0x4334FC
        signed int i; // r17
        signed int num_updates; // r2
        float sdt; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00433500 -> 0x00434B9C
*/
// Range: 0x433500 -> 0x434B9C
static void _xCameraUpdate(class xCamera * cam /* r20 */, float dt /* r30 */) {
    /* anonymous block */ {
        // Range: 0x433500 -> 0x434B9C
        float wcvx; // r21
        float wcvy; // r26
        float wcvz; // r20
        float m; // r29+0x370
        float dcv; // r24
        float hcv; // r29+0x370
        float pcv; // r23
        float tnext; // r22
        float dtg; // r21
        float htg; // r20
        float ptg; // r29+0x370
        float dsv; // r5
        float hsv; // r1
        float psv; // r29+0x370
        float T_inv; // r29+0x370
        float T_inv; // r29+0x370
        float it; // r29+0x370
        float ot; // r29+0x370
        float T_inv; // r29+0x370
        float dpv; // r29+0x370
        float hpv; // r29+0x370
        float ppv; // r29+0x370
        float vax; // r29+0x370
        float vay; // r29+0x370
        float vaz; // r29+0x370
        float s; // r29+0x370
        float dtg; // r29+0x370
        float dtg; // r29+0x370
        float dtg; // r29+0x370
        float htg; // r29+0x370
        float htg; // r29+0x370
        float htg; // r29+0x370
        float ptg; // r29+0x370
        float dphi; // r20
        float dplo; // r29+0x370
        float ptg; // r29+0x370
        float ptg; // r29+0x370
        class xVec3 oeu; // r29+0x360
        class xVec3 eu; // r29+0x350
        float m; // r20
        float ycv; // r29
        float pcv; // r28
        float rcv; // r27
        float tnext; // r26
        float ytg; // r29+0x370
        float ptg; // r29+0x370
        float rtg; // r29+0x370
        float ysv; // r4
        float psv; // r2
        float rsv; // r29+0x370
        float T_inv; // r29+0x370
        float T_inv; // r29+0x370
        float it; // r29+0x370
        float ot; // r29+0x370
        float T_inv; // r29+0x370
        float ypv; // r29+0x370
        float ppv; // r29+0x370
        float rpv; // r29+0x370
        float vax; // r29+0x370
        float vay; // r29+0x370
        float vaz; // r29+0x370
        float ytg; // r29+0x370
        float ptg; // r29+0x370
        float rtg; // r29+0x370
        class xQuat oq; // r29+0x300
        class xQuat qdiff_o_c; // r29+0x2F0
        class xRot rot_cv; // r29+0x2E0
        class xVec3 f; // r29+0x340
        float atx; // r2
        float aty; // r29+0x370
        float atz; // r1
        float dist; // r29+0x370
        float dx__; // r29+0x370
        float dz__; // r29+0x370
        float dist2; // r29+0x370
        float dist_inv; // r29+0x370
        float mpx; // r29+0x370
        float mpy; // r29+0x370
        float mpz; // r29+0x370
        float s; // r29+0x370
        class xMat3x3 des_mat; // r29+0x2B0
        class xMat3x3 latgt; // r29+0x280
        float ang_dist; // r29+0x370
        class xQuat a; // r29+0x270
        class xQuat b; // r29+0x260
        class xQuat o; // r29+0x250
        float s; // r29+0x370
        class xQuat desq; // r29+0x240
        class xQuat difq; // r29+0x230
        class xQuat newq; // r29+0x220
        class dualCamInfo dualCamInfo; // r29+0x100
        class xSweptSphere & sws; // r2
        class xVec3 tgtpos; // r29+0x330
        float swSphereRadius; // r29+0x370
        float farClipUnused; // r29+0x370
        class xRay3 ray; // r29+0xD0
        float one_len; // r29+0x370
        float dx; // r29+0x370
        float dy; // r29+0x370
        float dz; // r29+0x370
        float dist; // r29+0x370
        float stopdist; // r29+0x370
        float last_dt; // @ 0x0063814C
        signed char @14283; // @ 0x00638150
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00434BA0 -> 0x0043502C
*/
// Range: 0x434BA0 -> 0x43502C
void SweptSphereHitsCameraEnt(class xRay3 * ray /* r18 */, class xQCData * qcd /* r2 */, class xEnt * ent /* r17 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x434BA0 -> 0x43502C
        class dualCamInfo * pDualCamData; // r16
        unsigned int hitBound; // r5
        float oldrad; // r8
        class xBox tmpbox; // r29+0x130
        class xBox tmpbox; // r29+0x110
        class xRay3 lr; // r29+0xE0
        class xMat3x3 mn; // r29+0xB0
        class xModelInstance * collmod; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00435030 -> 0x004355A8
*/
// Range: 0x435030 -> 0x4355A8
void DualCamHitsCameraEnt(class xRay3 * ray /* r19 */, class xQCData * qcd /* r18 */, class xEnt * ent /* r17 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x435030 -> 0x4355A8
        class dualCamInfo * pDualCamData; // r16
        unsigned char usePartialCollision; // r5
        class xCollis tempCollis; // r29+0x160
        unsigned int hitBound; // r5
        float oldrad; // r8
        class xBox tmpbox; // r29+0x140
        class xBox tmpbox; // r29+0x120
        class xRay3 lr; // r29+0xF0
        class xMat3x3 mn; // r29+0xC0
        class xModelInstance * collmod; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004355B0 -> 0x004356E8
*/
// Range: 0x4355B0 -> 0x4356E8
static void xCam_worldtocyl(float & d /* r2 */, float & h /* r2 */, float & p /* r18 */, class xMat4x3 * tgt_mat /* r17 */, class xVec3 * v /* r2 */, unsigned int flags /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4355B0 -> 0x4356E8
        float lx; // r29+0x40
        float lz; // r29+0x40
        float dx__; // r29+0x40
        float dz__; // r29+0x40
        float dist2; // r29+0x40
        float dist_inv; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004356F0 -> 0x00435880
*/
// Range: 0x4356F0 -> 0x435880
static void xCam_buildbasis(class xCamera * cam /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4356F0 -> 0x435880
        float d2d; // r6
        float dx__; // r29+0x20
        float dz__; // r29+0x20
        float dist2; // r29+0x20
        float dist_inv; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00435880 -> 0x00435B0C
*/
// Range: 0x435880 -> 0x435B0C
void xCameraReset(class xCamera * cam /* r16 */, float d /* r23 */, float h /* r22 */, float pitch /* r21 */) {
    /* anonymous block */ {
        // Range: 0x435880 -> 0x435B0C
        float goal_p; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00435B10 -> 0x00435B48
*/
// Range: 0x435B10 -> 0x435B48
void xCameraExit(class xCamera * cam /* r16 */) {
    /* anonymous block */ {
        // Range: 0x435B10 -> 0x435B48
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00435B50 -> 0x00435B9C
*/
// Range: 0x435B50 -> 0x435B9C
void xCameraInit(class xCamera * cam /* r2 */) {
    /* anonymous block */ {
        // Range: 0x435B50 -> 0x435B9C
    }
}


