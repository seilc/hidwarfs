/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043A480 -> 0x0043A554
*/
// Range: 0x43A480 -> 0x43A554
static enum en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(class st_FILELOADINFO * fli /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43A480 -> 0x43A554
        enum en_BIO_ASYNC_ERRCODES status; // r2
        class st_BINIO_XTRADATA * xtra; // r2
        enum XFILE_READSECTOR_STATUS xrdstat; // r2
        signed int amtsofar; // r29+0x2C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043A560 -> 0x0043A65C
*/
// Range: 0x43A560 -> 0x43A65C
static signed int BFD_AsyncRead(class st_FILELOADINFO * fli /* r21 */, signed int pos /* r2 */, void * data /* r20 */, signed int size /* r19 */, signed int n /* r18 */) {
    /* anonymous block */ {
        // Range: 0x43A560 -> 0x43A65C
        class tag_xFile * file; // r2
        class st_BINIO_XTRADATA * xtra; // r2
        signed int result; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043A660 -> 0x0043A668
*/
// Range: 0x43A660 -> 0x43A668
static void BFD_cb_GCP2_readasync() {
    /* anonymous block */ {
        // Range: 0x43A660 -> 0x43A668
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043A670 -> 0x0043A8A0
*/
// Range: 0x43A670 -> 0x43A8A0
static signed int BFD_read(void * data /* r2 */, signed int elesize /* r30 */, signed int elecnt /* r2 */, class tag_xFile * bffp /* r21 */, void * xtradata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43A670 -> 0x43A8A0
        class st_BINIO_XTRADATA * xtra; // r20
        char * dest; // r29+0xAC
        signed int readbeg; // r2
        signed int refill; // r22
        signed int remain; // r19
        signed int actual; // r18
        unsigned int holdpos; // r2
        unsigned int safety; // r17
        unsigned int numBytes; // r23
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043A8A0 -> 0x0043A9BC
*/
// Range: 0x43A8A0 -> 0x43A9BC
static class tag_xFile * BFD_open(char * filename /* r20 */, char * mode /* r21 */, unsigned int lockid /* r19 */, void * xtradata /* r18 */, signed int fileflags /* r17 */) {
    /* anonymous block */ {
        // Range: 0x43A8A0 -> 0x43A9BC
        class tag_xFile * bffp; // r19
        unsigned int orc; // r2
        class st_BINIO_XTRADATA * xtra; // r2
        signed int xfflg; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043A9C0 -> 0x0043AA28
*/
// Range: 0x43A9C0 -> 0x43AA28
static void Swap8(char * d /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43A9C0 -> 0x43AA28
        char t; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AA30 -> 0x0043AA38
*/
// Range: 0x43AA30 -> 0x43AA38
static enum en_BIO_ASYNC_ERRCODES AsyncReadStatus(class st_FILELOADINFO * fli /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43AA30 -> 0x43AA38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AA40 -> 0x0043AA48
*/
// Range: 0x43AA40 -> 0x43AA48
static signed int AsyncIRead(class st_FILELOADINFO * fli /* r2 */, signed int offset /* r2 */, char * data /* r2 */, signed int size /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43AA40 -> 0x43AA48
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AA50 -> 0x0043AA58
*/
// Range: 0x43AA50 -> 0x43AA58
static signed int AsyncMRead(class st_FILELOADINFO * fli /* r2 */, signed int offset /* r2 */, char * data /* r2 */, signed int size /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43AA50 -> 0x43AA58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AA60 -> 0x0043AA6C
*/
// Range: 0x43AA60 -> 0x43AA6C
static signed int ReadIDoubles(class st_FILELOADINFO * fli /* r2 */, double * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43AA60 -> 0x43AA6C
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AA70 -> 0x0043AA7C
*/
// Range: 0x43AA70 -> 0x43AA7C
static signed int ReadIFloats(class st_FILELOADINFO * fli /* r2 */, float * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43AA70 -> 0x43AA7C
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AA80 -> 0x0043AA8C
*/
// Range: 0x43AA80 -> 0x43AA8C
static signed int ReadILongs(class st_FILELOADINFO * fli /* r2 */, signed int * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43AA80 -> 0x43AA8C
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AA90 -> 0x0043AA9C
*/
// Range: 0x43AA90 -> 0x43AA9C
static signed int ReadIShorts(class st_FILELOADINFO * fli /* r2 */, signed short * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43AA90 -> 0x43AA9C
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AAA0 -> 0x0043AAD8
*/
// Range: 0x43AAA0 -> 0x43AAD8
static signed int ReadMDoubles(class st_FILELOADINFO * fli /* r2 */, double * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43AAA0 -> 0x43AAD8
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AAE0 -> 0x0043AB50
*/
// Range: 0x43AAE0 -> 0x43AB50
static signed int ReadMFloats(class st_FILELOADINFO * fli /* r2 */, float * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43AAE0 -> 0x43AB50
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AB50 -> 0x0043ABC0
*/
// Range: 0x43AB50 -> 0x43ABC0
static signed int ReadMLongs(class st_FILELOADINFO * fli /* r2 */, signed int * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43AB50 -> 0x43ABC0
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043ABC0 -> 0x0043AC20
*/
// Range: 0x43ABC0 -> 0x43AC20
static signed int ReadMShorts(class st_FILELOADINFO * fli /* r2 */, signed short * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43ABC0 -> 0x43AC20
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AC20 -> 0x0043AC2C
*/
// Range: 0x43AC20 -> 0x43AC2C
static signed int ReadBytes(class st_FILELOADINFO * fli /* r2 */, char * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43AC20 -> 0x43AC2C
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AC30 -> 0x0043ACEC
*/
// Range: 0x43AC30 -> 0x43ACEC
static signed int ReadRaw(class st_FILELOADINFO * fli /* r18 */, void * data /* r2 */, signed int size /* r17 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43AC30 -> 0x43ACEC
        class tag_xFile * file; // r6
        signed int amt; // r16
        signed int n; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043ACF0 -> 0x0043AD18
*/
// Range: 0x43ACF0 -> 0x43AD18
static void DiscardBuffer(class st_FILELOADINFO * fli /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43ACF0 -> 0x43AD18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AD20 -> 0x0043AD48
*/
// Range: 0x43AD20 -> 0x43AD48
static void SetBuffer(class st_FILELOADINFO * fli /* r2 */, char * dblbuffer /* r2 */, signed int bufsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43AD20 -> 0x43AD48
        class st_BINIO_XTRADATA * xtra; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AD50 -> 0x0043AE00
*/
// Range: 0x43AD50 -> 0x43AE00
static signed int ReadSeek(class st_FILELOADINFO * fli /* r16 */, signed int pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43AD50 -> 0x43AE00
        class tag_xFile * file; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AE00 -> 0x0043AEDC
*/
// Range: 0x43AE00 -> 0x43AEDC
static signed int SkipBytes(class st_FILELOADINFO * fli /* r17 */, signed int fwd /* r16 */) {
    /* anonymous block */ {
        // Range: 0x43AE00 -> 0x43AEDC
        class tag_xFile * file; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AEE0 -> 0x0043AF60
*/
// Range: 0x43AEE0 -> 0x43AF60
static void LoadDestroy(class st_FILELOADINFO * fli /* r17 */) {
    /* anonymous block */ {
        // Range: 0x43AEE0 -> 0x43AF60
        class tag_xFile * fp; // r2
        unsigned int lockid; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043AF60 -> 0x0043B1D8
*/
// Range: 0x43AF60 -> 0x43B1D8
class st_FILELOADINFO * xBinioLoadCreate(char * filename /* r19 */, signed int fileflags /* r18 */) {
    /* anonymous block */ {
        // Range: 0x43AF60 -> 0x43B1D8
        class st_FILELOADINFO * fli; // r17
        class tag_xFile * tmp_fp; // r2
        signed int i; // r6
        signed int uselock; // r16
    }
}


