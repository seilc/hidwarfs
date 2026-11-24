/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zProjectileHavok.cpp
*/
// signature: zProjectileHavok::Setup(zProjectile *, unsigned long long, const zProjectileHavokCreateInfo &)
// Range: 0x8012A370 -> 0x8012A620
void zProjectileHavok::Setup(class zProjectileHavok * this /* r30 */, class zProjectileHavokCreateInfo & creationInfo /* r31 */) {
    // Local variables
    class hkpShape * sourceBodyShape; // r28
    class hkpShape * scaled_shape; // r0
    class xQuat quat; // r1+0x70

    {
        // Range: 0x8012A3BC -> 0x8012A3D8
        // Local variables
        class ModelPrototypeEntity * proto; // r0
    }

    // References
    // -> class CHavokShapeBuilder * s_instance;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8012A670 -> 0x8012A71C
void zProjectileHavok::Update(class zProjectileHavok * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x8012A720 -> 0x8012A784
void zProjectileHavok::RemoveRigidBodyFromHavokWorld(class zProjectileHavok * this /* r31 */) {
}
// Range: 0x8012A790 -> 0x8012A84C
void zProjectileHavok::GetTransform(class xMat4x3 * returnTransform /* r29 */, class xVec3 * linearVelocityVector /* r30 */, class xVec3 * angularVelocityVector /* r31 */) {
    // Local variables
    class hkTransform tempXform; // r1+0x30
    class hkVector4 tempLinearVel; // r1+0x20
    class hkVector4 tempAngularVel; // r1+0x10
}
// signature: zProjectileHavok::GetPosition(xVec3 *)
// Range: 0x8012A850 -> 0x8012A86C
void zProjectileHavok::GetPosition(class zProjectileHavok * this /* r5 */) {
}
// Range: 0x8012A870 -> 0x8012A894
float zProjectileHavok::GetSpeed() {
}
// signature: zProjectileHavok::GetVelocity(xVec3 *)
// Range: 0x8012A8A0 -> 0x8012A8C8
void zProjectileHavok::GetVelocity() {
}
// Range: 0x8012A8D0 -> 0x8012A910
float zProjectileHavok::GetMass() {
}
// Range: 0x8012A910 -> 0x8012A918
class zProjectile * zProjectileHavok::GetOwnerProjectile() {
}
// Range: 0x8012A920 -> 0x8012A938
void zProjectileHavok::ResetAcceleration() {
}
// Range: 0x8012A940 -> 0x8012AA1C
void zProjectileHavok::ApplyAcceleration(class zProjectileHavok * this /* r29 */, class xVec3 & relativeAcceleration /* r30 */, float dt /* f31 */, bool persistent /* r31 */) {
}
// signature: zProjectileHavok::ForceVelocities(const xVec3 &, const xVec3 &)
// Range: 0x8012AA20 -> 0x8012AAB0
void zProjectileHavok::ForceVelocities(class zProjectileHavok * this /* r29 */, class xVec3 & linearVelocity /* r30 */) {
}
