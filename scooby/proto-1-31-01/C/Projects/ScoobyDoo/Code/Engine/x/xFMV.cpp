/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char gAudioStatus; // size: 0x1, address: 0x4A4E34
unsigned char gAudioLoop; // size: 0x1, address: 0x4A4E38
unsigned char gFMVPlaying; // size: 0x1, address: 0x4A4E3C
static signed int sAudioAssetID; // size: 0x4, address: 0x4A4E40
static signed int sAudioFlags; // size: 0x4, address: 0x4A4E44
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
signed int g_sceneSwapPending; // size: 0x4, address: 0x4A4CCC
void xPadActionFunc_FmvMenu(class tagxPad *, signed int, class tagxPadAction *); // size: 0x0, address: 0x35F4E0
signed int xPadMapperFunc_FmvMenu(class tagxPad *, class tagxPadAction *, signed int); // size: 0x0, address: 0x35F0A0
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
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035F0A0 -> 0x0035F4DC
*/
// Range: 0x35F0A0 -> 0x35F4DC
signed int xPadMapperFunc_FmvMenu(class tagxPad * pad /* r18 */, class tagxPadAction * actions /* r17 */, signed int maxActions /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35F0A0 -> 0x35F4DC
        class tagxPadAction * a; // r5
        class _XBUTTON * b; // r4
        signed int i; // r3
        signed int actionCount; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035F4E0 -> 0x0035F4E8
*/
// Range: 0x35F4E0 -> 0x35F4E8
void xPadActionFunc_FmvMenu() {
    /* anonymous block */ {
        // Range: 0x35F4E0 -> 0x35F4E8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035F4F0 -> 0x0035F5A8
*/
// Range: 0x35F4F0 -> 0x35F5A8
void xFMVAudioName(char * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x35F4F0 -> 0x35F5A8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035F5B0 -> 0x0035F5C0
*/
// Range: 0x35F5B0 -> 0x35F5C0
void xFMVResumeAudio() {
    /* anonymous block */ {
        // Range: 0x35F5B0 -> 0x35F5C0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035F5C0 -> 0x0035F5D0
*/
// Range: 0x35F5C0 -> 0x35F5D0
void xFMVPauseAudio() {
    /* anonymous block */ {
        // Range: 0x35F5C0 -> 0x35F5D0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035F5D0 -> 0x0035F5F8
*/
// Range: 0x35F5D0 -> 0x35F5F8
void xFMVStopAudio() {
    /* anonymous block */ {
        // Range: 0x35F5D0 -> 0x35F5F8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035F600 -> 0x0035F620
*/
// Range: 0x35F600 -> 0x35F620
unsigned int xFMVIdle() {
    /* anonymous block */ {
        // Range: 0x35F600 -> 0x35F620
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035F620 -> 0x0035F62C
*/
// Range: 0x35F620 -> 0x35F62C
unsigned int xFMVGetAudioStatus() {
    /* anonymous block */ {
        // Range: 0x35F620 -> 0x35F62C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035F630 -> 0x0035F684
*/
// Range: 0x35F630 -> 0x35F684
void xFMVStartAudio(unsigned int audioID /* r2 */, unsigned int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x35F630 -> 0x35F684
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035F690 -> 0x0035F848
*/
// Range: 0x35F690 -> 0x35F848
void xFMVPlayMovie(unsigned int movieID /* r20 */, unsigned int flags /* r19 */) {
    /* anonymous block */ {
        // Range: 0x35F690 -> 0x35F848
        signed int controller; // r18
        char movieName[32]; // r29+0x60
        signed int returnVal; // r2
        void (* savedAction)(class tagxPad *, signed int, class tagxPadAction *); // r17
        signed int (* savedMapper)(class tagxPad *, class tagxPadAction *, signed int); // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035F850 -> 0x0035F878
*/
// Range: 0x35F850 -> 0x35F878
void xFMVFullLevelReset() {
    /* anonymous block */ {
        // Range: 0x35F850 -> 0x35F878
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035F880 -> 0x0035F8A8
*/
// Range: 0x35F880 -> 0x35F8A8
void xFMVLevelReset() {
    /* anonymous block */ {
        // Range: 0x35F880 -> 0x35F8A8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035F8B0 -> 0x0035F8D0
*/
// Range: 0x35F8B0 -> 0x35F8D0
void xFMVInit() {
    /* anonymous block */ {
        // Range: 0x35F8B0 -> 0x35F8D0
    }
}


