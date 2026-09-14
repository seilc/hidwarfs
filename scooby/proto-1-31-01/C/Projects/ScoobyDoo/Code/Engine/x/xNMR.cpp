/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMR.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_nmrJointsAll[16]; // size: 0x10, address: 0x44C430
unsigned char g_nmrJointsUpperOnly[16]; // size: 0x10, address: 0x0
static class tagxStateLink link_nmr_Work[3]; // size: 0xC, address: 0x44C440
static class tagxStateLink link_nmr_TalkLong[1]; // size: 0x4, address: 0x4A4228
static class tagxStateLink link_nmr_TalkShort[1]; // size: 0x4, address: 0x4A422C
static class tagxStateLink link_nmr_GiveObject[1]; // size: 0x4, address: 0x4A4230
class tagxState g_nmrStates[4]; // size: 0x60, address: 0x44C450
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMR.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355C30 -> 0x00355C5C
*/
// Range: 0x355C30 -> 0x355C5C
void xNMRStateReset() {
    /* anonymous block */ {
        // Range: 0x355C30 -> 0x355C5C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNMR.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355C60 -> 0x00355C8C
*/
// Range: 0x355C60 -> 0x355C8C
void xNMRStateInit() {
    /* anonymous block */ {
        // Range: 0x355C60 -> 0x355C8C
    }
}


