/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3Inlines.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80104C3C -> 0x801059B8
*/
// Range: 0x80104C3C -> 0x80104C60
void xVec3Init(struct xVec3 * v /* r3 */, float _x /* f1 */, float _y /* f2 */, float _z /* f3 */) {}

// Range: 0x80104C60 -> 0x80104C70
void xVec3Init(struct xVec3 & v /* r3 */, float _x /* f1 */, float _y /* f2 */, float _z /* f3 */) {}

// Range: 0x80104C70 -> 0x80104D14
unsigned int xVec3Equals(const struct xVec3 * a /* r3 */, const struct xVec3 * b /* r4 */) {}

// Range: 0x80104D14 -> 0x80104D54
void xVec3AddC(struct xVec3 * o /* r3 */, const struct xVec3 * a /* r4 */, float _x /* f1 */, float _y /* f2 */, float _z /* f3 */) {}

// Range: 0x80104D54 -> 0x80104DA0
void xVec3Add(struct xVec3 * o /* r3 */, const struct xVec3 * a /* r4 */, const struct xVec3 * b /* r5 */) {}

// Range: 0x80104DA0 -> 0x80104DD4
void xVec3Add(struct xVec3 & o /* r3 */, const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */) {}

// Range: 0x80104DD4 -> 0x80104E08
void xVec3Add(struct xVec3 & o /* r3 */, const struct xVec3 & a /* r4 */) {}

// Range: 0x80104E08 -> 0x80104E3C
void xVec3AddTo(struct xVec3 & a /* r3 */, const struct xVec3 & b /* r4 */) {}

// Range: 0x80104E3C -> 0x80104E88
void xVec3AddTo(struct xVec3 * a /* r3 */, const struct xVec3 * b /* r4 */) {}

// Range: 0x80104E88 -> 0x80104ED4
void xVec3AddScaled(struct xVec3 * a /* r3 */, const struct xVec3 * b /* r4 */, float scale /* f1 */) {}

// Range: 0x80104ED4 -> 0x80104F08
void xVec3AddScaled(struct xVec3 & a /* r3 */, const struct xVec3 & b /* r4 */, float scale /* f1 */) {}

// Range: 0x80104F08 -> 0x80104F3C
void xVec3AddScaled(struct xVec3 & o /* r3 */, const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */, float scale /* f1 */) {}

// Range: 0x80104F3C -> 0x80104F88
void xVec3Sub(struct xVec3 * o /* r3 */, const struct xVec3 * a /* r4 */, const struct xVec3 * b /* r5 */) {}

// Range: 0x80104F88 -> 0x80104FBC
void xVec3Sub(struct xVec3 & o /* r3 */, const struct xVec3 & a /* r4 */, const struct xVec3 & b /* r5 */) {}

// Range: 0x80104FBC -> 0x80105008
void xVec3SubFrom(struct xVec3 * a /* r3 */, const struct xVec3 * b /* r4 */) {}

// Range: 0x80105008 -> 0x8010503C
void xVec3SubFrom(struct xVec3 & a /* r3 */, const struct xVec3 & b /* r4 */) {}

// Range: 0x8010503C -> 0x8010507C
void xVec3SMul(struct xVec3 * o /* r3 */, const struct xVec3 * v /* r4 */, float s /* f1 */) {}

// Range: 0x8010507C -> 0x801050A4
void xVec3SMul(struct xVec3 & o /* r3 */, const struct xVec3 & v /* r4 */, float s /* f1 */) {}

// Range: 0x801050A4 -> 0x801050E4
void xVec3SMulBy(struct xVec3 * v /* r3 */, float s /* f1 */) {}

// Range: 0x801050E4 -> 0x8010510C
void xVec3SMulBy(struct xVec3 & v /* r3 */, float s /* f1 */) {}

// Range: 0x8010510C -> 0x80105208
void xVec3Cross(struct xVec3 * o /* r29 */, const struct xVec3 * a /* r30 */, const struct xVec3 * b /* r31 */) {
    // References
    // -> static char __FUNCTION__[11];
}

// Range: 0x80105208 -> 0x80105304
void xVec3Cross(struct xVec3 & o /* r29 */, const struct xVec3 & a /* r30 */, const struct xVec3 & b /* r31 */) {
    // References
    // -> static char __FUNCTION__[11];
}

// Range: 0x80105304 -> 0x8010536C
float xVec3Length(float _x /* f29 */, float _y /* f30 */, float _z /* f31 */) {}

// Range: 0x8010536C -> 0x801053BC
float xVec3Length(const struct xVec3 * v /* r31 */) {}

// Range: 0x801053BC -> 0x8010542C
float xVec3LengthFast(float _x /* f29 */, float _y /* f30 */, float _z /* f31 */) {
    // Local variables
    float len; // r1+0x8
}

// Range: 0x8010542C -> 0x80105454
float xVec3Length2(const struct xVec3 * v /* r3 */) {}

// Range: 0x80105454 -> 0x80105494
void xVec3Inv(struct xVec3 * o /* r3 */, const struct xVec3 * v /* r4 */) {}

// Range: 0x80105494 -> 0x801054BC
void xVec3Inv(struct xVec3 & o /* r3 */, const struct xVec3 & v /* r4 */) {}

// Range: 0x801054BC -> 0x801054E4
void xVec3Inv(struct xVec3 & v /* r3 */) {}

// Range: 0x801054E4 -> 0x8010550C
void xVec3ScaleC(struct xVec3 & o /* r3 */, float scale /* f1 */) {}

// Range: 0x8010550C -> 0x80105534
void xVec3ScaleC(struct xVec3 & o /* r3 */, const struct xVec3 & v /* r4 */, float scale /* f1 */) {}

// Range: 0x80105534 -> 0x80105698
float xVec3Hdng(struct xVec3 * hdng /* r31 */, const struct xVec3 * a /* r29 */, const struct xVec3 * b /* r30 */) {
    // Local variables
    float d; // f31
    float dx__; // f30
    float dy__; // f29
    float dz__; // f28
    float dist2; // f27
    float dist_inv; // f26
}

// Range: 0x80105698 -> 0x80105738
float xVec3Dist(const struct xVec3 * a /* r30 */, const struct xVec3 * b /* r31 */) {
    // Local variables
    float d; // f28
    float dx__; // f31
    float dy__; // f30
    float dz__; // f29
}

// Range: 0x80105738 -> 0x801057D4
float xVec3DistFast(const struct xVec3 * a /* r30 */, const struct xVec3 * b /* r31 */) {
    // Local variables
    float d; // r1+0x8
    float dx__; // f31
    float dy__; // f30
    float dz__; // f29
}

// Range: 0x801057D4 -> 0x80105854
float xVec3Dist2(const struct xVec3 * a /* r3 */, const struct xVec3 * b /* r4 */) {
    // Local variables
    float d; // f28
    float dx__; // f31
    float dy__; // f30
    float dz__; // f29
}

// Range: 0x80105854 -> 0x801058C4
void xVec3Lerp(struct xVec3 * o /* r3 */, const struct xVec3 * a /* r4 */, const struct xVec3 * b /* r5 */, float f /* f1 */) {}

// Range: 0x801058C4 -> 0x80105938
float xVec3NormalizeSafe(struct xVec3 & v /* r31 */) {
    // Local variables
    float len_squ; // f31
}

// Range: 0x80105938 -> 0x801059B8
float xVec3NormalizeSafe(struct xVec3 & o /* r1+0x8 */, const struct xVec3 & v /* r31 */) {
    // Local variables
    float len_squ; // f31
}


