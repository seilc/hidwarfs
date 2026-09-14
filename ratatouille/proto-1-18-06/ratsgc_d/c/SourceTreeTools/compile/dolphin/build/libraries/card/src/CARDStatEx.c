/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\card\src\CARDStatEx.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803A2A28 -> 0x803A2EBC
*/
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
// Range: 0x803A2A28 -> 0x803A2B28
long __CARDGetStatusEx(long chan /* r27 */, long fileNo /* r29 */, struct CARDDir * dirent /* r1+0x10 */) {
    // Local variables
    struct CARDControl * card; // r1+0x14
    struct CARDDir * dir; // r26
    struct CARDDir * ent; // r28
    long result; // r30
}

// Range: 0x803A2B28 -> 0x803A2EBC
long __CARDSetStatusExAsync(long chan /* r23 */, long fileNo /* r26 */, struct CARDDir * dirent /* r31 */, void (* callback)(long, long) /* r1+0x14 */) {
    // Local variables
    struct CARDControl * card; // r1+0x18
    struct CARDDir * dir; // r22
    struct CARDDir * ent; // r30
    long result; // r28
    unsigned char * p; // r27
    long i; // r25
    struct CARDDir * ent; // r24
}


