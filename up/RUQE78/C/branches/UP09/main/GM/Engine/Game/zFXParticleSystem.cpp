/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zFXParticleSystem.cpp
*/
float sDefaultParticleEmitCullDistance; // size: 0x4, address: 0x807AEEF0
static float kVarScale; // size: 0x4, address: 0x807808CC
static float kInvVarScale; // size: 0x4, address: 0x8081E55C
class SystemInstance * * sInstances; // size: 0x4, address: 0x8081E560
unsigned int sMaxSystems; // size: 0x4, address: 0x8081E564
class generator_data * sInstanceDataPool; // size: 0x4, address: 0x8081E568
class NumberPool sNumberPool; // size: 0x14, address: 0x8081E56C
unsigned int sNumTurbulence; // size: 0x4, address: 0x8081E580
unsigned int sNextAdd; // size: 0x4, address: 0x8081E584
class xVec3 * sTurbulenceField; // size: 0x4, address: 0x8081E588
// signature: FX::Particles::Local::FXParticleSystemEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80167D60 -> 0x80167F0C
void FX::Particles::Local::FXParticleSystemEventWrapper(class xBase * to /* r31 */) {
    // References
    // -> class activity_data * activities;
    // -> int activities_used;
    // -> unsigned int sMaxSystems;
    // -> class SystemInstance * * sInstances;
}
// signature: FX::Particles::Local::SetupCurve(GradientCurve::MiniCurve &, unsigned long long, float, float, int)
// Range: 0x80167F10 -> 0x801683EC
void FX::Particles::Local::SetupCurve(class MiniCurve & ioCurve /* r30 */, float inMin /* f29 */, float inMax /* f30 */, int inNumPoints /* r31 */) {
}
// signature: FX::Particles::Local::CalculateTangentVector(xVec3 &, xVec3 &, const xVec3 &, const xMat4x3 &)
// Range: 0x80168420 -> 0x801686A4
void FX::Particles::Local::CalculateTangentVector() {
    // Local variables
    class xVec3 axis; // r1+0x8
}
// Range: 0x801687B0 -> 0x80168974
class SystemInstance * FX::Particles::Local::CreateSystemInstanceFrom(unsigned long long inSystemID /* r30:r29 */) {
    {
        // Range: 0x801687BC -> 0x80168954
        // Local variables
        class zFXParticleSystem * system; // r4
        class SystemInstance * instance; // r31
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> class generator_data * sInstanceDataPool;
    // -> class SystemInstance * * sInstances;
    // -> class NumberPool sNumberPool;
}
// signature: FX::Particles::MotionSystems::Turbulence::UpdateParticle(FX::Particles::Local::particle_instance &, float, int) const
// Range: 0x8016ECD0 -> 0x8016F19C
void FX::Particles::MotionSystems::Turbulence::UpdateParticle() const {
    // Local variables
    float scaleToDimension; // f12
    float fx; // f4
    float fy; // f5
    float fz; // f7
    int x; // r9
    int y; // r23
    int z; // r24
    int ix1; // r10
    int iy0; // r8
    int iy1; // r11
    int iz0; // r23
    int iz1; // r12
    float fx2; // f28
    float fy2; // f5
    float fz2; // f27
    float fix2; // f30
    float fiy2; // f11
    float fiz2; // f2
    float dirX; // f3
    float dirY; // f4
    float dirZ; // f5
    float dirScale; // f10

    {
        // Range: 0x8016EEA0 -> 0x8016EEA0
        // Local variables
        float strength; // f0
    }
    {
        // Range: 0x8016EEA4 -> 0x8016EEA4
        // Local variables
        float strength; // f0
    }
    {
        // Range: 0x8016EF2C -> 0x8016EF2C
        // Local variables
        float strength; // f0
    }
    {
        // Range: 0x8016EF88 -> 0x8016EF88
        // Local variables
        float strength; // f0
    }
    {
        // Range: 0x8016EF94 -> 0x8016EF94
        // Local variables
        float strength; // f0
    }
    {
        // Range: 0x8016EFD4 -> 0x8016EFD4
        // Local variables
        float strength; // f0
    }
    {
        // Range: 0x8016F01C -> 0x8016F01C
        // Local variables
        float strength; // f0
    }
    {
        // Range: 0x8016F0BC -> 0x8016F0BC
        // Local variables
        float strength; // f0
    }

    // References
    // -> class xVec3 * sTurbulenceField;
}
// signature: FX::Particles::MotionSystems::Turbulence::CreateImpl(float, unsigned int, float, unsigned int)
// Range: 0x8016AC20 -> 0x8016AC50
void FX::Particles::MotionSystems::Turbulence::CreateImpl() {
}
// signature: FX::Particles::MotionSystems::Attractor::UpdateParticle(FX::Particles::Local::particle_instance &, float)
// Range: 0x8016E350 -> 0x8016E45C
void FX::Particles::MotionSystems::Attractor::UpdateParticle() {
    // Local variables
    class xVec3 toCenter; // r1+0x14
    float r2; // f0
    float at; // f4
}
// signature: FX::Particles::MotionSystems::Attractor::CreateImpl(const FX::Particles::SystemInstance &, unsigned int)
// Range: 0x8016B460 -> 0x8016B494
void FX::Particles::MotionSystems::Attractor::CreateImpl() {
}
// signature: FX::Particles::MotionSystems::Vortex::UpdateParticle(FX::Particles::Local::particle_instance &, float)
// Range: 0x8016E470 -> 0x8016E5A4
void FX::Particles::MotionSystems::Vortex::UpdateParticle() {
    // Local variables
    class xVec3 toPoint; // r1+0x20
    class xVec3 pushDir; // r1+0x14
    float r2; // f0
    float at; // f7
}
// signature: FX::Particles::MotionSystems::Vortex::CreateImpl(const FX::Particles::SystemInstance &, unsigned int)
// Range: 0x8016B4A0 -> 0x8016B58C
void FX::Particles::MotionSystems::Vortex::CreateImpl() {
}
// signature: FX::Particles::MotionSystems::Collision::Shape::UpdateLocation(const xVec3 &)
// Range: 0x80169660 -> 0x80169664
void FX::Particles::MotionSystems::Collision::Shape::UpdateLocation() {
}
// signature: FX::Particles::MotionSystems::Collision::Sphere::UpdateLocation(const xVec3 &)
// Range: 0x801F0AF0 -> 0x801F0B5C
void FX::Particles::MotionSystems::Collision::Sphere::UpdateLocation() {
}
// signature: FX::Particles::MotionSystems::Collision::Sphere::DoesCollide(const FX::Particles::Local::particle_instance &, float) const
// Range: 0x801F0AA0 -> 0x801F0AE4
bool FX::Particles::MotionSystems::Collision::Sphere::DoesCollide() const {
    // Local variables
    float distSq; // f0
}
// signature: FX::Particles::MotionSystems::Collision::Sphere::GetNormal(xVec3 &, const xVec3 &, const xVec3 &, float) const
// Range: 0x801F0940 -> 0x801F0A98
void FX::Particles::MotionSystems::Collision::Sphere::GetNormal() const {
    // Local variables
    class xVec3 hitLoc; // r1+0x20
}
// signature: FX::Particles::MotionSystems::Collision::Box::DoesCollide(const FX::Particles::Local::particle_instance &, float) const
// Range: 0x801F08B0 -> 0x801F0930
bool FX::Particles::MotionSystems::Collision::Box::DoesCollide() const {
}
// signature: FX::Particles::MotionSystems::Collision::Box::GetNormal(xVec3 &, const xVec3 &, const xVec3 &, float) const
// Range: 0x801F08A0 -> 0x801F08A4
void FX::Particles::MotionSystems::Collision::Box::GetNormal() const {
}
// signature: FX::Particles::MotionSystems::Collision::Plane::UpdateLocation(const xVec3 &)
// Range: 0x801F0830 -> 0x801F089C
void FX::Particles::MotionSystems::Collision::Plane::UpdateLocation() {
}
// signature: FX::Particles::MotionSystems::Collision::Plane::DoesCollide(const FX::Particles::Local::particle_instance &, float) const
// Range: 0x801F07A0 -> 0x801F082C
bool FX::Particles::MotionSystems::Collision::Plane::DoesCollide() const {
    // Local variables
    class xVec3 pos; // r1+0x14
    float d; // f0
}
// signature: FX::Particles::MotionSystems::Collision::World::DoesCollide(const FX::Particles::Local::particle_instance &, float) const
// Range: 0x801F0290 -> 0x801F0788
bool FX::Particles::MotionSystems::Collision::World::DoesCollide(class World * this /* r22 */, class particle_instance & inParticle /* r23 */) const {
    // Local variables
    class intersect_args args; // r1+0x90

    {
        // Range: 0x801F02D4 -> 0x801F02D4
        // Local variables
        class intersect_env_CB _tempCB; // r1+0x18
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> class zGlobals globals;
}
// signature: FX::Particles::MotionSystems::Collision::Rain::DoesCollide(const FX::Particles::Local::particle_instance &, float) const
// Range: 0x801EF8E0 -> 0x801F027C
bool FX::Particles::MotionSystems::Collision::Rain::DoesCollide(class Rain * this /* r22 */, class particle_instance & inParticle /* r23 */) const {
    // Local variables
    class intersect_args args; // r1+0x150

    {
        // Range: 0x801EF984 -> 0x801EF984
        // Local variables
        class intersect_env_CB _tempCB; // r1+0x18
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> class zGlobals globals;
    // -> class xVec3 m_Null;
}
// signature: FX::Particles::MotionSystems::Collision::Rain::GetNormal(xVec3 &, const xVec3 &, const xVec3 &, float) const
// Range: 0x801EF8C0 -> 0x801EF8DC
void FX::Particles::MotionSystems::Collision::Rain::GetNormal() const {
}
// Range: 0x8016E5B0 -> 0x8016ECCC
void FX::Particles::MotionSystems::Collision::UpdateParticle(class Collision * this /* r30 */, class particle_instance & ioParticle /* r31 */, float dt /* f31 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// signature: FX::Particles::MotionSystems::Collision::CreateImpl(const FX::Particles::SystemInstance &, unsigned int)
// Range: 0x8016B590 -> 0x8016BA98
void FX::Particles::MotionSystems::Collision::CreateImpl(class Collision * this /* r27 */, unsigned int inAssetIndex /* r28 */) {
    // References
    // -> class xMat4x3 g_I3;
    // -> class generator_data * sInstanceDataPool;
    // -> class SystemInstance * * sInstances;
    // -> class NumberPool sNumberPool;
    // -> struct {} __vt__Q52FX9Particles13MotionSystems9Collision4Rain;
    // -> struct {} __vt__Q52FX9Particles13MotionSystems9Collision5World;
    // -> struct {} __vt__Q52FX9Particles13MotionSystems9Collision5Plane;
    // -> struct {} __vt__Q52FX9Particles13MotionSystems9Collision3Box;
    // -> struct {} __vt__Q52FX9Particles13MotionSystems9Collision6Sphere;
}
// Range: 0x80169D30 -> 0x80169EAC
void FX::Particles::MotionSystems::Attach::SetupParticle(class Attach * this /* r29 */, class xVec3 & ioLocation /* r30 */, unsigned int & ioFlags /* r31 */) {
    // Local variables
    class xVec3 diff; // r1+0x14
    float dist; // f0
    float floatT; // f0
    float useT; // f0
    unsigned int intT; // r4
}
// signature: FX::Particles::MotionSystems::Attach::GetLocation(const xVec3 &, const unsigned int)
// Range: 0x8016F1D0 -> 0x8016F374
class xVec3 FX::Particles::MotionSystems::Attach::GetLocation(class Attach * this /* r31 */) {
    // Local variables
    float useT; // f9
    class xVec3 outPos; // r1+0x8
}
// signature: FX::Particles::MotionSystems::Attach::Create(const FX::Particles::SystemInstance &, unsigned int)
// Range: 0x8016BAA0 -> 0x8016C014
void FX::Particles::MotionSystems::Attach::Create(class Attach * this /* r28 */, unsigned int inAssetIndex /* r29 */) {
    {
        // Range: 0x8016BB04 -> 0x8016BB1C
        // Local variables
        class EntityHandleBase * handle; // r0
    }
}
// Range: 0x80168980 -> 0x80168AAC
void FX::Particles::SceneEnter() {
    // Local variables
    unsigned int numSystems; // r0
    unsigned int numToAllocate; // r31

    // References
    // -> class generator_data * sInstanceDataPool;
    // -> class NumberPool sNumberPool;
    // -> class SystemInstance * * sInstances;
    // -> unsigned int sMaxSystems;
    // -> int activities_used;
    // -> class activity_data * activities;
    // -> class xVec3 * sTurbulenceField;
    // -> unsigned int sNumTurbulence;
    // -> class zGlobals globals;
    // -> float sDefaultParticleEmitCullDistance;
}
// Range: 0x80168AB0 -> 0x80168C28
void FX::Particles::SceneExit() {
    // References
    // -> class SystemInstance * * sInstances;
    // -> unsigned int sNumTurbulence;
    // -> class xVec3 * sTurbulenceField;
    // -> class NumberPool sNumberPool;
    // -> int activities_used;
    // -> class activity_data * activities;
    // -> class zGlobals globals;
}
// Range: 0x80168C30 -> 0x80168D54
void FX::Particles::Update(float inDelta /* f29 */) {
    {
        // Range: 0x80168CE4 -> 0x80168D0C
        // Local variables
        unsigned int idx; // r30

        {
            // Range: 0x80168CE4 -> 0x80168D0C
            // Local variables
            class SystemInstance * instance; // r3
        }
    }

    // References
    // -> unsigned int sMaxSystems;
    // -> class SystemInstance * * sInstances;
    // -> unsigned int sNextAdd;
    // -> class xVec3 * sTurbulenceField;
}
// Range: 0x80168D60 -> 0x8016965C
void FX::Particles::SystemInstance::Update(class SystemInstance * this /* r30 */, float inDelta /* f31 */) {
    // Local variables
    class xVec3 & accelDir; // r3

    {
        // Range: 0x80168E10 -> 0x80168E10
        // Local variables
        int idx; // r6
    }
    {
        // Range: 0x80168EB0 -> 0x80168EB0
        // Local variables
        int idx; // r6
    }
    {
        // Range: 0x80168FBC -> 0x80168FC8
        // Local variables
        int idx; // r29
    }
    {
        // Range: 0x801692F8 -> 0x8016934C
        // Local variables
        short & idx; // r29
    }
    {
        // Range: 0x80169384 -> 0x80169564
        // Local variables
        bool isCulled; // r29
        float cullDistance2; // f30

        {
            // Range: 0x801693E8 -> 0x80169450
            // Local variables
            int idx; // r31

            {
                // Range: 0x801693EC -> 0x80169450
                // Local variables
                float camera2SpawnDist2; // f0
            }
        }
    }

    // References
    // -> float sDefaultParticleEmitCullDistance;
    // -> class zGlobals globals;
    // -> class generator_data * sInstanceDataPool;
}
// signature: FX::Particles::zFXParticleSystem::Emit(float, const xMat4x3 &, unsigned int) const
// Range: 0x801696E0 -> 0x80169C4C
void FX::Particles::zFXParticleSystem::Emit(class zFXParticleSystem * this /* r21 */, class xMat4x3 & inWorldMat /* r22 */, unsigned int inInstanceIdx /* r23 */) const {
    // Local variables
    float available; // f21
    float lifetimeScale; // f0
    class Attach * attachSys; // r27
    class xVec3 velDir; // r1+0x3C
    class xMat3x3 velMat; // r1+0x78
    unsigned int need; // r26

    {
        // Range: 0x8016980C -> 0x80169BC4
        // Local variables
        class particle_instance * end; // r24
        class particle_instance * particleIt; // r25
        int have; // r3
        unsigned char * mem; // r1+0x8

        {
            // Range: 0x8016980C -> 0x80169BB8
            // Local variables
            class xVec3 tang; // r1+0x18
            class xVec3 tempDir; // r1+0x24
            float vi; // f1

            {
                // Range: 0x8016980C -> 0x8016980C
                // Local variables
                class xVec3 dir; // r1+0x30
                float ang; // f19
                float wAng; // f21
                float hAng; // f20
                class AlongAxisData & data; // r0
            }
            {
                // Range: 0x8016980C -> 0x8016980C
                // Local variables
                float ang; // f1
                class xMat3x3 tempMat; // r1+0x48
            }
            {
                // Range: 0x8016980C -> 0x80169824
                // Local variables
                short factor; // r0
            }
            {
                // Range: 0x80169824 -> 0x80169824
                // Local variables
                short factor; // r0
            }
            {
                // Range: 0x80169824 -> 0x80169828
                // Local variables
                float lifeDelta; // f1
            }
            {
                // Range: 0x80169828 -> 0x8016982C
                // Local variables
                class xVec3 temp; // r1+0xC
            }
        }
    }

    // References
    // -> class generator_data * sInstanceDataPool;
    // -> static float kVarScale;
    // -> class xVec3 m_Null;
    // -> class SystemInstance * * sInstances;
}
// signature: FX::Particles::zFXParticleSystem::zFXParticleSystem(World::EntityHandleBase *, Sext::FXParticleSystem *)
// Range: 0x80169EC0 -> 0x8016A000
void * FX::Particles::zFXParticleSystem::zFXParticleSystem(class zFXParticleSystem * this /* r31 */) {
    // References
    // -> struct {} __vt__Q32FX9Particles17zFXParticleSystem;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x8016A000 -> 0x8016A5B4
void * FX::Particles::zFXParticleSystem::~zFXParticleSystem(class zFXParticleSystem * this /* r29 */) {
    // References
    // -> class NumberPool sNumberPool;
    // -> class SystemInstance * * sInstances;
    // -> unsigned int sNumTurbulence;
    // -> class xVec3 * sTurbulenceField;
    // -> struct {} __vt__Q32FX9Particles17zFXParticleSystem;
}
// Range: 0x8016A670 -> 0x8016ABE4
void FX::Particles::zFXParticleSystem::BatchSetup(class zFXParticleSystem * this /* r30 */, bool inReplace /* r28 */) {
    // Local variables
    class xParticleBatchSystem batchSys; // r1+0x14
    class EntityHandleBase * handle; // r0
    int numSamples; // r31
    unsigned int numAccel; // r0
    int numWind; // r0
    unsigned int numTurbulence; // r0

    {
        // Range: 0x8016A9F4 -> 0x8016AA68
        // Local variables
        unsigned int idx; // r28

        {
            // Range: 0x8016A9F4 -> 0x8016AA68
            // Local variables
            class AccelerationEffect & data; // r0

            {
                // Range: 0x8016AA0C -> 0x8016AA68
                // Local variables
                class xVec3 accelDir; // r1+0x8
            }
        }
    }
    {
        // Range: 0x8016AAA4 -> 0x8016AAD0
        // Local variables
        int idx; // r28

        {
            // Range: 0x8016AAA4 -> 0x8016AAD0
            // Local variables
            class WindEffect & data; // r29
        }
    }
    {
        // Range: 0x8016AB44 -> 0x8016AB9C
        // Local variables
        class TurbulenceEffect & data; // r0
    }
}
// Range: 0x8016ADD0 -> 0x8016B1A0
void FX::Particles::zFXParticleSystem::UVSetup(class zFXParticleSystem * this /* r28 */) {
    // Local variables
    unsigned int numRows; // r30
    unsigned int numCols; // r29
    float rowF; // f31
    float colF; // f30

    {
        // Range: 0x8016AE6C -> 0x8016AF44
        // Local variables
        unsigned int row; // r8

        {
            // Range: 0x8016AE6C -> 0x8016AED4
            // Local variables
            unsigned int col; // r9
        }
    }
    {
        // Range: 0x8016AF54 -> 0x8016B080
        // Local variables
        class CellTextureData & data; // r0

        {
            // Range: 0x8016AF7C -> 0x8016B070
            // Local variables
            unsigned int row; // r8

            {
                // Range: 0x8016AF7C -> 0x8016B064
                // Local variables
                unsigned int col; // r9
            }
        }
    }
    {
        // Range: 0x8016B080 -> 0x8016B12C
        // Local variables
        class CoordListTextureData & data; // r0

        {
            // Range: 0x8016B09C -> 0x8016B0B8
            // Local variables
            unsigned int idx; // r6
        }
    }
}
// Range: 0x8016B1A0 -> 0x8016B454
void FX::Particles::SystemInstance::CreateMotionSystems(class SystemInstance * this /* r30 */) {
    // Local variables
    unsigned int numAccel; // r0

    {
        // Range: 0x8016B1E0 -> 0x8016B258
        // Local variables
        unsigned int idx; // r27

        {
            // Range: 0x8016B1E0 -> 0x8016B258
            // Local variables
            class AccelerationEffect & data; // r0

            {
                // Range: 0x8016B1FC -> 0x8016B258
                // Local variables
                class xVec3 accelDir; // r1+0x8
            }
        }
    }
    {
        // Range: 0x8016B2B0 -> 0x8016B2BC
        // Local variables
        int idx; // r27
    }
    {
        // Range: 0x8016B330 -> 0x8016B33C
        // Local variables
        int idx; // r27
    }
    {
        // Range: 0x8016B3B0 -> 0x8016B3BC
        // Local variables
        int idx; // r27
    }
}
// signature: FX::Particles::SystemInstance::SystemInstance(FX::Particles::zFXParticleSystem *)
// Range: 0x8016C380 -> 0x8016C4D0
void * FX::Particles::SystemInstance::SystemInstance(class SystemInstance * this /* r31 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x8016C4D0 -> 0x8016C748
void * FX::Particles::SystemInstance::~SystemInstance(class SystemInstance * this /* r24 */) {
    // References
    // -> class SystemInstance * * sInstances;
    // -> class NumberPool sNumberPool;
}
// signature: FX::Particles::SystemInstance::SetParentCulled(bool)
// Range: 0x8016C750 -> 0x8016C758
void FX::Particles::SystemInstance::SetParentCulled() {
}
// signature: FX::Particles::SystemInstance::SetRunning(bool)
// Range: 0x8016C760 -> 0x8016C84C
void FX::Particles::SystemInstance::SetRunning() {
    // References
    // -> class generator_data * sInstanceDataPool;
}
// Range: 0x8016C850 -> 0x8016C900
void FX::Particles::SystemInstance::UnregisterSelf() {
    // References
    // -> class NumberPool sNumberPool;
    // -> class SystemInstance * * sInstances;
}
// signature: FX::Particles::zFXParticleSystem::SetupGeometry(unsigned char *, int, ParticleGeometry &, void *, const Math::Matrix43 &)
// Range: 0x8016C900 -> 0x8016CD38
void FX::Particles::zFXParticleSystem::SetupGeometry(unsigned char * mem /* r18 */, int inCount /* r19 */, class ParticleGeometry & geom /* r20 */, class Matrix43 & camMat /* r21 */) {
    // Local variables
    int initialCount; // r0
    class zFXParticleSystem * system; // r30
    class FXParticleSystem & asset; // r0
    class xVec4 * uvAnimList; // r29
    enum RotationUpdateType rotType; // r28
    float offsetZ; // f27
    bool useOffsetZ; // r27
    class Vector camPos; // r1+0x78
    int addedIdx; // r26

    {
        // Range: 0x8016C9C4 -> 0x8016CC64
        // Local variables
        int curIdx; // r25

        {
            // Range: 0x8016C9C4 -> 0x8016CC64
            // Local variables
            float tmpRot; // r1+0x8
            float * useRot; // r6
            class xColor useColor; // r1+0xC
            float alphaF; // f2
            float dToCamSq; // f1
            class xVec3 camDiff; // r1+0x60
            class xVec3 tmpLoc; // r1+0x6C
            class xVec3 * useLoc; // r22
            class xVec2 * maxUV; // r23
            class xVec2 * minUV; // r24
            class xVec4 & uvRange; // reg65535

            {
                // Range: 0x8016C9C4 -> 0x8016C9C4
                // Local variables
                float alphaMod; // f0
            }
            {
                // Range: 0x8016C9C4 -> 0x8016CC08
                // Local variables
                class Vector dir; // r1+0x50
                class Vector2 screenDir; // r1+0x10
            }
        }
    }

    // References
    // -> class xVec2 m_Ones;
    // -> class xVec2 m_Null;
    // -> class xVec3 m_Null;
}
// signature: FX::Particles::zFXParticleSystem::UpdateParticles(int &, unsigned char *, int, int, unsigned char *, int, float, void *, float *, float *)
// Range: 0x8016D2C0 -> 0x8016E0B4
int FX::Particles::zFXParticleSystem::UpdateParticles(int & outVisible /* r1+0x8 */, unsigned char * outmem /* r15 */, int inMemStart /* r16 */, unsigned char * mem /* r17 */, int inCount /* r18 */, float dt /* f25 */, float * outBoundLower /* r19 */, float * outBoundUpper /* r20 */) {
    // Local variables
    class zFXParticleSystem * system; // r24
    class FXParticleSystem & asset; // r0
    unsigned int currentInstanceIdx; // r21
    class Attach * cAttachSystem; // r1+0x138
    class Attractor * cAttractorSystems; // r1+0x134
    class Vortex * cVortexSystems; // r14
    class Collision * cCollisionSystems; // r23
    class xVec3 cDPosScaled; // r1+0x6C
    class xVec3 cAccelDir; // r1+0x60
    short cTurbulenceIdx; // r1+0x130
    int cDeadParticles; // r25
    class xVec3 worldAccel; // r1+0x54
    class xVec3 windDir; // r1+0x48
    float windCoeff; // f31
    class MiniCurve & speedCurve; // r1+0x12C
    float speedMin; // f30
    float speedMax; // f2
    float speedRange; // f29
    float speedLimit; // f28
    float speedLimitSq; // f27
    class MiniCurve & colorCurve; // r1+0x128
    class FloatColorRGB & colorMin; // r0
    class FloatColorRGB & colorMax; // r0
    class FloatColorRGB useColorRange; // r1+0x3C
    class FloatColorRGB useColorMin; // r1+0x30
    class MiniCurve & alphaCurve; // r1+0x124
    class MiniCurve & widthCurve; // r1+0x120
    class MiniCurve & heightCurve; // r1+0x11C
    class MiniCurve & rotationCurve; // r1+0x118
    enum RotationUpdateType rotType; // r1+0x114
    unsigned int uvAnimCount; // r1+0x110
    float fpsdt; // f26
    int numAttractors; // r0
    int numVortices; // r0
    int numCollision; // r0
    class Turbulence * turbulenceSystem; // r1+0x10C
    float reemitPercent; // f22
    unsigned int reemitRequested; // r1+0x108
    class particle_instance * pstart; // r0
    class particle_instance * pend; // r22
    class particle_instance * particleIt; // r26
    unsigned int memIdx; // r21
    float maxAt0; // f22
    float maxAt1; // f2
    float maxSize; // f3

    {
        // Range: 0x8016D598 -> 0x8016D6E0
        // Local variables
        class particle_instance * current; // r31

        {
            // Range: 0x8016D598 -> 0x8016D6B0
            // Local variables
            class xMat4x3 reemitMat; // r1+0xB0
        }
    }
    {
        // Range: 0x8016D754 -> 0x8016D794
        // Local variables
        class xVec3 diff; // r1+0x24
    }
    {
        // Range: 0x8016D7A8 -> 0x8016D7A8
        {
            // Range: 0x8016D7A8 -> 0x8016D7A8
            // Local variables
            int idx; // r21
        }
    }
    {
        // Range: 0x8016D844 -> 0x8016D844
        {
            // Range: 0x8016D844 -> 0x8016D844
            // Local variables
            int idx; // r28
        }
    }
    {
        // Range: 0x8016D8D4 -> 0x8016D8D4
        {
            // Range: 0x8016D8D4 -> 0x8016D8D4
            // Local variables
            int idx; // r28
        }
    }
    {
        // Range: 0x8016DA34 -> 0x8016DA5C
        // Local variables
        float len2; // f0

        {
            // Range: 0x8016DA44 -> 0x8016DA5C
            // Local variables
            float invlen; // f0
        }
    }
    {
        // Range: 0x8016DA74 -> 0x8016DAFC
        // Local variables
        float speedscale; // f0
        float varMax; // f4
        float varFactor; // f22
    }
    {
        // Range: 0x8016DB3C -> 0x8016DB7C
        // Local variables
        float rotdt; // f1
    }
    {
        // Range: 0x8016DB8C -> 0x8016DC80
        // Local variables
        float alphaF; // f0

        {
            // Range: 0x8016DB8C -> 0x8016DC50
            // Local variables
            class particle_instance tmp; // r1+0x78
        }
    }
    {
        // Range: 0x8016DDB8 -> 0x8016DE00
        // Local variables
        float colorVal; // f0
        class xColor & useColor; // r23
    }
    {
        // Range: 0x8016DE50 -> 0x8016DF84
        // Local variables
        class xVec3 * useLoc; // r21
        float h; // f0
        float w; // f22
    }

    // References
    // -> static float kInvVarScale;
    // -> class SystemInstance * * sInstances;
    // -> class generator_data * sInstanceDataPool;
}
// Range: 0x8016F400 -> 0x8016F468
class Entity * Sext::FXParticleSystem::Create(class EntityHandleBase * handle /* r30 */, class FXParticleSystem * inAsset /* r31 */) {
}
