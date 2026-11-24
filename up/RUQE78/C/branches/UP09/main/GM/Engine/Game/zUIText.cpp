/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUIText.cpp
*/
static bool isCJK; // size: 0x1, address: 0x80843834
static float HSCALE; // size: 0x4, address: 0x80843838
static float VSCALE; // size: 0x4, address: 0x8084383C
// Range: 0x802B1820 -> 0x802B187C
void zUIText::DoInit(class zUIText * this /* r31 */) {
    // Local variables
    class UI_Text * asset; // r0
}
// Range: 0x802B1880 -> 0x802B18D8
void zUIText::DoReset(class zUIText * this /* r31 */) {
    // Local variables
    class UI_Text * asset; // r0
}
// signature: zUIText::setup_textbox(xtextbox &, const Sext::UI_Text *) const
// Range: 0x802B18E0 -> 0x802B1B54
void zUIText::setup_textbox() const {
}
// signature: zUIText::DoUpdate(float)
// Range: 0x802B1B60 -> 0x802B220C
void zUIText::DoUpdate(class zUIText * this /* r29 */) {
    {
        // Range: 0x802B1C58 -> 0x802B1EA0
        // Local variables
        float vscale; // f30
        float hscale; // f31

        {
            // Range: 0x802B1CD8 -> 0x802B1DEC
            // Local variables
            float actualHeight; // f0
            float actualWidth; // f0
            class layout & layout; // r0
            float oldHeight; // f28
            float oldWidth; // f29
        }
    }

    // References
    // -> static class tl_cache_entry tl_cache[16];
    // -> static class basic_rect screen_bounds;
    // -> class callback text_cb;
    // -> class xColor g_WHITE;
    // -> class xColor g_BLACK;
    // -> static float VSCALE;
    // -> static float HSCALE;
    // -> static bool isCJK;
}
// Range: 0x802B2210 -> 0x802B22BC
void zUIText::DoRender(class zUIText * this /* r31 */) const {
}
// signature: zUIText::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x802B22C0 -> 0x802B2468
void zUIText::DoHandleEvent(class zUIText * this /* r31 */, class EventAny * genericParams /* r29 */) {
    {
        // Range: 0x802B22FC -> 0x802B23D0
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        class EventActionLegacy * params; // r0
    }
}
// signature: zUIText::DoApplyMotionFrame(const zUIMotionFrame *)
// Range: 0x802B2470 -> 0x802B2474
void zUIText::DoApplyMotionFrame() {
}
// signature: zUIText::SetText(const char *)
// Range: 0x802B2480 -> 0x802B250C
void zUIText::SetText(class zUIText * this /* r31 */) {
}
// Range: 0x802B2510 -> 0x802B2658
class Entity * Sext::UI_Text::Create(class EntityHandleBase * handle /* r29 */, class UI_Text * asset /* r30 */) {
    // Local variables
    class zUIText * text; // r31

    // References
    // -> struct {} __vt__7zUIText;
    // -> struct {} __vt__3zUI;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x802B2660 -> 0x802B2730
class Entity * Sext::StringReference::Create(class EntityHandleBase * handle /* r29 */, class StringReference * asset /* r30 */) {
    // References
    // -> struct {} __vt__16zStringReference;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x802B2730 -> 0x802B27C4
void zUITextInitSystem() {
    // Local variables
    unsigned short region; // r0

    // References
    // -> static float VSCALE;
    // -> static float HSCALE;
    // -> static bool isCJK;
}
