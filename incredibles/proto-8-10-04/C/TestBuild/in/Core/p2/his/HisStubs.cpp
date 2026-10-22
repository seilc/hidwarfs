/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class _sif_client_data clientData; // size: 0x28, address: 0x674FF0
static unsigned char asyncFire; // size: 0x1, address: 0x612104
static unsigned int cachedVoiceStatus[2]; // size: 0x8, address: 0x612108
static char cachedVoiceStatusReturn[24]; // size: 0x18, address: 0x675020
static class HISDebugState * _iopState; // size: 0x4, address: 0x612110
static char asyncRequestBuffers[4096]; // size: 0x1000, address: 0x675040
static char * asyncRequestBuffer; // size: 0x4, address: 0x610C68
static signed int asyncRequestCurrent; // size: 0x4, address: 0x612114
// total size: 0x1
class HISPlayStreamReturn {};
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
// total size: 0x1
class HISFlushHostIOHandlesParameter {};
// total size: 0x1
class HISWaitForRequestReturn {};
// total size: 0x4
class HISGetRequestDebugParameter {
    // Members
public:
    signed int requestID; // offset 0x0, size 0x4
};
// total size: 0x1
class HISInitReturn {};
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
// total size: 0x4
class HISRemoteBlockTransReturn {
    // Members
public:
    signed int ret; // offset 0x0, size 0x4
};
// total size: 0x1
class HISStopVoiceReturn {};
// total size: 0x1C
class HISGetRequestDebugReturn {
    // Members
public:
    class HISRequestDebug requestDebug; // offset 0x0, size 0x1C
};
// total size: 0x1
class HISRemoteSetParamReturn {};
enum HISMemoryType {
    HIS_MEMORY_EE = 0,
    HIS_MEMORY_IOP = 1,
    HIS_MEMORY_SPU = 2,
};
// total size: 0x1
class HISSetMasterVolumeReturn {};
// total size: 0x1
class HISSetEffectReturn {};
// total size: 0x1
class HISFlushHostIOHandlesReturn {};
// total size: 0x4
class HISJoinStereoVoicesParameter {
    // Members
public:
    unsigned short voice1; // offset 0x0, size 0x2
    unsigned short voice2; // offset 0x2, size 0x2
};
// total size: 0x1
class HISGetSPUStartAddressParameter {};
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
// total size: 0x1
class HISSetVoiceVolumeReturn {};
// total size: 0x1
class HISGetRequestCountParameter {};
// total size: 0x1
class HISJoinStereoVoicesReturn {};
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
// total size: 0x4
class HISGetFileSizeParameter {
    // Members
public:
    signed int fileIndex; // offset 0x0, size 0x4
};
// total size: 0x4
class HISGetExternalStreamBufferParameter {
    // Members
public:
    signed int voice; // offset 0x0, size 0x4
};
// total size: 0x4
class HISGetSPUStartAddressReturn {
    // Members
public:
    signed int address; // offset 0x0, size 0x4
};
// total size: 0x1
class HISGetDebugStateParameter {};
// total size: 0x1
class HISPlaySoundReturn {};
// total size: 0x2
class HISPauseVoiceParameter {
    // Members
public:
    unsigned short voice; // offset 0x0, size 0x2
};
// total size: 0x4
class HISGetRequestCountReturn {
    // Members
public:
    signed int count; // offset 0x0, size 0x4
};
// total size: 0x1
class HISPlayExternalStreamReturn {};
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
// total size: 0x1
class HISGetVersionParameter {};
// total size: 0x4
class HISGetRequestStatusParameter {
    // Members
public:
    signed int requestID; // offset 0x0, size 0x4
};
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
class HISGetExternalStreamBufferReturn {
    // Members
public:
    signed int buffer; // offset 0x0, size 0x4
};
// total size: 0x4
class HISGetFileSizeReturn {
    // Members
public:
    signed int size; // offset 0x0, size 0x4
};
// total size: 0x8
class HISBatchSoundCommandsReturn {
    // Members
public:
    unsigned int status[2]; // offset 0x0, size 0x8
};
// total size: 0x4
class HISGetRequestStatusReturn {
    // Members
public:
    enum HISStatus currentStatus; // offset 0x0, size 0x4
};
// total size: 0x4
class HISGetDebugStateReturn {
    // Members
public:
    class HISDebugState * returnValue; // offset 0x0, size 0x4
};
// total size: 0x4
class HISGetSoundDebugVoiceParameter {
    // Members
public:
    signed int voice; // offset 0x0, size 0x4
};
// total size: 0x4
class HISRemoteBlockTransStatusParameter {
    // Members
public:
    signed short channel; // offset 0x0, size 0x2
    signed short flag; // offset 0x2, size 0x2
};
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
// total size: 0x4
class HISGetVersionReturn {
    // Members
public:
    signed int version; // offset 0x0, size 0x4
};
// total size: 0x1
class HISGetFirstValidRequestParameter {};
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
class HISGetFirstValidRequestReturn {
    // Members
public:
    signed int request; // offset 0x0, size 0x4
};
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
class HISSetVoicePitchReturn {};
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
// total size: 0x4
class HISGetFileIndexReturn {
    // Members
public:
    signed int index; // offset 0x0, size 0x4
};
// total size: 0x1
class HISResumeVoiceReturn {};
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
// total size: 0x1C
class _sif_receive_data {
    // Members
public:
    class _sif_rpc_data rpcd; // offset 0x0, size 0x10
    void * src; // offset 0x10, size 0x4
    void * dest; // offset 0x14, size 0x4
    signed int size; // offset 0x18, size 0x4
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
// total size: 0x1
class HISCancelRequestReturn {
    // Members
public:
    unsigned char success; // offset 0x0, size 0x1
};
// total size: 0x1
class HISLoadExternalStreamReturn {};
// total size: 0x1
class HISNullReturn {};
// total size: 0x1
class HISDelayFrameReturn {};
// total size: 0x4
class HISGetFileIndexDebugParameter {
    // Members
public:
    signed int fileIndex; // offset 0x0, size 0x4
};
// total size: 0x1
class HISWaitForRequestParameter {};
// total size: 0x8
class HISGetVoiceStatusReturn {
    // Members
public:
    unsigned int status[2]; // offset 0x0, size 0x8
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
// total size: 0x48
class HISInitParameter {
    // Members
public:
    enum HISMediaType mediaType; // offset 0x0, size 0x4
    unsigned char allowEffects; // offset 0x4, size 0x1
    char cacheSubDirectory[64]; // offset 0x5, size 0x40
};
// total size: 0x1
class HISWaitForAllRequestsParameter {};
// total size: 0x4
class HISDebugControlReturn {
    // Members
public:
    signed int returnValue; // offset 0x0, size 0x4
};
// total size: 0x1
class HISWaitForAllRequestsReturn {};
enum HISMediaType {
    HIS_MEDIA_CDROM = 0,
    HIS_MEDIA_DVD = 1,
    HIS_MEDIA_HOSTIO = 2,
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F21A0 -> 0x001F2244
*/
// Range: 0x1F21A0 -> 0x1F2244
void HISFlushAsyncRequestsNoWait() {
    /* anonymous block */ {
        // Range: 0x1F21A0 -> 0x1F2244
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2250 -> 0x001F22D4
*/
// Range: 0x1F2250 -> 0x1F22D4
void HISFlushAsyncRequests() {
    /* anonymous block */ {
        // Range: 0x1F2250 -> 0x1F22D4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F22E0 -> 0x001F2334
*/
// Range: 0x1F22E0 -> 0x1F2334
void HISPlayExternalStreamAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */, signed int pitch /* r2 */, signed int flags /* r2 */, signed int attack /* r2 */, signed int release /* r2 */, signed int blockSize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F22E0 -> 0x1F2334
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2340 -> 0x001F237C
*/
// Range: 0x1F2340 -> 0x1F237C
void HISJoinStereoVoicesAsync(signed int voice1 /* r2 */, signed int voice2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2340 -> 0x1F237C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2380 -> 0x001F23B8
*/
// Range: 0x1F2380 -> 0x1F23B8
void HISResumeVoiceAsync(signed int voice /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2380 -> 0x1F23B8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F23C0 -> 0x001F23F8
*/
// Range: 0x1F23C0 -> 0x1F23F8
void HISPauseVoiceAsync(signed int voice /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F23C0 -> 0x1F23F8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2400 -> 0x001F2438
*/
// Range: 0x1F2400 -> 0x1F2438
void HISStopVoiceAsync(signed int voice /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2400 -> 0x1F2438
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2440 -> 0x001F247C
*/
// Range: 0x1F2440 -> 0x1F247C
void HISSetVoicePitchAsync(signed int voice /* r2 */, signed int pitch /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2440 -> 0x1F247C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2480 -> 0x001F24C0
*/
// Range: 0x1F2480 -> 0x1F24C0
void HISSetVoiceVolumeAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2480 -> 0x1F24C0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F24C0 -> 0x001F2534
*/
// Range: 0x1F24C0 -> 0x1F2534
void HISPlayStreamAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */, signed int pitch /* r2 */, signed int fileIndex /* r2 */, signed int logicalSectorNumber /* r2 */, signed int dataSize /* r2 */, signed int flags /* r2 */, signed int attack /* r29 */, signed int release /* r29+0x8 */, signed int blockSize /* r29+0x10 */, signed int interleaveSectors /* r29+0x18 */) {
    /* anonymous block */ {
        // Range: 0x1F24C0 -> 0x1F2534
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2540 -> 0x001F2594
*/
// Range: 0x1F2540 -> 0x1F2594
void HISPlaySoundAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */, signed int pitch /* r2 */, unsigned int address /* r2 */, signed int flags /* r2 */, signed int attack /* r2 */, signed int release /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2540 -> 0x1F2594
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F25A0 -> 0x001F25E0
*/
// Range: 0x1F25A0 -> 0x1F25E0
class HISDebugState * HISGetDebugState() {
    /* anonymous block */ {
        // Range: 0x1F25A0 -> 0x1F25E0
        class _sif_receive_data receiveData; // r29+0x10
        char state[992]; // @ 0x00676040
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F25E0 -> 0x001F2664
*/
// Range: 0x1F25E0 -> 0x1F2664
void HISSetEffect(signed int mode /* r2 */, signed int leftDepth /* r2 */, signed int rightDepth /* r2 */, signed int delay /* r2 */, signed int feedback /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F25E0 -> 0x1F2664
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
    Code range: 0x001F2670 -> 0x001F26DC
*/
// Range: 0x1F2670 -> 0x1F26DC
void HISEnableEffects(unsigned char enabled /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2670 -> 0x1F26DC
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
    Code range: 0x001F26E0 -> 0x001F274C
*/
// Range: 0x1F26E0 -> 0x1F274C
signed int HISGetSPUEndAddress() {
    /* anonymous block */ {
        // Range: 0x1F26E0 -> 0x1F274C
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
    Code range: 0x001F2750 -> 0x001F27BC
*/
// Range: 0x1F2750 -> 0x1F27BC
signed int HISGetSPUStartAddress() {
    /* anonymous block */ {
        // Range: 0x1F2750 -> 0x1F27BC
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
    Code range: 0x001F27C0 -> 0x001F2830
*/
// Range: 0x1F27C0 -> 0x1F2830
signed int HISGetExternalStreamBuffer(signed int voice /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F27C0 -> 0x1F2830
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
    Code range: 0x001F2830 -> 0x001F28A4
*/
// Range: 0x1F2830 -> 0x1F28A4
void HISLoadExternalStream(signed int voice /* r2 */, signed int buffer /* r2 */, void * address /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2830 -> 0x1F28A4
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
    Code range: 0x001F28B0 -> 0x001F2920
*/
// Range: 0x1F28B0 -> 0x1F2920
void HISSetMasterVolume(signed int leftVolume /* r2 */, signed int rightVolume /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F28B0 -> 0x1F2920
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
    Code range: 0x001F2920 -> 0x001F296C
*/
// Range: 0x1F2920 -> 0x1F296C
void HISGetCachedVoiceStatus(unsigned int * status /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F2920 -> 0x1F296C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2970 -> 0x001F29D8
*/
// Range: 0x1F2970 -> 0x1F29D8
void HISFlushHostIOHandles() {
    /* anonymous block */ {
        // Range: 0x1F2970 -> 0x1F29D8
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
    Code range: 0x001F29E0 -> 0x001F2A50
*/
// Range: 0x1F29E0 -> 0x1F2A50
signed int HISGetFileSize(signed int fileIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F29E0 -> 0x1F2A50
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
    Code range: 0x001F2A50 -> 0x001F2AB8
*/
// Range: 0x1F2A50 -> 0x1F2AB8
void HISWaitForRequest() {
    /* anonymous block */ {
        // Range: 0x1F2A50 -> 0x1F2AB8
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
    Code range: 0x001F2AC0 -> 0x001F2B30
*/
// Range: 0x1F2AC0 -> 0x1F2B30
unsigned char HISCloseRequest(signed int requestID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2AC0 -> 0x1F2B30
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
    Code range: 0x001F2B30 -> 0x001F2BA0
*/
// Range: 0x1F2B30 -> 0x1F2BA0
unsigned char HISCancelRequest(signed int requestID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2B30 -> 0x1F2BA0
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
    Code range: 0x001F2BA0 -> 0x001F2C10
*/
// Range: 0x1F2BA0 -> 0x1F2C10
enum HISStatus HISGetRequestStatus(signed int requestID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2BA0 -> 0x1F2C10
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
    Code range: 0x001F2C10 -> 0x001F2CBC
*/
// Range: 0x1F2C10 -> 0x1F2CBC
signed int HISLoadBlockAsync(signed int fileIndex /* r2 */, signed int sourceBlock /* r2 */, signed int sourceSize /* r2 */, void * destinationAddress /* r2 */, enum HISMemoryType destinationType /* r2 */, signed int priority /* r2 */, signed int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2C10 -> 0x1F2CBC
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
    Code range: 0x001F2CC0 -> 0x001F2D3C
*/
// Range: 0x1F2CC0 -> 0x1F2D3C
signed int HISGetFileIndex(char * filename /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2CC0 -> 0x1F2D3C
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
    Code range: 0x001F2D40 -> 0x001F2DAC
*/
// Range: 0x1F2D40 -> 0x1F2DAC
signed int HISGetVersion() {
    /* anonymous block */ {
        // Range: 0x1F2D40 -> 0x1F2DAC
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
    Code range: 0x001F2DB0 -> 0x001F2E84
*/
// Range: 0x1F2DB0 -> 0x1F2E84
void HISInit(enum HISMediaType mediaType /* r2 */, char * cacheSubDirectory /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F2DB0 -> 0x1F2E84
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
    Code range: 0x001F2E90 -> 0x001F2ED8
*/
// Range: 0x1F2E90 -> 0x1F2ED8
void HISInitStubs() {
    /* anonymous block */ {
        // Range: 0x1F2E90 -> 0x1F2ED8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2EE0 -> 0x001F2FF8
*/
// Range: 0x1F2EE0 -> 0x1F2FF8
static void _SyncRPCMain() {
    /* anonymous block */ {
        // Range: 0x1F2EE0 -> 0x1F2FF8
        signed long startTime; // r16
        signed long endTime; // r17
        class HISBatchSoundCommandsReturn * ret; // r2
    }
}


