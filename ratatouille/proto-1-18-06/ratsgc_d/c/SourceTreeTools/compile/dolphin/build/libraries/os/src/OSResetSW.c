/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSResetSW.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D49A4 -> 0x803D4EBC
*/
static void (* ResetCallback)(); // size: 0x4, address: 0x80D6C128
static int Down; // size: 0x4, address: 0x80D6C12C
static int LastState; // size: 0x4, address: 0x80D6C130
static long long HoldUp; // size: 0x8, address: 0x80D6C138
static long long HoldDown; // size: 0x8, address: 0x80D6C140
// Range: 0x803D49A4 -> 0x803D4A8C
void __OSResetSWInterruptHandler() {
    // Local variables
    void (* callback)(); // r31

    // References
    // -> static void (* ResetCallback)();
    // -> static int Down;
    // -> static int LastState;
    // -> static long long HoldDown;
}

// Range: 0x803D4A8C -> 0x803D4AF8
void (* OSSetResetCallback(void (* callback)() /* r29 */))() {
    // Local variables
    int enabled; // r31
    void (* prevCallback)(); // r30

    // References
    // -> static void (* ResetCallback)();
}

long long __OSStartTime; // size: 0x8, address: 0x80D6C0B0
// Range: 0x803D4AF8 -> 0x803D4EBC
int OSGetResetButtonState() {
    // Local variables
    int enabled; // r25
    int state; // r29
    unsigned long reg; // r24
    long long now; // r30
    long long fire; // r26

    // References
    // -> long long __OSStartTime;
    // -> static int LastState;
    // -> static long long HoldUp;
    // -> static int Down;
    // -> static long long HoldDown;
}


