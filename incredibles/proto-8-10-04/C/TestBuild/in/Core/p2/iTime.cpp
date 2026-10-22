/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int tim0_handler_id; // size: 0x4, address: 0x611D44
signed long tim0_high; // size: 0x4, address: 0x611D48
static signed int sProfLevel; // size: 0x4, address: 0x0
static char * sProfMap; // size: 0x4, address: 0x0
static char * * sProfFunc; // size: 0x4, address: 0x0
static char * * sProfFile; // size: 0x4, address: 0x0
static unsigned int * sProfBin; // size: 0x4, address: 0x0
static unsigned int sProfCount; // size: 0x4, address: 0x0
unsigned int pvsyncaddr; // size: 0x4, address: 0x0
class prof_info * pip; // size: 0x4, address: 0x611D50
unsigned int pil; // size: 0x4, address: 0x611D54
unsigned int app_top; // size: 0x4, address: 0x0
unsigned int app_end; // size: 0x4, address: 0x0
unsigned int app_hits; // size: 0x4, address: 0x611D58
unsigned int kernel_hits; // size: 0x4, address: 0x611D5C
unsigned int vsync_hits; // size: 0x4, address: 0x611D60
unsigned int scene_id; // size: 0x4, address: 0x610B54
unsigned int prof_enable; // size: 0x4, address: 0x611D64
static unsigned int * profSampleBuffer; // size: 0x4, address: 0x611D68
static unsigned int * profSampleStatic; // size: 0x4, address: 0x611D6C
static unsigned int profSampleSize; // size: 0x4, address: 0x611D70
static float sGameTime; // size: 0x4, address: 0x611D74
signed int TimerHandler(signed int, void *, void *); // size: 0x0, address: 0x1711A0
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
    Code range: 0x00170FC0 -> 0x00170FD4
*/
// Range: 0x170FC0 -> 0x170FD4
char * iFuncProfileFindFunction(unsigned int * offset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x170FC0 -> 0x170FD4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170FE0 -> 0x00170FE8
*/
// Range: 0x170FE0 -> 0x170FE8
void iFuncProfileDump() {
    /* anonymous block */ {
        // Range: 0x170FE0 -> 0x170FE8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170FF0 -> 0x00171090
*/
// Range: 0x170FF0 -> 0x171090
void iProfileClear(unsigned int sceneID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x170FF0 -> 0x171090
        signed int i; // r6
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171090 -> 0x00171098
*/
// Range: 0x171090 -> 0x171098
void iTimeSetGame(float time /* r29 */) {
    /* anonymous block */ {
        // Range: 0x171090 -> 0x171098
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001710A0 -> 0x001710B0
*/
// Range: 0x1710A0 -> 0x1710B0
void iTimeGameAdvance(float elapsed /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1710A0 -> 0x1710B0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001710B0 -> 0x001710B8
*/
// Range: 0x1710B0 -> 0x1710B8
float iTimeGetGame() {
    /* anonymous block */ {
        // Range: 0x1710B0 -> 0x1710B8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001710C0 -> 0x0017110C
*/
// Range: 0x1710C0 -> 0x17110C
float iTimeDiffSec(signed long t0 /* r2 */, signed long t1 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1710C0 -> 0x17110C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171110 -> 0x00171158
*/
// Range: 0x171110 -> 0x171158
float iTimeDiffSec(signed long time /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171110 -> 0x171158
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171160 -> 0x00171194
*/
// Range: 0x171160 -> 0x171194
signed long iTimeGet() {
    /* anonymous block */ {
        // Range: 0x171160 -> 0x171194
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
    Code range: 0x001711A0 -> 0x00171200
*/
// Range: 0x1711A0 -> 0x171200
static signed int TimerHandler(signed int ca /* r2 */, void * addr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1711A0 -> 0x171200
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171200 -> 0x00171254
*/
// Range: 0x171200 -> 0x171254
void iTimeInit() {
    /* anonymous block */ {
        // Range: 0x171200 -> 0x171254
    }
}


