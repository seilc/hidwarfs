/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zVent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DF030 -> 0x002DF0DC
*/
// Range: 0x2DF030 -> 0x2DF0DC
void cbDispatch(class xBase * to /* r2 */, unsigned int event /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DF030 -> 0x2DF0DC
        class zVent & e; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zVent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DF0E0 -> 0x002DF0E8
*/
// Range: 0x2DF0E0 -> 0x2DF0E8
void load(class xBase & data /* r2 */, class xDynAsset & asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DF0E0 -> 0x2DF0E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zVent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DF0F0 -> 0x002DF2B8
*/
// Range: 0x2DF0F0 -> 0x2DF2B8
// this: r16
void zVent::changeState(enum eVentState newState /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DF0F0 -> 0x2DF2B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zVent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DF2C0 -> 0x002DF7E4
*/
// Range: 0x2DF2C0 -> 0x2DF7E4
// this: r17
void zVent::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2DF2C0 -> 0x2DF7E4
        class xParEmitter * pEmit; // r16
        class xParEmitterCustomSettings ventInfo; // r29+0x180
        class xMat4x3 * pMat; // r2
        class xVec3 ventVel; // r29+0x310
        unsigned char fIsSpongeball; // r2
        unsigned char fDamageSpongeball; // r2
        class xCollis collide; // r29+0x120
        class xBound bnd; // r29+0xD0
        class xBox box; // r29+0xB0
        class cbVentHitsBoulder cb; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zVent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DF7F0 -> 0x002DFDB4
*/
// Range: 0x2DF7F0 -> 0x2DFDB4
// this: r16
void zVent::load(class asset_type & a /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2DF7F0 -> 0x2DFDB4
    }
}


