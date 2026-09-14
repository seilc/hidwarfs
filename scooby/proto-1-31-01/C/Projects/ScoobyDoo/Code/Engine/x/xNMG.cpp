/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMG.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nmgJointsAll[16]; // size: 0x10, address: 0x44CB20
unsigned char g_nmgJointsUpperOnly[16]; // size: 0x10, address: 0x44CB30
static class tagxStateLink link_nmg_Idle[14]; // size: 0x38, address: 0x44CB40
static class tagxStateLink link_nmg_Walk[11]; // size: 0x2C, address: 0x44CB80
static class tagxStateLink link_nmg_AttackMeleeLeft[1]; // size: 0x4, address: 0x4A42AC
static class tagxStateLink link_nmg_AttackMeleeRight[1]; // size: 0x4, address: 0x4A42B0
static class tagxStateLink link_nmg_AttackStrong[1]; // size: 0x4, address: 0x4A42B4
static class tagxStateLink link_nmg_InjuryMeleeIdle[1]; // size: 0x4, address: 0x4A42B8
static class tagxStateLink link_nmg_InjuryRangeIdle[1]; // size: 0x4, address: 0x4A42BC
static class tagxStateLink link_nmg_InjuryMeleeWalk[1]; // size: 0x4, address: 0x4A42C0
static class tagxStateLink link_nmg_InjuryRangeWalk[1]; // size: 0x4, address: 0x4A42C4
static class tagxStateLink link_nmg_DeathMelee1[1]; // size: 0x4, address: 0x4A42C8
static class tagxStateLink link_nmg_DeathMelee2[1]; // size: 0x4, address: 0x4A42CC
static class tagxStateLink link_nmg_DeathMelee3[1]; // size: 0x4, address: 0x4A42D0
static class tagxStateLink link_nmg_DeathMelee4[1]; // size: 0x4, address: 0x4A42D4
static class tagxStateLink link_nmg_DeathRange1[1]; // size: 0x4, address: 0x4A42D8
static class tagxStateLink link_nmg_DeathRange2[1]; // size: 0x4, address: 0x4A42DC
static class tagxStateLink link_nmg_DeathRange3[1]; // size: 0x4, address: 0x4A42E0
static class tagxStateLink link_nmg_DeathRange4[1]; // size: 0x4, address: 0x4A42E4
class tagxState g_nmgStates[17]; // size: 0x198, address: 0x44CBB0
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMG.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355D50 -> 0x00355D7C
*/
// Range: 0x355D50 -> 0x355D7C
void xNMGStateReset() {
    /* anonymous block */ {
        // Range: 0x355D50 -> 0x355D7C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMG.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355D80 -> 0x00355DAC
*/
// Range: 0x355D80 -> 0x355DAC
void xNMGStateInit() {
    /* anonymous block */ {
        // Range: 0x355D80 -> 0x355DAC
    }
}


