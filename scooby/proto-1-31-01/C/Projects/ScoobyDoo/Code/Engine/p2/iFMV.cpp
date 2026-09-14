/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int gFMVassetID; // size: 0x4, address: 0x0
unsigned char gAudioMem[307200]; // size: 0x4B000, address: 0xAAEBA0
unsigned char gAudioStatus; // size: 0x1, address: 0x4A4E34
class _xSndMgrData gSndMgr; // size: 0x33F8, address: 0x4B1F00
// total size: 0x54
class _iWAV {
    // Members
public:
    unsigned char m_used; // offset 0x0, size 0x1
    unsigned char m_bank; // offset 0x1, size 0x1
    unsigned short m_pad; // offset 0x2, size 0x2
    signed int m_idx; // offset 0x4, size 0x4
    char m_name[32]; // offset 0x8, size 0x20
    unsigned int m_assetID; // offset 0x28, size 0x4
    unsigned int m_size; // offset 0x2C, size 0x4
    unsigned int m_samples; // offset 0x30, size 0x4
    unsigned int m_age; // offset 0x34, size 0x4
    unsigned int m_addr; // offset 0x38, size 0x4
    unsigned int m_sramsize; // offset 0x3C, size 0x4
    unsigned int m_freq; // offset 0x40, size 0x4
    unsigned int m_type; // offset 0x44, size 0x4
    unsigned int m_locked; // offset 0x48, size 0x4
    unsigned int m_pitch; // offset 0x4C, size 0x4
    class _iWAV * m_next; // offset 0x50, size 0x4
};
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x50
class _iSFX {
    // Members
public:
    signed int m_idx; // offset 0x0, size 0x4
    signed int m_wavIdx; // offset 0x4, size 0x4
    unsigned int m_flags; // offset 0x8, size 0x4
    unsigned int m_soundPriority; // offset 0xC, size 0x4
    void * m_callback; // offset 0x10, size 0x4
    unsigned int m_callbackData; // offset 0x14, size 0x4
    class Vector3D m_position; // offset 0x18, size 0xC
    class Vector3D m_velocity; // offset 0x24, size 0xC
    float m_radius; // offset 0x30, size 0x4
    unsigned short m_playChunk; // offset 0x34, size 0x2
    unsigned short m_playChunkCount; // offset 0x36, size 0x2
    unsigned int m_volC[2]; // offset 0x38, size 0x8
    unsigned int m_vol; // offset 0x40, size 0x4
    unsigned int m_pan; // offset 0x44, size 0x4
    signed short m_loopCount; // offset 0x48, size 0x2
    unsigned short m_freq; // offset 0x4A, size 0x2
    unsigned short m_pitch; // offset 0x4C, size 0x2
    unsigned short m_userRef; // offset 0x4E, size 0x2
};
// total size: 0x33F8
class _xSndMgrData {
    // Members
public:
    class _iSFX m_voice[64]; // offset 0x0, size 0x1400
    class _iWAV m_id[96]; // offset 0x1400, size 0x1F80
    class Vector3D m_listenPos; // offset 0x3380, size 0xC
    class Vector3D m_listenRot; // offset 0x338C, size 0xC
    unsigned char m_masterVolume; // offset 0x3398, size 0x1
    unsigned char m_isPaused; // offset 0x3399, size 0x1
    unsigned char m_inStereo; // offset 0x339A, size 0x1
    unsigned char m_pad; // offset 0x339B, size 0x1
    float m_listenRad; // offset 0x339C, size 0x4
    unsigned short m_pad2; // offset 0x33A0, size 0x2
    unsigned char m_listenTouch; // offset 0x33A2, size 0x1
    unsigned char m_initialized; // offset 0x33A3, size 0x1
    unsigned short m_lastRef; // offset 0x33A4, size 0x2
    unsigned char m_paused; // offset 0x33A6, size 0x1
    unsigned char m_activeBank; // offset 0x33A7, size 0x1
    unsigned int m_bankMaxAddr[5]; // offset 0x33A8, size 0x14
    unsigned int m_bankMinAddr[5]; // offset 0x33BC, size 0x14
    unsigned int m_bankIdxAddr[5]; // offset 0x33D0, size 0x14
    class _iWAV * m_bankList[5]; // offset 0x33E4, size 0x14
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00388080 -> 0x003880B8
*/
// Range: 0x388080 -> 0x3880B8
unsigned int iFMVStopAudio() {
    /* anonymous block */ {
        // Range: 0x388080 -> 0x3880B8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003880C0 -> 0x003881D8
*/
// Range: 0x3880C0 -> 0x3881D8
unsigned int iFMVStartAudio(unsigned int audioID /* r2 */, unsigned int flags /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3880C0 -> 0x3881D8
        char audioFileName[64]; // r29+0x20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003881E0 -> 0x003881EC
*/
// Range: 0x3881E0 -> 0x3881EC
unsigned int iFMVPlayMovie() {
    /* anonymous block */ {
        // Range: 0x3881E0 -> 0x3881EC
    }
}


