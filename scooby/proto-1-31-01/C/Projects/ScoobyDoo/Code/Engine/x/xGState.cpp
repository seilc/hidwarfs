/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int doStateChange; // size: 0x4, address: 0x4A463C
static unsigned int interpreterMethod; // size: 0x4, address: 0x4A4DF4
static unsigned int gSavedTimeSec; // size: 0x4, address: 0x4A4DF8
float gTimeSec; // size: 0x4, address: 0x4A4C8C
signed int gGameState; // size: 0x4, address: 0x4A4640
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
unsigned long gTimerValue; // size: 0x4, address: 0x4A5340
signed int gPlayerType; // size: 0x4, address: 0x4A4E00
signed int xPadMapperFunc_GuiMenu(class tagxPad *, class tagxPadAction *, signed int); // size: 0x0, address: 0x3A7160
void xPadActionFunc_GuiMenu(class tagxPad *, signed int, class tagxPadAction *); // size: 0x0, address: 0x3A75B0
void xPadActionFunc_Player(class tagxPad *, signed int, class tagxPadAction *); // size: 0x0, address: 0x33FD50
signed int xPadMapperFunc_Player(class tagxPad *, class tagxPadAction *, signed int); // size: 0x0, address: 0x33FD60
signed int gQuit; // size: 0x4, address: 0x4A4F30
void xScriptGStateChange(signed int); // size: 0x0, address: 0x35CC80
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};
// total size: 0x138
class tagxPad {
    // Members
public:
    unsigned long m_lastTime; // offset 0x0, size 0x4
    unsigned long m_currentTime; // offset 0x8, size 0x4
    unsigned char m_active; // offset 0x10, size 0x1
    unsigned char m_playerNumber; // offset 0x11, size 0x1
    unsigned char m_controllerNumber; // offset 0x12, size 0x1
    unsigned char m_deviceType; // offset 0x13, size 0x1
    signed int m_padHandle; // offset 0x14, size 0x4
    void * m_funcInit; // offset 0x18, size 0x4
    void * m_funcMapper; // offset 0x1C, size 0x4
    void * m_funcAction; // offset 0x20, size 0x4
    class _tagNativePadData * m_pad; // offset 0x24, size 0x4
    class _XBUTTON m_xbutton[16]; // offset 0x28, size 0x100
    unsigned char m_analogActive; // offset 0x128, size 0x1
    signed char m_analogXValue; // offset 0x129, size 0x1
    signed char m_analogYValue; // offset 0x12A, size 0x1
    signed int m_shock : 3; // offset 0x12B, size 0x4
    unsigned char m_vib[6]; // offset 0x12C, size 0x6
};
// total size: 0xC
class tagxPadAction {
    // Members
public:
    unsigned int m_action; // offset 0x0, size 0x4
    unsigned short m_button; // offset 0x4, size 0x2
    unsigned short m_status; // offset 0x6, size 0x2
    unsigned char pad; // offset 0x8, size 0x1
    unsigned char m_analogActive; // offset 0x9, size 0x1
    signed char m_analogXValue; // offset 0xA, size 0x1
    signed char m_analogYValue; // offset 0xB, size 0x1
};
// total size: 0x4698
class XStreamHeader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int versionID; // offset 0x4, size 0x4
    unsigned char month; // offset 0x8, size 0x1
    unsigned char day; // offset 0x9, size 0x1
    unsigned char hour; // offset 0xA, size 0x1
    unsigned char minute; // offset 0xB, size 0x1
    unsigned int mdsOffset; // offset 0xC, size 0x4
    unsigned int mdsLength; // offset 0x10, size 0x4
    class tagXStreamMDSDirectory directory; // offset 0x14, size 0x3E84
    char safety[2048]; // offset 0x3E98, size 0x800
};
// total size: 0x28
class _tagNativePadData {
    // Members
public:
    unsigned char status; // offset 0x0, size 0x1
    unsigned int id : 4; // offset 0x1, size 0x4
    unsigned int size : 4; // offset 0x1, size 0x4
    unsigned short buttons; // offset 0x2, size 0x2
    unsigned char analog[4]; // offset 0x4, size 0x4
    unsigned char pressure[12]; // offset 0x8, size 0xC
    unsigned char reserved[12]; // offset 0x14, size 0xC
    unsigned short last_buttons; // offset 0x20, size 0x2
    unsigned short pressed; // offset 0x22, size 0x2
    unsigned short released; // offset 0x24, size 0x2
};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
// total size: 0x10
class _XBUTTON {
    // Members
public:
    unsigned int m_id; // offset 0x0, size 0x4
    unsigned int m_nativeID; // offset 0x4, size 0x4
    unsigned int m_nativeJoyID; // offset 0x8, size 0x4
    unsigned int m_down : 13; // offset 0xC, size 0x4
    unsigned int m_last_down : 13; // offset 0xC, size 0x4
    unsigned int m_pressed : 1; // offset 0xC, size 0x4
    unsigned int m_last_pressed : 1; // offset 0xC, size 0x4
    unsigned int m_released : 1; // offset 0xC, size 0x4
    unsigned int m_last_released : 1; // offset 0xC, size 0x4
    unsigned int unused : 2; // offset 0xC, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035CC80 -> 0x0035CC8C
*/
// Range: 0x35CC80 -> 0x35CC8C
void xScriptGStateChange(signed int toState /* r2 */) {
    /* anonymous block */ {
        // Range: 0x35CC80 -> 0x35CC8C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035CC90 -> 0x0035CE94
*/
// Range: 0x35CC90 -> 0x35CE94
void xGStateChange(signed int toState /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35CC90 -> 0x35CE94
        signed int timeWhenWeEnteredInventory; // @ 0x004A4DFC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035CEA0 -> 0x0035D0C4
*/
// Range: 0x35CEA0 -> 0x35D0C4
void xGStateSet(signed int toState /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35CEA0 -> 0x35D0C4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035D0D0 -> 0x0035D10C
*/
// Range: 0x35D0D0 -> 0x35D10C
void xGStateIdle() {
    /* anonymous block */ {
        // Range: 0x35D0D0 -> 0x35D10C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035D110 -> 0x0035D11C
*/
// Range: 0x35D110 -> 0x35D11C
void xGStateReInitializeInterpreter() {
    /* anonymous block */ {
        // Range: 0x35D110 -> 0x35D11C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035D120 -> 0x0035D154
*/
// Range: 0x35D120 -> 0x35D154
void xGStateInit() {
    /* anonymous block */ {
        // Range: 0x35D120 -> 0x35D154
    }
}


