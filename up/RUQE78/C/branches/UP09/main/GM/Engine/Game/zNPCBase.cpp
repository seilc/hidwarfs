/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCBase.cpp
*/
// signature: zNPCBase::zNPCBase(World::EntityHandleBase *)
// Range: 0x80199A60 -> 0x80199B48
void * zNPCBase::zNPCBase(class zNPCBase * this /* r31 */) {
    // References
    // -> struct {} __vt__8zNPCBase;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zNPCBase::EventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80199B50 -> 0x80199B7C
void zNPCBase::EventWrapper(class xBase * to /* r8 */, unsigned int to_event /* r0 */) {
}
// Range: 0x80199B80 -> 0x8019A0DC
void zNPCBase::SystemEvent(class zNPCBase * this /* r27 */, class xBase * from /* r28 */, class xBase * to /* r29 */, unsigned int to_event /* r30 */, class EventAny * params /* r31 */) {
    {
        // Range: 0x80199FA8 -> 0x8019A064
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r24
        class EventActionDrivenBy * drivenParams; // r0
    }
}
// signature: zNPCBase::Load(const zNPCType *, Sext::NPCAsset *, unsigned int)
// Range: 0x8019A0E0 -> 0x8019A2F8
void zNPCBase::Load(class zNPCBase * this /* r30 */, class NPCAsset * npcAsset /* r31 */) {
    {
        // Range: 0x8019A148 -> 0x8019A158
        // Local variables
        class xEntAsset * entass; // r0
    }
}
// Range: 0x8019A320 -> 0x8019A798
bool zNPCBase::BaseActivate(class zNPCBase * this /* r31 */) {
    {
        // Range: 0x8019A4A4 -> 0x8019A4F8
        // Local variables
        unsigned int i; // r26
    }
    {
        // Range: 0x8019A640 -> 0x8019A668
        // Local variables
        unsigned int i; // r26
    }

    // References
    // -> class Scene * primaryScene;
    // -> class zFactory factory;
}
// Range: 0x8019A7A0 -> 0x8019AC84
void zNPCBase::BaseDeactivate(class zNPCBase * this /* r25 */) {
    {
        // Range: 0x8019A970 -> 0x8019A9D8
        // Local variables
        unsigned int i; // r30
    }

    // References
    // -> class zFactory factory;
    // -> class Scene * primaryScene;
}
// signature: zNPCBase::GetNPCLODPositions(xVec3 *)
// Range: 0x8019ACF0 -> 0x8019AD40
unsigned int zNPCBase::GetNPCLODPositions() {
    {
        // Range: 0x8019ACFC -> 0x8019AD38
        // Local variables
        class xVec3 * spawnPos; // r0
    }
}
// signature: zNPCBase::CompLeakCB(void *, int)
// Range: 0x8019AD50 -> 0x8019AD54
void zNPCBase::CompLeakCB() {
}
// Range: 0x8019AD60 -> 0x8019AEC4
void zNPCBase::AllAttached(class zNPCBase * this /* r29 */) {
    {
        // Range: 0x8019AE48 -> 0x8019AE68
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x8019AEE0 -> 0x8019B014
void zNPCBase::PreUpdateAllComponents(class zNPCBase * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x8019B020 -> 0x8019B154
void zNPCBase::PostUpdateAllComponents(class zNPCBase * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x8019B160 -> 0x8019B2A4
void zNPCBase::PauseAllComponents(class zNPCBase * this /* r30 */) {
    {
        // Range: 0x8019B25C -> 0x8019B27C
        // Local variables
        unsigned int i; // r31
    }
}
// Range: 0x8019B2C0 -> 0x8019B404
void zNPCBase::ResumeAllComponents(class zNPCBase * this /* r30 */) {
    {
        // Range: 0x8019B3BC -> 0x8019B3DC
        // Local variables
        unsigned int i; // r31
    }
}
// Range: 0x8019B420 -> 0x8019B630
bool zNPCBase::ForwardEventToComponents(class zNPCBase * this /* r27 */, class xBase * from /* r28 */, class xBase * to /* r29 */, unsigned int to_event /* r30 */, class EventAny * params /* r31 */) {
}
// Range: 0x8019B640 -> 0x8019B94C
void zNPCBase::DetachAllComponents(class zNPCBase * this /* r30 */, class zNPCStatus * npcStatus /* r31 */) {
    {
        // Range: 0x8019B8D8 -> 0x8019B928
        // Local variables
        unsigned int i; // r26
    }

    // References
    // -> class zFactory factory;
}
// Range: 0x8019B950 -> 0x8019BAC0
void zNPCBase::ResetAllComponents(class zNPCBase * this /* r29 */, class zNPCStatus * npcStatus /* r30 */) {
    {
        // Range: 0x8019BA70 -> 0x8019BA94
        // Local variables
        unsigned int i; // r31
    }
}
// signature: zNPCBase::SetAnimState(char *)
// Range: 0x8019BB00 -> 0x8019BBB4
void zNPCBase::SetAnimState(class zNPCBase * this /* r5 */) {
}
// signature: zNPCBase::GetPosition(xVec3 &)
// Range: 0x8019BBC0 -> 0x8019BC08
void zNPCBase::GetPosition() {
}
// Range: 0x8019BC10 -> 0x8019BC64
void zNPCBase::Spawn(class zNPCBase * this /* r31 */) {
}
// signature: zNPCBase::CheckWallNetValidity(bool)
// Range: 0x8019BC70 -> 0x8019C230
bool zNPCBase::CheckWallNetValidity(class zNPCBase * this /* r30 */) {
    // Local variables
    class xBase * b; // r31
    class zWallNet * npcWallNet; // r0
    class xMovePoint * jumpSpawnMP; // r5

    {
        // Range: 0x8019BD14 -> 0x8019BF78
        // Local variables
        class xVec3 * jumpMPPos; // r0
    }
    {
        // Range: 0x8019BF78 -> 0x8019C214
        // Local variables
        class xVec3 npcPos; // r1+0x8
    }
}
// signature: zNPCBase::GiveNPCDamage(xEnt *, const zCombatDamageInfo &)
// Range: 0x8019C230 -> 0x8019C394
void zNPCBase::GiveNPCDamage(class zNPCBase * this /* r31 */) {
    // Local variables
    class zNPCGetsDamageInfo npcDamageInfo; // r1+0x8
}
// signature: zNPCBase::NPCGetsDamage(const zNPCGetsDamageInfo &)
// Range: 0x8019C3C0 -> 0x8019C3E0
void zNPCBase::NPCGetsDamage() {
}
// signature: zNPCBase::NPCGivesDamage(xEnt *, xEnt *, const zCombatDamageInfo &)
// Range: 0x8019C3E0 -> 0x8019C430
void zNPCBase::NPCGivesDamage() {
    // Local variables
    class zNPCGivesDamageInfo npcDamageInfo; // r1+0x8
}
// signature: zNPCBase::NPCGivesDamage(const zNPCGivesDamageInfo &)
// Range: 0x8019C430 -> 0x8019C450
void zNPCBase::NPCGivesDamage() {
}
// Range: 0x8019C450 -> 0x8019C470
class xVec3 * zNPCBase::GetPositionSound() const {
}
// Range: 0x8019C480 -> 0x8019C4A0
void zNPCBase::UpdateRender() {
}
// signature: zNPCBase::SetVisible(bool)
// Range: 0x8019C4A0 -> 0x8019C66C
void zNPCBase::SetVisible() {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8019C670 -> 0x8019CA40
class zPlayer * zNPCBase::GetClosestPlayerOnWallnet(class zNPCBase * this /* r25 */, bool ignoreHeight /* r26 */) {
    // Local variables
    class zWallNet * wallnet; // r29
    float minDist2; // f31
    class zPlayer * player; // r28

    {
        // Range: 0x8019C6B8 -> 0x8019CA08
        // Local variables
        int i; // r27

        {
            // Range: 0x8019C6C8 -> 0x8019CA08
            // Local variables
            float dist2; // f0
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
