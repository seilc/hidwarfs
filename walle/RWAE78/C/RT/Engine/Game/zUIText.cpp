/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zUIText.cpp
*/
class _OGUI_TextSchema _OGUI_Textschema; // size: 0x18, address: 0x807FBAE0
class SchemaRegistrator _OGUI_TextschemaReg; // size: 0x8, address: 0x807FBAF8
class _OGStringReferenceSchema _OGStringReferenceschema; // size: 0x18, address: 0x807FBB00
class SchemaRegistrator _OGStringReferenceschemaReg; // size: 0x8, address: 0x807FBB18
static bool isCJK; // size: 0x1, address: 0x807FBB20
static float HSCALE; // size: 0x4, address: 0x807FBB24
static float VSCALE; // size: 0x4, address: 0x807FBB28
// Range: 0x8020F240 -> 0x8020F250
void World::_OGUI_TextEntity::Deactivate() {
}
// Range: 0x8020F250 -> 0x8020F2A0
void World::_OGUI_TextEntity::Destroy(class _OGUI_TextEntity * this /* r31 */) {
}
// signature: World::_OGUI_TextSchema::Fix(World::Asset *, long, int)
// Range: 0x8020F300 -> 0x8020F308
void World::_OGUI_TextSchema::Fix() {
}
// signature: World::_OGUI_TextSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8020F310 -> 0x8020F35C
class EntityStub * World::_OGUI_TextSchema::CreateStub(class _OGUI_TextSchema * this /* r31 */) {
}
// signature: World::_OGUI_TextSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8020F360 -> 0x8020F378
void World::_OGUI_TextSchema::DestroyStub() {
}
// signature: World::_OGUI_TextSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8020F380 -> 0x8020F3E8
class Entity * World::_OGUI_TextSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World16_OGUI_TextEntity;
}
// Range: 0x8020F430 -> 0x8020F440
void World::_OGStringReferenceEntity::Deactivate() {
}
// Range: 0x8020F440 -> 0x8020F490
void World::_OGStringReferenceEntity::Destroy(class _OGStringReferenceEntity * this /* r31 */) {
}
// signature: World::_OGStringReferenceSchema::Fix(World::Asset *, long, int)
// Range: 0x8020F4F0 -> 0x8020F4F8
void World::_OGStringReferenceSchema::Fix() {
}
// signature: World::_OGStringReferenceSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8020F500 -> 0x8020F54C
class EntityStub * World::_OGStringReferenceSchema::CreateStub(class _OGStringReferenceSchema * this /* r31 */) {
}
// signature: World::_OGStringReferenceSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8020F550 -> 0x8020F568
void World::_OGStringReferenceSchema::DestroyStub() {
}
// signature: World::_OGStringReferenceSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8020F570 -> 0x8020F5D8
class Entity * World::_OGStringReferenceSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World24_OGStringReferenceEntity;
}
// Range: 0x8020F620 -> 0x8020F698
void zUIText::DoInit(class zUIText * this /* r31 */) {
}
// Range: 0x8020F6A0 -> 0x8020F714
void zUIText::DoReset(class zUIText * this /* r31 */) {
}
// signature: zUIText::setup_textbox(xtextbox &, const Sext::UI_Text *) const
// Range: 0x8020F720 -> 0x8020F960
void zUIText::setup_textbox() const {
}
// signature: zUIText::DoUpdate(float)
// Range: 0x8020F960 -> 0x8020FFDC
void zUIText::DoUpdate(class zUIText * this /* r29 */) {
    {
        // Range: 0x8020FA60 -> 0x8020FC78
        // Local variables
        float vscale; // f30
        float hscale; // f31

        {
            // Range: 0x8020FADC -> 0x8020FBDC
            // Local variables
            float actualHeight; // f0
            float actualWidth; // f0
            class layout * layout; // r0
            float oldHeight; // f28
            float oldWidth; // f29
        }
    }

    // References
    // -> class callback text_cb;
    // -> static class basic_rect screen_bounds;
    // -> static class tl_cache_entry tl_cache[16];
    // -> class xColor_tag g_WHITE;
    // -> class xColor_tag g_BLACK;
    // -> static float VSCALE;
    // -> static float HSCALE;
    // -> static bool isCJK;
}
// Range: 0x8020FFE0 -> 0x80210088
void zUIText::DoRender(class zUIText * this /* r31 */) const {
}
// signature: zUIText::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80210090 -> 0x802101A4
void zUIText::DoHandleEvent(class zUIText * this /* r30 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x802100B8 -> 0x80210184
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        class EventActionLegacy * params; // r0
    }
}
// signature: zUIText::DoApplyMotionFrame(const zUIMotionFrame *)
// Range: 0x802101B0 -> 0x802101B4
void zUIText::DoApplyMotionFrame() {
}
// signature: zUIText::SetText(const char *)
// Range: 0x802101C0 -> 0x8021024C
void zUIText::SetText(class zUIText * this /* r31 */) {
}
// signature: zUIText_Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x80210250 -> 0x8021031C
void zUIText_Init(class xBase * data /* r30 */, class xDynAsset * asset /* r31 */) {
    // References
    // -> struct {} __vt__7zUIText;
}
// signature: zStringReference::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x80210320 -> 0x80210360
void zStringReference::Init(class xBase * data /* r30 */, class xDynAsset * asset /* r31 */) {
}
// Range: 0x80210360 -> 0x802103F4
void zUITextInitSystem() {
    // Local variables
    unsigned short region; // r0

    // References
    // -> static float VSCALE;
    // -> static float HSCALE;
    // -> static bool isCJK;
}
