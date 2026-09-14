/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\tool\fsyst\rtfsmgr.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8046B064 -> 0x8046BA80
*/
// total size: 0x4
struct RwSingleList {
    // Members
    struct RwSLLink link; // offset 0x0, size 0x4
};
// total size: 0x4
struct FSManagerCallBacks {
    // Members
    void (* errorCallBack)(enum RtFSManagerError); // offset 0x0, size 0x4
};
// total size: 0x18
struct RtFSManager {
    // Members
    struct RwSingleList fs; // offset 0x0, size 0x4
    int maxNbFS; // offset 0x4, size 0x4
    int curNbFS; // offset 0x8, size 0x4
    int isOpened; // offset 0xC, size 0x4
    enum RtFSManagerError lastError; // offset 0x10, size 0x4
    struct FSManagerCallBacks CallBacks; // offset 0x14, size 0x4
};
static struct RtFSManager fsm; // size: 0x18, address: 0x80D5DE80
static struct RtFileSystem * defaultFileSystem; // size: 0x4, address: 0x80D6C470
static char __dbFunctionName[32]; // size: 0x20, address: 0x804EF958
enum RtFSManagerError {
    RTFSM_ERROR_NOERROR = 1,
    RTFSM_ERROR_INSTALL = 2,
    RTFSM_ERROR_UNINSTALL = 3,
    RTFSM_ERROR_INVALIDFS = 4,
    RTFSM_ERROR_NOTREGISTRABLE = 5,
    RTFSM_ERROR_NOFS = 6,
    RTFSM_ERROR_FSNAMEINUSE = 7,
    RTFSM_ERROR_TOOMANYOPENFILES = 8,
    RTFSM_ERROR_TYPEFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x8046B064 -> 0x8046B0D4
static int TkFSManagerTriggerErrorCallBack(enum RtFSManagerError err /* r1+0x8 */) {
    // References
    // -> static struct RtFSManager fsm;
    // -> static char __dbFunctionName[32];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EF978
enum RtFileAccessFlag {
    RTFILE_ACCESS_OPEN_READ = 1,
    RTFILE_ACCESS_OPEN_WRITE = 2,
    RTFILE_ACCESS_OPEN_CREATE = 4,
    RTFILE_ACCESS_OPEN_APPEND = 8,
    RTFILE_ACCESS_OPEN_ASYNC = 16,
    RTFILE_ACCESS_NO_BUFFERING = 32,
    RTFILE_ACCESS_TYPEFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x8046B0D4 -> 0x8046B254
struct RtFile * _rtFSManagerFOpenOnFS(struct RtFileSystem * fs /* r30 */, const char * fileName /* r1+0x8 */, enum RtFileAccessFlag access /* r27 */, void (* CallBack)(void *, unsigned int, unsigned int, enum RtFSFileOperation, void *) /* r24 */, void * CallBackData /* r25 */) {
    // Local variables
    struct RtFile * file; // r31
    int index; // r29
    struct RtFile * nextFile; // r28
    enum RtFileSystemError fsErr; // r26

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EF98E
// Range: 0x8046B254 -> 0x8046B394
struct RtFile * RtFSManagerFOpen(const char * filename /* r29 */, enum RtFileAccessFlag access /* r1+0x8 */, void (* CallBack)(void *, unsigned int, unsigned int, enum RtFSFileOperation, void *) /* r1+0xC */, void * CallBackData /* r1+0x10 */) {
    // Local variables
    struct RtFileSystem * fs; // r30

    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RtFSManager fsm;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EF99F
// Range: 0x8046B394 -> 0x8046B3B8
struct RtFSManager * _rtGetFSManager() {
    // References
    // -> static struct RtFSManager fsm;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EF9AF
// Range: 0x8046B3B8 -> 0x8046B444
struct RtFileSystem * _rtGetFileSystemFromDeviceName(const char * deviceName /* r1+0x8 */) {
    // Local variables
    struct RtFileSystem * fs; // r31

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[31];
    // -> static struct RtFSManager fsm;
}

static char __dbFunctionName[37]; // size: 0x25, address: 0x804EF9CE
// Range: 0x8046B444 -> 0x8046B534
struct RtFileSystem * RtFSManagerGetFileSystemFromFileName(const char * fileName /* r30 */) {
    // Local variables
    unsigned int nIndex; // r31
    char deviceName[100]; // r1+0x8
    struct RtFileSystem * fs; // r29
    unsigned int len; // r28

    // References
    // -> static struct RtFileSystem * defaultFileSystem;
    // -> void * RwEngineInstance;
    // -> static struct RtFSManager fsm;
    // -> static char __dbFunctionName[37];
}

static char __dbFunctionName[8]; // size: 0x8, address: 0x80D72138
// Range: 0x8046B534 -> 0x8046B654
void * RwFopen(const char * name /* r1+0x8 */, const char * access /* r29 */) {
    // Local variables
    struct RtFile * file; // r27
    enum RtFileAccessFlag flags; // r31
    int plus; // r30
    int bin; // r28

    // References
    // -> static char __dbFunctionName[8];
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804EF9F3
// Range: 0x8046B654 -> 0x8046B6CC
int RwFclose(void * fptr /* r1+0x8 */) {
    // Local variables
    struct RtFile * file; // r31
    struct RtFileSystemFileFunctionTable * fileFuncs; // r30

    // References
    // -> static char __dbFunctionName[9];
}

static char __dbFunctionName[8]; // size: 0x8, address: 0x80D72140
// Range: 0x8046B6CC -> 0x8046B748
unsigned long RwFread(void * addr /* r1+0x8 */, unsigned long size /* r28 */, unsigned long count /* r1+0xC */, void * fptr /* r1+0x10 */) {
    // Local variables
    struct RtFile * file; // r31
    struct RtFileSystemFileFunctionTable * fileFuncs; // r30
    unsigned int bytesRead; // r29

    // References
    // -> static char __dbFunctionName[8];
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804EF9FC
// Range: 0x8046B748 -> 0x8046B7CC
unsigned long RwFwrite(void * addr /* r1+0x8 */, unsigned long size /* r28 */, unsigned long count /* r1+0xC */, void * fptr /* r1+0x10 */) {
    // Local variables
    struct RtFile * file; // r31
    struct RtFileSystemFileFunctionTable * fileFuncs; // r30
    unsigned int bytesWritten; // r29

    // References
    // -> static char __dbFunctionName[9];
}

static char __dbFunctionName[8]; // size: 0x8, address: 0x80D72148
// Range: 0x8046B7CC -> 0x8046B8C4
int RwFseek(void * fptr /* r1+0x8 */, long offset /* r29 */, int origin /* r1+0xC */) {
    // Local variables
    struct RtFile * file; // r31
    struct RtFileSystemFileFunctionTable * fileFuncs; // r30

    // References
    // -> static char __dbFunctionName[8];
}

static char __dbFunctionName[7]; // size: 0x7, address: 0x80D72150
// Range: 0x8046B8C4 -> 0x8046B914
int RwFeof(void * fptr /* r1+0x8 */) {
    // Local variables
    struct RtFile * file; // r31

    // References
    // -> static char __dbFunctionName[7];
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804EFA05
// Range: 0x8046B914 -> 0x8046BA44
int RwFexist(const char * name /* r29 */) {
    // Local variables
    struct RtFileSystem * fs; // r30

    // References
    // -> static char __dbFunctionName[9];
    // -> static struct RtFSManager fsm;
}

static char __dbFunctionName[8]; // size: 0x8, address: 0x80D72157
// Range: 0x8046BA44 -> 0x8046BA80
int RwFtell(void * fptr /* r3 */) {
    // Local variables
    struct RtFile * file; // r31
    int pos; // r30

    // References
    // -> static char __dbFunctionName[8];
}


