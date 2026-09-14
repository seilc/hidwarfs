/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNSK.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nskJointsAll[16]; // size: 0x10, address: 0x44A5F0
unsigned char g_nskJointsUpperOnly[16]; // size: 0x10, address: 0x44A600
static class tagxStateLink link_nsk_PreBirth[1]; // size: 0x4, address: 0x4A4050
static class tagxStateLink link_nsk_PopUp[1]; // size: 0x4, address: 0x4A4054
static class tagxStateLink link_nsk_Dive[1]; // size: 0x4, address: 0x4A4058
static class tagxStateLink link_nsk_Idle[22]; // size: 0x58, address: 0x44A610
static class tagxStateLink link_nsk_StandRRun[22]; // size: 0x58, address: 0x44A670
static class tagxStateLink link_nsk_Walk[12]; // size: 0x30, address: 0x44A6D0
static class tagxStateLink link_nsk_Run[12]; // size: 0x30, address: 0x44A700
static class tagxStateLink link_nsk_DodgeLeftIdle[1]; // size: 0x4, address: 0x4A405C
static class tagxStateLink link_nsk_DodgeRightIdle[1]; // size: 0x4, address: 0x4A4060
static class tagxStateLink link_nsk_BlockLeftIdle[1]; // size: 0x4, address: 0x4A4064
static class tagxStateLink link_nsk_BlockRightIdle[1]; // size: 0x4, address: 0x4A4068
static class tagxStateLink link_nsk_DodgeLeftReady[1]; // size: 0x4, address: 0x4A406C
static class tagxStateLink link_nsk_DodgeRightReady[1]; // size: 0x4, address: 0x4A4070
static class tagxStateLink link_nsk_BlockLeftReady[1]; // size: 0x4, address: 0x4A4074
static class tagxStateLink link_nsk_BlockRightReady[1]; // size: 0x4, address: 0x4A4078
static class tagxStateLink link_nsk_AttackMeleeLeftIdle[1]; // size: 0x4, address: 0x4A407C
static class tagxStateLink link_nsk_AttackMeleeRightIdle[1]; // size: 0x4, address: 0x4A4080
static class tagxStateLink link_nsk_AttackStrongSpinIdle[1]; // size: 0x4, address: 0x4A4084
static class tagxStateLink link_nsk_AttackStrongSlapIdle[1]; // size: 0x4, address: 0x4A4088
static class tagxStateLink link_nsk_AttackMeleeLeftRRun[1]; // size: 0x4, address: 0x4A408C
static class tagxStateLink link_nsk_AttackMeleeRightRRun[1]; // size: 0x4, address: 0x4A4090
static class tagxStateLink link_nsk_AttackStrongSpinRRun[1]; // size: 0x4, address: 0x4A4094
static class tagxStateLink link_nsk_AttackStrongSlapRRun[1]; // size: 0x4, address: 0x4A4098
static class tagxStateLink link_nsk_InjuryFromIdle[1]; // size: 0x4, address: 0x4A409C
static class tagxStateLink link_nsk_InjuryStrongFromIdle[1]; // size: 0x4, address: 0x4A40A0
static class tagxStateLink link_nsk_InjuryFromRRun[1]; // size: 0x4, address: 0x4A40A4
static class tagxStateLink link_nsk_InjuryStrongFromRRun[1]; // size: 0x4, address: 0x4A40A8
static class tagxStateLink link_nsk_InjuryUpperBodyThread[1]; // size: 0x4, address: 0x4A40AC
static class tagxStateLink link_nsk_DieHeartAttack[1]; // size: 0x4, address: 0x4A40B0
static class tagxStateLink link_nsk_DieFlyBack[1]; // size: 0x4, address: 0x4A40B4
static class tagxStateLink link_nsk_DieFallForward[1]; // size: 0x4, address: 0x4A40B8
static class tagxStateLink link_nsk_DieBrokenSpine[1]; // size: 0x4, address: 0x4A40BC
static class tagxStateLink link_nsk_ComboIdle[3]; // size: 0xC, address: 0x44A730
static class tagxStateLink link_nsk_ComboIdleChainsaw[3]; // size: 0xC, address: 0x44A740
static class tagxStateLink link_nsk_ComboMissDeath[1]; // size: 0x4, address: 0x4A40C0
static class tagxStateLink link_nsk_ComboDeathGun[1]; // size: 0x4, address: 0x4A40C4
static class tagxStateLink link_nsk_ComboDeathAxe[1]; // size: 0x4, address: 0x4A40C8
class tagxState g_nskStates[37]; // size: 0x378, address: 0x44A750
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNSK.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003558D0 -> 0x003558FC
*/
// Range: 0x3558D0 -> 0x3558FC
void xNSKStateReset() {
    /* anonymous block */ {
        // Range: 0x3558D0 -> 0x3558FC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNSK.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355900 -> 0x0035592C
*/
// Range: 0x355900 -> 0x35592C
void xNSKStateInit() {
    /* anonymous block */ {
        // Range: 0x355900 -> 0x35592C
    }
}


