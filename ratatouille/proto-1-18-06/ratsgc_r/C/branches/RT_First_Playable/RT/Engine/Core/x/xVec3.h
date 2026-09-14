/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000B914 -> 0x8000B948
*/
// Range: 0x8000B914 -> 0x8000B948
// this: r0
void xVec3::AddScale(const struct xVec3 & d /* r0 */, float s /* f0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000EBF0 -> 0x8000EE04
*/
// Range: 0x8000EBF0 -> 0x8000EC00
// this: r0
struct xVec3 & xVec3::assign(float x /* f0 */, float y /* f0 */, float z /* f0 */) {}

// Range: 0x8000EC00 -> 0x8000EC24
// this: r0
float xVec3::length2() const {}

// Range: 0x8000EC24 -> 0x8000EC64
// this: r0
void xVec3::ScaleDiff(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, float scale /* f0 */) {}

// Range: 0x8000EC64 -> 0x8000EC88
// this: r0
float xVec3::length() const {}

// Range: 0x8000EC88 -> 0x8000ECBC
// this: r0
void xVec3::Sub(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */) {}

// Range: 0x8000ECBC -> 0x8000ECEC
// this: r5
float xVec3::Distance(const struct xVec3 & other /* r0 */) const {
    // Local variables
    struct xVec3 diff; // r1+0x8
}

// Range: 0x8000ED10 -> 0x8000ED40
// this: r5
float xVec3::Distance2(const struct xVec3 & other /* r0 */) const {
    // Local variables
    struct xVec3 diff; // r1+0x8
}

// Range: 0x8000ED40 -> 0x8000ED68
// this: r0
float xVec3::dot(const struct xVec3 & c /* r0 */) const {}

// Range: 0x8000ED68 -> 0x8000EDA8
// this: r0
struct xVec3 & xVec3::cross(const struct xVec3 & c0 /* r0 */, const struct xVec3 & c1 /* r0 */) {}

// Range: 0x8000EDA8 -> 0x8000EDDC
// this: r0
void xVec3::Add(const struct xVec3 & a /* r0 */) {}

// Range: 0x8000EDDC -> 0x8000EE04
// this: r0
void xVec3::Scale(float scalar /* f0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800131EC -> 0x800133E8
*/
// Range: 0x800131EC -> 0x80013220
// this: r0
void xVec3::AddScale(const struct xVec3 & p /* r0 */, const struct xVec3 & d /* r0 */, float s /* f0 */) {}

// ERROR: Failed to emit tag 4538C (GlobalSubroutine)
// Range: 0x800132D4 -> 0x800132FC
// this: r0
void xVec3::Negate(const struct xVec3 & a /* r0 */) {}

// Range: 0x800132FC -> 0x80013330
// this: r0
struct xVec3 & xVec3::operator-=(const struct xVec3 & v /* r0 */) {}

// Range: 0x80013330 -> 0x80013358
// this: r0
struct xVec3 & xVec3::operator*=(float f /* f0 */) {}

// Range: 0x80013358 -> 0x8001338C
// this: r0
struct xVec3 & xVec3::operator+=(const struct xVec3 & v /* r0 */) {}

// Range: 0x8001338C -> 0x800133C0
// this: r0
void xVec3::Add(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */) {}

// Range: 0x800133C0 -> 0x800133E8
// this: r0
void xVec3::Scale(const struct xVec3 & a /* r0 */, float scalar /* f0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800138DC -> 0x80013934
*/
// Range: 0x800138DC -> 0x80013904
// this: r0
struct xVec3 & xVec3::negate() {}

// Range: 0x80013904 -> 0x80013934
// this: r0
struct xVec3 & xVec3::operator/=(float f /* f0 */) {
    // Local variables
    float i; // f1
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80017568 -> 0x80017634
*/
// Range: 0x80017568 -> 0x80017590
// this: r0
struct xVec3 & xVec3::operator+=(float f /* f0 */) {}

// Range: 0x80017590 -> 0x800175B8
// this: r0
struct xVec3 & xVec3::operator-=(float f /* f0 */) {}

// Range: 0x800175B8 -> 0x800175F8
// this: r0
void xVec3::Lerp(const struct xVec3 & start /* r0 */, const struct xVec3 & end /* r0 */, float percent /* f0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800241F0 -> 0x800242C4
*/
// Range: 0x800241F0 -> 0x80024224
// this: r0
struct xVec3 & xVec3::set_abs() {}

// Range: 0x80024224 -> 0x800242A0
// this: r30
float xVec3::safe_normalize(const struct xVec3 & safety /* r31 */) {
    // Local variables
    float len; // f31
}

// Range: 0x800242A0 -> 0x800242C4
// this: r0
float xVec3::up_normalize() {
    // References
    // -> struct xVec3 m_UnitAxisY;
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80044760 -> 0x800447BC
*/
// Range: 0x80044760 -> 0x800447BC
// this: r0
void xVec3::Average(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, const struct xVec3 & c /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004872C -> 0x80048778
*/
// Range: 0x8004872C -> 0x80048778
// this: r0
void xVec3::AddCombine(const struct xVec3 & v /* r0 */, const struct xVec3 & a /* r0 */, float scale0 /* f0 */, const struct xVec3 & b /* r0 */, float scale1 /* f0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800507B8 -> 0x800507F0
*/
// Range: 0x800507B8 -> 0x800507C8
// this: r0
struct xVec3 & xVec3::operator=(float f /* f0 */) {}

// Range: 0x800507C8 -> 0x800507F0
// this: r0
struct xVec3 & xVec3::assign(float v /* f1 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80053A8C -> 0x80053A8C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80054C2C -> 0x80054C2C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800590D8 -> 0x80059100
*/
// Range: 0x800590D8 -> 0x80059100
// this: r0
void xVec3::Negate() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80066674 -> 0x80066674
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006BA00 -> 0x8006BA00
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80072548 -> 0x80072548
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007962C -> 0x8007962C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008167C -> 0x8008167C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80087A6C -> 0x80087A6C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008CBDC -> 0x8008CBDC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80092E04 -> 0x80092E04
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80096D4C -> 0x80096D4C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800993E0 -> 0x800994A0
*/
// Range: 0x800993E0 -> 0x80099420
// this: r0
void xVec3::Combine(const struct xVec3 & a /* r0 */, float scale0 /* f0 */, const struct xVec3 & b /* r0 */, float scale1 /* f0 */) {}

// Range: 0x80099420 -> 0x80099454
// this: r0
void xVec3::ScaleComponents(const struct xVec3 & scale /* r0 */) {}

// Range: 0x80099454 -> 0x800994A0
// this: r0
void xVec3::SubAdd(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, const struct xVec3 & c /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009B858 -> 0x8009B858
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A3ED0 -> 0x800A3ED0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B1B60 -> 0x800B1B60
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B4CBC -> 0x800B4CBC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BBA80 -> 0x800BBA80
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BD30C -> 0x800BD30C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C2660 -> 0x800C2684
*/
// Range: 0x800C2660 -> 0x800C2684
// this: r0
float xVec3::at_normalize() {
    // References
    // -> struct xVec3 m_UnitAxisZ;
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C7A54 -> 0x800C7A54
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CA9C0 -> 0x800CA9C0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E4BA4 -> 0x800E4BA4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80102A50 -> 0x80102C2C
*/
// Range: 0x80102A50 -> 0x80102A9C
// this: r0
void xVec3::AddSub(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */) {}

// Range: 0x80102A9C -> 0x80102B00
// this: r0
void xVec3::SubAddSub(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, const struct xVec3 & c /* r0 */, const struct xVec3 & d /* r0 */) {}

// Range: 0x80102B00 -> 0x80102B64
// this: r0
void xVec3::SubAddAdd(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, const struct xVec3 & c /* r0 */, const struct xVec3 & d /* r0 */) {}

// Range: 0x80102B64 -> 0x80102BC8
// this: r0
void xVec3::AddAddSub(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, const struct xVec3 & c /* r0 */, const struct xVec3 & d /* r0 */) {}

// Range: 0x80102BC8 -> 0x80102C2C
// this: r0
void xVec3::AddAddAdd(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, const struct xVec3 & c /* r0 */, const struct xVec3 & d /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80109090 -> 0x80109090
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010F144 -> 0x8010F144
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80116A18 -> 0x80116A7C
*/
// Range: 0x80116A18 -> 0x80116A7C
// this: r0
float xVec3::DistanceXZ(const struct xVec3 & other /* r0 */) const {
    // Local variables
    struct xVec3 diff; // r1+0x8
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011E680 -> 0x8011E680
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012533C -> 0x80125360
*/
// Range: 0x8012533C -> 0x80125360
// this: r0
float xVec3::right_normalize() {
    // References
    // -> struct xVec3 m_UnitAxisX;
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80126F68 -> 0x80126F68
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012E210 -> 0x8012E27C
*/
// Range: 0x8012E210 -> 0x8012E23C
// this: r0
unsigned char xVec3::operator!=(const struct xVec3 & v /* r0 */) const {}

// Range: 0x8012E23C -> 0x8012E27C
// this: r0
unsigned char xVec3::operator==(const struct xVec3 & v /* r0 */) const {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012FDEC -> 0x8012FDEC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80131790 -> 0x80131790
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80136240 -> 0x80136284
*/
// Range: 0x80136240 -> 0x80136284
// this: r0
void xVec3::Average(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80139184 -> 0x80139184
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801437BC -> 0x801437BC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801441F8 -> 0x801441F8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801445B8 -> 0x801445B8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014B02C -> 0x8014B02C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80154280 -> 0x80154280
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015B05C -> 0x8015B05C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016AA1C -> 0x8016AA1C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016C83C -> 0x8016C83C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80173500 -> 0x80173500
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017BAF0 -> 0x8017BAF0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80181BDC -> 0x80181BDC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80181E88 -> 0x80181E88
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80183C20 -> 0x80183C20
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80189504 -> 0x80189504
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018EC98 -> 0x8018ED1C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801911A0 -> 0x801911A0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80191AA0 -> 0x80191AA0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80195B14 -> 0x80195B14
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80195F14 -> 0x80195F14
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801999C0 -> 0x80199A00
*/
// Range: 0x801999C0 -> 0x801999E0
// this: r0
void xVec3::cross_xpos(const struct xVec3 & c0 /* r0 */) {}

// Range: 0x801999E0 -> 0x80199A00
// this: r0
void xVec3::cross_ypos(const struct xVec3 & c0 /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019CBD0 -> 0x8019CBD0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019E2C0 -> 0x8019E2C0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A3A08 -> 0x801A3A08
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A48C8 -> 0x801A48C8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A8368 -> 0x801A8368
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801ABF7C -> 0x801ABF7C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801AC528 -> 0x801AC528
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B0228 -> 0x801B0280
*/
// Range: 0x801B0228 -> 0x801B0280
// this: r0
void xVec3::AddCombine(const struct xVec3 & a /* r0 */, float scale0 /* f0 */, const struct xVec3 & b /* r0 */, float scale1 /* f0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B0B98 -> 0x801B0BFC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B7C78 -> 0x801B7C78
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BA3E0 -> 0x801BA464
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BDCE4 -> 0x801BDCE4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BFE0C -> 0x801BFE0C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C3154 -> 0x801C3154
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C3800 -> 0x801C3800
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801CD1D4 -> 0x801CD1D4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D0C68 -> 0x801D0C68
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D3890 -> 0x801D3890
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D6478 -> 0x801D6478
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D7E60 -> 0x801D7E60
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D8E58 -> 0x801D8E58
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DC878 -> 0x801DC878
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DEB5C -> 0x801DEB5C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E0384 -> 0x801E0384
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E45B4 -> 0x801E45B4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E53A8 -> 0x801E53A8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E6B94 -> 0x801E6B94
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E97F4 -> 0x801E97F4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E9D38 -> 0x801E9D38
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EC640 -> 0x801EC6BC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EEB88 -> 0x801EEB88
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F0CE0 -> 0x801F0CE0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F38B8 -> 0x801F38B8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F5F50 -> 0x801F5F50
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F66A8 -> 0x801F66A8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F78C0 -> 0x801F78C0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F959C -> 0x801F959C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FB2B4 -> 0x801FB2B4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FC794 -> 0x801FC794
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FE6C0 -> 0x801FE6C0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FF68C -> 0x801FF70C
*/
// Range: 0x801FF68C -> 0x801FF6C0
// this: r0
void xVec3::Sub(const struct xVec3 & a /* r0 */) {}

// Range: 0x801FF6C0 -> 0x801FF70C
// this: r0
void xVec3::AddSub(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, const struct xVec3 & c /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80208AD8 -> 0x80208AD8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020BB48 -> 0x8020BB48
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020BD1C -> 0x8020BD1C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020C400 -> 0x8020C400
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020DF18 -> 0x8020DF18
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020F160 -> 0x8020F160
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020FAF4 -> 0x8020FAF4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80213770 -> 0x80213770
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802145F0 -> 0x802145F0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80216148 -> 0x80216148
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80217C68 -> 0x80217C68
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802184F4 -> 0x802184F4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802194F0 -> 0x80219554
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021D034 -> 0x8021D098
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021D714 -> 0x8021D714
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021F42C -> 0x8021F490
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022256C -> 0x802226D4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80226580 -> 0x80226580
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80230F44 -> 0x80230F44
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802378B4 -> 0x802378B4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802399EC -> 0x80239A28
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023EFB8 -> 0x8023EFB8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802436C8 -> 0x802436C8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802456C8 -> 0x802456C8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80245A4C -> 0x80245A4C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80246480 -> 0x80246480
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80246A60 -> 0x80246A60
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024DF78 -> 0x8024DF78
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024FEF8 -> 0x8024FEF8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80253638 -> 0x80253638
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80254A68 -> 0x80254A68
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80257610 -> 0x802576D8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80258190 -> 0x80258190
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80259608 -> 0x80259608
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025C07C -> 0x8025C07C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025F658 -> 0x8025F658
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802616DC -> 0x802616DC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80261A8C -> 0x80261A8C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80262F9C -> 0x80262F9C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80263D00 -> 0x80263D00
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80264524 -> 0x80264524
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026A96C -> 0x8026A96C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026B790 -> 0x8026B790
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026D310 -> 0x8026D310
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026E1A8 -> 0x8026E1A8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802706B0 -> 0x80270714
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80272FDC -> 0x80272FDC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802742F0 -> 0x802742F0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802757C4 -> 0x802757C4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80277040 -> 0x80277040
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027CAA8 -> 0x8027CB24
*/
// Range: 0x8027CAA8 -> 0x8027CB24
// this: r30
struct xVec3 & xVec3::rotateY(const float & fRadians /* r31 */) {
    // Local variables
    float fSin; // f0
    float fCos; // f0
    float fTemp20; // f1
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027DEDC -> 0x8027DEDC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80280FCC -> 0x80280FCC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80282520 -> 0x80282520
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80284C98 -> 0x80284C98
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80285558 -> 0x80285558
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80286BC8 -> 0x80286BF0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8028748C -> 0x8028748C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80287894 -> 0x80287894
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80289DAC -> 0x80289DAC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8028B6A4 -> 0x8028B6A4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8028C268 -> 0x8028C268
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80291670 -> 0x80291670
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80293CF0 -> 0x80293CF0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80295480 -> 0x80295480
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029BEC8 -> 0x8029BEC8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029D908 -> 0x8029D908
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029E628 -> 0x8029E628
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A137C -> 0x802A137C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A3954 -> 0x802A3954
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A4430 -> 0x802A4430
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A859C -> 0x802A859C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802AB888 -> 0x802AB888
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802ACF90 -> 0x802ACF90
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802AE278 -> 0x802AE278
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802AF230 -> 0x802AF230
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B1218 -> 0x802B1218
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B2888 -> 0x802B2888
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B3CA0 -> 0x802B3CA0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B6A54 -> 0x802B6A54
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B7E78 -> 0x802B7E78
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B8564 -> 0x802B8564
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B9930 -> 0x802B9930
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BACD4 -> 0x802BACD4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BC204 -> 0x802BC204
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BCD10 -> 0x802BCD10
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BD818 -> 0x802BD818
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C5890 -> 0x802C5890
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C6D00 -> 0x802C6D00
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C76C8 -> 0x802C7718
*/
// Range: 0x802C76C8 -> 0x802C7718
// this: r0
float xVec3::Distance2XZ(const struct xVec3 & other /* r0 */) const {
    // Local variables
    struct xVec3 diff; // r1+0x8
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C79E4 -> 0x802C79E4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C7C40 -> 0x802C7C40
*/

