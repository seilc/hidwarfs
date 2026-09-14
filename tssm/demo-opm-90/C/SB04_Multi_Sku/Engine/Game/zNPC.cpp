/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNPC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BE600 -> 0x002BE634
*/
// Range: 0x2BE600 -> 0x2BE634
void destroy_npc(class xFactoryInst * inst /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2BE600 -> 0x2BE634
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNPC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BE640 -> 0x002BE720
*/
// Range: 0x2BE640 -> 0x2BE720
class xAnimTable * create_anim_table(unsigned int brain_id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2BE640 -> 0x2BE720
        class xAnimTable * table; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNPC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BE720 -> 0x002BE7C0
*/
// Range: 0x2BE720 -> 0x2BE7C0
// this: r19
unsigned char base::get_parameter(char * name /* r18 */, char * * value /* r17 */, char * default_value /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2BE720 -> 0x2BE7C0
        char * text; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNPC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BE7C0 -> 0x002BE8A0
*/
// Range: 0x2BE7C0 -> 0x2BE8A0
// this: r19
unsigned char base::get_parameter(char * name /* r16 */, unsigned char * value /* r18 */, unsigned char default_value /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2BE7C0 -> 0x2BE8A0
        char * text; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNPC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BE8A0 -> 0x002BE91C
*/
// Range: 0x2BE8A0 -> 0x2BE91C
// this: r16
void base::update_npc(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2BE8A0 -> 0x2BE91C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNPC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BE920 -> 0x002BED2C
*/
// Range: 0x2BE920 -> 0x2BED2C
// this: r16
void base::update_bounds() {
    /* anonymous block */ {
        // Range: 0x2BE920 -> 0x2BED2C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNPC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BED30 -> 0x002BF090
*/
// Range: 0x2BED30 -> 0x2BF090
// this: r16
void base::change_bounds(float scale /* r20 */, unsigned char use_bounding_box /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2BED30 -> 0x2BF090
        class xVec3 offset; // r29+0x30
        float width; // r29+0x40
        float height; // r29+0x40
        float length; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNPC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BF090 -> 0x002BF134
*/
// Range: 0x2BF090 -> 0x2BF134
// this: r17
enum iSndHandle base::play_sound(class zAnimFxSoundGroup * sound /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2BF090 -> 0x2BF134
        unsigned int soundID; // r16
        enum iSndGroupHandle GroupToPlay; // r2
    }
}


