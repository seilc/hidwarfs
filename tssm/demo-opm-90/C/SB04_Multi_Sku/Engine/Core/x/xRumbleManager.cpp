/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRumbleManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F630 -> 0x0039F63C
*/
// Range: 0x39F630 -> 0x39F63C
void StopRumbling() {
    /* anonymous block */ {
        // Range: 0x39F630 -> 0x39F63C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRumbleManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F640 -> 0x0039F6C8
*/
// Range: 0x39F640 -> 0x39F6C8
// this: r16
void Manager::Reset() {
    /* anonymous block */ {
        // Range: 0x39F640 -> 0x39F6C8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRumbleManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F6D0 -> 0x0039F718
*/
// Range: 0x39F6D0 -> 0x39F718
class Manager & Get() {
    /* anonymous block */ {
        // Range: 0x39F6D0 -> 0x39F718
        signed char @14766; // @ 0x00637EC8
        class Manager rumbleManager; // @ 0x006ADB70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRumbleManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F720 -> 0x0039F9D8
*/
// Range: 0x39F720 -> 0x39F9D8
// this: r2
void Manager::Update(class _tagxPad * pad /* r20 */, class xVec3 & playerPos /* r19 */, float timeElapsed /* r29+0x70 */, unsigned char bPauseState /* r18 */) {
    /* anonymous block */ {
        // Range: 0x39F720 -> 0x39F9D8
        class padInfo * pInfo; // r17
        unsigned int i; // r5
        float intensity; // r20
        unsigned int i; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRumbleManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F9E0 -> 0x0039FC80
*/
// Range: 0x39F9E0 -> 0x39FC80
// this: r2
unsigned char Manager::Add(class _tagxPad * pad /* r2 */, class emitterBase * pEmitter /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39F9E0 -> 0x39FC80
        class padInfo * pInfo; // r2
        unsigned char rumbleForever; // r2
        class emitterBase * pCurrentEmitter; // r3
        unsigned int effectPriority; // r2
        class effectInternal * freeEffect; // r9
        unsigned int i; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRumbleManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039FC80 -> 0x0039FE14
*/
// Range: 0x39FC80 -> 0x39FE14
// this: r17
float effectInternal::GetIntensity(class xVec3 & playerPos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39FC80 -> 0x39FE14
        float intensity; // r29+0x4C
        class effectAsset * pAsset; // r2
        float magFraction; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xRumbleManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039FE20 -> 0x0039FF58
*/
// Range: 0x39FE20 -> 0x39FF58
// this: r2
void effectInternal::updateCameraShake(float intensity /* r29 */) {
    /* anonymous block */ {
        // Range: 0x39FE20 -> 0x39FF58
        class effectAsset * pAsset; // r2
    }
}


