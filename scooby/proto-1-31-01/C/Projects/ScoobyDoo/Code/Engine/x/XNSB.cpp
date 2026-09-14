/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\XNSB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nsbJointsAll[17]; // size: 0x11, address: 0x44AAD0
static class tagxStateLink link_nsb_Idle[12]; // size: 0x30, address: 0x44AAF0
static class tagxStateLink link_nsb_RRun[12]; // size: 0x30, address: 0x44AB20
static class tagxStateLink link_nsb_FlySlow[11]; // size: 0x2C, address: 0x44AB50
static class tagxStateLink link_nsb_FlyFast[11]; // size: 0x2C, address: 0x44AB80
static class tagxStateLink link_nsb_MeleeWeakFromIdle[2]; // size: 0x8, address: 0x44ABB0
static class tagxStateLink link_nsb_MeleeWeakFromRRun[2]; // size: 0x8, address: 0x44ABB8
static class tagxStateLink link_nsb_Injury[1]; // size: 0x4, address: 0x4A40CC
static class tagxStateLink link_nsb_DieMelee[1]; // size: 0x4, address: 0x4A40D0
static class tagxStateLink link_nsb_DieRange[1]; // size: 0x4, address: 0x4A40D4
class tagxState g_nsbStates[9]; // size: 0xD8, address: 0x44ABC0
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\XNSB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355930 -> 0x0035595C
*/
// Range: 0x355930 -> 0x35595C
void xNSBStateReset() {
    /* anonymous block */ {
        // Range: 0x355930 -> 0x35595C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\XNSB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355960 -> 0x0035598C
*/
// Range: 0x355960 -> 0x35598C
void xNSBStateInit() {
    /* anonymous block */ {
        // Range: 0x355960 -> 0x35598C
    }
}


