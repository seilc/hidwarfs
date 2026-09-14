/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class xSysFontTbl xSysFontLookup[128]; // size: 0x400, address: 0x509840
static unsigned int xSysFontRGBA[4096]; // size: 0x4000, address: 0x509C40
static unsigned char exceptionsEnabled; // size: 0x1, address: 0x608EA8
static char * excep_table[14]; // size: 0x38, address: 0x50DC40
static char * reg_table[32]; // size: 0x80, address: 0x50DC80
static class _sceGpChain sChain; // size: 0x10, address: 0x6825A0
static class sceGpPrimR * sSprpac; // size: 0x4, address: 0x608EAC
static signed long iExceptionHangCurr; // size: 0x4, address: 0x607B50
static signed long iExceptionHangCheck; // size: 0x4, address: 0x607B58
static void * iExceptionHangAddr; // size: 0x4, address: 0x608EB0
static unsigned int sOldFreeSpace; // size: 0x4, address: 0x608EB4
static signed long sOldTime; // size: 0x4, address: 0x608EB8
void iExceptionHangCrash(); // size: 0x0, address: 0x28F900
void iExceptionDMAYieldCB(signed int, unsigned int); // size: 0x0, address: 0x28F2E0
void iExceptionHandler12(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, __int128 *); // size: 0x0, address: 0x28F530
void iExceptionHandler11(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, __int128 *); // size: 0x0, address: 0x28F560
void iExceptionHandler10(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, __int128 *); // size: 0x0, address: 0x28F590
void iExceptionHandler7(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, __int128 *); // size: 0x0, address: 0x28F5C0
void iExceptionHandler6(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, __int128 *); // size: 0x0, address: 0x28F5F0
void iExceptionHandler5(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, __int128 *); // size: 0x0, address: 0x28F620
void iExceptionHandler4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, __int128 *); // size: 0x0, address: 0x28F650
void iExceptionHandler3(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, __int128 *); // size: 0x0, address: 0x28F680
void iExceptionHandler2(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, __int128 *); // size: 0x0, address: 0x28F6B0
void iExceptionHandler1(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, __int128 *); // size: 0x0, address: 0x28F6E0
char * HISRequestThreadStateNames[]; // size: 0x0, address: 0x508AC0
char * HISStreamThreadStateNames[]; // size: 0x0, address: 0x508B60
char * HISMainThreadStateNames[]; // size: 0x0, address: 0x508B30
// total size: 0x34
class Request {
    // Members
public:
    char filename[32]; // offset 0x0, size 0x20
    signed int startSector; // offset 0x20, size 0x4
    signed int countSector; // offset 0x24, size 0x4
    void * destination; // offset 0x28, size 0x4
    enum HISMemoryType destinationType; // offset 0x2C, size 0x4
    unsigned char finished; // offset 0x30, size 0x1
    unsigned char cancelled; // offset 0x31, size 0x1
    unsigned char valid; // offset 0x32, size 0x1
    unsigned char failed; // offset 0x33, size 0x1
};
// total size: 0x8
class _sceGpReg {
    // Members
public:
    union { // inferred
        class sceGsPrim prim; // offset 0x0, size 0x8
        class sceGsRgbaq rgbaq; // offset 0x0, size 0x8
        class sceGsSt st; // offset 0x0, size 0x8
        class sceGsUv uv; // offset 0x0, size 0x8
        class sceGsXyzf xyzf; // offset 0x0, size 0x8
        class sceGsXyz xyz; // offset 0x0, size 0x8
        class sceGsTex0 tex0; // offset 0x0, size 0x8
        class sceGsClamp clamp; // offset 0x0, size 0x8
        class sceGsFog fog; // offset 0x0, size 0x8
        class _sceGpAdc adc; // offset 0x0, size 0x8
        unsigned long ul; // offset 0x0, size 0x4
        unsigned int ui[2]; // offset 0x0, size 0x8
    };
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
// total size: 0x8
class sceGsTex0 {
    // Members
public:
    unsigned long TBP0 : 14; // offset 0x0, size 0x4
    unsigned long TBW : 6; // offset 0x0, size 0x4
    unsigned long PSM : 6; // offset 0x0, size 0x4
    unsigned long TW : 4; // offset 0x0, size 0x4
    unsigned long TH : 4; // offset 0x0, size 0x4
    unsigned long TCC : 1; // offset 0x0, size 0x4
    unsigned long TFX : 2; // offset 0x0, size 0x4
    unsigned long CBP : 14; // offset 0x0, size 0x4
    unsigned long CPSM : 4; // offset 0x0, size 0x4
    unsigned long CSM : 1; // offset 0x0, size 0x4
    unsigned long CSA : 5; // offset 0x0, size 0x4
    unsigned long CLD : 3; // offset 0x0, size 0x4
};
// total size: 0x8
class sceGsTrxdir {
    // Members
public:
    unsigned long XDR : 2; // offset 0x0, size 0x4
    unsigned long pad02 : 62; // offset 0x0, size 0x4
};
// total size: 0x10
class _sceDmaTag {
    // Members
public:
    unsigned short qwc; // offset 0x0, size 0x2
    unsigned char mark; // offset 0x2, size 0x1
    unsigned char id; // offset 0x3, size 0x1
    class _sceDmaTag * next; // offset 0x4, size 0x4
    unsigned int p[2]; // offset 0x8, size 0x8
};
// total size: 0x8
class sceGsPabe {
    // Members
public:
    unsigned long PABE : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
// total size: 0x8
class sceGsTrxreg {
    // Members
public:
    unsigned long RRW : 12; // offset 0x0, size 0x4
    unsigned long pad12 : 20; // offset 0x0, size 0x4
    unsigned long RRH : 12; // offset 0x0, size 0x4
    unsigned long pad44 : 20; // offset 0x0, size 0x4
};
// total size: 0x8
class sceGsAlpha {
    // Members
public:
    unsigned long A : 2; // offset 0x0, size 0x4
    unsigned long B : 2; // offset 0x0, size 0x4
    unsigned long C : 2; // offset 0x0, size 0x4
    unsigned long D : 2; // offset 0x0, size 0x4
    unsigned long pad8 : 24; // offset 0x0, size 0x4
    unsigned long FIX : 8; // offset 0x0, size 0x4
    unsigned long pad40 : 24; // offset 0x0, size 0x4
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
// total size: 0x3D0
class HISDebugState {
    // Members
public:
    signed int retryCount; // offset 0x0, size 0x4
    enum HISRequestThreadState requestThread; // offset 0x4, size 0x4
    enum HISMainThreadState mainThread; // offset 0x8, size 0x4
    enum HISStreamThreadState streamThread; // offset 0xC, size 0x4
    unsigned char abortted; // offset 0x10, size 0x1
    char abortMessage[127]; // offset 0x11, size 0x7F
    class Request requests[16]; // offset 0x90, size 0x340
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
enum HISMemoryType {
    HIS_MEMORY_EE = 0,
    HIS_MEMORY_IOP = 1,
    HIS_MEMORY_SPU = 2,
};
// total size: 0x4
class FuncU32Union {
    // Members
public:
    union { // inferred
        void (* func)(); // offset 0x0, size 0x4
        unsigned int addr; // offset 0x0, size 0x4
    };
};
// total size: 0x8
class sceGsTex1 {
    // Members
public:
    unsigned long LCM : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 1; // offset 0x0, size 0x4
    unsigned long MXL : 3; // offset 0x0, size 0x4
    unsigned long MMAG : 1; // offset 0x0, size 0x4
    unsigned long MMIN : 3; // offset 0x0, size 0x4
    unsigned long MTBA : 1; // offset 0x0, size 0x4
    unsigned long pad10 : 9; // offset 0x0, size 0x4
    unsigned long L : 2; // offset 0x0, size 0x4
    unsigned long pad21 : 11; // offset 0x0, size 0x4
    unsigned long K : 12; // offset 0x0, size 0x4
    unsigned long pad44 : 20; // offset 0x0, size 0x4
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
class sceGsTrxpos {
    // Members
public:
    unsigned long SSAX : 11; // offset 0x0, size 0x4
    unsigned long pad11 : 5; // offset 0x0, size 0x4
    unsigned long SSAY : 11; // offset 0x0, size 0x4
    unsigned long pad27 : 5; // offset 0x0, size 0x4
    unsigned long DSAX : 11; // offset 0x0, size 0x4
    unsigned long pad43 : 5; // offset 0x0, size 0x4
    unsigned long DSAY : 11; // offset 0x0, size 0x4
    unsigned long DIR : 2; // offset 0x0, size 0x4
    unsigned long pad61 : 3; // offset 0x0, size 0x4
};
// total size: 0x8
class sceGsDthe {
    // Members
public:
    unsigned long DTHE : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
enum HISMainThreadState {
    HIS_MAIN_THREAD_NOTHING = 0,
    HIS_MAIN_THREAD_WAIT = 1,
    HIS_MAIN_THREAD_PROCESS = 2,
    HIS_MAIN_THREAD_WAIT_FOR_REQUEST_START = 3,
    HIS_MAIN_THREAD_WAIT_FOR_REQUEST_WAIT1 = 4,
    HIS_MAIN_THREAD_WAIT_FOR_REQUEST_WAIT2 = 5,
    HIS_MAIN_THREAD_WAIT_FOR_REQUEST_END = 6,
    HIS_MAIN_THREAD_DELAY_START = 7,
    HIS_MAIN_THREAD_DELAY_END = 8,
    HIS_MAIN_THREAD_RETURN = 9,
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
class sceGsFog {
    // Members
public:
    unsigned long pad00 : 56; // offset 0x0, size 0x4
    unsigned long F : 8; // offset 0x0, size 0x4
};
// total size: 0x8
class sceGsColclamp {
    // Members
public:
    unsigned long CLAMP : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
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
// total size: 0x8
class sceGsBitbltbuf {
    // Members
public:
    unsigned long SBP : 14; // offset 0x0, size 0x4
    unsigned long pad14 : 2; // offset 0x0, size 0x4
    unsigned long SBW : 6; // offset 0x0, size 0x4
    unsigned long pad22 : 2; // offset 0x0, size 0x4
    unsigned long SPSM : 6; // offset 0x0, size 0x4
    unsigned long pad30 : 2; // offset 0x0, size 0x4
    unsigned long DBP : 14; // offset 0x0, size 0x4
    unsigned long pad46 : 2; // offset 0x0, size 0x4
    unsigned long DBW : 6; // offset 0x0, size 0x4
    unsigned long pad54 : 2; // offset 0x0, size 0x4
    unsigned long DPSM : 6; // offset 0x0, size 0x4
    unsigned long pad62 : 2; // offset 0x0, size 0x4
};
// total size: 0x8
class sceGsTexflush {
    // Members
public:
    unsigned long pad00; // offset 0x0, size 0x4
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
// total size: 0x50
class sceGpTexEnv {
    // Members
public:
    class _sceDmaTag dmanext; // offset 0x0, size 0x10
    class sceGifTag giftag; // offset 0x10, size 0x10
    class sceGsTex1 tex1; // offset 0x20, size 0x8
    signed long tex1addr; // offset 0x28, size 0x4
    class sceGsTex0 tex0; // offset 0x30, size 0x8
    signed long tex0addr; // offset 0x38, size 0x4
    class sceGsClamp clamp; // offset 0x40, size 0x8
    signed long clampaddr; // offset 0x48, size 0x4
};
// total size: 0x8
class sceGsPrmodecont {
    // Members
public:
    unsigned long AC : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
// total size: 0x50
class sceGpPrimR {
    // Members
public:
    class _sceDmaTag dmanext; // offset 0x0, size 0x10
    class sceGifTag giftag1; // offset 0x10, size 0x10
    class _sceGifPackAd userreg; // offset 0x20, size 0x10
    class sceGifTag giftag2; // offset 0x30, size 0x10
    class _sceGpReg reg[1]; // offset 0x40, size 0x8
};
// total size: 0x8
class sceGsSt {
    // Members
public:
    float s; // offset 0x0, size 0x4
    float T; // offset 0x4, size 0x4
};
// total size: 0x10
class _sceGifPackAd {
    // Members
public:
    unsigned long DATA; // offset 0x0, size 0x4
    unsigned long ADDR; // offset 0x8, size 0x4
};
enum HISStreamThreadState {
    HIS_STREAM_THREAD_NOTHING = 0,
    HIS_STREAM_THREAD_WAIT_EVENT = 1,
    HIS_STREAM_THREAD_WAIT_LOCK = 2,
    HIS_STREAM_THREAD_PROCESS_STREAMS = 3,
};
// total size: 0x12
class sceGpTextureArg {
    // Members
public:
    signed short tbp; // offset 0x0, size 0x2
    signed short tbw; // offset 0x2, size 0x2
    signed short tpsm; // offset 0x4, size 0x2
    signed short tx; // offset 0x6, size 0x2
    signed short ty; // offset 0x8, size 0x2
    signed short tw; // offset 0xA, size 0x2
    signed short th; // offset 0xC, size 0x2
    signed short cbp; // offset 0xE, size 0x2
    signed short cpsm; // offset 0x10, size 0x2
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
// total size: 0x8
class sceGsXyz {
    // Members
public:
    unsigned long X : 16; // offset 0x0, size 0x4
    unsigned long Y : 16; // offset 0x0, size 0x4
    unsigned long Z : 32; // offset 0x0, size 0x4
};
// total size: 0x8
class sceGsUv {
    // Members
public:
    unsigned long U : 14; // offset 0x0, size 0x4
    unsigned long pad14 : 2; // offset 0x0, size 0x4
    unsigned long V : 14; // offset 0x0, size 0x4
    unsigned long pad30 : 34; // offset 0x0, size 0x4
};
// total size: 0x8
class sceGsFba {
    // Members
public:
    unsigned long FBA : 1; // offset 0x0, size 0x4
    unsigned long pad01 : 63; // offset 0x0, size 0x4
};
enum HISRequestThreadState {
    HIS_REQUEST_THREAD_NOTHING = 0,
    HIS_REQUEST_THREAD_WAIT_LOCK1 = 1,
    HIS_REQUEST_THREAD_REQUEST_LOOP = 2,
    HIS_REQUEST_THREAD_WAIT_REQUEST = 3,
    HIS_REQUEST_THREAD_WAIT_LOCK2 = 4,
    HIS_REQUEST_THREAD_REQUEST_FINISHED = 5,
    HIS_REQUEST_THREAD_RETRY_START = 6,
    HIS_REQUEST_THREAD_RETRY_END = 7,
    HIS_REQUEST_THREAD_CALLING_FINISH_REQUEST = 8,
    HIS_REQUEST_THREAD_CALLING_DATA_CALLBACK = 9,
    HIS_REQUEST_THREAD_DONE_DATA_CALLBACK = 10,
    HIS_REQUEST_THREAD_SUBMIT = 11,
    HIS_REQUEST_THREAD_WAIT_DMA = 12,
    HIS_REQUEST_THREAD_WAIT_DMA_DONE = 13,
    HIS_REQUEST_THREAD_NEW_DMA = 14,
    HIS_REQUEST_THREAD_NEW_DMA_DONE = 15,
    HIS_REQUEST_THREAD_CALLING_DONE_CALLBACK = 16,
    HIS_REQUEST_THREAD_DONE_DONE_CALLBACK = 17,
    HIS_REQUEST_THREAD_FINISH_REQUEST_DONE = 18,
    HIS_REQUEST_THREAD_FIND_NEW_REQUEST = 19,
    HIS_REQUEST_THREAD_SCHEDULE_REQUEST = 20,
    HIS_REQUEST_THREAD_HOSTIO_RELEASE = 21,
    HIS_REQUEST_THREAD_HOSTIO_OPEN = 22,
    HIS_REQUEST_THREAD_HOSTIO_SEEK_READ = 23,
    HIS_REQUEST_THREAD_WAIT_LOCK3 = 24,
};
// total size: 0x10
class _sceGpChain {
    // Members
public:
    __int128 * ot; // offset 0x0, size 0x4
    __int128 * pKick; // offset 0x4, size 0x4
    __int128 * pEnd; // offset 0x8, size 0x4
    signed int resolution; // offset 0xC, size 0x4
};
// total size: 0x8
class xSysFontTbl {
    // Members
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
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
class sceGsClamp {
    // Members
public:
    unsigned long WMS : 2; // offset 0x0, size 0x4
    unsigned long WMT : 2; // offset 0x0, size 0x4
    unsigned long MINU : 10; // offset 0x0, size 0x4
    unsigned long MAXU : 10; // offset 0x0, size 0x4
    unsigned long MINV : 10; // offset 0x0, size 0x4
    unsigned long MAXV : 10; // offset 0x0, size 0x4
    unsigned long pad44 : 20; // offset 0x0, size 0x4
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
// total size: 0x8
class _sceGpAdc {
    // Members
public:
    signed int ADC; // offset 0x0, size 0x4
    signed int pad; // offset 0x4, size 0x4
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
// total size: 0xB0
class sceGpLoadImage {
    // Members
public:
    class _sceDmaTag dmacnt; // offset 0x0, size 0x10
    class sceGifTag giftag1; // offset 0x10, size 0x10
    class sceGsBitbltbuf bitbltbuf; // offset 0x20, size 0x8
    signed long bitbltbufaddr; // offset 0x28, size 0x4
    class sceGsTrxpos trxpos; // offset 0x30, size 0x8
    signed long trxposaddr; // offset 0x38, size 0x4
    class sceGsTrxreg trxreg; // offset 0x40, size 0x8
    signed long trxregaddr; // offset 0x48, size 0x4
    class sceGsTrxdir trxdir; // offset 0x50, size 0x8
    signed long trxdiraddr; // offset 0x58, size 0x4
    class sceGifTag giftag2; // offset 0x60, size 0x10
    class _sceDmaTag dmaref; // offset 0x70, size 0x10
    class _sceDmaTag dmanext; // offset 0x80, size 0x10
    class sceGifTag giftag3; // offset 0x90, size 0x10
    class sceGsTexflush texflush; // offset 0xA0, size 0x8
    signed long texflushaddr; // offset 0xA8, size 0x4
};
// total size: 0x8
class sceGsTexa {
    // Members
public:
    unsigned long TA0 : 8; // offset 0x0, size 0x4
    unsigned long pad08 : 7; // offset 0x0, size 0x4
    unsigned long AEM : 1; // offset 0x0, size 0x4
    unsigned long pad16 : 16; // offset 0x0, size 0x4
    unsigned long TA1 : 8; // offset 0x0, size 0x4
    unsigned long pad40 : 24; // offset 0x0, size 0x4
};
// total size: 0x8
class sceGsXyzf {
    // Members
public:
    unsigned long X : 16; // offset 0x0, size 0x4
    unsigned long Y : 16; // offset 0x0, size 0x4
    unsigned long Z : 24; // offset 0x0, size 0x4
    unsigned long F : 8; // offset 0x0, size 0x4
};
// total size: 0x60
class sceGpAlphaEnv {
    // Members
public:
    class _sceDmaTag dmanext; // offset 0x0, size 0x10
    class sceGifTag giftag; // offset 0x10, size 0x10
    class sceGsAlpha alpha; // offset 0x20, size 0x8
    signed long alphaaddr; // offset 0x28, size 0x4
    class sceGsPabe pabe; // offset 0x30, size 0x8
    signed long pabeaddr; // offset 0x38, size 0x4
    class sceGsTexa texa; // offset 0x40, size 0x8
    signed long texaaddr; // offset 0x48, size 0x4
    class sceGsFba fba; // offset 0x50, size 0x8
    signed long fbaaddr; // offset 0x58, size 0x4
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

/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F210 -> 0x0028F2C4
*/
// Range: 0x28F210 -> 0x28F2C4
void iExceptionHangTimerCB(void * addr /* r16 */, signed long ticks /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28F210 -> 0x28F2C4
        class FuncU32Union fu'53; // r17
        class FuncU32Union fu; // r29+0x3C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F2D0 -> 0x0028F2DC
*/
// Range: 0x28F2D0 -> 0x28F2DC
void iExceptionRwDMAInit() {
    /* anonymous block */ {
        // Range: 0x28F2D0 -> 0x28F2DC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F2E0 -> 0x0028F464
*/
// Range: 0x28F2E0 -> 0x28F464
static void iExceptionDMAYieldCB(signed int blocked /* r2 */, unsigned int freeSpace /* r16 */) {
    /* anonymous block */ {
        // Range: 0x28F2E0 -> 0x28F464
        signed long currTime; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F470 -> 0x0028F52C
*/
// Range: 0x28F470 -> 0x28F52C
void iExceptionInit() {
    /* anonymous block */ {
        // Range: 0x28F470 -> 0x28F52C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F530 -> 0x0028F560
*/
// Range: 0x28F530 -> 0x28F560
static void iExceptionHandler12(unsigned int stat /* r4 */, unsigned int cause /* r2 */, unsigned int epc /* r10 */, unsigned int bva /* r3 */, unsigned int bpa /* r2 */, __int128 * gpr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28F530 -> 0x28F560
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F560 -> 0x0028F590
*/
// Range: 0x28F560 -> 0x28F590
static void iExceptionHandler11(unsigned int stat /* r4 */, unsigned int cause /* r2 */, unsigned int epc /* r10 */, unsigned int bva /* r3 */, unsigned int bpa /* r2 */, __int128 * gpr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28F560 -> 0x28F590
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F590 -> 0x0028F5C0
*/
// Range: 0x28F590 -> 0x28F5C0
static void iExceptionHandler10(unsigned int stat /* r4 */, unsigned int cause /* r2 */, unsigned int epc /* r10 */, unsigned int bva /* r3 */, unsigned int bpa /* r2 */, __int128 * gpr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28F590 -> 0x28F5C0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F5C0 -> 0x0028F5F0
*/
// Range: 0x28F5C0 -> 0x28F5F0
static void iExceptionHandler7(unsigned int stat /* r4 */, unsigned int cause /* r2 */, unsigned int epc /* r10 */, unsigned int bva /* r3 */, unsigned int bpa /* r2 */, __int128 * gpr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28F5C0 -> 0x28F5F0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F5F0 -> 0x0028F620
*/
// Range: 0x28F5F0 -> 0x28F620
static void iExceptionHandler6(unsigned int stat /* r4 */, unsigned int cause /* r2 */, unsigned int epc /* r10 */, unsigned int bva /* r3 */, unsigned int bpa /* r2 */, __int128 * gpr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28F5F0 -> 0x28F620
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F620 -> 0x0028F650
*/
// Range: 0x28F620 -> 0x28F650
static void iExceptionHandler5(unsigned int stat /* r4 */, unsigned int cause /* r2 */, unsigned int epc /* r10 */, unsigned int bva /* r3 */, unsigned int bpa /* r2 */, __int128 * gpr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28F620 -> 0x28F650
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F650 -> 0x0028F680
*/
// Range: 0x28F650 -> 0x28F680
static void iExceptionHandler4(unsigned int stat /* r4 */, unsigned int cause /* r2 */, unsigned int epc /* r10 */, unsigned int bva /* r3 */, unsigned int bpa /* r2 */, __int128 * gpr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28F650 -> 0x28F680
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F680 -> 0x0028F6B0
*/
// Range: 0x28F680 -> 0x28F6B0
static void iExceptionHandler3(unsigned int stat /* r4 */, unsigned int cause /* r2 */, unsigned int epc /* r10 */, unsigned int bva /* r3 */, unsigned int bpa /* r2 */, __int128 * gpr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28F680 -> 0x28F6B0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F6B0 -> 0x0028F6E0
*/
// Range: 0x28F6B0 -> 0x28F6E0
static void iExceptionHandler2(unsigned int stat /* r4 */, unsigned int cause /* r2 */, unsigned int epc /* r10 */, unsigned int bva /* r3 */, unsigned int bpa /* r2 */, __int128 * gpr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28F6B0 -> 0x28F6E0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F6E0 -> 0x0028F710
*/
// Range: 0x28F6E0 -> 0x28F710
static void iExceptionHandler1(unsigned int stat /* r4 */, unsigned int cause /* r2 */, unsigned int epc /* r10 */, unsigned int bva /* r3 */, unsigned int bpa /* r2 */, __int128 * gpr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28F6E0 -> 0x28F710
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F710 -> 0x0028F8F4
*/
// Range: 0x28F710 -> 0x28F8F4
void iExceptionMemCrash(char * location /* r17 */, unsigned int size /* r16 */, char * optionalString /* r18 */) {
    /* anonymous block */ {
        // Range: 0x28F710 -> 0x28F8F4
        char tmpstr[128]; // r29+0x50
        signed int line; // r17
        char * s; // r16
        unsigned char neverTrue; // r29+0xDF
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F900 -> 0x0028FA20
*/
// Range: 0x28F900 -> 0x28FA20
static void iExceptionHangCrash() {
    /* anonymous block */ {
        // Range: 0x28F900 -> 0x28FA20
        char tmpstr[128]; // r29+0x20
        char * gameWhere; // r16
        char * sndWhere; // r2
        unsigned char neverTrue; // r29+0xAF
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028FA20 -> 0x0028FD74
*/
// Range: 0x28FA20 -> 0x28FD74
void iExceptionIOPCrash() {
    /* anonymous block */ {
        // Range: 0x28FA20 -> 0x28FD74
        char tmpstr[1024]; // r29+0x60
        signed int line; // r19
        class HISDebugState * state; // r18
        signed int i; // r17
        class Request & r; // r2
        unsigned char neverTrue; // r29+0x46F
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028FD80 -> 0x00290178
*/
// Range: 0x28FD80 -> 0x290178
static void iExceptionHandler(signed int mode /* r20 */, unsigned int epc /* r19 */, unsigned int bva /* r18 */, unsigned int bpa /* r17 */, __int128 * gpr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x28FD80 -> 0x290178
        char exceptionMessage[1024]; // r29+0x130
        signed int i; // r18
        char tmpstr[128]; // r29+0xB0
        unsigned int offset; // r29+0x538
        char * function; // r2
        unsigned int trace[10]; // r29+0x80
        unsigned int offset; // r29+0x534
        char * function; // r2
        unsigned char neverTrue; // r29+0x53F
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00290180 -> 0x002903C4
*/
// Range: 0x290180 -> 0x2903C4
static void iExceptionGraphInit(unsigned char iHandler /* r16 */) {
    /* anonymous block */ {
        // Range: 0x290180 -> 0x2903C4
        class sceGpLoadImage loadimage; // r29+0x320
        class sceGpTexEnv texenv; // r29+0x2D0
        class sceGpAlphaEnv alphaenv; // r29+0x270
        class sceGpTextureArg texarg; // r29+0x250
        class sceGsDBuff db; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002903D0 -> 0x00290A0C
*/
// Range: 0x2903D0 -> 0x290A0C
static void iExceptionDrawChar(char * todraw /* r18 */, signed int x /* r17 */, signed int y /* r29+0xFC */, signed int w /* r23 */, signed int h /* r29+0xF8 */, signed int spc /* r2 */, unsigned char iHandler /* r30 */) {
    /* anonymous block */ {
        // Range: 0x2903D0 -> 0x290A0C
        signed int level; // r2
        signed int uu; // r6
        signed int vv; // r5
        signed int index; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00290A10 -> 0x00290DDC
*/
// Range: 0x290A10 -> 0x290DDC
static void iExceptionClearRect(signed int x /* r2 */, signed int y /* r2 */, signed int w /* r2 */, signed int h /* r2 */, unsigned char iHandler /* r2 */) {
    /* anonymous block */ {
        // Range: 0x290A10 -> 0x290DDC
        signed int level; // r2
        signed int uu; // r2
        signed int vv; // r2
        signed int index; // r25
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iException.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00290DE0 -> 0x00290DEC
*/
// Range: 0x290DE0 -> 0x290DEC
char * gGameWhereString() {
    /* anonymous block */ {
        // Range: 0x290DE0 -> 0x290DEC
    }
}


