/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zUIText.cpp
*/
static bool isCJK; // size: 0x1, address: 0x80771770
static float HSCALE; // size: 0x4, address: 0x80771774
static float VSCALE; // size: 0x4, address: 0x80771778
// Range: 0x8019F5E0 -> 0x8019F63C
void zUIText::DoInit(class zUIText * this /* r31 */) {
    // Local variables
    class UI_Text * asset; // r0
}
// Range: 0x8019F640 -> 0x8019F698
void zUIText::DoReset(class zUIText * this /* r31 */) {
    // Local variables
    class UI_Text * asset; // r0
}
// Range: 0x8019F6A0 -> 0x8019F934
void zUIText::setup_textbox(class zUIText * this /* r29 */, class xtextbox & tb /* r30 */, class UI_Text * asset /* r31 */) const {
}
// signature: zUIText::DoUpdate(float)
// Range: 0x8019F940 -> 0x8019FBE8
void zUIText::DoUpdate(class zUIText * this /* r31 */) {
    {
        // Range: 0x8019F9D4 -> 0x8019FB98
        // Local variables
        float vscale; // f30
        float hscale; // f31

        {
            // Range: 0x8019FA34 -> 0x8019FAE0
            // Local variables
            float actualHeight; // r1+0x8
            float actualWidth; // r1+0xC
            class layout & layout; // r0
            float oldHeight; // f28
            float oldWidth; // f29
        }
    }

    // References
    // -> static float VSCALE;
    // -> static float HSCALE;
    // -> static bool isCJK;
}
// Range: 0x8019FBF0 -> 0x8019FC9C
void zUIText::DoRender(class zUIText * this /* r31 */) const {
}
// signature: zUIText::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8019FCA0 -> 0x8019FD88
void zUIText::DoHandleEvent(class zUIText * this /* r29 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x8019FCD4 -> 0x8019FD50
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        class EventActionLegacy * params; // r0
    }
}
// signature: zUIText::DoApplyMotionFrame(const zUIMotionFrame *)
// Range: 0x8019FD90 -> 0x8019FD94
void zUIText::DoApplyMotionFrame() {
}
// signature: zUIText::SetText(const char *)
// Range: 0x8019FDA0 -> 0x8019FE00
void zUIText::SetText(class zUIText * this /* r31 */) {
}
// Range: 0x8019FE00 -> 0x8019FE74
class Entity * Sext::UI_Text::Create(class EntityHandleBase * handle /* r29 */, class UI_Text * asset /* r30 */) {
}
// Range: 0x8019FE80 -> 0x8019FF30
void zUIText_Init(class zUIText * text /* r30 */, class UI_Text * asset /* r31 */) {
}
// Range: 0x8019FF30 -> 0x8019FFB4
class Entity * Sext::StringReference::Create(class EntityHandleBase * handle /* r29 */, class StringReference * asset /* r30 */) {
    // References
    // -> struct {} __vt__16zStringReference;
}
// Range: 0x8019FFC0 -> 0x801A0054
void zUITextInitSystem() {
    // Local variables
    unsigned short region; // r0

    // References
    // -> static float VSCALE;
    // -> static float HSCALE;
    // -> static bool isCJK;
}
