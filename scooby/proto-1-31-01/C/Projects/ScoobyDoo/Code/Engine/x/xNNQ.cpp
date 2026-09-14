/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNNQ.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nnqJointsAll[17]; // size: 0x11, address: 0x44BAB0
unsigned char g_nnqJointsUpperOnly[17]; // size: 0x11, address: 0x0
static class tagxStateLink link_nnq_Idle[16]; // size: 0x40, address: 0x44BAD0
static class tagxStateLink link_nnq_IdleReadyRun[16]; // size: 0x40, address: 0x44BB10
static class tagxStateLink link_nnq_Walk[12]; // size: 0x30, address: 0x44BB50
static class tagxStateLink link_nnq_Run[12]; // size: 0x30, address: 0x44BB80
static class tagxStateLink link_nnq_HopFromIdle[3]; // size: 0xC, address: 0x44BBB0
static class tagxStateLink link_nnq_HopFromRRun[3]; // size: 0xC, address: 0x44BBC0
static class tagxStateLink link_nnq_DodgeLeftFromIdle[3]; // size: 0xC, address: 0x44BBD0
static class tagxStateLink link_nnq_DodgeRightFromIdle[3]; // size: 0xC, address: 0x44BBE0
static class tagxStateLink link_nnq_DodgeLeftFromRRun[3]; // size: 0xC, address: 0x44BBF0
static class tagxStateLink link_nnq_DodgeRightFromRRun[3]; // size: 0xC, address: 0x44BC00
static class tagxStateLink link_nnq_AttackJumpFromIdle[3]; // size: 0xC, address: 0x44BC10
static class tagxStateLink link_nnq_AttackJumpFromRRun[3]; // size: 0xC, address: 0x44BC20
static class tagxStateLink link_nnq_InjuryStrongAsThread[1]; // size: 0x4, address: 0x4A41A0
static class tagxStateLink link_nnq_InjuryFrontAsThread[1]; // size: 0x4, address: 0x4A41A4
static class tagxStateLink link_nnq_InjuryJumpingFromIdle[1]; // size: 0x4, address: 0x4A41A8
static class tagxStateLink link_nnq_InjuryJumpingFromRRun[1]; // size: 0x4, address: 0x4A41AC
static class tagxStateLink link_nnq_Die[1]; // size: 0x4, address: 0x4A41B0
static class tagxStateLink link_nnq_DieJumping[1]; // size: 0x4, address: 0x4A41B4
class tagxState g_nnqStates[18]; // size: 0x1B0, address: 0x44BC30
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNNQ.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355B10 -> 0x00355B3C
*/
// Range: 0x355B10 -> 0x355B3C
void xNNQStateReset() {
    /* anonymous block */ {
        // Range: 0x355B10 -> 0x355B3C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNNQ.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355B40 -> 0x00355B6C
*/
// Range: 0x355B40 -> 0x355B6C
void xNNQStateInit() {
    /* anonymous block */ {
        // Range: 0x355B40 -> 0x355B6C
    }
}


