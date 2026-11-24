/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zFXParticleSystem.cpp
*/
float sDefaultParticleEmitCullDistance; // size: 0x4, address: 0x806BD5C4
static float kVarScale; // size: 0x4, address: 0x8068BAC0
static float kInvVarScale; // size: 0x4, address: 0x807346F4
class SystemInstance * * sInstances; // size: 0x4, address: 0x807346F8
unsigned int sMaxSystems; // size: 0x4, address: 0x807346FC
class generator_data * sInstanceDataPool; // size: 0x4, address: 0x80734700
class NumberPool sNumberPool; // size: 0x14, address: 0x80734704
unsigned int sNumTurbulence; // size: 0x4, address: 0x80734718
unsigned int sNextAdd; // size: 0x4, address: 0x8073471C
class xVec3 * sTurbulenceField; // size: 0x4, address: 0x80734720
// signature: FX::Particles::Local::FXParticleSystemEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800B9060 -> 0x800B9090
void FX::Particles::Local::FXParticleSystemEventWrapper() {
}
// signature: FX::Particles::Local::SetupCurve(GradientCurve::MiniCurve &, unsigned long long, float, float, int)
// Range: 0x800B9090 -> 0x800B9118
void FX::Particles::Local::SetupCurve(class MiniCurve & ioCurve /* r30 */, float inMin /* f30 */, float inMax /* f31 */, int inNumPoints /* r31 */) {
    // Local variables
    class zGradientCurve * curve; // r4
}
// signature: FX::Particles::Local::CalculateTangentVector(xVec3 &, xVec3 &, const xVec3 &, const xMat4x3 &)
// Range: 0x800B9120 -> 0x800B91E0
void FX::Particles::Local::CalculateTangentVector(class xVec3 & o /* r29 */, class xVec3 & dir /* r30 */, class xMat4x3 & mat /* r31 */) {
    // Local variables
    class xVec3 axis; // r1+0xC
}
// Range: 0x800B91E0 -> 0x800B9270
class SystemInstance * FX::Particles::Local::CreateSystemInstanceFrom(unsigned long long inSystemID /* r30:r29 */) {
    {
        // Range: 0x800B91EC -> 0x800B9258
        // Local variables
        class zFXParticleSystem * system; // r4
        class SystemInstance * instance; // r31
    }

    // References
    // -> class xMat4x3 g_I3;
}
// signature: FX::Particles::MotionSystems::Turbulence::GetPoint(int, int) const
// Range: 0x800BDD30 -> 0x800BDD5C
class xVec3 & FX::Particles::MotionSystems::Turbulence::GetPoint() const {
    // Local variables
    int idx; // r4
    int idxsub; // r0
    int idxmask; // r5

    // References
    // -> class xVec3 * sTurbulenceField;
}
// signature: FX::Particles::MotionSystems::Turbulence::GetStrength(float)
// Range: 0x800BDD60 -> 0x800BDD78
float FX::Particles::MotionSystems::Turbulence::GetStrength() {
}
// signature: FX::Particles::MotionSystems::Collision::Sphere::UpdateLocation(const xVec3 &)
// Range: 0x80102370 -> 0x801023B4
void FX::Particles::MotionSystems::Collision::Sphere::UpdateLocation(class Sphere * this /* r31 */) {
}
// signature: FX::Particles::MotionSystems::Collision::Sphere::DoesCollide(const FX::Particles::Local::particle_instance &, float) const
// Range: 0x80102320 -> 0x80102364
bool FX::Particles::MotionSystems::Collision::Sphere::DoesCollide(class Sphere * this /* r31 */) const {
    // Local variables
    float distSq; // f0
}
// signature: FX::Particles::MotionSystems::Collision::Sphere::GetNormal(xVec3 &, const xVec3 &, const xVec3 &, float) const
// Range: 0x801022C0 -> 0x80102318
void FX::Particles::MotionSystems::Collision::Sphere::GetNormal(class Sphere * this /* r6 */, class xVec3 & outNormal /* r31 */) const {
    // Local variables
    class xVec3 hitLoc; // r1+0x18
}
// signature: FX::Particles::MotionSystems::Collision::Box::DoesCollide(const FX::Particles::Local::particle_instance &, float) const
// Range: 0x80102240 -> 0x801022C0
bool FX::Particles::MotionSystems::Collision::Box::DoesCollide() const {
}
// signature: FX::Particles::MotionSystems::Collision::Plane::UpdateLocation(const xVec3 &)
// Range: 0x801021F0 -> 0x80102234
void FX::Particles::MotionSystems::Collision::Plane::UpdateLocation(class Plane * this /* r31 */) {
}
// signature: FX::Particles::MotionSystems::Collision::Plane::DoesCollide(const FX::Particles::Local::particle_instance &, float) const
// Range: 0x80102180 -> 0x801021EC
bool FX::Particles::MotionSystems::Collision::Plane::DoesCollide(class Plane * this /* r31 */) const {
    // Local variables
    class xVec3 pos; // r1+0x14
    float d; // f0
}
// signature: FX::Particles::MotionSystems::Collision::World::DoesCollide(const FX::Particles::Local::particle_instance &, float) const
// Range: 0x80101F80 -> 0x80102178
bool FX::Particles::MotionSystems::Collision::World::DoesCollide(class World * this /* r28 */, class particle_instance & inParticle /* r29 */) const {
    // Local variables
    class intersect_args args; // r1+0x70

    {
        // Range: 0x80101FB4 -> 0x80101FB4
        // Local variables
        class intersect_env_CB _tempCB; // r1+0x10
    }

    // References
    // -> class zGlobals globals;
}
// signature: FX::Particles::MotionSystems::Collision::Rain::DoesCollide(const FX::Particles::Local::particle_instance &, float) const
// Range: 0x80101A60 -> 0x80101F1C
bool FX::Particles::MotionSystems::Collision::Rain::DoesCollide(class Rain * this /* r23 */, class particle_instance & inParticle /* r24 */) const {
    // Local variables
    class intersect_args args; // r1+0x100

    {
        // Range: 0x80101AD8 -> 0x80101AD8
        // Local variables
        class intersect_env_CB _tempCB; // r1+0x10
    }

    // References
    // -> class zGlobals globals;
    // -> class xVec3 m_Null;
}
// signature: FX::Particles::MotionSystems::Collision::Rain::GetNormal(xVec3 &, const xVec3 &, const xVec3 &, float) const
// Range: 0x80101A50 -> 0x80101A60
void FX::Particles::MotionSystems::Collision::Rain::GetNormal(class Rain * this /* r5 */) const {
}
// Range: 0x800B9270 -> 0x800B933C
void FX::Particles::SceneEnter() {
    // Local variables
    unsigned int numSystems; // r0
    unsigned int numToAllocate; // r30

    // References
    // -> class generator_data * sInstanceDataPool;
    // -> class NumberPool sNumberPool;
    // -> class SystemInstance * * sInstances;
    // -> unsigned int sMaxSystems;
    // -> class xVec3 * sTurbulenceField;
    // -> unsigned int sNumTurbulence;
    // -> float sDefaultParticleEmitCullDistance;
    // -> class zGlobals globals;
}
// Range: 0x800B9340 -> 0x800B939C
void FX::Particles::SceneExit() {
    // References
    // -> class NumberPool sNumberPool;
    // -> class zGlobals globals;
}
// Range: 0x800B93A0 -> 0x800B94BC
void FX::Particles::Update(float inDelta /* f29 */) {
    {
        // Range: 0x800B9450 -> 0x800B948C
        // Local variables
        unsigned int idx; // r28

        {
            // Range: 0x800B9450 -> 0x800B948C
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
// Range: 0x800B94C0 -> 0x800B99EC
void FX::Particles::SystemInstance::Update(class SystemInstance * this /* r29 */, float inDelta /* f30 */, bool inCheckCulling /* r30 */) {
    // Local variables
    class xVec3 & accelDir; // r27

    {
        // Range: 0x800B9560 -> 0x800B95BC
        // Local variables
        int idx; // r27
    }
    {
        // Range: 0x800B95BC -> 0x800B9634
        // Local variables
        int idx; // r27
    }
    {
        // Range: 0x800B9634 -> 0x800B9684
        // Local variables
        int idx; // r27
    }
    {
        // Range: 0x800B9838 -> 0x800B9888
        // Local variables
        short & idx; // r27
    }
    {
        // Range: 0x800B98C0 -> 0x800B99B4
        // Local variables
        bool isCulled; // r27
        float cullDistance2; // f31

        {
            // Range: 0x800B9910 -> 0x800B9964
            // Local variables
            int idx; // r30

            {
                // Range: 0x800B9914 -> 0x800B9964
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
// Range: 0x800B9A20 -> 0x800B9AFC
void FX::Particles::zFXParticleSystem::Update(class zFXParticleSystem * this /* r30 */, class SystemInstance * inInstance /* r31 */, float inDelta /* f30 */) {
    // Local variables
    float requested; // f31

    {
        // Range: 0x800B9A6C -> 0x800B9AC0
        // Local variables
        float rate; // f1
    }
}
// signature: FX::Particles::zFXParticleSystem::Emit(float, const xMat4x3 &, unsigned int) const
// Range: 0x800B9B80 -> 0x800BA230
void FX::Particles::zFXParticleSystem::Emit(class zFXParticleSystem * this /* r20 */, class xMat4x3 & inWorldMat /* r21 */, unsigned int inInstanceIdx /* r22 */) const {
    // Local variables
    float available; // f18
    float lifetimeScale; // f0
    class xVec3 velDir; // r1+0x74
    class xMat3x3 velMat; // r1+0xB0
    unsigned int need; // r25

    {
        // Range: 0x800B9CD4 -> 0x800BA1A0
        // Local variables
        class particle_instance * end; // r23
        class particle_instance * particleIt; // r24
        int have; // r3
        unsigned char * mem; // r1+0x10

        {
            // Range: 0x800B9CD4 -> 0x800BA1A0
            // Local variables
            class xVec3 tang; // r1+0x50
            class xVec3 tempDir; // r1+0x5C
            float vi; // f1

            {
                // Range: 0x800B9CD4 -> 0x800B9CD8
                // Local variables
                class xVec3 dir; // r1+0x68
                float ang; // f17
                float wAng; // f18
                float hAng; // f20
            }
            {
                // Range: 0x800B9CD8 -> 0x800B9CD8
                // Local variables
                float ang; // f4
                class xMat3x3 tempMat; // r1+0x80
            }
            {
                // Range: 0x800B9CD8 -> 0x800B9D00
                // Local variables
                short factor; // r0
            }
            {
                // Range: 0x800B9D00 -> 0x800B9D00
                // Local variables
                short factor; // r0
            }
            {
                // Range: 0x800B9D00 -> 0x800B9D00
                // Local variables
                float lifeDelta; // f1
            }
            {
                // Range: 0x800B9D00 -> 0x800B9D04
                // Local variables
                class xVec3 temp; // r1+0x44
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
// Range: 0x800BA240 -> 0x800BA348
void * FX::Particles::zFXParticleSystem::zFXParticleSystem(class zFXParticleSystem * this /* r31 */, class FXParticleSystem * inAsset /* r29 */) {
    // References
    // -> struct {} __vt__Q32FX9Particles17zFXParticleSystem;
}
// Range: 0x800BA350 -> 0x800BA408
void * FX::Particles::zFXParticleSystem::~zFXParticleSystem(class zFXParticleSystem * this /* r30 */) {
    // References
    // -> struct {} __vt__Q32FX9Particles17zFXParticleSystem;
}
// Range: 0x800BA410 -> 0x800BA480
void FX::Particles::zFXParticleSystem::ClearMem(class zFXParticleSystem * this /* r31 */) {
}
// Range: 0x800BA530 -> 0x800BAB98
void FX::Particles::zFXParticleSystem::BatchSetup(class zFXParticleSystem * this /* r29 */, bool inReplace /* r25 */) {
    // Local variables
    class xParticleBatchSystem batchSys; // r1+0x14
    class EntityHandleBase * handle; // r0
    int numWind; // r25

    {
        // Range: 0x800BA8DC -> 0x800BA964
        // Local variables
        unsigned int idx; // r25

        {
            // Range: 0x800BA8DC -> 0x800BA964
            {
                // Range: 0x800BA8FC -> 0x800BA964
                // Local variables
                class xVec3 accelDir; // r1+0x8
            }
        }
    }
    {
        // Range: 0x800BA98C -> 0x800BA9D0
        // Local variables
        int idx; // r27
    }

    // References
    // -> unsigned int sNumTurbulence;
    // -> class xVec3 * sTurbulenceField;
}
// Range: 0x800BABA0 -> 0x800BAF64
void FX::Particles::zFXParticleSystem::UVSetup(class zFXParticleSystem * this /* r28 */) {
    // Local variables
    unsigned int numRows; // r30
    unsigned int numCols; // r29
    float rowF; // f31
    float colF; // f30

    {
        // Range: 0x800BAC3C -> 0x800BAD1C
        // Local variables
        unsigned int row; // r7

        {
            // Range: 0x800BAC3C -> 0x800BAD1C
            // Local variables
            unsigned int col; // r8
        }
    }
    {
        // Range: 0x800BAD20 -> 0x800BAE44
        // Local variables
        class CellTextureData & data; // r0

        {
            // Range: 0x800BAD48 -> 0x800BAE40
            // Local variables
            unsigned int row; // r7

            {
                // Range: 0x800BAD48 -> 0x800BAE40
                // Local variables
                unsigned int col; // r8
            }
        }
    }
    {
        // Range: 0x800BAE44 -> 0x800BAEF0
        // Local variables
        class CoordListTextureData & data; // r0

        {
            // Range: 0x800BAE60 -> 0x800BAEEC
            // Local variables
            unsigned int idx; // r6
        }
    }
}
// Range: 0x800BAF70 -> 0x800BAFD8
void FX::Particles::zFXParticleSystem::Reset(class zFXParticleSystem * this /* r27 */) {
    {
        // Range: 0x800BAF84 -> 0x800BAFC4
        // Local variables
        unsigned int idx; // r28

        {
            // Range: 0x800BAF84 -> 0x800BAFC4
            // Local variables
            class SystemInstance * instance; // r3
        }
    }

    // References
    // -> unsigned int sMaxSystems;
    // -> class SystemInstance * * sInstances;
}
// Range: 0x800BAFE0 -> 0x800BB084
void FX::Particles::zFXParticleSystem::DebugReset(class zFXParticleSystem * this /* r27 */) {
    {
        // Range: 0x800BB028 -> 0x800BB070
        // Local variables
        unsigned int idx; // r28

        {
            // Range: 0x800BB028 -> 0x800BB070
            // Local variables
            class SystemInstance * instance; // r3
        }
    }

    // References
    // -> unsigned int sMaxSystems;
    // -> class SystemInstance * * sInstances;
}
// signature: FX::Particles::SystemInstance::CheckReset(const FX::Particles::zFXParticleSystem *)
// Range: 0x800BB090 -> 0x800BB0BC
void FX::Particles::SystemInstance::CheckReset() {
}
// Range: 0x800BB0C0 -> 0x800BB79C
void FX::Particles::SystemInstance::CreateMotionSystems(class SystemInstance * this /* r19 */) {
    {
        // Range: 0x800BB108 -> 0x800BB198
        // Local variables
        unsigned int idx; // r20

        {
            // Range: 0x800BB108 -> 0x800BB198
            {
                // Range: 0x800BB12C -> 0x800BB198
                // Local variables
                class xVec3 accelDir; // r1+0x8
            }
        }
    }
    {
        // Range: 0x800BB1E0 -> 0x800BB238
        // Local variables
        int idx; // r21
    }
    {
        // Range: 0x800BB280 -> 0x800BB300
        // Local variables
        int idx; // r21
    }
    {
        // Range: 0x800BB344 -> 0x800BB64C
        // Local variables
        int idx; // r20
    }

    // References
    // -> struct {} __vt__Q52FX9Particles13MotionSystems9Collision4Rain;
    // -> struct {} __vt__Q52FX9Particles13MotionSystems9Collision5World;
    // -> struct {} __vt__Q52FX9Particles13MotionSystems9Collision5Plane;
    // -> struct {} __vt__Q52FX9Particles13MotionSystems9Collision3Box;
    // -> struct {} __vt__Q52FX9Particles13MotionSystems9Collision6Sphere;
}
// signature: FX::Particles::SystemInstance::SystemInstance(FX::Particles::zFXParticleSystem *)
// Range: 0x800BB8C0 -> 0x800BB9B4
void * FX::Particles::SystemInstance::SystemInstance(class SystemInstance * this /* r30 */) {
    // References
    // -> class xMat4x3 g_I3;
    // -> class xVec3 m_Ones;
}
// Range: 0x800BB9E0 -> 0x800BBABC
void * FX::Particles::SystemInstance::~SystemInstance(class SystemInstance * this /* r29 */) {
}
// signature: FX::Particles::SystemInstance::SetCulling(const Sext::CullingData &)
// Range: 0x800BBAC0 -> 0x800BBADC
void FX::Particles::SystemInstance::SetCulling() {
}
// Range: 0x800BBAE0 -> 0x800BBB0C
void FX::Particles::SystemInstance::KillAll() {
    // References
    // -> class generator_data * sInstanceDataPool;
}
// signature: FX::Particles::SystemInstance::SetRunning(bool)
// Range: 0x800BBB10 -> 0x800BBBD8
void FX::Particles::SystemInstance::SetRunning() {
    // References
    // -> class generator_data * sInstanceDataPool;
}
// Range: 0x800BBBE0 -> 0x800BBC5C
void FX::Particles::SystemInstance::RegisterSelf(class SystemInstance * this /* r30 */) {
    // References
    // -> class generator_data * sInstanceDataPool;
    // -> class SystemInstance * * sInstances;
    // -> class NumberPool sNumberPool;
}
// Range: 0x800BBC60 -> 0x800BBCC0
void FX::Particles::SystemInstance::UnregisterSelf(class SystemInstance * this /* r30 */) {
    // References
    // -> class NumberPool sNumberPool;
    // -> class SystemInstance * * sInstances;
}
// Range: 0x800BBCC0 -> 0x800BBD2C
void FX::Particles::SystemInstance::PreloadUpdate(class SystemInstance * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class generator_data * sInstanceDataPool;
}
// Range: 0x800BBD30 -> 0x800BC15C
void FX::Particles::zFXParticleSystem::SetupGeometry(unsigned char * mem /* r17 */, int inCount /* r18 */, class ParticleGeometry & geom /* r19 */, void * context /* r20 */, class Matrix43 & camMat /* r21 */) {
    // Local variables
    int initialCount; // r0
    class zFXParticleSystem * system; // r0
    class xVec4 * uvAnimList; // r30
    enum RotationUpdateType rotType; // r29
    float offsetZ; // f27
    bool useOffsetZ; // r28
    bool proximityFade; // r27
    class Vector camPos; // r1+0x78
    int addedIdx; // r26

    {
        // Range: 0x800BBDF8 -> 0x800BC094
        // Local variables
        int curIdx; // r25

        {
            // Range: 0x800BBDF8 -> 0x800BC094
            // Local variables
            float tmpRot; // r1+0x8
            float * useRot; // r6
            class xColor useColor; // r1+0xC
            float alphaF; // f2
            float dToCamSq; // f20
            class xVec3 camDiff; // r1+0x60
            class xVec3 tmpLoc; // r1+0x6C
            class xVec3 * useLoc; // r22
            class xVec2 * maxUV; // r23
            class xVec2 * minUV; // r24
            class xVec4 & uvRange; // reg65535

            {
                // Range: 0x800BBDF8 -> 0x800BBDF8
                // Local variables
                float alphaMod; // f0
            }
            {
                // Range: 0x800BBDF8 -> 0x800BC02C
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
// Range: 0x800BC570 -> 0x800BDB94
int FX::Particles::zFXParticleSystem::UpdateParticles(int & outVisible /* r26 */, unsigned char * outmem /* r15 */, int inMemStart /* r16 */, unsigned char * mem /* r17 */, int inCount /* r18 */, float dt /* f27 */, void * context /* r19 */, float * outBoundLower /* r20 */, float * outBoundUpper /* r21 */) {
    // Local variables
    class zFXParticleSystem * system; // r0
    unsigned int currentInstanceIdx; // r14
    class Attach * cAttachSystem; // r26
    class Attractor * cAttractorSystems; // r30
    class Vortex * cVortexSystems; // r1+0x1F4
    class Collision * cCollisionSystems; // r1+0x1F0
    class xVec3 cDPosScaled; // r1+0xC8
    class xVec3 cAccelDir; // r1+0xBC
    short cTurbulenceIdx; // r25
    int cDeadParticles; // r27
    class xVec3 worldAccel; // r1+0xB0
    class xVec3 windDir; // r1+0xA4
    float windCoeff; // f15
    class MiniCurve & speedCurve; // r1+0x1EC
    float speedMin; // f31
    float speedMax; // f2
    float speedRange; // f30
    float speedLimit; // f29
    float speedLimitSq; // f28
    class MiniCurve & colorCurve; // r1+0x1E8
    class FloatColorRGB & colorMin; // r0
    class FloatColorRGB & colorMax; // r0
    class FloatColorRGB useColorRange; // r1+0x98
    class FloatColorRGB useColorMin; // r1+0x8C
    class MiniCurve & alphaCurve; // r1+0x1E4
    class MiniCurve & widthCurve; // r1+0x1E0
    class MiniCurve & heightCurve; // r1+0x1DC
    class MiniCurve & rotationCurve; // r1+0x1D8
    enum RotationUpdateType rotType; // r24
    unsigned int uvAnimCount; // r1+0x1D4
    float fpsdt; // f16
    int numAttractors; // r1+0x1D0
    int numVortices; // r1+0x1CC
    int numCollision; // r1+0x1C8
    class Turbulence * turbulenceSystem; // r23
    float reemitPercent; // f20
    unsigned int reemitRequested; // r1+0x1C4
    class particle_instance * pstart; // r0
    class particle_instance * pend; // r22
    class particle_instance * particleIt; // r29
    unsigned int memIdx; // r25
    float maxAt0; // f15
    float maxAt1; // f2
    float maxSize; // f3

    {
        // Range: 0x800BC85C -> 0x800BC9B8
        // Local variables
        class particle_instance * current; // r1+0x1C0

        {
            // Range: 0x800BC85C -> 0x800BC97C
            // Local variables
            class xMat4x3 reemitMat; // r1+0x150
        }
    }
    {
        // Range: 0x800BCA28 -> 0x800BCA74
        // Local variables
        class xVec3 diff; // r1+0x80
    }
    {
        // Range: 0x800BCA80 -> 0x800BCA80
        {
            // Range: 0x800BCA80 -> 0x800BCA80
            // Local variables
            int idx; // r29
        }
    }
    {
        // Range: 0x800BCB80 -> 0x800BCB80
        {
            // Range: 0x800BCB80 -> 0x800BCB80
            // Local variables
            int idx; // r29
        }
    }
    {
        // Range: 0x800BCC98 -> 0x800BCC98
        {
            // Range: 0x800BCC98 -> 0x800BCC98
            // Local variables
            int idx; // r29
        }
    }
    {
        // Range: 0x800BD3EC -> 0x800BD420
        // Local variables
        float len2; // f0

        {
            // Range: 0x800BD3FC -> 0x800BD420
            // Local variables
            float invlen; // f0
        }
    }
    {
        // Range: 0x800BD42C -> 0x800BD4B4
        // Local variables
        float speedscale; // f0
        float varMax; // f19
        float varFactor; // f18
    }
    {
        // Range: 0x800BD4E4 -> 0x800BD530
        // Local variables
        float rotdt; // f1
    }
    {
        // Range: 0x800BD530 -> 0x800BD5D8
        // Local variables
        float alphaF; // f0

        {
            // Range: 0x800BD530 -> 0x800BD5A8
            // Local variables
            class particle_instance tmp; // r1+0x118
        }
    }
    {
        // Range: 0x800BD704 -> 0x800BD794
        // Local variables
        float colorVal; // f0
        class xColor & useColor; // r24
    }
    {
        // Range: 0x800BD794 -> 0x800BD9D8
        // Local variables
        class xVec3 * useLoc; // r23
        float h; // f0
        float w; // f19
    }

    // References
    // -> static float kInvVarScale;
    // -> class SystemInstance * * sInstances;
    // -> class generator_data * sInstanceDataPool;
}
// Range: 0x800BDE00 -> 0x800BDE50
void FX::Particles::zFXParticleSystem::SceneBatchSetup() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x800BDE50 -> 0x800BDEB0
class Entity * Sext::FXParticleSystem::Create(class EntityHandleBase * handle /* r30 */, class FXParticleSystem * inAsset /* r31 */) {
}
