/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xScreenFade.cpp
*/
static int cnt_fadesInProgress; // size: 0x4, address: 0x8081140C
static class ImmediatePrototypeEntity * sFadeEntity; // size: 0x4, address: 0x80811410
// signature: xScreenFade::load(xScreenFade::asset_type &)
// Range: 0x8007AEA0 -> 0x8007AF64
void xScreenFade::load() {
}
// Range: 0x8007AF70 -> 0x8007B040
void xScreenFade::CompleteFadeDownNow(class xScreenFade * this /* r30 */) {
    // References
    // -> class zGlobals globals;
    // -> static int cnt_fadesInProgress;
}
// Range: 0x8007B040 -> 0x8007B110
void xScreenFade::CompleteFadeWaitNow(class xScreenFade * this /* r30 */) {
    // References
    // -> class zGlobals globals;
    // -> static int cnt_fadesInProgress;
}
// signature: xScreenFade::update(float)
// Range: 0x8007B110 -> 0x8007B4A4
void xScreenFade::update() {
    {
        // Range: 0x8007B13C -> 0x8007B490
        // Local variables
        float percent; // f9

        {
            // Range: 0x8007B164 -> 0x8007B2DC
            // Local variables
            float percent; // f9
        }
    }

    // References
    // -> static int cnt_fadesInProgress;
    // -> class xColor g_CLEAR;
}
// signature: xScreenFade::DrawBox(float, float, float, float, xColor, bool)
// Range: 0x8007B4B0 -> 0x8007BC5C
void xScreenFade::DrawBox(float x1 /* f28 */, float y1 /* f29 */, float x2 /* f30 */, float y2 /* f31 */, class xColor & color /* r22 */) {
    {
        // Range: 0x8007B500 -> 0x8007BC24
        // Local variables
        class ImmediateContext immCtxt; // r1+0x48

        {
            // Range: 0x8007B768 -> 0x8007BC24
            // Local variables
            unsigned int rgba; // r6
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> static class ImmediatePrototypeEntity * sFadeEntity;
}
// Range: 0x8007BC60 -> 0x8007BD28
class Entity * Sext::ScreenFade::Create(class EntityHandleBase * handle /* r29 */, class ScreenFade * asset /* r30 */) {
    // References
    // -> struct {} __vt__11xScreenFade;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: xScreenFade::update_all(float)
// Range: 0x8007BD30 -> 0x8007BD9C
void xScreenFade::update_all() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8007BDA0 -> 0x8007BE5C
void xScreenFade::render_all() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8007BE60 -> 0x8007BF60
void xScreenFade::SceneInit() {
    // Local variables
    class EntityHandleBase * goodie; // r0

    // References
    // -> static class ImmediatePrototypeEntity * sFadeEntity;
}
// signature: xScreenFade::cb_dispatch(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8007BF60 -> 0x8007C0D4
void xScreenFade::cb_dispatch(class xBase * to /* r31 */) {
    // Local variables
    class xScreenFade & e; // r0

    // References
    // -> bool returningToTitle;
    // -> bool bAllowInput;
    // -> static int cnt_fadesInProgress;
    // -> unsigned int uiDisabledWhenPadMissing;
}
// Range: 0x8007C0E0 -> 0x8007C0F8
int xScreenFade_FadeInProgress() {
    // References
    // -> static int cnt_fadesInProgress;
}
