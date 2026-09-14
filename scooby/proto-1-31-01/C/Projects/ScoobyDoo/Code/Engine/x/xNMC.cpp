/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nmcJointsAll[16]; // size: 0x10, address: 0x44CD50
unsigned char g_nmcJointsUpperOnly[16]; // size: 0x10, address: 0x0
static class tagxStateLink link_nmc_Idle[21]; // size: 0x54, address: 0x44CD60
static class tagxStateLink link_nmc_Run[11]; // size: 0x2C, address: 0x44CDC0
static class tagxStateLink link_nmc_DodgeLeft[1]; // size: 0x4, address: 0x4A42E8
static class tagxStateLink link_nmc_DodgeRight[1]; // size: 0x4, address: 0x4A42EC
static class tagxStateLink link_nmc_BlockLeft[1]; // size: 0x4, address: 0x4A42F0
static class tagxStateLink link_nmc_BlockRight[1]; // size: 0x4, address: 0x4A42F4
static class tagxStateLink link_nmc_AttackMeleeLeft[1]; // size: 0x4, address: 0x4A42F8
static class tagxStateLink link_nmc_AttackMeleeRight[1]; // size: 0x4, address: 0x4A42FC
static class tagxStateLink link_nmc_AttackMeleeStrong[1]; // size: 0x4, address: 0x4A4300
static class tagxStateLink link_nmc_AttackRangePounce[1]; // size: 0x4, address: 0x4A4304
static class tagxStateLink link_nmc_AttackRangePounceSlash[1]; // size: 0x4, address: 0x4A4308
static class tagxStateLink link_nmc_InjuryFrontInIdle[1]; // size: 0x4, address: 0x4A430C
static class tagxStateLink link_nmc_InjuryStrongInIdle[1]; // size: 0x4, address: 0x4A4310
static class tagxStateLink link_nmc_InjuryFrontInRun[1]; // size: 0x4, address: 0x4A4314
static class tagxStateLink link_nmc_InjuryStrongInRun[1]; // size: 0x4, address: 0x4A4318
static class tagxStateLink link_nmc_InjuryInThread[1]; // size: 0x4, address: 0x4A431C
static class tagxStateLink link_nmc_DeathMelee1[1]; // size: 0x4, address: 0x4A4320
static class tagxStateLink link_nmc_DeathRange1[1]; // size: 0x4, address: 0x4A4324
static class tagxStateLink link_nmc_ComboIdle[3]; // size: 0xC, address: 0x44CDF0
static class tagxStateLink link_nmc_ComboIdleChainsaw[3]; // size: 0xC, address: 0x44CE00
static class tagxStateLink link_nmc_ComboMissDeath[1]; // size: 0x4, address: 0x4A4328
static class tagxStateLink link_nmc_ComboDeathGun[1]; // size: 0x4, address: 0x4A432C
static class tagxStateLink link_nmc_ComboDeathAxe[1]; // size: 0x4, address: 0x4A4330
class tagxState g_nmcStates[23]; // size: 0x228, address: 0x44CE10
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355DB0 -> 0x00355DDC
*/
// Range: 0x355DB0 -> 0x355DDC
void xNMCStateReset() {
    /* anonymous block */ {
        // Range: 0x355DB0 -> 0x355DDC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355DE0 -> 0x00355E0C
*/
// Range: 0x355DE0 -> 0x355E0C
void xNMCStateInit() {
    /* anonymous block */ {
        // Range: 0x355DE0 -> 0x355E0C
    }
}


