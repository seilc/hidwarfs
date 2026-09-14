/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSAL.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_salJointsAll[17]; // size: 0x11, address: 0x446B20
unsigned char g_salJointsUpperOnly[17]; // size: 0x11, address: 0x0
static class tagxStateLink link_sal_Idle[2]; // size: 0x8, address: 0x446B38
static class tagxStateLink link_sal_LookBack[1]; // size: 0x4, address: 0x4A3EA0
static class tagxStateLink link_sal_LookFoot[1]; // size: 0x4, address: 0x4A3EA4
class tagxState g_salStates[3]; // size: 0x48, address: 0x446B40
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSAL.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00339BE0 -> 0x00339C0C
*/
// Range: 0x339BE0 -> 0x339C0C
void xSALStateReset() {
    /* anonymous block */ {
        // Range: 0x339BE0 -> 0x339C0C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSAL.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00339C10 -> 0x00339C3C
*/
// Range: 0x339C10 -> 0x339C3C
void xSALStateInit() {
    /* anonymous block */ {
        // Range: 0x339C10 -> 0x339C3C
    }
}


