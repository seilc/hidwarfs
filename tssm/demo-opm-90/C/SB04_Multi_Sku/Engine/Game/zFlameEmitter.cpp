/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFlameEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DCD30 -> 0x002DCFE0
*/
// Range: 0x2DCD30 -> 0x2DCFE0
void cb_dispatch(class xBase * to /* r2 */, unsigned int event /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DCD30 -> 0x2DCFE0
        class zFlameEmitter & e; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFlameEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DCFE0 -> 0x002DD62C
*/
// Range: 0x2DCFE0 -> 0x2DD62C
// this: r16
void zFlameEmitter::create_flames(signed int flags /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2DCFE0 -> 0x2DD62C
        float radius; // r21
        float width; // r20
        signed int ux; // r29+0xE0
        signed int uz; // r30
        class spawn_data sd; // r29+0xF0
        class xVec3 & center; // r2
        class xVec3 dx; // r29+0x1A0
        class xVec3 dz; // r29+0x190
        float hx; // r11
        float hz; // r10
        class xVec3 corner; // r29+0x180
        class handle * flame; // r21
        class handle * end_flame; // r2
        unsigned int ix; // r29+0xD0
        class xVec3 v; // r29+0x170
        unsigned int iz; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFlameEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD630 -> 0x002DD690
*/
// Range: 0x2DD630 -> 0x2DD690
void fire_reset() {
    /* anonymous block */ {
        // Range: 0x2DD630 -> 0x2DD690
        class zScene & scene; // r2
        class zFlameEmitter * it; // r7
        class zFlameEmitter * end; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFlameEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD690 -> 0x002DD6D8
*/
// Range: 0x2DD690 -> 0x2DD6D8
void render_all() {
    /* anonymous block */ {
        // Range: 0x2DD690 -> 0x2DD6D8
        class zScene & scene; // r2
        class zFlameEmitter * it; // r4
        class zFlameEmitter * end; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFlameEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD6E0 -> 0x002DD7F4
*/
// Range: 0x2DD6E0 -> 0x2DD7F4
void update_all(float dt /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x2DD6E0 -> 0x2DD7F4
        class zScene & scene; // r2
        class zFlameEmitter * it; // r17
        class zFlameEmitter * end; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFlameEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD800 -> 0x002DD93C
*/
// Range: 0x2DD800 -> 0x2DD93C
void setup_all() {
    /* anonymous block */ {
        // Range: 0x2DD800 -> 0x2DD93C
        class zScene & scene; // r2
        class zFlameEmitter * it; // r18
        class zFlameEmitter * end; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFlameEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD940 -> 0x002DDA2C
*/
// Range: 0x2DD940 -> 0x2DDA2C
void scene_exit() {
    /* anonymous block */ {
        // Range: 0x2DD940 -> 0x2DDA2C
        class zScene & scene; // r2
        class zFlameEmitter * it; // r18
        class zFlameEmitter * end; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFlameEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DDA30 -> 0x002DDA38
*/
// Range: 0x2DDA30 -> 0x2DDA38
void scene_enter() {
    /* anonymous block */ {
        // Range: 0x2DDA30 -> 0x2DDA38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFlameEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DDA40 -> 0x002DDACC
*/
// Range: 0x2DDA40 -> 0x2DDACC
// this: r4
void zFlameEmitter::get_bounding_box(class xBox & box /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DDA40 -> 0x2DDACC
        class xBox obb; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFlameEmitter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DDAD0 -> 0x002DDC04
*/
// Range: 0x2DDAD0 -> 0x2DDC04
void load(class xBase & data /* r17 */, class xDynAsset & asset /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2DDAD0 -> 0x2DDC04
    }
}


