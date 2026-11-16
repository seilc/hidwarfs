/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char asyncRequestBuffers[4096]; // size: 0x1000, address: 0x5E2900
static char * asyncRequestBuffer; // size: 0x4, address: 0x50E5F0
static signed int asyncRequestCurrent; // size: 0x4, address: 0x50F680
enum HISMemoryType {
    HIS_MEMORY_EE = 0,
    HIS_MEMORY_IOP = 1,
    HIS_MEMORY_SPU = 2,
};
enum HISStatus {
    HIS_STATUS_INVALID_ID = 0,
    HIS_STATUS_DONE = 1,
    HIS_STATUS_IN_PROGRESS = 2,
    HIS_STATUS_IN_QUEUE = 3,
    HIS_STATUS_PARTIAL = 4,
    HIS_STATUS_FAILED = 5,
    HIS_STATUS_CANCELLED = 6,
    HIS_STATUS_DMA_WAIT = 7,
};

/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034ADE0 -> 0x0034AE34
*/
// Range: 0x34ADE0 -> 0x34AE34
void HISFlushAsyncRequestsNoWait() {
    /* anonymous block */ {
        // Range: 0x34ADE0 -> 0x34AE34
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AE40 -> 0x0034AE6C
*/
// Range: 0x34AE40 -> 0x34AE6C
void HISFlushAsyncRequests() {
    /* anonymous block */ {
        // Range: 0x34AE40 -> 0x34AE6C
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AE70 -> 0x0034AEC4
*/
// Range: 0x34AE70 -> 0x34AEC4
void HISPlayExternalStreamAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */, signed int pitch /* r2 */, signed int flags /* r2 */, signed int attack /* r2 */, signed int release /* r2 */, signed int blockSize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34AE70 -> 0x34AEC4
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AED0 -> 0x0034AF0C
*/
// Range: 0x34AED0 -> 0x34AF0C
void HISJoinStereoVoicesAsync(signed int voice1 /* r2 */, signed int voice2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34AED0 -> 0x34AF0C
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AF10 -> 0x0034AF48
*/
// Range: 0x34AF10 -> 0x34AF48
void HISResumeVoiceAsync(signed int voice /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34AF10 -> 0x34AF48
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AF50 -> 0x0034AF88
*/
// Range: 0x34AF50 -> 0x34AF88
void HISPauseVoiceAsync(signed int voice /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34AF50 -> 0x34AF88
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AF90 -> 0x0034AFC8
*/
// Range: 0x34AF90 -> 0x34AFC8
void HISStopVoiceAsync(signed int voice /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34AF90 -> 0x34AFC8
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AFD0 -> 0x0034B00C
*/
// Range: 0x34AFD0 -> 0x34B00C
void HISSetVoicePitchAsync(signed int voice /* r2 */, signed int pitch /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34AFD0 -> 0x34B00C
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B010 -> 0x0034B050
*/
// Range: 0x34B010 -> 0x34B050
void HISSetVoiceVolumeAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34B010 -> 0x34B050
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B050 -> 0x0034B0C4
*/
// Range: 0x34B050 -> 0x34B0C4
void HISPlayStreamAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */, signed int pitch /* r2 */, signed int fileIndex /* r2 */, signed int logicalSectorNumber /* r2 */, signed int dataSize /* r2 */, signed int flags /* r2 */, signed int attack /* r29 */, signed int release /* r29+0x8 */, signed int blockSize /* r29+0x10 */, signed int interleaveSectors /* r29+0x18 */) {
    /* anonymous block */ {
        // Range: 0x34B050 -> 0x34B0C4
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B0D0 -> 0x0034B124
*/
// Range: 0x34B0D0 -> 0x34B124
void HISPlaySoundAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */, signed int pitch /* r2 */, unsigned int address /* r2 */, signed int attack /* r2 */, signed int release /* r2 */, unsigned char paused /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34B0D0 -> 0x34B124
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B130 -> 0x0034B1D4
*/
// Range: 0x34B130 -> 0x34B1D4
enum HISStatus HISLoadBlock(signed int fileIndex /* r2 */, signed int sourceBlock /* r2 */, signed int sourceSize /* r2 */, void * destinationAddress /* r2 */, enum HISMemoryType destinationType /* r2 */, signed int priority /* r2 */, signed int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34B130 -> 0x34B1D4
        signed int id; // r16
        enum HISStatus status; // r17
    }
}


