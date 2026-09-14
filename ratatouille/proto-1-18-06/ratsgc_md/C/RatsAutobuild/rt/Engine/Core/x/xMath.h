/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000EEE8 -> 0x8000EFF0
*/
// Range: 0x8000EEE8 -> 0x8000EF20
float xSCurve(float t /* f1 */) {}

// Range: 0x8000EF20 -> 0x8000EFA4
float xrmod(float ang /* f1 */) {
    // Local variables
    float frac; // f31
}

// Range: 0x8000EFC8 -> 0x8000EFF0
float range_limit(float v /* f0 */, float minv /* f2 */, float maxv /* f3 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000F29C -> 0x8000F350
*/
// Range: 0x8000F29C -> 0x8000F2FC
void xDampSpring(float & s /* r30 */, float & v /* r31 */, float dt /* f30 */, float k /* f31 */) {}

// Range: 0x8000F2FC -> 0x8000F328
void xDampSpring(float & s /* r0 */, float & v /* r0 */, float dt /* f0 */, float k /* f0 */, float e /* f0 */) {
    // Local variables
    float c2; // f5
}

// Range: 0x8000F328 -> 0x8000F350
float xDampSpringCoeff(float dt /* f1 */, float k /* f0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80011C9C -> 0x80011CE4
*/
// Range: 0x80011C9C -> 0x80011CC4
int xBinom(int n /* r0 */, int r /* r0 */) {
    // References
    // -> int binom_triangle[528];
}

// Range: 0x80011CC4 -> 0x80011CE4
int range_limit(int v /* r3 */, int minv /* r4 */, int maxv /* r5 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800246D8 -> 0x800247E8
*/
// Range: 0x800246D8 -> 0x80024704
// this: r0
float xResponseCurve::end_t() const {}

// Range: 0x80024704 -> 0x80024720
// this: r0
struct inode * xResponseCurve::get_node(unsigned long index /* r0 */) const {}

// Range: 0x80024720 -> 0x8002472C
// this: r0
float xResponseCurve::start_t() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002F54C -> 0x8002F54C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80044FC0 -> 0x8004502C
*/
// Range: 0x80044FC0 -> 0x8004502C
// this: r0
void xResponseCurve::find_active_node(float t /* f0 */, unsigned long stride /* r0 */) const {
    // Local variables
    unsigned int max_active_node; // r6
    const unsigned char * it; // r7
    struct inode & next; // r0
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005A560 -> 0x8005A560
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80061F70 -> 0x80061F70
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008D5EC -> 0x8008D5EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A911C -> 0x800A9274
*/
// Range: 0x800A911C -> 0x800A9178
// this: r31
float xResponseCurve::clamp_t_min_max(float t /* f30 */) const {}

// Range: 0x800A9178 -> 0x800A91F4
// this: r30
float xResponseCurve::max_t() const {
    // Local variables
    float max; // f31
    unsigned int i; // r31
    float next_t; // f0
}

// Range: 0x800A91F4 -> 0x800A9270
// this: r30
float xResponseCurve::min_t() const {
    // Local variables
    float min; // f31
    unsigned int i; // r31
    float next_t; // f0
}

// Range: 0x800A9270 -> 0x800A9274
void xResponseCurve::add_tweaks() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800AE8E4 -> 0x800AE8E4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B87E4 -> 0x800B87E4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F1DB4 -> 0x800F1DB4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010387C -> 0x8010387C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801045A8 -> 0x801045E0
*/
// Range: 0x801045A8 -> 0x801045E0
int log2ceil(int value /* r3 */) {
    // Local variables
    int power; // r4
    int v; // r0
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010CC60 -> 0x8010CC60
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010D2AC -> 0x8010D2AC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80112BC4 -> 0x80112BC4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80126A98 -> 0x80126A98
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012DC20 -> 0x8012DC20
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80137920 -> 0x80137920
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801472F0 -> 0x801472F0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801523D4 -> 0x801523D4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80155988 -> 0x80155988
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015831C -> 0x8015831C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80169CD0 -> 0x80169CD0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016CDD4 -> 0x8016CDD4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016DEA8 -> 0x8016DEA8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016E310 -> 0x8016E310
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017AB6C -> 0x8017AB6C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80180AD8 -> 0x80180AD8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018F384 -> 0x8018F384
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A3A48 -> 0x801A3A48
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BC094 -> 0x801BC094
*/

