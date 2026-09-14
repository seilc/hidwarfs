/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iAsync.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80108474 -> 0x801087C0
*/
// total size: 0x8
struct RwLLLink {
    // Members
    struct RwLLLink * next; // offset 0x0, size 0x4
    struct RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLinkList {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
};
struct RwLinkList asyncDirtyFrameList; // size: 0x8, address: 0x80D69A20
unsigned char asyncThreadDone; // size: 0x1, address: 0x80D615A8
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
struct OSThreadQueue {
    // Members
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
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
struct OSThread asyncThread; // size: 0x318, address: 0x80BA9228
static unsigned char ThreadStack[8192]; // size: 0x2000, address: 0x80BA9540
unsigned int asyncStartFrame; // size: 0x4, address: 0x80D69A28
// total size: 0xC
struct OSSemaphore {
    // Members
    long count; // offset 0x0, size 0x4
    struct OSThreadQueue queue; // offset 0x4, size 0x8
};
struct OSSemaphore asyncSema; // size: 0xC, address: 0x80D69A2C
unsigned char needToLock; // size: 0x1, address: 0x80D69A38
static char __FUNCTION__[12]; // size: 0xC, address: 0x80D615A9
unsigned int gFrameCount; // size: 0x4, address: 0x80D68CE8
// Range: 0x80108474 -> 0x801085B0
void iAsyncStart(void * (* func)(void *) /* r30 */) {
    // References
    // -> static char __FUNCTION__[12];
    // -> static unsigned char ThreadStack[8192];
    // -> struct OSThread asyncThread;
    // -> unsigned char needToLock;
    // -> struct OSSemaphore asyncSema;
    // -> unsigned char asyncThreadDone;
    // -> struct RwLinkList asyncDirtyFrameList;
    // -> unsigned int gFrameCount;
    // -> unsigned int asyncStartFrame;
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D615B5
// Range: 0x801085B0 -> 0x80108640
int iAsyncIsDone() {
    // References
    // -> unsigned char asyncThreadDone;
    // -> static char __FUNCTION__[13];
    // -> static unsigned char ThreadStack[8192];
}

// Range: 0x80108640 -> 0x8010867C
void iAsyncTerminate() {
    // References
    // -> unsigned char needToLock;
    // -> unsigned char asyncThreadDone;
}

// Range: 0x8010867C -> 0x801086A4
void iAsyncBeginUpdate() {}

// Range: 0x801086A4 -> 0x801086D0
void iAsyncEndUpdate() {}

// Range: 0x801086D0 -> 0x80108724
void iAsyncSuspend() {
    // References
    // -> struct OSThread asyncThread;
    // -> unsigned char asyncThreadDone;
}

// Range: 0x80108724 -> 0x8010876C
void iAsyncResume() {
    // References
    // -> struct OSThread asyncThread;
    // -> unsigned char asyncThreadDone;
}

// Range: 0x8010876C -> 0x801087C0
void iAsyncEnd() {
    // References
    // -> struct OSThread asyncThread;
    // -> unsigned char asyncThreadDone;
}


