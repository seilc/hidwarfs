/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParSys.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AA350 -> 0x003AA488
*/
// Range: 0x3AA350 -> 0x3AA488
void xParSysRender(class xBase * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3AA350 -> 0x3AA488
        class xParGroup * g; // r18
        class xParSys * s; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParSys.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AA490 -> 0x003AA5B0
*/
// Range: 0x3AA490 -> 0x3AA5B0
static void xParGroupUpdateR(class xParSys * s /* r19 */, class xParGroup * g /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3AA490 -> 0x3AA5B0
        unsigned int i; // r17
        class xParCmd * cmd; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParSys.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AA5B0 -> 0x003AA7E0
*/
// Range: 0x3AA5B0 -> 0x3AA7E0
void xParSysUpdate(class xBase * to /* r2 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3AA5B0 -> 0x3AA7E0
        class xParSys * s; // r20
        class xParSys * parent; // r19
        class xParGroup * g; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParSys.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AA7E0 -> 0x003AA998
*/
// Range: 0x3AA7E0 -> 0x3AA998
void xParSysEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3AA7E0 -> 0x3AA998
        class xParSys * t; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParSys.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AA9A0 -> 0x003AAA50
*/
// Range: 0x3AA9A0 -> 0x3AAA50
void xParSysExit(class xParSys * t /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3AA9A0 -> 0x3AAA50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParSys.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AAA50 -> 0x003AAAB0
*/
// Range: 0x3AAA50 -> 0x3AAAB0
void xParSysSetup(class xParSys * t /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3AAA50 -> 0x3AAAB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParSys.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AAAB0 -> 0x003AAE94
*/
// Range: 0x3AAAB0 -> 0x3AAE94
void xParSysInit(class xBase * b /* r17 */, class xParSysAsset * tasset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3AAAB0 -> 0x3AAE94
        class xParSys * t; // r2
        unsigned int i; // r3
        unsigned char * cmdPtr; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParSys.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AAEA0 -> 0x003AAEA8
*/
// Range: 0x3AAEA0 -> 0x3AAEA8
void xParSysInit(void * b /* r2 */, void * tasset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3AAEA0 -> 0x3AAEA8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParSys.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AAEB0 -> 0x003AAF10
*/
// Range: 0x3AAEB0 -> 0x3AAF10
static void render_par_sprite(void * data /* r2 */, class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3AAEB0 -> 0x3AAF10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xParSys.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AAF10 -> 0x003AB754
*/
// Range: 0x3AAF10 -> 0x3AB754
static void par_sprite_update(class xParSys & sys /* r2 */, class xParGroup & group /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3AAF10 -> 0x3AB754
        unsigned int pivot; // r2
        class xVec3 offset_right; // r29+0x170
        class xVec3 offset_up; // r29+0x160
        class ptank_pool__pos_color_size_uv2 pool; // r29+0xB0
        signed int min_alpha; // r23
        class xParCmdTex * tex; // r20
        class xPar * p; // r19
        class xVec3 & loc; // r4
    }
}


