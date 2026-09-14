/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNPK.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_npkJointsAll[15]; // size: 0xF, address: 0x44B150
unsigned char g_npkJointsUpperOnly[15]; // size: 0xF, address: 0x0
static class tagxStateLink link_npk_Idle[16]; // size: 0x40, address: 0x44B160
static class tagxStateLink link_npk_IdleReady[16]; // size: 0x40, address: 0x44B1A0
static class tagxStateLink link_npk_Walk[12]; // size: 0x30, address: 0x44B1E0
static class tagxStateLink link_npk_Run[12]; // size: 0x30, address: 0x44B210
static class tagxStateLink link_npk_DodgeLeft[1]; // size: 0x4, address: 0x4A4148
static class tagxStateLink link_npk_DodgeRight[1]; // size: 0x4, address: 0x4A414C
static class tagxStateLink link_npk_AttackMeleeLeftIdle[3]; // size: 0xC, address: 0x44B240
static class tagxStateLink link_npk_AttackMeleeRightIdle[3]; // size: 0xC, address: 0x44B250
static class tagxStateLink link_npk_AttackMeleeLeftIdleReady[3]; // size: 0xC, address: 0x44B260
static class tagxStateLink link_npk_AttackMeleeRightIdleReady[3]; // size: 0xC, address: 0x44B270
static class tagxStateLink link_npk_InjuryShortInIdle[1]; // size: 0x4, address: 0x4A4150
static class tagxStateLink link_npk_InjuryLongInIdle[1]; // size: 0x4, address: 0x4A4154
static class tagxStateLink link_npk_InjuryShortInIdleReady[1]; // size: 0x4, address: 0x4A4158
static class tagxStateLink link_npk_InjuryLongInIdleReady[1]; // size: 0x4, address: 0x4A415C
static class tagxStateLink link_npk_InjuryShortInWalk[1]; // size: 0x4, address: 0x4A4160
static class tagxStateLink link_npk_InjuryLongInWalk[1]; // size: 0x4, address: 0x4A4164
static class tagxStateLink link_npk_InjuryShortInRun[1]; // size: 0x4, address: 0x4A4168
static class tagxStateLink link_npk_InjuryLongInRun[1]; // size: 0x4, address: 0x4A416C
static class tagxStateLink link_npk_Die[1]; // size: 0x4, address: 0x4A4170
class tagxState g_npkStates[19]; // size: 0x1C8, address: 0x44B280
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNPK.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003559F0 -> 0x00355A1C
*/
// Range: 0x3559F0 -> 0x355A1C
void xNPKStateReset() {
    /* anonymous block */ {
        // Range: 0x3559F0 -> 0x355A1C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNPK.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355A20 -> 0x00355A4C
*/
// Range: 0x355A20 -> 0x355A4C
void xNPKStateInit() {
    /* anonymous block */ {
        // Range: 0x355A20 -> 0x355A4C
    }
}


