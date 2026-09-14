/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPtankPool.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A5310 -> 0x003A56FC
*/
// Range: 0x3A5310 -> 0x3A56FC
// this: r17
void ptank_pool::grab_block(enum ptank_group_type type /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A5310 -> 0x3A56FC
        class group_data & group; // r2
        class ptank_context * * end; // r2
        class ptank_context * * it; // r5
        class ptank_context * * it; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPtankPool.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A5700 -> 0x003A5984
*/
// Range: 0x3A5700 -> 0x3A5984
void xPTankPoolRender() {
    /* anonymous block */ {
        // Range: 0x3A5700 -> 0x3A5984
        class ptank_context * ptanks; // r20
        class ptank_context * ptank; // r19
        class group_data * g; // r18
        class group_data * endg; // r2
        class ptank_context * p; // r17
        class ptank_context * endp; // r2
        signed int render_flags; // r29+0x7C
        class ptank_context * end_ptank; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPtankPool.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A5990 -> 0x003A5998
*/
// Range: 0x3A5990 -> 0x3A5998
void xPTankPoolFreeEnable(unsigned char freeme /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A5990 -> 0x3A5998
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPtankPool.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A59A0 -> 0x003A5A74
*/
// Range: 0x3A59A0 -> 0x3A5A74
void xPTankPoolSceneExit() {
    /* anonymous block */ {
        // Range: 0x3A59A0 -> 0x3A5A74
        class group_data * g; // r18
        class group_data * endg; // r2
        class ptank_context * p; // r17
        class ptank_context * endp; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPtankPool.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A5A80 -> 0x003A5BFC
*/
// Range: 0x3A5A80 -> 0x3A5BFC
void xPTankPoolSceneEnter() {
    /* anonymous block */ {
        // Range: 0x3A5A80 -> 0x3A5BFC
        class group_data * it; // r19
        class group_data * end; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPtankPool.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A5C00 -> 0x003A5CAC
*/
// Range: 0x3A5C00 -> 0x3A5CAC
static signed int compare_ptanks(void * e1 /* r2 */, void * e2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A5C00 -> 0x3A5CAC
        class ptank_context * p1; // r2
        class ptank_context * p2; // r2
        class RwTexture * tex1; // r2
        class RwTexture * tex2; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPtankPool.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A5CB0 -> 0x003A5DE0
*/
// Range: 0x3A5CB0 -> 0x3A5DE0
static void render_ptank(class ptank_context & context /* r18 */, signed int & render_flags /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3A5CB0 -> 0x3A5DE0
        signed int xor_flags; // r2
        signed int noztest; // r2
        signed int zwrite; // r2
        unsigned int oldtest; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPtankPool.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A5DE0 -> 0x003A5F38
*/
// Range: 0x3A5DE0 -> 0x3A5F38
static class RpAtomic * create_ptank(unsigned int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A5DE0 -> 0x3A5F38
        class RpAtomic * ptank; // r17
        class RwFrame * frame; // r2
        class RwTexCoords uv[2]; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPtankPool.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A5F40 -> 0x003A6020
*/
// Range: 0x3A5F40 -> 0x3A6020
static void init_groups() {
    /* anonymous block */ {
        // Range: 0x3A5F40 -> 0x3A6020
        unsigned int total; // r5
        class group_data * it; // r4
        class group_data * end; // r2
        unsigned char * mem; // r18
        class group_data * it; // r17
        class group_data * end; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPtankPool.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6020 -> 0x003A6170
*/
// Range: 0x3A6020 -> 0x3A6170
static void sort_buckets(class group_data & group /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A6020 -> 0x3A6170
        class ptank_context * it; // r6
        class ptank_context * endp; // r2
        class RwTexture * texture; // r2
        class ptank_context * * bucket; // r5
        class ptank_context * * end; // r2
        class ptank_context * front; // r2
    }
}


