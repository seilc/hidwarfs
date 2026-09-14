/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMA.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nmaJointsAll[16]; // size: 0x10, address: 0x44D040
unsigned char g_nmaJointsUpperOnly[16]; // size: 0x10, address: 0x0
static class tagxStateLink link_nma_Idle[19]; // size: 0x4C, address: 0x44D050
static class tagxStateLink link_nma_Run[11]; // size: 0x2C, address: 0x44D0A0
static class tagxStateLink link_nma_DodgeLeft[1]; // size: 0x4, address: 0x4A4334
static class tagxStateLink link_nma_DodgeRight[1]; // size: 0x4, address: 0x4A4338
static class tagxStateLink link_nma_BlockLeft[1]; // size: 0x4, address: 0x4A433C
static class tagxStateLink link_nma_BlockRight[1]; // size: 0x4, address: 0x4A4340
static class tagxStateLink link_nma_AttackMelee[1]; // size: 0x4, address: 0x4A4344
static class tagxStateLink link_nma_AttackBow[1]; // size: 0x4, address: 0x4A4348
static class tagxStateLink link_nma_AttackBowQuick[1]; // size: 0x4, address: 0x4A434C
static class tagxStateLink link_nma_InjuryFrontInIdle[1]; // size: 0x4, address: 0x4A4350
static class tagxStateLink link_nma_InjuryStrongInIdle[1]; // size: 0x4, address: 0x4A4354
static class tagxStateLink link_nma_InjuryFrontInRun[1]; // size: 0x4, address: 0x4A4358
static class tagxStateLink link_nma_InjuryStrongInRun[1]; // size: 0x4, address: 0x4A435C
static class tagxStateLink link_nma_InjuryInThread[1]; // size: 0x4, address: 0x4A4360
static class tagxStateLink link_nma_DeathMelee1[1]; // size: 0x4, address: 0x4A4364
static class tagxStateLink link_nma_DeathRange1[1]; // size: 0x4, address: 0x4A4368
static class tagxStateLink link_nma_ComboIdle[3]; // size: 0xC, address: 0x44D0D0
static class tagxStateLink link_nma_ComboIdleChainsaw[3]; // size: 0xC, address: 0x44D0E0
static class tagxStateLink link_nma_ComboMissDeath[1]; // size: 0x4, address: 0x4A436C
static class tagxStateLink link_nma_ComboDeathGun[1]; // size: 0x4, address: 0x4A4370
static class tagxStateLink link_nma_ComboDeathAxe[1]; // size: 0x4, address: 0x4A4374
class tagxState g_nmaStates[21]; // size: 0x1F8, address: 0x44D0F0
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMA.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355E10 -> 0x00355E3C
*/
// Range: 0x355E10 -> 0x355E3C
void xNMAStateReset() {
    /* anonymous block */ {
        // Range: 0x355E10 -> 0x355E3C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMA.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355E40 -> 0x00355E6C
*/
// Range: 0x355E40 -> 0x355E6C
void xNMAStateInit() {
    /* anonymous block */ {
        // Range: 0x355E40 -> 0x355E6C
    }
}


