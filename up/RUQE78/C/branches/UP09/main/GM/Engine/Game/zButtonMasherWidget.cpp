/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zButtonMasherWidget.cpp
*/
class zButtonMasherMashChecker * * objectArray; // size: 0x4, address: 0x8081ABB4
int objectCount; // size: 0x4, address: 0x8081ABB8
// Range: 0x800FF8F0 -> 0x800FF908
void zButtonMasherController::Init() {
    // References
    // -> class zButtonMasherMashChecker * * objectArray;
    // -> int objectCount;
}
// Range: 0x800FF910 -> 0x800FF99C
void zButtonMasherController::UpdateAll(float dt /* f31 */) {
    {
        // Range: 0x800FF928 -> 0x800FF928
        // Local variables
        int i; // r28
    }

    // References
    // -> class zButtonMasherMashChecker * * objectArray;
    // -> int objectCount;
}
// signature: zButtonMasherMashChecker::zButtonMasherMashChecker(World::EntityHandleBase *, zButtonMasherWidgetAsset *)
// Range: 0x800FF9A0 -> 0x800FFAAC
void * zButtonMasherMashChecker::zButtonMasherMashChecker(class zButtonMasherMashChecker * this /* r30 */, class zButtonMasherWidgetAsset * theAsset /* r31 */) {
    // Local variables
    class zPlayer * player; // r0

    // References
    // -> int objectCount;
    // -> struct {} __vt__24zButtonMasherMashChecker;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x800FFAB0 -> 0x800FFB18
class Entity * Sext::Button_Masher_Widget::Create(class EntityHandleBase * handle /* r30 */, class Button_Masher_Widget * asset /* r31 */) {
}
// signature: zButtonMasherMashChecker::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800FFB20 -> 0x800FFC0C
void zButtonMasherMashChecker::EventCB() {
    // Local variables
    class zButtonMasherMashChecker * obj; // r29

    // References
    // -> int objectCount;
    // -> class zButtonMasherMashChecker * * objectArray;
}
// Range: 0x800FFC10 -> 0x800FFC18
bool zButtonMasherMashChecker::CycleDone() {
}
// signature: zButtonMasherMashChecker::Update(float)
// Range: 0x800FFC20 -> 0x800FFFF8
void zButtonMasherMashChecker::Update(class zButtonMasherMashChecker * this /* r31 */) {
    // Local variables
    float retRate; // f31
}
// Range: 0x80100000 -> 0x80100010
void zButtonMasherMashChecker::ResetButton() {
}
