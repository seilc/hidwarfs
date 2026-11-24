/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCCombat.cpp
*/
// signature: zNPCCombatCollisionListener::objectInteractionCallback(hkpCharacterProxy *, const hkpCharacterObjectInteractionEvent &, hkpCharacterObjectInteractionResult &)
// Range: 0x800DB920 -> 0x800DB9EC
void zNPCCombatCollisionListener::objectInteractionCallback(class zNPCCombatCollisionListener * this /* r30 */, class hkpCharacterObjectInteractionEvent & input /* r29 */) {
    // Local variables
    class xBase * base; // r3

    {
        // Range: 0x800DB94C -> 0x800DB9D4
        // Local variables
        class ProjectileCollisionDetails collisionInfo; // r1+0x8
        class zProjectile * projectile; // r30
    }
}
// signature: zNPCGivesDamageInfo::SetFromCombatDamageInfo(xEnt *, xEnt *, const zCombatDamageInfo &)
// Range: 0x800DB9F0 -> 0x800DBA14
void zNPCGivesDamageInfo::SetFromCombatDamageInfo() {
}
// signature: zNPCGetsDamageInfo::SetFromCombatDamageInfo(xEnt *, const zCombatDamageInfo &, eNPCHitReaction, float)
// Range: 0x800DBA20 -> 0x800DBACC
void zNPCGetsDamageInfo::SetFromCombatDamageInfo(class zNPCGetsDamageInfo * this /* r30 */, class zCombatDamageInfo & damageInfo /* r31 */) {
}
// signature: zNPCCombat::SetParameters(zNPCCombatParams *)
// Range: 0x800DBAD0 -> 0x800DBAE4
void zNPCCombat::SetParameters() {
}
// signature: zNPCCombat::SetCurHitPoints(float)
// Range: 0x800DBAF0 -> 0x800DBB08
void zNPCCombat::SetCurHitPoints() {
}
// signature: zNPCCombat::GetDamageMultiplier(const Sext::eHitSource) const
// Range: 0x800DBB10 -> 0x800DBB54
float zNPCCombat::GetDamageMultiplier() const {
    {
        // Range: 0x800DBB14 -> 0x800DBB48
        // Local variables
        int i; // r0
    }
}
// signature: zNPCCombat::AddToDamageList(const zNPCGetsDamageInfo &)
// Range: 0x800DBB60 -> 0x800DBBA0
void zNPCCombat::AddToDamageList() {
    // References
    // -> unsigned int gSceneFrameCount;
}
// Range: 0x800DBC00 -> 0x800DBCE0
void zNPCCombat::ClearHitList(class zNPCGetsDamageInfo * list /* r27 */, unsigned int * listTimes /* r28 */, unsigned int & listSize /* r29 */, unsigned int time /* r30 */) {
    // Local variables
    unsigned int readIdx; // r31

    {
        // Range: 0x800DBC2C -> 0x800DBCA8
        // Local variables
        unsigned int j; // r4
    }
}
// signature: zNPCCombat::HitByType(Sext::eHitSource) const
// Range: 0x800DBCE0 -> 0x800DBD1C
bool zNPCCombat::HitByType() const {
    {
        // Range: 0x800DBCE4 -> 0x800DBD14
        // Local variables
        unsigned int i; // r0
    }
}
// signature: zNPCCombat::BlockedType(Sext::eHitSource) const
// Range: 0x800DBD20 -> 0x800DBD5C
bool zNPCCombat::BlockedType() const {
    {
        // Range: 0x800DBD24 -> 0x800DBD54
        // Local variables
        unsigned int i; // r0
    }
}
// signature: zNPCCombat::Attached(const zNPCStatus *)
// Range: 0x800DBD60 -> 0x800DBDBC
void zNPCCombat::Attached(class zNPCCombat * this /* r31 */) {
}
// signature: zNPCCombat::Detached(zNPCStatus *)
// Range: 0x800DBDC0 -> 0x800DBE68
void zNPCCombat::Detached(class zNPCCombat * this /* r29 */) {
    {
        // Range: 0x800DBDF8 -> 0x800DBE24
        // Local variables
        unsigned int i; // r30
    }

    // References
    // -> class Factory factory;
}
// signature: zNPCCombat::Reset(const zNPCStatus *)
// Range: 0x800DBE70 -> 0x800DBE9C
void zNPCCombat::Reset() {
}
// Range: 0x800DBEA0 -> 0x800DC154
void zNPCCombat::AllAttached(class zNPCCombat * this /* r29 */) {
    // Local variables
    class zCombatAttack * attackTable; // r31
    unsigned int attackTableSize; // r30
    float hitPoints; // f31

    {
        // Range: 0x800DC004 -> 0x800DC04C
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x800DC098 -> 0x800DC0E8
        // Local variables
        int i; // r6
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_Null;
    // -> class Factory factory;
}
// signature: zNPCCombat::PreUpdate(float)
// Range: 0x800DC160 -> 0x800DC178
void zNPCCombat::PreUpdate() {
}
// Range: 0x800DC180 -> 0x800DC230
void zNPCCombat::PostUpdate(class zNPCCombat * this /* r30 */, float dt /* f31 */) {
    // References
    // -> unsigned int gSceneFrameCount;
}
// Range: 0x800DC230 -> 0x800DC240
void zNPCCombat::Render() {
}
// signature: zNPCCombat::FindHitReaction(xEnt *, const zCombatDamageInfo *)
// Range: 0x800DC240 -> 0x800DC2CC
enum eNPCHitReaction zNPCCombat::FindHitReaction() {
}
// Range: 0x800DC2D0 -> 0x800DC438
enum eNPCHitReaction zNPCCombat::FindHitReaction(class zNPCCombat * this /* r30 */, enum eHitSource hitSource /* r31 */) {
    // Local variables
    enum eHitSource baseSource; // r0
    unsigned int tableCount; // r0

    {
        // Range: 0x800DC3F0 -> 0x800DC420
        // Local variables
        unsigned int i; // r0
    }
}
// signature: zNPCCombat::SetAttackState(Sext::eRPSAttackTypes, float)
// Range: 0x800DC440 -> 0x800DC470
void zNPCCombat::SetAttackState() {
}
// signature: SendEventFromNpcToNpcsWithinDistance(xVec3 *, xBase *, unsigned int, unsigned int, Sext::EventAny *, float)
// Range: 0x800DC470 -> 0x800DC598
void SendEventFromNpcToNpcsWithinDistance() {
    // Local variables
    class zNPCBase * fromNPCBase; // r4
    class zScene * scene; // r29

    {
        // Range: 0x800DC4A0 -> 0x800DC580
        // Local variables
        class zEntEventToAllNpcsFromNpcWithinDistance_CB eventCB; // r1+0x20
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x800DC5A0 -> 0x800DC840
bool zNPCCombat::HandleNPCDamage(class zNPCCombat * this /* r30 */, class xEnt * npcEnt /* r31 */, class zCombatDamageInfo & damageInfo /* r26 */, class zNPCGetsDamageInfo * output /* r27 */) {
    // Local variables
    enum eNPCHitReaction hitReaction; // r28

    {
        // Range: 0x800DC638 -> 0x800DC7D0
        // Local variables
        float previousHitPoints; // f31

        {
            // Range: 0x800DC64C -> 0x800DC6BC
            // Local variables
            float newHitPoints; // f30
            float damageMultiplier; // f0

            {
                // Range: 0x800DC68C -> 0x800DC6B8
                // Local variables
                class EventNotifyReachedHitpoint params; // r1+0x8
            }
        }
        {
            // Range: 0x800DC714 -> 0x800DC7B0
            // Local variables
            class xVec3 playerPos; // r1+0x10
        }
    }
    {
        // Range: 0x800DC7D0 -> 0x800DC814
        // Local variables
        float previousHitPoints; // f30
    }
}
