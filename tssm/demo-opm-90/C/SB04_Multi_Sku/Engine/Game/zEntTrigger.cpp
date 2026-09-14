/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTrigger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00311EF0 -> 0x00312104
*/
// Range: 0x311EF0 -> 0x312104
unsigned char zEntTriggerHitsSphere(class zEntTrigger & trig /* r16 */, class xSphere & o /* r2 */, class xVec3 & dir /* r2 */) {
    /* anonymous block */ {
        // Range: 0x311EF0 -> 0x312104
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTrigger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00312110 -> 0x00312118
*/
// Range: 0x312110 -> 0x312118
void zEntTriggerLoad(class zEntTrigger * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x312110 -> 0x312118
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTrigger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00312120 -> 0x00312128
*/
// Range: 0x312120 -> 0x312128
void zEntTriggerSave(class zEntTrigger * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x312120 -> 0x312128
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTrigger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00312130 -> 0x00312364
*/
// Range: 0x312130 -> 0x312364
void zEntTriggerEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */) {
    /* anonymous block */ {
        // Range: 0x312130 -> 0x312364
        class zEntTrigger * trig; // r16
        float mt; // r29+0x50
        float mt; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTrigger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00312370 -> 0x00312740
*/
// Range: 0x312370 -> 0x312740
void zEntTriggerUpdate(class zEntTrigger * trig /* r20 */, class xScene * sc /* r2 */, float dt /* r29+0x1B0 */) {
    /* anonymous block */ {
        // Range: 0x312370 -> 0x312740
        unsigned int i; // r19
        class xLinkAsset * link; // r18
        class xTriggerAsset * tasset; // r2
        class xIsect isect; // r29+0x170
        signed int collide; // r16
        class xEnt * chkEnt; // r2
        class xVec3 * chkPos; // r2
        class xVec3 xformVec; // r29+0x1A0
        class xSphere sphere; // r29+0x160
        class xIsect isect; // r29+0x130
        class xCylinder cylinder; // r29+0x110
        class xIsect isect; // r29+0xE0
        class xSphere sphere; // r29+0xD0
        class xIsect isect; // r29+0xA0
        class xLinkAsset * linkNC; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTrigger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00312740 -> 0x003129A4
*/
// Range: 0x312740 -> 0x3129A4
void zEntTriggerInit(class zEntTrigger * ent /* r17 */, class xEntAsset * asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x312740 -> 0x3129A4
        class xTriggerAsset * tasset; // r2
        class xVec3 boxUpper; // r29+0x50
        class xVec3 boxLower; // r29+0x40
        class xVec3 center; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntTrigger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003129B0 -> 0x003129B8
*/
// Range: 0x3129B0 -> 0x3129B8
void zEntTriggerInit(void * ent /* r2 */, void * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3129B0 -> 0x3129B8
    }
}


