/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNWC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nwcJointsAll[14]; // size: 0xE, address: 0x449CC8
unsigned char g_nwcJointsUpperOnly[14]; // size: 0xE, address: 0x449CD8
static class tagxStateLink link_nwc_Idle[18]; // size: 0x48, address: 0x449CF0
static class tagxStateLink link_nwc_Hop[12]; // size: 0x30, address: 0x449D40
static class tagxStateLink link_nwc_HopPain[12]; // size: 0x30, address: 0x449D70
static class tagxStateLink link_nwc_Walk[11]; // size: 0x2C, address: 0x449DA0
static class tagxStateLink link_nwc_DodgeLeft[1]; // size: 0x4, address: 0x4A3FE4
static class tagxStateLink link_nwc_AttackLeft[3]; // size: 0xC, address: 0x449DD0
static class tagxStateLink link_nwc_AttackRight[3]; // size: 0xC, address: 0x449DE0
static class tagxStateLink link_nwc_AttackStrong[3]; // size: 0xC, address: 0x449DF0
static class tagxStateLink link_nwc_InjuryMelee[1]; // size: 0x4, address: 0x4A3FE8
static class tagxStateLink link_nwc_InjuryStrongInComboIdle[1]; // size: 0x4, address: 0x4A3FEC
static class tagxStateLink link_nwc_InjuryMeleeStrong[1]; // size: 0x4, address: 0x4A3FF0
static class tagxStateLink link_nwc_InjuryInWalkStop[1]; // size: 0x4, address: 0x4A3FF4
static class tagxStateLink link_nwc_InjuryInWalkKeepWalking[1]; // size: 0x4, address: 0x4A3FF8
static class tagxStateLink link_nwc_DeathMelee1[1]; // size: 0x4, address: 0x4A3FFC
static class tagxStateLink link_nwc_DeathMelee2[1]; // size: 0x4, address: 0x4A4000
static class tagxStateLink link_nwc_DeathMelee3[1]; // size: 0x4, address: 0x4A4004
static class tagxStateLink link_nwc_DeathMelee4[1]; // size: 0x4, address: 0x4A4008
static class tagxStateLink link_nwc_DeathRange1[1]; // size: 0x4, address: 0x4A400C
static class tagxStateLink link_nwc_DeathRange2[1]; // size: 0x4, address: 0x4A4010
static class tagxStateLink link_nwc_DeathRange3[1]; // size: 0x4, address: 0x4A4014
static class tagxStateLink link_nwc_DeathRange4[1]; // size: 0x4, address: 0x4A4018
static class tagxStateLink link_nwc_ComboIdle[5]; // size: 0x14, address: 0x449E00
static class tagxStateLink link_nwc_ComboIdleChainsaw[3]; // size: 0xC, address: 0x449E18
static class tagxStateLink link_nwc_ComboMissDeath[1]; // size: 0x4, address: 0x4A401C
static class tagxStateLink link_nwc_ComboDeathGun[1]; // size: 0x4, address: 0x4A4020
static class tagxStateLink link_nwc_ComboDeathAxe[1]; // size: 0x4, address: 0x4A4024
class tagxState g_nwcStates[26]; // size: 0x270, address: 0x449E30
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNWC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355750 -> 0x0035577C
*/
// Range: 0x355750 -> 0x35577C
void xNWCStateReset() {
    /* anonymous block */ {
        // Range: 0x355750 -> 0x35577C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNWC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355780 -> 0x003557AC
*/
// Range: 0x355780 -> 0x3557AC
void xNWCStateInit() {
    /* anonymous block */ {
        // Range: 0x355780 -> 0x3557AC
    }
}


