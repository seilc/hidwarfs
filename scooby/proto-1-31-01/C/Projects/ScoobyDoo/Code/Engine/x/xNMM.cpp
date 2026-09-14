/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nmmJointsAll[16]; // size: 0x10, address: 0x44C4B0
unsigned char g_nmmJointsUpperOnly[16]; // size: 0x10, address: 0x0
static class tagxStateLink link_nmm_Idle[21]; // size: 0x54, address: 0x44C4C0
static class tagxStateLink link_nmm_Run[11]; // size: 0x2C, address: 0x44C520
static class tagxStateLink link_nmm_DodgeLeft[1]; // size: 0x4, address: 0x4A4234
static class tagxStateLink link_nmm_DodgeRight[1]; // size: 0x4, address: 0x4A4238
static class tagxStateLink link_nmm_BlockLeft[1]; // size: 0x4, address: 0x4A423C
static class tagxStateLink link_nmm_BlockRight[1]; // size: 0x4, address: 0x4A4240
static class tagxStateLink link_nmm_AttackMeleeLeft[1]; // size: 0x4, address: 0x4A4244
static class tagxStateLink link_nmm_AttackMeleeRight[1]; // size: 0x4, address: 0x4A4248
static class tagxStateLink link_nmm_AttackMeleeStrong[1]; // size: 0x4, address: 0x4A424C
static class tagxStateLink link_nmm_AttackRangePounce[1]; // size: 0x4, address: 0x4A4250
static class tagxStateLink link_nmm_AttackRangePounceStab[1]; // size: 0x4, address: 0x4A4254
static class tagxStateLink link_nmm_InjuryFrontInIdle[1]; // size: 0x4, address: 0x4A4258
static class tagxStateLink link_nmm_InjuryStrongInIdle[1]; // size: 0x4, address: 0x4A425C
static class tagxStateLink link_nmm_InjuryFrontInRun[1]; // size: 0x4, address: 0x4A4260
static class tagxStateLink link_nmm_InjuryStrongInRun[1]; // size: 0x4, address: 0x4A4264
static class tagxStateLink link_nmm_InjuryInThread[1]; // size: 0x4, address: 0x4A4268
static class tagxStateLink link_nmm_DeathMelee1[1]; // size: 0x4, address: 0x4A426C
static class tagxStateLink link_nmm_DeathRange1[1]; // size: 0x4, address: 0x4A4270
static class tagxStateLink link_nmm_ComboIdle[3]; // size: 0xC, address: 0x44C550
static class tagxStateLink link_nmm_ComboIdleChainsaw[3]; // size: 0xC, address: 0x44C560
static class tagxStateLink link_nmm_ComboMissDeath[1]; // size: 0x4, address: 0x4A4274
static class tagxStateLink link_nmm_ComboDeathGun[1]; // size: 0x4, address: 0x4A4278
static class tagxStateLink link_nmm_ComboDeathAxe[1]; // size: 0x4, address: 0x4A427C
class tagxState g_nmmStates[23]; // size: 0x228, address: 0x44C570
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355C90 -> 0x00355CBC
*/
// Range: 0x355C90 -> 0x355CBC
void xNMMStateReset() {
    /* anonymous block */ {
        // Range: 0x355C90 -> 0x355CBC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355CC0 -> 0x00355CEC
*/
// Range: 0x355CC0 -> 0x355CEC
void xNMMStateInit() {
    /* anonymous block */ {
        // Range: 0x355CC0 -> 0x355CEC
    }
}


