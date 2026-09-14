/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class _xSndMgrData gSndMgr; // size: 0x33F8, address: 0x4B1F00
char scriptSoundAssetName[16]; // size: 0x10, address: 0x0
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
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
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
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
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330620 -> 0x00330824
*/
// Range: 0x330620 -> 0x330824
void xSndMgrSetVoicePosition(signed int voice /* r16 */, float x /* r22 */, float y /* r21 */, float z /* r20 */) {
    /* anonymous block */ {
        // Range: 0x330620 -> 0x330824
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330830 -> 0x003309E4
*/
// Range: 0x330830 -> 0x3309E4
void xSndMgrSetVoiceRadius(signed int voice /* r16 */, float radius /* r20 */) {
    /* anonymous block */ {
        // Range: 0x330830 -> 0x3309E4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003309F0 -> 0x00330A68
*/
// Range: 0x3309F0 -> 0x330A68
signed int xSndMgrGetUnusedVoice() {
    /* anonymous block */ {
        // Range: 0x3309F0 -> 0x330A68
        signed int i; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330A70 -> 0x00330B48
*/
// Range: 0x330A70 -> 0x330B48
signed int xSndMgrLoadSoundBuffer(unsigned char * buffer /* r2 */, unsigned int length /* r2 */) {
    /* anonymous block */ {
        // Range: 0x330A70 -> 0x330B48
        signed int soundID; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330B50 -> 0x00330C04
*/
// Range: 0x330B50 -> 0x330C04
signed int xSndMgrGetAssetSND_ID(unsigned int assetID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x330B50 -> 0x330C04
        signed int i; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330C10 -> 0x00330C94
*/
// Range: 0x330C10 -> 0x330C94
void xSndMgrSetListenerPosition(float posX /* r29 */, float posY /* r29 */, float posZ /* r29 */) {
    /* anonymous block */ {
        // Range: 0x330C10 -> 0x330C94
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330CA0 -> 0x00330CE4
*/
// Range: 0x330CA0 -> 0x330CE4
void xSndMgrSetListenerRadius(float radius /* r29 */) {
    /* anonymous block */ {
        // Range: 0x330CA0 -> 0x330CE4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330CF0 -> 0x00330DD0
*/
// Range: 0x330CF0 -> 0x330DD0
signed int xSndMgrPlay3DSoundFreq(signed int soundID /* r2 */, signed int soundVol /* r2 */, signed int freq /* r2 */, class Vector3D * p /* r16 */) {
    /* anonymous block */ {
        // Range: 0x330CF0 -> 0x330DD0
        signed int v; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330DD0 -> 0x00330E00
*/
// Range: 0x330DD0 -> 0x330E00
void xSndMgrIdle(unsigned long time /* r2 */) {
    /* anonymous block */ {
        // Range: 0x330DD0 -> 0x330E00
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00330E00 -> 0x003310BC
*/
// Range: 0x330E00 -> 0x3310BC
void xSndMgrLevelReset() {
    /* anonymous block */ {
        // Range: 0x330E00 -> 0x3310BC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003310C0 -> 0x00331410
*/
// Range: 0x3310C0 -> 0x331410
void xSndMgrSetLevelReset() {
    /* anonymous block */ {
        // Range: 0x3310C0 -> 0x331410
        signed int i; // r5
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00331410 -> 0x00331CBC
*/
// Range: 0x331410 -> 0x331CBC
void xSndMgrPrepareNonStaticSoundBanks() {
    /* anonymous block */ {
        // Range: 0x331410 -> 0x331CBC
        unsigned int sramGenericSize; // r17
        unsigned int freeSRAM; // r2
        unsigned int usedSRAM; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00331CC0 -> 0x0033202C
*/
// Range: 0x331CC0 -> 0x33202C
void xSndMgrRemoveWavFromBankList(class _iWAV * wav /* r17 */) {
    /* anonymous block */ {
        // Range: 0x331CC0 -> 0x33202C
        class _iWAV * prev; // r16
        class _iWAV * idx; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00332030 -> 0x00332320
*/
// Range: 0x332030 -> 0x332320
void xSndMgrAddWavToBankList(class _iWAV * wav /* r18 */) {
    /* anonymous block */ {
        // Range: 0x332030 -> 0x332320
        class _iWAV * prev; // r17
        class _iWAV * idx; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00332320 -> 0x003324A4
*/
// Range: 0x332320 -> 0x3324A4
void xSndMgrSetActiveSoundBank(signed int bank /* r16 */) {
    /* anonymous block */ {
        // Range: 0x332320 -> 0x3324A4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003324B0 -> 0x003324D0
*/
// Range: 0x3324B0 -> 0x3324D0
void xSndMgrDispose() {
    /* anonymous block */ {
        // Range: 0x3324B0 -> 0x3324D0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003324D0 -> 0x00332544
*/
// Range: 0x3324D0 -> 0x332544
void xSndMgrMasterVolumeChange() {
    /* anonymous block */ {
        // Range: 0x3324D0 -> 0x332544
        class _iSFX * sp; // r6
        signed int i; // r5
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSndMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00332550 -> 0x00332948
*/
// Range: 0x332550 -> 0x332948
void xSndMgrInit() {
    /* anonymous block */ {
        // Range: 0x332550 -> 0x332948
        signed int i; // r2
    }
}


