/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int tim0_handler_id; // size: 0x4, address: 0x50ED80
signed long tim0_high; // size: 0x4, address: 0x50ED88
static signed int sProfLevel; // size: 0x4, address: 0x0
static char * sProfMap; // size: 0x4, address: 0x0
static char * * sProfFunc; // size: 0x4, address: 0x0
static char * * sProfFile; // size: 0x4, address: 0x0
static unsigned int * sProfBin; // size: 0x4, address: 0x0
static unsigned int sProfCount; // size: 0x4, address: 0x0
unsigned int pvsyncaddr; // size: 0x4, address: 0x0
class prof_info * pip; // size: 0x4, address: 0x50ED90
unsigned int pil; // size: 0x4, address: 0x50ED94
unsigned int app_top; // size: 0x4, address: 0x0
unsigned int app_end; // size: 0x4, address: 0x0
unsigned int app_hits; // size: 0x4, address: 0x50ED98
unsigned int kernel_hits; // size: 0x4, address: 0x50ED9C
unsigned int vsync_hits; // size: 0x4, address: 0x50EDA0
unsigned int scene_id; // size: 0x4, address: 0x50DD08
unsigned int prof_enable; // size: 0x4, address: 0x50EDA4
static unsigned int * profSampleBuffer; // size: 0x4, address: 0x50EDA8
static unsigned int * profSampleStatic; // size: 0x4, address: 0x50EDAC
static unsigned int profSampleSize; // size: 0x4, address: 0x50EDB0
static float sGameTime; // size: 0x4, address: 0x50EDB4
signed int TimerHandler(signed int, void *, void *); // size: 0x0, address: 0x1BA800
// total size: 0xC
class prof_info {
    // Members
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int len; // offset 0x4, size 0x4
    unsigned int count; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BA630 -> 0x001BA638
*/
// Range: 0x1BA630 -> 0x1BA638
void iFuncProfileDump() {
    /* anonymous block */ {
        // Range: 0x1BA630 -> 0x1BA638
    }
}


/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BA640 -> 0x001BA648
*/
// Range: 0x1BA640 -> 0x1BA648
void iFuncProfileParse() {
    /* anonymous block */ {
        // Range: 0x1BA640 -> 0x1BA648
    }
}


/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BA650 -> 0x001BA6FC
*/
// Range: 0x1BA650 -> 0x1BA6FC
void iProfileClear(unsigned int sceneID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BA650 -> 0x1BA6FC
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BA700 -> 0x001BA708
*/
// Range: 0x1BA700 -> 0x1BA708
void iTimeSetGame(float time /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1BA700 -> 0x1BA708
    }
}


/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BA710 -> 0x001BA720
*/
// Range: 0x1BA710 -> 0x1BA720
void iTimeGameAdvance(float elapsed /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1BA710 -> 0x1BA720
    }
}


/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BA720 -> 0x001BA76C
*/
// Range: 0x1BA720 -> 0x1BA76C
float iTimeDiffSec(signed long t0 /* r2 */, signed long t1 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BA720 -> 0x1BA76C
    }
}


/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BA770 -> 0x001BA7B8
*/
// Range: 0x1BA770 -> 0x1BA7B8
float iTimeDiffSec(signed long time /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BA770 -> 0x1BA7B8
    }
}


/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BA7C0 -> 0x001BA7F8
*/
// Range: 0x1BA7C0 -> 0x1BA7F8
signed long iTimeGet() {
    /* anonymous block */ {
        // Range: 0x1BA7C0 -> 0x1BA7F8
        signed long high0; // r5
        signed long low0; // r2
        signed long high1; // r4
        signed long low1; // r2
    }
}


/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BA800 -> 0x001BA858
*/
// Range: 0x1BA800 -> 0x1BA858
static signed int TimerHandler(signed int ca /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BA800 -> 0x1BA858
    }
}


/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BA860 -> 0x001BA888
*/
// Range: 0x1BA860 -> 0x1BA888
void iTimeExit() {
    /* anonymous block */ {
        // Range: 0x1BA860 -> 0x1BA888
    }
}


/*
    Compile unit: C:\SB\Core\p2\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BA890 -> 0x001BA8F0
*/
// Range: 0x1BA890 -> 0x1BA8F0
void iTimeInit() {
    /* anonymous block */ {
        // Range: 0x1BA890 -> 0x1BA8F0
    }
}


