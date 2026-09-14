/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntButton.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003648D0 -> 0x00364F7C
*/
// Range: 0x3648D0 -> 0x364F7C
void zEntButtonEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r17 */, class xBase * toParamWidget /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3648D0 -> 0x364F7C
        class _zEntButton * s; // r16
        class FloatAndVoid dist; // r29+0x4C
        class zShrapnelAsset * shrap; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntButton.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00364F80 -> 0x0036503C
*/
// Range: 0x364F80 -> 0x36503C
void zEntButton_SceneUpdate(float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x364F80 -> 0x36503C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntButton.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365040 -> 0x003651F8
*/
// Range: 0x365040 -> 0x3651F8
void zEntButton_Hold(class _zEntButton * ent /* r16 */, unsigned int mask /* r2 */) {
    /* anonymous block */ {
        // Range: 0x365040 -> 0x3651F8
        class xVec3 * player; // r2
        class xBound * bound; // r2
        class xVec3 lv; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntButton.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365200 -> 0x0036535C
*/
// Range: 0x365200 -> 0x36535C
void zEntButton_Press(class _zEntButton * ent /* r17 */, unsigned int mask /* r16 */) {
    /* anonymous block */ {
        // Range: 0x365200 -> 0x36535C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntButton.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365360 -> 0x0036540C
*/
// Range: 0x365360 -> 0x36540C
void zEntButton_Render(class _zEntButton * ent /* r17 */) {
    /* anonymous block */ {
        // Range: 0x365360 -> 0x36540C
        class xModelInstance * model; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntButton.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365410 -> 0x003656F0
*/
// Range: 0x365410 -> 0x3656F0
void zEntButton_Update(class _zEntButton * ent /* r16 */, class xScene * sc /* r2 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x365410 -> 0x3656F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntButton.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003656F0 -> 0x003657D0
*/
// Range: 0x3656F0 -> 0x3657D0
void zEntButton_Reset(class _zEntButton * ent /* r16 */, class xScene * sc /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3656F0 -> 0x3657D0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntButton.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003657D0 -> 0x0036584C
*/
// Range: 0x3657D0 -> 0x36584C
void zEntButton_Load(class _zEntButton * ent /* r17 */, class xSerial * s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3657D0 -> 0x36584C
        signed int pressed; // r29+0x3C
        signed int pushing; // r29+0x38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntButton.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365850 -> 0x003658D4
*/
// Range: 0x365850 -> 0x3658D4
void zEntButton_Save(class _zEntButton * ent /* r17 */, class xSerial * s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x365850 -> 0x3658D4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntButton.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003658E0 -> 0x00365A10
*/
// Range: 0x3658E0 -> 0x365A10
void zEntButton_Setup(class _zEntButton * ent /* r18 */, class xScene * sc /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3658E0 -> 0x365A10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntButton.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365A10 -> 0x00365AA0
*/
// Range: 0x365A10 -> 0x365AA0
void zEntButton_Move(class _zEntButton * ent /* r2 */, class xScene * s /* r2 */, float dt /* r29 */, class xEntFrame * frame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x365A10 -> 0x365AA0
        class xEntFrame * dframe; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntButton.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365AA0 -> 0x00365C38
*/
// Range: 0x365AA0 -> 0x365C38
void zEntButton_Init(class _zEntButton * ent /* r17 */, class xEntAsset * asset /* r19 */) {
    /* anonymous block */ {
        // Range: 0x365AA0 -> 0x365C38
        class zEntButtonAsset * passet; // r2
        class xEntMotionAsset * emasset; // r16
        unsigned int bufsize; // r29+0x5C
        void * info; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntButton.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365C40 -> 0x00365C48
*/
// Range: 0x365C40 -> 0x365C48
void zEntButton_Init(void * ent /* r2 */, void * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x365C40 -> 0x365C48
    }
}


