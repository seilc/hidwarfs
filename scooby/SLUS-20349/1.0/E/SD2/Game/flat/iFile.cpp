/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class sceCdRMode sCDReadMode; // size: 0x4, address: 0x357488
void (* sCallback)(signed int); // size: 0x4, address: 0x357C0C
static signed int num_open_files; // size: 0x4, address: 0x357C10
void iFileCallbackHandler(signed int); // size: 0x0, address: 0x111490
// total size: 0xC0
class tag_xFile {
    // Members
public:
    char relname[16]; // offset 0x0, size 0x10
    class tag_iFile ps; // offset 0x10, size 0xB0
};
enum xFileDriveType {
    XFILE_DRIVE_CDVD = 0,
    XFILE_DRIVE_CONSOLE_HD = 1,
};
// total size: 0xB0
class tag_iFile {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    class sceCdlFILE file; // offset 0x88, size 0x24
    void (* cb)(signed int); // offset 0xAC, size 0x4
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
// total size: 0x24
class sceCdlFILE {
    // Members
public:
    unsigned int lsn; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    char name[16]; // offset 0x8, size 0x10
    unsigned char date[8]; // offset 0x18, size 0x8
    unsigned int flag; // offset 0x20, size 0x4
};
enum IFILE_READSECTOR_STATUS {
    IFILE_RDSTAT_NOOP = 0,
    IFILE_RDSTAT_INPROG = 1,
    IFILE_RDSTAT_DONE = 2,
    IFILE_RDSTAT_FAIL = 3,
};
// total size: 0x4
class sceCdRMode {
    // Members
public:
    unsigned char trycount; // offset 0x0, size 0x1
    unsigned char spindlctrl; // offset 0x1, size 0x1
    unsigned char datapattern; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};

/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110B60 -> 0x00110B78
*/
// Range: 0x110B60 -> 0x110B78
unsigned int iFileGetSectorSize(enum xFileDriveType drive /* r2 */) {
    /* anonymous block */ {
        // Range: 0x110B60 -> 0x110B78
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110B80 -> 0x00110C04
*/
// Range: 0x110B80 -> 0x110C04
unsigned int iFileReadStop() {
    /* anonymous block */ {
        // Range: 0x110B80 -> 0x110C04
        signed int ret; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110C10 -> 0x00110CBC
*/
// Range: 0x110C10 -> 0x110CBC
enum IFILE_READSECTOR_STATUS iFileReadSectorStatus() {
    /* anonymous block */ {
        // Range: 0x110C10 -> 0x110CBC
        enum IFILE_READSECTOR_STATUS status; // r2
        signed int err; // r2
        signed int inprog; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110CC0 -> 0x00110D98
*/
// Range: 0x110CC0 -> 0x110D98
unsigned int iFileReadSectors(unsigned int start /* r20 */, unsigned int nsectors /* r19 */, void * buf /* r18 */, void (* callback)(signed int) /* r17 */) {
    /* anonymous block */ {
        // Range: 0x110CC0 -> 0x110D98
        unsigned int num; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110DA0 -> 0x00110DC8
*/
// Range: 0x110DA0 -> 0x110DC8
void iFileGetInfo(class tag_xFile * file /* r2 */, unsigned int * starting_sector /* r2 */, unsigned int * size_in_bytes /* r2 */) {
    /* anonymous block */ {
        // Range: 0x110DA0 -> 0x110DC8
        class tag_iFile * ps; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110DD0 -> 0x00110ED0
*/
// Range: 0x110DD0 -> 0x110ED0
unsigned int iFileFind(char * name /* r17 */, class tag_xFile * file /* r16 */) {
    /* anonymous block */ {
        // Range: 0x110DD0 -> 0x110ED0
        class tag_iFile * ps; // r16
        signed int ret; // r2
        char fullname[128]; // r29+0x30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110ED0 -> 0x00110F98
*/
// Range: 0x110ED0 -> 0x110F98
unsigned int iFileGetSize(class tag_xFile * file /* r2 */) {
    /* anonymous block */ {
        // Range: 0x110ED0 -> 0x110F98
        signed int rc; // r2
        class tag_iFile * ps; // r18
        signed int pos; // r17
        signed int size; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110FA0 -> 0x00111000
*/
// Range: 0x110FA0 -> 0x111000
unsigned int iFileClose(class tag_xFile * file /* r2 */) {
    /* anonymous block */ {
        // Range: 0x110FA0 -> 0x111000
        signed int ret; // r2
        class tag_iFile * ps; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111000 -> 0x0011102C
*/
// Range: 0x111000 -> 0x11102C
unsigned int iFileWrite(class tag_xFile * file /* r2 */, void * buf /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x111000 -> 0x11102C
        signed int num; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111030 -> 0x001110C8
*/
// Range: 0x111030 -> 0x1110C8
unsigned int iFileRead(class tag_xFile * file /* r2 */, void * buf /* r18 */, unsigned int size /* r17 */) {
    /* anonymous block */ {
        // Range: 0x111030 -> 0x1110C8
        signed int num; // r2
        class tag_iFile * ps; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001110D0 -> 0x00111144
*/
// Range: 0x1110D0 -> 0x111144
signed int iFileSeek(class tag_xFile * file /* r2 */, signed int offset /* r2 */, signed int whence /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1110D0 -> 0x111144
        signed int new_pos; // r2
        class tag_iFile * ps; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111150 -> 0x001112B8
*/
// Range: 0x111150 -> 0x1112B8
unsigned int iFileOpen(char * name /* r18 */, signed int flags /* r17 */, class tag_xFile * file /* r2 */) {
    /* anonymous block */ {
        // Range: 0x111150 -> 0x1112B8
        class tag_iFile * ps; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001112C0 -> 0x00111488
*/
// Range: 0x1112C0 -> 0x111488
unsigned int * iFileLoad(char * name /* r18 */, unsigned int * buffer /* r17 */, unsigned int * size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1112C0 -> 0x111488
        signed int ret; // r2
        signed int locsize; // r19
        signed int n; // r2
        signed int fd; // r18
        char fullpath[128]; // r29+0x50
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111490 -> 0x001114BC
*/
// Range: 0x111490 -> 0x1114BC
static void iFileCallbackHandler(signed int cause /* r2 */) {
    /* anonymous block */ {
        // Range: 0x111490 -> 0x1114BC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001114C0 -> 0x001114E4
*/
// Range: 0x1114C0 -> 0x1114E4
void iFileExit() {
    /* anonymous block */ {
        // Range: 0x1114C0 -> 0x1114E4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001114F0 -> 0x001114FC
*/
// Range: 0x1114F0 -> 0x1114FC
void iFileInit() {
    /* anonymous block */ {
        // Range: 0x1114F0 -> 0x1114FC
    }
}


