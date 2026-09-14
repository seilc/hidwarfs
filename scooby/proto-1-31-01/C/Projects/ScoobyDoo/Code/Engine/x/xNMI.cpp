/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nmiJointsAll[32]; // size: 0x20, address: 0x44C7A0
unsigned char g_nmiJointsUpperOnly[32]; // size: 0x20, address: 0x44C7C0
static class tagxStateLink link_nmi_Idle[16]; // size: 0x40, address: 0x44C7E0
static class tagxStateLink link_nmi_IdleLow[14]; // size: 0x38, address: 0x44C820
static class tagxStateLink link_nmi_Turn180Left[1]; // size: 0x4, address: 0x4A4280
static class tagxStateLink link_nmi_Turn180Right[1]; // size: 0x4, address: 0x4A4284
static class tagxStateLink link_nmi_Walk[11]; // size: 0x2C, address: 0x44C860
static class tagxStateLink link_nmi_WalkLow[13]; // size: 0x34, address: 0x44C890
static class tagxStateLink link_nmi_AttackMeleeLeft[5]; // size: 0x14, address: 0x44C8D0
static class tagxStateLink link_nmi_AttackMeleeRight[5]; // size: 0x14, address: 0x44C8F0
static class tagxStateLink link_nmi_AttackRangeLeft[5]; // size: 0x14, address: 0x44C910
static class tagxStateLink link_nmi_AttackRangeRight[5]; // size: 0x14, address: 0x44C930
static class tagxStateLink link_nmi_InjuryLeftLongFromIdle[1]; // size: 0x4, address: 0x4A4288
static class tagxStateLink link_nmi_InjuryLeftShortFromIdle[1]; // size: 0x4, address: 0x4A428C
static class tagxStateLink link_nmi_InjuryRightLongFromIdle[1]; // size: 0x4, address: 0x4A4290
static class tagxStateLink link_nmi_InjuryRightShortFromIdle[1]; // size: 0x4, address: 0x4A4294
static class tagxStateLink link_nmi_InjuryLeftLongFromIdleUpper[1]; // size: 0x4, address: 0x4A4298
static class tagxStateLink link_nmi_InjuryLeftShortFromIdleUpper[1]; // size: 0x4, address: 0x4A429C
static class tagxStateLink link_nmi_InjuryRightLongFromIdleUpper[1]; // size: 0x4, address: 0x4A42A0
static class tagxStateLink link_nmi_InjuryRightShortFromIdleUpper[1]; // size: 0x4, address: 0x4A42A4
static class tagxStateLink link_nmi_DeathMelee3[1]; // size: 0x4, address: 0x4A42A8
class tagxState g_nmiStates[19]; // size: 0x1C8, address: 0x44C950
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355CF0 -> 0x00355D1C
*/
// Range: 0x355CF0 -> 0x355D1C
void xNMIStateReset() {
    /* anonymous block */ {
        // Range: 0x355CF0 -> 0x355D1C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355D20 -> 0x00355D4C
*/
// Range: 0x355D20 -> 0x355D4C
void xNMIStateInit() {
    /* anonymous block */ {
        // Range: 0x355D20 -> 0x355D4C
    }
}


