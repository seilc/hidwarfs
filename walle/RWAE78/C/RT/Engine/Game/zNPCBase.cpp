/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCBase.cpp
*/
// Range: 0x800F3FA0 -> 0x800F3FF8
void * zNPCBase::zNPCBase() {
    // References
    // -> struct {} __vt__8zNPCBase;
}
// signature: zNPCBase::EventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800F4000 -> 0x800F402C
void zNPCBase::EventWrapper(class xBase * to /* r8 */, unsigned int to_event /* r0 */) {
}
// signature: zNPCBase::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800F4030 -> 0x800F44A4
void zNPCBase::SystemEvent(class zNPCBase * this /* r30 */) {
    // References
    // -> class zGlobals globals;
    // -> class zSoundFX * pEventSfx;
    // -> class zOneLinerSystem gOneLinerSystem;
}
// signature: zNPCBase::Load(const zNPCType *, Sext::NPCAsset *, unsigned int)
// Range: 0x800F44B0 -> 0x800F4654
void zNPCBase::Load(class zNPCBase * this /* r30 */, class NPCAsset * npcAsset /* r31 */) {
    {
        // Range: 0x800F4504 -> 0x800F4514
        // Local variables
        class xEntAsset * entass; // r0
    }
}
// Range: 0x800F4680 -> 0x800F4B1C
bool zNPCBase::BaseActivate(class zNPCBase * this /* r30 */) {
    {
        // Range: 0x800F47C4 -> 0x800F480C
        // Local variables
        unsigned int i; // r27
    }
    {
        // Range: 0x800F4928 -> 0x800F4960
        // Local variables
        unsigned int i; // r27
    }

    // References
    // -> class Scene * primaryScene;
    // -> class zFactory factory;
}
// Range: 0x800F4B20 -> 0x800F4FC0
void zNPCBase::BaseDeactivate(class zNPCBase * this /* r30 */) {
    {
        // Range: 0x800F4D0C -> 0x800F4D74
        // Local variables
        unsigned int i; // r27
    }

    // References
    // -> class zFactory factory;
    // -> class Scene * primaryScene;
}
// signature: zNPCBase::GetNPCLODPositions(xVec3 *)
// Range: 0x800F5020 -> 0x800F5070
unsigned int zNPCBase::GetNPCLODPositions() {
    {
        // Range: 0x800F502C -> 0x800F5068
        // Local variables
        class xVec3 * spawnPos; // r0
    }
}
// signature: zNPCBase::CompLeakCB(void *, int)
// Range: 0x800F5070 -> 0x800F5074
void zNPCBase::CompLeakCB() {
}
// Range: 0x800F5080 -> 0x800F51B4
void zNPCBase::AllAttached(class zNPCBase * this /* r29 */) {
    {
        // Range: 0x800F514C -> 0x800F516C
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x800F51D0 -> 0x800F52E4
void zNPCBase::PostUpdateAllComponents(class zNPCBase * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800F52F0 -> 0x800F5418
void zNPCBase::PauseAllComponents(class zNPCBase * this /* r30 */) {
    {
        // Range: 0x800F53D0 -> 0x800F53F0
        // Local variables
        unsigned int i; // r31
    }
}
// Range: 0x800F5430 -> 0x800F5558
void zNPCBase::ResumeAllComponents(class zNPCBase * this /* r30 */) {
    {
        // Range: 0x800F5510 -> 0x800F5530
        // Local variables
        unsigned int i; // r31
    }
}
// Range: 0x800F5570 -> 0x800F5748
bool zNPCBase::ForwardEventToComponents(class zNPCBase * this /* r27 */, class xBase * from /* r28 */, class xBase * to /* r29 */, unsigned int to_event /* r30 */, class EventAny * params /* r31 */) {
}
// Range: 0x800F5760 -> 0x800F5A1C
void zNPCBase::DetachAllComponents(class zNPCBase * this /* r30 */, class zNPCStatus * npcStatus /* r31 */) {
    {
        // Range: 0x800F59A8 -> 0x800F59F8
        // Local variables
        unsigned int i; // r26
    }

    // References
    // -> class zFactory factory;
}
// Range: 0x800F5A20 -> 0x800F5B70
void zNPCBase::ResetAllComponents(class zNPCBase * this /* r29 */, class zNPCStatus * npcStatus /* r30 */) {
    {
        // Range: 0x800F5B20 -> 0x800F5B44
        // Local variables
        unsigned int i; // r31
    }
}
// Range: 0x800F5BD0 -> 0x800F5C28
void zNPCBase::SetAnimState(char * playAnim /* r30 */) {
}
// signature: zNPCBase::CheckWallNetValidity(bool)
// Range: 0x800F5C40 -> 0x800F6204
bool zNPCBase::CheckWallNetValidity(class zNPCBase * this /* r30 */) {
    // Local variables
    class xBase * b; // r31
    class zWallNet * npcWallNet; // r0
    class xMovePoint * jumpSpawnMP; // r5

    {
        // Range: 0x800F5CE8 -> 0x800F5F4C
        // Local variables
        class xVec3 * jumpMPPos; // r0
    }
    {
        // Range: 0x800F5F4C -> 0x800F61E8
        // Local variables
        class xVec3 npcPos; // r1+0x8
    }
}
// signature: zNPCBase::GiveNPCDamage(xEnt *, const zCombatDamageInfo &)
// Range: 0x800F6210 -> 0x800F65D8
void zNPCBase::GiveNPCDamage(class zNPCBase * this /* r30 */) {
    // Local variables
    class zNPCGetsDamageInfo npcDamageInfo; // r1+0x8

    // References
    // -> class zGlobals globals;
    // -> class zSoundFX * pEventSfx;
    // -> class zOneLinerSystem gOneLinerSystem;
}
// signature: zNPCBase::NPCGetsDamage(const zNPCGetsDamageInfo &)
// Range: 0x800F6600 -> 0x800F6620
void zNPCBase::NPCGetsDamage() {
}
// signature: zNPCBase::NPCGivesDamage(xEnt *, xEnt *, const zCombatDamageInfo &)
// Range: 0x800F6620 -> 0x800F6670
void zNPCBase::NPCGivesDamage() {
    // Local variables
    class zNPCGivesDamageInfo npcDamageInfo; // r1+0x8
}
// signature: zNPCBase::NPCGivesDamage(const zNPCGivesDamageInfo &)
// Range: 0x800F6670 -> 0x800F6690
void zNPCBase::NPCGivesDamage() {
}
// Range: 0x800F6690 -> 0x800F66B0
class xVec3 * zNPCBase::GetPositionSound() const {
}
// signature: zNPCBase::PlayerTargetable(int)
// Range: 0x800F66B0 -> 0x800F66E8
bool zNPCBase::PlayerTargetable() {
    // References
    // -> class xGlobals * xglobals;
}
