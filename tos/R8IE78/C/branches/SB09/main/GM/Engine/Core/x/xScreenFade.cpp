/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xScreenFade.cpp
*/
static int cnt_fadesInProgress; // size: 0x4, address: 0x80729450
static class ImmediatePrototypeEntity * sFadeEntity; // size: 0x4, address: 0x80729454
// Range: 0x80041AB0 -> 0x80041B60
void xScreenFade::load(class xScreenFade * this /* r30 */, class asset_type & a /* r31 */) {
}
// signature: xScreenFade::InterpCol(float, unsigned char, unsigned char)
// Range: 0x80041B60 -> 0x80041BBC
unsigned char xScreenFade::InterpCol() {
    // Local variables
    unsigned char uval; // r0
    float val; // f3
}
// Range: 0x80041BC0 -> 0x80041C3C
void xScreenFade::StartFade() {
    // References
    // -> static int cnt_fadesInProgress;
    // -> bool returningToTitle;
}
// signature: xScreenFade::update(float)
// Range: 0x80041C40 -> 0x80041EE4
void xScreenFade::update(class xScreenFade * this /* r31 */) {
    {
        // Range: 0x80041C70 -> 0x80041EC4
        // Local variables
        unsigned char a; // r0
        unsigned char b; // r0
        unsigned char g; // r0
        unsigned char r; // r0
        float percent; // f31

        {
            // Range: 0x80041C98 -> 0x80041D84
            // Local variables
            unsigned char a; // r0
            unsigned char b; // r0
            unsigned char g; // r0
            unsigned char r; // r0
            float percent; // f31
        }
    }

    // References
    // -> static int cnt_fadesInProgress;
    // -> class xColor g_CLEAR;
}
// signature: xScreenFade::DrawBox(float, float, float, float, xColor, bool)
// Range: 0x80041EF0 -> 0x800420C0
void xScreenFade::DrawBox(float x1 /* f28 */, float y1 /* f29 */, float x2 /* f30 */, float y2 /* f31 */, class xColor & color /* r27 */) {
    {
        // Range: 0x80041F40 -> 0x80042088
        // Local variables
        class ImmediateContext immCtxt; // r1+0x10

        {
            // Range: 0x80041F7C -> 0x80042088
            // Local variables
            class Renderable3D * rend; // r27
            unsigned int rgba; // r27
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> static class ImmediatePrototypeEntity * sFadeEntity;
}
// Range: 0x800420C0 -> 0x8004215C
void xScreenFade::render(class xScreenFade * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80042160 -> 0x80042198
void xScreenFade::reset() {
    // References
    // -> bool bAllowInput;
    // -> static int cnt_fadesInProgress;
    // -> unsigned int uiDisabledWhenPadMissing;
}
// Range: 0x800421A0 -> 0x8004221C
class Entity * Sext::ScreenFade::Create(class EntityHandleBase * handle /* r29 */, class ScreenFade * asset /* r30 */) {
    // References
    // -> struct {} __vt__11xScreenFade;
}
// signature: xScreenFade::update_all(float)
// Range: 0x80042220 -> 0x8004228C
void xScreenFade::update_all() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80042290 -> 0x800422DC
void xScreenFade::render_all() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x800422E0 -> 0x80042338
void xScreenFade::SceneInit() {
    // Local variables
    class EntityHandleBase * goodie; // r0

    // References
    // -> static class ImmediatePrototypeEntity * sFadeEntity;
}
// signature: xScreenFade::cb_dispatch(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80042340 -> 0x800423EC
void xScreenFade::cb_dispatch() {
    // Local variables
    class xScreenFade & e; // r31
}
// Range: 0x800423F0 -> 0x80042408
int xScreenFade_FadeInProgress() {
    // References
    // -> static int cnt_fadesInProgress;
}
