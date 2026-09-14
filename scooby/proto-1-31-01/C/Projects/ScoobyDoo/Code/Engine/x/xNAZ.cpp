/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNAZ.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nazJointsAll[57]; // size: 0x39, address: 0x44EEB0
unsigned char g_nazJointsUpperOnly[57]; // size: 0x39, address: 0x0
static class tagxStateLink link_naz_Idle[9]; // size: 0x24, address: 0x44EEF0
static class tagxStateLink link_naz_RemoveKnife[1]; // size: 0x4, address: 0x4A45BC
static class tagxStateLink link_naz_IdleNeck[12]; // size: 0x30, address: 0x44EF20
static class tagxStateLink link_naz_Walk[3]; // size: 0xC, address: 0x44EF50
static class tagxStateLink link_naz_WalkNeck[7]; // size: 0x1C, address: 0x44EF60
static class tagxStateLink link_naz_DodgeLeft[1]; // size: 0x4, address: 0x4A45C0
static class tagxStateLink link_naz_DodgeRight[1]; // size: 0x4, address: 0x4A45C4
static class tagxStateLink link_naz_DodgeLeftNeck[1]; // size: 0x4, address: 0x4A45C8
static class tagxStateLink link_naz_DodgeRightNeck[1]; // size: 0x4, address: 0x4A45CC
static class tagxStateLink link_naz_AttackMeleeSlash[1]; // size: 0x4, address: 0x4A45D0
static class tagxStateLink link_naz_AttackMeleeStab[1]; // size: 0x4, address: 0x4A45D4
static class tagxStateLink link_naz_AttackRangeJolt[1]; // size: 0x4, address: 0x4A45D8
static class tagxStateLink link_naz_AttackRangeBiteNeck[1]; // size: 0x4, address: 0x4A45DC
static class tagxStateLink link_naz_AttackRangeButtNeck[1]; // size: 0x4, address: 0x4A45E0
static class tagxStateLink link_naz_InjuryMeleeFront[1]; // size: 0x4, address: 0x4A45E4
static class tagxStateLink link_naz_InjuryRangeFront[1]; // size: 0x4, address: 0x4A45E8
static class tagxStateLink link_naz_InjuryMeleeFrontNeck[1]; // size: 0x4, address: 0x4A45EC
static class tagxStateLink link_naz_InjuryMeleeLeftNeck[1]; // size: 0x4, address: 0x4A45F0
static class tagxStateLink link_naz_InjuryMeleeRightNeck[1]; // size: 0x4, address: 0x4A45F4
static class tagxStateLink link_naz_InjuryMeleeUpNeck[1]; // size: 0x4, address: 0x4A45F8
static class tagxStateLink link_naz_InjuryMeleeDownNeck[1]; // size: 0x4, address: 0x4A45FC
static class tagxStateLink link_naz_InjuryRangeFrontNeck[1]; // size: 0x4, address: 0x4A4600
class tagxState g_nazStates[22]; // size: 0x210, address: 0x44EF80
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNAZ.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003561D0 -> 0x003561FC
*/
// Range: 0x3561D0 -> 0x3561FC
void xNAZStateReset() {
    /* anonymous block */ {
        // Range: 0x3561D0 -> 0x3561FC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNAZ.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356200 -> 0x0035622C
*/
// Range: 0x356200 -> 0x35622C
void xNAZStateInit() {
    /* anonymous block */ {
        // Range: 0x356200 -> 0x35622C
    }
}


