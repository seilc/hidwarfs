/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class _sif_client_data clientData; // size: 0x28, address: 0x67DB70
static unsigned char asyncFire; // size: 0x1, address: 0x608CF4
static unsigned int cachedVoiceStatus[2]; // size: 0x8, address: 0x608CF8
static char cachedVoiceStatusReturn[24]; // size: 0x18, address: 0x67DBA0
static class HISDebugState * _iopState; // size: 0x4, address: 0x608D00
static char asyncRequestBuffers[4096]; // size: 0x1000, address: 0x67DBC0
static char * asyncRequestBuffer; // size: 0x4, address: 0x607860
static signed int asyncRequestCurrent; // size: 0x4, address: 0x608D04
// total size: 0x3D0
class HISDebugState {
    // Members
public:
    signed int retryCount; // offset 0x0, size 0x4
    enum HISRequestThreadState requestThread; // offset 0x4, size 0x4
    enum HISMainThreadState mainThread; // offset 0x8, size 0x4
    enum HISStreamThreadState streamThread; // offset 0xC, size 0x4
    unsigned char abortted; // offset 0x10, size 0x1
    char abortMessage[127]; // offset 0x11, size 0x7F
    class Request requests[16]; // offset 0x90, size 0x340
};
// total size: 0x1
class HISPauseVoiceReturn {};
// total size: 0x4
class HISGetVersionReturn {
    // Members
public:
    signed int version; // offset 0x0, size 0x4
};
// total size: 0x1
class HISGetFirstValidRequestParameter {};
// total size: 0x4
class HISGetRequestStatusReturn {
    // Members
public:
    enum HISStatus currentStatus; // offset 0x0, size 0x4
};
// total size: 0x20
class HISGetSoundDebugVoiceReturn {
    // Members
public:
    class HISSoundDebugVoice soundDebugVoice; // offset 0x0, size 0x20
};
// total size: 0x4
class HISRemoteVoiceTransStatusReturn {
    // Members
public:
    unsigned int ret; // offset 0x0, size 0x4
};
// total size: 0x1
class HISGetSPUEndAddressParameter {};
// total size: 0x4
class HISRemoteBlockTransStatusParameter {
    // Members
public:
    signed short channel; // offset 0x0, size 0x2
    signed short flag; // offset 0x2, size 0x2
};
// total size: 0x1
class HISGetSPUStartAddressParameter {};
// total size: 0x1
class HISGetFreeRequestCountParameter {};
// total size: 0x4
class HISSetVoicePitchParameter {
    // Members
public:
    unsigned short voice; // offset 0x0, size 0x2
    unsigned short pitch; // offset 0x2, size 0x2
};
// total size: 0x4
class HISRemoteBlockTransStatusReturn {
    // Members
public:
    unsigned int ret; // offset 0x0, size 0x4
};
// total size: 0x4
class HISRemoteSetParamParameter {
    // Members
public:
    unsigned short reg; // offset 0x0, size 0x2
    unsigned short value; // offset 0x2, size 0x2
};
// total size: 0x1
class HISEnableEffectsParameter {
    // Members
public:
    unsigned char enabled; // offset 0x0, size 0x1
};
// total size: 0x4
class HISGetSPUStartAddressReturn {
    // Members
public:
    signed int address; // offset 0x0, size 0x4
};
// total size: 0x4
class HISGetFirstValidRequestReturn {
    // Members
public:
    signed int request; // offset 0x0, size 0x4
};
// total size: 0x4
class HISGetSoundDebugVoiceParameter {
    // Members
public:
    signed int voice; // offset 0x0, size 0x4
};
// total size: 0x1
class HISFlushHostIOHandlesParameter {};
// total size: 0x4
class HISGetSPUEndAddressReturn {
    // Members
public:
    signed int address; // offset 0x0, size 0x4
};
// total size: 0x20
class HISPlayStreamParameter {
    // Members
public:
    signed int fileIndex; // offset 0x0, size 0x4
    signed int logicalSectorNumber; // offset 0x4, size 0x4
    signed int dataSize; // offset 0x8, size 0x4
    signed int blockSize; // offset 0xC, size 0x4
    unsigned short voice; // offset 0x10, size 0x2
    signed short leftVolume; // offset 0x12, size 0x2
    signed short rightVolume; // offset 0x14, size 0x2
    unsigned short pitch; // offset 0x16, size 0x2
    unsigned short flags; // offset 0x18, size 0x2
    unsigned short attack; // offset 0x1A, size 0x2
    unsigned short release; // offset 0x1C, size 0x2
    unsigned short interleaveSectors; // offset 0x1E, size 0x2
};
// total size: 0x14
class HISPlayExternalStreamParameter {
    // Members
public:
    signed int blockSize; // offset 0x0, size 0x4
    unsigned short voice; // offset 0x4, size 0x2
    signed short leftVolume; // offset 0x6, size 0x2
    signed short rightVolume; // offset 0x8, size 0x2
    unsigned short pitch; // offset 0xA, size 0x2
    unsigned short flags; // offset 0xC, size 0x2
    unsigned short attack; // offset 0xE, size 0x2
    unsigned short release; // offset 0x10, size 0x2
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
// total size: 0x28
class _sif_client_data {
    // Members
public:
    class _sif_rpc_data rpcd; // offset 0x0, size 0x10
    unsigned int command; // offset 0x10, size 0x4
    void * buff; // offset 0x14, size 0x4
    void * gp; // offset 0x18, size 0x4
    void (* func)(void *); // offset 0x1C, size 0x4
    void * para; // offset 0x20, size 0x4
    class _sif_serve_data * serve; // offset 0x24, size 0x4
};
// total size: 0x1
class HISSetVoicePitchReturn {};
// total size: 0x1
class HISRemoteSetParamReturn {};
// total size: 0x1
class HISEnableEffectsReturn {};
// total size: 0x2
class HISResumeVoiceParameter {
    // Members
public:
    unsigned short voice; // offset 0x0, size 0x2
};
// total size: 0x4
class HISSetMasterVolumeParameter {
    // Members
public:
    signed short leftVolume; // offset 0x0, size 0x2
    signed short rightVolume; // offset 0x2, size 0x2
};
// total size: 0x4
class HISGetFreeRequestCountReturn {
    // Members
public:
    signed int count; // offset 0x0, size 0x4
};
// total size: 0x8
class HISBatchSoundCommandsReturn {
    // Members
public:
    unsigned int status[2]; // offset 0x0, size 0x8
};
// total size: 0x1
class HISGetVersionParameter {};
// total size: 0x8
class HISLoadExternalStreamParameter {
    // Members
public:
    unsigned short voice; // offset 0x0, size 0x2
    unsigned short buffer; // offset 0x2, size 0x2
    void * address; // offset 0x4, size 0x4
};
// total size: 0x30
class HISGetFileIndexParameter {
    // Members
public:
    char filename[48]; // offset 0x0, size 0x30
};
// total size: 0x1
class HISPlayExternalStreamReturn {};
enum HISStreamThreadState {
    HIS_STREAM_THREAD_NOTHING = 0,
    HIS_STREAM_THREAD_WAIT_EVENT = 1,
    HIS_STREAM_THREAD_WAIT_LOCK = 2,
    HIS_STREAM_THREAD_PROCESS_STREAMS = 3,
};
// total size: 0x1
class HISNullParameter {};
// total size: 0xE
class HISSetEffectParameter {
    // Members
public:
    unsigned short mode; // offset 0x0, size 0x2
    signed short leftDepth; // offset 0x2, size 0x2
    signed short rightDepth; // offset 0x4, size 0x2
    unsigned short delay; // offset 0x6, size 0x2
    unsigned short feedback; // offset 0x8, size 0x2
    signed short leftVolume; // offset 0xA, size 0x2
    signed short rightVolume; // offset 0xC, size 0x2
};
// total size: 0x1
class HISFlushHostIOHandlesReturn {};
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
// total size: 0x1
class HISSetMasterVolumeReturn {};
// total size: 0x4
class HISSoundDebug {
    // Members
public:
    signed short leftVolume; // offset 0x0, size 0x2
    signed short rightVolume; // offset 0x2, size 0x2
};
// total size: 0x4
class HISCancelRequestParameter {
    // Members
public:
    signed int requestID; // offset 0x0, size 0x4
};
enum HISRequestThreadState {
    HIS_REQUEST_THREAD_NOTHING = 0,
    HIS_REQUEST_THREAD_WAIT_LOCK1 = 1,
    HIS_REQUEST_THREAD_REQUEST_LOOP = 2,
    HIS_REQUEST_THREAD_WAIT_REQUEST = 3,
    HIS_REQUEST_THREAD_WAIT_LOCK2 = 4,
    HIS_REQUEST_THREAD_REQUEST_FINISHED = 5,
    HIS_REQUEST_THREAD_RETRY_START = 6,
    HIS_REQUEST_THREAD_RETRY_END = 7,
    HIS_REQUEST_THREAD_CALLING_FINISH_REQUEST = 8,
    HIS_REQUEST_THREAD_CALLING_DATA_CALLBACK = 9,
    HIS_REQUEST_THREAD_DONE_DATA_CALLBACK = 10,
    HIS_REQUEST_THREAD_SUBMIT = 11,
    HIS_REQUEST_THREAD_WAIT_DMA = 12,
    HIS_REQUEST_THREAD_WAIT_DMA_DONE = 13,
    HIS_REQUEST_THREAD_NEW_DMA = 14,
    HIS_REQUEST_THREAD_NEW_DMA_DONE = 15,
    HIS_REQUEST_THREAD_CALLING_DONE_CALLBACK = 16,
    HIS_REQUEST_THREAD_DONE_DONE_CALLBACK = 17,
    HIS_REQUEST_THREAD_FINISH_REQUEST_DONE = 18,
    HIS_REQUEST_THREAD_FIND_NEW_REQUEST = 19,
    HIS_REQUEST_THREAD_SCHEDULE_REQUEST = 20,
    HIS_REQUEST_THREAD_HOSTIO_RELEASE = 21,
    HIS_REQUEST_THREAD_HOSTIO_OPEN = 22,
    HIS_REQUEST_THREAD_HOSTIO_SEEK_READ = 23,
    HIS_REQUEST_THREAD_WAIT_LOCK3 = 24,
};
// total size: 0x1
class HISDelayFrameParameter {};
// total size: 0x14
class HISPlaySoundParameter {
    // Members
public:
    unsigned int address; // offset 0x0, size 0x4
    unsigned short voice; // offset 0x4, size 0x2
    signed short leftVolume; // offset 0x6, size 0x2
    signed short rightVolume; // offset 0x8, size 0x2
    unsigned short pitch; // offset 0xA, size 0x2
    unsigned short flags; // offset 0xC, size 0x2
    unsigned short attack; // offset 0xE, size 0x2
    unsigned short release; // offset 0x10, size 0x2
};
// total size: 0x4
class HISGetFileIndexReturn {
    // Members
public:
    signed int index; // offset 0x0, size 0x4
};
// total size: 0x1
class HISResumeVoiceReturn {};
// total size: 0x1
class HISSetEffectReturn {};
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
class HISGetVoiceStatusParameter {};
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
// total size: 0x1
class HISCancelRequestReturn {
    // Members
public:
    unsigned char success; // offset 0x0, size 0x1
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
// total size: 0x1
class HISLoadExternalStreamReturn {};
// total size: 0x1
class HISNullReturn {};
// total size: 0x1
class HISDelayFrameReturn {};
// total size: 0x1
class HISPlaySoundReturn {};
// total size: 0x4
class HISGetFileIndexDebugParameter {
    // Members
public:
    signed int fileIndex; // offset 0x0, size 0x4
};
// total size: 0x4
class HISRemoteVoiceTransStatusParameter {
    // Members
public:
    signed short channel; // offset 0x0, size 0x2
    signed short flag; // offset 0x2, size 0x2
};
// total size: 0x1
class HISWaitForRequestParameter {};
// total size: 0x8
class HISGetVoiceStatusReturn {
    // Members
public:
    unsigned int status[2]; // offset 0x0, size 0x8
};
// total size: 0x1
class HISPlayStreamReturn {};
// total size: 0x4
class HISRemoteBlockTransReturn {
    // Members
public:
    signed int ret; // offset 0x0, size 0x4
};
// total size: 0x2
class HISStopVoiceParameter {
    // Members
public:
    unsigned short voice; // offset 0x0, size 0x2
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
// total size: 0x1
class HISGetSoundDebugParameter {};
// total size: 0x3C
class HISGetFileIndexDebugReturn {
    // Members
public:
    class HISFileIndexDebug fileIndexDebug; // offset 0x0, size 0x3C
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
class HISRemoteVoiceTransReturn {
    // Members
public:
    signed int ret; // offset 0x0, size 0x4
};
// total size: 0x4
class HISCloseRequestParameter {
    // Members
public:
    signed int requestID; // offset 0x0, size 0x4
};
// total size: 0x4
class HISJoinStereoVoicesParameter {
    // Members
public:
    unsigned short voice1; // offset 0x0, size 0x2
    unsigned short voice2; // offset 0x2, size 0x2
};
// total size: 0x1
class HISWaitForRequestReturn {};
// total size: 0x1
class HISStopVoiceReturn {};
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
class HISGetDebugStateParameter {};
// total size: 0x1
class HISCloseRequestReturn {
    // Members
public:
    unsigned char success; // offset 0x0, size 0x1
};
// total size: 0x4
class HISGetSoundDebugReturn {
    // Members
public:
    class HISSoundDebug soundDebug; // offset 0x0, size 0x4
};
// total size: 0x4
class HISGetExternalStreamBufferParameter {
    // Members
public:
    signed int voice; // offset 0x0, size 0x4
};
// total size: 0x2
class HISPauseVoiceParameter {
    // Members
public:
    unsigned short voice; // offset 0x0, size 0x2
};
// total size: 0x4C
class HISDebugControlParameter {
    // Members
public:
    signed int parameter; // offset 0x0, size 0x4
    signed int value0; // offset 0x4, size 0x4
    signed int value1; // offset 0x8, size 0x4
    char value2[64]; // offset 0xC, size 0x40
};
// total size: 0x4
class HISLoadBlockAsyncReturn {
    // Members
public:
    signed int requestID; // offset 0x0, size 0x4
};
// total size: 0x4
class HISGetDebugStateReturn {
    // Members
public:
    class HISDebugState * returnValue; // offset 0x0, size 0x4
};
// total size: 0x6
class HISSetVoiceVolumeParameter {
    // Members
public:
    unsigned short voice; // offset 0x0, size 0x2
    signed short leftVolume; // offset 0x2, size 0x2
    signed short rightVolume; // offset 0x4, size 0x2
};
// total size: 0x34
class Request {
    // Members
public:
    char filename[32]; // offset 0x0, size 0x20
    signed int startSector; // offset 0x20, size 0x4
    signed int countSector; // offset 0x24, size 0x4
    void * destination; // offset 0x28, size 0x4
    enum HISMemoryType destinationType; // offset 0x2C, size 0x4
    unsigned char finished; // offset 0x30, size 0x1
    unsigned char cancelled; // offset 0x31, size 0x1
    unsigned char valid; // offset 0x32, size 0x1
    unsigned char failed; // offset 0x33, size 0x1
};
// total size: 0x1
class HISJoinStereoVoicesReturn {};
// total size: 0x48
class HISInitParameter {
    // Members
public:
    enum HISMediaType mediaType; // offset 0x0, size 0x4
    unsigned char allowEffects; // offset 0x4, size 0x1
    char cacheSubDirectory[64]; // offset 0x5, size 0x40
};
// total size: 0x4
class HISGetFileSizeParameter {
    // Members
public:
    signed int fileIndex; // offset 0x0, size 0x4
};
// total size: 0x1
class HISWaitForAllRequestsParameter {};
// total size: 0x1C
class _sif_receive_data {
    // Members
public:
    class _sif_rpc_data rpcd; // offset 0x0, size 0x10
    void * src; // offset 0x10, size 0x4
    void * dest; // offset 0x14, size 0x4
    signed int size; // offset 0x18, size 0x4
};
// total size: 0x1
class HISGetRequestCountParameter {};
// total size: 0x4
class HISGetExternalStreamBufferReturn {
    // Members
public:
    signed int buffer; // offset 0x0, size 0x4
};
// total size: 0x1
class HISSetVoiceVolumeReturn {};
// total size: 0x4
class HISGetFileSizeReturn {
    // Members
public:
    signed int size; // offset 0x0, size 0x4
};
// total size: 0x1
class HISInitReturn {};
// total size: 0x4
class HISGetRequestCountReturn {
    // Members
public:
    signed int count; // offset 0x0, size 0x4
};
// total size: 0x4
class HISDebugControlReturn {
    // Members
public:
    signed int returnValue; // offset 0x0, size 0x4
};
// total size: 0x1
class HISWaitForAllRequestsReturn {};
// total size: 0x20
class HISSoundDebugVoice {
    // Members
public:
    unsigned int address; // offset 0x0, size 0x4
    signed short leftVolume; // offset 0x4, size 0x2
    signed short rightVolume; // offset 0x6, size 0x2
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
enum HISMediaType {
    HIS_MEDIA_CDROM = 0,
    HIS_MEDIA_DVD = 1,
    HIS_MEDIA_HOSTIO = 2,
};
// total size: 0x4
class HISGetRequestDebugParameter {
    // Members
public:
    signed int requestID; // offset 0x0, size 0x4
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
// total size: 0x1C
class HISGetRequestDebugReturn {
    // Members
public:
    class HISRequestDebug requestDebug; // offset 0x0, size 0x1C
};
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
enum HISMainThreadState {
    HIS_MAIN_THREAD_NOTHING = 0,
    HIS_MAIN_THREAD_WAIT = 1,
    HIS_MAIN_THREAD_PROCESS = 2,
    HIS_MAIN_THREAD_WAIT_FOR_REQUEST_START = 3,
    HIS_MAIN_THREAD_WAIT_FOR_REQUEST_WAIT1 = 4,
    HIS_MAIN_THREAD_WAIT_FOR_REQUEST_WAIT2 = 5,
    HIS_MAIN_THREAD_WAIT_FOR_REQUEST_END = 6,
    HIS_MAIN_THREAD_DELAY_START = 7,
    HIS_MAIN_THREAD_DELAY_END = 8,
    HIS_MAIN_THREAD_RETURN = 9,
};
// total size: 0x4
class HISGetRequestStatusParameter {
    // Members
public:
    signed int requestID; // offset 0x0, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F15F0 -> 0x001F1694
*/
// Range: 0x1F15F0 -> 0x1F1694
void HISFlushAsyncRequestsNoWait() {
    /* anonymous block */ {
        // Range: 0x1F15F0 -> 0x1F1694
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F16A0 -> 0x001F1724
*/
// Range: 0x1F16A0 -> 0x1F1724
void HISFlushAsyncRequests() {
    /* anonymous block */ {
        // Range: 0x1F16A0 -> 0x1F1724
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1730 -> 0x001F1784
*/
// Range: 0x1F1730 -> 0x1F1784
void HISPlayExternalStreamAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */, signed int pitch /* r2 */, signed int flags /* r2 */, signed int attack /* r2 */, signed int release /* r2 */, signed int blockSize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F1730 -> 0x1F1784
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1790 -> 0x001F17CC
*/
// Range: 0x1F1790 -> 0x1F17CC
void HISJoinStereoVoicesAsync(signed int voice1 /* r2 */, signed int voice2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F1790 -> 0x1F17CC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F17D0 -> 0x001F1808
*/
// Range: 0x1F17D0 -> 0x1F1808
void HISResumeVoiceAsync(signed int voice /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F17D0 -> 0x1F1808
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1810 -> 0x001F1848
*/
// Range: 0x1F1810 -> 0x1F1848
void HISPauseVoiceAsync(signed int voice /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F1810 -> 0x1F1848
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1850 -> 0x001F1888
*/
// Range: 0x1F1850 -> 0x1F1888
void HISStopVoiceAsync(signed int voice /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F1850 -> 0x1F1888
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1890 -> 0x001F18CC
*/
// Range: 0x1F1890 -> 0x1F18CC
void HISSetVoicePitchAsync(signed int voice /* r2 */, signed int pitch /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F1890 -> 0x1F18CC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F18D0 -> 0x001F1910
*/
// Range: 0x1F18D0 -> 0x1F1910
void HISSetVoiceVolumeAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F18D0 -> 0x1F1910
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1910 -> 0x001F1984
*/
// Range: 0x1F1910 -> 0x1F1984
void HISPlayStreamAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */, signed int pitch /* r2 */, signed int fileIndex /* r2 */, signed int logicalSectorNumber /* r2 */, signed int dataSize /* r2 */, signed int flags /* r2 */, signed int attack /* r29 */, signed int release /* r29+0x8 */, signed int blockSize /* r29+0x10 */, signed int interleaveSectors /* r29+0x18 */) {
    /* anonymous block */ {
        // Range: 0x1F1910 -> 0x1F1984
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1990 -> 0x001F19E4
*/
// Range: 0x1F1990 -> 0x1F19E4
void HISPlaySoundAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */, signed int pitch /* r2 */, unsigned int address /* r2 */, signed int flags /* r2 */, signed int attack /* r2 */, signed int release /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F1990 -> 0x1F19E4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F19F0 -> 0x001F1A30
*/
// Range: 0x1F19F0 -> 0x1F1A30
class HISDebugState * HISGetDebugState() {
    /* anonymous block */ {
        // Range: 0x1F19F0 -> 0x1F1A30
        class _sif_receive_data receiveData; // r29+0x10
        char state[992]; // @ 0x0067EBC0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1A30 -> 0x001F1AB4
*/
// Range: 0x1F1A30 -> 0x1F1AB4
void HISSetEffect(signed int mode /* r2 */, signed int leftDepth /* r2 */, signed int rightDepth /* r2 */, signed int delay /* r2 */, signed int feedback /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F1A30 -> 0x1F1AB4
        char inputBuffer[30]; // r29+0x60
        class HISSetEffectParameter * input; // r17
        char outputBuffer[17]; // r29+0x40
        class HISSetEffectReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1AC0 -> 0x001F1B2C
*/
// Range: 0x1F1AC0 -> 0x1F1B2C
void HISEnableEffects(unsigned char enabled /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F1AC0 -> 0x1F1B2C
        char inputBuffer[17]; // r29+0x60
        class HISEnableEffectsParameter * input; // r17
        char outputBuffer[17]; // r29+0x40
        class HISEnableEffectsReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1B30 -> 0x001F1B9C
*/
// Range: 0x1F1B30 -> 0x1F1B9C
signed int HISGetSPUEndAddress() {
    /* anonymous block */ {
        // Range: 0x1F1B30 -> 0x1F1B9C
        char inputBuffer[17]; // r29+0x60
        class HISGetSPUEndAddressParameter * input; // r17
        char outputBuffer[20]; // r29+0x40
        class HISGetSPUEndAddressReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1BA0 -> 0x001F1C0C
*/
// Range: 0x1F1BA0 -> 0x1F1C0C
signed int HISGetSPUStartAddress() {
    /* anonymous block */ {
        // Range: 0x1F1BA0 -> 0x1F1C0C
        char inputBuffer[17]; // r29+0x60
        class HISGetSPUStartAddressParameter * input; // r17
        char outputBuffer[20]; // r29+0x40
        class HISGetSPUStartAddressReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1C10 -> 0x001F1C80
*/
// Range: 0x1F1C10 -> 0x1F1C80
signed int HISGetExternalStreamBuffer(signed int voice /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F1C10 -> 0x1F1C80
        char inputBuffer[20]; // r29+0x60
        class HISGetExternalStreamBufferParameter * input; // r17
        char outputBuffer[20]; // r29+0x40
        class HISGetExternalStreamBufferReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1C80 -> 0x001F1CF4
*/
// Range: 0x1F1C80 -> 0x1F1CF4
void HISLoadExternalStream(signed int voice /* r2 */, signed int buffer /* r2 */, void * address /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F1C80 -> 0x1F1CF4
        char inputBuffer[24]; // r29+0x60
        class HISLoadExternalStreamParameter * input; // r17
        char outputBuffer[17]; // r29+0x40
        class HISLoadExternalStreamReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1D00 -> 0x001F1D70
*/
// Range: 0x1F1D00 -> 0x1F1D70
void HISSetMasterVolume(signed int leftVolume /* r2 */, signed int rightVolume /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F1D00 -> 0x1F1D70
        char inputBuffer[20]; // r29+0x60
        class HISSetMasterVolumeParameter * input; // r17
        char outputBuffer[17]; // r29+0x40
        class HISSetMasterVolumeReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1D70 -> 0x001F1DBC
*/
// Range: 0x1F1D70 -> 0x1F1DBC
void HISGetCachedVoiceStatus(unsigned int * status /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F1D70 -> 0x1F1DBC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1DC0 -> 0x001F1E28
*/
// Range: 0x1F1DC0 -> 0x1F1E28
void HISFlushHostIOHandles() {
    /* anonymous block */ {
        // Range: 0x1F1DC0 -> 0x1F1E28
        char inputBuffer[17]; // r29+0x60
        class HISFlushHostIOHandlesParameter * input; // r17
        char outputBuffer[17]; // r29+0x40
        class HISFlushHostIOHandlesReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1E30 -> 0x001F1EA0
*/
// Range: 0x1F1E30 -> 0x1F1EA0
signed int HISGetFileSize(signed int fileIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F1E30 -> 0x1F1EA0
        char inputBuffer[20]; // r29+0x60
        class HISGetFileSizeParameter * input; // r17
        char outputBuffer[20]; // r29+0x40
        class HISGetFileSizeReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1EA0 -> 0x001F1F08
*/
// Range: 0x1F1EA0 -> 0x1F1F08
void HISWaitForRequest() {
    /* anonymous block */ {
        // Range: 0x1F1EA0 -> 0x1F1F08
        char inputBuffer[17]; // r29+0x60
        class HISWaitForRequestParameter * input; // r17
        char outputBuffer[17]; // r29+0x40
        class HISWaitForRequestReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1F10 -> 0x001F1F80
*/
// Range: 0x1F1F10 -> 0x1F1F80
unsigned char HISCloseRequest(signed int requestID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F1F10 -> 0x1F1F80
        char inputBuffer[20]; // r29+0x60
        class HISCloseRequestParameter * input; // r17
        char outputBuffer[17]; // r29+0x40
        class HISCloseRequestReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1F80 -> 0x001F1FF0
*/
// Range: 0x1F1F80 -> 0x1F1FF0
unsigned char HISCancelRequest(signed int requestID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F1F80 -> 0x1F1FF0
        char inputBuffer[20]; // r29+0x60
        class HISCancelRequestParameter * input; // r17
        char outputBuffer[17]; // r29+0x40
        class HISCancelRequestReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F1FF0 -> 0x001F2060
*/
// Range: 0x1F1FF0 -> 0x1F2060
enum HISStatus HISGetRequestStatus(signed int requestID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F1FF0 -> 0x1F2060
        char inputBuffer[20]; // r29+0x60
        class HISGetRequestStatusParameter * input; // r17
        char outputBuffer[20]; // r29+0x40
        class HISGetRequestStatusReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2060 -> 0x001F210C
*/
// Range: 0x1F2060 -> 0x1F210C
signed int HISLoadBlockAsync(signed int fileIndex /* r2 */, signed int sourceBlock /* r2 */, signed int sourceSize /* r2 */, void * destinationAddress /* r2 */, enum HISMemoryType destinationType /* r2 */, signed int priority /* r2 */, signed int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2060 -> 0x1F210C
        char inputBuffer[44]; // r29+0x60
        class HISLoadBlockAsyncParameter * input; // r17
        char outputBuffer[20]; // r29+0x40
        class HISLoadBlockAsyncReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2110 -> 0x001F218C
*/
// Range: 0x1F2110 -> 0x1F218C
signed int HISGetFileIndex(char * filename /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2110 -> 0x1F218C
        char inputBuffer[64]; // r29+0x60
        class HISGetFileIndexParameter * input; // r17
        char outputBuffer[20]; // r29+0x40
        class HISGetFileIndexReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2190 -> 0x001F21FC
*/
// Range: 0x1F2190 -> 0x1F21FC
signed int HISGetVersion() {
    /* anonymous block */ {
        // Range: 0x1F2190 -> 0x1F21FC
        char inputBuffer[17]; // r29+0x60
        class HISGetVersionParameter * input; // r17
        char outputBuffer[20]; // r29+0x40
        class HISGetVersionReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2200 -> 0x001F22D4
*/
// Range: 0x1F2200 -> 0x1F22D4
void HISInit(enum HISMediaType mediaType /* r2 */, char * cacheSubDirectory /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2200 -> 0x1F22D4
        char inputBuffer[88]; // r29+0xA0
        class HISInitParameter * input; // r17
        char outputBuffer[17]; // r29+0x80
        class HISInitReturn * output; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F22E0 -> 0x001F2328
*/
// Range: 0x1F22E0 -> 0x1F2328
void HISInitStubs() {
    /* anonymous block */ {
        // Range: 0x1F22E0 -> 0x1F2328
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2330 -> 0x001F2448
*/
// Range: 0x1F2330 -> 0x1F2448
static void _SyncRPCMain() {
    /* anonymous block */ {
        // Range: 0x1F2330 -> 0x1F2448
        signed long startTime; // r16
        signed long endTime; // r17
        class HISBatchSoundCommandsReturn * ret; // r2
    }
}


