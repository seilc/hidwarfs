/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char _0_buf[2048]; // size: 0x800, address: 0x3B1E00
class xSndGlobals gSnd; // size: 0xD30, address: 0x373B80
// total size: 0x20
class SpuStreamHeader {
    // Members
public:
    char id[4]; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
    signed int type; // offset 0x8, size 0x4
    signed int rate; // offset 0xC, size 0x4
    signed int ch; // offset 0x10, size 0x4
    signed int interSize; // offset 0x14, size 0x4
    signed int loopStart; // offset 0x18, size 0x4
    signed int loopEnd; // offset 0x1C, size 0x4
};
// total size: 0x5C
class AudioDec {
    // Members
public:
    signed int state; // offset 0x0, size 0x4
    class SpuStreamHeader sshd; // offset 0x4, size 0x20
    class SpuStreamBody ssbd; // offset 0x24, size 0x8
    signed int hdrCount; // offset 0x2C, size 0x4
    unsigned char * data; // offset 0x30, size 0x4
    signed int put; // offset 0x34, size 0x4
    signed int count; // offset 0x38, size 0x4
    signed int size; // offset 0x3C, size 0x4
    signed int totalBytes; // offset 0x40, size 0x4
    signed int iopBuff; // offset 0x44, size 0x4
    signed int iopBuffSize; // offset 0x48, size 0x4
    signed int iopLastPos; // offset 0x4C, size 0x4
    signed int iopPausePos; // offset 0x50, size 0x4
    signed int totalBytesSent; // offset 0x54, size 0x4
    signed int iopZero; // offset 0x58, size 0x4
};
// total size: 0x10
class sceSifDmaData {
    // Members
public:
    unsigned int data; // offset 0x0, size 0x4
    unsigned int addr; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    unsigned int mode; // offset 0xC, size 0x4
};
// total size: 0x8
class SpuStreamBody {
    // Members
public:
    char id[4]; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
};
// total size: 0x8
class xSndVol {
    // Members
public:
    float volL; // offset 0x0, size 0x4
    float volR; // offset 0x4, size 0x4
};
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x4
class iSndVol {
    // Members
public:
    signed short volL; // offset 0x0, size 0x2
    signed short volR; // offset 0x2, size 0x2
};
// total size: 0xD30
class xSndGlobals {
    // Members
public:
    unsigned int stereo; // offset 0x0, size 0x4
    unsigned int SndCount; // offset 0x4, size 0x4
    class xSndVol mastervol; // offset 0x8, size 0x8
    class xSndVol streamvol; // offset 0x10, size 0x8
    class xSndVol fxvol; // offset 0x18, size 0x8
    class xSndVoiceInfo voice[48]; // offset 0x20, size 0xCC0
    class _xVec3 right; // offset 0xCE0, size 0xC
    class _xVec3 up; // offset 0xCEC, size 0xC
    class _xVec3 at; // offset 0xCF8, size 0xC
    class _xVec3 pos; // offset 0xD04, size 0xC
    float radius2; // offset 0xD10, size 0x4
    class _xVec3 nearpos; // offset 0xD14, size 0xC
    class _xVec3 farpos; // offset 0xD20, size 0xC
    unsigned int suspendCD; // offset 0xD2C, size 0x4
};
// total size: 0x44
class xSndVoiceInfo {
    // Members
public:
    unsigned int assetID; // offset 0x0, size 0x4
    unsigned int sndID; // offset 0x4, size 0x4
    unsigned int parentID; // offset 0x8, size 0x4
    class _xVec3 * parentPos; // offset 0xC, size 0x4
    signed int internalID; // offset 0x10, size 0x4
    unsigned short flags; // offset 0x14, size 0x2
    unsigned short priority; // offset 0x16, size 0x2
    float vol; // offset 0x18, size 0x4
    float pitch; // offset 0x1C, size 0x4
    unsigned int sample_rate; // offset 0x20, size 0x4
    unsigned int deadct; // offset 0x24, size 0x4
    class _xVec3 pos; // offset 0x28, size 0xC
    float radius2; // offset 0x34, size 0x4
    class iSndInfo ps; // offset 0x38, size 0xC
};
// total size: 0xC
class iSndInfo {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    class iSndVol vol; // offset 0x4, size 0x4
    unsigned int pitch; // offset 0x8, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002635E0 -> 0x00263928
*/
// Range: 0x2635E0 -> 0x263928
static signed int sendToIOP2area(signed int pd0 /* r17 */, signed int d0 /* r16 */, signed int pd1 /* r23 */, signed int d1 /* r2 */, unsigned char * ps0 /* r18 */, signed int s0 /* r21 */, unsigned char * ps1 /* r20 */, signed int s1 /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2635E0 -> 0x263928
        signed int diff; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00263930 -> 0x00263B0C
*/
// Range: 0x263930 -> 0x263B0C
signed int audioDecSendToIOP(class AudioDec * ad /* r17 */) {
    /* anonymous block */ {
        // Range: 0x263930 -> 0x263B0C
        signed int pos; // r2
        signed int countAdj; // r3
        signed int count_sent; // r16
        signed int s1; // r2
        unsigned char * ps0; // r2
        signed int d1; // r2
        signed int d0; // r2
        signed int pd1; // r2
        signed int pd0; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00263B10 -> 0x00263B24
*/
// Range: 0x263B10 -> 0x263B24
signed int audioDecIsPreset(class AudioDec * ad /* r2 */) {
    /* anonymous block */ {
        // Range: 0x263B10 -> 0x263B24
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00263B30 -> 0x00263BB4
*/
// Range: 0x263B30 -> 0x263BB4
void audioDecEndPut(class AudioDec * ad /* r2 */, signed int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x263B30 -> 0x263BB4
        signed int hdr_add; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00263BC0 -> 0x00263C7C
*/
// Range: 0x263BC0 -> 0x263C7C
void audioDecBeginPut(class AudioDec * ad /* r2 */, unsigned char * * ptr0 /* r2 */, signed int * len0 /* r2 */, unsigned char * * ptr1 /* r2 */, signed int * len1 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x263BC0 -> 0x263C7C
        signed int len; // r9
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00263C80 -> 0x00263D40
*/
// Range: 0x263C80 -> 0x263D40
void audioDecReset(class AudioDec * ad /* r16 */) {
    /* anonymous block */ {
        // Range: 0x263C80 -> 0x263D40
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00263D40 -> 0x00263DC8
*/
// Range: 0x263D40 -> 0x263DC8
void audioDecStart(class AudioDec * ad /* r16 */) {
    /* anonymous block */ {
        // Range: 0x263D40 -> 0x263DC8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00263DD0 -> 0x00263E40
*/
// Range: 0x263DD0 -> 0x263E40
signed int audioDecDelete(class AudioDec * ad /* r16 */) {
    /* anonymous block */ {
        // Range: 0x263DD0 -> 0x263E40
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\audiodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00263E40 -> 0x00263FF4
*/
// Range: 0x263E40 -> 0x263FF4
signed int audioDecCreate(class AudioDec * ad /* r17 */, unsigned char * buff /* r2 */, signed int buffSize /* r2 */, signed int iopBuffSize /* r16 */) {
    /* anonymous block */ {
        // Range: 0x263E40 -> 0x263FF4
        unsigned int mvol; // r16
    }
}


