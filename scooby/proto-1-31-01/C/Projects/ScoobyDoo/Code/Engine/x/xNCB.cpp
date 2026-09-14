/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNCB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_ncbJointsAll[16]; // size: 0x10, address: 0x44E7F0
unsigned char g_ncbJointsUpperOnly[16]; // size: 0x10, address: 0x44E800
static class tagxStateLink link_ncb_PreBirth[1]; // size: 0x4, address: 0x4A4514
static class tagxStateLink link_ncb_PopUp[1]; // size: 0x4, address: 0x4A4518
static class tagxStateLink link_ncb_Idle[17]; // size: 0x44, address: 0x44E810
static class tagxStateLink link_ncb_StandRRun[17]; // size: 0x44, address: 0x44E860
static class tagxStateLink link_ncb_Walk[12]; // size: 0x30, address: 0x44E8B0
static class tagxStateLink link_ncb_Run[12]; // size: 0x30, address: 0x44E8E0
static class tagxStateLink link_ncb_DodgeLeft[1]; // size: 0x4, address: 0x4A451C
static class tagxStateLink link_ncb_DodgeRight[1]; // size: 0x4, address: 0x4A4520
static class tagxStateLink link_ncb_DodgeLeftReady[1]; // size: 0x4, address: 0x4A4524
static class tagxStateLink link_ncb_DodgeRightReady[1]; // size: 0x4, address: 0x4A4528
static class tagxStateLink link_ncb_AttackLeft[1]; // size: 0x4, address: 0x4A452C
static class tagxStateLink link_ncb_AttackSpin[1]; // size: 0x4, address: 0x4A4530
static class tagxStateLink link_ncb_AttackSwipe[1]; // size: 0x4, address: 0x4A4534
static class tagxStateLink link_ncb_AttackLeftReady[1]; // size: 0x4, address: 0x4A4538
static class tagxStateLink link_ncb_AttackSpinReady[1]; // size: 0x4, address: 0x4A453C
static class tagxStateLink link_ncb_AttackSwipeReady[1]; // size: 0x4, address: 0x4A4540
static class tagxStateLink link_ncb_Injury1[1]; // size: 0x4, address: 0x4A4544
static class tagxStateLink link_ncb_Injury2[1]; // size: 0x4, address: 0x4A4548
static class tagxStateLink link_ncb_Injury1Ready[1]; // size: 0x4, address: 0x4A454C
static class tagxStateLink link_ncb_Injury2Ready[1]; // size: 0x4, address: 0x4A4550
static class tagxStateLink link_ncb_Injury1WhileMoving[1]; // size: 0x4, address: 0x4A4554
static class tagxStateLink link_ncb_Injury2WhileMoving[1]; // size: 0x4, address: 0x4A4558
static class tagxStateLink link_ncb_DeathMelee1[1]; // size: 0x4, address: 0x4A455C
static class tagxStateLink link_ncb_DeathMelee2[1]; // size: 0x4, address: 0x4A4560
static class tagxStateLink link_ncb_DeathMelee3[1]; // size: 0x4, address: 0x4A4564
static class tagxStateLink link_ncb_DeathMelee4[1]; // size: 0x4, address: 0x4A4568
static class tagxStateLink link_ncb_DeathRange1[1]; // size: 0x4, address: 0x4A456C
static class tagxStateLink link_ncb_DeathRange2[1]; // size: 0x4, address: 0x4A4570
static class tagxStateLink link_ncb_DeathRange3[1]; // size: 0x4, address: 0x4A4574
static class tagxStateLink link_ncb_DeathRange4[1]; // size: 0x4, address: 0x4A4578
class tagxState g_ncbStates[30]; // size: 0x2D0, address: 0x44E910
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNCB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356110 -> 0x0035613C
*/
// Range: 0x356110 -> 0x35613C
void xNCBStateReset() {
    /* anonymous block */ {
        // Range: 0x356110 -> 0x35613C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNCB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356140 -> 0x0035616C
*/
// Range: 0x356140 -> 0x35616C
void xNCBStateInit() {
    /* anonymous block */ {
        // Range: 0x356140 -> 0x35616C
    }
}


