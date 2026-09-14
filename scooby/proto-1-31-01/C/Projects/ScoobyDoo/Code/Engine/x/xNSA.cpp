/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNSA.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nsaJointsAll[16]; // size: 0x10, address: 0x44ACA0
unsigned char g_nsaJointsUpperOnly[16]; // size: 0x10, address: 0x44ACB0
static class tagxStateLink link_nsa_Idle[24]; // size: 0x60, address: 0x44ACC0
static class tagxStateLink link_nsa_StandRRun[22]; // size: 0x58, address: 0x44AD20
static class tagxStateLink link_nsa_Walk[14]; // size: 0x38, address: 0x44AD80
static class tagxStateLink link_nsa_Run[14]; // size: 0x38, address: 0x44ADC0
static class tagxStateLink link_nsa_DodgeLeft[1]; // size: 0x4, address: 0x4A40D8
static class tagxStateLink link_nsa_DodgeRight[1]; // size: 0x4, address: 0x4A40DC
static class tagxStateLink link_nsa_BlockLeft[1]; // size: 0x4, address: 0x4A40E0
static class tagxStateLink link_nsa_BlockRight[1]; // size: 0x4, address: 0x4A40E4
static class tagxStateLink link_nsa_DodgeLeftReady[1]; // size: 0x4, address: 0x4A40E8
static class tagxStateLink link_nsa_DodgeRightReady[1]; // size: 0x4, address: 0x4A40EC
static class tagxStateLink link_nsa_BlockLeftReady[1]; // size: 0x4, address: 0x4A40F0
static class tagxStateLink link_nsa_BlockRightReady[1]; // size: 0x4, address: 0x4A40F4
static class tagxStateLink link_nsa_RotateClkwise[1]; // size: 0x4, address: 0x4A40F8
static class tagxStateLink link_nsa_RotateCClkwise[1]; // size: 0x4, address: 0x4A40FC
static class tagxStateLink link_nsa_AttackMeleeLeft[1]; // size: 0x4, address: 0x4A4100
static class tagxStateLink link_nsa_AttackMeleeRight[1]; // size: 0x4, address: 0x4A4104
static class tagxStateLink link_nsa_AttackStrong[1]; // size: 0x4, address: 0x4A4108
static class tagxStateLink link_nsa_InjuryStrongThread[1]; // size: 0x4, address: 0x4A410C
static class tagxStateLink link_nsa_InjuryThread[1]; // size: 0x4, address: 0x4A4110
static class tagxStateLink link_nsa_InjuryStrongUpperBody[1]; // size: 0x4, address: 0x4A4114
static class tagxStateLink link_nsa_InjuryUpperBody[1]; // size: 0x4, address: 0x4A4118
static class tagxStateLink link_nsa_InjuryMoveThread[1]; // size: 0x4, address: 0x4A411C
static class tagxStateLink link_nsa_InjuryStrongMoveThread[1]; // size: 0x4, address: 0x4A4120
static class tagxStateLink link_nsa_DieMelee[1]; // size: 0x4, address: 0x4A4124
static class tagxStateLink link_nsa_DieRange[1]; // size: 0x4, address: 0x4A4128
static class tagxStateLink link_nsa_DieOpossum1[1]; // size: 0x4, address: 0x4A412C
static class tagxStateLink link_nsa_WakeOpossum1[1]; // size: 0x4, address: 0x4A4130
static class tagxStateLink link_nsa_DieOpossum2[1]; // size: 0x4, address: 0x4A4134
static class tagxStateLink link_nsa_WakeOpossum2[1]; // size: 0x4, address: 0x4A4138
static class tagxStateLink link_nsa_ComboIdle[3]; // size: 0xC, address: 0x44ADF8
static class tagxStateLink link_nsa_ComboIdleChainsaw[3]; // size: 0xC, address: 0x44AE08
static class tagxStateLink link_nsa_ComboMissDeath[1]; // size: 0x4, address: 0x4A413C
static class tagxStateLink link_nsa_ComboDeathGun[1]; // size: 0x4, address: 0x4A4140
static class tagxStateLink link_nsa_ComboDeathAxe[1]; // size: 0x4, address: 0x4A4144
class tagxState g_nsaStates[34]; // size: 0x330, address: 0x44AE20
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNSA.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355990 -> 0x003559BC
*/
// Range: 0x355990 -> 0x3559BC
void xNSAStateReset() {
    /* anonymous block */ {
        // Range: 0x355990 -> 0x3559BC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNSA.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003559C0 -> 0x003559EC
*/
// Range: 0x3559C0 -> 0x3559EC
void xNSAStateInit() {
    /* anonymous block */ {
        // Range: 0x3559C0 -> 0x3559EC
    }
}


