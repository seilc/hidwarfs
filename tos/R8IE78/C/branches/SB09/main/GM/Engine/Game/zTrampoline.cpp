/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zTrampoline.cpp
*/
// signature: zTrampolineEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017BB80 -> 0x8017BB9C
static void zTrampolineEventWrapper(class xBase * from /* r0 */) {
}
// signature: CollisionOn(zTrampoline *)
// Range: 0x8017BBA0 -> 0x8017BBC8
void CollisionOn() {
}
// signature: zTrampoline::Init(void *)
// Range: 0x8017BBD0 -> 0x8017BC4C
void zTrampoline::Init(class zTrampoline * this /* r31 */) {
}
// Range: 0x8017BC50 -> 0x8017BCB4
void zTrampoline::Setup(class zTrampoline * this /* r31 */) {
}
// Range: 0x8017BCC0 -> 0x8017BDC8
void zTrampoline::LoadValuesFromAsset(class zTrampoline * this /* r30 */) {
    // Local variables
    class xVec3 normal; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x8017BDD0 -> 0x8017BE94
void zTrampoline::SetupModel(class zTrampoline * this /* r31 */) {
    // Local variables
    class xVec3 p1; // r1+0x8
    class xMat4x3 mat; // r1+0x18
}
// Range: 0x8017BEA0 -> 0x8017BF10
void zTrampoline::DebugReset(class zTrampoline * this /* r29 */) {
}
// signature: zTrampoline::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017BF10 -> 0x8017C158
void zTrampoline::HandleEvent(class zTrampoline * this /* r31 */, class EventAny * params /* r29 */) {
    {
        // Range: 0x8017C008 -> 0x8017C0C8
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r28
        class EventActionDrivenBy * paramst; // r0
    }
}
// Range: 0x8017C160 -> 0x8017C1E8
class Entity * Sext::zTrampolineAsset::Create(class EntityHandleBase * handle /* r29 */, class zTrampolineAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__11zTrampoline;
}
// Range: 0x8017C1F0 -> 0x8017C24C
void zTrampoline::Update(class zTrampoline * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class zGlobals globals;
}
// signature: zTrampoline::TimeStep(float)
// Range: 0x8017C250 -> 0x8017C258
void zTrampoline::TimeStep() {
}
