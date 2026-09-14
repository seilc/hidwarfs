/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char dbfont_chars[51]; // size: 0x33, address: 0x0
signed int sFileSystemInit; // size: 0x4, address: 0x4A4F4C
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0x4698
class XStreamHeader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int versionID; // offset 0x4, size 0x4
    unsigned char month; // offset 0x8, size 0x1
    unsigned char day; // offset 0x9, size 0x1
    unsigned char hour; // offset 0xA, size 0x1
    unsigned char minute; // offset 0xB, size 0x1
    unsigned int mdsOffset; // offset 0xC, size 0x4
    unsigned int mdsLength; // offset 0x10, size 0x4
    class tagXStreamMDSDirectory directory; // offset 0x14, size 0x3E84
    char safety[2048]; // offset 0x3E98, size 0x800
};
// total size: 0x10C
class tagFile {
    // Members
public:
    char m_name[256]; // offset 0x0, size 0x100
    signed int m_state; // offset 0x100, size 0x4
    signed int m_desc; // offset 0x104, size 0x4
    unsigned int m_fpos; // offset 0x108, size 0x4
};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00389FB0 -> 0x0038A260
*/
// Range: 0x389FB0 -> 0x38A260
signed int iFileRead(class tagFile * f /* r19 */, unsigned int numBytes /* r18 */, unsigned char * buf /* r17 */, unsigned int * numRead /* r16 */) {
    /* anonymous block */ {
        // Range: 0x389FB0 -> 0x38A260
        unsigned char * dst_buffer; // r2
        unsigned int skip_start_bytes; // r2
        unsigned int skip_end_bytes; // r2
        unsigned int skip_bytes; // r2
        unsigned int seek_loc; // r2
        unsigned int count; // r17
        signed char init; // @ 0x004A4F54
        unsigned char * sectorBufferU8; // @ 0x004A4F50
        unsigned int sectorBuffer[512]; // @ 0x00AFABD0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038A260 -> 0x0038A35C
*/
// Range: 0x38A260 -> 0x38A35C
signed int iFileClose(class tagFile * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38A260 -> 0x38A35C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038A360 -> 0x0038A428
*/
// Range: 0x38A360 -> 0x38A428
signed int iFileOpen(class tagFile * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38A360 -> 0x38A428
        signed int index; // r17
        char path[128]; // r29+0x30
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038A430 -> 0x0038A670
*/
// Range: 0x38A430 -> 0x38A670
unsigned int iFileGetSize(class tagFile * f /* r18 */) {
    /* anonymous block */ {
        // Range: 0x38A430 -> 0x38A670
        signed int err; // r2
        signed int file_size; // r17
        signed int wasOpen; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038A670 -> 0x0038A7A4
*/
// Range: 0x38A670 -> 0x38A7A4
signed int iFileInit(class tagFile * f /* r16 */, char * theName /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38A670 -> 0x38A7A4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038A7B0 -> 0x0038A7D0
*/
// Range: 0x38A7B0 -> 0x38A7D0
signed int iFileSystemShutdown() {
    /* anonymous block */ {
        // Range: 0x38A7B0 -> 0x38A7D0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038A7D0 -> 0x0038A7FC
*/
// Range: 0x38A7D0 -> 0x38A7FC
signed int iFileSystemInit() {
    /* anonymous block */ {
        // Range: 0x38A7D0 -> 0x38A7FC
    }
}


