/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCarlLedgeHoist.cpp
*/
// Range: 0x8012E0B0 -> 0x8012E1A0
class Entity * Sext::CarlLedgeHoist::Create(class EntityHandleBase * handle /* r29 */, class CarlLedgeHoist * asset /* r30 */) {
    // References
    // -> struct {} __vt__15zCarlLedgeHoist;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zCarlLedgeHoist::Init(void *)
// Range: 0x8012E1B0 -> 0x8012E1F8
void zCarlLedgeHoist::Init(class zCarlLedgeHoist * this /* r31 */) {
}
// Range: 0x8012E200 -> 0x8012E2EC
void zCarlLedgeHoist::Setup(class zCarlLedgeHoist * this /* r31 */) {
}
// signature: zCarlLedgeHoist::Update(float)
// Range: 0x8012E360 -> 0x8012E53C
void zCarlLedgeHoist::Update(class zCarlLedgeHoist * this /* r31 */) {
    {
        // Range: 0x8012E378 -> 0x8012E528
        // Local variables
        class xMat4x3 newMat; // r1+0x18
        class xVec3 carlPos; // r1+0x8
    }
}
// Range: 0x8012E540 -> 0x8012E7C0
void zCarlLedgeHoist::Start(class zCarlLedgeHoist * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x8012E568 -> 0x8012E79C
        // Local variables
        class xMat3x3 tmp; // r1+0x8
    }
}
// Range: 0x8012E7C0 -> 0x8012E808
void zCarlLedgeHoist::Reset(class zCarlLedgeHoist * this /* r31 */) {
}
// signature: zCarlLedgeHoist::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8012E810 -> 0x8012E8C8
void zCarlLedgeHoist::HandleEvent(class zCarlLedgeHoist * this /* r29 */) {
}
// Range: 0x8012E8D0 -> 0x8012ED58
bool zCarlLedgeHoist::CanStart(class zCarlLedgeHoist * this /* r31 */, class zCommonPlayer * player /* r30 */) {
    // Local variables
    unsigned int playerAction; // r0
    class xVec3 entPos; // r1+0x68
    class xVec3 entAt; // r1+0x5C
    class xVec3 closestPoint; // r1+0x50
    class xVec3 ledgeDir; // r1+0x44
    class xVec3 airDir; // r1+0x38
    float u; // f0
    float yDiff; // f1
    class xVec3 toClosest; // r1+0x2C
    float testDist2; // f6
    float length2; // f0
    float dot; // f0
}
// Range: 0x8012ED70 -> 0x8012EE20
void zCarlLedgeHoist::ContextCheckForActivity(class zCarlLedgeHoist * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x8012ED8C -> 0x8012EE08
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// signature: zCarlLedgeHoist::GetStartPosition(zCommonPlayer *, xVec3 &)
// Range: 0x8012EE30 -> 0x8012EEC4
void zCarlLedgeHoist::GetStartPosition(class zCarlLedgeHoist * this /* r30 */, class xVec3 & pos /* r31 */) {
    // Local variables
    class xVec3 dummy; // r1+0x20
    class xVec3 closestPoint; // r1+0x14
    class xVec3 groundDir; // r1+0x8
    float u; // f0
}
// signature: zCarlLedgeHoist::GetStartDirection(zCommonPlayer *, xVec3 &)
// Range: 0x8012EED0 -> 0x8012EF50
void zCarlLedgeHoist::GetStartDirection(class zCarlLedgeHoist * this /* r30 */, class xVec3 & dir /* r31 */) {
    // Local variables
    class xVec3 dummy; // r1+0x8
    float u; // f0
}
// signature: zCarlLedgeHoist::CarlTriggerHandler(unsigned int, xBase *)
// Range: 0x8012EF50 -> 0x8012EF8C
void zCarlLedgeHoist::CarlTriggerHandler() {
}
// signature: zCarlLedgeHoist::RussellTriggerHandler(unsigned int, xBase *)
// Range: 0x8012EF90 -> 0x8012EFCC
void zCarlLedgeHoist::RussellTriggerHandler() {
}
// signature: zCarlLedgeHoist::GetJumpHintPos(xVec3 &)
// Range: 0x8012EFD0 -> 0x8012F014
bool zCarlLedgeHoist::GetJumpHintPos() {
}
