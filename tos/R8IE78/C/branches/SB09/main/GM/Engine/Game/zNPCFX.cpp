/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCFX.cpp
*/
static class zNPCFXParams gDefaultNPCFXParams; // size: 0x28, address: 0x80753220
static class zNPCFXTypeInfo gNPCFXTypeInfo[3]; // size: 0x18, address: 0x806BDAF8
// signature: zNPCFX::Attached(const zNPCStatus *)
// Range: 0x800EF680 -> 0x800EF798
void zNPCFX::Attached(class zNPCFX * this /* r29 */) {
    {
        // Range: 0x800EF6CC -> 0x800EF784
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x800EF6CC -> 0x800EF784
            // Local variables
            enum eNPCFXType type; // r20
            unsigned int nameHash; // r21
        }
    }

    // References
    // -> class Factory factory;
    // -> static class zNPCFXTypeInfo gNPCFXTypeInfo[3];
    // -> static class zNPCFXParams gDefaultNPCFXParams;
}
// signature: zNPCFX::Detached(zNPCStatus *)
// Range: 0x800EF7A0 -> 0x800EF830
void zNPCFX::Detached(class zNPCFX * this /* r25 */) {
    {
        // Range: 0x800EF7B8 -> 0x800EF814
        // Local variables
        unsigned int i; // r26
    }

    // References
    // -> class Factory factory;
}
// signature: zNPCFX::Reset(const zNPCStatus *)
// Range: 0x800EF830 -> 0x800EF834
void zNPCFX::Reset() {
}
// Range: 0x800EF840 -> 0x800EF8E8
void zNPCFX::PostUpdate(class zNPCFX * this /* r27 */, float dt /* f31 */) {
    // Local variables
    class zNPCEntity * npcEnt; // r29

    {
        // Range: 0x800EF874 -> 0x800EF8D0
        // Local variables
        unsigned int i; // r28
    }
}
// Range: 0x800EF8F0 -> 0x800EF8F4
void zNPCFX::Paused() {
}
// Range: 0x800EF900 -> 0x800EF904
void zNPCFX::Resumed() {
}
// Range: 0x800EF910 -> 0x800EF984
void zNPCFX::StopAllFX(class zNPCFX * this /* r28 */) {
    {
        // Range: 0x800EF920 -> 0x800EF970
        // Local variables
        unsigned int i; // r29
    }
}
// Range: 0x800EF990 -> 0x800EF9F8
void zNPCFX::PauseAllFX(class zNPCFX * this /* r29 */) {
    {
        // Range: 0x800EF9A4 -> 0x800EF9E4
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x800EFA00 -> 0x800EFA68
void zNPCFX::ResumeAllFX(class zNPCFX * this /* r29 */) {
    {
        // Range: 0x800EFA14 -> 0x800EFA54
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x800EFA70 -> 0x800EFB2C
bool zNPCFX::RunFX(class zNPCFX * this /* r25 */, unsigned int nameHash /* r26 */) {
    // Local variables
    bool started; // r4
    class zNPCEntity * npcEnt; // r28

    {
        // Range: 0x800EFAA4 -> 0x800EFB14
        // Local variables
        unsigned int i; // r27
    }
}
// signature: zNPCFX::IsFXRunning(unsigned int)
// Range: 0x800EFB30 -> 0x800EFB90
bool zNPCFX::IsFXRunning() {
    {
        // Range: 0x800EFB34 -> 0x800EFB88
        // Local variables
        unsigned int i; // r7
    }
}
// Range: 0x800EFB90 -> 0x800EFC14
void zNPCFX::StopFX(class zNPCFX * this /* r27 */, unsigned int nameHash /* r28 */) {
    {
        // Range: 0x800EFBA0 -> 0x800EFC00
        // Local variables
        unsigned int i; // r29
    }
}
// signature: zNPCFXOneShotFXScript::Setup(Sext::CharacterAssets::NPCFXNode *)
// Range: 0x800EFC20 -> 0x800EFC78
void zNPCFXOneShotFXScript::Setup(class zNPCFXOneShotFXScript * this /* r31 */) {
}
// Range: 0x800EFC80 -> 0x800EFD50
void zNPCFXOneShotFXScript::Run(class zNPCFXOneShotFXScript * this /* r29 */, class zNPCEntity * ent /* r30 */) {
    // Local variables
    class zFXSpawn * spawnPoint; // r31
    class xMat4x3 fxMatLocal; // r1+0x90
    class xMat4x3 fxMatWorld; // r1+0x50
    class xMat4x3 fxMatFinal; // r1+0x10
}
// signature: zNPCFXLoopFXScript::Setup(Sext::CharacterAssets::NPCFXNode *)
// Range: 0x800EFD50 -> 0x800EFDB0
void zNPCFXLoopFXScript::Setup(class zNPCFXLoopFXScript * this /* r31 */) {
}
// signature: zNPCFXLoopFXScript::Update(zNPCEntity *, float)
// Range: 0x800EFDB0 -> 0x800EFE5C
bool zNPCFXLoopFXScript::Update(class zNPCFXLoopFXScript * this /* r30 */, class zNPCEntity * ent /* r31 */) {
    // Local variables
    class xMat4x3 fxMatLocal; // r1+0x88
    class xMat4x3 fxMatWorld; // r1+0x48
    class xMat4x3 fxMatFinal; // r1+0x8
}
// Range: 0x800EFE60 -> 0x800EFF4C
void zNPCFXLoopFXScript::Run(class zNPCFXLoopFXScript * this /* r30 */, class zNPCEntity * ent /* r31 */) {
    // Local variables
    class xMat4x3 fxMatLocal; // r1+0x90
    class xMat4x3 fxMatWorld; // r1+0x50
    class xMat4x3 fxMatFinal; // r1+0x10
}
// Range: 0x800EFF50 -> 0x800EFF94
void zNPCFXLoopFXScript::Stop(class zNPCFXLoopFXScript * this /* r31 */) {
}
// Range: 0x800EFFA0 -> 0x800EFFB8
void zNPCFXLoopFXScript::Pause() {
}
// Range: 0x800EFFC0 -> 0x800EFFD8
void zNPCFXLoopFXScript::Resume() {
}
// signature: zNPCFXImmediateInstanceLoop::Setup(Sext::CharacterAssets::NPCFXNode *)
// Range: 0x800EFFE0 -> 0x800F00DC
void zNPCFXImmediateInstanceLoop::Setup(class zNPCFXImmediateInstanceLoop * this /* r31 */) {
    // Local variables
    class ImmediatePrototypeEntity * texture; // r0
}
// signature: zNPCFXImmediateInstanceLoop::FindImmProtEnt(World::ImmediateInstanceAsset *)
// Range: 0x800F00E0 -> 0x800F012C
class ImmediatePrototypeEntity * zNPCFXImmediateInstanceLoop::FindImmProtEnt() {
    // Local variables
    class EntityHandle * handle; // r0
}
// signature: zNPCFXImmediateInstanceLoop::RenderCard(World::ImmediatePrototypeEntity *, float, Math::Matrix43 *)
// Range: 0x800F0130 -> 0x800F02C4
void zNPCFXImmediateInstanceLoop::RenderCard(float size /* f31 */, class Matrix43 * mat /* r31 */) {
    // Local variables
    class Renderable3DTransform * xform; // r1+0x10
    class ImmediateContext immCtxt; // r1+0x14
    class Renderable3D * rend; // r28

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x800F02D0 -> 0x800F0630
bool zNPCFXImmediateInstanceLoop::Update(class zNPCFXImmediateInstanceLoop * this /* r30 */, class zNPCEntity * ent /* r27 */, float dt /* f21 */) {
    // Local variables
    class zNPCFXParams * params; // r0
    class Matrix43 cardMat; // r1+0x20
    class xVec3 rotationCenter; // r1+0x14
    float cardRenderScale; // f24
    float cardAngleDiff; // f23
    unsigned int curCardTexture; // r28
    float curCardAngle; // f0

    {
        // Range: 0x800F0428 -> 0x800F05BC
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x800F0428 -> 0x800F05BC
            // Local variables
            class xVec3 rotationOffset; // r1+0x8
        }
    }
}
// signature: zNPCFXImmediateInstanceLoop::Run(zNPCEntity *)
// Range: 0x800F0630 -> 0x800F0640
void zNPCFXImmediateInstanceLoop::Run() {
}
