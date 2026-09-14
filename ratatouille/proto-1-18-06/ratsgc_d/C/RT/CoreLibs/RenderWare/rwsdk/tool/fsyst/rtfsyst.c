/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\tool\fsyst\rtfsyst.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00000000 -> 0x00000000
*/
enum RtFileSystemError {
    RTFS_ERROR_NOERROR = 1,
    RTFS_ERROR_TOOMANYFILESYSTEMS = 2,
    RTFS_ERROR_FILENOTFOUND = 3,
    RTFS_ERROR_WRITEPROTECTED = 4,
    RTFS_ERROR_FILENAMETOOLONG = 5,
    RTFS_ERROR_FILESYSTEMNAMEINUSE = 6,
    RTFS_ERROR_FILESYSTEMDEVICENAMEREGISTERED = 7,
    RTFS_ERROR_TYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
struct RwSLLink {
    // Members
    struct RwSLLink * next; // offset 0x0, size 0x4
};
// total size: 0x8
struct _rtInt64 {
    // Members
    int low; // offset 0x0, size 0x4
    int high; // offset 0x4, size 0x4
};
union RtInt64 {
    long long supportValue; // offset 0x0, size 0x8
    struct _rtInt64 noSupportValue; // offset 0x0, size 0x8
};
enum RtFileStatus {
    RTFILE_STATUS_CLOSED = 1,
    RTFILE_STATUS_READY = 2,
    RTFILE_STATUS_BUSY = 3,
    RTFILE_STATUS_ERROR = 4,
    RTFILE_STATUS_OPENING = 5,
    RTFILE_STATUS_TYPEFORCEENUMSIZEINT = 2147483647,
};
enum RtFileError {
    RTFILE_ERROR_NOERROR = 1,
    RTFILE_ERROR_FILESYSTEM = 2,
    RTFILE_ERROR_FILE = 3,
    RTFILE_ERROR_DISKFULL = 4,
    RTFILE_ERROR_TYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x40
struct RtFile {
    // Members
    union RtInt64 length; // offset 0x0, size 0x8
    union RtInt64 position; // offset 0x8, size 0x8
    union RtInt64 initialPos; // offset 0x10, size 0x8
    int isAsync; // offset 0x18, size 0x4
    int priority; // offset 0x1C, size 0x4
    enum RtFileStatus status; // offset 0x20, size 0x4
    enum RtFileError error; // offset 0x24, size 0x4
    enum RtFSFileOperation outstandingFileOp; // offset 0x28, size 0x4
    unsigned int outstandingSize; // offset 0x2C, size 0x4
    void (* outstandingCB)(void *, unsigned int, unsigned int, enum RtFSFileOperation, void *); // offset 0x30, size 0x4
    void * outstandingCBData; // offset 0x34, size 0x4
    struct RtFileSystem * fileSystem; // offset 0x38, size 0x4
};
// total size: 0x8
struct rtFileSystemCallBacks {
    // Members
    void (* registerCallBack)(char *); // offset 0x0, size 0x4
    void (* unregisterCallBack)(char *); // offset 0x4, size 0x4
};
enum RtFileSeekMethod {
    RTFILE_POS_BEGIN = 1,
    RTFILE_POS_CURRENT = 2,
    RTFILE_POS_END = 3,
    RTFILE_POS_TYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x28
struct RtFileSystemFileFunctionTable {
    // Members
    enum RtFileSystemError (* open)(struct RtFileSystem *, struct RtFile *, char *, unsigned int); // offset 0x0, size 0x4
    void (* close)(struct RtFile *); // offset 0x4, size 0x4
    unsigned int (* read)(struct RtFile *, void *, unsigned int); // offset 0x8, size 0x4
    unsigned int (* write)(struct RtFile *, void *, unsigned int); // offset 0xC, size 0x4
    union RtInt64 (* setPosition)(struct RtFile *, int, enum RtFileSeekMethod); // offset 0x10, size 0x4
    enum RtFileStatus (* sync)(struct RtFile *, int); // offset 0x14, size 0x4
    int (* abort)(struct RtFile *); // offset 0x18, size 0x4
    int (* isEOF)(struct RtFile *); // offset 0x1C, size 0x4
    enum RtFileStatus (* getStatus)(struct RtFile *); // offset 0x20, size 0x4
    int (* fExists)(struct RtFileSystem *, char *); // offset 0x24, size 0x4
};
// total size: 0x58
struct RtFileSystem {
    // Members
    struct RwSLLink * next; // offset 0x0, size 0x4
    int maxNbOpenFiles; // offset 0x4, size 0x4
    enum RtFileSystemStatus status; // offset 0x8, size 0x4
    char * deviceName; // offset 0xC, size 0x4
    int defaultToAsync; // offset 0x10, size 0x4
    struct RtFile * (* fsGetObject)(struct RtFileSystem *, unsigned int); // offset 0x14, size 0x4
    void (* fsClose)(struct RtFileSystem *); // offset 0x18, size 0x4
    char * (* fsGetDeviceName)(struct RtFileSystem *); // offset 0x1C, size 0x4
    struct rtFileSystemCallBacks CallBacks; // offset 0x20, size 0x8
    struct RtFileSystemFileFunctionTable fsFileFunc; // offset 0x28, size 0x28
    char name[5]; // offset 0x50, size 0x5
};
enum RtFileSystemStatus {
    RTFS_STATUS_NOTREADY = 1,
    RTFS_STATUS_READY = 2,
    RTFS_STATUS_DOOROPEN = 3,
    RTFS_STATUS_NOMEDIA = 4,
    RTFS_STATUS_WRONGMEDIA = 5,
    RTFS_STATUS_RETRYING = 6,
    RTFS_STATUS_FATAL = 7,
    RTFS_STATUS_TYPEFORCEENUMSIZEINT = 2147483647,
};
enum RtFSFileOperation {
    RTFS_FILEOP_NONE = 1,
    RTFS_FILEOP_OPEN = 2,
    RTFS_FILEOP_CLOSE = 3,
    RTFS_FILEOP_SEEK = 4,
    RTFS_FILEOP_READ = 5,
    RTFS_FILEOP_TYPEFORCEENUMSIZEINT = 2147483647,
};

