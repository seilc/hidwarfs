/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xParticleUtilities.h
*/
float quadrantMultTable[5][2]; // size: 0x28, address: 0x80780758
float quadrantCalcTable[5][2]; // size: 0x28, address: 0x80780780
float sinCoeffTable[6]; // size: 0x18, address: 0x807807A8
// signature: ParticleSorter::Create(int, unsigned short)
// Range: 0x800730D0 -> 0x8007319C
void ParticleSorter::Create(class ParticleSorter * this /* r30 */, int num /* r31 */) {
    // Local variables
    class Vector viewPos; // r1+0x18
    class Vector viewDir; // r1+0x8

    // References
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: ParticleGeometry::ParticleGeometry(int, World::ImmediatePrototypeEntity *)
// Range: 0x80072D90 -> 0x800730B0
void * ParticleGeometry::ParticleGeometry(class ParticleGeometry * this /* r23 */, int num /* r24 */) {
    // References
    // -> class Wii_GeometryStateOp geomStateOp;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x800730B0 -> 0x800730C8
bool ParticleGeometry::Valid() {
}
// signature: AddParticle(ParticleGeometry &, int, const xVec3 &, const xVec2 &, const xVec2 &, unsigned int, float, float, float, const Math::Matrix43 &)
// Range: 0x8016CDF0 -> 0x8016D2C0
void AddParticle() {
    // Local variables
    int ioffset; // r28
    int voffset; // r0
    float rotVal; // f22
    int quadrant; // r0
    float t0; // f0
    float t1; // f23
    float ts0; // f24
    float ts1; // f25
    float resultSin; // f11
    float resultCos; // f12
    class xVec3 camPos; // r1+0x68
    class xVec3 camUp; // r1+0x5C
    class xVec3 diff; // r1+0x50
    class xVec3 particleRight; // r1+0x44
    class xVec3 particleUp; // r1+0x38
    float cx; // f9
    float cy; // f8
    float cz; // f10
    float sx; // f11
    float sy; // f12
    float sz; // f22

    // References
    // -> float quadrantMultTable[5][2];
    // -> float quadrantCalcTable[5][2];
    // -> float sinCoeffTable[6];
}
// Range: 0x800731A0 -> 0x80073808
class Renderable3D * CommitParticleGeometry(class ParticleGeometry & geom /* r26 */, class Scene * scene /* r27 */, unsigned short visibleMask /* r28 */, class Texture * inOverrideTexture /* r29 */) {
    {
        // Range: 0x800731C4 -> 0x80073268
        // Local variables
        int index; // r5

        {
            // Range: 0x800731F4 -> 0x80073208
            // Local variables
            int i; // r9
        }
    }
    {
        // Range: 0x80073274 -> 0x800737EC
        {
            // Range: 0x80073564 -> 0x8007365C
            {
                // Range: 0x800735D0 -> 0x8007365C
                // Local variables
                class Sampler samplerData; // r1+0x24
            }
        }
    }
}
