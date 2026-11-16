/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static float g_tmrz_sndplay[26]; // size: 0x68, address: 0x5CEDB0
static unsigned int g_hash_sndgroup[26]; // size: 0x68, address: 0x5CEE20
static char * g_strz_sndgroup[26]; // size: 0x68, address: 0x4DF070
class NPCSndTrax g_sndTrax_Universal[]; // size: 0x0, address: 0x5CEE88
class NPCSndTrax g_sndTrax_General[]; // size: 0x0, address: 0x5CEE98
class NPCSndProp g_sndProps[]; // size: 0x0, address: 0x4DF160
// total size: 0xC
class NPCSndTrax {
    // Members
public:
    enum en_NPC_SOUND typ_sound; // offset 0x0, size 0x4
    char * nam_sound; // offset 0x4, size 0x4
    unsigned int aid_sound; // offset 0x8, size 0x4
};
enum en_NPC_SOUND {
    NPC_STYP_BOGUS = -2,
    NPC_STYP_LISTEND = 0,
    NPC_STYP_ENCOUNTER = 1,
    NPC_STYP_CLANKING = 2,
    NPC_STYP_EXCLAIM = 3,
    NPC_STYP_OUCH = 4,
    NPC_STYP_CHEERING = 5,
    NPC_STYP_RESPAWN = 6,
    NPC_STYP_ALERT = 7,
    NPC_STYP_DIZZY = 8,
    NPC_STYP_DANCE = 9,
    NPC_STYP_LAUGH = 10,
    NPC_STYP_ATTACK = 11,
    NPC_STYP_PUNCH = 12,
    NPC_STYP_WEPLAUNCH = 13,
    NPC_STYP_LIGHTNING = 14,
    NPC_STYP_WARNBANG = 15,
    NPC_STYP_DEATH = 16,
    NPC_STYP_DEATHJELLY = 17,
    NPC_STYP_BONKED = 18,
    NPC_STYP_UNBONKED = 19,
    NPC_STYP_TIKISTACK = 20,
    NPC_STYP_TIKIEXPLODE = 21,
    NPC_STYP_TIKITHUNDER = 22,
    NPC_STYP_XSFXTALK = 23,
    NPC_STYP_ONELINER = 24,
    NPC_STYP_ONELINERTOO = 25,
    NPC_STYP_NOMORE = 26,
    NPC_STYP_FORCE = 2147483647,
};
// total size: 0xC
class NPCSndProp {
    // Members
public:
    enum en_NPC_SOUND sndtype; // offset 0x0, size 0x4
    signed int flg_snd; // offset 0x4, size 0x4
    float tym_delayNext; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030FB50 -> 0x0030FDB4
*/
// Range: 0x30FB50 -> 0x30FDB4
unsigned int NPCS_SndPickSimilar(enum en_NPC_SOUND sndtype /* r2 */, class NPCSndTrax * cust /* r2 */, class NPCSndTrax * share /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30FB50 -> 0x30FDB4
        unsigned int aid_choice; // r2
        class NPCSndTrax * trax; // r17
        signed int i; // r15
        signed int ingroup; // r14
        signed int list[32]; // r29+0xB0
        float wts[32]; // r29+0x30
        signed int cnt; // r16
        float use_wt; // r29+0x130
    }
}


/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030FDC0 -> 0x0030FE60
*/
// Range: 0x30FDC0 -> 0x30FE60
enum en_NPC_SOUND NPCS_SndTypeFromHash(unsigned int aid_snd /* r2 */, class NPCSndTrax * cust /* r2 */, class NPCSndTrax * share /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30FDC0 -> 0x30FE60
        enum en_NPC_SOUND da_type; // r2
        class NPCSndTrax * trax; // r10
        signed int i; // r9
    }
}


/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030FE60 -> 0x0030FE98
*/
// Range: 0x30FE60 -> 0x30FE98
class NPCSndProp * NPCS_SndFindProps(enum en_NPC_SOUND sndtype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30FE60 -> 0x30FE98
        class NPCSndProp * sprop; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030FEA0 -> 0x0030FF1C
*/
// Range: 0x30FEA0 -> 0x30FF1C
void NPCS_SndTablePrepare(class NPCSndTrax * trax /* r17 */) {
    /* anonymous block */ {
        // Range: 0x30FEA0 -> 0x30FF1C
        unsigned int hash; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030FF20 -> 0x0030FF80
*/
// Range: 0x30FF20 -> 0x30FF80
signed int NPCS_SndOkToPlay(enum en_NPC_SOUND sndtype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30FF20 -> 0x30FF80
    }
}


/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030FF80 -> 0x00310000
*/
// Range: 0x30FF80 -> 0x310000
void NPCS_SndTypePlayed(enum en_NPC_SOUND sndtype /* r2 */, float delayNext /* r29 */) {
    /* anonymous block */ {
        // Range: 0x30FF80 -> 0x310000
        float tym; // r1
    }
}


/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00310000 -> 0x00310064
*/
// Range: 0x310000 -> 0x310064
void NPCS_SndTimersReset() {
    /* anonymous block */ {
        // Range: 0x310000 -> 0x310064
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00310070 -> 0x003100BC
*/
// Range: 0x310070 -> 0x3100BC
void NPCS_SndTimersUpdate(float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x310070 -> 0x3100BC
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003100C0 -> 0x003100C8
*/
// Range: 0x3100C0 -> 0x3100C8
void NPCS_Shutdown() {
    /* anonymous block */ {
        // Range: 0x3100C0 -> 0x3100C8
    }
}


/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003100D0 -> 0x00310130
*/
// Range: 0x3100D0 -> 0x310130
void NPCS_Startup() {
    /* anonymous block */ {
        // Range: 0x3100D0 -> 0x310130
        signed int i; // r18
    }
}


