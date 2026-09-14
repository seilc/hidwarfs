/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xnhf.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nhfJointsAll[17]; // size: 0x11, address: 0x44D6C0
static class tagxStateLink link_nhf_Idle[16]; // size: 0x40, address: 0x44D6E0
static class tagxStateLink link_nhf_Walk[11]; // size: 0x2C, address: 0x44D720
static class tagxStateLink link_nhf_DodgeLeft[1]; // size: 0x4, address: 0x4A43CC
static class tagxStateLink link_nhf_DodgeRight[1]; // size: 0x4, address: 0x4A43D0
static class tagxStateLink link_nhf_AttackMeleeLeft[1]; // size: 0x4, address: 0x4A43D4
static class tagxStateLink link_nhf_AttackMeleeRight[1]; // size: 0x4, address: 0x4A43D8
static class tagxStateLink link_nhf_InjuryShortInIdle[1]; // size: 0x4, address: 0x4A43DC
static class tagxStateLink link_nhf_InjuryLongInIdle[1]; // size: 0x4, address: 0x4A43E0
static class tagxStateLink link_nhf_InjuryShortInWalk[1]; // size: 0x4, address: 0x4A43E4
static class tagxStateLink link_nhf_InjuryLongInWalk[1]; // size: 0x4, address: 0x4A43E8
static class tagxStateLink link_nhf_InjuryInComboIdle[1]; // size: 0x4, address: 0x4A43EC
static class tagxStateLink link_nhf_Death[1]; // size: 0x4, address: 0x4A43F0
static class tagxStateLink link_nhf_ComboIdle[3]; // size: 0xC, address: 0x44D750
static class tagxStateLink link_nhf_ComboIdleChainsaw[3]; // size: 0xC, address: 0x44D760
static class tagxStateLink link_nhf_ComboMissDeath[1]; // size: 0x4, address: 0x4A43F4
static class tagxStateLink link_nhf_ComboDeathGun[1]; // size: 0x4, address: 0x4A43F8
static class tagxStateLink link_nhf_ComboDeathAxe[1]; // size: 0x4, address: 0x4A43FC
class tagxState g_nhfStates[17]; // size: 0x198, address: 0x44D770
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xnhf.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355ED0 -> 0x00355EFC
*/
// Range: 0x355ED0 -> 0x355EFC
void xNHFStateReset() {
    /* anonymous block */ {
        // Range: 0x355ED0 -> 0x355EFC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xnhf.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355F00 -> 0x00355F2C
*/
// Range: 0x355F00 -> 0x355F2C
void xNHFStateInit() {
    /* anonymous block */ {
        // Range: 0x355F00 -> 0x355F2C
    }
}


