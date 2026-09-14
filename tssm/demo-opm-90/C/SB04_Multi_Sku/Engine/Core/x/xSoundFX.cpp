/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSoundFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00454240 -> 0x00454288
*/
// Range: 0x454240 -> 0x454288
class xSoundFX * xSoundFXGet(unsigned int soundfxID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x454240 -> 0x454288
        class zScene * s; // r2
        signed int count; // r2
        class xSoundFX * sfx; // r2
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSoundFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00454290 -> 0x00454450
*/
// Range: 0x454290 -> 0x454450
static void xSoundFXPlay(class xSoundFX * t /* r17 */) {
    /* anonymous block */ {
        // Range: 0x454290 -> 0x454450
        class xEnt * ent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSoundFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00454450 -> 0x00454798
*/
// Range: 0x454450 -> 0x454798
void xSoundFXEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r16 */) {
    /* anonymous block */ {
        // Range: 0x454450 -> 0x454798
        class xSoundFX * t; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSoundFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004547A0 -> 0x00454910
*/
// Range: 0x4547A0 -> 0x454910
void xSoundFXInit(class xSoundFX * t /* r17 */, class xSoundFXAsset * asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4547A0 -> 0x454910
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSoundFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00454910 -> 0x00454918
*/
// Range: 0x454910 -> 0x454918
void xSoundFXInit(void * t /* r2 */, void * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x454910 -> 0x454918
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSoundFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00454920 -> 0x00454F5C
*/
// Range: 0x454920 -> 0x454F5C
void xSoundFXUpdateEnvironmentalStreamSounds(class xSoundFX * pSoundFXList /* r20 */, unsigned int numSounds /* r19 */) {
    /* anonymous block */ {
        // Range: 0x454920 -> 0x454F5C
        unsigned int i; // r17
        class xVec3 playPos; // r29+0xD0
        class xVec3 delta; // r29+0xC0
        signed int j; // r5
        signed int j; // r5
        signed int j; // r6
        unsigned char found; // r7
        signed int j; // r6
        signed int j; // r6
        float bestDist2[1]; // @ 0x006382A0
        class xSoundFX * bestSoundFX[1]; // @ 0x0063829C
    }
}


