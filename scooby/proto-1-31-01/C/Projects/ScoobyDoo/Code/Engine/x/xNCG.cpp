/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNCG.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_ncgJointsAll[15]; // size: 0xF, address: 0x44E3D8
unsigned char g_ncgJointsUpperOnly[15]; // size: 0xF, address: 0x44E3E8
static class tagxStateLink link_ncg_Idle[19]; // size: 0x4C, address: 0x44E400
static class tagxStateLink link_ncg_IdleReady[19]; // size: 0x4C, address: 0x44E450
static class tagxStateLink link_ncg_Walk[12]; // size: 0x30, address: 0x44E4A0
static class tagxStateLink link_ncg_Run[12]; // size: 0x30, address: 0x44E4D0
static class tagxStateLink link_ncg_DodgeLeftIdle[1]; // size: 0x4, address: 0x4A44B4
static class tagxStateLink link_ncg_DodgeRightIdle[1]; // size: 0x4, address: 0x4A44B8
static class tagxStateLink link_ncg_DodgeLeftIdleReady[1]; // size: 0x4, address: 0x4A44BC
static class tagxStateLink link_ncg_DodgeRightIdleReady[1]; // size: 0x4, address: 0x4A44C0
static class tagxStateLink link_ncg_AttackMeleeLeftIdle[1]; // size: 0x4, address: 0x4A44C4
static class tagxStateLink link_ncg_AttackMeleeRightIdle[1]; // size: 0x4, address: 0x4A44C8
static class tagxStateLink link_ncg_AttackMeleeStabIdle[1]; // size: 0x4, address: 0x4A44CC
static class tagxStateLink link_ncg_AttackMeleeStrongIdle[1]; // size: 0x4, address: 0x4A44D0
static class tagxStateLink link_ncg_AttackMeleeLeftIdleReady[1]; // size: 0x4, address: 0x4A44D4
static class tagxStateLink link_ncg_AttackMeleeRightIdleReady[1]; // size: 0x4, address: 0x4A44D8
static class tagxStateLink link_ncg_AttackMeleeStabIdleReady[1]; // size: 0x4, address: 0x4A44DC
static class tagxStateLink link_ncg_AttackMeleeStrongIdleReady[1]; // size: 0x4, address: 0x4A44E0
static class tagxStateLink link_ncg_InjuryFrontIdle[1]; // size: 0x4, address: 0x4A44E4
static class tagxStateLink link_ncg_InjuryFrontInComboIdle[1]; // size: 0x4, address: 0x4A44E8
static class tagxStateLink link_ncg_InjuryStrongIdle[1]; // size: 0x4, address: 0x4A44EC
static class tagxStateLink link_ncg_InjuryFrontIdleReady[1]; // size: 0x4, address: 0x4A44F0
static class tagxStateLink link_ncg_InjuryStrongIdleReady[1]; // size: 0x4, address: 0x4A44F4
static class tagxStateLink link_ncg_InjuryFrontUpperBodyThread[1]; // size: 0x4, address: 0x4A44F8
static class tagxStateLink link_ncg_InjuryStrongUpperBodyThread[1]; // size: 0x4, address: 0x4A44FC
static class tagxStateLink link_ncg_DieMelee[1]; // size: 0x4, address: 0x4A4500
static class tagxStateLink link_ncg_DieRange[1]; // size: 0x4, address: 0x4A4504
static class tagxStateLink link_ncg_ComboIdle[3]; // size: 0xC, address: 0x44E500
static class tagxStateLink link_ncg_ComboIdleChainsaw[3]; // size: 0xC, address: 0x44E510
static class tagxStateLink link_ncg_ComboMissDeath[1]; // size: 0x4, address: 0x4A4508
static class tagxStateLink link_ncg_ComboDeathGun[1]; // size: 0x4, address: 0x4A450C
static class tagxStateLink link_ncg_ComboDeathAxe[1]; // size: 0x4, address: 0x4A4510
class tagxState g_ncgStates[30]; // size: 0x2D0, address: 0x44E520
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNCG.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003560B0 -> 0x003560DC
*/
// Range: 0x3560B0 -> 0x3560DC
void xNCGStateReset() {
    /* anonymous block */ {
        // Range: 0x3560B0 -> 0x3560DC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNCG.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003560E0 -> 0x0035610C
*/
// Range: 0x3560E0 -> 0x35610C
void xNCGStateInit() {
    /* anonymous block */ {
        // Range: 0x3560E0 -> 0x35610C
    }
}


