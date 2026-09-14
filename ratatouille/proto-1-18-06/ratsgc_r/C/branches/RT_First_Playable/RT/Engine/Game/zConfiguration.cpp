/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zConfiguration.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80103AE8 -> 0x8010444C
*/
static char * player_model_info[9][4]; // size: 0x90, address: 0x804341D0
static char * player_lorez_model[9]; // size: 0x24, address: 0x80434260
static unsigned int player_tag[9]; // size: 0x24, address: 0x803CB798
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
static struct zConfig_ScenePlayer_MapEntry scene_player_map[200]; // size: 0x3840, address: 0x80434284
// total size: 0xC
struct zConfigSceneMemReserve {
    // Members
    unsigned int sceneTag; // offset 0x0, size 0x4
    int memReserve; // offset 0x4, size 0x4
    unsigned char enabled; // offset 0x8, size 0x1
};
static struct zConfigSceneMemReserve sceneMemReserveMap[200]; // size: 0x960, address: 0x80B8ECF0
static int scene_player_map_max; // size: 0x4, address: 0x80C07BD0
// Range: 0x80103AE8 -> 0x80103BA8
unsigned int zConfig_getPlayerEnumIdx(unsigned int _player_tag /* r0 */) {
    // Local variables
    unsigned int i; // r0

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
static char __FUNCTION__[32]; // size: 0x20, address: 0x80437AC4
// Range: 0x80103BA8 -> 0x80103D78
void zConfig_setScenePlayer_MapEntry(unsigned int sceneID /* r29 */, unsigned int _player_tag /* r30 */) {
    // Local variables
    int i; // r31
    unsigned int sceneMask; // r31
    int i; // r0

    // References
    // -> static int scene_player_map_max;
    // -> static struct zConfig_ScenePlayer_MapEntry scene_player_map[200];
    // -> static char __FUNCTION__[32];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFFDE0
// Range: 0x80103D78 -> 0x80103EB4
unsigned int zConfig_getPlayerTag(unsigned int sceneID /* r0 */, int playerIdx /* r30 */) {
    // Local variables
    int i; // r31
    unsigned int mask; // r6

    // References
    // -> static unsigned int player_tag[9];
    // -> static struct zConfig_ScenePlayer_MapEntry scene_player_map[200];
    // -> static char __FUNCTION__[21];
    // -> static int scene_player_map_max;
}

// Range: 0x80103EB4 -> 0x80103F0C
char * zConfig_getPlayerModelInfoString(unsigned int _tag /* r0 */, unsigned int idx /* r0 */) {
    // Local variables
    int i; // r6

    // References
    // -> static char * player_model_info[9][4];
    // -> static unsigned int player_tag[9];
}

// Range: 0x80103F0C -> 0x80103F80
unsigned int zConfig_getPlayerLorezModelID(unsigned int _tag /* r0 */) {
    // Local variables
    int i; // r5

    // References
    // -> static char * player_lorez_model[9];
    // -> static unsigned int player_tag[9];
}

static char __FUNCTION__[23]; // size: 0x17, address: 0x80BFFDF8
// Range: 0x80103F80 -> 0x8010403C
int zConfig_getPlayerCount(unsigned int sceneID /* r0 */) {
    // Local variables
    int i; // r7

    // References
    // -> static char __FUNCTION__[23];
    // -> static struct zConfig_ScenePlayer_MapEntry scene_player_map[200];
    // -> static int scene_player_map_max;
}

static char __FUNCTION__[22]; // size: 0x16, address: 0x80BFFE10
// Range: 0x8010403C -> 0x80104154
enum _PLAYER_ENUM zConfig_getPlayerEnum(unsigned int sceneID /* r0 */, int playerIdx /* r30 */) {
    // Local variables
    int i; // r31

    // References
    // -> static struct zConfig_ScenePlayer_MapEntry scene_player_map[200];
    // -> static char __FUNCTION__[22];
    // -> static int scene_player_map_max;
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFFE28
// Range: 0x80104154 -> 0x8010425C
int zConfig_getPlayers(unsigned int sceneID /* r0 */, unsigned int * players /* r31 */) {
    // Local variables
    int i; // r5
    int j; // r7

    // References
    // -> static char __FUNCTION__[19];
    // -> static struct zConfig_ScenePlayer_MapEntry scene_player_map[200];
    // -> static int scene_player_map_max;
}

// Range: 0x8010425C -> 0x8010428C
void zConfigInitMemReserveMap() {
    // References
    // -> static struct zConfigSceneMemReserve sceneMemReserveMap[200];
}

static char __FUNCTION__[34]; // size: 0x22, address: 0x80437AE4
// Range: 0x8010428C -> 0x80104344
void zConfigSetSceneMemReserveMapEntry(unsigned int sceneID /* r0 */, int memRes /* r0 */) {
    // Local variables
    int i; // r6

    // References
    // -> static char __FUNCTION__[34];
    // -> static struct zConfigSceneMemReserve sceneMemReserveMap[200];
}

static char __FUNCTION__[38]; // size: 0x26, address: 0x80437B08
// Range: 0x80104344 -> 0x80104400
void zConfigDisableSceneMemReserveMapEntry(unsigned int sceneID /* r0 */) {
    // Local variables
    int i; // r5

    // References
    // -> static char __FUNCTION__[38];
    // -> static struct zConfigSceneMemReserve sceneMemReserveMap[200];
}

// Range: 0x80104400 -> 0x8010444C
int zConfigGetSceneMemReserve(unsigned int sceneID /* r0 */) {
    // Local variables
    int i; // r5

    // References
    // -> static struct zConfigSceneMemReserve sceneMemReserveMap[200];
}


