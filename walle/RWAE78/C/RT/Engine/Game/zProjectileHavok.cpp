/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zProjectileHavok.cpp
*/
// signature: zProjectileHavok::Setup(zProjectileTrajectory *, unsigned long long, hkpShape *, zProjectileController *, zProjectileLaunchData *)
// Range: 0x8018A2B0 -> 0x8018A784
void zProjectileHavok::Setup(class zProjectileHavok * this /* r30 */, class zProjectileController * params /* r28 */, class zProjectileLaunchData * launchData /* r31 */) {
    // Local variables
    class hkpShape * scaled_shape; // r0
    class ProjectileCollisionListener * temp; // r0
    class xQuat quat; // r1+0x60

    // References
    // -> float hkUFloat8_intToReal[256];
    // -> struct {} __vt__27ProjectileCollisionListener;
    // -> class CHavokShapeBuilder * s_instance;
}
// Range: 0x8018A830 -> 0x8018AA28
void zProjectileHavok::SwitchHavokMode(class zProjectileHavok * this /* r28 */, enum eHavok_Mode newMode /* r29 */, class zProjectileLaunchData * launchData /* r31 */) {
    // Local variables
    class hkpRigidBody * * rigidBody; // r0

    {
        // Range: 0x8018A890 -> 0x8018A904
        // Local variables
        class hkpRigidBodyCinfo info; // r1+0xE0
    }
    {
        // Range: 0x8018A994 -> 0x8018A9F4
        // Local variables
        float mass; // f31
        class hkpRigidBodyCinfo info; // r1+0x20
    }
}
// Range: 0x8018AA30 -> 0x8018AA3C
class zProjectile * zProjectileHavok::GetOwnerProjectile() {
}
