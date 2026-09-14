/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\read.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class AudioDec audioDec; // size: 0x5C, address: 0x3B1B40
class VideoDec videoDec; // size: 0xB8, address: 0x3B1A80
// total size: 0x5000C
class ReadBuf {
    // Members
public:
    unsigned char data[327680]; // offset 0x0, size 0x50000
    signed int put; // offset 0x50000, size 0x4
    signed int count; // offset 0x50004, size 0x4
    signed int size; // offset 0x50008, size 0x4
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
// total size: 0x18
class TimeStamp {
    // Members
public:
    signed long pts; // offset 0x0, size 0x4
    signed long dts; // offset 0x8, size 0x4
    signed int pos; // offset 0x10, size 0x4
    signed int len; // offset 0x14, size 0x4
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
enum sceMpegCbType {
    sceMpegCbError = 0,
    sceMpegCbNodata = 1,
    sceMpegCbStopDMA = 2,
    sceMpegCbRestartDMA = 3,
    sceMpegCbBackground = 4,
    sceMpegCbTimeStamp = 5,
    sceMpegCbStr = 6,
};
// total size: 0x8
class SpuStreamBody {
    // Members
public:
    char id[4]; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\read.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262080 -> 0x00262230
*/
// Range: 0x262080 -> 0x262230
signed int pcmCallback(class sceMpegCbDataStr * str /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x262080 -> 0x262230
        signed int len; // r2
        signed int d1; // r29+0xAC
        signed int d0; // r29+0xA8
        unsigned char * pd1; // r29+0xA4
        unsigned char * pd0; // r29+0xA0
        signed int s1; // r18
        unsigned char * ps0; // r17
        class ReadBuf * rb; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\read.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262230 -> 0x00262428
*/
// Range: 0x262230 -> 0x262428
signed int videoCallback(class sceMpegCbDataStr * str /* r29+0xAC */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x262230 -> 0x262428
        signed int d1; // r29+0xBC
        signed int d0; // r29+0xB8
        unsigned char * pd1Unc; // r30
        unsigned char * pd0Unc; // r2
        unsigned char * pd1; // r29+0xB4
        unsigned char * pd0; // r29+0xB0
        signed int s1; // r16
        signed int s0; // r2
        unsigned char * ps0; // r2
        class ReadBuf * rb; // r22
    }
}


