/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNHM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nhmJointsAll[17]; // size: 0x11, address: 0x44D2F0
static class tagxStateLink link_nhm_Idle[18]; // size: 0x48, address: 0x44D310
static class tagxStateLink link_nhm_RRun[18]; // size: 0x48, address: 0x44D360
static class tagxStateLink link_nhm_Walk[12]; // size: 0x30, address: 0x44D3B0
static class tagxStateLink link_nhm_Run[12]; // size: 0x30, address: 0x44D3E0
static class tagxStateLink link_nhm_DodgeLeft[1]; // size: 0x4, address: 0x4A4378
static class tagxStateLink link_nhm_DodgeRight[1]; // size: 0x4, address: 0x4A437C
static class tagxStateLink link_nhm_AttackMeleeLeft[1]; // size: 0x4, address: 0x4A4380
static class tagxStateLink link_nhm_AttackMeleeRight[1]; // size: 0x4, address: 0x4A4384
static class tagxStateLink link_nhm_AttackMeleeStrong[1]; // size: 0x4, address: 0x4A4388
static class tagxStateLink link_nhm_InjuryShortInIdle[1]; // size: 0x4, address: 0x4A438C
static class tagxStateLink link_nhm_InjuryLongInIdle[1]; // size: 0x4, address: 0x4A4390
static class tagxStateLink link_nhm_InjuryShortInWalk[1]; // size: 0x4, address: 0x4A4394
static class tagxStateLink link_nhm_InjuryLongInWalk[1]; // size: 0x4, address: 0x4A4398
static class tagxStateLink link_nhm_InjuryInCombo[1]; // size: 0x4, address: 0x4A439C
static class tagxStateLink link_nhm_DeathMelee1[1]; // size: 0x4, address: 0x4A43A0
static class tagxStateLink link_nhm_DeathMelee2[1]; // size: 0x4, address: 0x4A43A4
static class tagxStateLink link_nhm_DeathMelee3[1]; // size: 0x4, address: 0x4A43A8
static class tagxStateLink link_nhm_DeathMelee4[1]; // size: 0x4, address: 0x4A43AC
static class tagxStateLink link_nhm_DeathRange1[1]; // size: 0x4, address: 0x4A43B0
static class tagxStateLink link_nhm_DeathRange2[1]; // size: 0x4, address: 0x4A43B4
static class tagxStateLink link_nhm_DeathRange3[1]; // size: 0x4, address: 0x4A43B8
static class tagxStateLink link_nhm_DeathRange4[1]; // size: 0x4, address: 0x4A43BC
static class tagxStateLink link_nhm_ComboIdle[3]; // size: 0xC, address: 0x44D410
static class tagxStateLink link_nhm_ComboIdleChainsaw[3]; // size: 0xC, address: 0x44D420
static class tagxStateLink link_nhm_ComboMissDeath[1]; // size: 0x4, address: 0x4A43C0
static class tagxStateLink link_nhm_ComboDeathGun[1]; // size: 0x4, address: 0x4A43C4
static class tagxStateLink link_nhm_ComboDeathAxe[1]; // size: 0x4, address: 0x4A43C8
class tagxState g_nhmStates[27]; // size: 0x288, address: 0x44D430
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNHM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355E70 -> 0x00355E9C
*/
// Range: 0x355E70 -> 0x355E9C
void xNHMStateReset() {
    /* anonymous block */ {
        // Range: 0x355E70 -> 0x355E9C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNHM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355EA0 -> 0x00355ECC
*/
// Range: 0x355EA0 -> 0x355ECC
void xNHMStateInit() {
    /* anonymous block */ {
        // Range: 0x355EA0 -> 0x355ECC
    }
}


