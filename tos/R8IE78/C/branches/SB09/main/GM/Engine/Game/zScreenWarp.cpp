/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zScreenWarp.cpp
*/
// Range: 0x80167790 -> 0x801677F0
class Entity * Sext::ScreenWarp::Create(class EntityHandleBase * handle /* r30 */, class ScreenWarp * inAsset /* r31 */) {
}
// signature: ScreenWarp::ScreenWarp(World::EntityHandleBase *, Sext::ScreenWarp *)
// Range: 0x801677F0 -> 0x80167890
void * ScreenWarp::ScreenWarp(class ScreenWarp * this /* r30 */, class ScreenWarp * inAsset /* r31 */) {
    // References
    // -> struct {} __vt__10ScreenWarp;
}
// signature: ScreenWarp::HandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80167890 -> 0x801678DC
void ScreenWarp::HandleEvent() {
    // Local variables
    class ScreenWarp * warp; // r4
}
// signature: ScreenWarp::FreeWarpCallBack(Graphics::ScreenWarp::Warp &)
// Range: 0x801678E0 -> 0x801678F8
void ScreenWarp::FreeWarpCallBack() {
}
// Range: 0x80167900 -> 0x80167944
void ScreenWarp::Kill(class ScreenWarp * this /* r31 */) {
    // References
    // -> class ScreenWarpManager * gScreenWarpManager;
}
// Range: 0x80167950 -> 0x80167B84
void ScreenWarp::Emit(class ScreenWarp * this /* r31 */, bool updateOnly /* r30 */) {
    // Local variables
    class xVec2 screenPoint; // r1+0x10
    class xVec3 worldPoint; // r1+0x18
    float iz; // r1+0x8
    bool inView; // r0

    {
        // Range: 0x80167998 -> 0x801679D8
        // Local variables
        class xEnt * ent; // r0
    }
    {
        // Range: 0x80167AE0 -> 0x80167B50
        // Local variables
        float currentDistance; // f0
    }

    // References
    // -> class ScreenWarpManager * gScreenWarpManager;
}
// Range: 0x80167BD0 -> 0x80167C30
class Entity * Sext::FXScreenWarp::Create(class EntityHandleBase * handle /* r30 */, class FXScreenWarp * inAsset /* r31 */) {
}
// signature: FXScreenWarp::FXScreenWarp(World::EntityHandleBase *, Sext::FXScreenWarp *)
// Range: 0x80167C30 -> 0x80167CBC
void * FXScreenWarp::FXScreenWarp(class FXScreenWarp * this /* r30 */, class FXScreenWarp * inAsset /* r31 */) {
    // References
    // -> struct {} __vt__12FXScreenWarp;
}
// signature: FXScreenWarp::FreeWarpCallBack(Graphics::ScreenWarp::Warp &)
// Range: 0x80167CC0 -> 0x80167CD8
void FXScreenWarp::FreeWarpCallBack() {
}
// signature: FXScreenWarp::Update(xVec3 &, bool)
// Range: 0x80167CE0 -> 0x80167D2C
void FXScreenWarp::Update(class FXScreenWarp * this /* r30 */, bool infinite /* r31 */) {
}
// Range: 0x80167D30 -> 0x80167D74
void FXScreenWarp::Kill(class FXScreenWarp * this /* r31 */) {
    // References
    // -> class ScreenWarpManager * gScreenWarpManager;
}
// Range: 0x80167D80 -> 0x80167F04
void FXScreenWarp::Emit(class FXScreenWarp * this /* r31 */, bool updateOnly /* r30 */, bool infinite /* r29 */) {
    // Local variables
    class xVec2 screenPoint; // r1+0x10
    float iz; // r1+0x8
    bool inView; // r0

    {
        // Range: 0x80167E50 -> 0x80167ED0
        // Local variables
        float currentDistance; // f0
    }

    // References
    // -> class ScreenWarpManager * gScreenWarpManager;
}
