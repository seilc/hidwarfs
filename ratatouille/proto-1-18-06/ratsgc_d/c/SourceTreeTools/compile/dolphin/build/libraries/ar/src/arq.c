/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\ar\src\arq.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x80395EBC -> 0x80396374
*/
const char * __ARQVersion; // size: 0x4, address: 0x80D67FB8
// total size: 0x20
struct ARQRequest {
    // Members
    struct ARQRequest * next; // offset 0x0, size 0x4
    unsigned long owner; // offset 0x4, size 0x4
    unsigned long type; // offset 0x8, size 0x4
    unsigned long priority; // offset 0xC, size 0x4
    unsigned long source; // offset 0x10, size 0x4
    unsigned long dest; // offset 0x14, size 0x4
    unsigned long length; // offset 0x18, size 0x4
    void (* callback)(unsigned long); // offset 0x1C, size 0x4
};
static struct ARQRequest * __ARQRequestQueueHi; // size: 0x4, address: 0x80D6BD40
static struct ARQRequest * __ARQRequestTailHi; // size: 0x4, address: 0x80D6BD44
static struct ARQRequest * __ARQRequestQueueLo; // size: 0x4, address: 0x80D6BD48
static struct ARQRequest * __ARQRequestTailLo; // size: 0x4, address: 0x80D6BD4C
static struct ARQRequest * __ARQRequestPendingHi; // size: 0x4, address: 0x80D6BD50
static struct ARQRequest * __ARQRequestPendingLo; // size: 0x4, address: 0x80D6BD54
static void (* __ARQCallbackHi)(unsigned long); // size: 0x4, address: 0x80D6BD58
static void (* __ARQCallbackLo)(unsigned long); // size: 0x4, address: 0x80D6BD5C
static unsigned long __ARQChunkSize; // size: 0x4, address: 0x80D6BD60
static int __ARQ_init_flag; // size: 0x4, address: 0x80D6BD64
// Range: 0x80395EBC -> 0x80395F60
void __ARQPopTaskQueueHi() {
    // References
    // -> static struct ARQRequest * __ARQRequestQueueHi;
    // -> static struct ARQRequest * __ARQRequestPendingHi;
    // -> static void (* __ARQCallbackHi)(unsigned long);
}

// Range: 0x80395F60 -> 0x803960C4
void __ARQServiceQueueLo() {
    // References
    // -> static unsigned long __ARQChunkSize;
    // -> static struct ARQRequest * __ARQRequestPendingLo;
    // -> static void (* __ARQCallbackLo)(unsigned long);
    // -> static struct ARQRequest * __ARQRequestQueueLo;
}

// Range: 0x803960C4 -> 0x803960C8
void __ARQCallbackHack() {}

// Range: 0x803960C8 -> 0x80396154
void __ARQInterruptServiceRoutine() {
    // References
    // -> static struct ARQRequest * __ARQRequestPendingHi;
    // -> static void (* __ARQCallbackLo)(unsigned long);
    // -> static struct ARQRequest * __ARQRequestPendingLo;
    // -> static void (* __ARQCallbackHi)(unsigned long);
}

// Range: 0x80396154 -> 0x803961CC
void ARQInit() {
    // References
    // -> static int __ARQ_init_flag;
    // -> static void (* __ARQCallbackLo)(unsigned long);
    // -> static void (* __ARQCallbackHi)(unsigned long);
    // -> static struct ARQRequest * __ARQRequestPendingLo;
    // -> static struct ARQRequest * __ARQRequestPendingHi;
    // -> static unsigned long __ARQChunkSize;
    // -> static struct ARQRequest * __ARQRequestQueueLo;
    // -> static struct ARQRequest * __ARQRequestQueueHi;
    // -> const char * __ARQVersion;
}

// Range: 0x803961CC -> 0x80396374
void ARQPostRequest(struct ARQRequest * request /* r31 */, unsigned long owner /* r1+0xC */, unsigned long type /* r28 */, unsigned long priority /* r29 */, unsigned long source /* r1+0x18 */, unsigned long dest /* r1+0x1C */, unsigned long length /* r25 */, void (* callback)(unsigned long) /* r26 */) {
    // Local variables
    int level; // r27

    // References
    // -> static struct ARQRequest * __ARQRequestPendingHi;
    // -> static struct ARQRequest * __ARQRequestPendingLo;
    // -> static struct ARQRequest * __ARQRequestTailHi;
    // -> static struct ARQRequest * __ARQRequestQueueHi;
    // -> static struct ARQRequest * __ARQRequestTailLo;
    // -> static struct ARQRequest * __ARQRequestQueueLo;
}


