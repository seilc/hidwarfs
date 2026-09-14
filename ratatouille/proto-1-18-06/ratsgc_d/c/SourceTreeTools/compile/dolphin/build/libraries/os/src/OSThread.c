/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSThread.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D5A08 -> 0x803D7920
*/
static unsigned long RunQueueBits; // size: 0x4, address: 0x80D6C148
// total size: 0x8
struct OSThreadQueue {
    // Members
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
};
static struct OSThreadQueue RunQueue[32]; // size: 0x100, address: 0x80D5B098
static int RunQueueHint; // size: 0x4, address: 0x80D6C14C
static long Reschedule; // size: 0x4, address: 0x80D6C150
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
static struct OSThread IdleThread; // size: 0x318, address: 0x80D5B198
static struct OSThread DefaultThread; // size: 0x318, address: 0x80D5B4B0
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
static struct OSContext IdleContext; // size: 0x2C8, address: 0x80D5B7C8
static void (* SwitchThreadCallback)(struct OSThread *, struct OSThread *); // size: 0x4, address: 0x80D68290
// Range: 0x803D5A08 -> 0x803D5A0C
static void DefaultSwitchThreadCallback() {}

unsigned char _stack_addr[]; // size: 0x0, address: 0x80D7AEC8
unsigned char _stack_end[]; // size: 0x0, address: 0x80D72EC4
// Range: 0x803D5A0C -> 0x803D5B7C
void __OSThreadInit() {
    // Local variables
    struct OSThread * thread; // r31
    int prio; // r29
    struct OSThread * __prev; // r28

    // References
    // -> static long Reschedule;
    // -> static struct OSContext IdleContext;
    // -> static struct OSThreadQueue RunQueue[32];
    // -> static int RunQueueHint;
    // -> static unsigned long RunQueueBits;
    // -> unsigned char _stack_end[];
    // -> unsigned char _stack_addr[];
    // -> static struct OSThread DefaultThread;
}

// Range: 0x803D5B7C -> 0x803D5BC4
static void OSSetCurrentThread(struct OSThread * thread /* r31 */) {
    // References
    // -> static void (* SwitchThreadCallback)(struct OSThread *, struct OSThread *);
}

// Range: 0x803D5BC4 -> 0x803D5BD4
static void OSInitMutexQueue(struct OSMutexQueue * queue /* r3 */) {}

// Range: 0x803D5BD4 -> 0x803D5BE4
void OSInitThreadQueue(struct OSThreadQueue * queue /* r3 */) {}

// Range: 0x803D5BE4 -> 0x803D5BF0
struct OSThread * OSGetCurrentThread() {}

// Range: 0x803D5BF0 -> 0x803D5C30
static void __OSSwitchThread(struct OSThread * nextThread /* r31 */) {}

// Range: 0x803D5C30 -> 0x803D5C4C
int OSIsThreadSuspended(struct OSThread * thread /* r3 */) {}

// Range: 0x803D5C4C -> 0x803D5CA0
static int __OSIsThreadActive(struct OSThread * thread /* r3 */) {
    // Local variables
    struct OSThread * active; // r31
}

// Range: 0x803D5CA0 -> 0x803D5CE4
long OSDisableScheduler() {
    // Local variables
    int enabled; // r31
    long count; // r30

    // References
    // -> static long Reschedule;
}

// Range: 0x803D5CE4 -> 0x803D5D28
long OSEnableScheduler() {
    // Local variables
    int enabled; // r31
    long count; // r30

    // References
    // -> static long Reschedule;
}

// Range: 0x803D5D28 -> 0x803D5E38
static void SetRun(struct OSThread * thread /* r31 */) {
    // Local variables
    struct OSThread * __prev; // r29

    // References
    // -> static int RunQueueHint;
    // -> static unsigned long RunQueueBits;
    // -> static struct OSThreadQueue RunQueue[32];
}

// Range: 0x803D5E38 -> 0x803D5F54
static void UnsetRun(struct OSThread * thread /* r31 */) {
    // Local variables
    struct OSThreadQueue * queue; // r27
    struct OSThread * __next; // r29
    struct OSThread * __prev; // r28

    // References
    // -> static unsigned long RunQueueBits;
    // -> static struct OSThreadQueue RunQueue[32];
}

// Range: 0x803D5F54 -> 0x803D5FA0
long __OSGetEffectivePriority(struct OSThread * thread /* r3 */) {
    // Local variables
    long priority; // r30
    struct OSMutex * mutex; // r31
    struct OSThread * blocked; // r29
}

// Range: 0x803D5FA0 -> 0x803D6164
static struct OSThread * SetEffectivePriority(struct OSThread * thread /* r31 */, long priority /* r24 */) {
    // Local variables
    struct OSThread * __next; // r29
    struct OSThread * __prev; // r28
    struct OSThread * __prev; // r26
    struct OSThread * __next; // r30
    struct OSThread * __prev; // r25

    // References
    // -> static int RunQueueHint;
}

// Range: 0x803D6164 -> 0x803D61C8
static void UpdatePriority(struct OSThread * thread /* r31 */) {
    // Local variables
    long priority; // r30
}

// Range: 0x803D61C8 -> 0x803D63B0
static struct OSThread * SelectThread(int yield /* r1+0x8 */) {
    // Local variables
    struct OSContext * currentContext; // r24
    struct OSThread * currentThread; // r31
    struct OSThread * nextThread; // r29
    long priority; // r30
    struct OSThreadQueue * queue; // r28
    struct OSThread * __next; // r26

    // References
    // -> static unsigned long RunQueueBits;
    // -> static struct OSThreadQueue RunQueue[32];
    // -> static int RunQueueHint;
    // -> static struct OSContext IdleContext;
    // -> static long Reschedule;
}

// Range: 0x803D63B0 -> 0x803D63E0
void __OSReschedule() {
    // References
    // -> static int RunQueueHint;
}

// Range: 0x803D63E0 -> 0x803D641C
void OSYieldThread() {
    // Local variables
    int enabled; // r31
}

void (* __OSErrorTable[])(unsigned short, struct OSContext *); // size: 0x0, address: 0x80D5AFF0
unsigned long __OSFpscrEnableBits; // size: 0x4, address: 0x80D681F0
// Range: 0x803D641C -> 0x803D6670
int OSCreateThread(struct OSThread * thread /* r31 */, void * (* func)(void *) /* r1+0xC */, void * param /* r1+0x10 */, void * stack /* r25 */, unsigned long stackSize /* r1+0x18 */, long priority /* r28 */, unsigned short attr /* r1+0x20 */) {
    // Local variables
    int enabled; // r24
    unsigned long sp; // r29
    int i; // r30
    struct OSThread * __prev; // r26

    // References
    // -> unsigned long __OSFpscrEnableBits;
    // -> void (* __OSErrorTable[])(unsigned short, struct OSContext *);
}

// Range: 0x803D6670 -> 0x803D67A4
void OSExitThread(void * val /* r1+0x8 */) {
    // Local variables
    int enabled; // r27
    struct OSThread * currentThread; // r31
    struct OSThread * __next; // r29
    struct OSThread * __prev; // r28

    // References
    // -> static int RunQueueHint;
}

// Range: 0x803D67A4 -> 0x803D6978
void OSCancelThread(struct OSThread * thread /* r31 */) {
    // Local variables
    int enabled; // r25
    struct OSThread * __next; // r30
    struct OSThread * __prev; // r29
    struct OSThread * __next; // r28
    struct OSThread * __prev; // r27

    // References
    // -> static int RunQueueHint;
}

// Range: 0x803D6978 -> 0x803D6B90
long OSResumeThread(struct OSThread * thread /* r31 */) {
    // Local variables
    int enabled; // r24
    long suspendCount; // r23
    struct OSThread * __next; // r28
    struct OSThread * __prev; // r27
    struct OSThread * __prev; // r26
    struct OSThread * __next; // r30
    struct OSThread * __prev; // r25
}

// Range: 0x803D6B90 -> 0x803D6D40
long OSSuspendThread(struct OSThread * thread /* r31 */) {
    // Local variables
    int enabled; // r25
    long suspendCount; // r26
    struct OSThread * __next; // r29
    struct OSThread * __prev; // r28
    struct OSThread * __prev; // r27

    // References
    // -> static int RunQueueHint;
}

// Range: 0x803D6D40 -> 0x803D6EB4
void OSSleepThread(struct OSThreadQueue * queue /* r28 */) {
    // Local variables
    int enabled; // r25
    struct OSThread * currentThread; // r31
    struct OSThread * __prev; // r27
    struct OSThread * __next; // r30
    struct OSThread * __prev; // r26

    // References
    // -> static int RunQueueHint;
}

// Range: 0x803D6EB4 -> 0x803D6FB4
void OSWakeupThread(struct OSThreadQueue * queue /* r29 */) {
    // Local variables
    int enabled; // r27
    struct OSThread * thread; // r31
    struct OSThread * __next; // r28
}

// Range: 0x803D6FB4 -> 0x803D70A0
int OSSetThreadPriority(struct OSThread * thread /* r31 */, long priority /* r29 */) {
    // Local variables
    int enabled; // r28
}

// Range: 0x803D70A0 -> 0x803D70A8
long OSGetThreadPriority(struct OSThread * thread /* r3 */) {}

// Range: 0x803D70A8 -> 0x803D717C
static int CheckThreadQueue(struct OSThreadQueue * queue /* r3 */) {
    // Local variables
    struct OSThread * thread; // r31
}

// Range: 0x803D717C -> 0x803D71B8
static int IsMember(struct OSThreadQueue * queue /* r3 */, struct OSThread * thread /* r4 */) {
    // Local variables
    struct OSThread * member; // r31
}

// Range: 0x803D71B8 -> 0x803D78BC
long OSCheckActiveThreads() {
    // Local variables
    struct OSThread * thread; // r30
    long prio; // r29
    long cThread; // r27
    int enabled; // r26

    // References
    // -> static struct OSThreadQueue RunQueue[32];
    // -> static unsigned long RunQueueBits;
}

// Range: 0x803D78BC -> 0x803D7920
void OSClearStack(unsigned char val /* r28 */) {
    // Local variables
    unsigned long sp; // r30
    unsigned long * p; // r31
    unsigned long pattern; // r29
}


