/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\ax\src\AXOut.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803976FC -> 0x80397D40
*/
static signed short __AXOutBuffer[3][320]; // size: 0x780, address: 0x80D41320
static long __AXOutSBuffer[160]; // size: 0x280, address: 0x80D41AA0
static unsigned long __AXOutFrame; // size: 0x4, address: 0x80D6BDC0
static unsigned long __AXAiDmaFrame; // size: 0x4, address: 0x80D6BDC4
static unsigned long __AXOutDspReady; // size: 0x4, address: 0x80D6BDC8
static long long __AXOsTime; // size: 0x8, address: 0x80D6BDD0
static void (* __AXUserFrameCallback)(); // size: 0x4, address: 0x80D6BDD8
static int __AXDSPInitFlag; // size: 0x4, address: 0x80D6BDDC
static int __AXDSPDoneFlag; // size: 0x4, address: 0x80D6BDE0
static unsigned long __AXDebugSteppingMode; // size: 0x4, address: 0x80D6BDE4
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
static struct OSThreadQueue __AXOutThreadQueue; // size: 0x8, address: 0x80D6BDE8
static unsigned long __AXOutputBufferMode; // size: 0x4, address: 0x80D6BDF0
static unsigned short __AXDramImage[8192]; // size: 0x4000, address: 0x80D41D20
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
static struct STRUCT_DSP_TASK __AXDSPTask; // size: 0x50, address: 0x80D45D20
// total size: 0x38
struct _AXPROFILE {
    // Members
    long long axFrameStart; // offset 0x0, size 0x8
    long long auxProcessingStart; // offset 0x8, size 0x8
    long long auxProcessingEnd; // offset 0x10, size 0x8
    long long userCallbackStart; // offset 0x18, size 0x8
    long long userCallbackEnd; // offset 0x20, size 0x8
    long long axFrameEnd; // offset 0x28, size 0x8
    unsigned long axNumVoices; // offset 0x30, size 0x4
    unsigned long __padding; // offset 0x34, size 0x4
};
struct _AXPROFILE __AXLocalProfile; // size: 0x38, address: 0x80D45D70
// Range: 0x803976FC -> 0x80397880
void __AXOutNewFrame(unsigned long lessDspCycles /* r1+0x8 */) {
    // Local variables
    unsigned long cl; // r26
    struct _AXPROFILE * profile; // r30
    unsigned char * src; // r29
    unsigned char * dest; // r28
    unsigned long i; // r27

    // References
    // -> struct _AXPROFILE __AXLocalProfile;
    // -> static unsigned long __AXOutFrame;
    // -> static signed short __AXOutBuffer[3][320];
    // -> static unsigned long __AXOutputBufferMode;
    // -> static long __AXOutSBuffer[160];
    // -> static void (* __AXUserFrameCallback)();
}

// Range: 0x80397880 -> 0x80397934
void __AXOutAiCallback() {
    // References
    // -> static unsigned long __AXAiDmaFrame;
    // -> static signed short __AXOutBuffer[3][320];
    // -> static unsigned long __AXOutputBufferMode;
    // -> static struct STRUCT_DSP_TASK __AXDSPTask;
    // -> static unsigned long __AXOutDspReady;
    // -> static long long __AXOsTime;
}

// Range: 0x80397934 -> 0x80397940
static void __AXDSPInitCallback() {
    // References
    // -> static int __AXDSPInitFlag;
}

// Range: 0x80397940 -> 0x803979AC
static void __AXDSPResumeCallback() {
    // References
    // -> static unsigned long __AXOutDspReady;
    // -> static long long __AXOsTime;
    // -> static unsigned long __AXDebugSteppingMode;
}

// Range: 0x803979AC -> 0x803979D8
static void __AXDSPDoneCallback() {
    // References
    // -> static struct OSThreadQueue __AXOutThreadQueue;
    // -> static int __AXDSPDoneFlag;
}

unsigned short axDspSlave[]; // size: 0x0, address: 0x80538480
unsigned short axDspSlaveLength; // size: 0x2, address: 0x80D67FE8
// Range: 0x803979D8 -> 0x80397AB8
void __AXOutInitDSP() {
    // References
    // -> static int __AXDSPInitFlag;
    // -> static struct STRUCT_DSP_TASK __AXDSPTask;
    // -> static struct OSThreadQueue __AXOutThreadQueue;
    // -> static int __AXDSPDoneFlag;
    // -> static unsigned short __AXDramImage[8192];
    // -> unsigned short axDspSlaveLength;
    // -> unsigned short axDspSlave[];
}

// Range: 0x80397AB8 -> 0x80397C94
void __AXOutInit(unsigned long outputBufferMode /* r1+0x8 */) {
    // Local variables
    unsigned long * p; // r29
    int i; // r28
    unsigned long * p; // r27
    int i; // r26

    // References
    // -> static unsigned long __AXOutFrame;
    // -> static signed short __AXOutBuffer[3][320];
    // -> static unsigned long __AXAiDmaFrame;
    // -> static unsigned long __AXOutputBufferMode;
    // -> static void (* __AXUserFrameCallback)();
    // -> static unsigned long __AXOutDspReady;
    // -> static long __AXOutSBuffer[160];
    // -> static unsigned long __AXDebugSteppingMode;
}

// Range: 0x80397C94 -> 0x80397CF8
void __AXOutQuit() {
    // Local variables
    int old; // r31

    // References
    // -> static struct OSThreadQueue __AXOutThreadQueue;
    // -> static struct STRUCT_DSP_TASK __AXDSPTask;
    // -> static void (* __AXUserFrameCallback)();
}

// Range: 0x80397CF8 -> 0x80397D40
void (* AXRegisterCallback(void (* callback)() /* r1+0x8 */))() {
    // Local variables
    int enabled; // r31
    void (* oldCB)(); // r30

    // References
    // -> static void (* __AXUserFrameCallback)();
}


