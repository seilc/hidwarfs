/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAudioStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class descriptor alloc_h; // size: 0x10, address: 0x0
static class descriptor free_h; // size: 0x10, address: 0x0
static class descriptor * h_start; // size: 0x4, address: 0x0
static signed int h_size; // size: 0x4, address: 0x0
static char MustCallInitStr[30]; // size: 0x1E, address: 0x0
static char NoReintStr[30]; // size: 0x1E, address: 0x0
static signed int AudioStreamSystemInitialized; // size: 0x4, address: 0x0
static char par_inv_str[21]; // size: 0x15, address: 0x0
static char out_of_mem_str[14]; // size: 0xE, address: 0x0
static char snd_mgr_err_str[32]; // size: 0x20, address: 0x0
static signed int AudioStreamUniqueID; // size: 0x4, address: 0x0
static signed int StreamBufferUsed[4]; // size: 0x10, address: 0x0
static void * StreamHeaderBuffer[4]; // size: 0x10, address: 0x0
static void * StreamTransferBuffer[4]; // size: 0x10, address: 0x0
static void * StreamPlayBuffer[4]; // size: 0x10, address: 0x0
static class AudioStream_s * AudioStreamBuf[4]; // size: 0x10, address: 0x0
signed int p2SndMgrSafeToAudioInterrupt; // size: 0x4, address: 0x4A4EE4
// total size: 0x10
class descriptor {
    // Members
public:
    class descriptor * l; // offset 0x0, size 0x4
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        union { // inferred
            // total size: 0x4
            class /* @class */ {
                // Members
            public:
                unsigned int size : 31; // offset 0x0, size 0x4
                unsigned int tag : 1; // offset 0x0, size 0x4
            } ts; // offset 0x0, size 0x4
            signed int tgsz; // offset 0x0, size 0x4
        };
    } u; // offset 0x4, size 0x4
    signed int pad1; // offset 0x8, size 0x4
    signed int pad2; // offset 0xC, size 0x4
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
// total size: 0x4
class /* @class */ {
    // Members
public:
    union { // inferred
        // total size: 0x4
        class /* @class */ {
            // Members
        public:
            unsigned int size : 31; // offset 0x0, size 0x4
            unsigned int tag : 1; // offset 0x0, size 0x4
        } ts; // offset 0x0, size 0x4
        signed int tgsz; // offset 0x0, size 0x4
    };
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    unsigned int size : 31; // offset 0x0, size 0x4
    unsigned int tag : 1; // offset 0x0, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAudioStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AEB0 -> 0x0038AEB8
*/
// Range: 0x38AEB0 -> 0x38AEB8
void iAudioStreamDestroy() {
    /* anonymous block */ {
        // Range: 0x38AEB0 -> 0x38AEB8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAudioStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AEC0 -> 0x0038AEC8
*/
// Range: 0x38AEC0 -> 0x38AEC8
void iAudioStreamUnpause() {
    /* anonymous block */ {
        // Range: 0x38AEC0 -> 0x38AEC8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAudioStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AED0 -> 0x0038AED8
*/
// Range: 0x38AED0 -> 0x38AED8
void iAudioStreamPause() {
    /* anonymous block */ {
        // Range: 0x38AED0 -> 0x38AED8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAudioStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AEE0 -> 0x0038AEEC
*/
// Range: 0x38AEE0 -> 0x38AEEC
void * iAudioStreamCreate() {
    /* anonymous block */ {
        // Range: 0x38AEE0 -> 0x38AEEC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAudioStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AEF0 -> 0x0038AEF8
*/
// Range: 0x38AEF0 -> 0x38AEF8
void iAudioStreamDeinitSystem() {
    /* anonymous block */ {
        // Range: 0x38AEF0 -> 0x38AEF8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAudioStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AF00 -> 0x0038AF08
*/
// Range: 0x38AF00 -> 0x38AF08
void iAudioStreamInitSystem() {
    /* anonymous block */ {
        // Range: 0x38AF00 -> 0x38AF08
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAudioStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AF10 -> 0x0038AF20
*/
// Range: 0x38AF10 -> 0x38AF20
signed int iAudioStreamPaused(class AudioStream_s * pStream /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38AF10 -> 0x38AF20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAudioStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038AF20 -> 0x0038AF30
*/
// Range: 0x38AF20 -> 0x38AF30
signed int iAudioStreamPlaying(class AudioStream_s * pStream /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38AF20 -> 0x38AF30
    }
}


