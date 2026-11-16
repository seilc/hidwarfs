/*
    Compile unit: E:\SD2\Game\flat\zLaugh.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int sLastLaughEnum; // size: 0x4, address: 0x358FE8
static unsigned int sLaughSoundID[17]; // size: 0x44, address: 0x3B0AE0
static float sLaughTimer; // size: 0x4, address: 0x358FEC
static class zLaughSituation * sLaughQueueData; // size: 0x4, address: 0x358FF0
static class zLaughSituation sLaughInfo[15]; // size: 0x12C, address: 0x2FE7D0
static signed int sLastRefLaugh; // size: 0x4, address: 0x358FF4
// total size: 0x14
class zLaughSituation {
    // Members
public:
    unsigned int countMax; // offset 0x0, size 0x4
    float delay; // offset 0x4, size 0x4
    float punchDelay; // offset 0x8, size 0x4
    float elapsedTime; // offset 0xC, size 0x4
    unsigned int count; // offset 0x10, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\zLaugh.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00277CF0 -> 0x00277EE4
*/
// Range: 0x277CF0 -> 0x277EE4
void zLaughUpdate(float dt /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x277CF0 -> 0x277EE4
        signed int i; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLaugh.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00277EF0 -> 0x00277F6C
*/
// Range: 0x277EF0 -> 0x277F6C
void zLaughNotify(signed int situation /* r2 */) {
    /* anonymous block */ {
        // Range: 0x277EF0 -> 0x277F6C
        class zLaughSituation * s; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLaugh.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00277F70 -> 0x00278018
*/
// Range: 0x277F70 -> 0x278018
static signed int zLaughNextLaughEnum() {
    /* anonymous block */ {
        // Range: 0x277F70 -> 0x278018
        signed int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLaugh.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00278020 -> 0x00278134
*/
// Range: 0x278020 -> 0x278134
void zLaughInit() {
    /* anonymous block */ {
        // Range: 0x278020 -> 0x278134
        char str[32]; // r29+0x30
        signed int i; // r16
    }
}


