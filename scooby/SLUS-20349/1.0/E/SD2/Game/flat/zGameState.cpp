/*
    Compile unit: E:\SD2\Game\flat\zGameState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int gGameState; // size: 0x4, address: 0x3574F4
enum eGameMode gGameMode; // size: 0x4, address: 0x357E20
enum _GameOstrich gGameOstrich; // size: 0x4, address: 0x357E24
static unsigned int sGameMode_DispatchTable[12]; // size: 0x30, address: 0x290300
static unsigned int sGameState_DispatchTable[8]; // size: 0x20, address: 0x290330
static unsigned int sPauseState_DispatchTable[2]; // size: 0x8, address: 0x3574F8
static unsigned int sSaveState_DispatchTable[3]; // size: 0xC, address: 0x290350
static unsigned int sOptionsState_DispatchTable[1]; // size: 0x4, address: 0x357500
static unsigned int sLoadState_DispatchTable[3]; // size: 0xC, address: 0x290360
static unsigned int sTitleState_DispatchTable[2]; // size: 0x8, address: 0x357508
static unsigned int sIntroState_DispatchTable[4]; // size: 0x10, address: 0x290370
static unsigned int sGameState_DoDispatchTable[8]; // size: 0x20, address: 0x290380
static unsigned int sPauseState_DoDispatchTable[2]; // size: 0x8, address: 0x357510
static unsigned int sSaveState_DoDispatchTable[3]; // size: 0xC, address: 0x2903A0
static unsigned int sOptionsState_DoDispatchTable[1]; // size: 0x4, address: 0x357518
static unsigned int sLoadState_DoDispatchTable[3]; // size: 0xC, address: 0x2903B0
static unsigned int sTitleState_DoDispatchTable[2]; // size: 0x8, address: 0x357520
static unsigned int sIntroState_DoDispatchTable[4]; // size: 0x10, address: 0x2903C0
unsigned int startPressed; // size: 0x4, address: 0x3574BC
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
    Code range: 0x00136CA0 -> 0x00136D64
*/
// Range: 0x136CA0 -> 0x136D64
void zGameModeSwitch(enum eGameMode modeNew /* r17 */) {
    /* anonymous block */ {
        // Range: 0x136CA0 -> 0x136D64
        enum eGameMode modeOld; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGameState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00136D70 -> 0x00136E7C
*/
// Range: 0x136D70 -> 0x136E7C
void zGameStateSwitch(signed int theNewState /* r2 */) {
    /* anonymous block */ {
        // Range: 0x136D70 -> 0x136E7C
        unsigned int theEvent; // r6
        signed int stateOld; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGameState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00136E80 -> 0x00137074
*/
// Range: 0x136E80 -> 0x137074
void zGameStateSwitchEvent(signed int event /* r2 */) {
    /* anonymous block */ {
        // Range: 0x136E80 -> 0x137074
        signed int new_state; // r17
        signed int new_mode; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGameState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137080 -> 0x00137088
*/
// Range: 0x137080 -> 0x137088
void zGameSetOstrich(enum _GameOstrich o /* r2 */) {
    /* anonymous block */ {
        // Range: 0x137080 -> 0x137088
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGameState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137090 -> 0x00137098
*/
// Range: 0x137090 -> 0x137098
enum _GameOstrich zGameGetOstrich() {
    /* anonymous block */ {
        // Range: 0x137090 -> 0x137098
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGameState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001370A0 -> 0x001370A8
*/
// Range: 0x1370A0 -> 0x1370A8
signed int zGameModeGet() {
    /* anonymous block */ {
        // Range: 0x1370A0 -> 0x1370A8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGameState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001370B0 -> 0x001370B8
*/
// Range: 0x1370B0 -> 0x1370B8
signed int zGameStateGet() {
    /* anonymous block */ {
        // Range: 0x1370B0 -> 0x1370B8
    }
}


