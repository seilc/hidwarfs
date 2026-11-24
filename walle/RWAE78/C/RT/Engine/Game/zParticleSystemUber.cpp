/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zParticleSystemUber.cpp
*/
// Range: 0x801631F0 -> 0x80163288
class zParticleSystem * * zParticleSystemCreateAll() {
    // References
    // -> struct {} __vt__19zParticleSystemUber;
    // -> struct {} __vt__15zParticleSystem;
}
// signature: Evaluate(const GradientCurve::zGradientCurve *, float, float, float)
// Range: 0x80163C10 -> 0x80163C28
float Evaluate() {
}
// signature: Evaluate(const GradientCurve::zGradientCurve *, float, _xFColor, _xFColor)
// Range: 0x80164300 -> 0x80164444
unsigned int Evaluate(class _xFColor * min /* r30 */, class _xFColor * max /* r31 */) {
    // Local variables
    unsigned int color; // r4

    {
        // Range: 0x80164308 -> 0x801643A8
        // Local variables
        float val; // f0
    }
}
// Range: 0x80163290 -> 0x8016330C
class zParticleGenerator * zParticleSystemUber::create_generator(class zParticleSystemUber * this /* r29 */, class particle_generator * asset /* r30 */) {
    // References
    // -> struct {} __vt__22zParticleGeneratorUber;
}
// signature: zParticleSystemUber::update(float)
// Range: 0x80163310 -> 0x80163314
void zParticleSystemUber::update() {
}
// signature: CalculateTangentVector(xVec3 &, xVec3 &, const xVec3 &, const xMat4x3 &)
// Range: 0x80163FB0 -> 0x80164284
void CalculateTangentVector(class xVec3 * o /* r29 */, class xVec3 * dir /* r30 */, class xMat4x3 * mat /* r31 */) {
    // Local variables
    class xVec3 axis; // r1+0x8
}
// signature: zParticleSystemUber::updateParticles(unsigned char *, int, ParticleGeometry &, float, void *, const Math::Matrix43 &)
// Range: 0x80163320 -> 0x80163C08
int zParticleSystemUber::updateParticles(int count /* r15 */, class ParticleGeometry * geom /* r16 */, float dt /* f31 */, class Matrix43 * camMat /* r17 */) {
    // Local variables
    class zParticleGeneratorUber * gen; // r0
    class UberStruct * uberAsset; // r31
    float boundLower[3]; // r1+0x74
    float boundUpper[3]; // r1+0x68
    bool spiral; // r1+0x158
    class xMat4x3 mat; // r1+0xA0
    class xVec3 accelDir; // r1+0x5C
    class zGradientCurve * speedCurve; // r14
    float speedMin; // r1+0x13C
    float speedMax; // r1+0x138
    class zGradientCurve * accelCurve; // r30
    float accelMin; // f26
    float accelMax; // f25
    class zGradientCurve * colorCurve; // r29
    class _xFColor * colorMin; // r0
    class _xFColor * colorMax; // r0
    class zGradientCurve * alphaCurve; // r28
    float alphaMin; // f24
    float alphaMax; // f23
    class zGradientCurve * widthCurve; // r27
    float widthMin; // f22
    float widthMax; // f21
    class zGradientCurve * heightCurve; // r26
    float heightMin; // f20
    float heightMax; // f19
    class zGradientCurve * omegaCurve; // r25
    float omegaMin; // f18
    float omegaMax; // f17
    unsigned int uvAnimCount; // r24
    class xVec4 * uvAnimList; // r23
    float fps; // f16
    class particle_instance * piter; // r22
    class particle_instance * pend; // r21
    int parCount; // r20
    bool drawOnly; // r18
    class BroadBound bounds; // r1+0x80
    class Vector4 boundSphere; // r1+0x28

    {
        // Range: 0x8016355C -> 0x801636C8
        // Local variables
        int i; // r14

        {
            // Range: 0x8016355C -> 0x801636C8
            // Local variables
            float avgSize; // f3
            class xVec2 * maxUV; // r0
            class xVec2 * minUV; // r0
            class xVec4 * uvRange; // r0
            float height; // f0
            float width; // f16
            float t; // f14
        }
    }
    {
        // Range: 0x801636DC -> 0x80163B08
        // Local variables
        int i; // r19

        {
            // Range: 0x801636DC -> 0x80163B08
            // Local variables
            float avgSize; // f0
            class xVec2 * maxUV; // r0
            class xVec2 * minUV; // r0
            class xVec4 * uvRange; // r0
            float height; // f0
            float width; // f14
            class xVec3 dir; // r1+0x50
            float accel; // f0
            float speed; // f0
            float t; // f15
            class particle_instance * pcur; // r18

            {
                // Range: 0x801636DC -> 0x801636DC
                // Local variables
                class particle_instance temp; // r1+0xE0
            }
            {
                // Range: 0x801636DC -> 0x801636DC
                // Local variables
                class xVec3 tang; // r1+0x44
            }
            {
                // Range: 0x801636DC -> 0x801636E0
                // Local variables
                class xVec3 dpos; // r1+0x38
            }
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80164700 -> 0x8016487C
void zParticleGeneratorUber::create(class zParticleGeneratorUber * this /* r31 */, class zParticleSystemUber * system /* r30 */, class particle_generator * asset /* r29 */) {
    // Local variables
    class zModuleGradientCurve * gradMod; // r30
    class xParticleBatchSystem sys; // r1+0x8
    class Goodie * goodie; // r0
}
// Range: 0x80164890 -> 0x80164CC4
unsigned int zParticleGeneratorUber::emit(class zParticleGeneratorUber * this /* r23 */, int num /* r21 */, class xMat4x3 * mat /* r24 */, class xVec3 * dPos /* r25 */, float dPosScale /* f25 */, class zParticleGeneratorSpawnPt * owner /* r26 */) {
    // Local variables
    unsigned char * mem; // r1+0x8
    int have; // r29
    class particle_instance * p; // r28
    class particle_instance * end; // r27

    {
        // Range: 0x80164964 -> 0x80164C3C
        // Local variables
        class xVec3 tang; // r1+0x18
        class xVec3 tempDir; // r1+0x24
        float lifeDelta; // f20

        {
            // Range: 0x80164968 -> 0x80164974
            // Local variables
            class xVec3 dir; // r1+0x30
            float ang; // f20
            float wAng; // f22
            float hAng; // f21
        }
        {
            // Range: 0x80164974 -> 0x80164978
            // Local variables
            float ang; // f1
            class xMat3x3 m; // r1+0x40
        }
        {
            // Range: 0x8016497C -> 0x80164980
            // Local variables
            class xVec3 temp; // r1+0xC
        }
    }
}
// Range: 0x80164D50 -> 0x80164DD8
void zParticleGeneratorUber::reset(class zParticleGeneratorUber * this /* r30 */, class zParticleGeneratorSpawnPt * spt /* r31 */) {
}
// Range: 0x80164DE0 -> 0x80164E38
void zParticleGeneratorUber::activate(class zParticleGeneratorUber * this /* r29 */, class zParticleGeneratorSpawnPt * spt /* r30 */, class xEnt * ent /* r31 */) {
}
// signature: zParticleGeneratorUber::deactivate(xEnt *)
// Range: 0x80164E40 -> 0x80164E74
void zParticleGeneratorUber::deactivate(class zParticleGeneratorUber * this /* r31 */) {
}
// signature: zParticleGeneratorUber::recreateWorldMat(const xMat4x3 &)
// Range: 0x80164E80 -> 0x80165294
void zParticleGeneratorUber::recreateWorldMat(class zParticleGeneratorUber * this /* r31 */) {
}
