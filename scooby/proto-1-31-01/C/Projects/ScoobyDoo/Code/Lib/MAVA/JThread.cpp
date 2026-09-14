/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JThread.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int ExecutionThreadLvPool[480]; // size: 0x780, address: 0xB10FF0
static unsigned int ExecutionThreadOpStackPool[480]; // size: 0x780, address: 0xB11770
static signed int lvPoolMap[120]; // size: 0x1E0, address: 0xB11EF0
static signed int lvLastFree; // size: 0x4, address: 0x4A4FD0
static signed int opPoolMap[120]; // size: 0x1E0, address: 0xB120D0
static signed int opLastFree; // size: 0x4, address: 0x4A4FD4
signed int currentLvCount; // size: 0x4, address: 0x4A4FD8
signed int currentOpCount; // size: 0x4, address: 0x4A4FDC
signed int maxLvCount; // size: 0x4, address: 0x4A4FE0
signed int maxOpCount; // size: 0x4, address: 0x4A4FE4
signed int jumpBuffer[11]; // size: 0x2C, address: 0xB06DD0
signed int jumpBuffer[11]; // size: 0x2C, address: 0xB06DD0
signed int jumpBuffer[11]; // size: 0x2C, address: 0xB06DD0
signed int jumpBuffer[11]; // size: 0x2C, address: 0xB06DD0
// total size: 0x18
class JExecutableMethod {
    // Members
public:
    unsigned short methodNameIndex; // offset 0x0, size 0x2
    unsigned short descriptorIndex; // offset 0x2, size 0x2
    unsigned short accessFlags; // offset 0x4, size 0x2
    signed char parameterWordCount; // offset 0x6, size 0x1
    signed char isExternal; // offset 0x7, size 0x1
    unsigned short specialFunctionFlags; // offset 0x8, size 0x2
    signed short executableClassIndex; // offset 0xA, size 0x2
    signed short externalRecordIndex; // offset 0xC, size 0x2
    unsigned short maxStack; // offset 0xE, size 0x2
    unsigned short maxLocals; // offset 0x10, size 0x2
    unsigned short codeLength; // offset 0x12, size 0x2
    signed int codeIndexInPool; // offset 0x14, size 0x4
};
// total size: 0x20
class ExecutionFrame {
    // Members
public:
    class JExecutableMethod * theMethod; // offset 0x0, size 0x4
    unsigned char * pc8; // offset 0x4, size 0x4
    unsigned char * origPc8; // offset 0x8, size 0x4
    unsigned int * lvPool; // offset 0xC, size 0x4
    unsigned int * opTop; // offset 0x10, size 0x4
    unsigned short lvPoolIndex; // offset 0x14, size 0x2
    unsigned short opPoolIndex; // offset 0x16, size 0x2
    unsigned char returnEncountered; // offset 0x18, size 0x1
    unsigned char exceptionThrown; // offset 0x19, size 0x1
    unsigned char returnWords; // offset 0x1A, size 0x1
    unsigned char lastException; // offset 0x1B, size 0x1
    void * previousFrame; // offset 0x1C, size 0x4
};
// total size: 0x2A4
class ExecutionThread {
    // Members
public:
    class ExecutionFrame frameStack[20]; // offset 0x0, size 0x280
    unsigned int wakeParameter; // offset 0x280, size 0x4
    unsigned int wakeParameter2; // offset 0x284, size 0x4
    unsigned int wakeParameter3; // offset 0x288, size 0x4
    unsigned int wakeCondition; // offset 0x28C, size 0x4
    signed int frameCount; // offset 0x290, size 0x4
    unsigned int amAlive; // offset 0x294, size 0x4
    unsigned int amActive; // offset 0x298, size 0x4
    unsigned int previousWakeParameter; // offset 0x29C, size 0x4
    unsigned int pauseFlags; // offset 0x2A0, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JThread.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A5550 -> 0x003A5690
*/
// Range: 0x3A5550 -> 0x3A5690
class ExecutionFrame * ExecutionThreadPopFrame(class ExecutionThread * inst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A5550 -> 0x3A5690
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JThread.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A5690 -> 0x003A5788
*/
// Range: 0x3A5690 -> 0x3A5788
class ExecutionFrame * ExecutionThreadPushFrame(class ExecutionThread * inst /* r19 */, class JExecutableMethod * meth /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3A5690 -> 0x3A5788
        signed int lvIndex; // r17
        signed int opIndex; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JThread.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A5790 -> 0x003A579C
*/
// Range: 0x3A5790 -> 0x3A579C
void ExecutionThreadStop(class ExecutionThread * inst /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A5790 -> 0x3A579C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JThread.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A57A0 -> 0x003A57B0
*/
// Range: 0x3A57A0 -> 0x3A57B0
void ExecutionThreadStart(class ExecutionThread * inst /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A57A0 -> 0x3A57B0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JThread.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A57B0 -> 0x003A591C
*/
// Range: 0x3A57B0 -> 0x3A591C
static signed int getOpSlot(signed int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A57B0 -> 0x3A591C
        signed int returnIndex; // r2
        signed int entriesNeeded; // r3
        signed int j; // r7
        signed int i; // r6
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JThread.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A5920 -> 0x003A5AA4
*/
// Range: 0x3A5920 -> 0x3A5AA4
static signed int getLvSlot(signed int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A5920 -> 0x3A5AA4
        signed int returnIndex; // r2
        signed int entriesNeeded; // r3
        signed int j; // r7
        signed int i; // r6
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JThread.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A5AB0 -> 0x003A5B00
*/
// Range: 0x3A5AB0 -> 0x3A5B00
void ExecutionThreadInitPools() {
    /* anonymous block */ {
        // Range: 0x3A5AB0 -> 0x3A5B00
    }
}


