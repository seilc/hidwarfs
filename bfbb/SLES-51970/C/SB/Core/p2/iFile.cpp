/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class AsyncRequest requests[32]; // size: 0x300, address: 0x531D30
static signed int num_open_files; // size: 0x4, address: 0x50ECE8
char gHostPath[256]; // size: 0x100, address: 0x532030
signed int DVD; // size: 0x4, address: 0x50ED78
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x5BAE28
void iFileDebugMode(); // size: 0x0, address: 0x1A99D0
// total size: 0xB4
class tag_xFile {
    // Members
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
};
// total size: 0x90
class tag_iFile {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    signed int offset; // offset 0x88, size 0x4
    signed int length; // offset 0x8C, size 0x4
};
enum IFILE_READSECTOR_STATUS {
    IFILE_RDSTAT_NOOP = 0,
    IFILE_RDSTAT_INPROG = 1,
    IFILE_RDSTAT_DONE = 2,
    IFILE_RDSTAT_FAIL = 3,
    IFILE_RDSTAT_QUEUED = 4,
    IFILE_RDSTAT_EXPIRED = 5,
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
// total size: 0x3C
class HISFileIndexDebug {
    // Members
public:
    signed int logicalSectorNumber; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
    signed int sizeInSectors; // offset 0x8, size 0x4
    char name[48]; // offset 0xC, size 0x30
};
enum xFileDriveType {
    XFILE_DRIVE_CDVD = 0,
    XFILE_DRIVE_CONSOLE_HD = 1,
};
enum xFileDriveStatus {
    XFILE_TRAY_OPEN = 0,
    XFILE_STOPPED = 1,
    XFILE_SPINNING = 2,
    XFILE_READING = 3,
    XFILE_PAUSED = 4,
    XFILE_SEEKING = 5,
    XFILE_ERROR = 6,
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
class /* @class */ {
    // Members
public:
    signed int nextRequest : 8; // offset 0x0, size 0x4
    enum HISStatus status : 8; // offset 0x0, size 0x4
    enum HISMemoryType destinationType : 8; // offset 0x0, size 0x4
};
// total size: 0x18
class AsyncRequest {
    // Members
public:
    unsigned char inUse; // offset 0x0, size 0x1
    signed int id; // offset 0x4, size 0x4
    enum IFILE_READSECTOR_STATUS status; // offset 0x8, size 0x4
    void (* callback)(class tag_xFile *); // offset 0xC, size 0x4
    class tag_xFile * file; // offset 0x10, size 0x4
    signed int framesLeft; // offset 0x14, size 0x4
};

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8D10 -> 0x001A8E34
*/
// Range: 0x1A8D10 -> 0x1A8E34
void iFileAsyncService() {
    /* anonymous block */ {
        // Range: 0x1A8D10 -> 0x1A8E34
        signed int i; // r17
        enum HISStatus status; // r2
    }
}


/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8E40 -> 0x001A8E98
*/
// Range: 0x1A8E40 -> 0x1A8E98
enum IFILE_READSECTOR_STATUS iFileReadAsyncStatus(signed int key /* r2 */, signed int * amtToFar /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8E40 -> 0x1A8E98
    }
}


/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8EA0 -> 0x001A8F2C
*/
// Range: 0x1A8EA0 -> 0x1A8F2C
void iFileReadStop() {
    /* anonymous block */ {
        // Range: 0x1A8EA0 -> 0x1A8F2C
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8F30 -> 0x001A9130
*/
// Range: 0x1A8F30 -> 0x1A9130
signed int iFileReadAsync(class tag_xFile * file /* r20 */, void * buf /* r4 */, unsigned int aSize /* r19 */, void (* callback)(class tag_xFile *) /* r18 */, signed int priority /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8F30 -> 0x1A9130
        class tag_iFile * ps; // r17
        signed int i; // r16
        signed int id; // r2
    }
}


/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9130 -> 0x001A91CC
*/
// Range: 0x1A9130 -> 0x1A91CC
void iFileSetPath(char * path /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1A9130 -> 0x1A91CC
        unsigned int len; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A91D0 -> 0x001A9284
*/
// Range: 0x1A91D0 -> 0x1A9284
void iFileFullPath(char * relname /* r17 */, char * fullname /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A91D0 -> 0x1A9284
        char temp[256]; // r29+0x30
    }
}


/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9290 -> 0x001A9390
*/
// Range: 0x1A9290 -> 0x1A9390
unsigned int iFileGetSize(class tag_xFile * file /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A9290 -> 0x1A9390
        signed int size; // r18
        signed int pos; // r17
        class tag_iFile * ps; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9390 -> 0x001A94D4
*/
// Range: 0x1A9390 -> 0x1A94D4
unsigned int iFileClose(class tag_xFile * file /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1A9390 -> 0x1A94D4
        class tag_iFile * ps; // r18
        signed int ret; // r2
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A94E0 -> 0x001A95B0
*/
// Range: 0x1A94E0 -> 0x1A95B0
unsigned int iFileRead(class tag_xFile * file /* r2 */, void * buf /* r18 */, unsigned int size /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1A94E0 -> 0x1A95B0
        class tag_iFile * ps; // r16
        signed int num; // r2
    }
}


/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A95B0 -> 0x001A969C
*/
// Range: 0x1A95B0 -> 0x1A969C
signed int iFileSeek(class tag_xFile * file /* r2 */, signed int offset /* r2 */, signed int whence /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A95B0 -> 0x1A969C
        class tag_iFile * ps; // r7
        signed int position; // r2
        signed int new_pos; // r2
    }
}


/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A96A0 -> 0x001A97AC
*/
// Range: 0x1A96A0 -> 0x1A97AC
unsigned int iFileOpen(char * name /* r4 */, signed int flags /* r17 */, class tag_xFile * file /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A96A0 -> 0x1A97AC
        class tag_iFile * ps; // r16
    }
}


/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A97B0 -> 0x001A98B8
*/
// Range: 0x1A97B0 -> 0x1A98B8
unsigned int * iFileLoad(char * name /* r16 */, unsigned int * buffer /* r20 */, unsigned int * size /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1A97B0 -> 0x1A98B8
        signed int index; // r2
        signed int fileSize; // r18
        signed int alignedSize; // r17
    }
}


/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A98C0 -> 0x001A98C8
*/
// Range: 0x1A98C0 -> 0x1A98C8
void iFileExit() {
    /* anonymous block */ {
        // Range: 0x1A98C0 -> 0x1A98C8
    }
}


/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A98D0 -> 0x001A99C4
*/
// Range: 0x1A98D0 -> 0x1A99C4
void iFileInit() {
    /* anonymous block */ {
        // Range: 0x1A98D0 -> 0x1A99C4
        signed int hisVersion; // r2
    }
}


/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A99D0 -> 0x001A9B18
*/
// Range: 0x1A99D0 -> 0x1A9B18
static void iFileDebugMode() {
    /* anonymous block */ {
        // Range: 0x1A99D0 -> 0x1A9B18
        signed int id; // r21
        class HISRequestDebug requestDebug; // r29+0xE0
        class HISFileIndexDebug fileIndexDebug; // r29+0xA0
        char * TYPES[3]; // @ 0x00416228
        char * STATUSES[9]; // @ 0x00416200
    }
}


