/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B1250 -> 0x004B12A4
*/
// Range: 0x4B1250 -> 0x4B12A4
void iLightEnv(class iLight * light /* r2 */, signed int env /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B1250 -> 0x4B12A4
        unsigned int flags; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B12B0 -> 0x004B1308
*/
// Range: 0x4B12B0 -> 0x4B1308
void iLightDestroy(class iLight * light /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4B12B0 -> 0x4B1308
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B1310 -> 0x004B135C
*/
// Range: 0x4B1310 -> 0x4B135C
void iLightSetPos(class iLight * light /* r2 */, class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B1310 -> 0x4B135C
        class RwFrame * f; // r2
        class RwMatrixTag * m; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B1360 -> 0x004B1368
*/
// Range: 0x4B1360 -> 0x4B1368
void iLightSetColor(class iLight * light /* r2 */, class _xFColor * col /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B1360 -> 0x4B1368
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B1370 -> 0x004B149C
*/
// Range: 0x4B1370 -> 0x4B149C
void iLightModify(class iLight * light /* r17 */, unsigned int flags /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4B1370 -> 0x4B149C
        class RwFrame * frame; // r2
        class RwMatrixTag temp; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B14A0 -> 0x004B15C4
*/
// Range: 0x4B14A0 -> 0x4B15C4
class iLight * iLightCreate(class iLight * light /* r17 */, unsigned int type /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4B14A0 -> 0x4B15C4
        class RwFrame * frame; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B15D0 -> 0x004B15D8
*/
// Range: 0x4B15D0 -> 0x4B15D8
void iLightInit(class RpWorld * world /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B15D0 -> 0x4B15D8
    }
}


