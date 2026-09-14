/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNDD.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nddJointsAll[17]; // size: 0x11, address: 0x44DE20
unsigned char g_nddJointsUpperOnly[17]; // size: 0x11, address: 0x0
static class tagxStateLink link_ndd_PreBirth[1]; // size: 0x4, address: 0x4A4468
static class tagxStateLink link_ndd_Idle[20]; // size: 0x50, address: 0x44DE40
static class tagxStateLink link_ndd_RRun[20]; // size: 0x50, address: 0x44DE90
static class tagxStateLink link_ndd_PopUp[1]; // size: 0x4, address: 0x4A446C
static class tagxStateLink link_ndd_FlyThroughWindow[1]; // size: 0x4, address: 0x4A4470
static class tagxStateLink link_ndd_Dive[1]; // size: 0x4, address: 0x4A4474
static class tagxStateLink link_ndd_Walk[12]; // size: 0x30, address: 0x44DEE0
static class tagxStateLink link_ndd_Run[12]; // size: 0x30, address: 0x44DF10
static class tagxStateLink link_ndd_DodgeLeft[2]; // size: 0x8, address: 0x44DF40
static class tagxStateLink link_ndd_DodgeRight[2]; // size: 0x8, address: 0x44DF48
static class tagxStateLink link_ndd_AttackLeft[3]; // size: 0xC, address: 0x44DF50
static class tagxStateLink link_ndd_AttackRight[3]; // size: 0xC, address: 0x44DF60
static class tagxStateLink link_ndd_AttackStrong[3]; // size: 0xC, address: 0x44DF70
static class tagxStateLink link_ndd_AttackVomit[3]; // size: 0xC, address: 0x44DF80
static class tagxStateLink link_ndd_AttackLeftFromRRun[3]; // size: 0xC, address: 0x44DF90
static class tagxStateLink link_ndd_AttackRightFromRRun[3]; // size: 0xC, address: 0x44DFA0
static class tagxStateLink link_ndd_AttackStrongFromRRun[3]; // size: 0xC, address: 0x44DFB0
static class tagxStateLink link_ndd_AttackVomitFromRRun[3]; // size: 0xC, address: 0x44DFC0
static class tagxStateLink link_ndd_InjuryFront[1]; // size: 0x4, address: 0x4A4478
static class tagxStateLink link_ndd_InjuryFrontFromAttack[1]; // size: 0x4, address: 0x4A447C
static class tagxStateLink link_ndd_InjuryFrontFromAttackRRun[1]; // size: 0x4, address: 0x4A4480
static class tagxStateLink link_ndd_InjuryFrontInWalk[1]; // size: 0x4, address: 0x4A4484
static class tagxStateLink link_ndd_DeathMelee1[1]; // size: 0x4, address: 0x4A4488
static class tagxStateLink link_ndd_DeathMelee2[1]; // size: 0x4, address: 0x4A448C
static class tagxStateLink link_ndd_DeathRange1[1]; // size: 0x4, address: 0x4A4490
static class tagxStateLink link_ndd_ComboIdle[3]; // size: 0xC, address: 0x44DFD0
static class tagxStateLink link_ndd_ComboIdleChainsaw[3]; // size: 0xC, address: 0x44DFE0
static class tagxStateLink link_ndd_ComboMissDeath[1]; // size: 0x4, address: 0x4A4494
static class tagxStateLink link_ndd_ComboDeathGun[1]; // size: 0x4, address: 0x4A4498
static class tagxStateLink link_ndd_ComboDeathAxe[1]; // size: 0x4, address: 0x4A449C
class tagxState g_nddStates[30]; // size: 0x2D0, address: 0x44DFF0
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNDD.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355FF0 -> 0x0035601C
*/
// Range: 0x355FF0 -> 0x35601C
void xNDDStateReset() {
    /* anonymous block */ {
        // Range: 0x355FF0 -> 0x35601C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNDD.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356020 -> 0x0035604C
*/
// Range: 0x356020 -> 0x35604C
void xNDDStateInit() {
    /* anonymous block */ {
        // Range: 0x356020 -> 0x35604C
    }
}


