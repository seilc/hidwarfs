/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int tim0_handler_id; // size: 0x4, address: 0x357CBC
signed long tim0_high; // size: 0x4, address: 0x357CC0
static signed int sProfLevel; // size: 0x4, address: 0x0
static char * sProfMap; // size: 0x4, address: 0x0
static char * * sProfFunc; // size: 0x4, address: 0x0
static char * * sProfFile; // size: 0x4, address: 0x0
static unsigned int * sProfBin; // size: 0x4, address: 0x0
static unsigned int sProfCount; // size: 0x4, address: 0x0
unsigned int pvsyncaddr; // size: 0x4, address: 0x0
class prof_info * pip; // size: 0x4, address: 0x357CC8
unsigned int pil; // size: 0x4, address: 0x357CCC
unsigned int app_top; // size: 0x4, address: 0x0
unsigned int app_end; // size: 0x4, address: 0x0
unsigned int app_hits; // size: 0x4, address: 0x357CD0
unsigned int kernel_hits; // size: 0x4, address: 0x357CD4
unsigned int vsync_hits; // size: 0x4, address: 0x357CD8
unsigned int scene_id; // size: 0x4, address: 0x3574AC
unsigned int prof_enable; // size: 0x4, address: 0x357CDC
static unsigned int * profSampleBuffer; // size: 0x4, address: 0x357CE0
static unsigned int * profSampleStatic; // size: 0x4, address: 0x357CE4
static unsigned int profSampleSize; // size: 0x4, address: 0x357CE8
signed int initted; // size: 0x4, address: 0x0
static float sGameTime; // size: 0x4, address: 0x357CEC
signed int TimerHandler(signed int); // size: 0x0, address: 0x126510
// total size: 0xC
class prof_info {
    // Members
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int len; // offset 0x4, size 0x4
    unsigned int count; // offset 0x8, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126360 -> 0x00126368
*/
// Range: 0x126360 -> 0x126368
void iFuncProfileFuncs() {
    /* anonymous block */ {
        // Range: 0x126360 -> 0x126368
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126370 -> 0x00126378
*/
// Range: 0x126370 -> 0x126378
void iFuncProfileDump() {
    /* anonymous block */ {
        // Range: 0x126370 -> 0x126378
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126380 -> 0x00126388
*/
// Range: 0x126380 -> 0x126388
void iInstrProfileDump() {
    /* anonymous block */ {
        // Range: 0x126380 -> 0x126388
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126390 -> 0x00126398
*/
// Range: 0x126390 -> 0x126398
void iFuncProfileParse() {
    /* anonymous block */ {
        // Range: 0x126390 -> 0x126398
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001263A0 -> 0x00126440
*/
// Range: 0x1263A0 -> 0x126440
void iProfileClear(unsigned int sceneID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1263A0 -> 0x126440
        signed int i; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126440 -> 0x00126448
*/
// Range: 0x126440 -> 0x126448
void iTimeSetGame(float time /* r29 */) {
    /* anonymous block */ {
        // Range: 0x126440 -> 0x126448
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126450 -> 0x00126460
*/
// Range: 0x126450 -> 0x126460
void iTimeGameAdvance(float elapsed /* r29 */) {
    /* anonymous block */ {
        // Range: 0x126450 -> 0x126460
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126460 -> 0x0012648C
*/
// Range: 0x126460 -> 0x12648C
float iTimeDiffSec(signed long t0 /* r2 */, signed long t1 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x126460 -> 0x12648C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126490 -> 0x001264C4
*/
// Range: 0x126490 -> 0x1264C4
float iTimeDiffSec(signed long time /* r2 */) {
    /* anonymous block */ {
        // Range: 0x126490 -> 0x1264C4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001264D0 -> 0x00126508
*/
// Range: 0x1264D0 -> 0x126508
signed long iTimeGet() {
    /* anonymous block */ {
        // Range: 0x1264D0 -> 0x126508
        signed long low1; // r2
        signed long high1; // r5
        signed long low0; // r2
        signed long high0; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126510 -> 0x0012655C
*/
// Range: 0x126510 -> 0x12655C
static signed int TimerHandler(signed int ca /* r2 */) {
    /* anonymous block */ {
        // Range: 0x126510 -> 0x12655C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126560 -> 0x00126588
*/
// Range: 0x126560 -> 0x126588
void iTimeExit() {
    /* anonymous block */ {
        // Range: 0x126560 -> 0x126588
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126590 -> 0x001265EC
*/
// Range: 0x126590 -> 0x1265EC
void iTimeInit() {
    /* anonymous block */ {
        // Range: 0x126590 -> 0x1265EC
    }
}


