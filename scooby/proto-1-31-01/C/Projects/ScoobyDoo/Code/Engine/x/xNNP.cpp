/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNNP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nnpJointsAll[17]; // size: 0x11, address: 0x44BDE0
unsigned char g_nnpJointsUpperOnly[17]; // size: 0x11, address: 0x0
static class tagxStateLink link_nnp_Idle[16]; // size: 0x40, address: 0x44BE00
static class tagxStateLink link_nnp_IdleReadyRun[16]; // size: 0x40, address: 0x44BE40
static class tagxStateLink link_nnp_Walk[12]; // size: 0x30, address: 0x44BE80
static class tagxStateLink link_nnp_Run[12]; // size: 0x30, address: 0x44BEB0
static class tagxStateLink link_nnp_HopFromIdle[3]; // size: 0xC, address: 0x44BEE0
static class tagxStateLink link_nnp_HopFromRRun[3]; // size: 0xC, address: 0x44BEF0
static class tagxStateLink link_nnp_DodgeLeftFromIdle[3]; // size: 0xC, address: 0x44BF00
static class tagxStateLink link_nnp_DodgeRightFromIdle[3]; // size: 0xC, address: 0x44BF10
static class tagxStateLink link_nnp_DodgeLeftFromRRun[3]; // size: 0xC, address: 0x44BF20
static class tagxStateLink link_nnp_DodgeRightFromRRun[3]; // size: 0xC, address: 0x44BF30
static class tagxStateLink link_nnp_AttackJumpFromIdle[3]; // size: 0xC, address: 0x44BF40
static class tagxStateLink link_nnp_AttackJumpFromRRun[3]; // size: 0xC, address: 0x44BF50
static class tagxStateLink link_nnp_InjuryStrongAsThread[1]; // size: 0x4, address: 0x4A41B8
static class tagxStateLink link_nnp_InjuryFrontAsThread[1]; // size: 0x4, address: 0x4A41BC
static class tagxStateLink link_nnp_InjuryJumpingFromIdle[1]; // size: 0x4, address: 0x4A41C0
static class tagxStateLink link_nnp_InjuryJumpingFromRRun[1]; // size: 0x4, address: 0x4A41C4
static class tagxStateLink link_nnp_Die[1]; // size: 0x4, address: 0x4A41C8
static class tagxStateLink link_nnp_DieJumping[1]; // size: 0x4, address: 0x4A41CC
class tagxState g_nnpStates[18]; // size: 0x1B0, address: 0x44BF60
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNNP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355B70 -> 0x00355B9C
*/
// Range: 0x355B70 -> 0x355B9C
void xNNPStateReset() {
    /* anonymous block */ {
        // Range: 0x355B70 -> 0x355B9C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNNP.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355BA0 -> 0x00355BCC
*/
// Range: 0x355BA0 -> 0x355BCC
void xNNPStateInit() {
    /* anonymous block */ {
        // Range: 0x355BA0 -> 0x355BCC
    }
}


