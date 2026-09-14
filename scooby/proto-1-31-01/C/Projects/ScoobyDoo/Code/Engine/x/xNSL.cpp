/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNSL.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nslJointsAll[18]; // size: 0x12, address: 0x44A200
unsigned char g_nslJointsUpperOnly[18]; // size: 0x12, address: 0x44A220
static class tagxStateLink link_nsl_Idle[17]; // size: 0x44, address: 0x44A240
static class tagxStateLink link_nsl_RRun[17]; // size: 0x44, address: 0x44A290
static class tagxStateLink link_nsl_LaughterFromIdle[2]; // size: 0x8, address: 0x44A2D8
static class tagxStateLink link_nsl_LaughterFromRRun[2]; // size: 0x8, address: 0x44A2E0
static class tagxStateLink link_nsl_CallBatsFromIdle[2]; // size: 0x8, address: 0x44A2E8
static class tagxStateLink link_nsl_CallBatsFromRRun[2]; // size: 0x8, address: 0x44A2F0
static class tagxStateLink link_nsl_Walk[13]; // size: 0x34, address: 0x44A300
static class tagxStateLink link_nsl_Run[13]; // size: 0x34, address: 0x44A340
static class tagxStateLink link_nsl_DodgeLeftFromIdle[2]; // size: 0x8, address: 0x44A378
static class tagxStateLink link_nsl_DodgeRightFromIdle[2]; // size: 0x8, address: 0x44A380
static class tagxStateLink link_nsl_DodgeLeftFromRRun[2]; // size: 0x8, address: 0x44A388
static class tagxStateLink link_nsl_DodgeRightFromRRun[2]; // size: 0x8, address: 0x44A390
static class tagxStateLink link_nsl_AttackMeleeLeftFromIdle[2]; // size: 0x8, address: 0x44A398
static class tagxStateLink link_nsl_AttackMeleeRightFromIdle[2]; // size: 0x8, address: 0x44A3A0
static class tagxStateLink link_nsl_AttackMeleeLeftFromRRun[2]; // size: 0x8, address: 0x44A3A8
static class tagxStateLink link_nsl_AttackMeleeRightFromRRun[2]; // size: 0x8, address: 0x44A3B0
static class tagxStateLink link_nsl_AttackMeleeLeftWalk[2]; // size: 0x8, address: 0x44A3B8
static class tagxStateLink link_nsl_AttackMeleeRightWalk[2]; // size: 0x8, address: 0x44A3C0
static class tagxStateLink link_nsl_AttackMeleeLeftRun[2]; // size: 0x8, address: 0x44A3C8
static class tagxStateLink link_nsl_AttackMeleeRightRun[2]; // size: 0x8, address: 0x44A3D0
static class tagxStateLink link_nsl_InjuryStalactite[1]; // size: 0x4, address: 0x4A4048
static class tagxStateLink link_nsl_DeathStalactite[1]; // size: 0x4, address: 0x4A404C
class tagxState g_nslStates[22]; // size: 0x210, address: 0x44A3E0
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNSL.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355870 -> 0x0035589C
*/
// Range: 0x355870 -> 0x35589C
void xNSLStateReset() {
    /* anonymous block */ {
        // Range: 0x355870 -> 0x35589C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNSL.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003558A0 -> 0x003558CC
*/
// Range: 0x3558A0 -> 0x3558CC
void xNSLStateInit() {
    /* anonymous block */ {
        // Range: 0x3558A0 -> 0x3558CC
    }
}


