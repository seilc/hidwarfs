/*
    Compile unit: E:\SD2\Game\flat\zGameState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int gGameState; // size: 0x4, address: 0x357E68
enum eGameMode gGameMode; // size: 0x4, address: 0x3587B8
enum _GameOstrich gGameOstrich; // size: 0x4, address: 0x3587BC
static unsigned int sGameMode_DispatchTable[12]; // size: 0x30, address: 0x290C00
static unsigned int sGameState_DispatchTable[8]; // size: 0x20, address: 0x290C30
static unsigned int sPauseState_DispatchTable[2]; // size: 0x8, address: 0x357E70
static unsigned int sSaveState_DispatchTable[3]; // size: 0xC, address: 0x290C50
static unsigned int sOptionsState_DispatchTable[1]; // size: 0x4, address: 0x357E78
static unsigned int sLoadState_DispatchTable[3]; // size: 0xC, address: 0x290C60
static unsigned int sTitleState_DispatchTable[2]; // size: 0x8, address: 0x357E80
static unsigned int sIntroState_DispatchTable[4]; // size: 0x10, address: 0x290C70
static unsigned int sGameState_DoDispatchTable[8]; // size: 0x20, address: 0x290C80
static unsigned int sPauseState_DoDispatchTable[2]; // size: 0x8, address: 0x357E88
static unsigned int sSaveState_DoDispatchTable[3]; // size: 0xC, address: 0x290CA0
static unsigned int sOptionsState_DoDispatchTable[1]; // size: 0x4, address: 0x357E90
static unsigned int sLoadState_DoDispatchTable[3]; // size: 0xC, address: 0x290CB0
static unsigned int sTitleState_DoDispatchTable[2]; // size: 0x8, address: 0x357E98
static unsigned int sIntroState_DoDispatchTable[4]; // size: 0x10, address: 0x290CC0
unsigned int startPressed; // size: 0x4, address: 0x357E34
enum eGameMode {
    eGameMode_Boot = 0,
    eGameMode_Intro = 1,
    eGameMode_Title = 2,
    eGameMode_Start = 3,
    eGameMode_Load = 4,
    eGameMode_Options = 5,
    eGameMode_Save = 6,
    eGameMode_Pause = 7,
    eGameMode_WorldMap = 8,
    eGameMode_MonsterGallery = 9,
    eGameMode_ConceptArtGallery = 10,
    eGameMode_Game = 11,
    eGameMode_Count = 12,
};
enum _GameOstrich {
    eGameOstrich_Loading = 0,
    eGameOstrich_PlayingMovie = 1,
    eGameOstrich_InScene = 2,
    eGameOstrich_Total = 3,
};

/*
    Compile unit: E:\SD2\Game\flat\zGameState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137060 -> 0x00137124
*/
// Range: 0x137060 -> 0x137124
void zGameModeSwitch(enum eGameMode modeNew /* r17 */) {
    /* anonymous block */ {
        // Range: 0x137060 -> 0x137124
        enum eGameMode modeOld; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGameState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137130 -> 0x0013723C
*/
// Range: 0x137130 -> 0x13723C
void zGameStateSwitch(signed int theNewState /* r2 */) {
    /* anonymous block */ {
        // Range: 0x137130 -> 0x13723C
        unsigned int theEvent; // r6
        signed int stateOld; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGameState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137240 -> 0x00137434
*/
// Range: 0x137240 -> 0x137434
void zGameStateSwitchEvent(signed int event /* r2 */) {
    /* anonymous block */ {
        // Range: 0x137240 -> 0x137434
        signed int new_state; // r17
        signed int new_mode; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGameState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137440 -> 0x00137448
*/
// Range: 0x137440 -> 0x137448
void zGameSetOstrich(enum _GameOstrich o /* r2 */) {
    /* anonymous block */ {
        // Range: 0x137440 -> 0x137448
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGameState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137450 -> 0x00137458
*/
// Range: 0x137450 -> 0x137458
enum _GameOstrich zGameGetOstrich() {
    /* anonymous block */ {
        // Range: 0x137450 -> 0x137458
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGameState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137460 -> 0x00137468
*/
// Range: 0x137460 -> 0x137468
signed int zGameModeGet() {
    /* anonymous block */ {
        // Range: 0x137460 -> 0x137468
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGameState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137470 -> 0x00137478
*/
// Range: 0x137470 -> 0x137478
signed int zGameStateGet() {
    /* anonymous block */ {
        // Range: 0x137470 -> 0x137478
    }
}


