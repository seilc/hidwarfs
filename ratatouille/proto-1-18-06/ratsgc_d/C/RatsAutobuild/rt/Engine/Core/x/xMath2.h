/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800166E8 -> 0x800166F4
*/
// Range: 0x800166E8 -> 0x800166F4
// this: r3
struct xVec2 & xVec2::operator=(float f /* f1 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80016860 -> 0x80016960
*/
// Range: 0x80016860 -> 0x8001686C
// this: r3
struct xVec2 & xVec2::assign(float x /* f1 */, float y /* f2 */) {}

// Range: 0x8001686C -> 0x80016898
// this: r1+0x8
float xVec2::length() const {}

// Range: 0x80016898 -> 0x800168B4
// this: r3
float xVec2::length2() const {}

// Range: 0x800168B4 -> 0x800168D0
// this: r3
float xVec2::dot(const struct xVec2 & c /* r4 */) const {}

// Range: 0x800168D0 -> 0x800168F4
// this: r3
struct xVec2 & xVec2::operator-=(const struct xVec2 & v /* r4 */) {}

// Range: 0x800168F4 -> 0x80016910
// this: r3
struct xVec2 & xVec2::operator*=(float f /* f1 */) {}

// Range: 0x80016910 -> 0x8001694C
// this: r3
struct xVec2 & xVec2::operator/=(float f /* f1 */) {
    // Local variables
    float i; // f31
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002ACE0 -> 0x8002AD30
*/
// Range: 0x8002ACE0 -> 0x8002AD30
// this: r31
struct xVec2 xVec2::operator-(const struct xVec2 & v /* r1+0x8 */) const {
    // Local variables
    struct xVec2 temp; // r1+0xC
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80035D58 -> 0x80035E74
*/
// Range: 0x80035D58 -> 0x80035DB0
// this: r1+0x8
struct basic_rect & basic_rect::contract(float left /* r1+0xC */, float top /* r1+0x10 */, float right /* r1+0x14 */, float bottom /* r1+0x18 */) {}

// Range: 0x80035DB0 -> 0x80035DEC
// this: r3
struct basic_rect & basic_rect::expand(float left /* f1 */, float top /* f2 */, float right /* f3 */, float bottom /* f4 */) {}

// Range: 0x80035DEC -> 0x80035E00
// this: r3
struct basic_rect & basic_rect::assign(float x /* f1 */, float y /* f2 */, float w /* f3 */, float h /* f4 */) {}

// Range: 0x80035E00 -> 0x80035E40
// this: r1+0x8
struct basic_rect & basic_rect::expand(float v /* f31 */) {}

// Range: 0x80035E40 -> 0x80035E74
// this: r1+0x8
struct basic_rect & basic_rect::contract(float v /* r1+0xC */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80043FD0 -> 0x800440D8
*/
// Range: 0x80043FD0 -> 0x80043FEC
// this: r3
struct basic_rect & basic_rect::set_bounds(float left /* f1 */, float top /* f2 */, float right /* f3 */, float bottom /* f4 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800516D8 -> 0x800516D8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80077E60 -> 0x80078350
*/
// Range: 0x80077E60 -> 0x80077E98
// this: r3
unsigned char basic_rect::empty() const {}

// Range: 0x80077E98 -> 0x80077EA8
// this: r3
int basic_rect::bottom() const {}

// Range: 0x80077EA8 -> 0x80077EB8
// this: r3
int basic_rect::right() const {}

// Range: 0x80077EB8 -> 0x80077F00
// this: r1+0x8
struct basic_rect & basic_rect::scale(float xs /* f30 */, float ys /* f31 */) {}

// Range: 0x80077F00 -> 0x80077F34
// this: r3
struct basic_rect & basic_rect::scale(float xs /* f1 */, float ys /* f2 */, float ws /* f3 */, float hs /* f4 */) {}

// Range: 0x80077F34 -> 0x800781A4
// this: r30
void basic_rect::clip(struct basic_rect & r1 /* r31 */, struct basic_rect & r2 /* r29 */) const {
    // Local variables
    float xratio; // f29
    float yratio; // f28
    float d1; // f27
    float d2; // f26
    float d1; // f25
    float d2; // f24
    float r; // f23
    float cr; // f31
    float b; // f22
    float cb; // f30

    // References
    // -> char __FUNCTION__$localstatic1$clip__13basic_rect<f>CFR13basic_rect<f>R13basic_rect<f>[5];
}

// Range: 0x800781A4 -> 0x800781EC
// this: r3
unsigned char basic_rect::empty() const {}

// Range: 0x800781EC -> 0x800782C0
// this: r31
struct basic_rect & basic_rect::operator|=(const struct basic_rect & c /* r1+0x8 */) {
    // Local variables
    float l; // r1+0x28
    float t; // r1+0x24
    float r; // r1+0x20
    float b; // r1+0x1C
    float cl; // r1+0x18
    float ct; // r1+0x14
    float cr; // r1+0x10
    float cb; // r1+0xC
}

// Range: 0x800782C0 -> 0x800782F4
// this: r3
void basic_rect::get_bounds(float & left /* r4 */, float & top /* r5 */, float & right /* r6 */, float & bottom /* r7 */) const {}

// Range: 0x800782F4 -> 0x80078310
// this: r3
struct basic_rect & basic_rect::move(float x /* f1 */, float y /* f2 */) {}

// Range: 0x80078310 -> 0x80078350
// this: r1+0x8
struct basic_rect & basic_rect::scale(float vs /* f31 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800873B8 -> 0x800873B8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A8850 -> 0x800A8940
*/
// Range: 0x800A8850 -> 0x800A8940
float xMath2NearestPointOnLine(float & Px /* r3 */, float & Py /* r4 */, float Cx /* f1 */, float Cy /* f2 */, float Ax /* f3 */, float Ay /* f4 */, float Bx /* f5 */, float By /* f6 */) {
    // Local variables
    float ABx; // f31
    float ABy; // f30
    float ACx; // f26
    float ACy; // f25
    float AB_AC; // f29
    float AB_AB; // f27
    float t; // f28
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800AA51C -> 0x800AA51C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B7014 -> 0x800B708C
*/
// Range: 0x800B7014 -> 0x800B7030
float xVec2Dot(const struct xVec2 * v1 /* r3 */, const struct xVec2 * v2 /* r4 */) {}

// Range: 0x800B7030 -> 0x800B703C
void xVec2Init(struct xVec2 * v /* r3 */, float x /* f1 */, float y /* f2 */) {}

// Range: 0x800B703C -> 0x800B708C
// this: r31
struct xVec2 xVec2::operator*(float f /* r1+0x8 */) const {
    // Local variables
    struct xVec2 temp; // r1+0xC
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B9CC8 -> 0x800B9CC8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D9400 -> 0x800D9400
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F4F54 -> 0x800F4F54
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010123C -> 0x8010123C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80113864 -> 0x801138D4
*/
// Range: 0x80113864 -> 0x801138D4
float xVec2Dist(float x1 /* r1+0x8 */, float y1 /* r1+0xC */, float x2 /* r1+0x10 */, float y2 /* r1+0x14 */) {
    // Local variables
    float dx; // f31
    float dy; // f30
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013FD54 -> 0x8013FD54
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801600C4 -> 0x801600FC
*/
// Range: 0x801600C4 -> 0x801600FC
// this: r1+0x8
struct xVec2 & xVec2::assign(float v /* f31 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801679F8 -> 0x801679F8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017209C -> 0x8017209C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80183720 -> 0x80183720
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80184D84 -> 0x80184D84
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018B980 -> 0x8018B980
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B994C -> 0x801B994C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C402C -> 0x801C402C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801CEA78 -> 0x801CEA78
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D4FC0 -> 0x801D4FC0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DDBB8 -> 0x801DDBB8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E39F0 -> 0x801E39F0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E62DC -> 0x801E62DC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FC274 -> 0x801FC274
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FD460 -> 0x801FD460
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020A7A8 -> 0x8020A7A8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020B19C -> 0x8020B19C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80216630 -> 0x80216630
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023012C -> 0x8023012C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023DB8C -> 0x8023DB8C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802401A0 -> 0x802401A0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802471AC -> 0x802471AC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024819C -> 0x8024819C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80249F78 -> 0x80249F78
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024D7F8 -> 0x8024D7F8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802506BC -> 0x802506BC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025586C -> 0x8025586C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025BA50 -> 0x8025BA50
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025D5D4 -> 0x8025D5D4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025F3B0 -> 0x8025F5A0
*/
// Range: 0x8025F3B0 -> 0x8025F3EC
// this: r31
struct xVec2 & xVec2::normalize() {}

// Range: 0x8025F3EC -> 0x8025F410
// this: r3
void xVec2::Sub(const struct xVec2 & a /* r4 */, const struct xVec2 & b /* r5 */) {}

// Range: 0x8025F410 -> 0x8025F444
void xVec2Inv(struct xVec2 * o /* r1+0x8 */, const struct xVec2 * v /* r1+0xC */) {}

// Range: 0x8025F444 -> 0x8025F460
void xVec2SMul(struct xVec2 * o /* r3 */, const struct xVec2 * v /* r4 */, float s /* f1 */) {}

// Range: 0x8025F460 -> 0x8025F490
void xVec2Copy(struct xVec2 * dst /* r1+0x8 */, const struct xVec2 * src /* r1+0xC */) {}

// Range: 0x8025F490 -> 0x8025F508
// this: r31
struct xVec2 & xVec2::safe_normalize(const struct xVec2 & safety /* r1+0x8 */) {
    // Local variables
    float len2; // f31
}

// Range: 0x8025F508 -> 0x8025F558
// this: r31
struct xVec2 xVec2::operator+(const struct xVec2 & v /* r1+0x8 */) const {
    // Local variables
    struct xVec2 temp; // r1+0xC
}

// Range: 0x8025F558 -> 0x8025F57C
// this: r3
struct xVec2 & xVec2::operator+=(const struct xVec2 & v /* r4 */) {}

// Range: 0x8025F57C -> 0x8025F5A0
void xVec2Sub(struct xVec2 * o /* r3 */, const struct xVec2 * v1 /* r4 */, const struct xVec2 * v2 /* r5 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80261534 -> 0x80261728
*/
// Range: 0x80261534 -> 0x80261558
// this: r3
void xVec2::AddScale(const struct xVec3 & p /* r4 */, const struct xVec2 & d /* r5 */, float s /* f1 */) {}

// Range: 0x80261558 -> 0x8026157C
// this: r3
void xVec2::Sub(const struct xVec2 & a /* r4 */, const struct xVec3 & b /* r5 */) {}

// Range: 0x8026157C -> 0x802615A8
// this: r3
void xVec2::ScaleDiff(const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */, float s /* f1 */) {}

// Range: 0x802615A8 -> 0x802615DC
// this: r3
void xVec2::Lerp(const struct xVec2 & start /* r4 */, const struct xVec2 & end /* r5 */, float percent /* f1 */) {}

// Range: 0x802615DC -> 0x80261600
// this: r3
void xVec2::AddScale(const struct xVec2 & p /* r4 */, const struct xVec2 & d /* r5 */, float s /* f1 */) {}

// Range: 0x80261600 -> 0x80261624
// this: r3
void xVec2::Add(const struct xVec2 & a /* r4 */, const struct xVec2 & b /* r5 */) {}

// Range: 0x80261624 -> 0x80261640
// this: r3
void xVec2::Scale(const struct xVec2 & d /* r4 */, float s /* f1 */) {}

// Range: 0x80261640 -> 0x80261664
// this: r3
void xVec2::AddScale(const struct xVec2 & d /* r4 */, float s /* f1 */) {}

// Range: 0x80261664 -> 0x802616E8
// this: r31
float xVec2::SafeNormalize() {
    // Local variables
    float length; // f31
}

// Range: 0x802616E8 -> 0x80261704
// this: r3
void xVec2::Scale(float s /* f1 */) {}

// Range: 0x80261704 -> 0x80261728
// this: r3
void xVec2::Sub(const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80263208 -> 0x80263208
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802740D0 -> 0x802740D0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80274894 -> 0x80274894
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80276460 -> 0x80276460
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80276D38 -> 0x80276D38
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027E0B8 -> 0x8027E0B8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027F37C -> 0x8027F37C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802817FC -> 0x802817FC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80282A5C -> 0x80282A5C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80286B98 -> 0x80286B98
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802892EC -> 0x802892EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80290E40 -> 0x80290E40
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A6B88 -> 0x802A6B88
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C3A0C -> 0x802C3A0C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C5080 -> 0x802C5080
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C8584 -> 0x802C8584
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CA8E8 -> 0x802CA8E8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D1610 -> 0x802D1610
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E4FB8 -> 0x802E4FB8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F2CA8 -> 0x802F2CE4
*/
// Range: 0x802F2CA8 -> 0x802F2CE4
float xVec2Dist2(float x1 /* f1 */, float y1 /* f2 */, float x2 /* f3 */, float y2 /* f4 */) {
    // Local variables
    float dx; // f31
    float dy; // f30
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80327910 -> 0x80327910
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8033B434 -> 0x8033B434
*/

