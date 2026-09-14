/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNPG.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_npgJointsAll[17]; // size: 0x11, address: 0x44B450
static class tagxStateLink link_npg_Idle[17]; // size: 0x44, address: 0x44B470
static class tagxStateLink link_npg_PreBirth[1]; // size: 0x4, address: 0x4A4174
static class tagxStateLink link_npg_IdleReadyToRun[16]; // size: 0x40, address: 0x44B4C0
static class tagxStateLink link_npg_PopUp[1]; // size: 0x4, address: 0x4A4178
static class tagxStateLink link_npg_Walk[12]; // size: 0x30, address: 0x44B500
static class tagxStateLink link_npg_Run[12]; // size: 0x30, address: 0x44B530
static class tagxStateLink link_npg_DodgeLeftFromIdle[3]; // size: 0xC, address: 0x44B560
static class tagxStateLink link_npg_DodgeRightFromIdle[3]; // size: 0xC, address: 0x44B570
static class tagxStateLink link_npg_DodgeLeftFromRRun[3]; // size: 0xC, address: 0x44B580
static class tagxStateLink link_npg_DodgeRightFromRRun[3]; // size: 0xC, address: 0x44B590
static class tagxStateLink link_npg_AttackGoreFromIdle[3]; // size: 0xC, address: 0x44B5A0
static class tagxStateLink link_npg_AttackHeadButtFromIdle[3]; // size: 0xC, address: 0x44B5B0
static class tagxStateLink link_npg_AttackGoreFromRRun[3]; // size: 0xC, address: 0x44B5C0
static class tagxStateLink link_npg_AttackHeadButtFromRRun[3]; // size: 0xC, address: 0x44B5D0
static class tagxStateLink link_npg_InjuryDown[1]; // size: 0x4, address: 0x4A417C
static class tagxStateLink link_npg_Injury2Left[1]; // size: 0x4, address: 0x4A4180
static class tagxStateLink link_npg_Death1[1]; // size: 0x4, address: 0x4A4184
class tagxState g_npgStates[17]; // size: 0x198, address: 0x44B5E0
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNPG.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355A50 -> 0x00355A7C
*/
// Range: 0x355A50 -> 0x355A7C
void xNPGStateReset() {
    /* anonymous block */ {
        // Range: 0x355A50 -> 0x355A7C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNPG.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355A80 -> 0x00355AAC
*/
// Range: 0x355A80 -> 0x355AAC
void xNPGStateInit() {
    /* anonymous block */ {
        // Range: 0x355A80 -> 0x355AAC
    }
}


