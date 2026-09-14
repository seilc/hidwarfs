/*
    Compile unit: E:\SD2\Game\flat\zLaugh.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int sLastLaughEnum; // size: 0x4, address: 0x358648
static unsigned int sLaughSoundID[17]; // size: 0x44, address: 0x3B30E0
static float sLaughTimer; // size: 0x4, address: 0x35864C
static class zLaughSituation * sLaughQueueData; // size: 0x4, address: 0x358650
static class zLaughSituation sLaughInfo[15]; // size: 0x12C, address: 0x2FDE90
static signed int sLastRefLaugh; // size: 0x4, address: 0x358654
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
    Code range: 0x002773D0 -> 0x002775C4
*/
// Range: 0x2773D0 -> 0x2775C4
void zLaughUpdate(float dt /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x2773D0 -> 0x2775C4
        signed int i; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLaugh.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002775D0 -> 0x0027764C
*/
// Range: 0x2775D0 -> 0x27764C
void zLaughNotify(signed int situation /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2775D0 -> 0x27764C
        class zLaughSituation * s; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLaugh.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00277650 -> 0x002776F8
*/
// Range: 0x277650 -> 0x2776F8
static signed int zLaughNextLaughEnum() {
    /* anonymous block */ {
        // Range: 0x277650 -> 0x2776F8
        signed int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLaugh.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00277700 -> 0x00277814
*/
// Range: 0x277700 -> 0x277814
void zLaughInit() {
    /* anonymous block */ {
        // Range: 0x277700 -> 0x277814
        char str[32]; // r29+0x30
        signed int i; // r16
    }
}


