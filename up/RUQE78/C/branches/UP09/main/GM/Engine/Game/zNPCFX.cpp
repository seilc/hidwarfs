/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCFX.cpp
*/
static class zNPCFXParams gDefaultNPCFXParams; // size: 0x28, address: 0x80822DF8
static class zNPCFXTypeInfo gNPCFXTypeInfo[3]; // size: 0x18, address: 0x807AF980
// signature: zNPCFX::Attached(const zNPCStatus *)
// Range: 0x801D30E0 -> 0x801D31EC
void zNPCFX::Attached(class zNPCFX * this /* r31 */) {
    {
        // Range: 0x801D312C -> 0x801D31C8
        // Local variables
        unsigned int i; // r24

        {
            // Range: 0x801D312C -> 0x801D31C8
            // Local variables
            enum eNPCFXType type; // r22
            unsigned int nameHash; // r23
        }
    }

    // References
    // -> class zFactory factory;
    // -> static class zNPCFXTypeInfo gNPCFXTypeInfo[3];
    // -> static class zNPCFXParams gDefaultNPCFXParams;
}
// signature: zNPCFX::Detached(zNPCStatus *)
// Range: 0x801D3200 -> 0x801D32CC
void zNPCFX::Detached(class zNPCFX * this /* r27 */) {
    {
        // Range: 0x801D3260 -> 0x801D329C
        // Local variables
        unsigned int i; // r28
    }

    // References
    // -> class zFactory factory;
}
// signature: zNPCFX::Reset(const zNPCStatus *)
// Range: 0x801D32E0 -> 0x801D3368
void zNPCFX::Reset(class zNPCFX * this /* r28 */) {
}
// Range: 0x801D3370 -> 0x801D3414
void zNPCFX::PostUpdate(class zNPCFX * this /* r27 */, float dt /* f31 */) {
    // Local variables
    class zNPCEntity * npcEnt; // r29

    {
        // Range: 0x801D33A8 -> 0x801D33EC
        // Local variables
        unsigned int i; // r28
    }
}
// Range: 0x801D3430 -> 0x801D34A4
void zNPCFX::Paused(class zNPCFX * this /* r29 */) {
}
// Range: 0x801D34B0 -> 0x801D3524
void zNPCFX::Resumed(class zNPCFX * this /* r29 */) {
}
// Range: 0x801D3560 -> 0x801D3618
bool zNPCFX::RunFX(class zNPCFX * this /* r26 */, unsigned int nameHash /* r27 */) {
    // Local variables
    bool started; // r4
    class zNPCEntity * npcEnt; // r29

    {
        // Range: 0x801D3598 -> 0x801D35F0
        // Local variables
        unsigned int i; // r28
    }
}
// signature: zNPCFX::IsFXRunning(unsigned int)
// Range: 0x801D3630 -> 0x801D368C
bool zNPCFX::IsFXRunning() {
    {
        // Range: 0x801D3638 -> 0x801D367C
        // Local variables
        unsigned int i; // r7
    }
}
// signature: zNPCFXOneShotFXScript::Setup(Sext::CharacterAssets::NPCFXNode *)
// Range: 0x801D3690 -> 0x801D36E8
void zNPCFXOneShotFXScript::Setup(class zNPCFXOneShotFXScript * this /* r31 */) {
}
// Range: 0x801D36F0 -> 0x801D37E0
void zNPCFXOneShotFXScript::Run(class zNPCFXOneShotFXScript * this /* r29 */, class zNPCEntity * ent /* r30 */) {
    // Local variables
    class xMat4x3 fxMatLocal; // r1+0x50
    class xMat4x3 fxMatWorld; // r1+0x10

    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// signature: zNPCFXLoopFXScript::Setup(Sext::CharacterAssets::NPCFXNode *)
// Range: 0x801D37E0 -> 0x801D3840
void zNPCFXLoopFXScript::Setup(class zNPCFXLoopFXScript * this /* r31 */) {
}
// signature: zNPCFXLoopFXScript::Update(zNPCEntity *, float)
// Range: 0x801D3840 -> 0x801D3998
bool zNPCFXLoopFXScript::Update(class zNPCFXLoopFXScript * this /* r29 */, class zNPCEntity * ent /* r30 */) {
    // Local variables
    class xMat4x3 fxMatLocal; // r1+0x48
    class xMat4x3 fxMatWorld; // r1+0x8
}
// Range: 0x801D39A0 -> 0x801D3AE4
void zNPCFXLoopFXScript::Run(class zNPCFXLoopFXScript * this /* r29 */, class zNPCEntity * ent /* r30 */) {
    // Local variables
    class xMat4x3 fxMatLocal; // r1+0x50
    class xMat4x3 fxMatWorld; // r1+0x10

    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// Range: 0x801D3AF0 -> 0x801D3B74
void zNPCFXLoopFXScript::Stop(class zNPCFXLoopFXScript * this /* r30 */) {
    // References
    // -> bool sInvalidSceneState;
}
// Range: 0x801D3B80 -> 0x801D3BB8
void zNPCFXLoopFXScript::Pause() {
}
// Range: 0x801D3BC0 -> 0x801D3BF8
void zNPCFXLoopFXScript::Resume() {
}
// signature: zNPCFXImmediateInstanceLoop::Setup(Sext::CharacterAssets::NPCFXNode *)
// Range: 0x801D3C00 -> 0x801D3D94
void zNPCFXImmediateInstanceLoop::Setup(class zNPCFXImmediateInstanceLoop * this /* r31 */) {
}
// signature: zNPCFXImmediateInstanceLoop::RenderCard(World::ImmediatePrototypeEntity *, float, Math::Matrix43 *)
// Range: 0x801D3DA0 -> 0x801D4740
void zNPCFXImmediateInstanceLoop::RenderCard(float size /* f31 */, class Matrix43 * mat /* r31 */) {
    // Local variables
    class Renderable3DTransform * xform; // r1+0x20
    class ImmediateContext immCtxt; // r1+0x48

    // References
    // -> class Scene * primaryScene;
    // -> class Renderable3DTransform g_identity;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x801D4740 -> 0x801D4B30
bool zNPCFXImmediateInstanceLoop::Update(class zNPCFXImmediateInstanceLoop * this /* r31 */, class zNPCEntity * ent /* r27 */, float dt /* f23 */) {
    // Local variables
    class Matrix43 cardMat; // r1+0x20
    class xVec3 rotationCenter; // r1+0x14
    float cardRenderScale; // f24
    float cardAngleDiff; // f23
    unsigned int curCardTexture; // r28
    float curCardAngle; // f0

    {
        // Range: 0x801D4910 -> 0x801D4910
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x801D4910 -> 0x801D4910
            // Local variables
            class xVec3 rotationOffset; // r1+0x8
        }
    }
}
// signature: zNPCFXImmediateInstanceLoop::Run(zNPCEntity *)
// Range: 0x801D4B30 -> 0x801D4B40
void zNPCFXImmediateInstanceLoop::Run() {
}
// Range: 0x801D4B40 -> 0x801D4B44
void zNPCFXImmediateInstanceLoop::Stop() {
}
