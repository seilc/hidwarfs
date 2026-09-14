/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B1FF0 -> 0x004B2008
*/
// Range: 0x4B1FF0 -> 0x4B2008
unsigned int iFileGetSectorSize(enum xFileDriveType drive /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B1FF0 -> 0x4B2008
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B2010 -> 0x004B213C
*/
// Range: 0x4B2010 -> 0x4B213C
void iFileAsyncService() {
    /* anonymous block */ {
        // Range: 0x4B2010 -> 0x4B213C
        signed int i; // r17
        enum HISStatus status; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B2140 -> 0x004B2184
*/
// Range: 0x4B2140 -> 0x4B2184
enum IFILE_READSECTOR_STATUS iFileReadAsyncStatus(signed int key /* r2 */, signed int * amtToFar /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B2140 -> 0x4B2184
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B2190 -> 0x004B2384
*/
// Range: 0x4B2190 -> 0x4B2384
signed int iFileReadAsync(class tag_xFile * file /* r20 */, void * buf /* r4 */, unsigned int aSize /* r19 */, void (* callback)(class tag_xFile *) /* r18 */, signed int priority /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B2190 -> 0x4B2384
        class tag_iFile * ps; // r2
        signed int i; // r17
        signed int id; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B2390 -> 0x004B2414
*/
// Range: 0x4B2390 -> 0x4B2414
void iFileSetPath(char * path /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4B2390 -> 0x4B2414
        unsigned int len; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B2420 -> 0x004B258C
*/
// Range: 0x4B2420 -> 0x4B258C
void iFileFullPath(char * relname /* r17 */, char * fullname /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4B2420 -> 0x4B258C
        char temp[128]; // r29+0x30
        unsigned char in_subdir; // r2
        char * pSlashConvert; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B2590 -> 0x004B25B4
*/
// Range: 0x4B2590 -> 0x4B25B4
unsigned char iFileExists(char * name /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B2590 -> 0x4B25B4
        signed int index; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B25C0 -> 0x004B26A8
*/
// Range: 0x4B25C0 -> 0x4B26A8
unsigned int iFileGetSize(class tag_xFile * file /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B25C0 -> 0x4B26A8
        signed int size; // r18
        signed int pos; // r17
        class tag_iFile * ps; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B26B0 -> 0x004B27F0
*/
// Range: 0x4B26B0 -> 0x4B27F0
unsigned int iFileClose(class tag_xFile * file /* r20 */) {
    /* anonymous block */ {
        // Range: 0x4B26B0 -> 0x4B27F0
        class tag_iFile * ps; // r2
        signed int ret; // r2
        signed int i; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B27F0 -> 0x004B28A8
*/
// Range: 0x4B27F0 -> 0x4B28A8
unsigned int iFileRead(class tag_xFile * file /* r2 */, void * buf /* r2 */, unsigned int size /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4B27F0 -> 0x4B28A8
        class tag_iFile * ps; // r2
        signed int num; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B28B0 -> 0x004B2988
*/
// Range: 0x4B28B0 -> 0x4B2988
signed int iFileSeek(class tag_xFile * file /* r2 */, signed int offset /* r2 */, signed int whence /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B28B0 -> 0x4B2988
        class tag_iFile * ps; // r2
        signed int position; // r2
        signed int new_pos; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B2990 -> 0x004B2AA8
*/
// Range: 0x4B2990 -> 0x4B2AA8
unsigned int iFileOpen(char * name /* r4 */, signed int flags /* r17 */, class tag_xFile * file /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B2990 -> 0x4B2AA8
        class tag_iFile * ps; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B2AB0 -> 0x004B2C28
*/
// Range: 0x4B2AB0 -> 0x4B2C28
unsigned int * iFileLoad(char * name /* r16 */, unsigned int * buffer /* r20 */, unsigned int * size /* r19 */) {
    /* anonymous block */ {
        // Range: 0x4B2AB0 -> 0x4B2C28
        char filename[128]; // r29+0x60
        signed int index; // r2
        signed int fileSize; // r2
        signed int alignedSize; // r18
    }
}


