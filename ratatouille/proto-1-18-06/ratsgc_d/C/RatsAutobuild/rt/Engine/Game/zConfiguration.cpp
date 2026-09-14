/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zConfiguration.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801407B0 -> 0x80140FEC
*/
static char * player_model_info[9][4]; // size: 0x90, address: 0x80518F18
static char * player_lorez_model[9]; // size: 0x24, address: 0x80518FA8
static unsigned int player_tag[9]; // size: 0x24, address: 0x8049E8C0
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
static struct zConfig_ScenePlayer_MapEntry scene_player_map[200]; // size: 0x3840, address: 0x80518FCC
// total size: 0xC
struct zConfigSceneMemReserve {
    // Members
    unsigned int sceneTag; // offset 0x0, size 0x4
    int memReserve; // offset 0x4, size 0x4
    unsigned char enabled; // offset 0x8, size 0x1
};
static int scene_player_map_max; // size: 0x4, address: 0x80D69EC8
// Range: 0x801407B0 -> 0x80140800
unsigned int zConfig_getPlayerEnumIdx(unsigned int _player_tag /* r3 */) {
    // Local variables
    unsigned int i; // r31

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
static char __FUNCTION__[32]; // size: 0x20, address: 0x8051C80C
// Range: 0x80140800 -> 0x801409F8
void zConfig_setScenePlayer_MapEntry(unsigned int sceneID /* r28 */, unsigned int _player_tag /* r27 */) {
    // Local variables
    int i; // r31
    unsigned int sceneMask; // r29
    int i; // r30

    // References
    // -> static int scene_player_map_max;
    // -> static struct zConfig_ScenePlayer_MapEntry scene_player_map[200];
    // -> static char __FUNCTION__[32];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x8051C82C
// Range: 0x801409F8 -> 0x80140B6C
unsigned int zConfig_getPlayerTag(unsigned int sceneID /* r1+0x8 */, int playerIdx /* r30 */) {
    // Local variables
    int i; // r31
    unsigned int mask; // r29

    // References
    // -> static unsigned int player_tag[9];
    // -> static int scene_player_map_max;
    // -> static struct zConfig_ScenePlayer_MapEntry scene_player_map[200];
    // -> static char __FUNCTION__[21];
}

// Range: 0x80140B6C -> 0x80140BD8
char * zConfig_getPlayerModelInfoString(unsigned int _tag /* r3 */, unsigned int idx /* r4 */) {
    // Local variables
    int i; // r31

    // References
    // -> static char * player_model_info[9][4];
    // -> static unsigned int player_tag[9];
}

// Range: 0x80140BD8 -> 0x80140C78
unsigned int zConfig_getPlayerLorezModelID(unsigned int _tag /* r1+0x8 */) {
    // Local variables
    int i; // r31

    // References
    // -> static char * player_lorez_model[9];
    // -> static unsigned int player_tag[9];
}

static char __FUNCTION__[23]; // size: 0x17, address: 0x8051C841
// Range: 0x80140C78 -> 0x80140D74
int zConfig_getPlayerCount(unsigned int sceneID /* r1+0x8 */) {
    // Local variables
    int i; // r31

    // References
    // -> static char __FUNCTION__[23];
    // -> static int scene_player_map_max;
    // -> static struct zConfig_ScenePlayer_MapEntry scene_player_map[200];
}

static char __FUNCTION__[22]; // size: 0x16, address: 0x8051C858
// Range: 0x80140D74 -> 0x80140EA8
enum _PLAYER_ENUM zConfig_getPlayerEnum(unsigned int sceneID /* r1+0x8 */, int playerIdx /* r30 */) {
    // Local variables
    int i; // r31

    // References
    // -> static int scene_player_map_max;
    // -> static struct zConfig_ScenePlayer_MapEntry scene_player_map[200];
    // -> static char __FUNCTION__[22];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D62460
// Range: 0x80140EA8 -> 0x80140FEC
int zConfig_getPlayers(unsigned int sceneID /* r1+0x8 */, unsigned int * players /* r30 */) {
    // Local variables
    int i; // r31
    int j; // r29
    int playerCount; // r1+0xC

    // References
    // -> static char __FUNCTION__[19];
    // -> static int scene_player_map_max;
    // -> static struct zConfig_ScenePlayer_MapEntry scene_player_map[200];
}


