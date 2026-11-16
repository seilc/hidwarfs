/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int tim0_handler_id; // size: 0x4, address: 0x358644
signed long tim0_high; // size: 0x4, address: 0x358648
static signed int sProfLevel; // size: 0x4, address: 0x0
static char * sProfMap; // size: 0x4, address: 0x0
static char * * sProfFunc; // size: 0x4, address: 0x0
static char * * sProfFile; // size: 0x4, address: 0x0
static unsigned int * sProfBin; // size: 0x4, address: 0x0
static unsigned int sProfCount; // size: 0x4, address: 0x0
unsigned int pvsyncaddr; // size: 0x4, address: 0x0
class prof_info * pip; // size: 0x4, address: 0x358650
unsigned int pil; // size: 0x4, address: 0x358654
unsigned int app_top; // size: 0x4, address: 0x0
unsigned int app_end; // size: 0x4, address: 0x0
unsigned int app_hits; // size: 0x4, address: 0x358658
unsigned int kernel_hits; // size: 0x4, address: 0x35865C
unsigned int vsync_hits; // size: 0x4, address: 0x358660
unsigned int scene_id; // size: 0x4, address: 0x357E24
unsigned int prof_enable; // size: 0x4, address: 0x358664
static unsigned int * profSampleBuffer; // size: 0x4, address: 0x358668
static unsigned int * profSampleStatic; // size: 0x4, address: 0x35866C
static unsigned int profSampleSize; // size: 0x4, address: 0x358670
signed int initted; // size: 0x4, address: 0x0
static float sGameTime; // size: 0x4, address: 0x358674
signed int TimerHandler(signed int); // size: 0x0, address: 0x126520
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
    Code range: 0x00126370 -> 0x00126378
*/
// Range: 0x126370 -> 0x126378
void iFuncProfileFuncs() {
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
void iFuncProfileDump() {
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
void iInstrProfileDump() {
    /* anonymous block */ {
        // Range: 0x126390 -> 0x126398
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001263A0 -> 0x001263A8
*/
// Range: 0x1263A0 -> 0x1263A8
void iFuncProfileParse() {
    /* anonymous block */ {
        // Range: 0x1263A0 -> 0x1263A8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001263B0 -> 0x00126450
*/
// Range: 0x1263B0 -> 0x126450
void iProfileClear(unsigned int sceneID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1263B0 -> 0x126450
        signed int i; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126450 -> 0x00126458
*/
// Range: 0x126450 -> 0x126458
void iTimeSetGame(float time /* r29 */) {
    /* anonymous block */ {
        // Range: 0x126450 -> 0x126458
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126460 -> 0x00126470
*/
// Range: 0x126460 -> 0x126470
void iTimeGameAdvance(float elapsed /* r29 */) {
    /* anonymous block */ {
        // Range: 0x126460 -> 0x126470
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126470 -> 0x0012649C
*/
// Range: 0x126470 -> 0x12649C
float iTimeDiffSec(signed long t0 /* r2 */, signed long t1 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x126470 -> 0x12649C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001264A0 -> 0x001264D4
*/
// Range: 0x1264A0 -> 0x1264D4
float iTimeDiffSec(signed long time /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1264A0 -> 0x1264D4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001264E0 -> 0x00126518
*/
// Range: 0x1264E0 -> 0x126518
signed long iTimeGet() {
    /* anonymous block */ {
        // Range: 0x1264E0 -> 0x126518
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
    Code range: 0x00126520 -> 0x0012656C
*/
// Range: 0x126520 -> 0x12656C
static signed int TimerHandler(signed int ca /* r2 */) {
    /* anonymous block */ {
        // Range: 0x126520 -> 0x12656C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126570 -> 0x00126598
*/
// Range: 0x126570 -> 0x126598
void iTimeExit() {
    /* anonymous block */ {
        // Range: 0x126570 -> 0x126598
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iTime.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001265A0 -> 0x001265FC
*/
// Range: 0x1265A0 -> 0x1265FC
void iTimeInit() {
    /* anonymous block */ {
        // Range: 0x1265A0 -> 0x1265FC
    }
}


