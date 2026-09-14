/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365C50 -> 0x00365F04
*/
// Range: 0x365C50 -> 0x365F04
void zEntGetShadowParams(class xEnt * ent /* r2 */, class xVec3 * center /* r2 */, float * radius /* r2 */, float * strength /* r2 */, enum radius_enum rtype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x365C50 -> 0x365F04
        class xBox * bbox; // r2
        float cacheFudgeFactor; // r3
        float r; // r1
        class xVec3 * lower; // r2
        class xVec3 * upper; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365F10 -> 0x00365FA0
*/
// Range: 0x365F10 -> 0x365FA0
char * zParamGetString(class xModelAssetParam * param /* r2 */, unsigned int size /* r2 */, char * tok /* r2 */, char * def /* r18 */) {
    /* anonymous block */ {
        // Range: 0x365F10 -> 0x365FA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365FA0 -> 0x00366030
*/
// Range: 0x365FA0 -> 0x366030
class xModelAssetParam * zEntGetModelParams(unsigned int assetID /* r2 */, unsigned short * size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x365FA0 -> 0x366030
        unsigned int bufsize; // r29+0x2C
        unsigned int tempsize; // r2
        void * info; // r2
        class xModelAssetInfo * minf; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00366030 -> 0x00366328
*/
// Range: 0x366030 -> 0x366328
void zEntAnimEvent_AutoAnim(class zEnt * ent /* r19 */, unsigned int animEvent /* r18 */, float * animParam /* r20 */) {
    /* anonymous block */ {
        // Range: 0x366030 -> 0x366328
        class xAnimSingle * single; // r17
        signed int anum; // r2
        class xAnimTable * tab; // r2
        class xAnimState * ast; // r2
        class xAnimTable * tab; // r2
        class xAnimState * ast; // r2
        signed int anum1; // r2
        signed int anum2; // r2
        signed int anum; // r2
        class xAnimTable * tab; // r2
        class xAnimState * ast; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00366330 -> 0x00366378
*/
// Range: 0x366330 -> 0x366378
void zEntAnimEvent(class zEnt * ent /* r2 */, unsigned int animEvent /* r5 */, float * animParam /* r2 */) {
    /* anonymous block */ {
        // Range: 0x366330 -> 0x366378
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00366380 -> 0x00366720
*/
// Range: 0x366380 -> 0x366720
void zEntAnimEventCore(class xModelInstance * model /* r2 */, class xAnimTable * atbl /* r16 */, unsigned int animEvent /* r2 */, float * animParam /* r17 */) {
    /* anonymous block */ {
        // Range: 0x366380 -> 0x366720
        class xAnimPlay * play; // r19
        class xAnimSingle * single; // r18
        signed int anum; // r2
        char name[12]; // r29+0xA0
        class xAnimState * ast; // r16
        char name[12]; // r29+0x90
        class xAnimState * ast; // r2
        signed int anum1; // r2
        signed int anum2; // r2
        char name[12]; // r29+0x80
        class xAnimState * ast; // r2
        signed int anum; // r17
        float prob; // r20
        char name[12]; // r29+0x70
        class xAnimState * ast; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00366720 -> 0x0036679C
*/
// Range: 0x366720 -> 0x36679C
void zEntParseModelInfo(class xEnt * ent /* r17 */, unsigned int assetID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x366720 -> 0x36679C
        unsigned int bufsize; // r29+0x3C
        void * info; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003667A0 -> 0x003669EC
*/
// Range: 0x3667A0 -> 0x3669EC
class xModelInstance * zEntRecurseModelInfo(void * info /* r2 */, class xEnt * ent /* r21 */) {
    /* anonymous block */ {
        // Range: 0x3667A0 -> 0x3669EC
        unsigned int i; // r20
        unsigned int bufsize; // r29+0x17C
        class RpAtomic * imodel; // r19
        class xModelInstance * tempInst[64]; // r29+0x70
        class xModelAssetInfo * zinfo; // r18
        class xModelAssetInst * zinst; // r17
        class xAnimTable * table; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003669F0 -> 0x00366AA8
*/
// Range: 0x3669F0 -> 0x366AA8
void zEntEventAllOfType(unsigned int toEvent /* r20 */, unsigned int type /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3669F0 -> 0x366AA8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00366AB0 -> 0x00366B80
*/
// Range: 0x366AB0 -> 0x366B80
void zEntEventAll(class xBase * from /* r21 */, unsigned int fromEvent /* r20 */, unsigned int toEvent /* r19 */, float * toParam /* r22 */) {
    /* anonymous block */ {
        // Range: 0x366AB0 -> 0x366B80
        class zScene * s; // r18
        unsigned short i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00366B80 -> 0x00366B88
*/
// Range: 0x366B80 -> 0x366B88
void zEntUpdate(class zEnt * ent /* r2 */, class zScene * scene /* r2 */, float elapsedSec /* r29 */) {
    /* anonymous block */ {
        // Range: 0x366B80 -> 0x366B88
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00366B90 -> 0x00366D7C
*/
// Range: 0x366B90 -> 0x366D7C
void zEntReset(class zEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x366B90 -> 0x366D7C
        class xAnimState * ast; // r2
        class xAnimSingle * single; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00366D80 -> 0x00366D88
*/
// Range: 0x366D80 -> 0x366D88
void zEntLoad(class zEnt * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x366D80 -> 0x366D88
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00366D90 -> 0x00366D98
*/
// Range: 0x366D90 -> 0x366D98
void zEntSave(class zEnt * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x366D90 -> 0x366D98
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00366DA0 -> 0x00366EB0
*/
// Range: 0x366DA0 -> 0x366EB0
void zEntSetup(class zEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x366DA0 -> 0x366EB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00366EB0 -> 0x0036773C
*/
// Range: 0x366EB0 -> 0x36773C
void zEntInit(class zEnt * ent /* r17 */, class xEntAsset * asset /* r16 */, unsigned int type /* r18 */) {
    /* anonymous block */ {
        // Range: 0x366EB0 -> 0x36773C
        signed int num_used; // r2
        class xAnimState * ast; // r2
        class xAnimSingle * single; // r2
    }
}


