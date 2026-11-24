/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zFXObjectSystem.cpp
*/
class SystemInstance * * sInstances; // size: 0x4, address: 0x80734754
unsigned int sMaxSystems; // size: 0x4, address: 0x80734758
class generator_data * sInstanceDataPool; // size: 0x4, address: 0x8073475C
class NumberPool sNumberPool; // size: 0x14, address: 0x80734760
class object_instance * sObjStorage; // size: 0x4, address: 0x80734774
class zQueue sObjPool; // size: 0x408, address: 0x80734778
// signature: FX::Objects::Local::FXObjectSystemEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800BFAC0 -> 0x800BFAD8
void FX::Objects::Local::FXObjectSystemEventWrapper() {
}
// signature: FX::Objects::Local::Evaluate(const GradientCurve::zGradientCurve *, float, float, float)
// Range: 0x800BFAE0 -> 0x800BFAF8
float FX::Objects::Local::Evaluate() {
}
// signature: FX::Objects::Local::Evaluate(const GradientCurve::zGradientCurve *, float, Basic::ColorF, Basic::ColorF)
// Range: 0x800BFB00 -> 0x800BFBB8
unsigned int FX::Objects::Local::Evaluate() {
    // Local variables
    float val; // f0
    unsigned int r; // r0
    unsigned int g; // r3
    unsigned int b; // r0
}
// Range: 0x800BFBC0 -> 0x800BFCC8
void FX::Objects::SceneEnter() {
    // Local variables
    unsigned int numSystems; // r0
    unsigned int numToAllocate; // r29

    {
        // Range: 0x800BFC64 -> 0x800BFC90
        // Local variables
        int idx; // r0
    }

    // References
    // -> class generator_data * sInstanceDataPool;
    // -> class object_instance * sObjStorage;
    // -> class zQueue sObjPool;
    // -> class NumberPool sNumberPool;
    // -> class SystemInstance * * sInstances;
    // -> unsigned int sMaxSystems;
    // -> int obj_activities_used;
    // -> class activity_data * obj_activities;
}
// Range: 0x800BFCD0 -> 0x800BFD40
void FX::Objects::SceneExit() {
    // References
    // -> class object_instance * sObjStorage;
    // -> class NumberPool sNumberPool;
    // -> class zGlobals globals;
    // -> int obj_activities_used;
    // -> class activity_data * obj_activities;
}
// Range: 0x800BFD40 -> 0x800BFE04
void FX::Objects::Update(float inDelta /* f31 */) {
    {
        // Range: 0x800BFD60 -> 0x800BFD98
        // Local variables
        unsigned int idx; // r29

        {
            // Range: 0x800BFD60 -> 0x800BFD98
            // Local variables
            class SystemInstance * instance; // r3
        }
    }
    {
        // Range: 0x800BFD98 -> 0x800BFDEC
        // Local variables
        int idx; // r29

        {
            // Range: 0x800BFD98 -> 0x800BFDEC
            // Local variables
            class object_instance * * obj; // r0

            {
                // Range: 0x800BFDB0 -> 0x800BFDEC
                // Local variables
                class object_instance * deletedObj; // r1+0x8
            }
        }
    }

    // References
    // -> class zQueue sObjPool;
    // -> unsigned int sMaxSystems;
    // -> class SystemInstance * * sInstances;
}
// Range: 0x800BFF20 -> 0x800BFF9C
void FX::Objects::zFXObjectSystem::ClearObjects() {
    {
        // Range: 0x800BFF30 -> 0x800BFF88
        {
            // Range: 0x800BFF30 -> 0x800BFF88
            // Local variables
            class object_instance * deletedObj; // r1+0x8
            class object_instance * * obj; // r0
        }
    }

    // References
    // -> class zQueue sObjPool;
}
// Range: 0x800BFFA0 -> 0x800C01E8
void FX::Objects::SystemInstance::Update(class SystemInstance * this /* r31 */, float inDelta /* f30 */) {
    // Local variables
    class xVec3 accelDir; // r1+0x18

    {
        // Range: 0x800C00E8 -> 0x800C01B0
        // Local variables
        bool isCulled; // r29
        float cullDistance2; // f31

        {
            // Range: 0x800C0130 -> 0x800C0184
            // Local variables
            int idx; // r28

            {
                // Range: 0x800C0134 -> 0x800C0184
                // Local variables
                float camera2SpawnDist2; // f0
            }
        }
    }

    // References
    // -> class zGlobals globals;
    // -> class generator_data * sInstanceDataPool;
}
// signature: FX::Objects::SystemInstance::SetForcedAgeRate(float)
// Range: 0x800C01F0 -> 0x800C020C
void FX::Objects::SystemInstance::SetForcedAgeRate() {
    // References
    // -> class generator_data * sInstanceDataPool;
}
// signature: FX::Objects::zFXObjectSystem::Update(FX::Objects::SystemInstance *, float)
// Range: 0x800C0210 -> 0x800C0358
void FX::Objects::zFXObjectSystem::Update(class zFXObjectSystem * this /* r27 */, class SystemInstance * inInstance /* r28 */) {
    // Local variables
    float rate; // f0
    float requested; // f1
    class xMat4x3 * systemMat; // r31
    class xMat4x3 placementMat; // r1+0x8
    class xVec3 & volumeScale; // r30

    {
        // Range: 0x800C02A0 -> 0x800C02EC
        // Local variables
        unsigned int num; // r29
    }
}
// Range: 0x800C0360 -> 0x800C07BC
void FX::Objects::zFXObjectSystem::Emit(class zFXObjectSystem * this /* r28 */, class xMat4x3 & inWorldMat /* r29 */, unsigned int inPoolIdx /* r30 */) {
    // Local variables
    class xVec3 velDir; // r1+0xC
    int idx; // r8
    class object_instance * object; // r31
    float allVar; // f31
    float Rdiff; // f31
    float Gdiff; // f30
    float Bdiff; // f29
    float rangeVal; // f0

    // References
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> class generator_data * sInstanceDataPool;
    // -> class zQueue sObjPool;
}
// signature: FX::Objects::zFXObjectSystem::zFXObjectSystem(World::EntityHandleBase *, Sext::FXObjectSystem *)
// Range: 0x800C07C0 -> 0x800C0830
void * FX::Objects::zFXObjectSystem::zFXObjectSystem(class zFXObjectSystem * this /* r30 */, class FXObjectSystem * inAsset /* r31 */) {
    // References
    // -> struct {} __vt__Q32FX7Objects15zFXObjectSystem;
}
// Range: 0x800C0830 -> 0x800C0894
void * FX::Objects::zFXObjectSystem::~zFXObjectSystem(class zFXObjectSystem * this /* r30 */) {
    // References
    // -> struct {} __vt__Q32FX7Objects15zFXObjectSystem;
}
// Range: 0x800C08A0 -> 0x800C08E0
void FX::Objects::zFXObjectSystem::Initialize(class zFXObjectSystem * this /* r31 */) {
}
// Range: 0x800C08E0 -> 0x800C09D0
void FX::Objects::zFXObjectSystem::CurveSetup(class zFXObjectSystem * this /* r31 */) {
}
// Range: 0x800C09D0 -> 0x800C0A1C
void FX::Objects::zFXObjectSystem::DebugReset(class zFXObjectSystem * this /* r31 */) {
}
// signature: FX::Objects::SystemInstance::SystemInstance(FX::Objects::zFXObjectSystem *)
// Range: 0x800C0A20 -> 0x800C0AE0
void * FX::Objects::SystemInstance::SystemInstance(class SystemInstance * this /* r31 */) {
    // References
    // -> class xMat4x3 g_I3;
    // -> class xVec3 m_Ones;
}
// signature: FX::Objects::SystemInstance::SetCulling(const Sext::CullingData &)
// Range: 0x800C0AE0 -> 0x800C0AFC
void FX::Objects::SystemInstance::SetCulling() {
}
// Range: 0x800C0B00 -> 0x800C0BC4
void FX::Objects::SystemInstance::KillAll(class SystemInstance * this /* r26 */) {
    {
        // Range: 0x800C0B20 -> 0x800C0B94
        // Local variables
        int idx; // r27

        {
            // Range: 0x800C0B20 -> 0x800C0B94
            // Local variables
            class object_instance * deletedObj; // r1+0x8
            class object_instance * * obj; // r0
        }
    }

    // References
    // -> class generator_data * sInstanceDataPool;
    // -> class zQueue sObjPool;
}
// signature: FX::Objects::SystemInstance::SetRunning(bool)
// Range: 0x800C0BD0 -> 0x800C0C78
void FX::Objects::SystemInstance::SetRunning() {
    // References
    // -> class generator_data * sInstanceDataPool;
}
// Range: 0x800C0C80 -> 0x800C0CD8
void FX::Objects::SystemInstance::RegisterSelf(class SystemInstance * this /* r31 */) {
    // References
    // -> class SystemInstance * * sInstances;
    // -> class NumberPool sNumberPool;
}
// Range: 0x800C0CE0 -> 0x800C0D40
void FX::Objects::SystemInstance::UnregisterSelf(class SystemInstance * this /* r30 */) {
    // References
    // -> class NumberPool sNumberPool;
    // -> class SystemInstance * * sInstances;
}
// Range: 0x800C0D40 -> 0x800C0E00
void FX::Objects::SystemInstance::PreloadUpdate(class SystemInstance * this /* r28 */, float dt /* f31 */) {
    {
        // Range: 0x800C0D80 -> 0x800C0DE8
        // Local variables
        int idx; // r29

        {
            // Range: 0x800C0D80 -> 0x800C0DE8
            // Local variables
            class object_instance * * obj; // r0

            {
                // Range: 0x800C0DB0 -> 0x800C0DE8
                // Local variables
                class object_instance * deletedObj; // r1+0x8
            }
        }
    }

    // References
    // -> class zQueue sObjPool;
    // -> class generator_data * sInstanceDataPool;
}
// Range: 0x800C0E00 -> 0x800C1684
unsigned int FX::Objects::zFXObjectSystem::UpdateObject(unsigned char * inObjectMem /* r15 */, int inCount /* r16 */, float dt /* f17 */) {
    // Local variables
    class object_instance * objectIt; // r0
    class zFXObjectSystem * system; // r19
    class xVec3 cAccelDir; // r1+0x6C
    class xVec3 cDPos; // r1+0x60
    float cDPosScale; // f14
    class xVec3 cVolumeScale; // r1+0x54
    class zGradientCurve * speedCurve; // r14
    float speedMin; // r1+0x154
    float speedMax; // f16
    class zGradientCurve * accelCurve; // r29
    float accelMin; // r1+0x150
    float accelMax; // r1+0x14C
    float speedLimit; // f0
    class zGradientCurve * colorCurve; // r28
    class ColorF & colorMin; // r0
    class ColorF & colorMax; // r0
    class zGradientCurve * alphaCurve; // r27
    float alphaMin; // r1+0x148
    float alphaMax; // f31
    class zGradientCurve * heightCurve; // r26
    float heightMin; // f30
    float heightMax; // f29
    class zGradientCurve * widthCurve; // r25
    float widthMin; // f28
    float widthMax; // f27
    class zGradientCurve * depthCurve; // r24
    float depthMin; // f26
    float depthMax; // f25
    class zGradientCurve * yawCurve; // r23
    float yawMin; // f24
    float yawMax; // f23
    class zGradientCurve * pitchCurve; // r22
    float pitchMin; // f22
    float pitchMax; // f21
    class zGradientCurve * rollCurve; // r21
    float rollMin; // f20
    float rollMax; // f19
    enum RotationUpdateType rotType; // r20
    bool doCorrectUp; // r19
    class xVec3 & correctUp; // r18
    class generator_data & data; // r17
    float time; // f18
    float speed; // f0
    float accel; // f0
    class ColorF useMax; // r1+0x38
    unsigned int rgb; // r0
    float alpha; // f0
    float width; // f14
    float height; // f16
    float depth; // f25
    class xMat4x3 & renderMat; // r17

    {
        // Range: 0x800C1138 -> 0x800C1178
        // Local variables
        class xVec3 dpos; // r1+0x48
    }
    {
        // Range: 0x800C13DC -> 0x800C1464
        // Local variables
        class xMat3x3 origRot; // r1+0xD8
        class xMat3x3 applyRot; // r1+0x108
        class xVec3 tempYPR; // r1+0x28
    }
    {
        // Range: 0x800C14D0 -> 0x800C1508
        // Local variables
        class xMat3x3 origRot; // r1+0x78
        class xMat3x3 applyRot; // r1+0xA8
    }

    // References
    // -> class generator_data * sInstanceDataPool;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x800C1690 -> 0x800C16F0
class Entity * Sext::FXObjectSystem::Create(class EntityHandleBase * handle /* r30 */, class FXObjectSystem * inAsset /* r31 */) {
}
