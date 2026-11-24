/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zLedgegrab.cpp
*/
// Range: 0x8018F300 -> 0x8018F3DC
class Entity * Sext::LedgeGrab::Create(class EntityHandleBase * handle /* r29 */, class LedgeGrab * asset /* r30 */) {
    // References
    // -> struct {} __vt__10zLedgeGrab;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zLedgeGrab::Init(void *)
// Range: 0x8018F3F0 -> 0x8018F438
void zLedgeGrab::Init(class zLedgeGrab * this /* r31 */) {
}
// Range: 0x8018F440 -> 0x8018F498
void zLedgeGrab::Setup(class zLedgeGrab * this /* r31 */) {
}
// signature: zLedgeGrab::TimeStep(float)
// Range: 0x8018F4A0 -> 0x8018F4FC
void zLedgeGrab::TimeStep(class zLedgeGrab * this /* r31 */) {
}
// Range: 0x8018F500 -> 0x8018F55C
void zLedgeGrab::Start(class zLedgeGrab * this /* r30 */, class zCommonPlayer * player /* r31 */) {
}
// signature: zLedgeGrab::Stop(zCommonPlayer *)
// Range: 0x8018F560 -> 0x8018F5B0
void zLedgeGrab::Stop(class zLedgeGrab * this /* r31 */) {
}
// Range: 0x8018F5B0 -> 0x8018F60C
void zLedgeGrab::Reset(class zLedgeGrab * this /* r29 */) {
}
// signature: zLedgeGrab::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8018F610 -> 0x8018F6F8
void zLedgeGrab::HandleEvent(class zLedgeGrab * this /* r29 */) {
}
// Range: 0x8018F700 -> 0x8018FCF4
bool zLedgeGrab::CanStart(class zLedgeGrab * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    // Local variables
    unsigned int playerAction; // r0
    class xVec3 entPos; // r1+0x68
    class xVec3 entAt; // r1+0x5C
    class xVec3 closestPoint; // r1+0x50
    class xVec3 dir; // r1+0x44
    class xVec3 groundDir; // r1+0x38
    class xVec3 toClosest; // r1+0x2C
    float xzDot; // f0
    class xVec3 cross; // r1+0x20

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
}
// signature: zLedgeGrab::GetStartPosition(zCommonPlayer *, xVec3 &)
// Range: 0x8018FD10 -> 0x8018FD2C
void zLedgeGrab::GetStartPosition() {
}
// signature: zLedgeGrab::GetStartDirection(zCommonPlayer *, xVec3 &)
// Range: 0x8018FD30 -> 0x801900D0
void zLedgeGrab::GetStartDirection(class zLedgeGrab * this /* r31 */, class xVec3 & dir /* r30 */) {
    // Local variables
    class xVec3 dummy; // r1+0x14
    float u; // f0

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x801900D0 -> 0x80190158
void zLedgeGrab::ContextCheckForPresence(class zLedgeGrab * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x801900EC -> 0x80190140
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
