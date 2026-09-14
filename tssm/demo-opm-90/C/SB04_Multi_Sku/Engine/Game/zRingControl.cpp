/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRingControl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00300EF0 -> 0x00300F14
*/
// Range: 0x300EF0 -> 0x300F14
unsigned char IsRingChallengeActive() {
    /* anonymous block */ {
        // Range: 0x300EF0 -> 0x300F14
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRingControl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00300F20 -> 0x00301054
*/
// Range: 0x300F20 -> 0x301054
// this: r2
class xMat4x3 * zRingControl::GetPlayerToCheck() {
    /* anonymous block */ {
        // Range: 0x300F20 -> 0x301054
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRingControl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00301060 -> 0x00301730
*/
// Range: 0x301060 -> 0x301730
// this: r17
void zRingControl::Update(float dt /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x301060 -> 0x301730
        class xMat4x3 * playerMatrix; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRingControl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00301730 -> 0x00301A08
*/
// Range: 0x301730 -> 0x301A08
// this: r16
void zRingControl::Reset() {
    /* anonymous block */ {
        // Range: 0x301730 -> 0x301A08
        unsigned int i; // r17
        char errorMsg[100]; // r29+0x60
        class RpAtomic * tempInstance; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRingControl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00301A10 -> 0x00301BA4
*/
// Range: 0x301A10 -> 0x301BA4
void EventHandler(class xBase * to /* r2 */, unsigned int event /* r2 */) {
    /* anonymous block */ {
        // Range: 0x301A10 -> 0x301BA4
        class zRingControl & ringControl; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRingControl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00301BB0 -> 0x00301C4C
*/
// Range: 0x301BB0 -> 0x301C4C
void Load(class xBase & data /* r17 */, class xDynAsset & asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x301BB0 -> 0x301C4C
    }
}


