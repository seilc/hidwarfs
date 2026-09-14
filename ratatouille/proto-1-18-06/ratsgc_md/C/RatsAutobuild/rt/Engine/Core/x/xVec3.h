/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000A100 -> 0x8000A134
*/
// Range: 0x8000A100 -> 0x8000A134
// this: r0
void xVec3::AddScale(const struct xVec3 & d /* r0 */, float s /* f0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000C4B0 -> 0x8000C6C4
*/
// Range: 0x8000C4B0 -> 0x8000C4C0
// this: r0
struct xVec3 & xVec3::assign(float x /* f0 */, float y /* f0 */, float z /* f0 */) {}

// Range: 0x8000C4C0 -> 0x8000C4E4
// this: r0
float xVec3::length2() const {}

// Range: 0x8000C4E4 -> 0x8000C524
// this: r0
void xVec3::ScaleDiff(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, float scale /* f0 */) {}

// Range: 0x8000C524 -> 0x8000C548
// this: r0
float xVec3::length() const {}

// Range: 0x8000C548 -> 0x8000C57C
// this: r0
void xVec3::Sub(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */) {}

// Range: 0x8000C57C -> 0x8000C5AC
// this: r5
float xVec3::Distance(const struct xVec3 & other /* r0 */) const {
    // Local variables
    struct xVec3 diff; // r1+0x8
}

// Range: 0x8000C5D0 -> 0x8000C600
// this: r5
float xVec3::Distance2(const struct xVec3 & other /* r0 */) const {
    // Local variables
    struct xVec3 diff; // r1+0x8
}

// Range: 0x8000C600 -> 0x8000C628
// this: r0
float xVec3::dot(const struct xVec3 & c /* r0 */) const {}

// Range: 0x8000C628 -> 0x8000C668
// this: r0
struct xVec3 & xVec3::cross(const struct xVec3 & c0 /* r0 */, const struct xVec3 & c1 /* r0 */) {}

// Range: 0x8000C668 -> 0x8000C69C
// this: r0
void xVec3::Add(const struct xVec3 & a /* r0 */) {}

// Range: 0x8000C69C -> 0x8000C6C4
// this: r0
void xVec3::Scale(float scalar /* f0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000ED08 -> 0x8000EE74
*/
// Range: 0x8000ED08 -> 0x8000ED60
// this: r31
float xVec3::normalize() {
    // Local variables
    float len2; // f0
    float len; // f31
}

// Range: 0x8000ED60 -> 0x8000ED88
// this: r0
void xVec3::Negate(const struct xVec3 & a /* r0 */) {}

// Range: 0x8000ED88 -> 0x8000EDBC
// this: r0
struct xVec3 & xVec3::operator-=(const struct xVec3 & v /* r0 */) {}

// Range: 0x8000EDBC -> 0x8000EDE4
// this: r0
struct xVec3 & xVec3::operator*=(float f /* f0 */) {}

// Range: 0x8000EDE4 -> 0x8000EE18
// this: r0
struct xVec3 & xVec3::operator+=(const struct xVec3 & v /* r0 */) {}

// Range: 0x8000EE18 -> 0x8000EE4C
// this: r0
void xVec3::Add(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */) {}

// Range: 0x8000EE4C -> 0x8000EE74
// this: r0
void xVec3::Scale(const struct xVec3 & a /* r0 */, float scalar /* f0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000F244 -> 0x8000F29C
*/
// Range: 0x8000F244 -> 0x8000F26C
// this: r0
struct xVec3 & xVec3::negate() {}

// Range: 0x8000F26C -> 0x8000F29C
// this: r0
struct xVec3 & xVec3::operator/=(float f /* f0 */) {
    // Local variables
    float i; // f1
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80011B9C -> 0x80011C9C
*/
// Range: 0x80011B9C -> 0x80011BC4
// this: r0
struct xVec3 & xVec3::operator+=(float f /* f0 */) {}

// Range: 0x80011BC4 -> 0x80011BEC
// this: r0
struct xVec3 & xVec3::operator-=(float f /* f0 */) {}

// Range: 0x80011BEC -> 0x80011C2C
// this: r0
void xVec3::Lerp(const struct xVec3 & start /* r0 */, const struct xVec3 & end /* r0 */, float percent /* f0 */) {}

// Range: 0x80011C68 -> 0x80011C9C
// this: r0
void xVec3::AddScale(const struct xVec3 & p /* r0 */, const struct xVec3 & d /* r0 */, float s /* f0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001B244 -> 0x8001B310
*/
// Range: 0x8001B244 -> 0x8001B278
// this: r0
struct xVec3 & xVec3::set_abs() {}

// Range: 0x8001B278 -> 0x8001B2EC
// this: r30
float xVec3::safe_normalize(const struct xVec3 & safety /* r31 */) {
    // Local variables
    float len; // f31
}

// Range: 0x8001B2EC -> 0x8001B310
// this: r0
float xVec3::up_normalize() {
    // References
    // -> struct xVec3 m_UnitAxisY;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800241D0 -> 0x800241D0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80028C5C -> 0x80028C84
*/
// Range: 0x80028C5C -> 0x80028C84
// this: r0
struct xVec3 & xVec3::assign(float v /* f1 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002B7A8 -> 0x8002B7A8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002C5B0 -> 0x8002C5C0
*/
// Range: 0x8002C5B0 -> 0x8002C5C0
// this: r0
struct xVec3 & xVec3::operator=(float f /* f0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002F048 -> 0x8002F070
*/
// Range: 0x8002F048 -> 0x8002F070
// this: r0
void xVec3::Negate() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80038BA0 -> 0x80038BA0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003B408 -> 0x8003B408
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003EE24 -> 0x8003EE24
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80043B10 -> 0x80043B10
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80049EA8 -> 0x80049EA8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004C4F0 -> 0x8004C4F0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004F400 -> 0x8004F400
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80051990 -> 0x80051990
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80052DA4 -> 0x80052DA4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005482C -> 0x800548EC
*/
// Range: 0x8005482C -> 0x8005486C
// this: r0
void xVec3::Combine(const struct xVec3 & a /* r0 */, float scale0 /* f0 */, const struct xVec3 & b /* r0 */, float scale1 /* f0 */) {}

// Range: 0x8005486C -> 0x800548A0
// this: r0
void xVec3::ScaleComponents(const struct xVec3 & scale /* r0 */) {}

// Range: 0x800548A0 -> 0x800548EC
// this: r0
void xVec3::SubAdd(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, const struct xVec3 & c /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80055B98 -> 0x80055B98
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005A560 -> 0x8005A560
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006494C -> 0x8006494C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80069590 -> 0x80069590
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006A9B0 -> 0x8006A9B0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006DB60 -> 0x8006DB84
*/
// Range: 0x8006DB60 -> 0x8006DB84
// this: r0
float xVec3::at_normalize() {
    // References
    // -> struct xVec3 m_UnitAxisZ;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80072320 -> 0x80072320
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800830F0 -> 0x800830F0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008D5EC -> 0x8008D5EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800972F4 -> 0x800974D0
*/
// Range: 0x800972F4 -> 0x80097340
// this: r0
void xVec3::AddSub(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */) {}

// Range: 0x80097340 -> 0x800973A4
// this: r0
void xVec3::SubAddSub(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, const struct xVec3 & c /* r0 */, const struct xVec3 & d /* r0 */) {}

// Range: 0x800973A4 -> 0x80097408
// this: r0
void xVec3::SubAddAdd(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, const struct xVec3 & c /* r0 */, const struct xVec3 & d /* r0 */) {}

// Range: 0x80097408 -> 0x8009746C
// this: r0
void xVec3::AddAddSub(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, const struct xVec3 & c /* r0 */, const struct xVec3 & d /* r0 */) {}

// Range: 0x8009746C -> 0x800974D0
// this: r0
void xVec3::AddAddAdd(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, const struct xVec3 & c /* r0 */, const struct xVec3 & d /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009ADB8 -> 0x8009ADB8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009EC64 -> 0x8009EC64
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A3ABC -> 0x800A3B20
*/
// Range: 0x800A3ABC -> 0x800A3B20
// this: r0
float xVec3::DistanceXZ(const struct xVec3 & other /* r0 */) const {
    // Local variables
    struct xVec3 diff; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A911C -> 0x800A911C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800AD918 -> 0x800AD93C
*/
// Range: 0x800AD918 -> 0x800AD93C
// this: r0
float xVec3::right_normalize() {
    // References
    // -> struct xVec3 m_UnitAxisX;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800AE8E4 -> 0x800AE8E4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B3308 -> 0x800B3374
*/
// Range: 0x800B3308 -> 0x800B3334
// this: r0
unsigned char xVec3::operator!=(const struct xVec3 & v /* r0 */) const {}

// Range: 0x800B3334 -> 0x800B3374
// this: r0
unsigned char xVec3::operator==(const struct xVec3 & v /* r0 */) const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B44DC -> 0x800B44DC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B5A80 -> 0x800B5A80
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B8880 -> 0x800B88C4
*/
// Range: 0x800B8880 -> 0x800B88C4
// this: r0
void xVec3::Average(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BAEA4 -> 0x800BAEA4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C24F8 -> 0x800C24F8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C2DA8 -> 0x800C2DA8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C8370 -> 0x800C8370
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CE044 -> 0x800CE044
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D36B0 -> 0x800D36B0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DCDD4 -> 0x800DCDD4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DDFA8 -> 0x800DDFA8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E2C60 -> 0x800E2C60
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E8860 -> 0x800E8860
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800ED368 -> 0x800ED368
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800EEBA8 -> 0x800EEBA8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F1DB4 -> 0x800F1DB4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F5504 -> 0x800F5588
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F6F90 -> 0x800F6F90
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F7804 -> 0x800F7804
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F9D94 -> 0x800F9D94
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F9F64 -> 0x800F9F64
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800FCFE4 -> 0x800FD024
*/
// Range: 0x800FCFE4 -> 0x800FD004
// this: r0
void xVec3::cross_xpos(const struct xVec3 & c0 /* r0 */) {}

// Range: 0x800FD004 -> 0x800FD024
// this: r0
void xVec3::cross_ypos(const struct xVec3 & c0 /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800FF948 -> 0x800FF948
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80100950 -> 0x80100950
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010387C -> 0x8010387C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80104610 -> 0x80104610
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80107384 -> 0x80107384
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80109ED4 -> 0x80109ED4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010A458 -> 0x8010A458
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010CBA4 -> 0x8010CBFC
*/
// Range: 0x8010CBA4 -> 0x8010CBFC
// this: r0
void xVec3::AddCombine(const struct xVec3 & a /* r0 */, float scale0 /* f0 */, const struct xVec3 & b /* r0 */, float scale1 /* f0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010D248 -> 0x8010D2AC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80111FB8 -> 0x80111FB8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80112B40 -> 0x80112BC4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80115020 -> 0x80115020
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80116778 -> 0x80116778
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801183D4 -> 0x801183D4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801187B8 -> 0x801187B8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011E1CC -> 0x8011E1CC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80120950 -> 0x80120950
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801226EC -> 0x801226EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80124890 -> 0x80124890
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80125B54 -> 0x80125B54
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80126A0C -> 0x80126A0C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80129334 -> 0x80129334
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012AEB0 -> 0x8012AEB0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012B724 -> 0x8012B724
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012DC20 -> 0x8012DC20
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012E584 -> 0x8012E584
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012F56C -> 0x8012F56C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80131068 -> 0x80131068
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80131460 -> 0x80131460
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80133254 -> 0x801332D0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80133610 -> 0x80133610
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80134410 -> 0x80134410
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80134D20 -> 0x80134D20
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80136544 -> 0x80136544
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801369E4 -> 0x801369E4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80137988 -> 0x80137988
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801390B8 -> 0x801390B8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013ABBC -> 0x8013ABBC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013BB6C -> 0x8013BB6C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013D02C -> 0x8013D02C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013D940 -> 0x8013D9C0
*/
// Range: 0x8013D940 -> 0x8013D974
// this: r0
void xVec3::Sub(const struct xVec3 & a /* r0 */) {}

// Range: 0x8013D974 -> 0x8013D9C0
// this: r0
void xVec3::AddSub(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, const struct xVec3 & c /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80145728 -> 0x80145728
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801472F0 -> 0x801472F0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80147450 -> 0x80147450
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801478B4 -> 0x801478B4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80149A20 -> 0x80149A20
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80149F7C -> 0x80149F7C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014C014 -> 0x8014C014
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014C5AC -> 0x8014C5AC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014D780 -> 0x8014D780
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014EF68 -> 0x8014EF68
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014F464 -> 0x8014F464
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014FF40 -> 0x8014FFA4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80152044 -> 0x801520A8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801523D4 -> 0x801523D4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80153694 -> 0x801536F8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80155A38 -> 0x80155B98
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80158268 -> 0x80158268
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015FC3C -> 0x8015FC3C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80165848 -> 0x80165848
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80167108 -> 0x80167108
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80169BF8 -> 0x80169BF8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016C904 -> 0x8016C904
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016DEA0 -> 0x8016DEA0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016E6D8 -> 0x8016E6D8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016EBD0 -> 0x8016EBD0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801740EC -> 0x801740EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801757C0 -> 0x801757C0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801771C0 -> 0x801771C0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80178238 -> 0x80178238
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017AAA4 -> 0x8017AB6C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017B3C8 -> 0x8017B3C8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017C3E0 -> 0x8017C3E0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017E064 -> 0x8017E064
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80180940 -> 0x80180940
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80181664 -> 0x80181664
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80181804 -> 0x80181804
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801829D0 -> 0x801829D0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80183114 -> 0x80183114
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80183458 -> 0x80183458
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80187C38 -> 0x80187C38
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801886B8 -> 0x801886B8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80189BA4 -> 0x80189BA4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018A8C4 -> 0x8018A8C4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018C184 -> 0x8018C1E8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018E15C -> 0x8018E15C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018F12C -> 0x8018F12C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801900EC -> 0x801900EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80190EDC -> 0x80190EDC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80194A14 -> 0x80194A88
*/
// Range: 0x80194A14 -> 0x80194A88
// this: r30
struct xVec3 & xVec3::rotateY(const float & fRadians /* r31 */) {
    // Local variables
    float fSin; // f0
    float fCos; // f0
    float fTemp20; // f1
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801957F8 -> 0x801957F8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80197CF0 -> 0x80197CF0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80198DF8 -> 0x80198DF8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019ACEC -> 0x8019ACEC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019B2BC -> 0x8019B2BC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019C414 -> 0x8019C43C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019C990 -> 0x8019C990
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019CD6C -> 0x8019CD6C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019EDE8 -> 0x8019EDE8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019FF28 -> 0x8019FF28
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A0758 -> 0x801A0758
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A4324 -> 0x801A4324
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A61B8 -> 0x801A61B8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A74E4 -> 0x801A74E4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A86A4 -> 0x801A86A4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801AB294 -> 0x801AB294
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801AC668 -> 0x801AC668
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801ACED4 -> 0x801ACED4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801AF194 -> 0x801AF194
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B1148 -> 0x801B1148
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B1A70 -> 0x801B1A70
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B4D98 -> 0x801B4D98
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B7A10 -> 0x801B7A10
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B8C84 -> 0x801B8C84
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B9C40 -> 0x801B9C40
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BA658 -> 0x801BA658
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BBFDC -> 0x801BBFDC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BCD68 -> 0x801BCD68
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BDF78 -> 0x801BDF78
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C0018 -> 0x801C0018
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C0A68 -> 0x801C0A68
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C0DB4 -> 0x801C0DB4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C1BC0 -> 0x801C1BC0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C2928 -> 0x801C2928
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C35F8 -> 0x801C35F8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C3F20 -> 0x801C3F20
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C493C -> 0x801C493C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C7E7C -> 0x801C7E7C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C8558 -> 0x801C85A8
*/
// Range: 0x801C8558 -> 0x801C85A8
// this: r0
float xVec3::Distance2XZ(const struct xVec3 & other /* r0 */) const {
    // Local variables
    struct xVec3 diff; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C90D0 -> 0x801C90D0
*/

