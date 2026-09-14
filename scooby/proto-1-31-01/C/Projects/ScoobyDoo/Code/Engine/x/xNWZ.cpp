/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNWZ.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nwzJointsAll[51]; // size: 0x33, address: 0x449A60
unsigned char g_nwzJointsUpperOnly[51]; // size: 0x33, address: 0x449AA0
static class tagxStateLink link_nwz_Idle[19]; // size: 0x4C, address: 0x449AE0
static class tagxStateLink link_nwz_Run[11]; // size: 0x2C, address: 0x449B30
static class tagxStateLink link_nwz_DodgeLeft[1]; // size: 0x4, address: 0x4A3FB0
static class tagxStateLink link_nwz_DodgeRight[1]; // size: 0x4, address: 0x4A3FB4
static class tagxStateLink link_nwz_BlockLeft[1]; // size: 0x4, address: 0x4A3FB8
static class tagxStateLink link_nwz_BlockRight[1]; // size: 0x4, address: 0x4A3FBC
static class tagxStateLink link_nwz_AttackMeleeKick[1]; // size: 0x4, address: 0x4A3FC0
static class tagxStateLink link_nwz_AttackRangeCape[1]; // size: 0x4, address: 0x4A3FC4
static class tagxStateLink link_nwz_AttackRangeThrow[1]; // size: 0x4, address: 0x4A3FC8
static class tagxStateLink link_nwz_AttackRangeSky[1]; // size: 0x4, address: 0x4A3FCC
static class tagxStateLink link_nwz_InjuryMeleeFromIdle[1]; // size: 0x4, address: 0x4A3FD0
static class tagxStateLink link_nwz_InjuryRangeFromIdle[1]; // size: 0x4, address: 0x4A3FD4
static class tagxStateLink link_nwz_InjuryMeleeUpperBodyThread[1]; // size: 0x4, address: 0x4A3FD8
static class tagxStateLink link_nwz_InjuryRangeUpperBodyThread[1]; // size: 0x4, address: 0x4A3FDC
static class tagxStateLink link_nwz_DieVortex[1]; // size: 0x4, address: 0x4A3FE0
class tagxState g_nwzStates[15]; // size: 0x168, address: 0x449B60
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNWZ.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003556F0 -> 0x0035571C
*/
// Range: 0x3556F0 -> 0x35571C
void xNWZStateReset() {
    /* anonymous block */ {
        // Range: 0x3556F0 -> 0x35571C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNWZ.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355720 -> 0x0035574C
*/
// Range: 0x355720 -> 0x35574C
void xNWZStateInit() {
    /* anonymous block */ {
        // Range: 0x355720 -> 0x35574C
    }
}


