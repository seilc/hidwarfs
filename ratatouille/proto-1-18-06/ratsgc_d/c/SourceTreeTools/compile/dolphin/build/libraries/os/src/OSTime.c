/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSTime.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D7920 -> 0x803D8060
*/
// Range: 0x803D7920 -> 0x803D7938
long long OSGetTime() {}

// Range: 0x803D7938 -> 0x803D7940
unsigned long OSGetTick() {}

// Range: 0x803D7940 -> 0x803D7998
long long __OSGetSystemTime() {
    // Local variables
    int enabled; // r31
    long long * timeAdjustAddr; // r30
    long long result; // r28
}

// Range: 0x803D7998 -> 0x803D79FC
long long __OSTimeToSystemTime(long long time /* r1+0x8 */) {
    // Local variables
    int enabled; // r31
    long long * timeAdjustAddr; // r30
    long long result; // r28
}

static int YearDays[12]; // size: 0x30, address: 0x8054C948
static int LeapYearDays[12]; // size: 0x30, address: 0x8054C978
// Range: 0x803D79FC -> 0x803D7A54
static int IsLeapYear(int year /* r3 */) {}

// Range: 0x803D7A54 -> 0x803D7AF0
static int GetLeapDays(int year /* r31 */) {}

// total size: 0x28
struct OSCalendarTime {
    // Members
    int sec; // offset 0x0, size 0x4
    int min; // offset 0x4, size 0x4
    int hour; // offset 0x8, size 0x4
    int mday; // offset 0xC, size 0x4
    int mon; // offset 0x10, size 0x4
    int year; // offset 0x14, size 0x4
    int wday; // offset 0x18, size 0x4
    int yday; // offset 0x1C, size 0x4
    int msec; // offset 0x20, size 0x4
    int usec; // offset 0x24, size 0x4
};
// Range: 0x803D7AF0 -> 0x803D7BEC
static void GetDates(int days /* r31 */, struct OSCalendarTime * td /* r28 */) {
    // Local variables
    int year; // r29
    int n; // r25
    int month; // r27
    int * md; // r26

    // References
    // -> static int YearDays[12];
    // -> static int LeapYearDays[12];
}

// Range: 0x803D7BEC -> 0x803D8060
void OSTicksToCalendarTime(long long ticks /* r25 */, struct OSCalendarTime * td /* r30 */) {
    // Local variables
    int days; // r24
    int secs; // r29
    long long d; // r27
}


