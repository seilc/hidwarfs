/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int sram_addr; // size: 0x4, address: 0x4A4EDC
unsigned int SRAMbase; // size: 0x4, address: 0x4A4EE0
signed int p2SndMgrSafeToAudioInterrupt; // size: 0x4, address: 0x4A4EE4
signed int p2SndMgrSafeToAudioDriverInterrupt; // size: 0x4, address: 0x4A4EE8
signed int NextStrPointerInitialized; // size: 0x4, address: 0x0
static class AudioStream_s * myAudioStreams; // size: 0x4, address: 0x4A4EEC
static class AudioStream_s * myNextAudioStream; // size: 0x4, address: 0x4A4EF0
unsigned char p2_voice_status[64]; // size: 0x40, address: 0xAADFE0
class _xSndMgrData gSndMgr; // size: 0x33F8, address: 0x4B1F00
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
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
// total size: 0x34
class AudioStream_s {
    // Members
public:
    signed int id; // offset 0x0, size 0x4
    class AudioStream_s * pNext; // offset 0x4, size 0x4
    signed int status; // offset 0x8, size 0x4
    void * pAmStream; // offset 0xC, size 0x4
    signed int PendingRequestCounter; // offset 0x10, size 0x4
    unsigned int interruptsTillEnd; // offset 0x14, size 0x4
    char * pFileName; // offset 0x18, size 0x4
    void * pPlayBuffer; // offset 0x1C, size 0x4
    void * pTransferBuffer; // offset 0x20, size 0x4
    signed int QueueRequested; // offset 0x24, size 0x4
    signed int Queued; // offset 0x28, size 0x4
    void (* m_callback)(class AudioStream_s *); // offset 0x2C, size 0x4
    signed short lastVol; // offset 0x30, size 0x2
    signed short lastVolAtten; // offset 0x32, size 0x2
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
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
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10C
class tagFile {
    // Members
public:
    char m_name[256]; // offset 0x0, size 0x100
    signed int m_state; // offset 0x100, size 0x4
    signed int m_desc; // offset 0x104, size 0x4
    unsigned int m_fpos; // offset 0x108, size 0x4
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036C710 -> 0x0036C75C
*/
// Range: 0x36C710 -> 0x36C75C
void * iSndMgrCreateStream(char * FileName /* r2 */, signed int looping /* r2 */) {
    /* anonymous block */ {
        // Range: 0x36C710 -> 0x36C75C
        class AudioStream_s * pStream; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036C760 -> 0x0036C768
*/
// Range: 0x36C760 -> 0x36C768
void iSndMgrSetVoiceFrequency() {
    /* anonymous block */ {
        // Range: 0x36C760 -> 0x36C768
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036C770 -> 0x0036C7CC
*/
// Range: 0x36C770 -> 0x36C7CC
void iSndMgrStopSound(signed int soundVoice /* r2 */) {
    /* anonymous block */ {
        // Range: 0x36C770 -> 0x36C7CC
        class _iSFX * sp; // r5
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036C7D0 -> 0x0036C94C
*/
// Range: 0x36C7D0 -> 0x36C94C
signed int iSndMgrPlaySoundVolLoop(signed int soundID /* r18 */, signed int soundVol /* r2 */, signed int loopCount /* r17 */) {
    /* anonymous block */ {
        // Range: 0x36C7D0 -> 0x36C94C
        class _iWAV * wav; // r16
        class _iSFX * sfx; // r3
        signed int voice; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036C950 -> 0x0036CB60
*/
// Range: 0x36C950 -> 0x36CB60
signed int iSndMgrPlaySoundVolFreq(signed int soundID /* r19 */, signed int soundVol /* r18 */, signed int freq /* r17 */) {
    /* anonymous block */ {
        // Range: 0x36C950 -> 0x36CB60
        class _iWAV * wav; // r16
        class _iSFX * sfx; // r3
        signed int voice; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036CB60 -> 0x0036CD50
*/
// Range: 0x36CB60 -> 0x36CD50
signed int iSndMgrPlaySoundVol(signed int soundID /* r18 */, signed int soundVol /* r17 */) {
    /* anonymous block */ {
        // Range: 0x36CB60 -> 0x36CD50
        class _iWAV * wav; // r16
        class _iSFX * sfx; // r3
        signed int voice; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036CD50 -> 0x0036CF50
*/
// Range: 0x36CD50 -> 0x36CF50
signed int iSndMgrPlaySound(class _iSFX * sfx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x36CD50 -> 0x36CF50
        unsigned int voice; // r4
        class _iWAV * wav; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036CF50 -> 0x0036D188
*/
// Range: 0x36CF50 -> 0x36D188
signed int iSndMgrLoadSoundBuffer(unsigned char * buffer /* r19 */, unsigned int soundSize /* r18 */, signed int soundID /* r17 */) {
    /* anonymous block */ {
        // Range: 0x36CF50 -> 0x36D188
        unsigned int oldSRAMAddr; // r2
        unsigned char * dst; // r2
        unsigned int soundDataSize; // r2
        class _iWAV * wav; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036D190 -> 0x0036D1C4
*/
// Range: 0x36D190 -> 0x36D1C4
void iSndMgrFixFreq(signed int soundID /* r2 */, signed int newFreq /* r2 */) {
    /* anonymous block */ {
        // Range: 0x36D190 -> 0x36D1C4
        class _iWAV * wav; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036D1D0 -> 0x0036D1E0
*/
// Range: 0x36D1D0 -> 0x36D1E0
unsigned int iSndMgrGetSRAMSize() {
    /* anonymous block */ {
        // Range: 0x36D1D0 -> 0x36D1E0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036D1E0 -> 0x0036DF24
*/
// Range: 0x36D1E0 -> 0x36DF24
signed int iSndMgrTransferToSRAM(unsigned char * buffer /* r19 */, unsigned int size /* r16 */, class _iWAV * wav /* r18 */) {
    /* anonymous block */ {
        // Range: 0x36D1E0 -> 0x36DF24
        class _iWAV * tmp; // r16
        signed int bank; // r17
        signed int s; // r16
        signed int i; // r2
        unsigned int spusize; // r2
        unsigned int count; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036DF30 -> 0x0036E55C
*/
// Range: 0x36DF30 -> 0x36E55C
signed int iSndMgrBankMakeRoom(signed int bank /* r22 */, unsigned int * addr /* r21 */, unsigned int size /* r20 */) {
    /* anonymous block */ {
        // Range: 0x36DF30 -> 0x36E55C
        unsigned int delta; // r2
        signed int s; // r5
        class _iWAV * oldprev; // r19
        class _iWAV * old; // r18
        class _iWAV * prev; // r17
        class _iWAV * idx; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036E560 -> 0x0036E628
*/
// Range: 0x36E560 -> 0x36E628
void iSndMgrUnpause() {
    /* anonymous block */ {
        // Range: 0x36E560 -> 0x36E628
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036E630 -> 0x0036E6E4
*/
// Range: 0x36E630 -> 0x36E6E4
void iSndMgrPause() {
    /* anonymous block */ {
        // Range: 0x36E630 -> 0x36E6E4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036E6F0 -> 0x0036EBC4
*/
// Range: 0x36E6F0 -> 0x36EBC4
void p2SndMgrUpdateVoice(signed int status /* r2 */, class _iSFX * sp /* r16 */) {
    /* anonymous block */ {
        // Range: 0x36E6F0 -> 0x36EBC4
        signed int voice; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036EBD0 -> 0x0036EF78
*/
// Range: 0x36EBD0 -> 0x36EF78
void p2SndMgrCalcVol(class _iSFX * sp /* r18 */) {
    /* anonymous block */ {
        // Range: 0x36EBD0 -> 0x36EF78
        signed int vol_right; // r17
        signed int vol_left; // r16
        float lrad2; // r21
        float rad2; // r2
        float distance; // r20
        float vol; // r20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036EF80 -> 0x0036F0FC
*/
// Range: 0x36EF80 -> 0x36F0FC
void iSndMgrIdle() {
    /* anonymous block */ {
        // Range: 0x36EF80 -> 0x36F0FC
        class _iSFX * sp; // r17
        unsigned int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036F100 -> 0x0036F108
*/
// Range: 0x36F100 -> 0x36F108
void iSndMgrDebugMode() {
    /* anonymous block */ {
        // Range: 0x36F100 -> 0x36F108
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036F110 -> 0x0036F5C4
*/
// Range: 0x36F110 -> 0x36F5C4
void iSndMgrFreeAll() {
    /* anonymous block */ {
        // Range: 0x36F110 -> 0x36F5C4
        signed int s; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036F5D0 -> 0x0036FB7C
*/
// Range: 0x36F5D0 -> 0x36FB7C
void iSndMgrLevelReset() {
    /* anonymous block */ {
        // Range: 0x36F5D0 -> 0x36FB7C
        signed int s; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036FB80 -> 0x0036FC4C
*/
// Range: 0x36FB80 -> 0x36FC4C
void iSndMgrSetLevelReset() {
    /* anonymous block */ {
        // Range: 0x36FB80 -> 0x36FC4C
        signed int i; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036FC50 -> 0x0036FCBC
*/
// Range: 0x36FC50 -> 0x36FCBC
void iSndMgrDispose() {
    /* anonymous block */ {
        // Range: 0x36FC50 -> 0x36FCBC
        class AudioStream_s * next; // r16
        class AudioStream_s * cur; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036FCC0 -> 0x0036FD78
*/
// Range: 0x36FCC0 -> 0x36FD78
void iSndMgrInit() {
    /* anonymous block */ {
        // Range: 0x36FCC0 -> 0x36FD78
        unsigned int i; // r4
        unsigned int driverSize; // r2
        unsigned int * driverImage; // r2
    }
}


