/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNTA.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_ntaJointsAll[4]; // size: 0x4, address: 0x4A403C
static class tagxStateLink link_nta_Idle[9]; // size: 0x24, address: 0x44A180
static class tagxStateLink link_nta_Attack[1]; // size: 0x4, address: 0x4A4040
static class tagxStateLink link_nta_Die[1]; // size: 0x4, address: 0x4A4044
class tagxState g_ntaStates[3]; // size: 0x48, address: 0x44A1B0
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNTA.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355810 -> 0x0035583C
*/
// Range: 0x355810 -> 0x35583C
void xNTAStateReset() {
    /* anonymous block */ {
        // Range: 0x355810 -> 0x35583C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNTA.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355840 -> 0x0035586C
*/
// Range: 0x355840 -> 0x35586C
void xNTAStateInit() {
    /* anonymous block */ {
        // Range: 0x355840 -> 0x35586C
    }
}


