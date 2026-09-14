/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int tim0_handler_id; // size: 0x4, address: 0x608944
signed long tim0_high; // size: 0x4, address: 0x608948
static signed int sProfLevel; // size: 0x4, address: 0x0
static char * sProfMap; // size: 0x4, address: 0x0
static char * * sProfFunc; // size: 0x4, address: 0x0
static char * * sProfFile; // size: 0x4, address: 0x0
static unsigned int * sProfBin; // size: 0x4, address: 0x0
static unsigned int sProfCount; // size: 0x4, address: 0x0
unsigned int pvsyncaddr; // size: 0x4, address: 0x0
class prof_info * pip; // size: 0x4, address: 0x608950
unsigned int pil; // size: 0x4, address: 0x608954
unsigned int app_top; // size: 0x4, address: 0x0
unsigned int app_end; // size: 0x4, address: 0x0
unsigned int app_hits; // size: 0x4, address: 0x608958
unsigned int kernel_hits; // size: 0x4, address: 0x60895C
unsigned int vsync_hits; // size: 0x4, address: 0x608960
unsigned int scene_id; // size: 0x4, address: 0x607754
unsigned int prof_enable; // size: 0x4, address: 0x608964
static unsigned int * profSampleBuffer; // size: 0x4, address: 0x608968
static unsigned int * profSampleStatic; // size: 0x4, address: 0x60896C
static unsigned int profSampleSize; // size: 0x4, address: 0x608970
static float sGameTime; // size: 0x4, address: 0x608974
signed int TimerHandler(signed int, void *, void *); // size: 0x0, address: 0x170DF0
// total size: 0xC
class prof_info {
    // Members
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int len; // offset 0x4, size 0x4
    unsigned int count; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170C10 -> 0x00170C24
*/
// Range: 0x170C10 -> 0x170C24
char * iFuncProfileFindFunction(unsigned int * offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x170C10 -> 0x170C24
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170C30 -> 0x00170C38
*/
// Range: 0x170C30 -> 0x170C38
void iFuncProfileDump() {
    /* anonymous block */ {
        // Range: 0x170C30 -> 0x170C38
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170C40 -> 0x00170CE0
*/
// Range: 0x170C40 -> 0x170CE0
void iProfileClear(unsigned int sceneID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x170C40 -> 0x170CE0
        signed int i; // r6
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170CE0 -> 0x00170CE8
*/
// Range: 0x170CE0 -> 0x170CE8
void iTimeSetGame(float time /* r29 */) {
    /* anonymous block */ {
        // Range: 0x170CE0 -> 0x170CE8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170CF0 -> 0x00170D00
*/
// Range: 0x170CF0 -> 0x170D00
void iTimeGameAdvance(float elapsed /* r29 */) {
    /* anonymous block */ {
        // Range: 0x170CF0 -> 0x170D00
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170D00 -> 0x00170D08
*/
// Range: 0x170D00 -> 0x170D08
float iTimeGetGame() {
    /* anonymous block */ {
        // Range: 0x170D00 -> 0x170D08
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170D10 -> 0x00170D5C
*/
// Range: 0x170D10 -> 0x170D5C
float iTimeDiffSec(signed long t0 /* r2 */, signed long t1 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x170D10 -> 0x170D5C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170D60 -> 0x00170DA8
*/
// Range: 0x170D60 -> 0x170DA8
float iTimeDiffSec(signed long time /* r2 */) {
    /* anonymous block */ {
        // Range: 0x170D60 -> 0x170DA8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170DB0 -> 0x00170DE4
*/
// Range: 0x170DB0 -> 0x170DE4
signed long iTimeGet() {
    /* anonymous block */ {
        // Range: 0x170DB0 -> 0x170DE4
        signed long high0; // r2
        signed long low0; // r2
        signed long high1; // r2
        signed long low1; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170DF0 -> 0x00170E50
*/
// Range: 0x170DF0 -> 0x170E50
static signed int TimerHandler(signed int ca /* r2 */, void * addr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x170DF0 -> 0x170E50
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170E50 -> 0x00170EA4
*/
// Range: 0x170E50 -> 0x170EA4
void iTimeInit() {
    /* anonymous block */ {
        // Range: 0x170E50 -> 0x170EA4
    }
}


