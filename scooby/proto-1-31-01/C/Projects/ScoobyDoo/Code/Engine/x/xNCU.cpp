/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNCU.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_ncuJointsAll[59]; // size: 0x3B, address: 0x44E2C0
unsigned char g_ncuJointsUpperOnly[59]; // size: 0x3B, address: 0x0
static class tagxStateLink link_ncu_Idle[6]; // size: 0x18, address: 0x44E300
static class tagxStateLink link_ncu_Walk[3]; // size: 0xC, address: 0x44E318
static class tagxStateLink link_ncu_AttackMeleeSwipe[1]; // size: 0x4, address: 0x4A44A0
static class tagxStateLink link_ncu_AttackMeleeBite[1]; // size: 0x4, address: 0x4A44A4
static class tagxStateLink link_ncu_AttackRangeShoot[1]; // size: 0x4, address: 0x4A44A8
static class tagxStateLink link_ncu_Injury[1]; // size: 0x4, address: 0x4A44AC
static class tagxStateLink link_ncu_InjuryStrong[1]; // size: 0x4, address: 0x4A44B0
class tagxState g_ncuStates[7]; // size: 0xA8, address: 0x44E330
// total size: 0x4
class tagxStateLink {
    // Members
public:
    unsigned char m_command; // offset 0x0, size 0x1
    unsigned char m_flags; // offset 0x1, size 0x1
    unsigned short m_state; // offset 0x2, size 0x2
};
// total size: 0x18
class tagxState {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    signed int m_animState; // offset 0x4, size 0x4
    unsigned char * m_activeJoints; // offset 0x8, size 0x4
    signed short m_calloutNumber; // offset 0xC, size 0x2
    unsigned char m_enterEvent; // offset 0xE, size 0x1
    unsigned char m_exitEvent; // offset 0xF, size 0x1
    signed int m_linkCount; // offset 0x10, size 0x4
    class tagxStateLink * m_links; // offset 0x14, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNCU.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356050 -> 0x0035607C
*/
// Range: 0x356050 -> 0x35607C
void xNCUStateReset() {
    /* anonymous block */ {
        // Range: 0x356050 -> 0x35607C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNCU.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356080 -> 0x003560AC
*/
// Range: 0x356080 -> 0x3560AC
void xNCUStateInit() {
    /* anonymous block */ {
        // Range: 0x356080 -> 0x3560AC
    }
}


