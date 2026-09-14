/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSAlarm.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803CEDB4 -> 0x803CF91C
*/
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
// total size: 0x8
struct OSAlarmQueue {
    // Members
    struct OSAlarm * head; // offset 0x0, size 0x4
    struct OSAlarm * tail; // offset 0x4, size 0x4
};
static struct OSAlarmQueue AlarmQueue; // size: 0x8, address: 0x80D6C0B8
// total size: 0x10
struct OSResetFunctionInfo {
    // Members
    int (* func)(int); // offset 0x0, size 0x4
    unsigned long priority; // offset 0x4, size 0x4
    struct OSResetFunctionInfo * next; // offset 0x8, size 0x4
    struct OSResetFunctionInfo * prev; // offset 0xC, size 0x4
};
static struct OSResetFunctionInfo ResetFunctionInfo; // size: 0x10, address: 0x80548F40
// Range: 0x803CEDB4 -> 0x803CEF48
int OSCheckAlarmQueue() {
    // Local variables
    struct OSAlarm * alarm; // r31

    // References
    // -> static struct OSAlarmQueue AlarmQueue;
}

// Range: 0x803CEF48 -> 0x803CEFF4
static void SetTimer(struct OSAlarm * alarm /* r1+0x8 */) {
    // Local variables
    long long delta; // r30
}

// Range: 0x803CEFF4 -> 0x803CF054
void OSInitAlarm() {
    // References
    // -> static struct OSResetFunctionInfo ResetFunctionInfo;
    // -> static struct OSAlarmQueue AlarmQueue;
}

// Range: 0x803CF054 -> 0x803CF068
void OSCreateAlarm(struct OSAlarm * alarm /* r3 */) {}

// Range: 0x803CF068 -> 0x803CF254
static void InsertAlarm(struct OSAlarm * alarm /* r31 */, long long fire /* r26 */, void (* handler)(struct OSAlarm *, struct OSContext *) /* r1+0x18 */) {
    // Local variables
    struct OSAlarm * next; // r30
    struct OSAlarm * prev; // r29
    long long time; // r24

    // References
    // -> static struct OSAlarmQueue AlarmQueue;
}

// Range: 0x803CF254 -> 0x803CF33C
void OSSetAlarm(struct OSAlarm * alarm /* r26 */, long long tick /* r27 */, void (* handler)(struct OSAlarm *, struct OSContext *) /* r29 */) {
    // Local variables
    int enabled; // r30
}

// Range: 0x803CF33C -> 0x803CF434
void OSSetPeriodicAlarm(struct OSAlarm * alarm /* r30 */, long long start /* r1+0x10 */, long long period /* r26 */, void (* handler)(struct OSAlarm *, struct OSContext *) /* r28 */) {
    // Local variables
    int enabled; // r29
}

// Range: 0x803CF434 -> 0x803CF504
void OSCancelAlarm(struct OSAlarm * alarm /* r30 */) {
    // Local variables
    struct OSAlarm * next; // r31
    int enabled; // r29

    // References
    // -> static struct OSAlarmQueue AlarmQueue;
}

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
// Range: 0x803CF504 -> 0x803CF698
static void DecrementerExceptionCallback(struct OSContext * context /* r30 */) {
    // Local variables
    struct OSAlarm * alarm; // r31
    struct OSAlarm * next; // r28
    void (* handler)(struct OSAlarm *, struct OSContext *); // r27
    long long time; // r25
    struct OSContext exceptionContext; // r1+0x10

    // References
    // -> static struct OSAlarmQueue AlarmQueue;
}

// Range: 0x803CF698 -> 0x803CF6E8
static void DecrementerExceptionHandler(unsigned char exception /* r3 */, struct OSContext * context /* r4 */) {}

// Range: 0x803CF6E8 -> 0x803CF6F0
void OSSetAlarmTag(struct OSAlarm * alarm /* r3 */, unsigned long tag /* r4 */) {}

// Range: 0x803CF6F0 -> 0x803CF820
void OSCancelAlarms(unsigned long tag /* r28 */) {
    // Local variables
    int enabled; // r27
    struct OSAlarm * alarm; // r31
    struct OSAlarm * next; // r29

    // References
    // -> static struct OSAlarmQueue AlarmQueue;
}

// Range: 0x803CF820 -> 0x803CF91C
static int OnReset(int final /* r1+0x8 */) {
    // Local variables
    struct OSAlarm * alarm; // r31
    struct OSAlarm * next; // r29

    // References
    // -> static struct OSAlarmQueue AlarmQueue;
}


