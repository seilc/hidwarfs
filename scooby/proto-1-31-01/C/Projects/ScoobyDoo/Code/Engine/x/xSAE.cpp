/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSAE.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char g_saeJointsAll[16]; // size: 0x10, address: 0x446B90
unsigned char g_saeJointsUpperOnly[16]; // size: 0x10, address: 0x0
static class tagxStateLink link_sae_Idle[4]; // size: 0x10, address: 0x446BA0
static class tagxStateLink link_sae_IdleBook[4]; // size: 0x10, address: 0x446BB0
static class tagxStateLink link_sae_IdleReady[4]; // size: 0x10, address: 0x446BC0
static class tagxStateLink link_sae_IdleReadyBook[4]; // size: 0x10, address: 0x446BD0
static class tagxStateLink link_sae_Walk[2]; // size: 0x8, address: 0x446BE0
static class tagxStateLink link_sae_Run[2]; // size: 0x8, address: 0x446BE8
static class tagxStateLink link_sae_WalkBook[2]; // size: 0x8, address: 0x446BF0
static class tagxStateLink link_sae_RunBook[2]; // size: 0x8, address: 0x446BF8
static class tagxStateLink link_sae_WipeBrow[1]; // size: 0x4, address: 0x4A3EA8
static class tagxStateLink link_sae_ScratchLeg[1]; // size: 0x4, address: 0x4A3EAC
static class tagxStateLink link_sae_WipeHands[1]; // size: 0x4, address: 0x4A3EB0
static class tagxStateLink link_sae_LookAround[1]; // size: 0x4, address: 0x4A3EB4
class tagxState g_saeStates[12]; // size: 0x120, address: 0x446C00
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSAE.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00339C40 -> 0x00339C6C
*/
// Range: 0x339C40 -> 0x339C6C
void xSAEStateReset() {
    /* anonymous block */ {
        // Range: 0x339C40 -> 0x339C6C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSAE.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00339C70 -> 0x00339C9C
*/
// Range: 0x339C70 -> 0x339C9C
void xSAEStateInit() {
    /* anonymous block */ {
        // Range: 0x339C70 -> 0x339C9C
    }
}


