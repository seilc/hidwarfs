/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNAB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nabJointsAll[57]; // size: 0x39, address: 0x44F190
unsigned char g_nabJointsUpperOnly[57]; // size: 0x39, address: 0x0
static class tagxStateLink link_nab_Idle[14]; // size: 0x38, address: 0x44F1D0
static class tagxStateLink link_nab_Run[3]; // size: 0xC, address: 0x44F208
static class tagxStateLink link_nab_DodgeLeft[1]; // size: 0x4, address: 0x4A4604
static class tagxStateLink link_nab_DodgeRight[1]; // size: 0x4, address: 0x4A4608
static class tagxStateLink link_nab_BlockLeft[1]; // size: 0x4, address: 0x4A460C
static class tagxStateLink link_nab_BlockRight[1]; // size: 0x4, address: 0x4A4610
static class tagxStateLink link_nab_RotateClkwise[2]; // size: 0x8, address: 0x44F218
static class tagxStateLink link_nab_RotateCClkwise[2]; // size: 0x8, address: 0x44F220
static class tagxStateLink link_nab_AttackMeleeSaw[1]; // size: 0x4, address: 0x4A4614
static class tagxStateLink link_nab_AttackMeleeHammer3[1]; // size: 0x4, address: 0x4A4618
static class tagxStateLink link_nab_AttackMeleeBackhand[1]; // size: 0x4, address: 0x4A461C
static class tagxStateLink link_nab_InjuryMelee[1]; // size: 0x4, address: 0x4A4620
static class tagxStateLink link_nab_InjuryRange[1]; // size: 0x4, address: 0x4A4624
class tagxState g_nabStates[13]; // size: 0x138, address: 0x44F230
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNAB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003566C0 -> 0x003566EC
*/
// Range: 0x3566C0 -> 0x3566EC
void xNABStateReset() {
    /* anonymous block */ {
        // Range: 0x3566C0 -> 0x3566EC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNAB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003566F0 -> 0x0035671C
*/
// Range: 0x3566F0 -> 0x35671C
void xNABStateInit() {
    /* anonymous block */ {
        // Range: 0x3566F0 -> 0x35671C
    }
}


