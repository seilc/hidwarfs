/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000C7D8 -> 0x8000C80C
*/
// Range: 0x8000C7D8 -> 0x8000C80C
// this: r3
void xVec3::AddScale(const struct xVec3 & d /* r4 */, float s /* f1 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80010E9C -> 0x800110EC
*/
// Range: 0x80010E9C -> 0x80010EAC
// this: r3
struct xVec3 & xVec3::assign(float x /* f1 */, float y /* f2 */, float z /* f3 */) {}

// Range: 0x80010EAC -> 0x80010ED4
// this: r3
float xVec3::length2() const {}

// Range: 0x80010ED4 -> 0x80010F14
// this: r3
void xVec3::ScaleDiff(const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */, float scale /* f1 */) {}

// Range: 0x80010F14 -> 0x80010F40
// this: r1+0x8
float xVec3::length() const {}

// Range: 0x80010F40 -> 0x80010F74
// this: r3
void xVec3::Sub(const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */) {}

// Range: 0x80010F74 -> 0x80010FB0
// this: r1+0x8
float xVec3::Distance(const struct xVec3 & other /* r1+0xC */) const {
    // Local variables
    struct xVec3 diff; // r1+0x10
}

// Range: 0x80010FD4 -> 0x80011010
// this: r1+0x8
float xVec3::Distance2(const struct xVec3 & other /* r1+0xC */) const {
    // Local variables
    struct xVec3 diff; // r1+0x10
}

// Range: 0x80011010 -> 0x80011038
// this: r3
float xVec3::dot(const struct xVec3 & c /* r4 */) const {}

// Range: 0x80011038 -> 0x80011090
// this: r3
struct xVec3 & xVec3::cross(const struct xVec3 & c0 /* r4 */, const struct xVec3 & c1 /* r5 */) {}

// Range: 0x80011090 -> 0x800110C4
// this: r3
void xVec3::Add(const struct xVec3 & a /* r4 */) {}

// Range: 0x800110C4 -> 0x800110EC
// this: r3
void xVec3::Scale(float scalar /* f1 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80016174 -> 0x80016390
*/
// Range: 0x80016174 -> 0x800161A8
// this: r3
void xVec3::AddScale(const struct xVec3 & p /* r4 */, const struct xVec3 & d /* r5 */, float s /* f1 */) {}

// ERROR: Failed to emit tag 4757B (GlobalSubroutine)
// Range: 0x8001627C -> 0x800162A4
// this: r3
void xVec3::Negate(const struct xVec3 & a /* r4 */) {}

// Range: 0x800162A4 -> 0x800162D8
// this: r3
struct xVec3 & xVec3::operator-=(const struct xVec3 & v /* r4 */) {}

// Range: 0x800162D8 -> 0x80016300
// this: r3
struct xVec3 & xVec3::operator*=(float f /* f1 */) {}

// Range: 0x80016300 -> 0x80016334
// this: r3
struct xVec3 & xVec3::operator+=(const struct xVec3 & v /* r4 */) {}

// Range: 0x80016334 -> 0x80016368
// this: r3
void xVec3::Add(const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */) {}

// Range: 0x80016368 -> 0x80016390
// this: r3
void xVec3::Scale(const struct xVec3 & a /* r4 */, float scalar /* f1 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80016960 -> 0x800169D0
*/
// Range: 0x80016960 -> 0x80016988
// this: r3
struct xVec3 & xVec3::negate() {}

// Range: 0x80016988 -> 0x800169D0
// this: r3
struct xVec3 & xVec3::operator/=(float f /* f1 */) {
    // Local variables
    float i; // f31
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001B028 -> 0x8001B100
*/
// Range: 0x8001B028 -> 0x8001B050
// this: r3
struct xVec3 & xVec3::operator+=(float f /* f1 */) {}

// Range: 0x8001B050 -> 0x8001B078
// this: r3
struct xVec3 & xVec3::operator-=(float f /* f1 */) {}

// Range: 0x8001B078 -> 0x8001B0C4
// this: r3
void xVec3::Lerp(const struct xVec3 & start /* r4 */, const struct xVec3 & end /* r5 */, float percent /* f1 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002AAA4 -> 0x8002AB78
*/
// Range: 0x8002AAA4 -> 0x8002AAD8
// this: r3
struct xVec3 & xVec3::set_abs() {}

// Range: 0x8002AAD8 -> 0x8002AB4C
// this: r31
float xVec3::safe_normalize(const struct xVec3 & safety /* r1+0x8 */) {
    // Local variables
    float len; // f31
}

// Range: 0x8002AB4C -> 0x8002AB78
// this: r1+0x8
float xVec3::up_normalize() {
    // References
    // -> struct xVec3 m_UnitAxisY;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80050898 -> 0x800508FC
*/
// Range: 0x80050898 -> 0x800508FC
// this: r3
void xVec3::Average(const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */, const struct xVec3 & c /* r6 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80055A6C -> 0x80055AB8
*/
// Range: 0x80055A6C -> 0x80055AB8
// this: r3
void xVec3::AddCombine(const struct xVec3 & v /* r4 */, const struct xVec3 & a /* r5 */, float scale0 /* f1 */, const struct xVec3 & b /* r6 */, float scale1 /* f2 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005EFC8 -> 0x8005F014
*/
// Range: 0x8005EFC8 -> 0x8005EFD8
// this: r3
struct xVec3 & xVec3::operator=(float f /* f1 */) {}

// Range: 0x8005EFD8 -> 0x8005F014
// this: r1+0x8
struct xVec3 & xVec3::assign(float v /* f31 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80063218 -> 0x80063218
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800649B0 -> 0x800649B0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80069714 -> 0x8006973C
*/
// Range: 0x80069714 -> 0x8006973C
// this: r3
void xVec3::Negate() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80078944 -> 0x80078944
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007E7D4 -> 0x8007E7D4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800873B8 -> 0x800873B8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008F5C4 -> 0x8008F5C4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009B004 -> 0x8009B004
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A286C -> 0x800A286C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A8948 -> 0x800A8948
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800AFAC4 -> 0x800AFAC4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B420C -> 0x800B420C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B708C -> 0x800B714C
*/
// Range: 0x800B708C -> 0x800B70CC
// this: r3
void xVec3::Combine(const struct xVec3 & a /* r4 */, float scale0 /* f1 */, const struct xVec3 & b /* r5 */, float scale1 /* f2 */) {}

// Range: 0x800B70CC -> 0x800B7100
// this: r3
void xVec3::ScaleComponents(const struct xVec3 & scale /* r4 */) {}

// Range: 0x800B7100 -> 0x800B714C
// this: r3
void xVec3::SubAdd(const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */, const struct xVec3 & c /* r6 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B9B40 -> 0x800B9B40
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C8D10 -> 0x800C8D10
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D9400 -> 0x800D9400
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DD2F4 -> 0x800DD2F4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E6178 -> 0x800E6178
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E8694 -> 0x800E8694
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800EEB60 -> 0x800EEB8C
*/
// Range: 0x800EEB60 -> 0x800EEB8C
// this: r1+0x8
float xVec3::at_normalize() {
    // References
    // -> struct xVec3 m_UnitAxisZ;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F4F54 -> 0x800F4F54
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F833C -> 0x800F833C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801059C0 -> 0x801059C0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80119914 -> 0x80119914
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013F16C -> 0x8013F348
*/
// Range: 0x8013F16C -> 0x8013F1B8
// this: r3
void xVec3::AddSub(const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */) {}

// Range: 0x8013F1B8 -> 0x8013F21C
// this: r3
void xVec3::SubAddSub(const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */, const struct xVec3 & c /* r6 */, const struct xVec3 & d /* r7 */) {}

// Range: 0x8013F21C -> 0x8013F280
// this: r3
void xVec3::SubAddAdd(const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */, const struct xVec3 & c /* r6 */, const struct xVec3 & d /* r7 */) {}

// Range: 0x8013F280 -> 0x8013F2E4
// this: r3
void xVec3::AddAddSub(const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */, const struct xVec3 & c /* r6 */, const struct xVec3 & d /* r7 */) {}

// Range: 0x8013F2E4 -> 0x8013F348
// this: r3
void xVec3::AddAddAdd(const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */, const struct xVec3 & c /* r6 */, const struct xVec3 & d /* r7 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801466B0 -> 0x801466B0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014E840 -> 0x8014E840
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801573AC -> 0x8015743C
*/
// Range: 0x801573AC -> 0x8015743C
// this: r30
float xVec3::DistanceXZ(const struct xVec3 & other /* r31 */) const {
    // Local variables
    struct xVec3 diff; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015FC18 -> 0x8015FC18
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801679F8 -> 0x80167A24
*/
// Range: 0x801679F8 -> 0x80167A24
// this: r1+0x8
float xVec3::right_normalize() {
    // References
    // -> struct xVec3 m_UnitAxisX;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801699DC -> 0x801699DC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801722E8 -> 0x8017238C
*/
// Range: 0x801722E8 -> 0x80172324
// this: r1+0x8
unsigned char xVec3::operator!=(const struct xVec3 & v /* r1+0xC */) const {}

// Range: 0x80172324 -> 0x8017238C
// this: r3
unsigned char xVec3::operator==(const struct xVec3 & v /* r4 */) const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80174140 -> 0x80174140
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80175F60 -> 0x80175F60
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017B63C -> 0x8017B688
*/
// Range: 0x8017B63C -> 0x8017B688
// this: r3
void xVec3::Average(const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017EE18 -> 0x8017EE18
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018ADBC -> 0x8018ADBC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018B930 -> 0x8018B930
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018BD20 -> 0x8018BD20
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80193B44 -> 0x80193B44
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019E250 -> 0x8019E250
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A7738 -> 0x801A7738
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B96FC -> 0x801B96FC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BBEC0 -> 0x801BBEC0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C42A4 -> 0x801C42A4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801CDD64 -> 0x801CDD64
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D4EFC -> 0x801D4EFC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D5254 -> 0x801D5254
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D73C0 -> 0x801D73C0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DDC7C -> 0x801DDC7C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E3B2C -> 0x801E3BC8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E64C4 -> 0x801E64C4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E7114 -> 0x801E7114
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EB964 -> 0x801EB964
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EBDDC -> 0x801EBDDC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F0464 -> 0x801F04A4
*/
// Range: 0x801F0464 -> 0x801F0484
// this: r3
void xVec3::cross_xpos(const struct xVec3 & c0 /* r4 */) {}

// Range: 0x801F0484 -> 0x801F04A4
// this: r3
void xVec3::cross_ypos(const struct xVec3 & c0 /* r4 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F3AA4 -> 0x801F3AA4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F5828 -> 0x801F5828
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FC274 -> 0x801FC274
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FD460 -> 0x801FD460
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802017B4 -> 0x802017B4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802059B4 -> 0x802059B4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80205F48 -> 0x80205F48
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020A68C -> 0x8020A6E4
*/
// Range: 0x8020A68C -> 0x8020A6E4
// this: r3
void xVec3::AddCombine(const struct xVec3 & a /* r4 */, float scale0 /* f1 */, const struct xVec3 & b /* r5 */, float scale1 /* f2 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020B138 -> 0x8020B19C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80213B44 -> 0x80213B44
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802167EC -> 0x80216888
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021AC90 -> 0x8021AC90
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021D154 -> 0x8021D154
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80220C88 -> 0x80220C88
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802214B4 -> 0x802214B4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022C178 -> 0x8022C178
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80230254 -> 0x80230254
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80233568 -> 0x80233568
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80236940 -> 0x80236940
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80238544 -> 0x80238544
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802397FC -> 0x802397FC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023D96C -> 0x8023D96C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802401A0 -> 0x802401A0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80242420 -> 0x80242420
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802470E8 -> 0x802470E8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024819C -> 0x8024819C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80249E70 -> 0x80249EB4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024D1B8 -> 0x8024D1B8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024D7F8 -> 0x8024D7F8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80250784 -> 0x80250818
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80253220 -> 0x80253220
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025586C -> 0x8025586C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80258B38 -> 0x80258B38
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025B7FC -> 0x8025B7FC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025C104 -> 0x8025C104
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025D5D4 -> 0x8025D5D4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025F5BC -> 0x8025F5BC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80261904 -> 0x80261904
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80263208 -> 0x80263208
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026540C -> 0x8026540C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026647C -> 0x802664FC
*/
// Range: 0x8026647C -> 0x802664B0
// this: r3
void xVec3::Sub(const struct xVec3 & a /* r4 */) {}

// Range: 0x802664B0 -> 0x802664FC
// this: r3
void xVec3::AddSub(const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */, const struct xVec3 & c /* r6 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80270804 -> 0x80270804
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80273EC8 -> 0x80273EC8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802740D0 -> 0x802740D0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80274894 -> 0x80274894
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80276720 -> 0x80276720
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80277AC0 -> 0x80277AC0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80278568 -> 0x80278568
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027C2BC -> 0x8027C2BC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027F37C -> 0x8027F37C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80280F2C -> 0x80280F2C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80281868 -> 0x80281868
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80282A5C -> 0x80282AC0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80286B98 -> 0x80286BFC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80287384 -> 0x80287384
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802892EC -> 0x80289350
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8028C8E8 -> 0x8028CA58
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80290E40 -> 0x80290E40
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029CFC4 -> 0x8029CFC4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A459C -> 0x802A459C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A6B3C -> 0x802A6B78
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802ACD3C -> 0x802ACD3C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B1E48 -> 0x802B1E48
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B40E8 -> 0x802B40E8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B44BC -> 0x802B44BC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B4FCC -> 0x802B4FCC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B56A0 -> 0x802B56A0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BD854 -> 0x802BD854
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BFB3C -> 0x802BFB3C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C393C -> 0x802C393C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C4F34 -> 0x802C4F34
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C84BC -> 0x802C8584
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C9154 -> 0x802C9154
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CA77C -> 0x802CA77C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CDA70 -> 0x802CDA70
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D1610 -> 0x802D1610
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D3CAC -> 0x802D3CAC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D40B8 -> 0x802D40B8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D5920 -> 0x802D5920
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D6B38 -> 0x802D6B38
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D7554 -> 0x802D7554
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802DE614 -> 0x802DE614
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802DF700 -> 0x802DF700
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E169C -> 0x802E169C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E27A4 -> 0x802E27A4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E4FB8 -> 0x802E501C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E7EB8 -> 0x802E7EB8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E9430 -> 0x802E9430
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802EAB78 -> 0x802EAB78
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802EC78C -> 0x802EC78C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F2BF0 -> 0x802F2CA8
*/
// Range: 0x802F2BF0 -> 0x802F2CA8
// this: r31
struct xVec3 & xVec3::rotateY(const float & fRadians /* r30 */) {
    // Local variables
    float fSin; // f31
    float fCos; // f30
    float fTemp10; // f29
    float fTemp20; // f28
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F40E8 -> 0x802F40E8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F7C08 -> 0x802F7C08
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F91EC -> 0x802F91EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FBEA0 -> 0x802FBEA0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FC950 -> 0x802FC950
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FE6D0 -> 0x802FE6F8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FF140 -> 0x802FF140
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FF5A4 -> 0x802FF5A4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80301F34 -> 0x80301F34
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80303C70 -> 0x80303C70
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80304990 -> 0x80304990
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030A7F4 -> 0x8030A7F4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030D538 -> 0x8030D538
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030EF04 -> 0x8030EF04
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80311010 -> 0x80311010
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80316208 -> 0x80316208
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031800C -> 0x8031800C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803190FC -> 0x803190FC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031C390 -> 0x8031C390
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031EE40 -> 0x8031EE40
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031FAC0 -> 0x8031FAC0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032475C -> 0x8032475C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80328BE0 -> 0x80328BE0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032A46C -> 0x8032A46C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032B8F0 -> 0x8032B8F0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032CA90 -> 0x8032CA90
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032ED70 -> 0x8032ED70
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80330724 -> 0x80330724
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80331EEC -> 0x80331EEC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80335228 -> 0x80335228
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803365EC -> 0x803365EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80336DA8 -> 0x80336DA8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803384B4 -> 0x803384B4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80339A90 -> 0x80339A90
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8033B29C -> 0x8033B29C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8033BF50 -> 0x8033BF50
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8033CB84 -> 0x8033CB84
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80345358 -> 0x80345358
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80346050 -> 0x803460BC
*/
// Range: 0x80346050 -> 0x803460BC
// this: r3
float xVec3::Distance2XZ(const struct xVec3 & other /* r4 */) const {
    // Local variables
    struct xVec3 diff; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80346F18 -> 0x80346F18
*/

