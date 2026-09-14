/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00447090 -> 0x004470AC
*/
// Range: 0x447090 -> 0x4470AC
void isort_float(void * base /* r2 */, unsigned int num /* r2 */, unsigned int width /* r2 */, unsigned int key_offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x447090 -> 0x4470AC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004470B0 -> 0x004470CC
*/
// Range: 0x4470B0 -> 0x4470CC
void quicksort_istr(void * base /* r2 */, unsigned int num /* r2 */, unsigned int width /* r2 */, unsigned int key_offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4470B0 -> 0x4470CC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004470D0 -> 0x004470EC
*/
// Range: 0x4470D0 -> 0x4470EC
void quicksort_float(void * base /* r2 */, unsigned int num /* r2 */, unsigned int width /* r2 */, unsigned int key_offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4470D0 -> 0x4470EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004470F0 -> 0x0044710C
*/
// Range: 0x4470F0 -> 0x44710C
void quicksort_int(void * base /* r2 */, unsigned int num /* r2 */, unsigned int width /* r2 */, unsigned int key_offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4470F0 -> 0x44710C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00447110 -> 0x004471BC
*/
// Range: 0x447110 -> 0x4471BC
signed int xUtil_yesno(float wt_yes /* r20 */) {
    /* anonymous block */ {
        // Range: 0x447110 -> 0x4471BC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004471C0 -> 0x00447210
*/
// Range: 0x4471C0 -> 0x447210
unsigned char itoBCD(unsigned short dec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4471C0 -> 0x447210
        signed int ones; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00447210 -> 0x00447260
*/
// Range: 0x447210 -> 0x447260
unsigned char itoBCD(unsigned char dec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x447210 -> 0x447260
        signed int ones; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00447260 -> 0x00447294
*/
// Range: 0x447260 -> 0x447294
unsigned char BCDtoi(unsigned char hex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x447260 -> 0x447294
        char c[16]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004472A0 -> 0x004474D0
*/
// Range: 0x4472A0 -> 0x4474D0
void strtosjis(unsigned char * string /* r20 */, unsigned char * dest /* r19 */) {
    /* anonymous block */ {
        // Range: 0x4472A0 -> 0x4474D0
        signed int i; // r5
        signed int sjis_code; // r4
        signed int ascii_code; // r18
        unsigned char stmp; // r17
        unsigned char stmp2; // r16
        unsigned char * dest2; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004474D0 -> 0x004476F0
*/
// Range: 0x4474D0 -> 0x4476F0
unsigned int xUtil_crc_update(unsigned int crc_accum /* r18 */, char * data /* r17 */, signed int datasize /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4474D0 -> 0x4476F0
        signed int i; // r2
        signed int j; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004476F0 -> 0x0044777C
*/
// Range: 0x4476F0 -> 0x44777C
unsigned int xUtil_crc_init() {
    /* anonymous block */ {
        // Range: 0x4476F0 -> 0x44777C
        signed int i; // r8
        signed int j; // r7
        unsigned int crc_accum; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00447780 -> 0x00447A94
*/
// Range: 0x447780 -> 0x447A94
char * xUtil_idtag2string(unsigned int srctag /* r2 */, signed int bufidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x447780 -> 0x447A94
        unsigned int tag; // r29+0xC
        char * strptr; // r2
        char * uc; // r2
        signed int l; // r29+0x8
        char t; // r2
        char buf[6][10]; // @ 0x007AB750
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00447AA0 -> 0x00447AB0
*/
// Range: 0x447AA0 -> 0x447AB0
signed int xUtilShutdown() {
    /* anonymous block */ {
        // Range: 0x447AA0 -> 0x447AB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00447AB0 -> 0x00447AEC
*/
// Range: 0x447AB0 -> 0x447AEC
signed int xUtilStartup() {
    /* anonymous block */ {
        // Range: 0x447AB0 -> 0x447AEC
    }
}


