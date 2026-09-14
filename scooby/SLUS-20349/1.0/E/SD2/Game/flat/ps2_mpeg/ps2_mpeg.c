/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\ps2_mpeg.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class VoData * voBufData; // size: 0x4, address: 0x3585AC
static class VoTag * voBufTag; // size: 0x4, address: 0x3585B0
static __int128 * viBufTag; // size: 0x4, address: 0x3585B4
static unsigned char * mpegWork; // size: 0x4, address: 0x3585B8
static signed int mpegWorkSz; // size: 0x4, address: 0x3585BC
static char * defStack; // size: 0x4, address: 0x3585C0
class ReadBuf * readBufp; // size: 0x4, address: 0x3585C4
static unsigned char * audioBuff; // size: 0x4, address: 0x3585C8
static __int128 * viBufData; // size: 0x4, address: 0x3585CC
static char * videoDecStack; // size: 0x4, address: 0x3585D0
static class TimeStamp * timeStamp; // size: 0x4, address: 0x3585D4
signed int videoDecTh; // size: 0x4, address: 0x3585D8
signed int defaultTh; // size: 0x4, address: 0x3585DC
class StrFile infile; // size: 0x34, address: 0x3B1A40
class VideoDec videoDec; // size: 0xB8, address: 0x3B1A80
class AudioDec audioDec; // size: 0x5C, address: 0x3B1B40
class VoBuf voBuf; // size: 0x14, address: 0x3B1BA0
signed int frd; // size: 0x4, address: 0x3585E0
unsigned int controller_val; // size: 0x4, address: 0x0
signed int isWithAudio; // size: 0x4, address: 0x357B84
class sceGsDBuff sony_db; // size: 0x230, address: 0x3B1BC0
static unsigned int skip_buttons; // size: 0x4, address: 0x3585E4
static unsigned int skip_time; // size: 0x4, address: 0x3585E8
signed int handler_endimage(signed int); // size: 0x0, address: 0x262E60
signed int vblankHandler(signed int); // size: 0x0, address: 0x262EA0
void videoDecMain(class VideoDec *); // size: 0x0, address: 0x2605D0
void * _gp; // size: 0x4, address: 0x35F370
void defMain(); // size: 0x0, address: 0x262440
signed int pcmCallback(class sceMpeg *, class sceMpegCbDataStr *, void *); // size: 0x0, address: 0x262080
signed int videoCallback(class sceMpeg *, class sceMpegCbDataStr *, void *); // size: 0x0, address: 0x262230
class _tagxPad mPad[4]; // size: 0x1A0, address: 0x362E30
// total size: 0x18
class TimeStamp {
    // Members
public:
    signed long pts; // offset 0x0, size 0x4
    signed long dts; // offset 0x8, size 0x4
    signed int pos; // offset 0x10, size 0x4
    signed int len; // offset 0x14, size 0x4
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
// total size: 0x10
class _tagxRumble {
    // Members
public:
    enum _tagRumbleType type; // offset 0x0, size 0x4
    float seconds; // offset 0x4, size 0x4
    class _tagxRumble * next; // offset 0x8, size 0x4
    signed short active; // offset 0xC, size 0x2
    unsigned short fxflags; // offset 0xE, size 0x2
};
// total size: 0x80
class sceGsDrawEnv1 {
    // Members
public:
    class sceGsFrame frame1; // offset 0x0, size 0x8
    unsigned long frame1addr; // offset 0x8, size 0x4
    class sceGsZbuf zbuf1; // offset 0x10, size 0x8
    signed long zbuf1addr; // offset 0x18, size 0x4
    class sceGsXyoffset xyoffset1; // offset 0x20, size 0x8
    signed long xyoffset1addr; // offset 0x28, size 0x4
    class sceGsScissor scissor1; // offset 0x30, size 0x8
    signed long scissor1addr; // offset 0x38, size 0x4
    class sceGsPrmodecont prmodecont; // offset 0x40, size 0x8
    signed long prmodecontaddr; // offset 0x48, size 0x4
    class sceGsColclamp colclamp; // offset 0x50, size 0x8
    signed long colclampaddr; // offset 0x58, size 0x4
    class sceGsDthe dthe; // offset 0x60, size 0x8
    signed long dtheaddr; // offset 0x68, size 0x4
    class sceGsTest test1; // offset 0x70, size 0x8
    signed long test1addr; // offset 0x78, size 0x4
};
// total size: 0x8
class tGS_DISPFB2 {
    // Members
public:
    unsigned int FBP : 9; // offset 0x0, size 0x4
    unsigned int FBW : 6; // offset 0x0, size 0x4
    unsigned int PSM : 5; // offset 0x0, size 0x4
    unsigned int p0 : 12; // offset 0x0, size 0x4
    unsigned int DBX : 11; // offset 0x4, size 0x4
    unsigned int DBY : 11; // offset 0x4, size 0x4
    unsigned int p1 : 10; // offset 0x4, size 0x4
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
// total size: 0x30
class ThreadParam {
    // Members
public:
    signed int status; // offset 0x0, size 0x4
    void * entry; // offset 0x4, size 0x4
    void * stack; // offset 0x8, size 0x4
    signed int stackSize; // offset 0xC, size 0x4
    void * gpReg; // offset 0x10, size 0x4
    signed int initPriority; // offset 0x14, size 0x4
    signed int currentPriority; // offset 0x18, size 0x4
    unsigned int attr; // offset 0x1C, size 0x4
    unsigned int option; // offset 0x20, size 0x4
    signed int waitType; // offset 0x24, size 0x4
    signed int waitId; // offset 0x28, size 0x4
    signed int wakeupCount; // offset 0x2C, size 0x4
};
// total size: 0x8
class sceGsPrim {
    // Members
public:
    unsigned long PRIM : 3; // offset 0x0, size 0x4
    unsigned long IIP : 1; // offset 0x0, size 0x4
    unsigned long TME : 1; // offset 0x0, size 0x4
    unsigned long FGE : 1; // offset 0x0, size 0x4
    unsigned long ABE : 1; // offset 0x0, size 0x4
    unsigned long AA1 : 1; // offset 0x0, size 0x4
    unsigned long FST : 1; // offset 0x0, size 0x4
    unsigned long CTXT : 1; // offset 0x0, size 0x4
    unsigned long FIX : 1; // offset 0x0, size 0x4
    unsigned long pad11 : 53; // offset 0x0, size 0x4
};
// total size: 0x8
class tGS_BGCOLOR {
    // Members
public:
    unsigned int R : 8; // offset 0x0, size 0x4
    unsigned int G : 8; // offset 0x0, size 0x4
    unsigned int B : 8; // offset 0x0, size 0x4
    unsigned int p0 : 8; // offset 0x0, size 0x4
    unsigned int p1; // offset 0x4, size 0x4
};
// total size: 0x8
class sceGsDthe {
    // Members
public:
    unsigned long DTHE : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
// total size: 0x8
class sceGsColclamp {
    // Members
public:
    unsigned long CLAMP : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
// total size: 0x151800
class VoData {
    // Members
public:
    unsigned char v[1382400]; // offset 0x0, size 0x151800
};
// total size: 0x230
class sceGsDBuff {
    // Members
public:
    class sceGsDispEnv disp[2]; // offset 0x0, size 0x50
    class sceGifTag giftag0; // offset 0x50, size 0x10
    class sceGsDrawEnv1 draw0; // offset 0x60, size 0x80
    class sceGsClear clear0; // offset 0xE0, size 0x60
    class sceGifTag giftag1; // offset 0x140, size 0x10
    class sceGsDrawEnv1 draw1; // offset 0x150, size 0x80
    class sceGsClear clear1; // offset 0x1D0, size 0x60
};
// total size: 0x8
class sceGsScissor {
    // Members
public:
    unsigned long SCAX0 : 11; // offset 0x0, size 0x4
    unsigned long pad11 : 5; // offset 0x0, size 0x4
    unsigned long SCAX1 : 11; // offset 0x0, size 0x4
    unsigned long pad27 : 5; // offset 0x0, size 0x4
    unsigned long SCAY0 : 11; // offset 0x0, size 0x4
    unsigned long pad43 : 5; // offset 0x0, size 0x4
    unsigned long SCAY1 : 11; // offset 0x0, size 0x4
    unsigned long pad59 : 5; // offset 0x0, size 0x4
};
enum _tagRumbleType {
    eRumble_Off = 0,
    eRumble_VeryLightHi = 1,
    eRumble_VeryLight = 2,
    eRumble_LightHi = 3,
    eRumble_Light = 4,
    eRumble_MediumHi = 5,
    eRumble_Medium = 6,
    eRumble_HeavyHi = 7,
    eRumble_Heavy = 8,
    eRumble_VeryHeavyHi = 9,
    eRumble_VeryHeavy = 10,
    eRumble_Total = 11,
    eRumbleForceU32 = 2147483647,
};
// total size: 0x40440
class VoTag {
    // Members
public:
    signed int status; // offset 0x0, size 0x4
    signed int dummy[15]; // offset 0x4, size 0x3C
    unsigned int v[2][32896]; // offset 0x40, size 0x40400
};
// total size: 0x34
class StrFile {
    // Members
public:
    signed int isOnCD; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
    class sceCdlFILE fp; // offset 0x8, size 0x24
    unsigned char * iopBuf; // offset 0x2C, size 0x4
    signed int fd; // offset 0x30, size 0x4
};
// total size: 0x8
class tGS_PMODE {
    // Members
public:
    unsigned int EN1 : 1; // offset 0x0, size 0x4
    unsigned int EN2 : 1; // offset 0x0, size 0x4
    unsigned int CRTMD : 3; // offset 0x0, size 0x4
    unsigned int MMOD : 1; // offset 0x0, size 0x4
    unsigned int AMOD : 1; // offset 0x0, size 0x4
    unsigned int SLBG : 1; // offset 0x0, size 0x4
    unsigned int ALP : 8; // offset 0x0, size 0x4
    unsigned int p0 : 16; // offset 0x0, size 0x4
    unsigned int p1; // offset 0x4, size 0x4
};
// total size: 0x8
class sceGsXyoffset {
    // Members
public:
    unsigned long OFX : 16; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long OFY : 16; // offset 0x0, size 0x4
    unsigned long pad48 : 16; // offset 0x0, size 0x4
};
// total size: 0x5000C
class ReadBuf {
    // Members
public:
    unsigned char data[327680]; // offset 0x0, size 0x50000
    signed int put; // offset 0x50000, size 0x4
    signed int count; // offset 0x50004, size 0x4
    signed int size; // offset 0x50008, size 0x4
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
class tGS_DISPLAY2 {
    // Members
public:
    unsigned int DX : 12; // offset 0x0, size 0x4
    unsigned int DY : 11; // offset 0x0, size 0x4
    unsigned int MAGH : 4; // offset 0x0, size 0x4
    unsigned int MAGV : 2; // offset 0x0, size 0x4
    unsigned int p0 : 3; // offset 0x0, size 0x4
    unsigned int DW : 12; // offset 0x4, size 0x4
    unsigned int DH : 11; // offset 0x4, size 0x4
    unsigned int p1 : 9; // offset 0x4, size 0x4
};
// total size: 0x24
class sceCdlFILE {
    // Members
public:
    unsigned int lsn; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    char name[16]; // offset 0x8, size 0x10
    unsigned char date[8]; // offset 0x18, size 0x8
    unsigned int flag; // offset 0x20, size 0x4
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
// total size: 0x8
class sceGsXyz {
    // Members
public:
    unsigned long X : 16; // offset 0x0, size 0x4
    unsigned long Y : 16; // offset 0x0, size 0x4
    unsigned long Z : 32; // offset 0x0, size 0x4
};
// total size: 0x8
class sceGsPrmodecont {
    // Members
public:
    unsigned long AC : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
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
// total size: 0x8
class sceGsTest {
    // Members
public:
    unsigned long ATE : 1; // offset 0x0, size 0x4
    unsigned long ATST : 3; // offset 0x0, size 0x4
    unsigned long AREF : 8; // offset 0x0, size 0x4
    unsigned long AFAIL : 2; // offset 0x0, size 0x4
    unsigned long DATE : 1; // offset 0x0, size 0x4
    unsigned long DATM : 1; // offset 0x0, size 0x4
    unsigned long ZTE : 1; // offset 0x0, size 0x4
    unsigned long ZTST : 2; // offset 0x0, size 0x4
    unsigned long pad19 : 45; // offset 0x0, size 0x4
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
// total size: 0x8
class tGS_SMODE2 {
    // Members
public:
    unsigned int INT : 1; // offset 0x0, size 0x4
    unsigned int FFMD : 1; // offset 0x0, size 0x4
    unsigned int DPMS : 2; // offset 0x0, size 0x4
    unsigned int p0 : 28; // offset 0x0, size 0x4
    unsigned int p1; // offset 0x4, size 0x4
};
// total size: 0x8
class SpuStreamBody {
    // Members
public:
    char id[4]; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
// total size: 0x28
class sceGsDispEnv {
    // Members
public:
    class tGS_PMODE pmode; // offset 0x0, size 0x8
    class tGS_SMODE2 smode2; // offset 0x8, size 0x8
    class tGS_DISPFB2 dispfb; // offset 0x10, size 0x8
    class tGS_DISPLAY2 display; // offset 0x18, size 0x8
    class tGS_BGCOLOR bgcolor; // offset 0x20, size 0x8
};
// total size: 0x60
class sceGsClear {
    // Members
public:
    class sceGsTest testa; // offset 0x0, size 0x8
    signed long testaaddr; // offset 0x8, size 0x4
    class sceGsPrim prim; // offset 0x10, size 0x8
    signed long primaddr; // offset 0x18, size 0x4
    class sceGsRgbaq rgbaq; // offset 0x20, size 0x8
    signed long rgbaqaddr; // offset 0x28, size 0x4
    class sceGsXyz xyz2a; // offset 0x30, size 0x8
    signed long xyz2aaddr; // offset 0x38, size 0x4
    class sceGsXyz xyz2b; // offset 0x40, size 0x8
    signed long xyz2baddr; // offset 0x48, size 0x4
    class sceGsTest testb; // offset 0x50, size 0x8
    signed long testbaddr; // offset 0x58, size 0x4
};
// total size: 0x8
class sceGsRgbaq {
    // Members
public:
    unsigned int R : 8; // offset 0x0, size 0x4
    unsigned int G : 8; // offset 0x0, size 0x4
    unsigned int B : 8; // offset 0x0, size 0x4
    unsigned int A : 8; // offset 0x0, size 0x4
    float Q; // offset 0x4, size 0x4
};
// total size: 0x8
class sceGsFrame {
    // Members
public:
    unsigned long FBP : 9; // offset 0x0, size 0x4
    unsigned long pad09 : 7; // offset 0x0, size 0x4
    unsigned long FBW : 6; // offset 0x0, size 0x4
    unsigned long pad22 : 2; // offset 0x0, size 0x4
    unsigned long PSM : 6; // offset 0x0, size 0x4
    unsigned long pad30 : 2; // offset 0x0, size 0x4
    unsigned long FBMSK : 32; // offset 0x0, size 0x4
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
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
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
// total size: 0x8
class sceGsZbuf {
    // Members
public:
    unsigned long ZBP : 9; // offset 0x0, size 0x4
    unsigned long pad09 : 15; // offset 0x0, size 0x4
    unsigned long PSM : 4; // offset 0x0, size 0x4
    unsigned long pad28 : 4; // offset 0x0, size 0x4
    unsigned long ZMSK : 1; // offset 0x0, size 0x4
    unsigned long pad33 : 31; // offset 0x0, size 0x4
};
// total size: 0x68
class _tagxPad {
    // Members
public:
    unsigned char value[22]; // offset 0x0, size 0x16
    unsigned char last_value[22]; // offset 0x16, size 0x16
    unsigned int on; // offset 0x2C, size 0x4
    unsigned int pressed; // offset 0x30, size 0x4
    unsigned int released; // offset 0x34, size 0x4
    class _tagPadAnalog analog1; // offset 0x38, size 0x2
    class _tagPadAnalog analog2; // offset 0x3A, size 0x2
    enum _tagPadState state; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    class _tagxRumble rumble_head; // offset 0x44, size 0x10
    signed short port; // offset 0x54, size 0x2
    signed short slot; // offset 0x56, size 0x2
    class _tagiPad context; // offset 0x58, size 0x4
    float al2d_timer; // offset 0x5C, size 0x4
    float ar2d_timer; // offset 0x60, size 0x4
    float d_timer; // offset 0x64, size 0x4
};
// total size: 0x10
class sceGifTag {
    // Members
public:
    unsigned long NLOOP : 15; // offset 0x0, size 0x4
    unsigned long EOP : 1; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long id : 14; // offset 0x0, size 0x4
    unsigned long PRE : 1; // offset 0x0, size 0x4
    unsigned long PRIM : 11; // offset 0x0, size 0x4
    unsigned long FLG : 2; // offset 0x0, size 0x4
    unsigned long NREG : 4; // offset 0x0, size 0x4
    unsigned long REGS0 : 4; // offset 0x8, size 0x4
    unsigned long REGS1 : 4; // offset 0x8, size 0x4
    unsigned long REGS2 : 4; // offset 0x8, size 0x4
    unsigned long REGS3 : 4; // offset 0x8, size 0x4
    unsigned long REGS4 : 4; // offset 0x8, size 0x4
    unsigned long REGS5 : 4; // offset 0x8, size 0x4
    unsigned long REGS6 : 4; // offset 0x8, size 0x4
    unsigned long REGS7 : 4; // offset 0x8, size 0x4
    unsigned long REGS8 : 4; // offset 0x8, size 0x4
    unsigned long REGS9 : 4; // offset 0x8, size 0x4
    unsigned long REGS10 : 4; // offset 0x8, size 0x4
    unsigned long REGS11 : 4; // offset 0x8, size 0x4
    unsigned long REGS12 : 4; // offset 0x8, size 0x4
    unsigned long REGS13 : 4; // offset 0x8, size 0x4
    unsigned long REGS14 : 4; // offset 0x8, size 0x4
    unsigned long REGS15 : 4; // offset 0x8, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\ps2_mpeg.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262430 -> 0x00262440
*/
// Range: 0x262430 -> 0x262440
void ErrMessage(char * message /* r2 */) {
    /* anonymous block */ {
        // Range: 0x262430 -> 0x262440
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\ps2_mpeg.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262440 -> 0x00262458
*/
// Range: 0x262440 -> 0x262458
static void defMain() {
    /* anonymous block */ {
        // Range: 0x262440 -> 0x262458
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\ps2_mpeg.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262460 -> 0x00262558
*/
// Range: 0x262460 -> 0x262558
static void termAll() {
    /* anonymous block */ {
        // Range: 0x262460 -> 0x262558
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\ps2_mpeg.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262560 -> 0x002627C0
*/
// Range: 0x262560 -> 0x2627C0
static signed int initAll(char * bsfilename /* r20 */) {
    /* anonymous block */ {
        // Range: 0x262560 -> 0x2627C0
        class ThreadParam th_param; // r29+0xA0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\ps2_mpeg.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002627C0 -> 0x002627C8
*/
// Range: 0x2627C0 -> 0x2627C8
void switchThread() {
    /* anonymous block */ {
        // Range: 0x2627C0 -> 0x2627C8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\ps2_mpeg.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002627D0 -> 0x00262AC8
*/
// Range: 0x2627D0 -> 0x262AC8
static signed int readMpeg(class VideoDec * vd /* r19 */, class ReadBuf * rb /* r18 */, class StrFile * file /* r29+0xF4 */) {
    /* anonymous block */ {
        // Range: 0x2627D0 -> 0x262AC8
        signed long t1; // r21
        signed long t0; // r23
        signed int isStarted; // r30
        signed int proceed; // r21
        signed int count; // r21
        signed int writerest; // r2
        signed int readrest; // r20
        signed int getsize; // r2
        signed int putsize; // r2
        unsigned char * get_ptr; // r29+0xFC
        unsigned char * put_ptr; // r29+0xF8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\ps2_mpeg.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262AD0 -> 0x00262E00
*/
// Range: 0x262AD0 -> 0x262E00
signed int ps2_mpeg_play(char * fname /* r20 */, char * work_area /* r19 */, signed int work_area_size /* r18 */, unsigned int buttons /* r21 */, float time /* r20 */) {
    /* anonymous block */ {
        // Range: 0x262AD0 -> 0x262E00
        char * bp; // r3
        char * extra_buf; // r16
        char filename[128]; // r29+0x80
        char * ptr; // r3
        unsigned int i; // r18
    }
}


