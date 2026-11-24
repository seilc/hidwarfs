/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zLedgegrab.cpp
*/
// Range: 0x800D04B0 -> 0x800D0540
class Entity * Sext::LedgeGrab::Create(class EntityHandleBase * handle /* r29 */, class LedgeGrab * asset /* r30 */) {
    // References
    // -> struct {} __vt__10zLedgeGrab;
}
// signature: zLedgeGrab::Init(void *)
// Range: 0x800D0540 -> 0x800D0588
void zLedgeGrab::Init(class zLedgeGrab * this /* r31 */) {
}
// Range: 0x800D0590 -> 0x800D05E8
void zLedgeGrab::Setup(class zLedgeGrab * this /* r31 */) {
}
// signature: zLedgeGrab::TimeStep(float)
// Range: 0x800D05F0 -> 0x800D064C
void zLedgeGrab::TimeStep(class zLedgeGrab * this /* r31 */) {
}
// Range: 0x800D0650 -> 0x800D06A8
void zLedgeGrab::Start(class zLedgeGrab * this /* r30 */, class zCommonPlayer * player /* r31 */) {
}
// signature: zLedgeGrab::Stop(zCommonPlayer *)
// Range: 0x800D06B0 -> 0x800D0700
void zLedgeGrab::Stop(class zLedgeGrab * this /* r31 */) {
}
// Range: 0x800D0700 -> 0x800D0748
void zLedgeGrab::Reset(class zLedgeGrab * this /* r31 */) {
}
// Range: 0x800D0750 -> 0x800D07C8
void zLedgeGrab::DebugReset(class zLedgeGrab * this /* r29 */) {
}
// signature: zLedgeGrab::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800D07D0 -> 0x800D0830
void zLedgeGrab::HandleEvent() {
}
// Range: 0x800D0830 -> 0x800D0A44
bool zLedgeGrab::CanStart(class zLedgeGrab * this /* r31 */, class zCommonPlayer * player /* r30 */) {
    // Local variables
    unsigned int playerAction; // r0
    class xVec3 entPos; // r1+0x5C
    class xVec3 entAt; // r1+0x50
    class xVec3 closestPoint; // r1+0x44
    class xVec3 dir; // r1+0x38
    class xVec3 groundDir; // r1+0x2C
    class xVec3 toClosest; // r1+0x20
    float xzDot; // f0
    class xVec3 cross; // r1+0x14
}
// signature: zLedgeGrab::GetStartPosition(zCommonPlayer *, xVec3 &)
// Range: 0x800D0A50 -> 0x800D0A60
void zLedgeGrab::GetStartPosition(class zLedgeGrab * this /* r4 */) {
}
// signature: zLedgeGrab::GetStartDirection(zCommonPlayer *, xVec3 &)
// Range: 0x800D0A60 -> 0x800D0AB4
void zLedgeGrab::GetStartDirection(class zLedgeGrab * this /* r30 */, class xVec3 & dir /* r31 */) {
    // Local variables
    class xVec3 dummy; // r1+0x8
    float u; // f0
}
// Range: 0x800D0AC0 -> 0x800D0B40
void zLedgeGrab::ContextCheckForPresence(class zLedgeGrab * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x800D0AD8 -> 0x800D0B2C
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
