/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zVolume.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DE720 -> 0x002DE844
*/
// Range: 0x2DE720 -> 0x2DE844
void zVolumeEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DE720 -> 0x2DE844
        class zVolume * vol; // r2
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zVolume.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DE850 -> 0x002DEE24
*/
// Range: 0x2DE850 -> 0x2DEE24
void zVolume_OccludePrecalc(class xVec3 * camPos /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2DE850 -> 0x2DEE24
        signed int i; // r21
        signed int j; // r19
        class xVec3 corner[5]; // r29+0x110
        class xVolumeAsset * a; // r2
        class PreCalcOcclude * calc; // r2
        class xVec4 locFrustVec[4]; // r29+0xD0
        float depthdot; // r3
        float camdot; // r1
    }
}


