/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xHavokCharacterController.h
*/
// Range: 0x8000D0A0 -> 0x8000D0BC
class hkpCharacterProxy * xHavokCharacterController::GetCharacterProxy() const {
}
// Range: 0x800ECD50 -> 0x800ECD6C
class hkpCharacterRigidBody * xHavokCharacterController::GetCharacterRigidBody() const {
}
// Range: 0x80127A50 -> 0x80127A80
class hkpWorldObject * xHavokCharacterController::GetWorldObject() const {
}
// Range: 0x80052990 -> 0x800529F4
class hkpCollidable * xHavokCharacterController::GetCollidable() const {
}
// Range: 0x80053E60 -> 0x80053ECC
void xHavokCharacterController::GetPosition(class hkVector4 & pos /* r31 */) const {
}
// Range: 0x800553E0 -> 0x8005543C
void xHavokCharacterController::SetPosition(class hkVector4 & pos /* r31 */) {
}
// Range: 0x80118620 -> 0x8011868C
void xHavokCharacterController::GetLinearVelocity(class hkVector4 & vel /* r31 */) const {
}
// signature: xHavokCharacterController::SetLinearVelocity(const hkVector4 &)
// Range: 0x801185E0 -> 0x80118614
void xHavokCharacterController::SetLinearVelocity() {
    // References
    // -> float dt;
}
// Range: 0x80098A60 -> 0x80098AD4
void xHavokCharacterController::SetCollisionFilter(unsigned int filter /* r31 */) {
    {
        // Range: 0x80098A8C -> 0x80098AB0
        // Local variables
        class hkpShapePhantom * phantom; // r31
    }
}
// Range: 0x800ECD00 -> 0x800ECD44
void xHavokCharacterController::Cleanup(class xHavokCharacterController * this /* r31 */) {
}
// Range: 0x80118970 -> 0x801189AC
float xHavokCharacterController::GetMaxSlopeCosine() const {
}
// signature: xHavokCharacterController::SetMaxSlopeCosine(float)
// Range: 0x80058C20 -> 0x80058C50
void xHavokCharacterController::SetMaxSlopeCosine() {
}
