/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class _sif_client_data clientData; // size: 0x28, address: 0x5E28A0
static unsigned char asyncFire; // size: 0x1, address: 0x50F67C
// total size: 0x4
class HISRemoteVoiceTransStatusParameter {
    // Members
public:
    signed short channel; // offset 0x0, size 0x2
    signed short flag; // offset 0x2, size 0x2
};
// total size: 0x44
class _sif_serve_data {
    // Members
public:
    unsigned int command; // offset 0x0, size 0x4
    void * (* func)(unsigned int, void *, signed int); // offset 0x4, size 0x4
    void * buff; // offset 0x8, size 0x4
    signed int size; // offset 0xC, size 0x4
    void * (* cfunc)(unsigned int, void *, signed int); // offset 0x10, size 0x4
    void * cbuff; // offset 0x14, size 0x4
    signed int csize; // offset 0x18, size 0x4
    class _sif_client_data * client; // offset 0x1C, size 0x4
    void * paddr; // offset 0x20, size 0x4
    unsigned int fno; // offset 0x24, size 0x4
    void * receive; // offset 0x28, size 0x4
    signed int rsize; // offset 0x2C, size 0x4
    signed int rmode; // offset 0x30, size 0x4
    unsigned int rid; // offset 0x34, size 0x4
    class _sif_serve_data * link; // offset 0x38, size 0x4
    class _sif_serve_data * next; // offset 0x3C, size 0x4
    class _sif_queue_data * base; // offset 0x40, size 0x4
};
// total size: 0x4
class HISGetRequestDebugParameter {
    // Members
public:
    signed int requestID; // offset 0x0, size 0x4
};
// total size: 0x4
class HISGetRequestStatusParameter {
    // Members
public:
    signed int requestID; // offset 0x0, size 0x4
};
// total size: 0x18
class _sif_queue_data {
    // Members
public:
    signed int key; // offset 0x0, size 0x4
    signed int active; // offset 0x4, size 0x4
    class _sif_serve_data * link; // offset 0x8, size 0x4
    class _sif_serve_data * start; // offset 0xC, size 0x4
    class _sif_serve_data * end; // offset 0x10, size 0x4
    class _sif_queue_data * next; // offset 0x14, size 0x4
};
// total size: 0x1C
class HISGetRequestDebugReturn {
    // Members
public:
    class HISRequestDebug requestDebug; // offset 0x0, size 0x1C
};
// total size: 0x4
class HISLoadBlockAsyncReturn {
    // Members
public:
    signed int requestID; // offset 0x0, size 0x4
};
// total size: 0x1
class HISFlushHostIOHandlesReturn {};
// total size: 0x4
class HISInitParameter {
    // Members
public:
    enum HISMediaType mediaType; // offset 0x0, size 0x4
};
// total size: 0x2
class HISPauseVoiceParameter {
    // Members
public:
    unsigned short voice; // offset 0x0, size 0x2
};
// total size: 0x20
class HISGetSoundDebugVoiceReturn {
    // Members
public:
    class HISSoundDebugVoice soundDebugVoice; // offset 0x0, size 0x20
};
// total size: 0x1
class HISDelayFrameParameter {};
// total size: 0x4
class HISGetRequestStatusReturn {
    // Members
public:
    enum HISStatus currentStatus; // offset 0x0, size 0x4
};
// total size: 0x4
class HISRemoteBlockTransStatusParameter {
    // Members
public:
    signed short channel; // offset 0x0, size 0x2
    signed short flag; // offset 0x2, size 0x2
};
// total size: 0x1
class HISGetRequestCountParameter {};
// total size: 0x4
class HISGetFileSizeParameter {
    // Members
public:
    signed int fileIndex; // offset 0x0, size 0x4
};
// total size: 0x4
class HISSetVoicePitchParameter {
    // Members
public:
    unsigned short voice; // offset 0x0, size 0x2
    unsigned short pitch; // offset 0x2, size 0x2
};
// total size: 0x6
class HISSetVoiceVolumeParameter {
    // Members
public:
    unsigned short voice; // offset 0x0, size 0x2
    unsigned short leftVolume; // offset 0x2, size 0x2
    unsigned short rightVolume; // offset 0x4, size 0x2
};
// total size: 0x14
class HISPlaySoundParameter {
    // Members
public:
    unsigned int address; // offset 0x0, size 0x4
    unsigned short voice; // offset 0x4, size 0x2
    unsigned short leftVolume; // offset 0x6, size 0x2
    unsigned short rightVolume; // offset 0x8, size 0x2
    unsigned short pitch; // offset 0xA, size 0x2
    unsigned short attack; // offset 0xC, size 0x2
    unsigned short release; // offset 0xE, size 0x2
    unsigned char paused; // offset 0x10, size 0x1
};
// total size: 0x1
class HISPauseVoiceReturn {};
// total size: 0x4
class HISRemoteVoiceTransStatusReturn {
    // Members
public:
    unsigned int ret; // offset 0x0, size 0x4
};
// total size: 0x10
class _sif_rpc_data {
    // Members
public:
    void * paddr; // offset 0x0, size 0x4
    unsigned int pid; // offset 0x4, size 0x4
    signed int tid; // offset 0x8, size 0x4
    unsigned int mode; // offset 0xC, size 0x4
};
// total size: 0x4
class HISGetSoundDebugVoiceParameter {
    // Members
public:
    signed int voice; // offset 0x0, size 0x4
};
// total size: 0x1
class HISDelayFrameReturn {};
// total size: 0x4
class HISSoundDebug {
    // Members
public:
    unsigned short leftVolume; // offset 0x0, size 0x2
    unsigned short rightVolume; // offset 0x2, size 0x2
};
// total size: 0x4
class HISJoinStereoVoicesParameter {
    // Members
public:
    unsigned short voice1; // offset 0x0, size 0x2
    unsigned short voice2; // offset 0x2, size 0x2
};
// total size: 0x4
class HISGetExternalStreamBufferParameter {
    // Members
public:
    signed int voice; // offset 0x0, size 0x4
};
// total size: 0x1
class HISInitReturn {};
// total size: 0x1
class HISPlayStreamReturn {};
// total size: 0x1
class HISSetVoiceVolumeReturn {};
// total size: 0x1
class HISPlaySoundReturn {};
// total size: 0x4
class HISGetRequestCountReturn {
    // Members
public:
    signed int count; // offset 0x0, size 0x4
};
// total size: 0x4
class HISGetFileSizeReturn {
    // Members
public:
    signed int size; // offset 0x0, size 0x4
};
// total size: 0x2
class HISResumeVoiceParameter {
    // Members
public:
    unsigned short voice; // offset 0x0, size 0x2
};
// total size: 0x4
class HISRemoteBlockTransStatusReturn {
    // Members
public:
    unsigned int ret; // offset 0x0, size 0x4
};
// total size: 0x1
class HISSetVoicePitchReturn {};
// total size: 0x1
class HISGetFirstValidRequestParameter {};
// total size: 0x1
class HISGetVoiceStatusParameter {};
// total size: 0x1
class HISGetSoundDebugParameter {};
// total size: 0x1
class HISResumeVoiceReturn {};
// total size: 0x1
class HISJoinStereoVoicesReturn {};
// total size: 0x4
class HISGetExternalStreamBufferReturn {
    // Members
public:
    signed int buffer; // offset 0x0, size 0x4
};
enum HISMediaType {
    HIS_MEDIA_CDROM = 0,
    HIS_MEDIA_DVD = 1,
    HIS_MEDIA_HOSTIO = 2,
};
// total size: 0x4
class HISRemoteSetParamParameter {
    // Members
public:
    unsigned short reg; // offset 0x0, size 0x2
    unsigned short value; // offset 0x2, size 0x2
};
// total size: 0x1
class HISNullParameter {};
// total size: 0x1
class HISGetVersionParameter {};
// total size: 0x4
class HISGetFirstValidRequestReturn {
    // Members
public:
    signed int request; // offset 0x0, size 0x4
};
// total size: 0x28
class _sif_client_data {
    // Members
public:
    class _sif_rpc_data rpcd; // offset 0x0, size 0x10
    unsigned int command; // offset 0x10, size 0x4
    void * buff; // offset 0x14, size 0x4
    void * cbuff; // offset 0x18, size 0x4
    void (* func)(void *); // offset 0x1C, size 0x4
    void * para; // offset 0x20, size 0x4
    class _sif_serve_data * serve; // offset 0x24, size 0x4
};
// total size: 0x1
class HISRemoteSetParamReturn {};
// total size: 0x4
class HISSetMasterVolumeParameter {
    // Members
public:
    unsigned short leftVolume; // offset 0x0, size 0x2
    unsigned short rightVolume; // offset 0x2, size 0x2
};
// total size: 0x4
class HISGetSoundDebugReturn {
    // Members
public:
    class HISSoundDebug soundDebug; // offset 0x0, size 0x4
};
// total size: 0x1
class HISGetFreeRequestCountParameter {};
// total size: 0x4
class HISCancelRequestParameter {
    // Members
public:
    signed int requestID; // offset 0x0, size 0x4
};
enum HISMemoryType {
    HIS_MEMORY_EE = 0,
    HIS_MEMORY_IOP = 1,
    HIS_MEMORY_SPU = 2,
};
// total size: 0x8
class HISGetVoiceStatusReturn {
    // Members
public:
    unsigned int status[2]; // offset 0x0, size 0x8
};
// total size: 0x3C
class HISFileIndexDebug {
    // Members
public:
    signed int logicalSectorNumber; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
    signed int sizeInSectors; // offset 0x8, size 0x4
    char name[48]; // offset 0xC, size 0x30
};
// total size: 0x1
class HISFlushHostIOHandlesParameter {};
// total size: 0x20
class HISPlayStreamParameter {
    // Members
public:
    signed int fileIndex; // offset 0x0, size 0x4
    signed int logicalSectorNumber; // offset 0x4, size 0x4
    signed int dataSize; // offset 0x8, size 0x4
    signed int blockSize; // offset 0xC, size 0x4
    unsigned short voice; // offset 0x10, size 0x2
    unsigned short leftVolume; // offset 0x12, size 0x2
    unsigned short rightVolume; // offset 0x14, size 0x2
    unsigned short pitch; // offset 0x16, size 0x2
    unsigned short flags; // offset 0x18, size 0x2
    unsigned short attack; // offset 0x1A, size 0x2
    unsigned short release; // offset 0x1C, size 0x2
    unsigned short interleaveSectors; // offset 0x1E, size 0x2
};
// total size: 0x2
class HISStopVoiceParameter {
    // Members
public:
    unsigned short voice; // offset 0x0, size 0x2
};
// total size: 0x1
class HISNullReturn {};
// total size: 0x10
class HISRemoteVoiceTransParameter {
    // Members
public:
    signed short channel; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    unsigned char * m_addr; // offset 0x4, size 0x4
    unsigned int s_addr; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
};
// total size: 0x1
class HISSetMasterVolumeReturn {};
// total size: 0x4
class HISGetVersionReturn {
    // Members
public:
    signed int version; // offset 0x0, size 0x4
};
// total size: 0x1
class HISCancelRequestReturn {
    // Members
public:
    unsigned char success; // offset 0x0, size 0x1
};
// total size: 0x30
class HISGetFileIndexParameter {
    // Members
public:
    char filename[48]; // offset 0x0, size 0x30
};
// total size: 0x14
class HISPlayExternalStreamParameter {
    // Members
public:
    signed int blockSize; // offset 0x0, size 0x4
    unsigned short voice; // offset 0x4, size 0x2
    unsigned short leftVolume; // offset 0x6, size 0x2
    unsigned short rightVolume; // offset 0x8, size 0x2
    unsigned short pitch; // offset 0xA, size 0x2
    unsigned short flags; // offset 0xC, size 0x2
    unsigned short attack; // offset 0xE, size 0x2
    unsigned short release; // offset 0x10, size 0x2
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
// total size: 0x4
class HISGetFreeRequestCountReturn {
    // Members
public:
    signed int count; // offset 0x0, size 0x4
};
// total size: 0x1
class HISStopVoiceReturn {};
// total size: 0x4
class HISGetFileIndexReturn {
    // Members
public:
    signed int index; // offset 0x0, size 0x4
};
// total size: 0x44
class HISTestParameter {
    // Members
public:
    signed int testValue; // offset 0x0, size 0x4
    char testString[64]; // offset 0x4, size 0x40
};
// total size: 0x20
class HISSoundDebugVoice {
    // Members
public:
    unsigned int address; // offset 0x0, size 0x4
    unsigned short leftVolume; // offset 0x4, size 0x2
    unsigned short rightVolume; // offset 0x6, size 0x2
    unsigned short pitch; // offset 0x8, size 0x2
    unsigned short envelope; // offset 0xA, size 0x2
    unsigned char kon; // offset 0xC, size 0x1
    unsigned char koff; // offset 0xD, size 0x1
    unsigned char endx; // offset 0xE, size 0x1
    unsigned char external; // offset 0xF, size 0x1
    unsigned char streaming; // offset 0x10, size 0x1
    unsigned char reading; // offset 0x11, size 0x1
    unsigned char readingBuffer; // offset 0x12, size 0x1
    unsigned char byteMode; // offset 0x13, size 0x1
    union { // inferred
        signed int currentSector; // offset 0x14, size 0x4
        signed int currentOffset; // offset 0x14, size 0x4
    };
    signed int sectorsLeft; // offset 0x18, size 0x4
    signed int dataSize; // offset 0x1C, size 0x4
};
// total size: 0x4
class HISRemoteVoiceTransReturn {
    // Members
public:
    signed int ret; // offset 0x0, size 0x4
};
// total size: 0x4
class HISGetFileIndexDebugParameter {
    // Members
public:
    signed int fileIndex; // offset 0x0, size 0x4
};
// total size: 0x4
class HISCloseRequestParameter {
    // Members
public:
    signed int requestID; // offset 0x0, size 0x4
};
// total size: 0x10
class HISRemoteBlockTransParameter {
    // Members
public:
    signed short channel; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    unsigned char * m_addr; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    unsigned char * start_addr; // offset 0xC, size 0x4
};
// total size: 0x3C
class HISGetFileIndexDebugReturn {
    // Members
public:
    class HISFileIndexDebug fileIndexDebug; // offset 0x0, size 0x3C
};
// total size: 0x1
class HISPlayExternalStreamReturn {};
// total size: 0x1
class HISWaitForRequestParameter {};
// total size: 0x1
class HISCloseRequestReturn {
    // Members
public:
    unsigned char success; // offset 0x0, size 0x1
};
// total size: 0x1C
class HISRequestDebug {
    // Members
public:
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        signed int nextRequest : 8; // offset 0x0, size 0x4
        enum HISStatus status : 8; // offset 0x0, size 0x4
        enum HISMemoryType destinationType : 8; // offset 0x0, size 0x4
    } small; // offset 0x0, size 0x4
    signed int destination; // offset 0x4, size 0x4
    signed int currentPriority; // offset 0x8, size 0x4
    signed int originalPriority; // offset 0xC, size 0x4
    signed int fileIndex; // offset 0x10, size 0x4
    signed int startSector; // offset 0x14, size 0x4
    signed int sectorsToRead; // offset 0x18, size 0x4
};
// total size: 0x4
class HISRemoteBlockTransReturn {
    // Members
public:
    signed int ret; // offset 0x0, size 0x4
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    signed int nextRequest : 8; // offset 0x0, size 0x4
    enum HISStatus status : 8; // offset 0x0, size 0x4
    enum HISMemoryType destinationType : 8; // offset 0x0, size 0x4
};
// total size: 0x4
class HISTestReturn {
    // Members
public:
    signed int returnValue; // offset 0x0, size 0x4
};
// total size: 0x1C
class HISLoadBlockAsyncParameter {
    // Members
public:
    signed int fileIndex; // offset 0x0, size 0x4
    signed int sourceBlock; // offset 0x4, size 0x4
    signed int sourceSize; // offset 0x8, size 0x4
    void * destinationAddress; // offset 0xC, size 0x4
    enum HISMemoryType destinationType; // offset 0x10, size 0x4
    signed int priority; // offset 0x14, size 0x4
    signed int flags; // offset 0x18, size 0x4
};
// total size: 0x1
class HISWaitForRequestReturn {};
// total size: 0x1
class HISWaitForAllRequestsParameter {};
// total size: 0x8
class HISLoadExternalStreamParameter {
    // Members
public:
    unsigned short voice; // offset 0x0, size 0x2
    unsigned short buffer; // offset 0x2, size 0x2
    void * address; // offset 0x4, size 0x4
};
// total size: 0x1
class HISWaitForAllRequestsReturn {};
// total size: 0x1
class HISLoadExternalStreamReturn {};

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349D10 -> 0x00349DBC
*/
// Range: 0x349D10 -> 0x349DBC
void HISRemoteSetParam(unsigned short reg /* r19 */, unsigned short value /* r18 */) {
    /* anonymous block */ {
        // Range: 0x349D10 -> 0x349DBC
        char inputBuffer[20]; // r29+0x80
        class HISRemoteSetParamParameter * input; // r17
        char outputBuffer[17]; // r29+0x60
        class HISRemoteSetParamReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349DC0 -> 0x00349EA4
*/
// Range: 0x349DC0 -> 0x349EA4
signed int HISRemoteVoiceTrans(signed short channel /* r20 */, unsigned short mode /* r19 */, unsigned char * m_addr /* r18 */, unsigned int s_addr /* r21 */, unsigned int size /* r22 */) {
    /* anonymous block */ {
        // Range: 0x349DC0 -> 0x349EA4
        char inputBuffer[32]; // r29+0xB0
        class HISRemoteVoiceTransParameter * input; // r17
        char outputBuffer[20]; // r29+0x90
        class HISRemoteVoiceTransReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349EB0 -> 0x00349F60
*/
// Range: 0x349EB0 -> 0x349F60
unsigned int HISRemoteBlockTransStatus(signed short channel /* r19 */, signed short flag /* r18 */) {
    /* anonymous block */ {
        // Range: 0x349EB0 -> 0x349F60
        char inputBuffer[20]; // r29+0x80
        class HISRemoteBlockTransStatusParameter * input; // r17
        char outputBuffer[20]; // r29+0x60
        class HISRemoteBlockTransStatusReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349F60 -> 0x0034A044
*/
// Range: 0x349F60 -> 0x34A044
signed int HISRemoteBlockTrans(signed short channel /* r20 */, unsigned short mode /* r19 */, unsigned char * m_addr /* r18 */, unsigned int size /* r21 */, unsigned char * start_addr /* r22 */) {
    /* anonymous block */ {
        // Range: 0x349F60 -> 0x34A044
        char inputBuffer[32]; // r29+0xB0
        class HISRemoteBlockTransParameter * input; // r17
        char outputBuffer[20]; // r29+0x90
        class HISRemoteBlockTransReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A050 -> 0x0034A0F4
*/
// Range: 0x34A050 -> 0x34A0F4
signed int HISGetExternalStreamBuffer(signed int voice /* r18 */) {
    /* anonymous block */ {
        // Range: 0x34A050 -> 0x34A0F4
        char inputBuffer[20]; // r29+0x70
        class HISGetExternalStreamBufferParameter * input; // r17
        char outputBuffer[20]; // r29+0x50
        class HISGetExternalStreamBufferReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A100 -> 0x0034A1C0
*/
// Range: 0x34A100 -> 0x34A1C0
void HISLoadExternalStream(signed int voice /* r20 */, signed int buffer /* r19 */, void * address /* r18 */) {
    /* anonymous block */ {
        // Range: 0x34A100 -> 0x34A1C0
        char inputBuffer[24]; // r29+0x90
        class HISLoadExternalStreamParameter * input; // r17
        char outputBuffer[17]; // r29+0x70
        class HISLoadExternalStreamReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A1C0 -> 0x0034A26C
*/
// Range: 0x34A1C0 -> 0x34A26C
void HISSetMasterVolume(signed int leftVolume /* r19 */, signed int rightVolume /* r18 */) {
    /* anonymous block */ {
        // Range: 0x34A1C0 -> 0x34A26C
        char inputBuffer[20]; // r29+0x80
        class HISSetMasterVolumeParameter * input; // r17
        char outputBuffer[17]; // r29+0x60
        class HISSetMasterVolumeReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A270 -> 0x0034A32C
*/
// Range: 0x34A270 -> 0x34A32C
void HISGetVoiceStatus(unsigned int * data /* r17 */) {
    /* anonymous block */ {
        // Range: 0x34A270 -> 0x34A32C
        char inputBuffer[17]; // r29+0x70
        class HISGetVoiceStatusParameter * input; // r18
        char outputBuffer[24]; // r29+0x50
        class HISGetVoiceStatusReturn * output; // r16
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A330 -> 0x0034A3AC
*/
// Range: 0x34A330 -> 0x34A3AC
void _HISBatchSoundCommandsNoWait(void * data /* r17 */, signed int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x34A330 -> 0x34A3AC
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A3B0 -> 0x0034A42C
*/
// Range: 0x34A3B0 -> 0x34A42C
void HISBatchSoundCommands(void * data /* r17 */, signed int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x34A3B0 -> 0x34A42C
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A430 -> 0x0034A524
*/
// Range: 0x34A430 -> 0x34A524
void HISGetFileIndexDebug(signed int fileIndex /* r19 */, class HISFileIndexDebug * fileIndexDebug /* r17 */) {
    /* anonymous block */ {
        // Range: 0x34A430 -> 0x34A524
        char inputBuffer[20]; // r29+0xB0
        class HISGetFileIndexDebugParameter * input; // r18
        char outputBuffer[76]; // r29+0x60
        class HISGetFileIndexDebugReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A530 -> 0x0034A5C0
*/
// Range: 0x34A530 -> 0x34A5C0
signed int HISGetFirstValidRequest() {
    /* anonymous block */ {
        // Range: 0x34A530 -> 0x34A5C0
        char inputBuffer[17]; // r29+0x60
        class HISGetFirstValidRequestParameter * input; // r17
        char outputBuffer[20]; // r29+0x40
        class HISGetFirstValidRequestReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A5C0 -> 0x0034A6A4
*/
// Range: 0x34A5C0 -> 0x34A6A4
void HISGetRequestDebug(signed int requestID /* r19 */, class HISRequestDebug * requestDebug /* r17 */) {
    /* anonymous block */ {
        // Range: 0x34A5C0 -> 0x34A6A4
        char inputBuffer[20]; // r29+0x90
        class HISGetRequestDebugParameter * input; // r18
        char outputBuffer[44]; // r29+0x60
        class HISGetRequestDebugReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A6B0 -> 0x0034A73C
*/
// Range: 0x34A6B0 -> 0x34A73C
void HISFlushHostIOHandles() {
    /* anonymous block */ {
        // Range: 0x34A6B0 -> 0x34A73C
        char inputBuffer[17]; // r29+0x60
        class HISFlushHostIOHandlesParameter * input; // r17
        char outputBuffer[17]; // r29+0x40
        class HISFlushHostIOHandlesReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A740 -> 0x0034A7E4
*/
// Range: 0x34A740 -> 0x34A7E4
signed int HISGetFileSize(signed int fileIndex /* r18 */) {
    /* anonymous block */ {
        // Range: 0x34A740 -> 0x34A7E4
        char inputBuffer[20]; // r29+0x70
        class HISGetFileSizeParameter * input; // r17
        char outputBuffer[20]; // r29+0x50
        class HISGetFileSizeReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A7F0 -> 0x0034A87C
*/
// Range: 0x34A7F0 -> 0x34A87C
void HISWaitForRequest() {
    /* anonymous block */ {
        // Range: 0x34A7F0 -> 0x34A87C
        char inputBuffer[17]; // r29+0x60
        class HISWaitForRequestParameter * input; // r17
        char outputBuffer[17]; // r29+0x40
        class HISWaitForRequestReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A880 -> 0x0034A924
*/
// Range: 0x34A880 -> 0x34A924
unsigned char HISCloseRequest(signed int requestID /* r18 */) {
    /* anonymous block */ {
        // Range: 0x34A880 -> 0x34A924
        char inputBuffer[20]; // r29+0x70
        class HISCloseRequestParameter * input; // r17
        char outputBuffer[17]; // r29+0x50
        class HISCloseRequestReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A930 -> 0x0034A9D4
*/
// Range: 0x34A930 -> 0x34A9D4
unsigned char HISCancelRequest(signed int requestID /* r18 */) {
    /* anonymous block */ {
        // Range: 0x34A930 -> 0x34A9D4
        char inputBuffer[20]; // r29+0x70
        class HISCancelRequestParameter * input; // r17
        char outputBuffer[17]; // r29+0x50
        class HISCancelRequestReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A9E0 -> 0x0034AA84
*/
// Range: 0x34A9E0 -> 0x34AA84
enum HISStatus HISGetRequestStatus(signed int requestID /* r18 */) {
    /* anonymous block */ {
        // Range: 0x34A9E0 -> 0x34AA84
        char inputBuffer[20]; // r29+0x70
        class HISGetRequestStatusParameter * input; // r17
        char outputBuffer[20]; // r29+0x50
        class HISGetRequestStatusReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AA90 -> 0x0034ABA4
*/
// Range: 0x34AA90 -> 0x34ABA4
signed int HISLoadBlockAsync(signed int fileIndex /* r21 */, signed int sourceBlock /* r22 */, signed int sourceSize /* r20 */, void * destinationAddress /* r19 */, enum HISMemoryType destinationType /* r18 */, signed int priority /* r23 */, signed int flags /* r30 */) {
    /* anonymous block */ {
        // Range: 0x34AA90 -> 0x34ABA4
        char inputBuffer[44]; // r29+0xD0
        class HISLoadBlockAsyncParameter * input; // r17
        char outputBuffer[20]; // r29+0xB0
        class HISLoadBlockAsyncReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034ABB0 -> 0x0034AC5C
*/
// Range: 0x34ABB0 -> 0x34AC5C
signed int HISGetFileIndex(char * filename /* r18 */) {
    /* anonymous block */ {
        // Range: 0x34ABB0 -> 0x34AC5C
        char inputBuffer[64]; // r29+0x70
        class HISGetFileIndexParameter * input; // r17
        char outputBuffer[20]; // r29+0x50
        class HISGetFileIndexReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AC60 -> 0x0034ACF0
*/
// Range: 0x34AC60 -> 0x34ACF0
signed int HISGetVersion() {
    /* anonymous block */ {
        // Range: 0x34AC60 -> 0x34ACF0
        char inputBuffer[17]; // r29+0x60
        class HISGetVersionParameter * input; // r17
        char outputBuffer[20]; // r29+0x40
        class HISGetVersionReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034ACF0 -> 0x0034AD90
*/
// Range: 0x34ACF0 -> 0x34AD90
void HISInit(enum HISMediaType mediaType /* r18 */) {
    /* anonymous block */ {
        // Range: 0x34ACF0 -> 0x34AD90
        char inputBuffer[20]; // r29+0x70
        class HISInitParameter * input; // r17
        char outputBuffer[17]; // r29+0x50
        class HISInitReturn * output; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AD90 -> 0x0034ADD4
*/
// Range: 0x34AD90 -> 0x34ADD4
void HISInitStubs() {
    /* anonymous block */ {
        // Range: 0x34AD90 -> 0x34ADD4
    }
}


