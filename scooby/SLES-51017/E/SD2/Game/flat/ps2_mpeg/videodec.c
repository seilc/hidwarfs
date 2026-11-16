/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class VideoDec videoDec; // size: 0xB8, address: 0x3AF480
class VoBuf voBuf; // size: 0x14, address: 0x3AF5A0
signed int mpegTS(class sceMpeg *, class sceMpegCbDataTimeStamp *, void *); // size: 0x0, address: 0x260C10
signed int mpegRestartDMA(class sceMpeg *, class sceMpegCbData *, void *); // size: 0x0, address: 0x260C60
signed int mpegStopDMA(class sceMpeg *, class sceMpegCbData *, void *); // size: 0x0, address: 0x260C90
signed int mpegNodata(class sceMpeg *, class sceMpegCbData *, void *); // size: 0x0, address: 0x260CC0
signed int mpegError(class sceMpeg *, class sceMpegCbDataError *, void *); // size: 0x0, address: 0x260CF0
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
// total size: 0x18
class sceMpegCbDataTimeStamp {
    // Members
public:
    enum sceMpegCbType type; // offset 0x0, size 0x4
    signed long pts; // offset 0x8, size 0x4
    signed long dts; // offset 0x10, size 0x4
};
// total size: 0x195000
class VoData {
    // Members
public:
    unsigned char v[1658880]; // offset 0x0, size 0x195000
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
// total size: 0x8
class sceMpegCbDataError {
    // Members
public:
    enum sceMpegCbType type; // offset 0x0, size 0x4
    char * errMessage; // offset 0x4, size 0x4
};
// total size: 0x4CE40
class VoTag {
    // Members
public:
    signed int status; // offset 0x0, size 0x4
    signed int dummy[15]; // offset 0x4, size 0x3C
    unsigned int v[2][39360]; // offset 0x40, size 0x4CE00
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
    Code range: 0x00260C10 -> 0x00260C54
*/
// Range: 0x260C10 -> 0x260C54
signed int mpegTS(class sceMpegCbDataTimeStamp * cbts /* r16 */) {
    /* anonymous block */ {
        // Range: 0x260C10 -> 0x260C54
        class TimeStamp ts; // r29+0x20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260C60 -> 0x00260C84
*/
// Range: 0x260C60 -> 0x260C84
signed int mpegRestartDMA() {
    /* anonymous block */ {
        // Range: 0x260C60 -> 0x260C84
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260C90 -> 0x00260CB4
*/
// Range: 0x260C90 -> 0x260CB4
signed int mpegStopDMA() {
    /* anonymous block */ {
        // Range: 0x260C90 -> 0x260CB4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260CC0 -> 0x00260CEC
*/
// Range: 0x260CC0 -> 0x260CEC
signed int mpegNodata() {
    /* anonymous block */ {
        // Range: 0x260CC0 -> 0x260CEC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260CF0 -> 0x00260D18
*/
// Range: 0x260CF0 -> 0x260D18
signed int mpegError(class sceMpegCbDataError * cberror /* r2 */) {
    /* anonymous block */ {
        // Range: 0x260CF0 -> 0x260D18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260D20 -> 0x00260ED4
*/
// Range: 0x260D20 -> 0x260ED4
signed int decBs0(class VideoDec * vd /* r22 */) {
    /* anonymous block */ {
        // Range: 0x260D20 -> 0x260ED4
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
    Code range: 0x00260EE0 -> 0x00260F4C
*/
// Range: 0x260EE0 -> 0x260F4C
void videoDecMain(class VideoDec * vd /* r17 */) {
    /* anonymous block */ {
        // Range: 0x260EE0 -> 0x260F4C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260F50 -> 0x00260FA4
*/
// Range: 0x260F50 -> 0x260FA4
signed int videoDecIsFlushed(class VideoDec * vd /* r17 */) {
    /* anonymous block */ {
        // Range: 0x260F50 -> 0x260FA4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260FB0 -> 0x00261140
*/
// Range: 0x260FB0 -> 0x261140
signed int videoDecFlush(class VideoDec * vd /* r19 */) {
    /* anonymous block */ {
        // Range: 0x260FB0 -> 0x261140
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
    Code range: 0x00261140 -> 0x0026117C
*/
// Range: 0x261140 -> 0x26117C
signed int videoDecPutTs(class VideoDec * vd /* r2 */, signed long pts_val /* r2 */, signed long dts_val /* r2 */, unsigned char * start /* r2 */, signed int len /* r2 */) {
    /* anonymous block */ {
        // Range: 0x261140 -> 0x26117C
        class TimeStamp ts; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261180 -> 0x00261188
*/
// Range: 0x261180 -> 0x261188
unsigned int videoDecGetState(class VideoDec * vd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x261180 -> 0x261188
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261190 -> 0x0026119C
*/
// Range: 0x261190 -> 0x26119C
void videoDecAbort(class VideoDec * vd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x261190 -> 0x26119C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002611A0 -> 0x002611D4
*/
// Range: 0x2611A0 -> 0x2611D4
signed int videoDecDelete(class VideoDec * vd /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2611A0 -> 0x2611D4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002611E0 -> 0x002611E8
*/
// Range: 0x2611E0 -> 0x2611E8
void videoDecEndPut(class VideoDec * vd /* r2 */, signed int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2611E0 -> 0x2611E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002611F0 -> 0x002611F8
*/
// Range: 0x2611F0 -> 0x2611F8
void videoDecBeginPut(class VideoDec * vd /* r2 */, unsigned char * * ptr0 /* r2 */, signed int * len0 /* r2 */, unsigned char * * ptr1 /* r2 */, signed int * len1 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2611F0 -> 0x2611F8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261200 -> 0x00261220
*/
// Range: 0x261200 -> 0x261220
signed int videoDecSetStream(class VideoDec * vd /* r2 */, signed int strType /* r2 */, signed int ch /* r2 */, signed int (* cb)(class sceMpeg *, class sceMpegCbData *, void *) /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x261200 -> 0x261220
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261220 -> 0x0026131C
*/
// Range: 0x261220 -> 0x26131C
signed int videoDecCreate(class VideoDec * vd /* r21 */, unsigned char * mpegWork /* r2 */, signed int mpegWorkSize /* r2 */, __int128 * data /* r20 */, __int128 * tag /* r19 */, signed int tagSize /* r18 */, class TimeStamp * pts /* r17 */, signed int n_pts /* r16 */) {
    /* anonymous block */ {
        // Range: 0x261220 -> 0x26131C
    }
}


