/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class sceCdRMode sCDReadMode; // size: 0x4, address: 0x357E00
void (* sCallback)(signed int); // size: 0x4, address: 0x358584
static signed int num_open_files; // size: 0x4, address: 0x358588
void iFileCallbackHandler(signed int); // size: 0x0, address: 0x1113D0
// total size: 0xC0
class tag_xFile {
    // Members
public:
    char relname[16]; // offset 0x0, size 0x10
    class tag_iFile ps; // offset 0x10, size 0xB0
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
    Code range: 0x00110AA0 -> 0x00110AB8
*/
// Range: 0x110AA0 -> 0x110AB8
unsigned int iFileGetSectorSize(enum xFileDriveType drive /* r2 */) {
    /* anonymous block */ {
        // Range: 0x110AA0 -> 0x110AB8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110AC0 -> 0x00110B44
*/
// Range: 0x110AC0 -> 0x110B44
unsigned int iFileReadStop() {
    /* anonymous block */ {
        // Range: 0x110AC0 -> 0x110B44
        signed int ret; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110B50 -> 0x00110BFC
*/
// Range: 0x110B50 -> 0x110BFC
enum IFILE_READSECTOR_STATUS iFileReadSectorStatus() {
    /* anonymous block */ {
        // Range: 0x110B50 -> 0x110BFC
        enum IFILE_READSECTOR_STATUS status; // r2
        signed int err; // r2
        signed int inprog; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110C00 -> 0x00110CD8
*/
// Range: 0x110C00 -> 0x110CD8
unsigned int iFileReadSectors(unsigned int start /* r20 */, unsigned int nsectors /* r19 */, void * buf /* r18 */, void (* callback)(signed int) /* r17 */) {
    /* anonymous block */ {
        // Range: 0x110C00 -> 0x110CD8
        unsigned int num; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110CE0 -> 0x00110D08
*/
// Range: 0x110CE0 -> 0x110D08
void iFileGetInfo(class tag_xFile * file /* r2 */, unsigned int * starting_sector /* r2 */, unsigned int * size_in_bytes /* r2 */) {
    /* anonymous block */ {
        // Range: 0x110CE0 -> 0x110D08
        class tag_iFile * ps; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110D10 -> 0x00110E10
*/
// Range: 0x110D10 -> 0x110E10
unsigned int iFileFind(char * name /* r17 */, class tag_xFile * file /* r16 */) {
    /* anonymous block */ {
        // Range: 0x110D10 -> 0x110E10
        class tag_iFile * ps; // r16
        signed int ret; // r2
        char fullname[128]; // r29+0x30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110E10 -> 0x00110ED8
*/
// Range: 0x110E10 -> 0x110ED8
unsigned int iFileGetSize(class tag_xFile * file /* r2 */) {
    /* anonymous block */ {
        // Range: 0x110E10 -> 0x110ED8
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
    Code range: 0x00110EE0 -> 0x00110F40
*/
// Range: 0x110EE0 -> 0x110F40
unsigned int iFileClose(class tag_xFile * file /* r2 */) {
    /* anonymous block */ {
        // Range: 0x110EE0 -> 0x110F40
        signed int ret; // r2
        class tag_iFile * ps; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110F40 -> 0x00110F6C
*/
// Range: 0x110F40 -> 0x110F6C
unsigned int iFileWrite(class tag_xFile * file /* r2 */, void * buf /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x110F40 -> 0x110F6C
        signed int num; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110F70 -> 0x00111008
*/
// Range: 0x110F70 -> 0x111008
unsigned int iFileRead(class tag_xFile * file /* r2 */, void * buf /* r18 */, unsigned int size /* r17 */) {
    /* anonymous block */ {
        // Range: 0x110F70 -> 0x111008
        signed int num; // r2
        class tag_iFile * ps; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111010 -> 0x00111084
*/
// Range: 0x111010 -> 0x111084
signed int iFileSeek(class tag_xFile * file /* r2 */, signed int offset /* r2 */, signed int whence /* r2 */) {
    /* anonymous block */ {
        // Range: 0x111010 -> 0x111084
        signed int new_pos; // r2
        class tag_iFile * ps; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111090 -> 0x001111F8
*/
// Range: 0x111090 -> 0x1111F8
unsigned int iFileOpen(char * name /* r18 */, signed int flags /* r17 */, class tag_xFile * file /* r2 */) {
    /* anonymous block */ {
        // Range: 0x111090 -> 0x1111F8
        class tag_iFile * ps; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111200 -> 0x001113C8
*/
// Range: 0x111200 -> 0x1113C8
unsigned int * iFileLoad(char * name /* r18 */, unsigned int * buffer /* r17 */, unsigned int * size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x111200 -> 0x1113C8
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
    Code range: 0x001113D0 -> 0x001113FC
*/
// Range: 0x1113D0 -> 0x1113FC
static void iFileCallbackHandler(signed int cause /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1113D0 -> 0x1113FC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111400 -> 0x00111424
*/
// Range: 0x111400 -> 0x111424
void iFileExit() {
    /* anonymous block */ {
        // Range: 0x111400 -> 0x111424
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00111430 -> 0x0011143C
*/
// Range: 0x111430 -> 0x11143C
void iFileInit() {
    /* anonymous block */ {
        // Range: 0x111430 -> 0x11143C
    }
}


