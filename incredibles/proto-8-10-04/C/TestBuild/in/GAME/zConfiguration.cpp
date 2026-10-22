/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
static char * player_model_info[11]; // size: 0x2C, address: 0x511D30
static char * player_lorez_model[11]; // size: 0x2C, address: 0x511D60
static unsigned int player_tag[11]; // size: 0x2C, address: 0x5F4C60
static class zConfig_ScenePlayer_MapEntry scene_player_map[128]; // size: 0x2400, address: 0x677500
static signed int scene_player_map_max; // size: 0x4, address: 0x61227C
enum _PLAYER_ENUM {
    MR_INCREDIBLE_YOUNG = 0,
    MR_INCREDIBLE_DISGUISED = 1,
    MR_INCREDIBLE_OLD_FAT_BLUE = 2,
    MR_INCREDIBLE_OLD_FAT_RED = 3,
    MR_INCREDIBLE_OLD_FIT = 4,
    ELASTI_GIRL_YOUNG = 5,
    ELASTI_GIRL_OLD = 6,
    DASH_REGULAR = 7,
    DASH_COSTUMED = 8,
    INCREDI_BALL = 9,
    VIOLET = 10,
    PLAYER_COUNT = 11,
};
// total size: 0x48
class zConfig_ScenePlayer_MapEntry {
    // Members
public:
    unsigned int scene_tag; // offset 0x0, size 0x4
    unsigned int scene_mask; // offset 0x4, size 0x4
    enum _PLAYER_ENUM player_enum[4]; // offset 0x8, size 0x10
    unsigned int pointerToPlayer[10]; // offset 0x18, size 0x28
    signed int playerCount; // offset 0x40, size 0x4
    signed int pointerCount; // offset 0x44, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E480 -> 0x0026E51C
*/
// Range: 0x26E480 -> 0x26E51C
enum _PLAYER_ENUM zConfig_getPlayerEnum(unsigned int sceneID /* r2 */, signed int playerIdx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26E480 -> 0x26E51C
        signed int i; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E520 -> 0x0026E594
*/
// Range: 0x26E520 -> 0x26E594
unsigned int zConfig_getPlayerLorezModelID(unsigned int _tag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26E520 -> 0x26E594
        signed int i; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E5A0 -> 0x0026E5EC
*/
// Range: 0x26E5A0 -> 0x26E5EC
char * zConfig_getPlayerModelInfoString(unsigned int _tag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26E5A0 -> 0x26E5EC
        signed int i; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E5F0 -> 0x0026E6B0
*/
// Range: 0x26E5F0 -> 0x26E6B0
unsigned int zConfig_getPlayerTag(unsigned int sceneID /* r2 */, signed int playerIdx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26E5F0 -> 0x26E6B0
        signed int i; // r9
        unsigned int mask; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E6B0 -> 0x0026E84C
*/
// Range: 0x26E6B0 -> 0x26E84C
unsigned int zConfig_findNextScene(unsigned int sceneID /* r2 */, unsigned int numChars /* r2 */, unsigned int & startIdx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26E6B0 -> 0x26E84C
        unsigned int i; // r24
        char c0; // r2
        char c1; // r2
        char c2; // r2
        char c3; // r2
        char s0; // r2
        char s1; // r2
        char s2; // r2
        char s3; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E850 -> 0x0026E9E8
*/
// Range: 0x26E850 -> 0x26E9E8
void zConfig_setScenePlayer_MapEntry(unsigned int sceneID /* r2 */, unsigned int _player_tag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26E850 -> 0x26E9E8
        signed int i; // r8
        unsigned int sceneMask; // r3
        signed int i; // r11
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E9F0 -> 0x0026EA88
*/
// Range: 0x26E9F0 -> 0x26EA88
void zConfig_setScenePlayer_MapEntry_Fixed(unsigned int sceneID /* r2 */, unsigned int _player_tag /* r2 */, unsigned int idx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26E9F0 -> 0x26EA88
        signed int i; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026EA90 -> 0x0026EACC
*/
// Range: 0x26EA90 -> 0x26EACC
unsigned int zConfig_getPlayerEnumIdx(unsigned int _player_tag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26EA90 -> 0x26EACC
        unsigned int i; // r2
    }
}


