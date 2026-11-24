/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCBase.cpp
*/
class FactoryMemTypeLeakCBRegisterer MemTypeCBRegNPCLogic; // size: 0x1, address: 0x8075311C
class FactoryMemTypeLeakCBRegisterer MemTypeCBRegNPCEntity; // size: 0x1, address: 0x80753120
class FactoryMemTypeLeakCBRegisterer MemTypeCBRegNPCFX; // size: 0x1, address: 0x80753124
class FactoryMemTypeLeakCBRegisterer MemTypeCBRegNPCPerception; // size: 0x1, address: 0x80753128
class FactoryMemTypeLeakCBRegisterer MemTypeCBRegNPCCombat; // size: 0x1, address: 0x8075312C
class FactoryMemTypeLeakCBRegisterer MemTypeCBRegNPCSteering; // size: 0x1, address: 0x80753130
class FactoryMemTypeLeakCBRegisterer MemTypeCBRegNPCSteeringFlocking; // size: 0x1, address: 0x80753134
class FactoryMemTypeLeakCBRegisterer MemTypeCBRegNPCSteeringGeneric; // size: 0x1, address: 0x80753138
class FactoryMemTypeLeakCBRegisterer MemTypeCBRegNPCExtraModel; // size: 0x1, address: 0x8075313C
class FactoryMemTypeLeakCBRegisterer MemTypeCBRegNPCInfoNode; // size: 0x1, address: 0x80753140
class FactoryMemTypeLeakCBRegisterer MemTypeCBRegNPCQuickTimeCombat; // size: 0x1, address: 0x80753144
// signature: zNPCBase::zNPCBase(World::EntityHandleBase *)
// Range: 0x800D7E30 -> 0x800D7EF4
void * zNPCBase::zNPCBase(class zNPCBase * this /* r31 */) {
    {
        // Range: 0x800D7E64 -> 0x800D7E9C
        // Local variables
        unsigned int i; // r0
    }

    // References
    // -> struct {} __vt__8zNPCBase;
}
// signature: zNPCBase::EventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800D7F00 -> 0x800D7F2C
void zNPCBase::EventWrapper(class xBase * to /* r8 */, unsigned int to_event /* r0 */) {
}
// Range: 0x800D7F30 -> 0x800D837C
void zNPCBase::SystemEvent(class zNPCBase * this /* r27 */, class xBase * from /* r28 */, class xBase * to /* r29 */, unsigned int to_event /* r30 */, class EventAny * params /* r31 */) {
    {
        // Range: 0x800D81B8 -> 0x800D827C
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r24
        class EventActionDrivenBy * drivenParams; // r0
    }
    {
        // Range: 0x800D82CC -> 0x800D831C
        // Local variables
        float newHP; // f1
        class EventActionAdjustHitpoint * paramsSetHP; // r0
    }
}
// signature: zNPCBase::Load(const zNPCType *, Sext::NPCAsset *, unsigned int)
// Range: 0x800D83A0 -> 0x800D847C
void zNPCBase::Load(class zNPCBase * this /* r31 */, class NPCAsset * npcAsset /* r30 */) {
    {
        // Range: 0x800D83C8 -> 0x800D83D8
        // Local variables
        class xEntAsset * entass; // r0
    }
}
// Range: 0x800D8480 -> 0x800D8538
void zNPCBase::BaseInitialize(class zNPCBase * this /* r30 */) {
    {
        // Range: 0x800D8494 -> 0x800D84D0
        // Local variables
        class EntityHandleBase * handle; // r31
    }
}
// Range: 0x800D8540 -> 0x800D85C0
void zNPCBase::BaseUninitialize(class zNPCBase * this /* r30 */) {
}
// Range: 0x800D85C0 -> 0x800D8994
bool zNPCBase::BaseActivate(class zNPCBase * this /* r31 */) {
    {
        // Range: 0x800D8740 -> 0x800D87A8
        // Local variables
        unsigned int i; // r26
    }
    {
        // Range: 0x800D88D8 -> 0x800D891C
        // Local variables
        unsigned int i; // r26
    }

    // References
    // -> class Factory factory;
}
// Range: 0x800D89A0 -> 0x800D8CC4
void zNPCBase::BaseDeactivate(class zNPCBase * this /* r31 */) {
    {
        // Range: 0x800D89E4 -> 0x800D8A68
        // Local variables
        unsigned int i; // r25
    }

    // References
    // -> class Factory factory;
}
// Range: 0x800D8CD0 -> 0x800D8D74
void zNPCBase::BaseReset(class zNPCBase * this /* r30 */) {
}
// Range: 0x800D8D80 -> 0x800D8E30
void zNPCBase::BaseUpdate(class zNPCBase * this /* r30 */, float dt /* f31 */) {
    // Local variables
    bool wasAlive; // r31
}
// signature: zNPCBase::GetNPCLODPositions(xVec3 *)
// Range: 0x800D8E30 -> 0x800D8E80
unsigned int zNPCBase::GetNPCLODPositions() {
}
// Range: 0x800D8E80 -> 0x800D8FEC
void zNPCBase::AllAttached(class zNPCBase * this /* r29 */) {
    {
        // Range: 0x800D8F5C -> 0x800D8F98
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x800D8FF0 -> 0x800D9124
void zNPCBase::PreUpdateAllComponents(class zNPCBase * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800D9130 -> 0x800D9264
void zNPCBase::PostUpdateAllComponents(class zNPCBase * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800D9270 -> 0x800D93B4
void zNPCBase::PauseAllComponents(class zNPCBase * this /* r29 */) {
    {
        // Range: 0x800D9368 -> 0x800D93A0
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x800D93D0 -> 0x800D9514
void zNPCBase::ResumeAllComponents(class zNPCBase * this /* r29 */) {
    {
        // Range: 0x800D94C8 -> 0x800D9500
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x800D9530 -> 0x800D9740
bool zNPCBase::ForwardEventToComponents(class zNPCBase * this /* r27 */, class xBase * from /* r28 */, class xBase * to /* r29 */, unsigned int to_event /* r30 */, class EventAny * params /* r31 */) {
}
// Range: 0x800D9740 -> 0x800D9A58
void zNPCBase::DetachAllComponents(class zNPCBase * this /* r30 */, class zNPCStatus * npcStatus /* r31 */) {
    {
        // Range: 0x800D99D8 -> 0x800D9A44
        // Local variables
        unsigned int i; // r23
    }

    // References
    // -> class Factory factory;
}
// Range: 0x800D9A60 -> 0x800D9BC8
void zNPCBase::ResetAllComponents(class zNPCBase * this /* r28 */, class zNPCStatus * npcStatus /* r29 */) {
    {
        // Range: 0x800D9B78 -> 0x800D9BB4
        // Local variables
        unsigned int i; // r30
    }
}
// signature: zNPCBase::GetInfoNode(eNPCInfoNodeType)
// Range: 0x800D9BD0 -> 0x800D9BF8
class zNPCInfoNode * zNPCBase::GetInfoNode() {
    // Local variables
    class zNPCInfoNode * curInfoNode; // r3
}
// Range: 0x800D9C00 -> 0x800D9C78
void zNPCBase::UpdateInfoNodes(class zNPCBase * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class zNPCInfoNode * curInfoNode; // r31
}
// signature: zNPCBase::AttachInfoNode(zNPCInfoNode *, eNPCInfoNodeType)
// Range: 0x800D9C80 -> 0x800D9CA8
void zNPCBase::AttachInfoNode() {
}
// signature: zNPCBase::DetachInfoNode(eNPCInfoNodeType)
// Range: 0x800D9CB0 -> 0x800D9D40
void zNPCBase::DetachInfoNode() {
    // Local variables
    class zNPCInfoNode * prevInfoNode; // r5
    class zNPCInfoNode * curInfoNode; // r31

    // References
    // -> class Factory factory;
}
// Range: 0x800D9D40 -> 0x800D9DAC
void zNPCBase::DetachAllInfoNodes(class zNPCBase * this /* r28 */) {
    // Local variables
    class zNPCInfoNode * curInfoNode; // r30

    {
        // Range: 0x800D9D54 -> 0x800D9D90
        // Local variables
        class zNPCInfoNode * takeThisNodeOut; // r29
    }

    // References
    // -> class Factory factory;
}
// Range: 0x800D9DB0 -> 0x800D9E04
void zNPCBase::SetAnimState(char * playAnim /* r30 */) {
}
// signature: zNPCBase::GetPosition(xVec3 &)
// Range: 0x800D9E10 -> 0x800D9E3C
void zNPCBase::GetPosition(class zNPCBase * this /* r6 */) {
}
// signature: zNPCBase::Kill(bool)
// Range: 0x800D9E40 -> 0x800D9EC0
void zNPCBase::Kill() {
}
// Range: 0x800D9EC0 -> 0x800D9F24
void zNPCBase::Spawn(class zNPCBase * this /* r31 */) {
}
// signature: zNPCBase::CheckWallNetValidity(bool)
// Range: 0x800D9F30 -> 0x800DA04C
bool zNPCBase::CheckWallNetValidity(class zNPCBase * this /* r30 */) {
    // Local variables
    class xBase * b; // reg65535
    class zWallNet * npcWallNet; // r31
    class xMovePoint * jumpSpawnMP; // r5

    {
        // Range: 0x800D9FF4 -> 0x800DA034
        // Local variables
        class xVec3 npcPos; // r1+0x8
    }
}
// signature: zNPCBase::CheckIfModelHasCollisionModel(World::ModelInstanceAsset *)
// Range: 0x800DA200 -> 0x800DA240
bool zNPCBase::CheckIfModelHasCollisionModel() {
    // Local variables
    class ModelPrototypeEntity * proto; // r0
}
// Range: 0x800DA240 -> 0x800DA324
void zNPCBase::GiveNPCDamage(class zNPCBase * this /* r29 */, class xEnt * npcEnt /* r30 */, class zCombatDamageInfo & damageInfo /* r31 */) {
    // Local variables
    class zNPCGetsDamageInfo npcDamageInfo; // r1+0x8

    {
        // Range: 0x800DA24C -> 0x800DA310
        {
            // Range: 0x800DA2E0 -> 0x800DA304
            // Local variables
            class zPlayer * player; // r0
        }
    }
}
// signature: zNPCBase::HandleNPCDamage(xEnt *, const zCombatDamageInfo &, zNPCGetsDamageInfo *)
// Range: 0x800DA330 -> 0x800DA378
bool zNPCBase::HandleNPCDamage() {
}
// signature: zNPCBase::NPCGetsDamage(const zNPCGetsDamageInfo &)
// Range: 0x800DA380 -> 0x800DA3A0
void zNPCBase::NPCGetsDamage() {
}
// signature: zNPCBase::NPCGivesDamage(xEnt *, xEnt *, const zCombatDamageInfo &)
// Range: 0x800DA3A0 -> 0x800DA3E8
void zNPCBase::NPCGivesDamage(class zNPCBase * this /* r31 */) {
    // Local variables
    class zNPCGivesDamageInfo npcDamageInfo; // r1+0x8
}
// signature: zNPCBase::NPCGivesDamage(const zNPCGivesDamageInfo &)
// Range: 0x800DA3F0 -> 0x800DA410
void zNPCBase::NPCGivesDamage() {
}
// Range: 0x800DA410 -> 0x800DA430
class xVec3 * zNPCBase::GetPositionSound() const {
}
// Range: 0x800DA430 -> 0x800DA450
void zNPCBase::UpdateRender() {
}
// Range: 0x800DA450 -> 0x800DA574
class zPlayer * zNPCBase::GetClosestPlayerOnWallnet(class zNPCBase * this /* r25 */, bool ignoreHeight /* r26 */) {
    // Local variables
    class zWallNet * wallnet; // r29
    float minDist2; // f31
    class zPlayer * player; // r28

    {
        // Range: 0x800DA498 -> 0x800DA550
        // Local variables
        int i; // r27

        {
            // Range: 0x800DA49C -> 0x800DA550
            // Local variables
            float dist2; // f1
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
