/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iTime.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012CA14 -> 0x8012CBA0
*/
long long sStartupTime; // size: 0x8, address: 0x80D69DA8
// Range: 0x8012CA14 -> 0x8012CA3C
void iTimeInit() {
    // References
    // -> long long sStartupTime;
}

// Range: 0x8012CA3C -> 0x8012CA40
void iTimeExit() {}

// Range: 0x8012CA40 -> 0x8012CAA0
long long iTimeGet() {
    // Local variables
    long long curTime; // r30
    long long time; // r28

    // References
    // -> long long sStartupTime;
}

// Range: 0x8012CAA0 -> 0x8012CB0C
float iTimeDiffSec(long long time /* r1+0x8 */) {
    // Local variables
    float sec; // f31
}

// Range: 0x8012CB0C -> 0x8012CB54
float iTimeDiffSec(long long t0 /* r1+0x8 */, long long t1 /* r1+0x10 */) {}

static float sGameTime; // size: 0x4, address: 0x80D69DB0
// Range: 0x8012CB54 -> 0x8012CB5C
float iTimeGetGame() {
    // References
    // -> static float sGameTime;
}

// Range: 0x8012CB5C -> 0x8012CB6C
void iTimeGameAdvance(float elapsed /* f1 */) {
    // References
    // -> static float sGameTime;
}

// Range: 0x8012CB6C -> 0x8012CB74
void iTimeSetGame(float time /* f1 */) {
    // References
    // -> static float sGameTime;
}

// Range: 0x8012CB74 -> 0x8012CB78
void iProfileClear() {}

// Range: 0x8012CB78 -> 0x8012CB7C
void iFuncProfileDump() {}

// Range: 0x8012CB7C -> 0x8012CB9C
void iFuncProfileFuncs() {}

// Range: 0x8012CB9C -> 0x8012CBA0
void iInstrProfileDump() {}

// total size: 0xC
struct prof_info {
    // Members
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int len; // offset 0x4, size 0x4
    unsigned int count; // offset 0x8, size 0x4
};

