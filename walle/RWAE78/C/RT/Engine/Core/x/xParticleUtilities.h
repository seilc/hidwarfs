/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xParticleUtilities.h
*/
float quadrantTable[4][4]; // size: 0x40, address: 0x806CDB70
float sinCoeffTable[6]; // size: 0x18, address: 0x806CDBB0
// signature: AddParticle(ParticleGeometry &, int, const xVec3 &, const xVec2 &, const xVec2 &, unsigned int, float, float, float, const Math::Matrix43 &)
// Range: 0x80163C30 -> 0x80163FA0
void AddParticle(class xVec3 * pos /* r27 */, class xVec2 * minUV /* r28 */, class xVec2 * maxUV /* r29 */, unsigned int color /* r30 */, float width /* f30 */, float height /* f31 */, float rot /* f25 */, class Matrix43 * camMat /* r31 */) {
    // Local variables
    int ioffset; // r11
    int voffset; // r0
    float rotVal; // f3
    int quadrant; // r0
    float t0; // f0
    float t1; // f27
    float ts0; // f26
    float ts1; // f25
    float resultSin; // f12
    float resultCos; // f6
    float cx; // f7
    float cy; // f8
    float cz; // f9
    float sx; // f25
    float sy; // f26
    float sz; // f27

    // References
    // -> float quadrantTable[4][4];
    // -> float sinCoeffTable[6];
}
