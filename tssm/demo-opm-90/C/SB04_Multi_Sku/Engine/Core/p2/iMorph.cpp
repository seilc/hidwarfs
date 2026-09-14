/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMorph.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AA9C0 -> 0x004AAAF4
*/
// Range: 0x4AA9C0 -> 0x4AAAF4
void FastS16weight4(float * dest /* r2 */, signed short * * v_array /* r2 */, signed short * weight /* r2 */, signed int count /* r2 */, float scale /* r29 */) {
    /* anonymous block */ {
        // Range: 0x4AA9C0 -> 0x4AAAF4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMorph.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AAB00 -> 0x004AABF0
*/
// Range: 0x4AAB00 -> 0x4AABF0
void FastS16weight2(float * dest /* r2 */, signed short * * v_array /* r2 */, signed short * weight /* r2 */, signed int count /* r2 */, float scale /* r29 */) {
    /* anonymous block */ {
        // Range: 0x4AAB00 -> 0x4AABF0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMorph.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AABF0 -> 0x004AACC0
*/
// Range: 0x4AABF0 -> 0x4AACC0
void FastS16unpack(float * dest /* r2 */, signed short * v /* r2 */, signed int count /* r2 */, float scale /* r29 */) {
    /* anonymous block */ {
        // Range: 0x4AABF0 -> 0x4AACC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMorph.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AACC0 -> 0x004AACF4
*/
// Range: 0x4AACC0 -> 0x4AACF4
void iMorphRender(class RpAtomic * model /* r2 */, class RwMatrixTag * mat /* r2 */, signed short * * v_array /* r2 */, signed short * weight /* r2 */, unsigned int normals /* r2 */, float scale /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x4AACC0 -> 0x4AACF4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMorph.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AAD00 -> 0x004AAD88
*/
// Range: 0x4AAD00 -> 0x4AAD88
void iMorphOptimize(class RpAtomic * model /* r2 */, signed int normals /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AAD00 -> 0x4AAD88
        class RpGeometry * geom; // r2
        signed int usridx; // r2
        class RpUserDataArray * usr; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMorph.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AAD90 -> 0x004AB8E4
*/
// Range: 0x4AAD90 -> 0x4AB8E4
static void MorphCommon(class RpAtomic * model /* r22 */, class RwMatrixTag * mat /* r20 */, signed short * * v_array /* r29+0x11C */, signed short * weight /* r2 */, unsigned int normals /* r2 */, float scale /* r20 */, signed int dorender /* r29+0x118 */) {
    /* anonymous block */ {
        // Range: 0x4AAD90 -> 0x4AB8E4
        class RpGeometry * s_geom'450; // r2
        class RpMorphTarget * s_tgt'449; // r3
        float * s_nTemp'448; // r2
        unsigned int i; // r9
        unsigned int a; // r19
        signed short wa[4]; // r29+0x138
        signed short * va[4]; // r29+0x120
        signed int wsum; // r18
        class RwV3d * vold; // r2
        class RwV3d * nold; // r29+0x100
        signed int lockMode; // r23
        void * temp_scratch; // r30
        class RpUserDataArray * usr; // r2
        class DirtyMorph * dm; // r7
    }
}


