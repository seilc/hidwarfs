/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zFXObjectSystem.cpp
*/
class SystemInstance * * sInstances; // size: 0x4, address: 0x8081E594
unsigned int sNumInstances; // size: 0x4, address: 0x8081E598
class generator_data * sInstanceDataPool; // size: 0x4, address: 0x8081E59C
class NumberPool sNumberPool; // size: 0x14, address: 0x8081E5A0
class object_instance * sObjStorage; // size: 0x4, address: 0x8081E5B4
class zQueue sObjPool; // size: 0x408, address: 0x8081E5B8
// signature: FX::Objects::Local::FXObjectSystemEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80171FA0 -> 0x801722C0
void FX::Objects::Local::FXObjectSystemEventWrapper(class xBase * to /* r31 */) {
    // References
    // -> class activity_data * obj_activities;
    // -> int obj_activities_used;
}
// signature: FX::Objects::Local::Evaluate(const GradientCurve::zGradientCurve *, float, float, float)
// Range: 0x801722C0 -> 0x8017230C
float FX::Objects::Local::Evaluate() {
}
// signature: FX::Objects::Local::Evaluate(const GradientCurve::zGradientCurve *, float, Basic::ColorF, Basic::ColorF)
// Range: 0x80172310 -> 0x801723C8
unsigned int FX::Objects::Local::Evaluate() {
    // Local variables
    float val; // f0
    unsigned int r; // r0
    unsigned int g; // r3
    unsigned int b; // r0
}
// Range: 0x801723D0 -> 0x80172564
void FX::Objects::SceneEnter() {
    {
        // Range: 0x80172498 -> 0x80172528
        // Local variables
        int idx; // r0
    }

    // References
    // -> class generator_data * sInstanceDataPool;
    // -> class object_instance * sObjStorage;
    // -> class zQueue sObjPool;
    // -> class NumberPool sNumberPool;
    // -> class SystemInstance * * sInstances;
    // -> int obj_activities_used;
    // -> class activity_data * obj_activities;
}
// Range: 0x80172570 -> 0x80172730
void FX::Objects::SceneExit() {
    // References
    // -> class object_instance * sObjStorage;
    // -> class NumberPool sNumberPool;
    // -> class zGlobals globals;
    // -> int obj_activities_used;
    // -> class activity_data * obj_activities;
    // -> class zQueue sObjPool;
}
// Range: 0x80172730 -> 0x801728E4
void FX::Objects::Update(float inDelta /* f31 */) {
    {
        // Range: 0x8017274C -> 0x80172778
        // Local variables
        unsigned int idx; // r30

        {
            // Range: 0x8017274C -> 0x80172778
            // Local variables
            class SystemInstance * instance; // r3
        }
    }
    {
        // Range: 0x80172788 -> 0x801728B0
        // Local variables
        int idx; // r29
    }

    // References
    // -> class zQueue sObjPool;
    // -> class SystemInstance * * sInstances;
}
// Range: 0x801728F0 -> 0x80172CB0
void FX::Objects::SystemInstance::Update(class SystemInstance * this /* r31 */, float inDelta /* f31 */) {
    // Local variables
    class xVec3 accelDir; // r1+0x14

    {
        // Range: 0x80172B70 -> 0x80172C74
        // Local variables
        bool isCulled; // r30
        float cullDistance2; // f30

        {
            // Range: 0x80172BD4 -> 0x80172C3C
            // Local variables
            int idx; // r29

            {
                // Range: 0x80172BD8 -> 0x80172C3C
                // Local variables
                float camera2SpawnDist2; // f0
            }
        }
    }

    // References
    // -> class zGlobals globals;
    // -> class generator_data * sInstanceDataPool;
}
// signature: FX::Objects::zFXObjectSystem::Update(FX::Objects::SystemInstance *, float)
// Range: 0x80172CB0 -> 0x801730C4
void FX::Objects::zFXObjectSystem::Update(class zFXObjectSystem * this /* r29 */, class SystemInstance * inInstance /* r30 */) {
    // Local variables
    float rate; // f3
    float requested; // f1
    class xMat4x3 placementMat; // r1+0x38

    {
        // Range: 0x80172E90 -> 0x80172F90
        // Local variables
        unsigned int num; // r24
    }

    // References
    // -> static bool (* setup_volume_table[7])(class activity_data & activity, class FXObjectSystem & asset);
    // -> class activity_data * obj_activities;
    // -> int obj_activities_used;
}
// signature: FX::Objects::zFXObjectSystem::Emit(const xMat4x3 &, unsigned int)
// Range: 0x801730D0 -> 0x80173A20
void FX::Objects::zFXObjectSystem::Emit(class zFXObjectSystem * this /* r28 */, class xMat4x3 & inWorldMat /* r26 */) {
    // Local variables
    class xVec3 velDir; // r1+0x1C
    int idx; // r11
    class object_instance * object; // r27
    float allVar; // f31
    float Rdiff; // f31
    float Gdiff; // f30
    float Bdiff; // f29
    float rangeVal; // f0

    // References
    // -> class Scene * primaryScene;
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
    // -> class generator_data * sInstanceDataPool;
    // -> class zQueue sObjPool;
}
// Range: 0x80173A20 -> 0x80173AAC
void * FX::Objects::zFXObjectSystem::~zFXObjectSystem(class zFXObjectSystem * this /* r29 */) {
    // References
    // -> struct {} __vt__Q32FX7Objects15zFXObjectSystem;
}
// Range: 0x80173AB0 -> 0x80173C4C
void FX::Objects::SystemInstance::KillAll(class SystemInstance * this /* r27 */) {
    {
        // Range: 0x80173AD0 -> 0x80173C0C
        // Local variables
        int idx; // r28
    }

    // References
    // -> class generator_data * sInstanceDataPool;
    // -> class zQueue sObjPool;
}
// signature: FX::Objects::SystemInstance::SetParentCulled(bool)
// Range: 0x80173C50 -> 0x80173C58
void FX::Objects::SystemInstance::SetParentCulled() {
}
// Range: 0x80173C60 -> 0x801744E0
unsigned int FX::Objects::zFXObjectSystem::UpdateObject(unsigned char * inObjectMem /* r15 */, int inCount /* r16 */, float dt /* f14 */) {
    // Local variables
    class object_instance * objectIt; // r0
    class object_instance * oend; // r26
    class zFXObjectSystem * system; // r14
    class FXObjectSystem & asset; // r0
    unsigned int currentInstanceIdx; // r25
    class xVec3 cAccelDir; // r1+0x60
    class xVec3 cDPos; // r1+0x54
    float cDPosScale; // f26
    short cDeadObjects; // r24
    class zGradientCurve * speedCurve; // r1+0xD8
    float speedMin; // r1+0xA8
    float speedMax; // r1+0xA4
    class zGradientCurve * accelCurve; // r1+0xD4
    float accelMin; // r1+0xA0
    float accelMax; // r1+0x9C
    float speedLimit; // f0
    class zGradientCurve * colorCurve; // r1+0xD0
    class ColorF & colorMin; // r0
    class ColorF & colorMax; // r0
    class zGradientCurve * alphaCurve; // r1+0xCC
    float alphaMin; // r1+0x98
    float alphaMax; // r1+0x94
    class zGradientCurve * heightCurve; // r1+0xC8
    float heightMin; // r1+0x90
    float heightMax; // r1+0x8C
    class zGradientCurve * widthCurve; // r1+0xC4
    float widthMin; // r1+0x88
    float widthMax; // r1+0x84
    class zGradientCurve * depthCurve; // r1+0xC0
    float depthMin; // r1+0x80
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
    bool doCorrectUp; // r14
    class xVec3 & correctUp; // r19

    {
        // Range: 0x80173DF0 -> 0x80174408
        // Local variables
        class xMat4x3 & renderMat; // r17
        class xVec3 * useYPR; // r0
        class xVec3 tempYPR; // r1+0x28
        float depth; // f15
        float height; // f16
        float width; // f17
        float alpha; // f0
        unsigned int rgb; // r0
        class ColorF useMax; // r1+0x38
        float accel; // f0
        float speed; // f0
        float time; // f18
        class object_instance * current; // r18

        {
            // Range: 0x80173DF0 -> 0x80173DF0
            // Local variables
            class generator_data & data; // r17
        }
        {
            // Range: 0x80173DF0 -> 0x80173DF0
            // Local variables
            class xVec3 dpos; // r1+0x48
        }
    }

    // References
    // -> class generator_data * sInstanceDataPool;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x801747B0 -> 0x80174898
class Entity * Sext::FXObjectSystem::Create(class EntityHandleBase * handle /* r29 */, class FXObjectSystem * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__Q32FX7Objects15zFXObjectSystem;
    // -> struct {} __vt__Q25World9xOGEntity;
}
