/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCFX.cpp
*/
static class zNPCFXParams gDefaultNPCFXParams; // size: 0x28, address: 0x807914C0
static class zNPCFXTypeInfo gNPCFXTypeInfo[12]; // size: 0x60, address: 0x806FB978
// signature: zNPCFX::Attached(const zNPCStatus *)
// Range: 0x80113670 -> 0x8011376C
void zNPCFX::Attached(class zNPCFX * this /* r31 */) {
    {
        // Range: 0x801136BC -> 0x80113748
        // Local variables
        unsigned int i; // r24

        {
            // Range: 0x801136BC -> 0x80113748
            // Local variables
            enum FXType type; // r23
        }
    }

    // References
    // -> class zFactory factory;
    // -> static class zNPCFXTypeInfo gNPCFXTypeInfo[12];
    // -> static class zNPCFXParams gDefaultNPCFXParams;
}
// signature: zNPCFX::Detached(zNPCStatus *)
// Range: 0x80113780 -> 0x8011384C
void zNPCFX::Detached(class zNPCFX * this /* r27 */) {
    {
        // Range: 0x801137E0 -> 0x8011381C
        // Local variables
        unsigned int i; // r28
    }

    // References
    // -> class zFactory factory;
}
// signature: zNPCFX::Reset(const zNPCStatus *)
// Range: 0x80113860 -> 0x801138E8
void zNPCFX::Reset(class zNPCFX * this /* r28 */) {
}
// Range: 0x801138F0 -> 0x801139A8
void zNPCFX::PostUpdate(class zNPCFX * this /* r28 */, float dt /* f31 */) {
    // Local variables
    class zNPCEntity * npcEnt; // r30

    {
        // Range: 0x80113934 -> 0x80113974
        // Local variables
        unsigned int i; // r29
    }
}
// Range: 0x801139C0 -> 0x80113A34
void zNPCFX::Paused(class zNPCFX * this /* r29 */) {
}
// Range: 0x80113A40 -> 0x80113AB4
void zNPCFX::Resumed(class zNPCFX * this /* r29 */) {
}
// Range: 0x80113AF0 -> 0x80113B94
void zNPCFX::RunFX(class zNPCFX * this /* r26 */, enum FXType type /* r27 */) {
    // Local variables
    class zNPCEntity * npcEnt; // r29

    {
        // Range: 0x80113B2C -> 0x80113B70
        // Local variables
        unsigned int i; // r28
    }
}
// signature: zNPCFXOneShotFXScript::Setup(Sext::CharacterAssets::NPCFXNode *)
// Range: 0x80113BB0 -> 0x80113C08
void zNPCFXOneShotFXScript::Setup(class zNPCFXOneShotFXScript * this /* r31 */) {
}
// Range: 0x80113C10 -> 0x80114160
void zNPCFXOneShotFXScript::Run(class zNPCFXOneShotFXScript * this /* r30 */, class zNPCEntity * ent /* r31 */) {
    // Local variables
    class xMat4x3 fxMatLocal; // r1+0x48
    class xMat4x3 fxMatWorld; // r1+0x8

    // References
    // -> static class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
// signature: zNPCFXLoopFXScript::Setup(Sext::CharacterAssets::NPCFXNode *)
// Range: 0x80114160 -> 0x801141C0
void zNPCFXLoopFXScript::Setup(class zNPCFXLoopFXScript * this /* r31 */) {
}
// signature: zNPCFXLoopFXScript::Update(zNPCEntity *, float)
// Range: 0x801141C0 -> 0x8011431C
void zNPCFXLoopFXScript::Update(class zNPCFXLoopFXScript * this /* r30 */, class zNPCEntity * ent /* r29 */) {
    // Local variables
    class xMat4x3 fxMatLocal; // r1+0x48
    class xMat4x3 fxMatWorld; // r1+0x8
}
// Range: 0x80114320 -> 0x80114A40
void zNPCFXLoopFXScript::Run(class zNPCFXLoopFXScript * this /* r30 */, class zNPCEntity * ent /* r31 */) {
    // Local variables
    class xMat4x3 fxMatLocal; // r1+0x48
    class xMat4x3 fxMatWorld; // r1+0x8

    // References
    // -> static class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
// Range: 0x80114A40 -> 0x80114C48
void zNPCFXLoopFXScript::Stop(class zNPCFXLoopFXScript * this /* r27 */) {
}
// Range: 0x80114C50 -> 0x80114E44
void zNPCFXLoopFXScript::Pause() {
}
// Range: 0x80114E50 -> 0x80114EFC
void zNPCFXLoopFXScript::Resume() {
}
// signature: zNPCFXLoopStunned::Setup(Sext::CharacterAssets::NPCFXNode *)
// Range: 0x80114F00 -> 0x801150CC
void zNPCFXLoopStunned::Setup(class zNPCFXLoopStunned * this /* r31 */) {
}
// signature: zNPCFXLoopStunned::RenderCard(World::ImmediatePrototypeEntity *, float, Math::Matrix43 *)
// Range: 0x801150D0 -> 0x80115AF0
void zNPCFXLoopStunned::RenderCard(float size /* f29 */, class Matrix43 * mat /* r26 */) {
    // Local variables
    class Renderable3DTransform * xform; // r27
    class ImmediateContext immCtxt; // r1+0xE8

    // References
    // -> class Scene * primaryScene;
    // -> class Renderable3DTransform g_identity;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x80115AF0 -> 0x80115EB8
void zNPCFXLoopStunned::Update(class zNPCFXLoopStunned * this /* r31 */, class zNPCEntity * ent /* r27 */, float dt /* f23 */) {
    // Local variables
    class Matrix43 cardMat; // r1+0x20
    class xVec3 rotationCenter; // r1+0x14
    float cardRenderScale; // f24
    float cardAngleDiff; // f23
    unsigned int curCardTexture; // r28
    float curCardAngle; // f0

    {
        // Range: 0x80115CAC -> 0x80115CB4
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x80115CAC -> 0x80115CB4
            // Local variables
            class xVec3 rotationOffset; // r1+0x8
        }
    }
}
// signature: zNPCFXLoopStunned::Run(zNPCEntity *)
// Range: 0x80115EC0 -> 0x80115ED0
void zNPCFXLoopStunned::Run() {
}
// Range: 0x80115ED0 -> 0x80115ED4
void zNPCFXLoopStunned::Stop() {
}
