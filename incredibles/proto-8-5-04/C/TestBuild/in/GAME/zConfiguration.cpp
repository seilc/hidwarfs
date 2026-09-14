/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
static char * player_model_info[11]; // size: 0x2C, address: 0x509650
static char * player_lorez_model[11]; // size: 0x2C, address: 0x509680
static unsigned int player_tag[11]; // size: 0x2C, address: 0x5EC2F0
static class zConfig_ScenePlayer_MapEntry scene_player_map[128]; // size: 0x2400, address: 0x680080
static signed int scene_player_map_max; // size: 0x4, address: 0x608E6C
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

/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026B860 -> 0x0026B8FC
*/
// Range: 0x26B860 -> 0x26B8FC
enum _PLAYER_ENUM zConfig_getPlayerEnum(unsigned int sceneID /* r2 */, signed int playerIdx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26B860 -> 0x26B8FC
        signed int i; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026B900 -> 0x0026B974
*/
// Range: 0x26B900 -> 0x26B974
unsigned int zConfig_getPlayerLorezModelID(unsigned int _tag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26B900 -> 0x26B974
        signed int i; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026B980 -> 0x0026B9CC
*/
// Range: 0x26B980 -> 0x26B9CC
char * zConfig_getPlayerModelInfoString(unsigned int _tag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26B980 -> 0x26B9CC
        signed int i; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026B9D0 -> 0x0026BA90
*/
// Range: 0x26B9D0 -> 0x26BA90
unsigned int zConfig_getPlayerTag(unsigned int sceneID /* r2 */, signed int playerIdx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26B9D0 -> 0x26BA90
        signed int i; // r9
        unsigned int mask; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026BA90 -> 0x0026BC2C
*/
// Range: 0x26BA90 -> 0x26BC2C
unsigned int zConfig_findNextScene(unsigned int sceneID /* r2 */, unsigned int numChars /* r2 */, unsigned int & startIdx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26BA90 -> 0x26BC2C
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
    Code range: 0x0026BC30 -> 0x0026BDC8
*/
// Range: 0x26BC30 -> 0x26BDC8
void zConfig_setScenePlayer_MapEntry(unsigned int sceneID /* r2 */, unsigned int _player_tag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26BC30 -> 0x26BDC8
        signed int i; // r8
        unsigned int sceneMask; // r3
        signed int i; // r11
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026BDD0 -> 0x0026BE68
*/
// Range: 0x26BDD0 -> 0x26BE68
void zConfig_setScenePlayer_MapEntry_Fixed(unsigned int sceneID /* r2 */, unsigned int _player_tag /* r2 */, unsigned int idx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26BDD0 -> 0x26BE68
        signed int i; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConfiguration.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026BE70 -> 0x0026BEAC
*/
// Range: 0x26BE70 -> 0x26BEAC
unsigned int zConfig_getPlayerEnumIdx(unsigned int _player_tag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26BE70 -> 0x26BEAC
        unsigned int i; // r2
    }
}


