/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xParticleUtilities.h
*/
float quadrantMultTable[5][2]; // size: 0x28, address: 0x8068B9C0
float quadrantCalcTable[5][2]; // size: 0x28, address: 0x8068B9E8
float sinCoeffTable[6]; // size: 0x18, address: 0x8068BA10
// Range: 0x800BC160 -> 0x800BC548
void AddParticle(class ParticleGeometry & geom /* r25 */, int index /* r24 */, class xVec3 & pos /* r26 */, class xVec2 & minUV /* r27 */, class xVec2 & maxUV /* r28 */, unsigned int color /* r29 */, float width /* f28 */, float height /* f29 */, float rot /* f27 */, class Matrix43 & camMat /* r30 */) {
    // Local variables
    class ImmediateContext & immCtxt; // r0
    int ioffset; // r0
    int voffset; // r31
    float rotVal; // f10
    int quadrant; // r0
    float t0; // f0
    float t1; // f10
    float ts0; // f11
    float ts1; // f12
    float resultSin; // f31
    float resultCos; // f30
    class xVec3 camPos; // r1+0x68
    class xVec3 camUp; // r1+0x5C
    class xVec3 diff; // r1+0x50
    class xVec3 particleRight; // r1+0x44
    class xVec3 particleUp; // r1+0x38
    float cx; // f0
    float cy; // f1
    float cz; // f28
    float sx; // f27
    float sy; // f30
    float sz; // f29

    // References
    // -> float quadrantMultTable[5][2];
    // -> float quadrantCalcTable[5][2];
    // -> float sinCoeffTable[6];
}
// Range: 0x800B4C60 -> 0x800B4C78
void * NumberPool::NumberPool() {
}
// Range: 0x800B5080 -> 0x800B50DC
void NumberPool::Clear(class NumberPool * this /* r31 */) {
}
// signature: NumberPool::SetSize(unsigned int)
// Range: 0x800B4C80 -> 0x800B4CC8
void NumberPool::SetSize(class NumberPool * this /* r31 */) {
}
// Range: 0x800B4DC0 -> 0x800B4E28
unsigned int NumberPool::Get() {
    // Local variables
    unsigned int ret; // r4
}
// signature: NumberPool::Release(unsigned int)
// Range: 0x800B4F50 -> 0x800B4FB0
void NumberPool::Release() {
}
