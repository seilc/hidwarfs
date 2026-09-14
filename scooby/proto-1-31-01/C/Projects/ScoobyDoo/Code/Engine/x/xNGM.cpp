/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNGM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_ngmJointsAll[18]; // size: 0x12, address: 0x44DA20
unsigned char g_ngmJointsUpperOnly[18]; // size: 0x12, address: 0x0
static class tagxStateLink link_ngm_Idle[20]; // size: 0x50, address: 0x44DA40
static class tagxStateLink link_ngm_PreBirth[1]; // size: 0x4, address: 0x4A4410
static class tagxStateLink link_ngm_RRun[19]; // size: 0x4C, address: 0x44DA90
static class tagxStateLink link_ngm_Walk[13]; // size: 0x34, address: 0x44DAE0
static class tagxStateLink link_ngm_Run[13]; // size: 0x34, address: 0x44DB20
static class tagxStateLink link_ngm_DodgeLeft[1]; // size: 0x4, address: 0x4A4414
static class tagxStateLink link_ngm_DodgeRight[1]; // size: 0x4, address: 0x4A4418
static class tagxStateLink link_ngm_AttackRangeFront[1]; // size: 0x4, address: 0x4A441C
static class tagxStateLink link_ngm_AttackRangeLeft[1]; // size: 0x4, address: 0x4A4420
static class tagxStateLink link_ngm_AttackRangeRight[1]; // size: 0x4, address: 0x4A4424
static class tagxStateLink link_ngm_AttackMelee[1]; // size: 0x4, address: 0x4A4428
static class tagxStateLink link_ngm_InjuryMelee[1]; // size: 0x4, address: 0x4A442C
static class tagxStateLink link_ngm_InjuryRange[1]; // size: 0x4, address: 0x4A4430
static class tagxStateLink link_ngm_InjuryMeleeThread[1]; // size: 0x4, address: 0x4A4434
static class tagxStateLink link_ngm_InjuryRangeThread[1]; // size: 0x4, address: 0x4A4438
static class tagxStateLink link_ngm_DeathMelee1[1]; // size: 0x4, address: 0x4A443C
static class tagxStateLink link_ngm_DeathMelee2[1]; // size: 0x4, address: 0x4A4440
static class tagxStateLink link_ngm_DeathMelee3[1]; // size: 0x4, address: 0x4A4444
static class tagxStateLink link_ngm_DeathMelee4[1]; // size: 0x4, address: 0x4A4448
static class tagxStateLink link_ngm_DeathRange1[1]; // size: 0x4, address: 0x4A444C
static class tagxStateLink link_ngm_DeathRange2[1]; // size: 0x4, address: 0x4A4450
static class tagxStateLink link_ngm_DeathRange3[1]; // size: 0x4, address: 0x4A4454
static class tagxStateLink link_ngm_DeathRange4[1]; // size: 0x4, address: 0x4A4458
static class tagxStateLink link_ngm_ComboIdle[3]; // size: 0xC, address: 0x44DB58
static class tagxStateLink link_ngm_ComboIdleChainsaw[3]; // size: 0xC, address: 0x44DB68
static class tagxStateLink link_ngm_ComboMissDeath[1]; // size: 0x4, address: 0x4A445C
static class tagxStateLink link_ngm_ComboDeathGun[1]; // size: 0x4, address: 0x4A4460
static class tagxStateLink link_ngm_ComboDeathAxe[1]; // size: 0x4, address: 0x4A4464
class tagxState g_ngmStates[28]; // size: 0x2A0, address: 0x44DB80
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNGM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355F90 -> 0x00355FBC
*/
// Range: 0x355F90 -> 0x355FBC
void xNGMStateReset() {
    /* anonymous block */ {
        // Range: 0x355F90 -> 0x355FBC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNGM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355FC0 -> 0x00355FEC
*/
// Range: 0x355FC0 -> 0x355FEC
void xNGMStateInit() {
    /* anonymous block */ {
        // Range: 0x355FC0 -> 0x355FEC
    }
}


