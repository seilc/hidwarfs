/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zRussellDanglePoint.cpp
*/
static bool inBigSphere; // size: 0x1, address: 0x80826318
// Range: 0x8022A000 -> 0x8022A010
void zRussellDanglePoint::LetGo() {
}
// Range: 0x8022A010 -> 0x8022A0EC
class Entity * Sext::RussellDanglePoint::Create(class EntityHandleBase * handle /* r29 */, class RussellDanglePoint * asset /* r30 */) {
    // References
    // -> struct {} __vt__19zRussellDanglePoint;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zRussellDanglePoint::Init(void *)
// Range: 0x8022A100 -> 0x8022A148
void zRussellDanglePoint::Init(class zRussellDanglePoint * this /* r31 */) {
}
// Range: 0x8022A150 -> 0x8022A32C
void zRussellDanglePoint::Setup(class zRussellDanglePoint * this /* r31 */) {
    // Local variables
    class zDirection * landingPos; // r3
    class xMat3x3 mat; // r1+0x20
    class xVec3 posDif; // r1+0x14
}
// Range: 0x8022A330 -> 0x8022A3F0
void zRussellDanglePoint::TimeStep(class zRussellDanglePoint * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x8022A3F0 -> 0x8022A450
void zRussellDanglePoint::Reset(class zRussellDanglePoint * this /* r31 */) {
}
// Range: 0x8022A450 -> 0x8022A614
void zRussellDanglePoint::HandleEvent(class zRussellDanglePoint * this /* r28 */, class xBase * from /* r29 */, unsigned int toEvent /* r30 */, class EventAny * params /* r31 */) {
}
// Range: 0x8022A620 -> 0x8022A9C8
bool zRussellDanglePoint::CanStart(class zRussellDanglePoint * this /* r29 */, class zCommonPlayer * player /* r30 */) {
    // Local variables
    class xVec3 entPos; // r1+0x8C
    class xVec3 posDif; // r1+0x80
    class xVec3 toMe; // r1+0x74
    class xVec3 toMe2; // r1+0x68
    class xVec3 toMe3; // r1+0x5C
    float testDist2; // f31
    float bigTestDist; // f13

    // References
    // -> static bool inBigSphere;
    // -> class xVec3 m_UnitAxisY;
}
// signature: zRussellDanglePoint::GetStartPosition(zCommonPlayer *, xVec3 &)
// Range: 0x8022A9E0 -> 0x8022A9FC
void zRussellDanglePoint::GetStartPosition() {
}
// signature: zRussellDanglePoint::GetStartDirection(zCommonPlayer *, xVec3 &)
// Range: 0x8022AA00 -> 0x8022AAAC
void zRussellDanglePoint::GetStartDirection() {
    // Local variables
    class xVec3 myDir; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
}
