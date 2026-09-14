/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xUpdateCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00447AF0 -> 0x00447BCC
*/
// Range: 0x447AF0 -> 0x447BCC
void xUpdateCull_Reset(class xUpdateCullMgr * m /* r18 */) {
    /* anonymous block */ {
        // Range: 0x447AF0 -> 0x447BCC
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xUpdateCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00447BD0 -> 0x00447C48
*/
// Range: 0x447BD0 -> 0x447C48
void xUpdateCull_SetCB(class xUpdateCullMgr * m /* r2 */, void * entity /* r2 */, unsigned int (* cb)(void *, void *) /* r2 */, void * cbdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x447BD0 -> 0x447C48
        unsigned int i; // r11
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xUpdateCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00447C50 -> 0x0044807C
*/
// Range: 0x447C50 -> 0x44807C
void xUpdateCull_Update(class xUpdateCullMgr * m /* r17 */, unsigned int percent_update /* r2 */) {
    /* anonymous block */ {
        // Range: 0x447C50 -> 0x44807C
        signed int numiters; // r16
        unsigned int i; // r21
        class xUpdateCullEnt * cent; // r18
        unsigned int result; // r2
        class xUpdateCullGroup * grp; // r2
        class xUpdateCullEnt * curr; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xUpdateCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00448080 -> 0x00448650
*/
// Range: 0x448080 -> 0x448650
class xUpdateCullMgr * xUpdateCull_Init(void * * ent /* r29+0xE0 */, unsigned int entCount /* r16 */, class xGroup * * group /* r22 */, unsigned int groupCount /* r29+0xDC */) {
    /* anonymous block */ {
        // Range: 0x448080 -> 0x448650
        void * * tempEnt; // r29+0xD8
        unsigned int tempCount; // r30
        unsigned int idx; // r5
        unsigned int i; // r23
        unsigned int j; // r18
        unsigned int k; // r6
        unsigned int gcnt; // r2
        unsigned int entsInThisGroup; // r21
        unsigned int entsInGroups; // r19
        unsigned int nonEmptyGroups; // r20
        unsigned int x; // r9
        unsigned char * inGroupArray; // r29+0xD4
        class xBase * base; // r2
        unsigned int mgrCount; // r2
        class xUpdateCullMgr * m; // r21
        unsigned int grpIndex; // r20
        unsigned int mgrIndex; // r19
        unsigned int startIndex; // r18
        class xBase * base; // r2
        class xUpdateCullEnt * * prevPtr; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xUpdateCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00448650 -> 0x00448700
*/
// Range: 0x448650 -> 0x448700
unsigned int xUpdateCull_DistanceSquaredCB(void * ent /* r2 */, void * cbdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x448650 -> 0x448700
        class FloatAndVoid fandv; // r29+0xC
        class xVec3 * campos; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xUpdateCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00448700 -> 0x00448708
*/
// Range: 0x448700 -> 0x448708
unsigned int xUpdateCull_AlwaysTrueCB() {
    /* anonymous block */ {
        // Range: 0x448700 -> 0x448708
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xUpdateCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00448710 -> 0x004487B4
*/
// Range: 0x448710 -> 0x4487B4
static void xUpdateCull_Swap(class xUpdateCullMgr * m /* r2 */, unsigned int a /* r2 */, unsigned int b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x448710 -> 0x4487B4
        class xUpdateCullEnt * cullA; // r2
        class xUpdateCullEnt * cullB; // r10
        class xUpdateCullEnt * curr; // r3
        void * tmpent; // r2
        class xUpdateCullEnt * tmpmgr; // r2
    }
}


