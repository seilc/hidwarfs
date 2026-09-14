/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNBA.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nbaJointsAll[17]; // size: 0x11, address: 0x44EBE0
unsigned char g_nbaJointsUpperOnly[17]; // size: 0x11, address: 0x44EC00
static class tagxStateLink link_nba_Idle[11]; // size: 0x2C, address: 0x44EC20
static class tagxStateLink link_nba_Idle1FromIdle[1]; // size: 0x4, address: 0x4A457C
static class tagxStateLink link_nba_Idle1FromRRun[1]; // size: 0x4, address: 0x4A4580
static class tagxStateLink link_nba_StandRRun[10]; // size: 0x28, address: 0x44EC50
static class tagxStateLink link_nba_Walk[4]; // size: 0x10, address: 0x44EC80
static class tagxStateLink link_nba_WalkBack[3]; // size: 0xC, address: 0x44EC90
static class tagxStateLink link_nba_Run[4]; // size: 0x10, address: 0x44ECA0
static class tagxStateLink link_nba_DodgeLeftFromIdle[1]; // size: 0x4, address: 0x4A4584
static class tagxStateLink link_nba_DodgeRightFromIdle[1]; // size: 0x4, address: 0x4A4588
static class tagxStateLink link_nba_DodgeLeftFromRRun[1]; // size: 0x4, address: 0x4A458C
static class tagxStateLink link_nba_DodgeRightFromRRun[1]; // size: 0x4, address: 0x4A4590
static class tagxStateLink link_nba_AttackBackhandFromIdle[1]; // size: 0x4, address: 0x4A4594
static class tagxStateLink link_nba_AttackBothHandsFromIdle[1]; // size: 0x4, address: 0x4A4598
static class tagxStateLink link_nba_AttackStrongFromIdle[1]; // size: 0x4, address: 0x4A459C
static class tagxStateLink link_nba_AttackBackhandFromRRun[1]; // size: 0x4, address: 0x4A45A0
static class tagxStateLink link_nba_AttackBothHandsFromRRun[1]; // size: 0x4, address: 0x4A45A4
static class tagxStateLink link_nba_AttackStrongFromRRun[1]; // size: 0x4, address: 0x4A45A8
static class tagxStateLink link_nba_InjuryFrontFullBodyThread[1]; // size: 0x4, address: 0x4A45AC
static class tagxStateLink link_nba_InjuryStrongFullBodyThread[1]; // size: 0x4, address: 0x4A45B0
static class tagxStateLink link_nba_InjuryFrontUpperBodyThread[1]; // size: 0x4, address: 0x4A45B4
static class tagxStateLink link_nba_InjuryStrongUpperBodyThread[1]; // size: 0x4, address: 0x4A45B8
class tagxState g_nbaStates[21]; // size: 0x1F8, address: 0x44ECB0
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNBA.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356170 -> 0x0035619C
*/
// Range: 0x356170 -> 0x35619C
void xNBAStateReset() {
    /* anonymous block */ {
        // Range: 0x356170 -> 0x35619C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNBA.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003561A0 -> 0x003561CC
*/
// Range: 0x3561A0 -> 0x3561CC
void xNBAStateInit() {
    /* anonymous block */ {
        // Range: 0x3561A0 -> 0x3561CC
    }
}


