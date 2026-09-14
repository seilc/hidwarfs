/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zConfiguration.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80097B1C -> 0x80097F20
*/
static char * player_model_info[9][4]; // size: 0x90, address: 0x802D5508
static char * player_lorez_model[9]; // size: 0x24, address: 0x803BDD10
static unsigned int player_tag[9]; // size: 0x24, address: 0x803C5C90
// total size: 0x48
struct zConfig_ScenePlayer_MapEntry {
    // Members
    unsigned int scene_tag; // offset 0x0, size 0x4
    unsigned int scene_mask; // offset 0x4, size 0x4
    enum _PLAYER_ENUM player_enum[4]; // offset 0x8, size 0x10
    unsigned int pointerToPlayer[10]; // offset 0x18, size 0x28
    int playerCount; // offset 0x40, size 0x4
    int pointerCount; // offset 0x44, size 0x4
};
static struct zConfig_ScenePlayer_MapEntry scene_player_map[200]; // size: 0x3840, address: 0x802D5598
// total size: 0xC
struct zConfigSceneMemReserve {
    // Members
    unsigned int sceneTag; // offset 0x0, size 0x4
    int memReserve; // offset 0x4, size 0x4
    unsigned char enabled; // offset 0x8, size 0x1
};
static int scene_player_map_max; // size: 0x4, address: 0x803C19A8
// Range: 0x80097B1C -> 0x80097B58
unsigned int zConfig_getPlayerEnumIdx(unsigned int _player_tag /* r0 */) {
    // Local variables
    unsigned int i; // r6

    // References
    // -> static unsigned int player_tag[9];
}

enum _PLAYER_ENUM {
    REMY = 0,
    HUMAN_VEHICLE = 1,
    RATBALL = 2,
    MG1_PLAYER = 3,
    MG2_RATONBALL_PLAYER = 4,
    MG3_PUFFEROIDS_PLAYER = 5,
    MG4_GRAPESTOMPER_PLAYER = 6,
    MG5_CONGALINE_PLAYER = 7,
    MG6_AVOIDTHESTUFF_PLAYER = 8,
    PLAYER_COUNT = 9,
};
// Range: 0x80097B58 -> 0x80097C6C
void zConfig_setScenePlayer_MapEntry(unsigned int sceneID /* r0 */, unsigned int _player_tag /* r4 */) {
    // Local variables
    int i; // r0
    unsigned int sceneMask; // r8
    int i; // r0

    // References
    // -> static int scene_player_map_max;
    // -> static struct zConfig_ScenePlayer_MapEntry scene_player_map[200];
}

// Range: 0x80097C6C -> 0x80097CFC
unsigned int zConfig_getPlayerTag(unsigned int sceneID /* r0 */, int playerIdx /* r0 */) {
    // Local variables
    int i; // r0
    unsigned int mask; // r8

    // References
    // -> static unsigned int player_tag[9];
    // -> static struct zConfig_ScenePlayer_MapEntry scene_player_map[200];
    // -> static int scene_player_map_max;
}

// Range: 0x80097CFC -> 0x80097D54
char * zConfig_getPlayerModelInfoString(unsigned int _tag /* r0 */, unsigned int idx /* r0 */) {
    // Local variables
    int i; // r7

    // References
    // -> static char * player_model_info[9][4];
    // -> static unsigned int player_tag[9];
}

// Range: 0x80097D54 -> 0x80097DB8
unsigned int zConfig_getPlayerLorezModelID(unsigned int _tag /* r0 */) {
    // Local variables
    int i; // r0

    // References
    // -> static char * player_lorez_model[9];
    // -> static unsigned int player_tag[9];
}

// Range: 0x80097DB8 -> 0x80097E14
int zConfig_getPlayerCount(unsigned int sceneID /* r0 */) {
    // Local variables
    int i; // r0

    // References
    // -> static struct zConfig_ScenePlayer_MapEntry scene_player_map[200];
    // -> static int scene_player_map_max;
}

// Range: 0x80097E14 -> 0x80097E88
enum _PLAYER_ENUM zConfig_getPlayerEnum(unsigned int sceneID /* r0 */, int playerIdx /* r0 */) {
    // Local variables
    int i; // r0

    // References
    // -> static struct zConfig_ScenePlayer_MapEntry scene_player_map[200];
    // -> static int scene_player_map_max;
}

// Range: 0x80097E88 -> 0x80097F20
int zConfig_getPlayers(unsigned int sceneID /* r0 */, unsigned int * players /* r0 */) {
    // Local variables
    int i; // r0
    int j; // r9

    // References
    // -> static struct zConfig_ScenePlayer_MapEntry scene_player_map[200];
    // -> static int scene_player_map_max;
}


