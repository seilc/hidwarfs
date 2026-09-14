/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNNM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nnmJointsAll[14]; // size: 0xE, address: 0x44C110
unsigned char g_nnmJointsUpperOnly[14]; // size: 0xE, address: 0x0
static class tagxStateLink link_nnm_Idle[18]; // size: 0x48, address: 0x44C120
static class tagxStateLink link_nnm_Walk[12]; // size: 0x30, address: 0x44C170
static class tagxStateLink link_nnm_DodgeLeft[1]; // size: 0x4, address: 0x4A41D0
static class tagxStateLink link_nnm_DodgeRight[1]; // size: 0x4, address: 0x4A41D4
static class tagxStateLink link_nnm_AttackRangeFront[1]; // size: 0x4, address: 0x4A41D8
static class tagxStateLink link_nnm_AttackRangeLeft[1]; // size: 0x4, address: 0x4A41DC
static class tagxStateLink link_nnm_AttackRangeRight[1]; // size: 0x4, address: 0x4A41E0
static class tagxStateLink link_nnm_AttackMelee[1]; // size: 0x4, address: 0x4A41E4
static class tagxStateLink link_nnm_InjuryMeleeComboIdle[1]; // size: 0x4, address: 0x4A41E8
static class tagxStateLink link_nnm_InjuryMeleeIdle[1]; // size: 0x4, address: 0x4A41EC
static class tagxStateLink link_nnm_InjuryRangeIdle[1]; // size: 0x4, address: 0x4A41F0
static class tagxStateLink link_nnm_InjuryMeleeWalk[1]; // size: 0x4, address: 0x4A41F4
static class tagxStateLink link_nnm_InjuryRangeWalk[1]; // size: 0x4, address: 0x4A41F8
static class tagxStateLink link_nnm_DeathMelee1[1]; // size: 0x4, address: 0x4A41FC
static class tagxStateLink link_nnm_DeathMelee2[1]; // size: 0x4, address: 0x4A4200
static class tagxStateLink link_nnm_DeathMelee3[1]; // size: 0x4, address: 0x4A4204
static class tagxStateLink link_nnm_DeathMelee4[1]; // size: 0x4, address: 0x4A4208
static class tagxStateLink link_nnm_DeathRange1[1]; // size: 0x4, address: 0x4A420C
static class tagxStateLink link_nnm_DeathRange2[1]; // size: 0x4, address: 0x4A4210
static class tagxStateLink link_nnm_DeathRange3[1]; // size: 0x4, address: 0x4A4214
static class tagxStateLink link_nnm_DeathRange4[1]; // size: 0x4, address: 0x4A4218
static class tagxStateLink link_nnm_ComboIdle[3]; // size: 0xC, address: 0x44C1A0
static class tagxStateLink link_nnm_ComboIdleChainsaw[3]; // size: 0xC, address: 0x44C1B0
static class tagxStateLink link_nnm_ComboMissDeath[1]; // size: 0x4, address: 0x4A421C
static class tagxStateLink link_nnm_ComboDeathGun[1]; // size: 0x4, address: 0x4A4220
static class tagxStateLink link_nnm_ComboDeathAxe[1]; // size: 0x4, address: 0x4A4224
class tagxState g_nnmStates[26]; // size: 0x270, address: 0x44C1C0
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNNM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355BD0 -> 0x00355BFC
*/
// Range: 0x355BD0 -> 0x355BFC
void xNNMStateReset() {
    /* anonymous block */ {
        // Range: 0x355BD0 -> 0x355BFC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNNM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355C00 -> 0x00355C2C
*/
// Range: 0x355C00 -> 0x355C2C
void xNNMStateInit() {
    /* anonymous block */ {
        // Range: 0x355C00 -> 0x355C2C
    }
}


