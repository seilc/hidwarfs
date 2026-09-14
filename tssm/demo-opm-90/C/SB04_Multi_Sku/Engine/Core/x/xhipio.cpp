/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0B00 -> 0x003D0C1C
*/
// Range: 0x3D0B00 -> 0x3D0C1C
static signed int HIPLReadString(class st_HIPLOADDATA * lddata /* r18 */, char * buf /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3D0B00 -> 0x3D0C1C
        signed int n; // r16
        char pad; // r29+0x4F
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0C20 -> 0x003D0C70
*/
// Range: 0x3D0C20 -> 0x3D0C70
static signed int HIPLReadFloats(class st_HIPLOADDATA * lddata /* r2 */, float * data /* r2 */, signed int cnt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D0C20 -> 0x3D0C70
        signed int got; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0C70 -> 0x003D0CC0
*/
// Range: 0x3D0C70 -> 0x3D0CC0
static signed int HIPLReadLongs(class st_HIPLOADDATA * lddata /* r2 */, signed int * data /* r2 */, signed int cnt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D0C70 -> 0x3D0CC0
        signed int got; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0CC0 -> 0x003D0D10
*/
// Range: 0x3D0CC0 -> 0x3D0D10
static signed int HIPLReadShorts(class st_HIPLOADDATA * lddata /* r2 */, signed short * data /* r2 */, signed int cnt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D0CC0 -> 0x3D0D10
        signed int got; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0D10 -> 0x003D0D48
*/
// Range: 0x3D0D10 -> 0x3D0D48
static signed int HIPLReadBytes(class st_HIPLOADDATA * lddata /* r2 */, char * data /* r2 */, signed int cnt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D0D10 -> 0x3D0D48
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0D50 -> 0x003D0DFC
*/
// Range: 0x3D0D50 -> 0x3D0DFC
static enum en_READ_ASYNC_STATUS HIPLPollRead(class st_HIPLOADDATA * lddata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3D0D50 -> 0x3D0DFC
        enum en_READ_ASYNC_STATUS rdstat; // r16
        enum en_BIO_ASYNC_ERRCODES pollstat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0E00 -> 0x003D0EEC
*/
// Range: 0x3D0E00 -> 0x3D0EEC
static signed int HIPLBypassRead(class st_HIPLOADDATA * lddata /* r17 */, void * data /* r5 */, signed int cnt /* r7 */, signed int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3D0E00 -> 0x3D0EEC
        signed int got; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0EF0 -> 0x003D104C
*/
// Range: 0x3D0EF0 -> 0x3D104C
static signed int HIPLBlockRead(class st_HIPLOADDATA * lddata /* r18 */, void * data /* r2 */, signed int cnt /* r2 */, signed int size /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3D0EF0 -> 0x3D104C
        class st_HIPLOADBLOCK * top; // r16
        signed int got; // r2
        signed int left; // r7
        signed int head; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1050 -> 0x003D10B8
*/
// Range: 0x3D1050 -> 0x3D10B8
static void HIPLBlockExit(class st_HIPLOADDATA * lddata /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3D1050 -> 0x3D10B8
        class st_HIPLOADBLOCK * top; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D10C0 -> 0x003D1218
*/
// Range: 0x3D10C0 -> 0x3D1218
static unsigned int HIPLBlockEnter(class st_HIPLOADDATA * lddata /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3D10C0 -> 0x3D1218
        class st_HIPLOADBLOCK * top; // r2
        unsigned int cid; // r29+0x2C
        signed int size; // r29+0x28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1220 -> 0x003D1254
*/
// Range: 0x3D1220 -> 0x3D1254
static void HIPLSetSpot(class st_HIPLOADDATA * lddata /* r2 */, signed int spot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D1220 -> 0x3D1254
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1260 -> 0x003D1324
*/
// Range: 0x3D1260 -> 0x3D1324
static signed int HIPLSetBypass(class st_HIPLOADDATA * lddata /* r16 */, signed int enable /* r18 */, signed int use_async /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3D1260 -> 0x3D1324
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1330 -> 0x003D1338
*/
// Range: 0x3D1330 -> 0x3D1338
static unsigned int HIPLBaseSector(class st_HIPLOADDATA * lddata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D1330 -> 0x3D1338
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1340 -> 0x003D13B0
*/
// Range: 0x3D1340 -> 0x3D13B0
static void HIPLDestroy(class st_HIPLOADDATA * lddata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3D1340 -> 0x3D13B0
        signed int lockid; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D13B0 -> 0x003D15C4
*/
// Range: 0x3D13B0 -> 0x3D15C4
static class st_HIPLOADDATA * HIPLCreate(char * filename /* r20 */, char * dblbuf /* r19 */, signed int bufsize /* r18 */, signed int fileflags /* r21 */) {
    /* anonymous block */ {
        // Range: 0x3D13B0 -> 0x3D15C4
        class st_HIPLOADDATA * lddata; // r17
        class st_FILELOADINFO * fli; // r2
        class st_HIPLOADBLOCK * tmp_blk; // r2
        signed int i; // r7
        signed int uselock; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D15D0 -> 0x003D15DC
*/
// Range: 0x3D15D0 -> 0x3D15DC
class st_HIPLOADFUNCS * get_HIPLFuncs() {
    /* anonymous block */ {
        // Range: 0x3D15D0 -> 0x3D15DC
    }
}


