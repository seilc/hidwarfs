/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCCombat.cpp
*/
// signature: zNPCCombatCollisionListener::objectInteractionCallback(hkpCharacterProxy *, const hkpCharacterObjectInteractionEvent &, hkpCharacterObjectInteractionResult &)
// Range: 0x800F89C0 -> 0x800F937C
void zNPCCombatCollisionListener::objectInteractionCallback(class zNPCCombatCollisionListener * this /* r27 */) {
    // Local variables
    class hkpRigidBody * rb; // r4
    class xBase * base; // r29
    class xVec3 rbPos; // r1+0x38
    class xVec3 rbVel; // r1+0x2C
    float rbSpeed2; // f0
    class xVec3 toNPCDir; // r1+0x20
    float velProjOnNPCDir; // f0

    // References
    // -> class zGlobals globals;
    // -> class zSoundFX * pEventSfx;
    // -> class zOneLinerSystem gOneLinerSystem;
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisY;
}
// signature: zNPCCombat::SetParameters(zNPCCombatParams *)
// Range: 0x800F9390 -> 0x800F93A4
void zNPCCombat::SetParameters() {
}
// signature: zNPCCombat::Attached(const zNPCStatus *)
// Range: 0x800F93B0 -> 0x800F93F8
void zNPCCombat::Attached(class zNPCCombat * this /* r31 */) {
}
// signature: zNPCCombat::Detached(zNPCStatus *)
// Range: 0x800F9400 -> 0x800F94FC
void zNPCCombat::Detached(class zNPCCombat * this /* r31 */) {
}
// Range: 0x800F9500 -> 0x800F9524
void zNPCCombat::AllAttached() {
}
