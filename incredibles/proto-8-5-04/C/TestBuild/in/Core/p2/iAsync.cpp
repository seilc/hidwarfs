/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int asyncThread; // size: 0x4, address: 0x6090D8
static signed int asyncVsyncHandlerID; // size: 0x4, address: 0x6090DC
unsigned char asyncThreadDone; // size: 0x1, address: 0x607C8C
signed int asyncSema; // size: 0x4, address: 0x0
static unsigned char asyncStack[8192]; // size: 0x2000, address: 0x69A230
static signed int poo; // size: 0x4, address: 0x0
signed int asyncVsyncHandler(signed int); // size: 0x0, address: 0x31AA90
void * _gp; // size: 0x4, address: 0x60F4F0
// total size: 0x30
class ThreadParam {
    // Members
public:
    signed int status; // offset 0x0, size 0x4
    void (* entry)(void *); // offset 0x4, size 0x4
    void * stack; // offset 0x8, size 0x4
    signed int stackSize; // offset 0xC, size 0x4
    void * gpReg; // offset 0x10, size 0x4
    signed int initPriority; // offset 0x14, size 0x4
    signed int currentPriority; // offset 0x18, size 0x4
    unsigned int attr; // offset 0x1C, size 0x4
    unsigned int option; // offset 0x20, size 0x4
    signed int waitType; // offset 0x24, size 0x4
    signed int waitId; // offset 0x28, size 0x4
    signed int wakeupCount; // offset 0x2C, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031A900 -> 0x0031A928
*/
// Range: 0x31A900 -> 0x31A928
void iAsyncEndUpdate() {
    /* anonymous block */ {
        // Range: 0x31A900 -> 0x31A928
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031A930 -> 0x0031A93C
*/
// Range: 0x31A930 -> 0x31A93C
void iAsyncBeginUpdate() {
    /* anonymous block */ {
        // Range: 0x31A930 -> 0x31A93C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031A940 -> 0x0031A9B4
*/
// Range: 0x31A940 -> 0x31A9B4
void iAsyncAdjustPriority() {
    /* anonymous block */ {
        // Range: 0x31A940 -> 0x31A9B4
        class ThreadParam threadParams; // r29+0x30
        signed int threadID; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031A9C0 -> 0x0031A9F0
*/
// Range: 0x31A9C0 -> 0x31A9F0
void iAsyncEnd() {
    /* anonymous block */ {
        // Range: 0x31A9C0 -> 0x31A9F0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031A9F0 -> 0x0031A9FC
*/
// Range: 0x31A9F0 -> 0x31A9FC
void iAsyncTerminate() {
    /* anonymous block */ {
        // Range: 0x31A9F0 -> 0x31A9FC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031AA00 -> 0x0031AA08
*/
// Range: 0x31AA00 -> 0x31AA08
signed int iAsyncIsDone() {
    /* anonymous block */ {
        // Range: 0x31AA00 -> 0x31AA08
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031AA10 -> 0x0031AA84
*/
// Range: 0x31AA10 -> 0x31AA84
void iAsyncStart(void (* func)(void *) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31AA10 -> 0x31AA84
        class ThreadParam threadParams; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031AA90 -> 0x0031AAB8
*/
// Range: 0x31AA90 -> 0x31AAB8
static signed int asyncVsyncHandler() {
    /* anonymous block */ {
        // Range: 0x31AA90 -> 0x31AAB8
    }
}


