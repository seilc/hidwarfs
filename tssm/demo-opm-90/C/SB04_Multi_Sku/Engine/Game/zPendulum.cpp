/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPendulum.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030DEF0 -> 0x0030E230
*/
// Range: 0x30DEF0 -> 0x30E230
void zPendulumEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30DEF0 -> 0x30E230
        class _zPendulum * pend; // r16
        class FloatAndVoid dist; // r29+0x2C
        class zShrapnelAsset * shrap; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPendulum.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030E230 -> 0x0030E27C
*/
// Range: 0x30E230 -> 0x30E27C
static void zPendulumTranslate(class xEnt * xent /* r18 */, class xVec3 * dpos /* r17 */, class xMat4x3 * dmat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x30E230 -> 0x30E27C
        class _zPendulum * pend; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPendulum.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030E280 -> 0x0030E288
*/
// Range: 0x30E280 -> 0x30E288
void zPendulum_Move(class _zPendulum * pend /* r2 */, class xScene * s /* r2 */, float dt /* r29 */, class xEntFrame * frame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30E280 -> 0x30E288
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPendulum.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030E290 -> 0x0030E36C
*/
// Range: 0x30E290 -> 0x30E36C
void zPendulum_Update(class _zPendulum * pend /* r16 */, class xScene * sc /* r2 */, float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x30E290 -> 0x30E36C
        class xEntMotionPenData * aspen; // r2
        float t; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPendulum.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030E370 -> 0x0030E4B0
*/
// Range: 0x30E370 -> 0x30E4B0
void zPendulum_Reset(class _zPendulum * pend /* r16 */, class xScene * sc /* r17 */) {
    /* anonymous block */ {
        // Range: 0x30E370 -> 0x30E4B0
        class xEntMotionPenData * aspen; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPendulum.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030E4B0 -> 0x0030E550
*/
// Range: 0x30E4B0 -> 0x30E550
void zPendulum_Init(class _zPendulum * pend /* r17 */, class xEntAsset * asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x30E4B0 -> 0x30E550
        class xEntMotionAsset * motionAsset; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPendulum.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030E550 -> 0x0030E558
*/
// Range: 0x30E550 -> 0x30E558
void zPendulum_Init(void * pend /* r2 */, void * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30E550 -> 0x30E558
    }
}


