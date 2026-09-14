/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\dvd\src\dvdqueue.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803A8500 -> 0x803A881C
*/
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
// total size: 0x30
struct DVDCommandBlock {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
static // total size: 0x8
struct {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
} WaitingQueue[4]; // size: 0x20, address: 0x80D579B8
// Range: 0x803A8500 -> 0x803A8540
void __DVDClearWaitingQueue() {
    // Local variables
    unsigned long i; // r30
    struct DVDCommandBlock * q; // r31

    // References
    // -> static struct [anonymous] WaitingQueue[4];
}

// Range: 0x803A8540 -> 0x803A85AC
int __DVDPushWaitingQueue(long prio /* r1+0x8 */, struct DVDCommandBlock * block /* r30 */) {
    // Local variables
    int enabled; // r29
    struct DVDCommandBlock * q; // r31

    // References
    // -> static struct [anonymous] WaitingQueue[4];
}

// Range: 0x803A85AC -> 0x803A8648
static struct DVDCommandBlock * PopWaitingQueuePrio(long prio /* r1+0x8 */) {
    // Local variables
    struct DVDCommandBlock * tmp; // r31
    int enabled; // r29
    struct DVDCommandBlock * q; // r30

    // References
    // -> static struct [anonymous] WaitingQueue[4];
}

// Range: 0x803A8648 -> 0x803A86C4
struct DVDCommandBlock * __DVDPopWaitingQueue() {
    // Local variables
    unsigned long i; // r31
    int enabled; // r30
    struct DVDCommandBlock * q; // r29

    // References
    // -> static struct [anonymous] WaitingQueue[4];
}

// Range: 0x803A86C4 -> 0x803A873C
int __DVDCheckWaitingQueue() {
    // Local variables
    unsigned long i; // r31
    int enabled; // r30
    struct DVDCommandBlock * q; // r29

    // References
    // -> static struct [anonymous] WaitingQueue[4];
}

// Range: 0x803A873C -> 0x803A87B0
int __DVDDequeueWaitingQueue(struct DVDCommandBlock * block /* r28 */) {
    // Local variables
    int enabled; // r29
    struct DVDCommandBlock * prev; // r31
    struct DVDCommandBlock * next; // r30
}

// Range: 0x803A87B0 -> 0x803A881C
int __DVDIsBlockInWaitingQueue(struct DVDCommandBlock * block /* r3 */) {
    // Local variables
    unsigned long i; // r29
    struct DVDCommandBlock * start; // r31
    struct DVDCommandBlock * q; // r30

    // References
    // -> static struct [anonymous] WaitingQueue[4];
}


