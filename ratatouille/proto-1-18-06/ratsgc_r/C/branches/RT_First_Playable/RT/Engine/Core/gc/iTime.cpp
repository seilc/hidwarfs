/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\gc\iTime.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F2574 -> 0x800F268C
*/
long long sStartupTime; // size: 0x8, address: 0x80C07AC8
// Range: 0x800F2574 -> 0x800F259C
void iTimeInit() {
    // References
    // -> long long sStartupTime;
}

// Range: 0x800F259C -> 0x800F25A0
void iTimeExit() {}

// Range: 0x800F25A0 -> 0x800F25D0
long long iTimeGet() {
    // Local variables
    long long curTime; // r0

    // References
    // -> long long sStartupTime;
}

// Range: 0x800F25D0 -> 0x800F2618
float iTimeDiffSec(long long time /* r0 */) {}

// Range: 0x800F2618 -> 0x800F2640
float iTimeDiffSec(long long t0 /* r0 */, long long t1 /* r0 */) {}

static float sGameTime; // size: 0x4, address: 0x80C07AD0
// Range: 0x800F2640 -> 0x800F2648
float iTimeGetGame() {
    // References
    // -> static float sGameTime;
}

// Range: 0x800F2648 -> 0x800F2658
void iTimeGameAdvance(float elapsed /* f0 */) {
    // References
    // -> static float sGameTime;
}

// Range: 0x800F2658 -> 0x800F2660
void iTimeSetGame(float time /* f0 */) {
    // References
    // -> static float sGameTime;
}

// Range: 0x800F2660 -> 0x800F2664
void iProfileClear() {}

// Range: 0x800F2664 -> 0x800F2668
void iFuncProfileDump() {}

// Range: 0x800F2668 -> 0x800F2688
void iFuncProfileFuncs() {}

// Range: 0x800F2688 -> 0x800F268C
void iInstrProfileDump() {}

// total size: 0xC
struct prof_info {
    // Members
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int len; // offset 0x4, size 0x4
    unsigned int count; // offset 0x8, size 0x4
};

