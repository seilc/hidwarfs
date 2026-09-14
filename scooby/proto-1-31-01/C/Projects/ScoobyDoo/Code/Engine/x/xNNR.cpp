/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNNR.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nnrJointsAll[17]; // size: 0x11, address: 0x44B780
unsigned char g_nnrJointsUpperOnly[17]; // size: 0x11, address: 0x0
static class tagxStateLink link_nnr_Idle[16]; // size: 0x40, address: 0x44B7A0
static class tagxStateLink link_nnr_IdleReadyRun[16]; // size: 0x40, address: 0x44B7E0
static class tagxStateLink link_nnr_Walk[12]; // size: 0x30, address: 0x44B820
static class tagxStateLink link_nnr_Run[12]; // size: 0x30, address: 0x44B850
static class tagxStateLink link_nnr_HopFromIdle[3]; // size: 0xC, address: 0x44B880
static class tagxStateLink link_nnr_HopFromRRun[3]; // size: 0xC, address: 0x44B890
static class tagxStateLink link_nnr_DodgeLeftFromIdle[3]; // size: 0xC, address: 0x44B8A0
static class tagxStateLink link_nnr_DodgeRightFromIdle[3]; // size: 0xC, address: 0x44B8B0
static class tagxStateLink link_nnr_DodgeLeftFromRRun[3]; // size: 0xC, address: 0x44B8C0
static class tagxStateLink link_nnr_DodgeRightFromRRun[3]; // size: 0xC, address: 0x44B8D0
static class tagxStateLink link_nnr_AttackJumpFromIdle[3]; // size: 0xC, address: 0x44B8E0
static class tagxStateLink link_nnr_AttackJumpFromRRun[3]; // size: 0xC, address: 0x44B8F0
static class tagxStateLink link_nnr_InjuryStrongAsThread[1]; // size: 0x4, address: 0x4A4188
static class tagxStateLink link_nnr_InjuryFrontAsThread[1]; // size: 0x4, address: 0x4A418C
static class tagxStateLink link_nnr_InjuryJumpingFromIdle[1]; // size: 0x4, address: 0x4A4190
static class tagxStateLink link_nnr_InjuryJumpingFromRRun[1]; // size: 0x4, address: 0x4A4194
static class tagxStateLink link_nnr_Die[1]; // size: 0x4, address: 0x4A4198
static class tagxStateLink link_nnr_DieJumping[1]; // size: 0x4, address: 0x4A419C
class tagxState g_nnrStates[18]; // size: 0x1B0, address: 0x44B900
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNNR.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355AB0 -> 0x00355ADC
*/
// Range: 0x355AB0 -> 0x355ADC
void xNNRStateReset() {
    /* anonymous block */ {
        // Range: 0x355AB0 -> 0x355ADC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNNR.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355AE0 -> 0x00355B0C
*/
// Range: 0x355AE0 -> 0x355B0C
void xNNRStateInit() {
    /* anonymous block */ {
        // Range: 0x355AE0 -> 0x355B0C
    }
}


