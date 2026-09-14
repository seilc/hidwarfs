/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLOD.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C5700 -> 0x002C577C
*/
// Range: 0x2C5700 -> 0x2C577C
class zLODTable * zLOD_Get(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2C5700 -> 0x2C577C
        unsigned int i; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLOD.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C5780 -> 0x002C5A68
*/
// Range: 0x2C5780 -> 0x2C5A68
void zLOD_Update(unsigned int percent_update /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2C5780 -> 0x2C5A68
        unsigned int sManagerIndex'118; // r2
        class xVec3 * campos; // r2
        unsigned int numUpdates; // r7
        class zLODTable * lod; // r6
        class xModelInstance * model; // r2
        float camdist2; // r3
        float distscale; // r9
        signed int i; // r10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLOD.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C5A70 -> 0x002C5CD8
*/
// Range: 0x2C5A70 -> 0x2C5CD8
void zLOD_Setup(float fadeDistance /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x2C5A70 -> 0x2C5CD8
        unsigned int tmpsize; // r29+0x5C
        unsigned int i; // r16
        unsigned int j; // r19
        void * data; // r2
        unsigned int count; // r2
        class zLODTable * tableCurr; // r19
        class RpAtomic * model; // r2
        class RpAtomic * model; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLOD.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C5CE0 -> 0x002C5D1C
*/
// Range: 0x2C5CE0 -> 0x2C5D1C
static class xEnt * AddToLODList(class xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2C5CE0 -> 0x2C5D1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLOD.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C5D20 -> 0x002C5EDC
*/
// Range: 0x2C5D20 -> 0x2C5EDC
static void AddToLODList(class xEnt * ent /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2C5D20 -> 0x2C5EDC
        class xModelInstance * model; // r18
        unsigned int i; // r17
        class xModelInstance * minst; // r3
        unsigned int numextra; // r7
        float distscale; // r2
        class zDestructible * destructible; // r2
    }
}


