/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\card\src\CARDCheck.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x8039F0FC -> 0x8039FD48
*/
// Range: 0x8039F0FC -> 0x8039F1D0
void __CARDCheckSum(void * ptr /* r1+0x8 */, int length /* r27 */, unsigned short * checkSum /* r29 */, unsigned short * checkSumInv /* r30 */) {
    // Local variables
    unsigned short * p; // r31
    int i; // r28
}

// total size: 0x50
struct STRUCT_DSP_TASK {
    // Members
    unsigned long state; // offset 0x0, size 0x4
    unsigned long priority; // offset 0x4, size 0x4
    unsigned long flags; // offset 0x8, size 0x4
    unsigned short * iram_mmem_addr; // offset 0xC, size 0x4
    unsigned long iram_length; // offset 0x10, size 0x4
    unsigned long iram_addr; // offset 0x14, size 0x4
    unsigned short * dram_mmem_addr; // offset 0x18, size 0x4
    unsigned long dram_length; // offset 0x1C, size 0x4
    unsigned long dram_addr; // offset 0x20, size 0x4
    unsigned short dsp_init_vector; // offset 0x24, size 0x2
    unsigned short dsp_resume_vector; // offset 0x26, size 0x2
    void (* init_cb)(void *); // offset 0x28, size 0x4
    void (* res_cb)(void *); // offset 0x2C, size 0x4
    void (* done_cb)(void *); // offset 0x30, size 0x4
    void (* req_cb)(void *); // offset 0x34, size 0x4
    struct STRUCT_DSP_TASK * next; // offset 0x38, size 0x4
    struct STRUCT_DSP_TASK * prev; // offset 0x3C, size 0x4
    long long t_context; // offset 0x40, size 0x8
    long long t_task; // offset 0x48, size 0x8
};
// total size: 0x40
struct CARDDir {
    // Members
    unsigned char gameName[4]; // offset 0x0, size 0x4
    unsigned char company[2]; // offset 0x4, size 0x2
    unsigned char _padding0; // offset 0x6, size 0x1
    unsigned char bannerFormat; // offset 0x7, size 0x1
    unsigned char fileName[32]; // offset 0x8, size 0x20
    unsigned long time; // offset 0x28, size 0x4
    unsigned long iconAddr; // offset 0x2C, size 0x4
    unsigned short iconFormat; // offset 0x30, size 0x2
    unsigned short iconSpeed; // offset 0x32, size 0x2
    unsigned char permission; // offset 0x34, size 0x1
    unsigned char copyTimes; // offset 0x35, size 0x1
    unsigned short startBlock; // offset 0x36, size 0x2
    unsigned short length; // offset 0x38, size 0x2
    unsigned char _padding1[2]; // offset 0x3A, size 0x2
    unsigned long commentAddr; // offset 0x3C, size 0x4
};
// total size: 0x2C8
struct OSContext {
    // Members
    unsigned long gpr[32]; // offset 0x0, size 0x80
    unsigned long cr; // offset 0x80, size 0x4
    unsigned long lr; // offset 0x84, size 0x4
    unsigned long ctr; // offset 0x88, size 0x4
    unsigned long xer; // offset 0x8C, size 0x4
    double fpr[32]; // offset 0x90, size 0x100
    unsigned long fpscr_pad; // offset 0x190, size 0x4
    unsigned long fpscr; // offset 0x194, size 0x4
    unsigned long srr0; // offset 0x198, size 0x4
    unsigned long srr1; // offset 0x19C, size 0x4
    unsigned short mode; // offset 0x1A0, size 0x2
    unsigned short state; // offset 0x1A2, size 0x2
    unsigned long gqr[8]; // offset 0x1A4, size 0x20
    unsigned long psf_pad; // offset 0x1C4, size 0x4
    double psf[32]; // offset 0x1C8, size 0x100
};
// total size: 0x8
struct OSThreadLink {
    // Members
    struct OSThread * next; // offset 0x0, size 0x4
    struct OSThread * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct OSMutexLink {
    // Members
    struct OSMutex * next; // offset 0x0, size 0x4
    struct OSMutex * prev; // offset 0x4, size 0x4
};
// total size: 0x18
struct OSMutex {
    // Members
    struct OSThreadQueue queue; // offset 0x0, size 0x8
    struct OSThread * thread; // offset 0x8, size 0x4
    long count; // offset 0xC, size 0x4
    struct OSMutexLink link; // offset 0x10, size 0x8
};
// total size: 0x8
struct OSMutexQueue {
    // Members
    struct OSMutex * head; // offset 0x0, size 0x4
    struct OSMutex * tail; // offset 0x4, size 0x4
};
// total size: 0x318
struct OSThread {
    // Members
    struct OSContext context; // offset 0x0, size 0x2C8
    unsigned short state; // offset 0x2C8, size 0x2
    unsigned short attr; // offset 0x2CA, size 0x2
    long suspend; // offset 0x2CC, size 0x4
    long priority; // offset 0x2D0, size 0x4
    long base; // offset 0x2D4, size 0x4
    void * val; // offset 0x2D8, size 0x4
    struct OSThreadQueue * queue; // offset 0x2DC, size 0x4
    struct OSThreadLink link; // offset 0x2E0, size 0x8
    struct OSThreadQueue queueJoin; // offset 0x2E8, size 0x8
    struct OSMutex * mutex; // offset 0x2F0, size 0x4
    struct OSMutexQueue queueMutex; // offset 0x2F4, size 0x8
    struct OSThreadLink linkActive; // offset 0x2FC, size 0x8
    unsigned char * stackBase; // offset 0x304, size 0x4
    unsigned long * stackEnd; // offset 0x308, size 0x4
    long error; // offset 0x30C, size 0x4
    void * specific[2]; // offset 0x310, size 0x8
};
// total size: 0x8
struct OSThreadQueue {
    // Members
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
};
// total size: 0x14
struct CARDFileInfo {
    // Members
    long chan; // offset 0x0, size 0x4
    long fileNo; // offset 0x4, size 0x4
    long offset; // offset 0x8, size 0x4
    long length; // offset 0xC, size 0x4
    unsigned short iBlock; // offset 0x10, size 0x2
    unsigned short __padding; // offset 0x12, size 0x2
};
// total size: 0x28
struct OSAlarm {
    // Members
    void (* handler)(struct OSAlarm *, struct OSContext *); // offset 0x0, size 0x4
    unsigned long tag; // offset 0x4, size 0x4
    long long fire; // offset 0x8, size 0x8
    struct OSAlarm * prev; // offset 0x10, size 0x4
    struct OSAlarm * next; // offset 0x14, size 0x4
    long long period; // offset 0x18, size 0x8
    long long start; // offset 0x20, size 0x8
};
// total size: 0x20
struct DVDDiskID {
    // Members
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[22]; // offset 0xA, size 0x16
};
// total size: 0x110
struct CARDControl {
    // Members
    int attached; // offset 0x0, size 0x4
    long result; // offset 0x4, size 0x4
    unsigned short size; // offset 0x8, size 0x2
    unsigned short pageSize; // offset 0xA, size 0x2
    long sectorSize; // offset 0xC, size 0x4
    unsigned short cBlock; // offset 0x10, size 0x2
    unsigned short vendorID; // offset 0x12, size 0x2
    long latency; // offset 0x14, size 0x4
    unsigned char id[12]; // offset 0x18, size 0xC
    int mountStep; // offset 0x24, size 0x4
    int formatStep; // offset 0x28, size 0x4
    unsigned long scramble; // offset 0x2C, size 0x4
    struct STRUCT_DSP_TASK task; // offset 0x30, size 0x50
    void * workArea; // offset 0x80, size 0x4
    struct CARDDir * currentDir; // offset 0x84, size 0x4
    unsigned short * currentFat; // offset 0x88, size 0x4
    struct OSThreadQueue threadQueue; // offset 0x8C, size 0x8
    unsigned char cmd[9]; // offset 0x94, size 0x9
    long cmdlen; // offset 0xA0, size 0x4
    unsigned long mode; // offset 0xA4, size 0x4
    int retry; // offset 0xA8, size 0x4
    int repeat; // offset 0xAC, size 0x4
    unsigned long addr; // offset 0xB0, size 0x4
    void * buffer; // offset 0xB4, size 0x4
    long xferred; // offset 0xB8, size 0x4
    unsigned short freeNo; // offset 0xBC, size 0x2
    unsigned short startBlock; // offset 0xBE, size 0x2
    struct CARDFileInfo * fileInfo; // offset 0xC0, size 0x4
    void (* extCallback)(long, long); // offset 0xC4, size 0x4
    void (* txCallback)(long, long); // offset 0xC8, size 0x4
    void (* exiCallback)(long, long); // offset 0xCC, size 0x4
    void (* apiCallback)(long, long); // offset 0xD0, size 0x4
    void (* xferCallback)(long, long); // offset 0xD4, size 0x4
    void (* eraseCallback)(long, long); // offset 0xD8, size 0x4
    void (* unlockCallback)(long, long); // offset 0xDC, size 0x4
    struct OSAlarm alarm; // offset 0xE0, size 0x28
    unsigned long cid; // offset 0x108, size 0x4
    const struct DVDDiskID * diskID; // offset 0x10C, size 0x4
};
struct CARDControl __CARDBlock[2]; // size: 0x220, address: 0x80D57600
// total size: 0x200
struct CARDID {
    // Members
    unsigned char serial[32]; // offset 0x0, size 0x20
    unsigned short deviceID; // offset 0x20, size 0x2
    unsigned short size; // offset 0x22, size 0x2
    unsigned short encode; // offset 0x24, size 0x2
    unsigned char padding[470]; // offset 0x26, size 0x1D6
    unsigned short checkSum; // offset 0x1FC, size 0x2
    unsigned short checkSumInv; // offset 0x1FE, size 0x2
};
// total size: 0x2C
struct OSSramEx {
    // Members
    unsigned char flashID[2][12]; // offset 0x0, size 0x18
    unsigned long wirelessKeyboardID; // offset 0x18, size 0x4
    unsigned short wirelessPadID[4]; // offset 0x1C, size 0x8
    unsigned char dvdErrorCode; // offset 0x24, size 0x1
    unsigned char _padding0; // offset 0x25, size 0x1
    unsigned char flashIDCheckSum[2]; // offset 0x26, size 0x2
    unsigned short gbs; // offset 0x28, size 0x2
    unsigned char _padding1[2]; // offset 0x2A, size 0x2
};
// Range: 0x8039F1D0 -> 0x8039F37C
static long VerifyID(struct CARDControl * card /* r27 */) {
    // Local variables
    struct CARDID * id; // r31
    unsigned short checkSum; // r1+0xE
    unsigned short checkSumInv; // r1+0xC
    struct OSSramEx * sramEx; // r26
    long long rand; // r29
    int i; // r28

    // References
    // -> struct CARDControl __CARDBlock[2];
}

// total size: 0x40
struct CARDDirCheck {
    // Members
    unsigned char padding0[56]; // offset 0x0, size 0x38
    unsigned short padding1; // offset 0x38, size 0x2
    signed short checkCode; // offset 0x3A, size 0x2
    unsigned short checkSum; // offset 0x3C, size 0x2
    unsigned short checkSumInv; // offset 0x3E, size 0x2
};
// Range: 0x8039F37C -> 0x8039F4FC
static int VerifyDir(struct CARDControl * card /* r29 */, int * pcurrent /* r27 */) {
    // Local variables
    struct CARDDir * dir[2]; // r1+0x1C
    struct CARDDirCheck * check[2]; // r1+0x14
    unsigned short checkSum; // r1+0x12
    unsigned short checkSumInv; // r1+0x10
    int i; // r31
    int errors; // r28
    int current; // r30
}

// Range: 0x8039F4FC -> 0x8039F698
static long VerifyFAT(struct CARDControl * card /* r29 */, int * pcurrent /* r24 */) {
    // Local variables
    unsigned short * fat[2]; // r1+0x14
    unsigned short * fatp; // r28
    unsigned short nBlock; // r26
    unsigned short cFree; // r25
    int i; // r30
    unsigned short checkSum; // r1+0x12
    unsigned short checkSumInv; // r1+0x10
    int errors; // r27
    int current; // r31
}

// Range: 0x8039F698 -> 0x8039F770
long __CARDVerify(struct CARDControl * card /* r30 */) {
    // Local variables
    long result; // r29
    int errors; // r28
}

// Range: 0x8039F770 -> 0x8039FCE4
long CARDCheckExAsync(long chan /* r26 */, long * xferBytes /* r27 */, void (* callback)(long, long) /* r18 */) {
    // Local variables
    struct CARDControl * card; // r1+0x30
    struct CARDDir * dir[2]; // r1+0x28
    unsigned short * fat[2]; // r1+0x20
    unsigned short * map; // r22
    long result; // r29
    int errors; // r28
    int currentFat; // r1+0x1C
    int currentDir; // r1+0x18
    long fileNo; // r21
    unsigned short iBlock; // r31
    unsigned short cBlock; // r20
    unsigned short cFree; // r19
    int updateFat; // r17
    int updateDir; // r16
    int updateOrphan; // r25
    struct CARDDir * ent; // r24
    unsigned short nextBlock; // r23
    int enabled; // r1+0x14
}

// Range: 0x8039FCE4 -> 0x8039FD48
long CARDCheckEx(long chan /* r29 */, long * xferBytes /* r30 */) {
    // Local variables
    long result; // r31
}


