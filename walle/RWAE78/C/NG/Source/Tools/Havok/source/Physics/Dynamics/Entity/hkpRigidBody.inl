/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Tools\Havok\source\Physics\Dynamics\Entity\hkpRigidBody.inl
*/
// signature: hkGetRigidBody(const hkpCollidable *)
// Range: 0x8000AC10 -> 0x8000AC34
class hkpRigidBody * hkGetRigidBody() {
}
// Range: 0x8018D800 -> 0x8018D808
float hkpRigidBody::getMass() const {
}
// Range: 0x801860D0 -> 0x801860D8
class hkVector4 * hkpRigidBody::getPosition() const {
}
// Range: 0x8018AA40 -> 0x8018AA48
class hkQuaternion * hkpRigidBody::getRotation() const {
}
// Range: 0x801975B0 -> 0x801975B8
class hkTransform * hkpRigidBody::getTransform() const {
}
// Range: 0x80036740 -> 0x80036748
class hkVector4 * hkpRigidBody::getLinearVelocity() const {
}
// signature: hkpRigidBody::getPointVelocity(const hkVector4 &, hkVector4 &) const
// Range: 0x80037A20 -> 0x80037AC8
void hkpRigidBody::getPointVelocity() const {
}
// Range: 0x801EE430 -> 0x801EE480
void hkpRigidBody::applyLinearImpulse(class hkpRigidBody * this /* r30 */, class hkVector4 * imp /* r31 */) {
}
// Range: 0x8018A7D0 -> 0x8018A830
void hkpRigidBody::applyForce(class hkpRigidBody * this /* r30 */, float deltaTime /* f31 */, class hkVector4 * force /* r31 */) {
}
// Range: 0x8000AC40 -> 0x8000AC48
enum MotionType hkpRigidBody::getMotionType() const {
}
// Range: 0x801665D0 -> 0x80166620
void hkpRigidBody::setLinearVelocity(class hkpRigidBody * this /* r30 */, class hkVector4 * newVel /* r31 */) {
}
// signature: hkpRigidBody::setQualityType(hkpCollidableQualityType)
// Range: 0x801665C0 -> 0x801665C8
void hkpRigidBody::setQualityType() {
}
