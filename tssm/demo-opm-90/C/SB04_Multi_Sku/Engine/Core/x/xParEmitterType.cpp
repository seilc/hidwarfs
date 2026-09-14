/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitterType.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003ABCB0 -> 0x003AEC04
*/
// Range: 0x3ABCB0 -> 0x3AEC04
void xParEmitterEmitEntBone(class xPar * p /* r19 */, class xParEmitterAsset * a /* r18 */, class xMat4x3 & mat /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3ABCB0 -> 0x3AEC04
        signed int left'2058; // r2
        unsigned int * next'2057; // r2
        class xPEEntBone & region; // r2
        class xVec3 offset; // r29+0x320
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitterType.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AEC10 -> 0x003AEE14
*/
// Range: 0x3AEC10 -> 0x3AEE14
void xParEmitterTransformEntBone(class xVec3 & loc /* r2 */, class xVec3 & vel /* r2 */, class xParEmitterAsset & a /* r2 */, class xMat4x3 & mat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3AEC10 -> 0x3AEE14
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitterType.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AEE20 -> 0x003AF828
*/
// Range: 0x3AEE20 -> 0x3AF828
void xParEmitterEmitEntity(class xPar * p /* r17 */, class xParEmitterAsset * a /* r16 */, class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3AEE20 -> 0x3AF828
        signed int left'497; // r2
        unsigned int * next'496; // r7
        unsigned int size; // r5
        class xModelInstance * model; // r4
        class xVec3 loc; // r29+0x70
        unsigned int which; // r2
        class xModelInstance * model; // r3
        unsigned int size; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitterType.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AF830 -> 0x003B0574
*/
// Range: 0x3AF830 -> 0x3B0574
void xParEmitterEmitVolume(class xPar * p /* r17 */, class xParEmitterAsset * a /* r16 */, class xVolume * vol /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3AF830 -> 0x3B0574
        signed int left'636; // r2
        unsigned int * next'635; // r6
        class xBound * b; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitterType.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B0580 -> 0x003B1A78
*/
// Range: 0x3B0580 -> 0x3B1A78
void xParEmitterEmitSphereEdge(class xPar * p /* r17 */, class xParEmitterAsset * a /* r16 */, signed int subtype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3B0580 -> 0x3B1A78
        signed int left'990; // r2
        unsigned int * next'989; // r5
        class xVec3 offset; // r29+0xA0
        class xMat3x3 mat_rot; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitterType.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B1A80 -> 0x003B2ABC
*/
// Range: 0x3B1A80 -> 0x3B2ABC
void xParEmitterEmitLine(class xPar * p /* r17 */, class xParEmitterAsset * a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3B1A80 -> 0x3B2ABC
        signed int left'732; // r2
        unsigned int * next'731; // r5
        class xVec3 vec; // r29+0xD0
        float len; // r29+0xE0
        float rand_len; // r29+0xE0
        float yaw; // r21
        float pitch; // r20
        class xVec3 dir; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitterType.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B2AC0 -> 0x003B3650
*/
// Range: 0x3B2AC0 -> 0x3B3650
void xParEmitterEmitRectEdge(class xPar * p /* r16 */, class xParEmitterAsset * a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3B2AC0 -> 0x3B3650
        signed int left'550; // r2
        unsigned int * next'549; // r6
        float val; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitterType.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B3650 -> 0x003B422C
*/
// Range: 0x3B3650 -> 0x3B422C
void xParEmitterEmitCircle(class xPar * p /* r17 */, class xParEmitterAsset * a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3B3650 -> 0x3B422C
        signed int left'551; // r2
        unsigned int * next'550; // r5
        float rot_amount; // r20
        float dt_radius; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParEmitterType.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003B4230 -> 0x003B4C60
*/
// Range: 0x3B4230 -> 0x3B4C60
void xParEmitterEmitCircleEdge(class xPar * p /* r17 */, class xParEmitterAsset * a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3B4230 -> 0x3B4C60
        signed int left'468; // r2
        unsigned int * next'467; // r5
        float rot_amount; // r20
        float dt_radius; // r29+0x80
    }
}


