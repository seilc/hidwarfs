/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUpBalloonGenerator.cpp
*/
class zBalloonGenerator * pInstance; // size: 0x4, address: 0x8081ABA8
// Range: 0x800F40F0 -> 0x800F4210
void zBalloonCluster::Update(class zBalloonCluster * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 v; // r1+0x8
}
// Range: 0x800F4210 -> 0x800F4494
class zBalloonGenerator * zBalloonGenerator::GetInstance() {
    // References
    // -> class zBalloonGenerator * pInstance;
}
// Range: 0x800F44F0 -> 0x800F45A4
void zBalloonGenerator::Destroy() {
    {
        // Range: 0x800F4518 -> 0x800F4520
        // Local variables
        int i; // r29
    }

    // References
    // -> class zBalloonGenerator * pInstance;
}
// signature: zBalloonGenerator::Setup(World::ModelInstanceAsset *, const xVec3 &, World::ModelInstanceAsset *, const xVec3 &, World::ModelInstanceAsset *, const xVec3 &)
// Range: 0x800F45B0 -> 0x800F47C0
void zBalloonGenerator::Setup(class zBalloonGenerator * this /* r28 */, class ModelInstanceAsset * modelA /* r22 */, class xVec3 & attachPointA /* r27 */, class xVec3 & attachPointB /* r29 */, class xVec3 & attachPointC /* r30 */) {
    // Local variables
    class hkpRigidBodyCinfo cinfo; // r1+0x20
    class Vector dummy; // r1+0x10
    int i; // r31
}
// signature: zBalloonGenerator::ActivateNextAvailable(zBalloonCluster::AttachedObject *, const xVec3 &, float, unsigned int)
// Range: 0x800F47C0 -> 0x800F4A1C
class zBalloonCluster * zBalloonGenerator::ActivateNextAvailable(unsigned int type /* r30 */) {
    // Local variables
    unsigned int i; // r7
    class zBalloonCluster & balloon; // r31
    unsigned char * firstInactive; // r8
}
// signature: zBalloonGenerator::DeactivateBalloon(zBalloonCluster *)
// Range: 0x800F4A20 -> 0x800F4AD4
void zBalloonGenerator::DeactivateBalloon(class zBalloonGenerator * this /* r29 */) {
    // Local variables
    unsigned char index; // r0
    unsigned char * firstInactive; // r30
}
// signature: zBalloonClusterCollisionListener::contactPointConfirmedCallback(hkpContactPointConfirmedEvent &)
// Range: 0x800F4AF0 -> 0x800F4AF4
void zBalloonClusterCollisionListener::contactPointConfirmedCallback() {
}
