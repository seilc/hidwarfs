/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int asyncThread; // size: 0x4, address: 0x6124F0
static signed int asyncVsyncHandlerID; // size: 0x4, address: 0x6124F4
unsigned char asyncThreadDone; // size: 0x1, address: 0x611094
signed int asyncSema; // size: 0x4, address: 0x0
static unsigned char asyncStack[8192]; // size: 0x2000, address: 0x6916B0
static signed int poo; // size: 0x4, address: 0x0
signed int asyncVsyncHandler(signed int); // size: 0x0, address: 0x3206D0
void * _gp; // size: 0x4, address: 0x6188F0
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
    Code range: 0x00320540 -> 0x00320568
*/
// Range: 0x320540 -> 0x320568
void iAsyncEndUpdate() {
    /* anonymous block */ {
        // Range: 0x320540 -> 0x320568
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320570 -> 0x0032057C
*/
// Range: 0x320570 -> 0x32057C
void iAsyncBeginUpdate() {
    /* anonymous block */ {
        // Range: 0x320570 -> 0x32057C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320580 -> 0x003205F4
*/
// Range: 0x320580 -> 0x3205F4
void iAsyncAdjustPriority() {
    /* anonymous block */ {
        // Range: 0x320580 -> 0x3205F4
        class ThreadParam threadParams; // r29+0x30
        signed int threadID; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320600 -> 0x00320630
*/
// Range: 0x320600 -> 0x320630
void iAsyncEnd() {
    /* anonymous block */ {
        // Range: 0x320600 -> 0x320630
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320630 -> 0x0032063C
*/
// Range: 0x320630 -> 0x32063C
void iAsyncTerminate() {
    /* anonymous block */ {
        // Range: 0x320630 -> 0x32063C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320640 -> 0x00320648
*/
// Range: 0x320640 -> 0x320648
signed int iAsyncIsDone() {
    /* anonymous block */ {
        // Range: 0x320640 -> 0x320648
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320650 -> 0x003206C4
*/
// Range: 0x320650 -> 0x3206C4
void iAsyncStart(void (* func)(void *) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x320650 -> 0x3206C4
        class ThreadParam threadParams; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAsync.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003206D0 -> 0x003206F8
*/
// Range: 0x3206D0 -> 0x3206F8
static signed int asyncVsyncHandler() {
    /* anonymous block */ {
        // Range: 0x3206D0 -> 0x3206F8
    }
}


