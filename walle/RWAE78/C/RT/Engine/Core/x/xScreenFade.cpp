/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xScreenFade.cpp
*/
class _OGScreenFadeSchema _OGScreenFadeschema; // size: 0x18, address: 0x8075DF28
class SchemaRegistrator _OGScreenFadeschemaReg; // size: 0x8, address: 0x8075DF40
static int cnt_fadesInProgress; // size: 0x4, address: 0x8075DF48
static class xScreenFade * deathFade; // size: 0x4, address: 0x8075DF4C
static class zScaleform * hiddenHud; // size: 0x4, address: 0x8075DF50
static class zScaleform * hiddenPippers; // size: 0x4, address: 0x8075DF54
static class ImmediatePrototypeEntity * sFadeEntity; // size: 0x4, address: 0x8075DF58
int typeIndex; // size: 0x4, address: 0x806F2F30
// Range: 0x80059620 -> 0x80059630
void World::_OGScreenFadeEntity::Deactivate() {
}
// Range: 0x80059630 -> 0x80059680
void World::_OGScreenFadeEntity::Destroy(class _OGScreenFadeEntity * this /* r31 */) {
}
// signature: World::_OGScreenFadeSchema::Fix(World::Asset *, long, int)
// Range: 0x800596E0 -> 0x800596E8
void World::_OGScreenFadeSchema::Fix() {
}
// signature: World::_OGScreenFadeSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800596F0 -> 0x8005973C
class EntityStub * World::_OGScreenFadeSchema::CreateStub(class _OGScreenFadeSchema * this /* r31 */) {
}
// signature: World::_OGScreenFadeSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80059740 -> 0x80059758
void World::_OGScreenFadeSchema::DestroyStub() {
}
// signature: World::_OGScreenFadeSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80059760 -> 0x800597C8
class Entity * World::_OGScreenFadeSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World19_OGScreenFadeEntity;
}
// Range: 0x80059810 -> 0x80059910
void xScreenFade::load(class xScreenFade * this /* r31 */, class asset_type * a /* r30 */) {
}
// Range: 0x80059910 -> 0x800599CC
void xScreenFade::CompleteFadeDownNow(class xScreenFade * this /* r30 */) {
    // References
    // -> class zGlobals globals;
    // -> static int cnt_fadesInProgress;
}
// Range: 0x800599D0 -> 0x80059A8C
void xScreenFade::CompleteFadeWaitNow(class xScreenFade * this /* r30 */) {
    // References
    // -> class zGlobals globals;
    // -> static int cnt_fadesInProgress;
}
// signature: xScreenFade::update(float)
// Range: 0x80059A90 -> 0x80059EF4
void xScreenFade::update() {
    {
        // Range: 0x80059AD4 -> 0x80059EDC
        // Local variables
        float percent; // f9

        {
            // Range: 0x80059AFC -> 0x80059C74
            // Local variables
            float percent; // f9
        }
    }

    // References
    // -> static class zScaleform * hiddenPippers;
    // -> static class zScaleform * hiddenHud;
    // -> static int cnt_fadesInProgress;
    // -> class xColor_tag g_CLEAR;
    // -> class zGlobals globals;
}
// signature: xScreenFade::DrawBox(float, float, float, float, xColor_tag, bool)
// Range: 0x80059F00 -> 0x8005A600
void xScreenFade::DrawBox(float x1 /* f28 */, float y1 /* f29 */, float x2 /* f30 */, float y2 /* f31 */, class xColor_tag * color /* r27 */) {
    {
        // Range: 0x80059F50 -> 0x8005A5C8
        // Local variables
        class ImmediateContext immCtxt; // r1+0x48

        {
            // Range: 0x8005A0D0 -> 0x8005A5C8
            // Local variables
            unsigned int rgba; // r6
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> static class ImmediatePrototypeEntity * sFadeEntity;
}
// signature: xScreenFade::load(xBase &, xDynAsset &, unsigned long)
// Range: 0x8005A600 -> 0x8005A604
void xScreenFade::load() {
}
// Range: 0x8005A610 -> 0x8005A718
void xScreenFade::update_all(float dt /* f31 */) {
    // Local variables
    class zScene * scene; // r3
    class xScreenFade * it; // r31
    class xScreenFade * end; // r30

    // References
    // -> class xGlobals * xglobals;
    // -> static class xAssetTypeIDEntry typeList[248];
    // -> int typeIndex;
}
// Range: 0x8005A720 -> 0x8005A86C
void xScreenFade::render_all() {
    // Local variables
    class zScene * scene; // r3
    class xScreenFade * it; // r28
    class xScreenFade * end; // r27

    // References
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
    // -> static class xAssetTypeIDEntry typeList[248];
    // -> int typeIndex;
}
// Range: 0x8005A870 -> 0x8005A96C
void xScreenFade::SceneInit() {
    // Local variables
    class Goodie * goodie; // r0

    // References
    // -> static class ImmediatePrototypeEntity * sFadeEntity;
}
// signature: xScreenFade::cb_dispatch(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8005A970 -> 0x8005AB3C
void xScreenFade::cb_dispatch() {
    // Local variables
    class xScreenFade * e; // r0

    // References
    // -> bool returningToTitle;
    // -> bool bAllowInput;
    // -> unsigned int uiDisabledWhenPadMissing;
    // -> static class zScaleform * hiddenPippers;
    // -> static class xScreenFade * deathFade;
    // -> static int cnt_fadesInProgress;
    // -> static class zScaleform * hiddenHud;
}
// Range: 0x8005AB40 -> 0x8005AB58
int xScreenFade_FadeInProgress() {
    // References
    // -> static int cnt_fadesInProgress;
}
// Range: 0x8005AB60 -> 0x8005AD7C
void xScreenFade::HideHudElements() {
    {
        // Range: 0x8005AC74 -> 0x8005ACB8
        // Local variables
        class EventActionInvokeASFunc myParams; // r1+0x18
    }
    {
        // Range: 0x8005AD18 -> 0x8005AD64
        // Local variables
        class EventActionInvokeASFunc myParams; // r1+0x8
    }

    // References
    // -> static class zScaleform * hiddenPippers;
    // -> static class zScaleform * hiddenHud;
    // -> class xGlobals * xglobals;
}
// signature: xScreenFade::StartDeathFadeOut(zCommonPlayer *, float)
// Range: 0x8005AD80 -> 0x8005AFB4
float xScreenFade::StartDeathFadeOut(float timeRemaining /* f31 */) {
    // References
    // -> static int cnt_fadesInProgress;
    // -> bool returningToTitle;
    // -> static class zScaleform * hiddenHud;
    // -> static class xScreenFade * deathFade;
    // -> class xGlobals * xglobals;
}
