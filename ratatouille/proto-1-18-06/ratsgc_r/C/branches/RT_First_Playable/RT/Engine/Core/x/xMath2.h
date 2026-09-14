/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80013678 -> 0x80013684
*/
// Range: 0x80013678 -> 0x80013684
// this: r0
struct xVec2 & xVec2::operator=(float f /* f0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800137BC -> 0x80013898
*/
// Range: 0x800137BC -> 0x800137C8
// this: r0
struct xVec2 & xVec2::assign(float x /* f0 */, float y /* f0 */) {}

// Range: 0x800137C8 -> 0x800137EC
// this: r0
float xVec2::length() const {}

// Range: 0x800137EC -> 0x80013804
// this: r0
float xVec2::length2() const {}

// Range: 0x80013804 -> 0x80013820
// this: r0
float xVec2::dot(const struct xVec2 & c /* r0 */) const {}

// Range: 0x80013820 -> 0x80013844
// this: r0
struct xVec2 & xVec2::operator-=(const struct xVec2 & v /* r0 */) {}

// Range: 0x80013844 -> 0x80013860
// this: r0
struct xVec2 & xVec2::operator*=(float f /* f0 */) {}

// Range: 0x80013860 -> 0x80013884
// this: r0
struct xVec2 & xVec2::operator/=(float f /* f0 */) {
    // Local variables
    float i; // f1
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002441C -> 0x80024458
*/
// Range: 0x8002441C -> 0x80024458
// this: r0
struct xVec2 xVec2::operator-(const struct xVec2 & v /* r0 */) const {
    // Local variables
    struct xVec2 temp; // r1+0x8
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002DCE8 -> 0x8002DDB8
*/
// Range: 0x8002DCE8 -> 0x8002DD18
// this: r0
struct basic_rect & basic_rect::contract(float left /* f1 */, float top /* f2 */, float right /* f3 */, float bottom /* f4 */) {}

// Range: 0x8002DD18 -> 0x8002DD54
// this: r0
struct basic_rect & basic_rect::expand(float left /* f0 */, float top /* f0 */, float right /* f0 */, float bottom /* f0 */) {}

// Range: 0x8002DD54 -> 0x8002DD68
// this: r0
struct basic_rect & basic_rect::assign(float x /* f0 */, float y /* f0 */, float w /* f0 */, float h /* f0 */) {}

// Range: 0x8002DD68 -> 0x8002DD94
// this: r0
struct basic_rect & basic_rect::expand(float v /* f1 */) {}

// Range: 0x8002DD94 -> 0x8002DDB8
// this: r0
struct basic_rect & basic_rect::contract(float v /* f1 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003A350 -> 0x8003A458
*/
// Range: 0x8003A350 -> 0x8003A36C
// this: r0
struct basic_rect & basic_rect::set_bounds(float left /* f0 */, float top /* f0 */, float right /* f0 */, float bottom /* f0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80045400 -> 0x80045400
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80065DC8 -> 0x80066190
*/
// Range: 0x80065DC8 -> 0x80065DF0
// this: r0
unsigned char basic_rect::empty() const {}

// Range: 0x80065DF0 -> 0x80065E00
// this: r0
int basic_rect::bottom() const {}

// Range: 0x80065E00 -> 0x80065E10
// this: r0
int basic_rect::right() const {}

// Range: 0x80065E10 -> 0x80065E38
// this: r0
struct basic_rect & basic_rect::scale(float xs /* f1 */, float ys /* f2 */) {}

// Range: 0x80065E38 -> 0x80065E6C
// this: r0
struct basic_rect & basic_rect::scale(float xs /* f0 */, float ys /* f0 */, float ws /* f0 */, float hs /* f0 */) {}

// Range: 0x80065E6C -> 0x80066014
// this: r29
void basic_rect::clip(struct basic_rect & r1 /* r30 */, struct basic_rect & r2 /* r31 */) const {
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

    // References
    // -> char __FUNCTION__$localstatic1$clip__13basic_rect<f>CFR13basic_rect<f>R13basic_rect<f>[5];
}

// Range: 0x80066014 -> 0x80066048
// this: r0
unsigned char basic_rect::empty() const {}

// Range: 0x80066048 -> 0x80066114
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

// Range: 0x80066114 -> 0x80066148
// this: r0
void basic_rect::get_bounds(float & left /* r0 */, float & top /* r0 */, float & right /* r0 */, float & bottom /* r0 */) const {}

// Range: 0x80066148 -> 0x80066164
// this: r0
struct basic_rect & basic_rect::move(float x /* f0 */, float y /* f0 */) {}

// Range: 0x80066164 -> 0x80066190
// this: r0
struct basic_rect & basic_rect::scale(float vs /* f1 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80072548 -> 0x80072548
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008CB60 -> 0x8008CBD4
*/
// Range: 0x8008CB60 -> 0x8008CBD4
float xMath2NearestPointOnLine(float & Px /* r0 */, float & Py /* r0 */, float Cx /* f0 */, float Cy /* f0 */, float Ax /* f0 */, float Ay /* f0 */, float Bx /* f0 */, float By /* f0 */) {
    // Local variables
    float ABx; // f8
    float ABy; // f9
    float AB_AC; // f1
    float AB_AB; // f0
    float t; // f1
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008E2D0 -> 0x8008E2D0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009937C -> 0x800993E0
*/
// Range: 0x8009937C -> 0x80099398
float xVec2Dot(const struct xVec2 * v1 /* r0 */, const struct xVec2 * v2 /* r0 */) {}

// Range: 0x80099398 -> 0x800993A4
void xVec2Init(struct xVec2 * v /* r0 */, float x /* f0 */, float y /* f0 */) {}

// Range: 0x800993A4 -> 0x800993E0
// this: r0
struct xVec2 xVec2::operator*(float f /* f0 */) const {
    // Local variables
    struct xVec2 temp; // r1+0x8
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009B9DC -> 0x8009B9DC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B1B60 -> 0x800B1B60
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C7A54 -> 0x800C7A54
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D19A8 -> 0x800D19A8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DFB54 -> 0x800DFB84
*/
// Range: 0x800DFB54 -> 0x800DFB84
float xVec2Dist(float x1 /* f0 */, float y1 /* f0 */, float x2 /* f0 */, float y2 /* f0 */) {
    // Local variables
    float dx; // f1
    float dy; // f0
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80103214 -> 0x80103214
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011EAA4 -> 0x8011EAC8
*/
// Range: 0x8011EAA4 -> 0x8011EAC8
// this: r0
struct xVec2 & xVec2::assign(float v /* f1 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012533C -> 0x8012533C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012DFC4 -> 0x8012DFC4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013D174 -> 0x8013D174
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013E5D4 -> 0x8013E5D4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80144244 -> 0x80144244
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016AB54 -> 0x8016AB54
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80173474 -> 0x80173474
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017C6C0 -> 0x8017C6C0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80181C40 -> 0x80181C40
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80189458 -> 0x80189458
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018EB94 -> 0x8018EB94
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801910C0 -> 0x801910C0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A3A08 -> 0x801A3A08
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A48C8 -> 0x801A48C8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B02E4 -> 0x801B02E4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B0BFC -> 0x801B0BFC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BA228 -> 0x801BA228
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D0B70 -> 0x801D0B70
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DCA1C -> 0x801DCA1C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DEB5C -> 0x801DEB5C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E4618 -> 0x801E4618
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E53A8 -> 0x801E53A8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E6BF8 -> 0x801E6BF8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E9D38 -> 0x801E9D38
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EC5E4 -> 0x801EC5E4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F0CE0 -> 0x801F0CE0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F60EC -> 0x801F60EC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F78C0 -> 0x801F78C0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F93D4 -> 0x801F9580
*/
// Range: 0x801F93D4 -> 0x801F9410
// this: r31
struct xVec2 & xVec2::normalize() {}

// Range: 0x801F9410 -> 0x801F9434
// this: r0
void xVec2::Sub(const struct xVec2 & a /* r0 */, const struct xVec2 & b /* r0 */) {}

// Range: 0x801F9434 -> 0x801F9458
void xVec2Inv(struct xVec2 * o /* r0 */, const struct xVec2 * v /* r0 */) {}

// Range: 0x801F9458 -> 0x801F9474
void xVec2SMul(struct xVec2 * o /* r0 */, const struct xVec2 * v /* r0 */, float s /* f0 */) {}

// Range: 0x801F9474 -> 0x801F9494
void xVec2Copy(struct xVec2 * dst /* r0 */, const struct xVec2 * src /* r0 */) {}

// Range: 0x801F9494 -> 0x801F94FC
// this: r30
struct xVec2 & xVec2::safe_normalize(const struct xVec2 & safety /* r31 */) {
    // Local variables
    float len2; // f0
}

// Range: 0x801F94FC -> 0x801F9538
// this: r0
struct xVec2 xVec2::operator+(const struct xVec2 & v /* r0 */) const {
    // Local variables
    struct xVec2 temp; // r1+0x8
}

// Range: 0x801F9538 -> 0x801F955C
// this: r0
struct xVec2 & xVec2::operator+=(const struct xVec2 & v /* r0 */) {}

// Range: 0x801F955C -> 0x801F9580
void xVec2Sub(struct xVec2 * o /* r0 */, const struct xVec2 * v1 /* r0 */, const struct xVec2 * v2 /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FB0B4 -> 0x801FB298
*/
// Range: 0x801FB0B4 -> 0x801FB0D8
// this: r0
void xVec2::AddScale(const struct xVec3 & p /* r0 */, const struct xVec2 & d /* r0 */, float s /* f0 */) {}

// Range: 0x801FB0D8 -> 0x801FB0FC
// this: r0
void xVec2::Sub(const struct xVec2 & a /* r0 */, const struct xVec3 & b /* r0 */) {}

// Range: 0x801FB0FC -> 0x801FB128
// this: r0
void xVec2::ScaleDiff(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, float s /* f0 */) {}

// Range: 0x801FB128 -> 0x801FB154
// this: r0
void xVec2::Lerp(const struct xVec2 & start /* r0 */, const struct xVec2 & end /* r0 */, float percent /* f0 */) {}

// Range: 0x801FB154 -> 0x801FB178
// this: r0
void xVec2::AddScale(const struct xVec2 & p /* r0 */, const struct xVec2 & d /* r0 */, float s /* f0 */) {}

// Range: 0x801FB178 -> 0x801FB19C
// this: r0
void xVec2::Add(const struct xVec2 & a /* r0 */, const struct xVec2 & b /* r0 */) {}

// Range: 0x801FB19C -> 0x801FB1B8
// this: r0
void xVec2::Scale(const struct xVec2 & d /* r0 */, float s /* f0 */) {}

// Range: 0x801FB1B8 -> 0x801FB1DC
// this: r0
void xVec2::AddScale(const struct xVec2 & d /* r0 */, float s /* f0 */) {}

// Range: 0x801FB1DC -> 0x801FB258
// this: r31
float xVec2::SafeNormalize() {
    // Local variables
    float length; // f1
}

// Range: 0x801FB258 -> 0x801FB274
// this: r0
void xVec2::Scale(float s /* f0 */) {}

// Range: 0x801FB274 -> 0x801FB298
// this: r0
void xVec2::Sub(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FC794 -> 0x801FC794
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020BD1C -> 0x8020BD1C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020C400 -> 0x8020C400
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020DD48 -> 0x8020DD48
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020E45C -> 0x8020E45C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802145F0 -> 0x802145F0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021518C -> 0x8021518C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80216148 -> 0x80216148
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80218488 -> 0x80218488
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802194F0 -> 0x802194F0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021D034 -> 0x8021D034
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021F42C -> 0x8021F42C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80226580 -> 0x80226580
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80239A38 -> 0x80239A38
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80253680 -> 0x80253680
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80254B54 -> 0x80254B54
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802576D8 -> 0x802576D8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80259714 -> 0x80259714
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025F658 -> 0x8025F658
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802706B0 -> 0x802706B0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027CB24 -> 0x8027CB38
*/
// Range: 0x8027CB24 -> 0x8027CB38
float xVec2Dist2(float x1 /* f0 */, float y1 /* f0 */, float x2 /* f0 */, float y2 /* f0 */) {
    // Local variables
    float dx; // f1
    float dy; // f0
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802AA7A0 -> 0x802AA7A0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B7E78 -> 0x802B7E78
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BC2F4 -> 0x802BC2F4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMath2.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C79E4 -> 0x802C79E4
*/

