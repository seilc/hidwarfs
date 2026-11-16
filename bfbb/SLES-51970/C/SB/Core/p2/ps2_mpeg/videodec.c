/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class VideoDec videoDec; // size: 0xB8, address: 0x53EE30
class VoBuf voBuf; // size: 0x14, address: 0x53EF50
signed int mpegTS(class sceMpeg *, class sceMpegCbDataTimeStamp *, void *); // size: 0x0, address: 0x1BE450
signed int mpegRestartDMA(class sceMpeg *, class sceMpegCbData *, void *); // size: 0x0, address: 0x1BE4A0
signed int mpegStopDMA(class sceMpeg *, class sceMpegCbData *, void *); // size: 0x0, address: 0x1BE4D0
signed int mpegNodata(class sceMpeg *, class sceMpegCbData *, void *); // size: 0x0, address: 0x1BE500
signed int mpegError(class sceMpeg *, class sceMpegCbDataError *, void *); // size: 0x0, address: 0x1BE530
// total size: 0x48
class sceMpeg {
    // Members
public:
    signed int width; // offset 0x0, size 0x4
    signed int height; // offset 0x4, size 0x4
    signed int frameCount; // offset 0x8, size 0x4
    signed long pts; // offset 0x10, size 0x4
    signed long dts; // offset 0x18, size 0x4
    unsigned long flags; // offset 0x20, size 0x4
    signed long pts2nd; // offset 0x28, size 0x4
    signed long dts2nd; // offset 0x30, size 0x4
    unsigned long flags2nd; // offset 0x38, size 0x4
    void * sys; // offset 0x40, size 0x4
};
// total size: 0xB8
class VideoDec {
    // Members
public:
    class sceMpeg mpeg; // offset 0x0, size 0x48
    class ViBuf vibuf; // offset 0x48, size 0x60
    unsigned int state; // offset 0xA8, size 0x4
    signed int sema; // offset 0xAC, size 0x4
    signed int hid_endimage; // offset 0xB0, size 0x4
    signed int hid_vblank; // offset 0xB4, size 0x4
};
// total size: 0x20
class sceMpegCbData {
    // Members
public:
    union { // inferred
        enum sceMpegCbType type; // offset 0x0, size 0x4
        class sceMpegCbDataError error; // offset 0x0, size 0x8
        class sceMpegCbDataTimeStamp ts; // offset 0x0, size 0x18
        class sceMpegCbDataStr str; // offset 0x0, size 0x20
    };
};
// total size: 0x18
class TimeStamp {
    // Members
public:
    signed long pts; // offset 0x0, size 0x4
    signed long dts; // offset 0x8, size 0x4
    signed int pos; // offset 0x10, size 0x4
    signed int len; // offset 0x14, size 0x4
};
// total size: 0x100000
class VoData {
    // Members
public:
    unsigned char v[1048576]; // offset 0x0, size 0x100000
};
// total size: 0x18
class sceMpegCbDataTimeStamp {
    // Members
public:
    enum sceMpegCbType type; // offset 0x0, size 0x4
    signed long pts; // offset 0x8, size 0x4
    signed long dts; // offset 0x10, size 0x4
};
// total size: 0x30E40
class VoTag {
    // Members
public:
    signed int status; // offset 0x0, size 0x4
    signed int dummy[15]; // offset 0x4, size 0x3C
    unsigned int v[2][25024]; // offset 0x40, size 0x30E00
};
// total size: 0x24
class sceIpuDmaEnv {
    // Members
public:
    unsigned int d4madr; // offset 0x0, size 0x4
    unsigned int d4tadr; // offset 0x4, size 0x4
    unsigned int d4qwc; // offset 0x8, size 0x4
    unsigned int d4chcr; // offset 0xC, size 0x4
    unsigned int d3madr; // offset 0x10, size 0x4
    unsigned int d3qwc; // offset 0x14, size 0x4
    unsigned int d3chcr; // offset 0x18, size 0x4
    unsigned int ipubp; // offset 0x1C, size 0x4
    unsigned int ipuctrl; // offset 0x20, size 0x4
};
enum sceMpegCbType {
    sceMpegCbError = 0,
    sceMpegCbNodata = 1,
    sceMpegCbStopDMA = 2,
    sceMpegCbRestartDMA = 3,
    sceMpegCbBackground = 4,
    sceMpegCbTimeStamp = 5,
    sceMpegCbStr = 6,
};
// total size: 0x14
class VoBuf {
    // Members
public:
    class VoData * data; // offset 0x0, size 0x4
    class VoTag * tag; // offset 0x4, size 0x4
    signed int write; // offset 0x8, size 0x4
    signed int count; // offset 0xC, size 0x4
    signed int size; // offset 0x10, size 0x4
};
// total size: 0x8
class sceMpegCbDataError {
    // Members
public:
    enum sceMpegCbType type; // offset 0x0, size 0x4
    char * errMessage; // offset 0x4, size 0x4
};
// total size: 0x20
class sceMpegCbDataStr {
    // Members
public:
    enum sceMpegCbType type; // offset 0x0, size 0x4
    unsigned char * header; // offset 0x4, size 0x4
    unsigned char * data; // offset 0x8, size 0x4
    unsigned int len; // offset 0xC, size 0x4
    signed long pts; // offset 0x10, size 0x4
    signed long dts; // offset 0x18, size 0x4
};
// total size: 0x60
class ViBuf {
    // Members
public:
    __int128 * data; // offset 0x0, size 0x4
    __int128 * tag; // offset 0x4, size 0x4
    signed int n; // offset 0x8, size 0x4
    signed int dmaStart; // offset 0xC, size 0x4
    signed int dmaN; // offset 0x10, size 0x4
    signed int readBytes; // offset 0x14, size 0x4
    signed int buffSize; // offset 0x18, size 0x4
    class sceIpuDmaEnv env; // offset 0x1C, size 0x24
    signed int sema; // offset 0x40, size 0x4
    signed int isActive; // offset 0x44, size 0x4
    signed long totalBytes; // offset 0x48, size 0x4
    class TimeStamp * ts; // offset 0x50, size 0x4
    signed int n_ts; // offset 0x54, size 0x4
    signed int count_ts; // offset 0x58, size 0x4
    signed int wt_ts; // offset 0x5C, size 0x4
};

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE450 -> 0x001BE494
*/
// Range: 0x1BE450 -> 0x1BE494
signed int mpegTS(class sceMpegCbDataTimeStamp * cbts /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BE450 -> 0x1BE494
        class TimeStamp ts; // r29+0x20
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE4A0 -> 0x001BE4C4
*/
// Range: 0x1BE4A0 -> 0x1BE4C4
signed int mpegRestartDMA() {
    /* anonymous block */ {
        // Range: 0x1BE4A0 -> 0x1BE4C4
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE4D0 -> 0x001BE4F4
*/
// Range: 0x1BE4D0 -> 0x1BE4F4
signed int mpegStopDMA() {
    /* anonymous block */ {
        // Range: 0x1BE4D0 -> 0x1BE4F4
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE500 -> 0x001BE52C
*/
// Range: 0x1BE500 -> 0x1BE52C
signed int mpegNodata() {
    /* anonymous block */ {
        // Range: 0x1BE500 -> 0x1BE52C
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE530 -> 0x001BE558
*/
// Range: 0x1BE530 -> 0x1BE558
signed int mpegError(class sceMpegCbDataError * cberror /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BE530 -> 0x1BE558
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE560 -> 0x001BE724
*/
// Range: 0x1BE560 -> 0x1BE724
signed int decBs0(class VideoDec * vd /* r22 */) {
    /* anonymous block */ {
        // Range: 0x1BE560 -> 0x1BE724
        class VoData * voData; // r2
        signed int ret; // r2
        signed int status; // r21
        signed int i; // r20
        signed int image_w; // r19
        signed int image_h; // r18
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE730 -> 0x001BE790
*/
// Range: 0x1BE730 -> 0x1BE790
void videoDecMain(class VideoDec * vd /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BE730 -> 0x1BE790
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE790 -> 0x001BE7E8
*/
// Range: 0x1BE790 -> 0x1BE7E8
signed int videoDecIsFlushed(class VideoDec * vd /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1BE790 -> 0x1BE7E8
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE7F0 -> 0x001BE99C
*/
// Range: 0x1BE7F0 -> 0x1BE99C
signed int videoDecFlush(class VideoDec * vd /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1BE7F0 -> 0x1BE99C
        unsigned char * pd0; // r29+0x6C
        unsigned char * pd1; // r29+0x68
        unsigned char * pd0Unc; // r18
        unsigned char * pd1Unc; // r17
        unsigned char seq_end_code[4]; // r29+0x64
        signed int d0; // r29+0x60
        signed int d1; // r29+0x5C
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE9A0 -> 0x001BE9DC
*/
// Range: 0x1BE9A0 -> 0x1BE9DC
signed int videoDecPutTs(class VideoDec * vd /* r2 */, signed long pts_val /* r2 */, signed long dts_val /* r2 */, unsigned char * start /* r2 */, signed int len /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BE9A0 -> 0x1BE9DC
        class TimeStamp ts; // r29+0x10
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE9E0 -> 0x001BE9E8
*/
// Range: 0x1BE9E0 -> 0x1BE9E8
unsigned int videoDecGetState(class VideoDec * vd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BE9E0 -> 0x1BE9E8
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE9F0 -> 0x001BE9FC
*/
// Range: 0x1BE9F0 -> 0x1BE9FC
void videoDecAbort(class VideoDec * vd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BE9F0 -> 0x1BE9FC
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEA00 -> 0x001BEA34
*/
// Range: 0x1BEA00 -> 0x1BEA34
signed int videoDecDelete(class VideoDec * vd /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BEA00 -> 0x1BEA34
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEA40 -> 0x001BEA48
*/
// Range: 0x1BEA40 -> 0x1BEA48
void videoDecEndPut(class VideoDec * vd /* r2 */, signed int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BEA40 -> 0x1BEA48
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEA50 -> 0x001BEA58
*/
// Range: 0x1BEA50 -> 0x1BEA58
void videoDecBeginPut(class VideoDec * vd /* r2 */, unsigned char * * ptr0 /* r2 */, signed int * len0 /* r2 */, unsigned char * * ptr1 /* r2 */, signed int * len1 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BEA50 -> 0x1BEA58
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEA60 -> 0x001BEA80
*/
// Range: 0x1BEA60 -> 0x1BEA80
signed int videoDecSetStream(class VideoDec * vd /* r2 */, signed int strType /* r2 */, signed int ch /* r2 */, signed int (* cb)(class sceMpeg *, class sceMpegCbData *, void *) /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BEA60 -> 0x1BEA80
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEA80 -> 0x001BEB7C
*/
// Range: 0x1BEA80 -> 0x1BEB7C
signed int videoDecCreate(class VideoDec * vd /* r21 */, unsigned char * mpegWork /* r2 */, signed int mpegWorkSize /* r2 */, __int128 * data /* r20 */, __int128 * tag /* r19 */, signed int tagSize /* r18 */, class TimeStamp * pts /* r17 */, signed int n_pts /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BEA80 -> 0x1BEB7C
    }
}


