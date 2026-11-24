/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCTrapProjectile.cpp
*/
class zNPCEntityParams sEntParams; // size: 0x44, address: 0x807922E8
class zNPCCombatParams sCombatParams; // size: 0xC, address: 0x8079232C
static class zNPCHitReactionTable sTrapProjectileCombatReactionTable[1]; // size: 0x8, address: 0x806FBB98
// Range: 0x801433D0 -> 0x801435F0
void zNPCTrapProjectile::Type::CreateAnimTable(class xAnimTable * table /* r27 */) {
}
// Range: 0x801435F0 -> 0x8014377C
void zNPCTrapProjectile::Type::InitTypeParameters() {
    // References
    // -> static class zNPCHitReactionTable sTrapProjectileCombatReactionTable[1];
    // -> class zNPCEntityParams sEntParams;
    // -> class zNPCCombatParams sCombatParams;
    // -> class zCreator _inst;
    // -> struct {} __vt__46zCreator<11,14zNPCExtraModel,14zNPCExtraModel>;
    // -> class zCreator _inst;
    // -> struct {} __vt__37zCreator<7,10zNPCCombat,10zNPCCombat>;
    // -> class zCreator _inst;
    // -> struct {} __vt__45zCreator<2,20zNPCMainStateHandler,9zNPCLogic>;
    // -> class zCreator _inst;
    // -> struct {} __vt__45zCreator<6,14zNPCPerception,14zNPCPerception>;
    // -> class zCreator _inst;
    // -> struct {} __vt__41zCreator<8,12zNPCSteering,12zNPCSteering>;
    // -> class zCreator _inst;
    // -> struct {} __vt__37zCreator<3,10zNPCEntity,10zNPCEntity>;
}
// Range: 0x80143780 -> 0x801437E0
enum ZeroPointState zNPCTrapProjectile::GetZeroPointState() {
    // Local variables
    class zNPCControl * control; // r0
}
// Range: 0x801437E0 -> 0x80143864
enum ZeroPointFacing zNPCTrapProjectile::GetZeroPointFacing() {
    // Local variables
    class zNPCControl * control; // r31

    {
        // Range: 0x80143804 -> 0x8014384C
        // Local variables
        class zZeroPointPullAction * pullAction; // r0
    }
}
// signature: zNPCTrapProjectile::Initialize(const zNPCStatus *)
// Range: 0x80143870 -> 0x801438CC
void zNPCTrapProjectile::Initialize(class zNPCTrapProjectile * this /* r31 */) {
    // References
    // -> class zNPCEntityParams sEntParams;
}
// signature: zNPCTrapProjectile::Activate(const zNPCStatus *)
// Range: 0x801438D0 -> 0x80143B50
bool zNPCTrapProjectile::Activate(class zNPCTrapProjectile * this /* r28 */) {
    // Local variables
    class zCharacterAsset * charAsset; // r0
    class TrapProjectile * asset; // r0

    {
        // Range: 0x801438EC -> 0x801439FC
        // Local variables
        int i; // r29

        {
            // Range: 0x801439E4 -> 0x801439FC
            // Local variables
            class zNPCEve * eveRef; // r0
        }
    }

    // References
    // -> class zNPCCombatParams sCombatParams;
    // -> class _Creator creator;
    // -> struct {} __vt__Q227zNPCTrapProjectileMainState8_Creator;
    // -> class xGlobals * xglobals;
}
// Range: 0x80143B50 -> 0x80143B94
bool zNPCTrapProjectile::CheckSceneSetupValidity() {
}
// Range: 0x80143BA0 -> 0x80143CE0
void zNPCTrapProjectile::Update(class zNPCTrapProjectile * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80143CE0 -> 0x80143D44
void zNPCTrapProjectile::Render(class zNPCTrapProjectile * this /* r31 */) {
}
// signature: zNPCTrapProjectile::PlayerTargetable(int)
// Range: 0x80143D50 -> 0x80143D98
bool zNPCTrapProjectile::PlayerTargetable() {
    // References
    // -> class xGlobals * xglobals;
}
// signature: zNPCTrapProjectileMainState::objectInteractionCallback(hkpCharacterProxy *, const hkpCharacterObjectInteractionEvent &, hkpCharacterObjectInteractionResult &)
// Range: 0x80143DA0 -> 0x80143EA0
void zNPCTrapProjectileMainState::objectInteractionCallback() {
    // Local variables
    class hkpRigidBody * rb; // r6
    class xBase * base; // r10
    class zProjectile * projectile; // r0
    float speed; // f0

    {
        // Range: 0x80143E1C -> 0x80143E90
        // Local variables
        class EventActionHit params; // r1+0x8
    }

    // References
    // -> float hkInfinity;
}
// signature: zNPCTrapProjectileMainState::ControlUpdate(float)
// Range: 0x80143EA0 -> 0x80143EAC
class zNPCStateResult zNPCTrapProjectileMainState::ControlUpdate() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x80143EB0 -> 0x80143F48
class zNPCStateResult zNPCTrapProjectileMainState::Enter(class zNPCTrapProjectileMainState * this /* r31 */) {
    // Local variables
    class TrapProjectile * asset; // r6
}
// Range: 0x80143F50 -> 0x801441B0
void zNPCTrapProjectileMainState::Exit(class zNPCTrapProjectileMainState * this /* r31 */) {
    // Local variables
    int stateID; // r0

    {
        // Range: 0x80143F7C -> 0x80144064
        // Local variables
        enum ZeroPointState zeroPointState; // r0
        class zCommonPlayer * zeroPointTarget; // r29
        class zNPCTrapProjectile * turret; // r30
    }

    // References
    // -> class zFactory factory;
}
// signature: zNPCTrapProjectileMainState::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x801441B0 -> 0x8014449C
class zNPCStateResult zNPCTrapProjectileMainState::ChildDone(class zNPCTrapProjectileMainState * this /* r28 */, int childStateID /* r31 */, class zNPCStateResult * childStateResult /* r29 */) {
    {
        // Range: 0x8014426C -> 0x80144334
        // Local variables
        bool shootZeroPoint; // r29
        class TrapProjectile * turretAsset; // r0
        class zNPCTrapProjectile * turret; // r0

        {
            // Range: 0x801442B0 -> 0x80144308
            // Local variables
            float distance; // f0
            class xVec3 displacement; // r1+0x8
            class xEnt * target; // r0
        }
    }
    {
        // Range: 0x80144398 -> 0x80144414
        // Local variables
        class xEnt * target; // r29
    }

    // References
    // -> class zNPCStateResult Success;
    // -> class zNPCStateResult NotReachable;
    // -> class zNPCStateResult Reachable;
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult ControlForced;
}
// Range: 0x801444A0 -> 0x801449DC
class zNPCStateResult zNPCTrapProjectileMainState::EventProc(class zNPCTrapProjectileMainState * this /* r25 */, class xBase * from /* r26 */, class xBase * to /* r27 */, unsigned int to_event /* r28 */, class EventAny * genericParams /* r29 */) {
    // Local variables
    class zNPCBase * npcBase; // r30

    {
        // Range: 0x80144514 -> 0x80144954
        // Local variables
        class zCombatDamageInfo combatDamageInfo; // r1+0x28
    }

    // References
    // -> class zGlobals globals;
    // -> class zSoundFX * pEventSfx;
    // -> class zOneLinerSystem gOneLinerSystem;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_Null;
    // -> class zNPCStateResult NotDone;
}
// Range: 0x801449E0 -> 0x80144FA4
class zNPCStateResult zNPCTrapProjectileMainState::NPCGetsDamage(class zNPCTrapProjectileMainState * this /* r27 */, class zNPCGetsDamageInfo * npcDamageInfo /* r25 */) {
    // Local variables
    int stateID; // r0

    {
        // Range: 0x80144A3C -> 0x80144B28
        // Local variables
        enum ZeroPointState zeroPointState; // r0
        class zCommonPlayer * zeroPointTarget; // r29
        class zNPCTrapProjectile * turret; // r28
    }

    // References
    // -> class zGlobals globals;
    // -> class zSoundFX * pEventSfx;
    // -> class zOneLinerSystem gOneLinerSystem;
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
    // -> class zNPCStateResult ControlForced;
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCTrapProjectileMainState::GetHitDamage(const xBase *)
// Range: 0x80144FB0 -> 0x80145050
float zNPCTrapProjectileMainState::GetHitDamage() {
    // Local variables
    float damage; // f1

    {
        // Range: 0x80144FBC -> 0x80144FE8
        // Local variables
        class zPlayer * player; // r0
    }
}
// Range: 0x80145050 -> 0x801453F8
class zNPCStateResult zNPCTrapProjectileMainState::PushOffPercState(class zNPCTrapProjectileMainState * this /* r28 */) {
    // Local variables
    unsigned int targetBitMask; // r6

    {
        // Range: 0x80145320 -> 0x80145320
        // Local variables
        unsigned int zeroed; // r8
    }

    // References
    // -> struct {} __vt__27zNPCActivePerceptionControl;
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
}
// Range: 0x80145400 -> 0x8014582C
class zNPCStateResult zNPCTrapProjectileMainState::PushOnPercState(class zNPCTrapProjectileMainState * this /* r28 */) {
    // Local variables
    unsigned int targetBitMask; // r6

    {
        // Range: 0x8014574C -> 0x801457F0
        // Local variables
        unsigned int zeroed; // r10
    }

    // References
    // -> class zNPCStateResult Reachable;
    // -> struct {} __vt__27zNPCActivePerceptionControl;
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
}
// Range: 0x80145830 -> 0x80145AAC
class zNPCStateResult zNPCTrapProjectileMainState::PushChargeUpPercState(class zNPCTrapProjectileMainState * this /* r29 */) {
    // References
    // -> class zNPCStateResult NotReachable;
    // -> struct {} __vt__27zNPCActivePerceptionControl;
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
}
// Range: 0x80145AB0 -> 0x80145F70
class zNPCStateResult zNPCTrapProjectileMainState::PushShootPercState(class zNPCTrapProjectileMainState * this /* r28 */) {
    // Local variables
    class ShootInfo info; // r1+0x18

    {
        // Range: 0x80145CF4 -> 0x80145E3C
        // Local variables
        int i; // r3
    }

    // References
    // -> class zNPCStateResult NotReachable;
    // -> struct {} __vt__27zNPCActivePerceptionControl;
    // -> struct {} __vt__21zNPCShootLaserControl;
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
}
// Range: 0x80145F70 -> 0x8014623C
class zNPCStateResult zNPCTrapProjectileMainState::PushZeroPointShootState(class zNPCTrapProjectileMainState * this /* r29 */) {
    // Local variables
    class zNPCTrapProjectile * turret; // r0
    class TrapProjectile * turretAsset; // r30
    class zZeroPointFireActionInfo info; // r1+0x8
    float * fireTime; // r0

    // References
    // -> struct {} __vt__20zZeroPointFireAction;
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
}
// Range: 0x80146240 -> 0x801465EC
class zNPCStateResult zNPCTrapProjectileMainState::PushZeroPointPullState(class zNPCTrapProjectileMainState * this /* r29 */) {
    // Local variables
    class zNPCTrapProjectile * turret; // r0
    class TrapProjectile * turretAsset; // r27
    class zZeroPointPullActionInfo info; // r1+0x44
    class xVec3 targetPos; // r1+0x38
    class xVec3 targetOffset; // r1+0x2C
    class xVec3 myPos; // r1+0x20

    // References
    // -> struct {} __vt__20zZeroPointPullAction;
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
}
// Range: 0x801465F0 -> 0x80146998
class zNPCStateResult zNPCTrapProjectileMainState::PushZeroPointHoldState(class zNPCTrapProjectileMainState * this /* r29 */) {
    // Local variables
    class zNPCTrapProjectile * turret; // r0
    class zZeroPointHoldActionInfo info; // r1+0x48
    class xVec3 targetPos; // r1+0x38
    class xVec3 targetOffset; // r1+0x2C
    class xVec3 myPos; // r1+0x20

    // References
    // -> struct {} __vt__20zZeroPointHoldAction;
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
}
// Range: 0x801469A0 -> 0x80146E58
class zNPCStateResult zNPCTrapProjectileMainState::PushZeroPointThrowState(class zNPCTrapProjectileMainState * this /* r29 */) {
    // Local variables
    class zNPCTrapProjectile * turret; // r0
    class TrapProjectile * turretAsset; // r27
    class zZeroPointThrowActionInfo info; // r1+0x50

    {
        // Range: 0x80146A44 -> 0x80146AE0
        // Local variables
        class xVec3 throwDirection; // r1+0x44
    }
    {
        // Range: 0x80146AE4 -> 0x80146C80
        // Local variables
        float horizontalGoalLength; // f4
        float cosine; // f0
        float sine; // f0
        float oldZ; // f27
        float oldX; // f28
        float angle; // f31
        float height; // f0
        class xVec3 myPos; // r1+0x20
        class xVec3 targetOffset; // r1+0x2C
        class xVec3 targetPos; // r1+0x38
    }

    // References
    // -> struct {} __vt__21zZeroPointThrowAction;
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
}
// Range: 0x80146E60 -> 0x801470DC
class zNPCStateResult zNPCTrapProjectileMainState::PushCooldownPercState(class zNPCTrapProjectileMainState * this /* r29 */) {
    // References
    // -> class zNPCStateResult NotReachable;
    // -> struct {} __vt__27zNPCActivePerceptionControl;
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
}
