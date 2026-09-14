/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iTime.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008B928 -> 0x8008BA1C
*/
long long sStartupTime; // size: 0x8, address: 0x803C1878
// Range: 0x8008B928 -> 0x8008B950
void iTimeInit() {
    // References
    // -> long long sStartupTime;
}

// Range: 0x8008B950 -> 0x8008B954
void iTimeExit() {}

// Range: 0x8008B954 -> 0x8008B984
long long iTimeGet() {
    // Local variables
    long long curTime; // r0

    // References
    // -> long long sStartupTime;
}

// Range: 0x8008B984 -> 0x8008B9CC
float iTimeDiffSec(long long time /* r0 */) {}

// Range: 0x8008B9CC -> 0x8008B9F4
float iTimeDiffSec(long long t0 /* r0 */, long long t1 /* r0 */) {}

static float sGameTime; // size: 0x4, address: 0x803C1880
// Range: 0x8008B9F4 -> 0x8008B9FC
float iTimeGetGame() {
    // References
    // -> static float sGameTime;
}

// Range: 0x8008B9FC -> 0x8008BA0C
void iTimeGameAdvance(float elapsed /* f0 */) {
    // References
    // -> static float sGameTime;
}

// Range: 0x8008BA0C -> 0x8008BA14
void iTimeSetGame(float time /* f0 */) {
    // References
    // -> static float sGameTime;
}

// Range: 0x8008BA14 -> 0x8008BA18
void iProfileClear() {}

// Range: 0x8008BA18 -> 0x8008BA1C
void iFuncProfileDump() {}

// total size: 0xC
struct prof_info {
    // Members
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int len; // offset 0x4, size 0x4
    unsigned int count; // offset 0x8, size 0x4
};

