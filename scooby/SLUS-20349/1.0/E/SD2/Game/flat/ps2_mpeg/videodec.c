/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class VideoDec videoDec; // size: 0xB8, address: 0x3B1A80
class VoBuf voBuf; // size: 0x14, address: 0x3B1BA0
signed int mpegTS(class sceMpeg *, class sceMpegCbDataTimeStamp *, void *); // size: 0x0, address: 0x260300
signed int mpegRestartDMA(class sceMpeg *, class sceMpegCbData *, void *); // size: 0x0, address: 0x260350
signed int mpegStopDMA(class sceMpeg *, class sceMpegCbData *, void *); // size: 0x0, address: 0x260380
signed int mpegNodata(class sceMpeg *, class sceMpegCbData *, void *); // size: 0x0, address: 0x2603B0
signed int mpegError(class sceMpeg *, class sceMpegCbDataError *, void *); // size: 0x0, address: 0x2603E0
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
// total size: 0x8
class sceMpegCbDataError {
    // Members
public:
    enum sceMpegCbType type; // offset 0x0, size 0x4
    char * errMessage; // offset 0x4, size 0x4
};
// total size: 0x18
class sceMpegCbDataTimeStamp {
    // Members
public:
    enum sceMpegCbType type; // offset 0x0, size 0x4
    signed long pts; // offset 0x8, size 0x4
    signed long dts; // offset 0x10, size 0x4
};
// total size: 0x151800
class VoData {
    // Members
public:
    unsigned char v[1382400]; // offset 0x0, size 0x151800
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
// total size: 0x40440
class VoTag {
    // Members
public:
    signed int status; // offset 0x0, size 0x4
    signed int dummy[15]; // offset 0x4, size 0x3C
    unsigned int v[2][32896]; // offset 0x40, size 0x40400
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
enum sceMpegCbType {
    sceMpegCbError = 0,
    sceMpegCbNodata = 1,
    sceMpegCbStopDMA = 2,
    sceMpegCbRestartDMA = 3,
    sceMpegCbBackground = 4,
    sceMpegCbTimeStamp = 5,
    sceMpegCbStr = 6,
};

/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260300 -> 0x00260344
*/
// Range: 0x260300 -> 0x260344
signed int mpegTS(class sceMpegCbDataTimeStamp * cbts /* r16 */) {
    /* anonymous block */ {
        // Range: 0x260300 -> 0x260344
        class TimeStamp ts; // r29+0x20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260350 -> 0x00260374
*/
// Range: 0x260350 -> 0x260374
signed int mpegRestartDMA() {
    /* anonymous block */ {
        // Range: 0x260350 -> 0x260374
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260380 -> 0x002603A4
*/
// Range: 0x260380 -> 0x2603A4
signed int mpegStopDMA() {
    /* anonymous block */ {
        // Range: 0x260380 -> 0x2603A4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002603B0 -> 0x002603DC
*/
// Range: 0x2603B0 -> 0x2603DC
signed int mpegNodata() {
    /* anonymous block */ {
        // Range: 0x2603B0 -> 0x2603DC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002603E0 -> 0x00260408
*/
// Range: 0x2603E0 -> 0x260408
signed int mpegError(class sceMpegCbDataError * cberror /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2603E0 -> 0x260408
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260410 -> 0x002605C4
*/
// Range: 0x260410 -> 0x2605C4
signed int decBs0(class VideoDec * vd /* r22 */) {
    /* anonymous block */ {
        // Range: 0x260410 -> 0x2605C4
        signed int image_h; // r18
        signed int image_w; // r17
        signed int i; // r16
        signed int status; // r23
        signed int ret; // r2
        class VoData * voData; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002605D0 -> 0x0026063C
*/
// Range: 0x2605D0 -> 0x26063C
void videoDecMain(class VideoDec * vd /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2605D0 -> 0x26063C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260640 -> 0x00260694
*/
// Range: 0x260640 -> 0x260694
signed int videoDecIsFlushed(class VideoDec * vd /* r17 */) {
    /* anonymous block */ {
        // Range: 0x260640 -> 0x260694
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002606A0 -> 0x00260830
*/
// Range: 0x2606A0 -> 0x260830
signed int videoDecFlush(class VideoDec * vd /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2606A0 -> 0x260830
        signed int d1; // r29+0x6C
        signed int d0; // r29+0x68
        unsigned char seq_end_code[4]; // r29+0x64
        unsigned char * pd1Unc; // r16
        unsigned char * pd0Unc; // r2
        unsigned char * pd1; // r29+0x60
        unsigned char * pd0; // r29+0x5C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260830 -> 0x0026086C
*/
// Range: 0x260830 -> 0x26086C
signed int videoDecPutTs(class VideoDec * vd /* r2 */, signed long pts_val /* r2 */, signed long dts_val /* r2 */, unsigned char * start /* r2 */, signed int len /* r2 */) {
    /* anonymous block */ {
        // Range: 0x260830 -> 0x26086C
        class TimeStamp ts; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260870 -> 0x00260878
*/
// Range: 0x260870 -> 0x260878
unsigned int videoDecGetState(class VideoDec * vd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x260870 -> 0x260878
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260880 -> 0x0026088C
*/
// Range: 0x260880 -> 0x26088C
void videoDecAbort(class VideoDec * vd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x260880 -> 0x26088C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260890 -> 0x002608C4
*/
// Range: 0x260890 -> 0x2608C4
signed int videoDecDelete(class VideoDec * vd /* r16 */) {
    /* anonymous block */ {
        // Range: 0x260890 -> 0x2608C4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002608D0 -> 0x002608D8
*/
// Range: 0x2608D0 -> 0x2608D8
void videoDecEndPut(class VideoDec * vd /* r2 */, signed int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2608D0 -> 0x2608D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002608E0 -> 0x002608E8
*/
// Range: 0x2608E0 -> 0x2608E8
void videoDecBeginPut(class VideoDec * vd /* r2 */, unsigned char * * ptr0 /* r2 */, signed int * len0 /* r2 */, unsigned char * * ptr1 /* r2 */, signed int * len1 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2608E0 -> 0x2608E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002608F0 -> 0x00260910
*/
// Range: 0x2608F0 -> 0x260910
signed int videoDecSetStream(class VideoDec * vd /* r2 */, signed int strType /* r2 */, signed int ch /* r2 */, signed int (* cb)(class sceMpeg *, class sceMpegCbData *, void *) /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2608F0 -> 0x260910
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260910 -> 0x00260A0C
*/
// Range: 0x260910 -> 0x260A0C
signed int videoDecCreate(class VideoDec * vd /* r21 */, unsigned char * mpegWork /* r2 */, signed int mpegWorkSize /* r2 */, __int128 * data /* r20 */, __int128 * tag /* r19 */, signed int tagSize /* r18 */, class TimeStamp * pts /* r17 */, signed int n_pts /* r16 */) {
    /* anonymous block */ {
        // Range: 0x260910 -> 0x260A0C
    }
}


