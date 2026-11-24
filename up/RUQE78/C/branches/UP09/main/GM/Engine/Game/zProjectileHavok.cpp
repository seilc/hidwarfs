/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zProjectileHavok.cpp
*/
// signature: zProjectileHavok::Setup(zProjectile *, unsigned long long, const zProjectileHavokCreateInfo &)
// Range: 0x8021E150 -> 0x8021E450
void zProjectileHavok::Setup(class zProjectileHavok * this /* r30 */, class zProjectileHavokCreateInfo & creationInfo /* r31 */) {
    // Local variables
    class ProjectileAsset * projectileAsset; // r0
    class hkpShape * sourceBodyShape; // r4
    class hkpShape * scaled_shape; // r0
    class ProjectileAsset * projAsset; // r0
    class xQuat quat; // r1+0x70

    {
        // Range: 0x8021E19C -> 0x8021E1BC
        // Local variables
        class ModelPrototypeEntity * proto; // r0
    }

    // References
    // -> struct {} __vt__27ProjectileCollisionListener;
    // -> class CHavokShapeBuilder * s_instance;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8021E460 -> 0x8021E52C
void zProjectileHavok::Update(float dt /* f31 */) {
}
// Range: 0x8021E530 -> 0x8021E610
void zProjectileHavok::GetTransform(class xMat4x3 * returnTransform /* r29 */, class xVec3 * linearVelocityVector /* r30 */, class xVec3 * angularVelocityVector /* r31 */) {
    // Local variables
    class hkTransform tempXform; // r1+0x30
    class hkVector4 tempLinearVel; // r1+0x20
    class hkVector4 tempAngularVel; // r1+0x10
}
// Range: 0x8021E610 -> 0x8021E650
float zProjectileHavok::GetMass() {
}
// Range: 0x8021E650 -> 0x8021E658
class zProjectile * zProjectileHavok::GetOwnerProjectile() {
}
// Range: 0x8021E660 -> 0x8021E730
void zProjectileHavok::SetTransform(class zProjectileHavok * this /* r30 */, class xMat4x3 * sourceTransform /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8021E694 -> 0x8021E70C
        // Local variables
        class xQuat quat; // r1+0x30
    }
}
