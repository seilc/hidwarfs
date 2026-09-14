/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int debugOpFlag; // size: 0x4, address: 0x4A4FAC
signed int debugCallFlag; // size: 0x4, address: 0x4A4684
signed int debugThread; // size: 0x4, address: 0x4A4688
static class ExecutionThread threadList[20]; // size: 0x34D0, address: 0xB02B90
static signed int threadCount; // size: 0x4, address: 0x4A4FB0
static class ExternalFunc externalFuncList[286]; // size: 0xD68, address: 0xB06060
static signed int externalFuncCount; // size: 0x4, address: 0x4A4FB4
static class ExecutionThread * currentThread; // size: 0x4, address: 0x4A4FB8
static unsigned int currentThreadFrameNumber; // size: 0x4, address: 0x4A4FBC
static signed int doLevelMemoryAllocate; // size: 0x4, address: 0x4A4FC0
signed int jumpBuffer[11]; // size: 0x2C, address: 0xB06DD0
unsigned long threadTotalTime[20]; // size: 0x50, address: 0xB06E00
static signed int sDebugMaxFrameCountInit; // size: 0x4, address: 0x4A4FC4
static signed int sDebugMaxFrameCount[20]; // size: 0x50, address: 0xB071A0
class JExecutableDescriptor gExecutableDescriptor; // size: 0x38, address: 0x44FEC0
unsigned int MemoryPoolLevelAllocated; // size: 0x4, address: 0x4A4FCC
unsigned int MemoryPoolAllocated; // size: 0x4, address: 0x4A4FC8
unsigned long gTimerValue; // size: 0x4, address: 0x4A5340
unsigned char MemoryPoolDataPool[37888]; // size: 0x9400, address: 0xB071F0
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
// total size: 0x8
class JExecutableField {
    // Members
public:
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        unsigned int word1; // offset 0x0, size 0x4
    } value; // offset 0x0, size 0x4
    signed short resolvedOffset; // offset 0x4, size 0x2
    unsigned short resolvedWords; // offset 0x6, size 0x2
};
// total size: 0x14
class JExecutableClass {
    // Members
public:
    signed short classNameIndex; // offset 0x0, size 0x2
    signed short constantIndex; // offset 0x2, size 0x2
    signed short resolvedParentDataWords; // offset 0x4, size 0x2
    signed short resolvedDataWords; // offset 0x6, size 0x2
    signed short executableMethodIndexInPool; // offset 0x8, size 0x2
    signed short executableFieldIndexInPool; // offset 0xA, size 0x2
    unsigned short executableMethodsCount; // offset 0xC, size 0x2
    unsigned short executableFieldsCount; // offset 0xE, size 0x2
    signed short superClassIndex; // offset 0x10, size 0x2
    unsigned char myIndex; // offset 0x12, size 0x1
    unsigned char amInitialized; // offset 0x13, size 0x1
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
// total size: 0xC
class ExternalFunc {
    // Members
public:
    char * funcName; // offset 0x0, size 0x4
    signed int funcType; // offset 0x4, size 0x4
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        union { // inferred
            void * untyped; // offset 0x0, size 0x4
            void (* v_v_funcPtr)(); // offset 0x0, size 0x4
            void (* v_s_funcPtr)(char *); // offset 0x0, size 0x4
            signed int (* i_si_funcPtr)(char *, signed int); // offset 0x0, size 0x4
            signed int (* i_ssi_funcPtr)(char *, char *, signed int); // offset 0x0, size 0x4
            void (* v_u_funcPtr)(unsigned int); // offset 0x0, size 0x4
            void (* v_is_funcPtr)(signed int, char *); // offset 0x0, size 0x4
            void (* v_iis_funcPtr)(signed int, signed int, char *); // offset 0x0, size 0x4
            void (* v_iss_funcPtr)(signed int, char *, char *); // offset 0x0, size 0x4
            void (* v_isss_funcPtr)(signed int, char *, char *, char *); // offset 0x0, size 0x4
            void (* v_isii_funcPtr)(signed int, char *, signed int, signed int); // offset 0x0, size 0x4
            void (* v_issii_funcPtr)(signed int, char *, char *, signed int, signed int); // offset 0x0, size 0x4
            signed int (* i_issiii_funcPtr)(signed int, char *, char *, signed int, signed int, signed int); // offset 0x0, size 0x4
            void (* v_i_funcPtr)(signed int); // offset 0x0, size 0x4
            signed int (* i_v_funcPtr)(); // offset 0x0, size 0x4
            signed int (* i_i_funcPtr)(signed int); // offset 0x0, size 0x4
            signed int (* i_ii_funcPtr)(signed int, signed int); // offset 0x0, size 0x4
            signed int (* i_iii_funcPtr)(signed int, signed int, signed int); // offset 0x0, size 0x4
            signed int (* i_iiii_funcPtr)(signed int, signed int, signed int, signed int); // offset 0x0, size 0x4
            signed int (* i_iiiii_funcPtr)(signed int, signed int, signed int, signed int, signed int); // offset 0x0, size 0x4
            void (* v_ii_funcPtr)(signed int, signed int); // offset 0x0, size 0x4
            void (* v_iii_funcPtr)(signed int, signed int, signed int); // offset 0x0, size 0x4
            void (* v_iiii_funcPtr)(signed int, signed int, signed int, signed int); // offset 0x0, size 0x4
            void (* v_iiiii_funcPtr)(signed int, signed int, signed int, signed int, signed int); // offset 0x0, size 0x4
            void (* v_iiiiiii_funcPtr)(signed int, signed int, signed int, signed int, signed int, signed int, signed int); // offset 0x0, size 0x4
            void (* v_iiiiiiii_funcPtr)(signed int, signed int, signed int, signed int, signed int, signed int, signed int, signed int); // offset 0x0, size 0x4
        };
    } f; // offset 0x8, size 0x4
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    union { // inferred
        void * untyped; // offset 0x0, size 0x4
        void (* v_v_funcPtr)(); // offset 0x0, size 0x4
        void (* v_s_funcPtr)(char *); // offset 0x0, size 0x4
        signed int (* i_si_funcPtr)(char *, signed int); // offset 0x0, size 0x4
        signed int (* i_ssi_funcPtr)(char *, char *, signed int); // offset 0x0, size 0x4
        void (* v_u_funcPtr)(unsigned int); // offset 0x0, size 0x4
        void (* v_is_funcPtr)(signed int, char *); // offset 0x0, size 0x4
        void (* v_iis_funcPtr)(signed int, signed int, char *); // offset 0x0, size 0x4
        void (* v_iss_funcPtr)(signed int, char *, char *); // offset 0x0, size 0x4
        void (* v_isss_funcPtr)(signed int, char *, char *, char *); // offset 0x0, size 0x4
        void (* v_isii_funcPtr)(signed int, char *, signed int, signed int); // offset 0x0, size 0x4
        void (* v_issii_funcPtr)(signed int, char *, char *, signed int, signed int); // offset 0x0, size 0x4
        signed int (* i_issiii_funcPtr)(signed int, char *, char *, signed int, signed int, signed int); // offset 0x0, size 0x4
        void (* v_i_funcPtr)(signed int); // offset 0x0, size 0x4
        signed int (* i_v_funcPtr)(); // offset 0x0, size 0x4
        signed int (* i_i_funcPtr)(signed int); // offset 0x0, size 0x4
        signed int (* i_ii_funcPtr)(signed int, signed int); // offset 0x0, size 0x4
        signed int (* i_iii_funcPtr)(signed int, signed int, signed int); // offset 0x0, size 0x4
        signed int (* i_iiii_funcPtr)(signed int, signed int, signed int, signed int); // offset 0x0, size 0x4
        signed int (* i_iiiii_funcPtr)(signed int, signed int, signed int, signed int, signed int); // offset 0x0, size 0x4
        void (* v_ii_funcPtr)(signed int, signed int); // offset 0x0, size 0x4
        void (* v_iii_funcPtr)(signed int, signed int, signed int); // offset 0x0, size 0x4
        void (* v_iiii_funcPtr)(signed int, signed int, signed int, signed int); // offset 0x0, size 0x4
        void (* v_iiiii_funcPtr)(signed int, signed int, signed int, signed int, signed int); // offset 0x0, size 0x4
        void (* v_iiiiiii_funcPtr)(signed int, signed int, signed int, signed int, signed int, signed int, signed int); // offset 0x0, size 0x4
        void (* v_iiiiiiii_funcPtr)(signed int, signed int, signed int, signed int, signed int, signed int, signed int, signed int); // offset 0x0, size 0x4
    };
};
// total size: 0x10C
class tagFile {
    // Members
public:
    char m_name[256]; // offset 0x0, size 0x100
    signed int m_state; // offset 0x100, size 0x4
    signed int m_desc; // offset 0x104, size 0x4
    unsigned int m_fpos; // offset 0x108, size 0x4
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    unsigned int word1; // offset 0x0, size 0x4
};
// total size: 0x38
class JExecutableDescriptor {
    // Members
public:
    unsigned int fieldPoolUsed; // offset 0x0, size 0x4
    unsigned int methodPoolUsed; // offset 0x4, size 0x4
    unsigned int classCount; // offset 0x8, size 0x4
    unsigned int codePoolUsed; // offset 0xC, size 0x4
    unsigned int stringPoolUsed; // offset 0x10, size 0x4
    unsigned int constantValuePoolUsed; // offset 0x14, size 0x4
    unsigned int constantMapPoolUsed; // offset 0x18, size 0x4
    class JExecutableField * fieldPool; // offset 0x1C, size 0x4
    class JExecutableMethod * methodPool; // offset 0x20, size 0x4
    class JExecutableClass * classList; // offset 0x24, size 0x4
    unsigned char * codePoolU8; // offset 0x28, size 0x4
    unsigned char * stringPool; // offset 0x2C, size 0x4
    unsigned int * constantValuePool; // offset 0x30, size 0x4
    signed short * constantMapPool; // offset 0x34, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039D280 -> 0x0039D624
*/
// Range: 0x39D280 -> 0x39D624
char * InterpreterDumpThreadsToScreen() {
    /* anonymous block */ {
        // Range: 0x39D280 -> 0x39D624
        char * className; // r19
        char * lastClass; // r18
        char dispStr[2048]; // r29+0x50
        signed int j; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039D630 -> 0x0039D8D4
*/
// Range: 0x39D630 -> 0x39D8D4
char * InterpreterDumpThreads() {
    /* anonymous block */ {
        // Range: 0x39D630 -> 0x39D8D4
        char * className; // r19
        char * lastClass; // r18
        signed int j; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039D8E0 -> 0x003A238C
*/
// Range: 0x39D8E0 -> 0x3A238C
signed int InterpreterExecuteFrame(class ExecutionFrame * inputFrame /* r21 */) {
    /* anonymous block */ {
        // Range: 0x39D8E0 -> 0x3A238C
        signed int i; // r19
        class ExecutionFrame * prevFrame; // r19
        signed int v1; // r3
        signed int _off; // r2
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int constant; // r5
        signed int index; // r4
        unsigned int c2; // r5
        unsigned int c1; // r2
        unsigned int i2; // r4
        unsigned int i1; // r2
        unsigned int theConstValue; // r3
        signed short theConstMapValue; // r4
        signed int ind; // r2
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int instanceClassIndex; // r4
        void * ptr; // r2
        class JExecutableClass * file; // r3
        unsigned int * ref; // r2
        unsigned char * theArray; // r2
        unsigned int units; // r2
        unsigned int type; // r3
        unsigned char * theArray; // r2
        signed int units; // r2
        unsigned int theConstValue; // r2
        signed short theConstMapValue; // r2
        signed int ind; // r2
        signed int bc2; // r3
        signed int bc1; // r2
        unsigned int value; // r3
        class JExecutableField * newField; // r2
        signed int key; // r4
        signed int i; // r8
        signed int theOffset; // r3
        signed int searchKey; // r7
        signed int npairs; // r6
        signed int defaultOffset; // r2
        unsigned char * base; // r2
        signed int io; // r5
        signed int _off; // r3
        signed int index; // r7
        signed int highIndex; // r5
        signed int lowIndex; // r6
        signed int defaultOffset; // r2
        unsigned char * base; // r2
        unsigned int ind; // r2
        signed int _off; // r2
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int _off; // r4
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        unsigned int v2; // r3
        unsigned int v1; // r2
        signed int _off; // r4
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        unsigned int v2; // r3
        unsigned int v1; // r2
        signed int _off; // r4
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int v2; // r3
        signed int v1; // r2
        signed int _off; // r4
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int v2; // r3
        signed int v1; // r2
        signed int _off; // r4
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int v2; // r3
        signed int v1; // r2
        signed int _off; // r4
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int v2; // r3
        signed int v1; // r2
        signed int _off; // r4
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int v2; // r3
        signed int v1; // r2
        signed int _off; // r4
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int v2; // r3
        signed int v1; // r2
        signed int v1; // r3
        signed int _off; // r2
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int v1; // r3
        signed int _off; // r2
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int v1; // r3
        signed int _off; // r2
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int v1; // r3
        signed int _off; // r2
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int v1; // r3
        signed int _off; // r2
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int v1; // r3
        signed int _off; // r2
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed short tmp; // r2
        signed int tmp; // r2
        unsigned int index; // r2
        unsigned int v1; // r3
        unsigned int v2; // r2
        unsigned int v1; // r3
        unsigned int v2; // r2
        unsigned int v1; // r3
        unsigned int v2; // r2
        unsigned int v1; // r3
        unsigned int v2; // r2
        signed int v1; // r3
        unsigned int v2; // r2
        signed int v1; // r3
        unsigned int v2; // r2
        signed int v1; // r2
        signed int v1; // r3
        signed int v2; // r2
        signed int v1; // r3
        signed int v2; // r2
        signed int b; // r3
        signed int a; // r2
        signed int v1; // r3
        signed int v2; // r2
        signed int b; // r3
        signed int a; // r2
        unsigned int w2; // r3
        unsigned int w1; // r2
        unsigned int w4; // r5
        unsigned int w3; // r4
        unsigned int w2; // r3
        unsigned int w1; // r2
        unsigned int w3; // r4
        unsigned int w2; // r3
        unsigned int w1; // r2
        unsigned int w2; // r3
        unsigned int w1; // r2
        unsigned int w3; // r4
        unsigned int w2; // r3
        unsigned int w1; // r2
        unsigned int w2; // r3
        unsigned int w1; // r2
        unsigned int * debugRef; // r5
        unsigned char * ref; // r2
        signed int index; // r4
        unsigned char value; // r3
        unsigned int * debugRef; // r5
        unsigned char * ref; // r2
        signed int index; // r4
        unsigned char value; // r3
        unsigned int * ref; // r5
        unsigned int index; // r4
        unsigned int value; // r3
        signed int * ref; // r5
        unsigned int index; // r4
        signed int value; // r3
        unsigned int * debugRef; // r4
        unsigned char * ref; // r2
        signed int index; // r3
        unsigned int * debugRef; // r4
        unsigned char * ref; // r2
        signed int index; // r3
        signed int * ref; // r4
        signed int index; // r3
        unsigned int theConstValue; // r2
        signed short theConstMapValue; // r4
        signed int ind; // r2
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        unsigned int val; // r2
        unsigned int theConstValue; // r2
        signed short theConstMapValue; // r4
        unsigned int ind; // r2
        unsigned int val; // r2
        signed short value; // r2
        unsigned short bc2; // r2
        unsigned short bc1; // r2
        unsigned int theConstValue; // r3
        signed short theConstMapValue; // r4
        signed int ind; // r2
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        unsigned char * theInstance; // r2
        class JExecutableClass * file; // r19
        unsigned int * ref; // r4
        unsigned int index; // r3
        signed int _off; // r4
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int i; // r6
        class ExecutionFrame * newFrame; // r2
        class JExecutableMethod * newMethod; // r19
        signed int v1; // r3
        signed int _off; // r2
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int _off; // r2
        unsigned int bc2; // r3
        unsigned int bc1; // r2
        signed int ind; // r2
        signed int bc2; // r3
        signed int bc1; // r2
        class JExecutableField * newField; // r2
        unsigned int theConstValue; // r3
        signed int ind; // r2
        signed int bc2; // r3
        signed int bc1; // r2
        class JExecutableField * newField; // r2
        signed int ind; // r2
        signed int bc2; // r3
        signed int bc1; // r2
        void * ptr; // r4
        class JExecutableField * newField; // r2
        unsigned int fieldIndex; // r5
        signed int ind; // r2
        signed int bc2; // r3
        signed int bc1; // r2
        void * ptr; // r4
        class JExecutableField * newField; // r3
        unsigned int * lvp; // r6
        class ExecutionFrame * newFrame; // r2
        signed int i; // r5
        signed int j; // r20
        signed int i; // r19
        signed int threadToAwake; // r2
        signed int threadToSuspend; // r2
        unsigned int flags; // r3
        class ExternalFunc * theExternalFunc; // r29+0x130
        char * val; // r2
        signed int len; // r20
        signed int _off; // r3
        signed int parm8; // r2
        signed int parm7; // r2
        signed int parm6; // r29+0x120
        signed int parm5; // r29+0x110
        signed int parm4; // r29+0x100
        signed int parm3; // r23
        signed int parm2; // r19
        signed int parm1; // r22
        signed int _off2; // r4
        signed int bc2; // r3
        signed int bc1; // r2
        class JExecutableMethod * newMethod; // r19
        unsigned int theConstValue; // r2
        signed short theConstMapValue; // r2
        signed int ind; // r2
        signed int bc2; // r3
        signed int bc1; // r2
        void * ptr; // r19
        unsigned int value; // r20
        class JExecutableField * newField; // r22
        class JExecutableMethod * tm; // r2
        class JExecutableClass * instanceClass; // r2
        signed int _off; // r3
        signed int bc2; // r3
        signed int bc1; // r2
        signed int i; // r6
        class ExecutionFrame * newFrame; // r2
        class JExecutableMethod * newMethod; // r19
        class JExecutableMethod * tm; // r2
        class JExecutableClass * instanceClass; // r2
        unsigned int methodIndex; // r4
        signed int _off; // r4
        signed int bc2; // r3
        signed int bc1; // r2
        signed int i; // r6
        class ExecutionFrame * newFrame; // r2
        class JExecutableMethod * newMethod; // r19
        class JExecutableMethod * execMethodPool; // r29+0xF0
        class JExecutableField * execFieldPool; // r29+0xE0
        signed short * myExecConstantMapPool; // r29+0xD0
        unsigned int * execConstantValuePool; // r29+0xC0
        class JExecutableClass * execClassList; // r18
        unsigned int currentThreadFrameNumberSave; // r29+0xB0
        class ExecutionThread * currentThreadSave; // r29+0xA0
        unsigned int * fastLv; // r30
        unsigned int * fastOpTop; // r17
        unsigned char * fastPc; // r16
        unsigned int op; // r2
        char buf2[256]; // @ 0x00B06FA0
        char buf1[256]; // @ 0x00B06EA0
        char buf3[256]; // @ 0x00B070A0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A2390 -> 0x003A245C
*/
// Range: 0x3A2390 -> 0x3A245C
void InterpreterRegisterExternalFunction(signed int funcType /* r18 */, char * name /* r17 */, void * func /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A2390 -> 0x3A245C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A2460 -> 0x003A2744
*/
// Range: 0x3A2460 -> 0x3A2744
signed int InterpreterDoExternalCallIII_I(signed int threadFlag /* r21 */, signed int execFlag /* r20 */, unsigned int pauseFlags /* r19 */, unsigned int methodPtr /* r18 */, signed int parm1 /* r22 */, signed int parm2 /* r23 */, signed int parm3 /* r30 */, signed int * retVal /* r29+0xAC */) {
    /* anonymous block */ {
        // Range: 0x3A2460 -> 0x3A2744
        signed int status; // r2
        unsigned int threadIndex; // r17
        class ExecutionThread * thisThread; // r16
        class JExecutableMethod * theMethod; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A2750 -> 0x003A29F8
*/
// Range: 0x3A2750 -> 0x3A29F8
signed int InterpreterDoExternalCallI_I(signed int threadFlag /* r22 */, signed int execFlag /* r21 */, unsigned int pauseFlags /* r20 */, unsigned int methodPtr /* r19 */, signed int parm1 /* r18 */, signed int * retVal /* r23 */) {
    /* anonymous block */ {
        // Range: 0x3A2750 -> 0x3A29F8
        signed int status; // r2
        unsigned int threadIndex; // r17
        class ExecutionThread * thisThread; // r16
        class JExecutableMethod * theMethod; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A2A00 -> 0x003A2DB4
*/
// Range: 0x3A2A00 -> 0x3A2DB4
signed int InterpreterDoExternalCallIIIIIIIIIII_I(signed int threadFlag /* r21 */, signed int execFlag /* r20 */, unsigned int pauseFlags /* r19 */, unsigned int methodPtr /* r18 */, signed int parm1 /* r22 */, signed int parm2 /* r23 */, signed int parm3 /* r30 */, signed int parm4 /* r29+0xAC */, signed int parm5 /* r29+0xB0 */, signed int parm6 /* r29+0xB8 */, signed int parm7 /* r29+0xC0 */, signed int parm8 /* r29+0xC8 */, signed int parm9 /* r29+0xD0 */, signed int parm10 /* r29+0xD8 */, signed int parm11 /* r29+0xE0 */, signed int * retVal /* r29+0xE8 */) {
    /* anonymous block */ {
        // Range: 0x3A2A00 -> 0x3A2DB4
        signed int status; // r2
        unsigned int threadIndex; // r17
        class ExecutionThread * thisThread; // r16
        class JExecutableMethod * theMethod; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A2DC0 -> 0x003A309C
*/
// Range: 0x3A2DC0 -> 0x3A309C
signed int InterpreterDoExternalCallPIII(signed int threadFlag /* r21 */, signed int execFlag /* r20 */, unsigned int pauseFlags /* r19 */, unsigned int methodPtr /* r18 */, signed int parm1 /* r22 */, signed int parm2 /* r23 */, signed int parm3 /* r30 */, signed int parm4 /* r29+0xAC */) {
    /* anonymous block */ {
        // Range: 0x3A2DC0 -> 0x3A309C
        unsigned int threadIndex; // r17
        class ExecutionThread * thisThread; // r16
        class JExecutableMethod * theMethod; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A30A0 -> 0x003A337C
*/
// Range: 0x3A30A0 -> 0x3A337C
signed int InterpreterDoExternalCallIIII(signed int threadFlag /* r21 */, signed int execFlag /* r20 */, unsigned int pauseFlags /* r19 */, unsigned int methodPtr /* r18 */, signed int parm1 /* r22 */, signed int parm2 /* r23 */, signed int parm3 /* r30 */, signed int parm4 /* r29+0xAC */) {
    /* anonymous block */ {
        // Range: 0x3A30A0 -> 0x3A337C
        unsigned int threadIndex; // r17
        class ExecutionThread * thisThread; // r16
        class JExecutableMethod * theMethod; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A3380 -> 0x003A3620
*/
// Range: 0x3A3380 -> 0x3A3620
signed int InterpreterDoExternalCallII(signed int threadFlag /* r22 */, signed int execFlag /* r21 */, unsigned int pauseFlags /* r20 */, unsigned int methodPtr /* r19 */, signed int parm1 /* r18 */, signed int parm2 /* r23 */) {
    /* anonymous block */ {
        // Range: 0x3A3380 -> 0x3A3620
        unsigned int threadIndex; // r17
        class ExecutionThread * thisThread; // r16
        class JExecutableMethod * theMethod; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A3620 -> 0x003A38A4
*/
// Range: 0x3A3620 -> 0x3A38A4
signed int InterpreterDoExternalCallI(signed int threadFlag /* r22 */, signed int execFlag /* r21 */, unsigned int pauseFlags /* r20 */, unsigned int methodPtr /* r19 */, signed int parm1 /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3A3620 -> 0x3A38A4
        unsigned int threadIndex; // r17
        class ExecutionThread * thisThread; // r16
        class JExecutableMethod * theMethod; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A38B0 -> 0x003A3B10
*/
// Range: 0x3A38B0 -> 0x3A3B10
signed int InterpreterDoExternalCall(signed int threadFlag /* r21 */, signed int execFlag /* r20 */, unsigned int pauseFlags /* r19 */, unsigned int methodPtr /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3A38B0 -> 0x3A3B10
        unsigned int threadIndex; // r17
        class ExecutionThread * thisThread; // r16
        class JExecutableMethod * theMethod; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A3B10 -> 0x003A3C50
*/
// Range: 0x3A3B10 -> 0x3A3C50
unsigned int InterpreterFindCall(char * className /* r19 */, char * methodName /* r18 */, char * descriptor /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3A3B10 -> 0x3A3C50
        class JExecutableMethod * theMethod; // r16
        class JExecutableClass * theClass; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A3C50 -> 0x003A40F8
*/
// Range: 0x3A3C50 -> 0x3A40F8
unsigned int InterpreterProcessEvent(signed int objectType /* r20 */, signed int objectId /* r19 */, signed int eventType /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3A3C50 -> 0x3A40F8
        signed int * eventList; // r4
        signed int j; // r3
        signed int * eventList; // r4
        signed int j; // r3
        unsigned int returnCount; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A4100 -> 0x003A4534
*/
// Range: 0x3A4100 -> 0x3A4534
void InterpreterExecuteThreads(unsigned int pauseMask /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3A4100 -> 0x3A4534
        unsigned int currentTime; // r2
        signed int threadStatus; // r2
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A4540 -> 0x003A4674
*/
// Range: 0x3A4540 -> 0x3A4674
void InterpreterDestroyAllThreads() {
    /* anonymous block */ {
        // Range: 0x3A4540 -> 0x3A4674
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A4680 -> 0x003A48A8
*/
// Range: 0x3A4680 -> 0x3A48A8
void InterpreterDestroyThreadSearch(signed int objectType /* r19 */, signed int objectId /* r18 */, signed int eventType /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3A4680 -> 0x3A48A8
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A48B0 -> 0x003A49E4
*/
// Range: 0x3A48B0 -> 0x3A49E4
unsigned int InterpreterAllocateThread() {
    /* anonymous block */ {
        // Range: 0x3A48B0 -> 0x3A49E4
        signed int theThread; // r16
        signed int i; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JInterpr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A49F0 -> 0x003A4C18
*/
// Range: 0x3A49F0 -> 0x3A4C18
void InterpreterInit(signed int maxPools /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A49F0 -> 0x3A4C18
        signed int j; // r4
        signed int i; // r5
    }
}


