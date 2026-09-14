/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000EFF8 -> 0x8000F004
*/
// Range: 0x8000EFF8 -> 0x8000F004
// this: r0
struct xVec2 & xVec2::operator=(float f /* f0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000F124 -> 0x8000F200
*/
// Range: 0x8000F124 -> 0x8000F130
// this: r0
struct xVec2 & xVec2::assign(float x /* f0 */, float y /* f0 */) {}

// Range: 0x8000F130 -> 0x8000F154
// this: r0
float xVec2::length() const {}

// Range: 0x8000F154 -> 0x8000F16C
// this: r0
float xVec2::length2() const {}

// Range: 0x8000F16C -> 0x8000F188
// this: r0
float xVec2::dot(const struct xVec2 & c /* r0 */) const {}

// Range: 0x8000F188 -> 0x8000F1AC
// this: r0
struct xVec2 & xVec2::operator-=(const struct xVec2 & v /* r0 */) {}

// Range: 0x8000F1AC -> 0x8000F1C8
// this: r0
struct xVec2 & xVec2::operator*=(float f /* f0 */) {}

// Range: 0x8000F1C8 -> 0x8000F1EC
// this: r0
struct xVec2 & xVec2::operator/=(float f /* f0 */) {
    // Local variables
    float i; // f1
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001B450 -> 0x8001B48C
*/
// Range: 0x8001B450 -> 0x8001B48C
// this: r0
struct xVec2 xVec2::operator-(const struct xVec2 & v /* r0 */) const {
    // Local variables
    struct xVec2 temp; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001DEF8 -> 0x8001DF64
*/
// Range: 0x8001DEF8 -> 0x8001DF28
// this: r0
struct basic_rect & basic_rect::contract(float left /* f1 */, float top /* f2 */, float right /* f3 */, float bottom /* f4 */) {}

// Range: 0x8001DF28 -> 0x8001DF64
// this: r0
struct basic_rect & basic_rect::expand(float left /* f0 */, float top /* f0 */, float right /* f0 */, float bottom /* f0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800246D8 -> 0x800246D8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800384AC -> 0x800387C0
*/
// Range: 0x800384AC -> 0x800384D4
// this: r0
struct basic_rect & basic_rect::scale(float xs /* f1 */, float ys /* f2 */) {}

// Range: 0x800384D4 -> 0x80038508
// this: r0
struct basic_rect & basic_rect::scale(float xs /* f0 */, float ys /* f0 */, float ws /* f0 */, float hs /* f0 */) {}

// Range: 0x80038508 -> 0x8003851C
// this: r0
struct basic_rect & basic_rect::assign(float x /* f0 */, float y /* f0 */, float w /* f0 */, float h /* f0 */) {}

// Range: 0x8003851C -> 0x80038630
// this: r0
void basic_rect::clip(struct basic_rect & r1 /* r0 */, struct basic_rect & r2 /* r0 */) const {
    // Local variables
    float xratio; // f5
    float yratio; // f0
    float d1; // f2
    float d2; // f3
    float d1; // f2
    float d2; // f3
    float r; // f3
    float cr; // f4
    float b; // f3
    float cb; // f4
}

// Range: 0x80038630 -> 0x80038664
// this: r0
unsigned char basic_rect::empty() const {}

// Range: 0x80038664 -> 0x80038728
// this: r30
struct basic_rect & basic_rect::operator|=(const struct basic_rect & c /* r31 */) {
    // Local variables
    float l; // r1+0x24
    float t; // r1+0x20
    float r; // r1+0x1C
    float b; // r1+0x18
    float cl; // r1+0x14
    float ct; // r1+0x10
    float cr; // r1+0xC
    float cb; // r1+0x8
}

// Range: 0x80038728 -> 0x80038744
// this: r0
struct basic_rect & basic_rect::set_bounds(float left /* f0 */, float top /* f0 */, float right /* f0 */, float bottom /* f0 */) {}

// Range: 0x80038744 -> 0x80038778
// this: r0
void basic_rect::get_bounds(float & left /* r0 */, float & top /* r0 */, float & right /* r0 */, float & bottom /* r0 */) const {}

// Range: 0x80038778 -> 0x80038794
// this: r0
struct basic_rect & basic_rect::move(float x /* f0 */, float y /* f0 */) {}

// Range: 0x80038794 -> 0x800387C0
// this: r0
struct basic_rect & basic_rect::scale(float vs /* f1 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003EE24 -> 0x8003EE24
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004F38C -> 0x8004F400
*/
// Range: 0x8004F38C -> 0x8004F400
float xMath2NearestPointOnLine(float & Px /* r0 */, float & Py /* r0 */, float Cx /* f0 */, float Cy /* f0 */, float Ax /* f0 */, float Ay /* f0 */, float Bx /* f0 */, float By /* f0 */) {
    // Local variables
    float ABx; // f8
    float ABy; // f9
    float AB_AC; // f1
    float AB_AB; // f0
    float t; // f1
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004FF6C -> 0x8004FF6C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800547C8 -> 0x8005482C
*/
// Range: 0x800547C8 -> 0x800547E4
float xVec2Dot(const struct xVec2 * v1 /* r0 */, const struct xVec2 * v2 /* r0 */) {}

// Range: 0x800547E4 -> 0x800547F0
void xVec2Init(struct xVec2 * v /* r0 */, float x /* f0 */, float y /* f0 */) {}

// Range: 0x800547F0 -> 0x8005482C
// this: r0
struct xVec2 xVec2::operator*(float f /* f0 */) const {
    // Local variables
    struct xVec2 temp; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80055D14 -> 0x80055D14
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80061F18 -> 0x80061F18
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006FC30 -> 0x8006FC30
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80076D40 -> 0x80076D90
*/
// Range: 0x80076D40 -> 0x80076D64
// this: r0
struct basic_rect & basic_rect::contract(float v /* f1 */) {}

// Range: 0x80076D64 -> 0x80076D90
// this: r0
struct basic_rect & basic_rect::expand(float v /* f1 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008027C -> 0x800802AC
*/
// Range: 0x8008027C -> 0x800802AC
float xVec2Dist(float x1 /* f0 */, float y1 /* f0 */, float x2 /* f0 */, float y2 /* f0 */) {
    // Local variables
    float dx; // f1
    float dy; // f0
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800976C4 -> 0x800976C4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A9534 -> 0x800A9558
*/
// Range: 0x800A9534 -> 0x800A9558
// this: r0
struct xVec2 & xVec2::assign(float v /* f1 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800AD918 -> 0x800AD918
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B3290 -> 0x800B3290
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BDECC -> 0x800BDECC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BEE20 -> 0x800BEE20
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C2DF4 -> 0x800C2DF4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DCE60 -> 0x800DCE60
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E2BDC -> 0x800E2BDC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E9068 -> 0x800E9068
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800ED494 -> 0x800ED494
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F1D10 -> 0x800F1D10
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F5400 -> 0x800F5400
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F6F90 -> 0x800F6F90
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010387C -> 0x8010387C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80104610 -> 0x80104610
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010CC60 -> 0x8010CC60
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010D2AC -> 0x8010D2AC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80112990 -> 0x80112990
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80120860 -> 0x80120860
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801294D0 -> 0x801294D0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012AEB0 -> 0x8012AEB0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012DC84 -> 0x8012DC84
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012E584 -> 0x8012E584
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012F5D0 -> 0x8012F5D0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80131460 -> 0x80131460
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80133200 -> 0x80133200
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80134410 -> 0x80134410
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801365B4 -> 0x801365B4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80137988 -> 0x80137988
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80138F00 -> 0x801390A4
*/
// Range: 0x80138F00 -> 0x80138F3C
// this: r31
struct xVec2 & xVec2::normalize() {}

// Range: 0x80138F3C -> 0x80138F60
// this: r0
void xVec2::Sub(const struct xVec2 & a /* r0 */, const struct xVec2 & b /* r0 */) {}

// Range: 0x80138F60 -> 0x80138F84
void xVec2Inv(struct xVec2 * o /* r0 */, const struct xVec2 * v /* r0 */) {}

// Range: 0x80138F84 -> 0x80138FA0
void xVec2SMul(struct xVec2 * o /* r0 */, const struct xVec2 * v /* r0 */, float s /* f0 */) {}

// Range: 0x80138FA0 -> 0x80138FC0
void xVec2Copy(struct xVec2 * dst /* r0 */, const struct xVec2 * src /* r0 */) {}

// Range: 0x80138FC0 -> 0x80139020
// this: r30
struct xVec2 & xVec2::safe_normalize(const struct xVec2 & safety /* r31 */) {
    // Local variables
    float len2; // f0
}

// Range: 0x80139020 -> 0x8013905C
// this: r0
struct xVec2 xVec2::operator+(const struct xVec2 & v /* r0 */) const {
    // Local variables
    struct xVec2 temp; // r1+0x8
}

// Range: 0x8013905C -> 0x80139080
// this: r0
struct xVec2 & xVec2::operator+=(const struct xVec2 & v /* r0 */) {}

// Range: 0x80139080 -> 0x801390A4
void xVec2Sub(struct xVec2 * o /* r0 */, const struct xVec2 * v1 /* r0 */, const struct xVec2 * v2 /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013A9BC -> 0x8013ABA0
*/
// Range: 0x8013A9BC -> 0x8013A9E0
// this: r0
void xVec2::AddScale(const struct xVec3 & p /* r0 */, const struct xVec2 & d /* r0 */, float s /* f0 */) {}

// Range: 0x8013A9E0 -> 0x8013AA04
// this: r0
void xVec2::Sub(const struct xVec2 & a /* r0 */, const struct xVec3 & b /* r0 */) {}

// Range: 0x8013AA04 -> 0x8013AA30
// this: r0
void xVec2::ScaleDiff(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, float s /* f0 */) {}

// Range: 0x8013AA30 -> 0x8013AA5C
// this: r0
void xVec2::Lerp(const struct xVec2 & start /* r0 */, const struct xVec2 & end /* r0 */, float percent /* f0 */) {}

// Range: 0x8013AA5C -> 0x8013AA80
// this: r0
void xVec2::AddScale(const struct xVec2 & p /* r0 */, const struct xVec2 & d /* r0 */, float s /* f0 */) {}

// Range: 0x8013AA80 -> 0x8013AAA4
// this: r0
void xVec2::Add(const struct xVec2 & a /* r0 */, const struct xVec2 & b /* r0 */) {}

// Range: 0x8013AAA4 -> 0x8013AAC0
// this: r0
void xVec2::Scale(const struct xVec2 & d /* r0 */, float s /* f0 */) {}

// Range: 0x8013AAC0 -> 0x8013AAE4
// this: r0
void xVec2::AddScale(const struct xVec2 & d /* r0 */, float s /* f0 */) {}

// Range: 0x8013AAE4 -> 0x8013AB60
// this: r31
float xVec2::SafeNormalize() {
    // Local variables
    float length; // f1
}

// Range: 0x8013AB60 -> 0x8013AB7C
// this: r0
void xVec2::Scale(float s /* f0 */) {}

// Range: 0x8013AB7C -> 0x8013ABA0
// this: r0
void xVec2::Sub(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013BB6C -> 0x8013BB6C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80147450 -> 0x80147450
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801478B4 -> 0x801478B4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80148AEC -> 0x80148AEC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80149088 -> 0x80149088
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014C5AC -> 0x8014C5AC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014CC20 -> 0x8014CC20
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014D780 -> 0x8014D780
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014F400 -> 0x8014F400
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014FF40 -> 0x8014FF40
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80152044 -> 0x80152044
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80153694 -> 0x80153694
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80158268 -> 0x80158268
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80167110 -> 0x80167110
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801771C0 -> 0x801771C0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017831C -> 0x8017831C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017AB6C -> 0x8017AB6C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017C4EC -> 0x8017C4EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80180940 -> 0x80180940
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018C184 -> 0x8018C184
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80194A88 -> 0x80194A9C
*/
// Range: 0x80194A88 -> 0x80194A9C
float xVec2Dist2(float x1 /* f0 */, float y1 /* f0 */, float x2 /* f0 */, float y2 /* f0 */) {
    // Local variables
    float dx; // f1
    float dy; // f0
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B6A2C -> 0x801B6A2C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C365C -> 0x801C365C
*/

