/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNTR.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_ntrJointsAll[17]; // size: 0x11, address: 0x44A0A0
static class tagxStateLink link_ntr_Idle[12]; // size: 0x30, address: 0x44A0C0
static class tagxStateLink link_ntr_AttackNear1[1]; // size: 0x4, address: 0x4A4028
static class tagxStateLink link_ntr_AttackNear2[1]; // size: 0x4, address: 0x4A402C
static class tagxStateLink link_ntr_AttackFar[1]; // size: 0x4, address: 0x4A4030
static class tagxStateLink link_ntr_InjuryMiddle[1]; // size: 0x4, address: 0x4A4034
static class tagxStateLink link_ntr_Death[1]; // size: 0x4, address: 0x4A4038
class tagxState g_ntrStates[6]; // size: 0x90, address: 0x44A0F0
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNTR.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003557B0 -> 0x003557DC
*/
// Range: 0x3557B0 -> 0x3557DC
void xNTRStateReset() {
    /* anonymous block */ {
        // Range: 0x3557B0 -> 0x3557DC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNTR.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003557E0 -> 0x0035580C
*/
// Range: 0x3557E0 -> 0x35580C
void xNTRStateInit() {
    /* anonymous block */ {
        // Range: 0x3557E0 -> 0x35580C
    }
}


