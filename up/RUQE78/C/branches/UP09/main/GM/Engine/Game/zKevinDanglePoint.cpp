/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zKevinDanglePoint.cpp
*/
// Range: 0x80187070 -> 0x8018714C
class Entity * Sext::KevinDanglePoint::Create(class EntityHandleBase * handle /* r29 */, class KevinDanglePoint * asset /* r30 */) {
    // References
    // -> struct {} __vt__17zKevinDanglePoint;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80187160 -> 0x80187170
void zKevinDanglePoint::LetGo() {
}
// signature: zKevinDanglePoint::Init(void *)
// Range: 0x80187170 -> 0x801871B8
void zKevinDanglePoint::Init(class zKevinDanglePoint * this /* r31 */) {
}
// Range: 0x801871C0 -> 0x80187520
void zKevinDanglePoint::Setup(class zKevinDanglePoint * this /* r31 */) {
    // Local variables
    class xMat3x3 mat; // r1+0x20
    class zDirection * landingPos; // r29
    class xVec3 posDif; // r1+0x14
}
// Range: 0x80187520 -> 0x801875C4
void zKevinDanglePoint::TimeStep(class zKevinDanglePoint * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x801875D0 -> 0x8018764C
void zKevinDanglePoint::Reset(class zKevinDanglePoint * this /* r29 */) {
}
// signature: zKevinDanglePoint::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80187650 -> 0x80187754
void zKevinDanglePoint::HandleEvent(class zKevinDanglePoint * this /* r29 */) {
}
// Range: 0x80187760 -> 0x80187BD8
bool zKevinDanglePoint::CanStart(class zKevinDanglePoint * this /* r29 */, class zCommonPlayer * player /* r30 */) {
    // Local variables
    unsigned int playerAction; // r0
    class xVec3 entPos; // r1+0xB0
    class xVec3 entAt; // r1+0xA4
    class xVec3 posDif; // r1+0x98
    class xVec3 toMe; // r1+0x8C
    class xVec3 toMe2; // r1+0x80
    class xVec3 toMe3; // r1+0x74
    float testDist2; // f31
    float bigTestDist; // f13

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zKevinDanglePoint::GetStartPosition(zCommonPlayer *, xVec3 &)
// Range: 0x80187BF0 -> 0x80187CA0
void zKevinDanglePoint::GetStartPosition() {
    {
        // Range: 0x80187C0C -> 0x80187C98
        // Local variables
        class xVec3 myDir; // r1+0x20
    }
}
// signature: zKevinDanglePoint::GetStartDirection(zCommonPlayer *, xVec3 &)
// Range: 0x80187CA0 -> 0x80187D48
void zKevinDanglePoint::GetStartDirection() {
    // Local variables
    class xVec3 myDir; // r1+0x8
    float flipVal; // f9

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80187D50 -> 0x80187DE4
void zKevinDanglePoint::ContextCheckForPresence(class zKevinDanglePoint * this /* r29 */, class zCommonPlayer * player /* r30 */) {
    {
        // Range: 0x80187D70 -> 0x80187DC8
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// signature: zKevinDanglePoint::GetAnimPackage(ePlayerName)
// Range: 0x80187E00 -> 0x80187E3C
class zAnimPackage * zKevinDanglePoint::GetAnimPackage() {
}
