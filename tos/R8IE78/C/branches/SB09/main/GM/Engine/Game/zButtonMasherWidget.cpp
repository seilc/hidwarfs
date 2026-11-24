/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zButtonMasherWidget.cpp
*/
class zButtonMasherMashChecker * * objectArray; // size: 0x4, address: 0x80731278
int objectCount; // size: 0x4, address: 0x8073127C
// Range: 0x80087A30 -> 0x80087A48
void zButtonMasherController::Init() {
    // References
    // -> class zButtonMasherMashChecker * * objectArray;
    // -> int objectCount;
}
// Range: 0x80087A50 -> 0x80087AC4
void zButtonMasherController::UpdateAll(float dt /* f31 */) {
    {
        // Range: 0x80087A68 -> 0x80087AAC
        // Local variables
        int i; // r28
    }

    // References
    // -> int objectCount;
    // -> class zButtonMasherMashChecker * * objectArray;
}
// Range: 0x80087AD0 -> 0x80087B3C
void zButtonMasherController::InsertInObjectArray(class zButtonMasherMashChecker * inObj /* r29 */, int idx /* r30 */) {
    // References
    // -> int objectCount;
    // -> class zButtonMasherMashChecker * * objectArray;
}
// signature: zButtonMasherMashChecker::zButtonMasherMashChecker(World::EntityHandleBase *, zButtonMasherWidgetAsset *)
// Range: 0x80087B40 -> 0x80087C10
void * zButtonMasherMashChecker::zButtonMasherMashChecker(class zButtonMasherMashChecker * this /* r30 */, class zButtonMasherWidgetAsset * theAsset /* r31 */) {
    // Local variables
    class zPlayer * player; // r0

    // References
    // -> int objectCount;
    // -> struct {} __vt__24zButtonMasherMashChecker;
}
// Range: 0x80087C10 -> 0x80087C70
class Entity * Sext::Button_Masher_Widget::Create(class EntityHandleBase * handle /* r30 */, class Button_Masher_Widget * asset /* r31 */) {
}
// signature: zButtonMasherMashChecker::EventCB(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80087C70 -> 0x80087D10
void zButtonMasherMashChecker::EventCB(class zButtonMasherMashChecker * this /* r31 */) {
}
// signature: zButtonMasherMashChecker::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80087D10 -> 0x80087D20
void zButtonMasherMashChecker::EventCB(class xBase * from /* r0 */) {
}
// Range: 0x80087D20 -> 0x80087D28
bool zButtonMasherMashChecker::CycleDone() {
}
// signature: zButtonMasherMashChecker::Update(float)
// Range: 0x80087D30 -> 0x80088108
void zButtonMasherMashChecker::Update(class zButtonMasherMashChecker * this /* r31 */) {
    // Local variables
    float retRate; // f31
}
// Range: 0x80088110 -> 0x80088120
void zButtonMasherMashChecker::ResetButton() {
}
