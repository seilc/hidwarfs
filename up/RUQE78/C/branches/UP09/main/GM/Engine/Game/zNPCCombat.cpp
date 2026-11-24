/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCCombat.cpp
*/
// signature: zNPCCombatCollisionListener::objectInteractionCallback(hkpCharacterProxy *, const hkpCharacterObjectInteractionEvent &, hkpCharacterObjectInteractionResult &)
// Range: 0x801A57D0 -> 0x801A58A4
void zNPCCombatCollisionListener::objectInteractionCallback(class zNPCCombatCollisionListener * this /* r31 */, class hkpCharacterObjectInteractionEvent & input /* r30 */) {
    // Local variables
    class xBase * base; // r3

    {
        // Range: 0x801A57FC -> 0x801A588C
        // Local variables
        class ProjectileCollisionDetails collisionInfo; // r1+0x8
        class zProjectile * projectile; // r31
    }
}
// signature: zNPCCombat::SetParameters(zNPCCombatParams *)
// Range: 0x801A58B0 -> 0x801A58C4
void zNPCCombat::SetParameters() {
}
// signature: zNPCCombat::Attached(const zNPCStatus *)
// Range: 0x801A58D0 -> 0x801A592C
void zNPCCombat::Attached(class zNPCCombat * this /* r31 */) {
}
// signature: zNPCCombat::Detached(zNPCStatus *)
// Range: 0x801A5930 -> 0x801A5A2C
void zNPCCombat::Detached(class zNPCCombat * this /* r31 */) {
}
// signature: zNPCCombat::Reset(const zNPCStatus *)
// Range: 0x801A5A30 -> 0x801A5A34
void zNPCCombat::Reset() {
}
// Range: 0x801A5A40 -> 0x801A5AD8
void zNPCCombat::AllAttached(class zNPCCombat * this /* r31 */) {
    // Local variables
    class zCombatAttack * attackTable; // r6
    unsigned int attackTableSize; // r0
    float hitPoints; // f2
}
// signature: zNPCCombat::PreUpdate(float)
// Range: 0x801A5AE0 -> 0x801A5AF8
void zNPCCombat::PreUpdate() {
}
// signature: zNPCCombat::PostUpdate(float)
// Range: 0x801A5B00 -> 0x801A5B04
void zNPCCombat::PostUpdate() {
}
// Range: 0x801A5B10 -> 0x801A5B20
void zNPCCombat::Render() {
}
// signature: zNPCCombat::HandleNPCDamage(xEnt *, const zCombatDamageInfo &, zNPCGetsDamageInfo *)
// Range: 0x801A5B20 -> 0x801A5D70
bool zNPCCombat::HandleNPCDamage() {
    // Local variables
    enum eNPCHitReaction hitReaction; // r0

    {
        // Range: 0x801A5BC0 -> 0x801A5CE0
        // Local variables
        class xVec3 knockback; // r1+0x8
    }
}
