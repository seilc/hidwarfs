/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNHA.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nhaJointsAll[17]; // size: 0x11, address: 0x44D910
static class tagxStateLink link_nha_Idle[4]; // size: 0x10, address: 0x44D930
static class tagxStateLink link_nha_StandRRun[4]; // size: 0x10, address: 0x44D940
static class tagxStateLink link_nha_Walk[2]; // size: 0x8, address: 0x44D950
static class tagxStateLink link_nha_Run[2]; // size: 0x8, address: 0x44D958
static class tagxStateLink link_nha_DodgeLeft[1]; // size: 0x4, address: 0x4A4400
static class tagxStateLink link_nha_DodgeRight[1]; // size: 0x4, address: 0x4A4404
static class tagxStateLink link_nha_DodgeLeftReady[1]; // size: 0x4, address: 0x4A4408
static class tagxStateLink link_nha_DodgeRightReady[1]; // size: 0x4, address: 0x4A440C
class tagxState g_nhaStates[8]; // size: 0xC0, address: 0x44D960
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNHA.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355F30 -> 0x00355F5C
*/
// Range: 0x355F30 -> 0x355F5C
void xNHAStateReset() {
    /* anonymous block */ {
        // Range: 0x355F30 -> 0x355F5C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNHA.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355F60 -> 0x00355F8C
*/
// Range: 0x355F60 -> 0x355F8C
void xNHAStateInit() {
    /* anonymous block */ {
        // Range: 0x355F60 -> 0x355F8C
    }
}


