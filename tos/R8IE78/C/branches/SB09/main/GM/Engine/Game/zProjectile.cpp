/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zProjectile.cpp
*/
float npcAwareRadius; // size: 0x4, address: 0x806C1D60
unsigned int dbtw_SB_ProjectilePuck_yAngleDestroy; // size: 0x4, address: 0x806C1D64
float dbtw_Bomb_QuicksandLife; // size: 0x4, address: 0x806C1D68
float dbtw_Bomb_LinearDamp; // size: 0x4, address: 0x806C1D6C
float dbtw_SpinArcHeight; // size: 0x4, address: 0x806C1D70
float dbtw_SpinArcDistance; // size: 0x4, address: 0x806C1D74
float targetOffset; // size: 0x4, address: 0x806C1D7C
float magicNumber; // size: 0x4, address: 0x806C1D80
// Range: 0x80126580 -> 0x80126600
class Entity * Sext::ProjectileAsset::Create(class EntityHandleBase * handle /* r29 */, class ProjectileAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__20zProjectileAssetWrap;
}
// Range: 0x80126600 -> 0x80126630
void * zProjectileLaunchData::zProjectileLaunchData(class zProjectileLaunchData * this /* r31 */) {
}
// Range: 0x80126630 -> 0x80126684
void zProjectileLaunchData::Reset(class zProjectileLaunchData * this /* r31 */) {
}
// signature: zProjectileLaunchData::SetupLaunchToDirection(const xMat4x3, const xVec3 &, float)
// Range: 0x80126690 -> 0x801266F0
void zProjectileLaunchData::SetupLaunchToDirection(class zProjectileLaunchData * this /* r30 */, class xVec3 & launchDirection /* r31 */, float launchSpeed /* f31 */) {
}
// signature: zProjectileLaunchData::CalcLaunchVelToReachTarget_GivenTime(const xVec3 &, const xVec3 &, float, float, xVec3 &)
// Range: 0x801266F0 -> 0x80126744
void zProjectileLaunchData::CalcLaunchVelToReachTarget_GivenTime() {
}
// signature: zProjectile::Allocate(Sext::eProjectileType, unsigned int, Memory::Factory &)
// Range: 0x80126750 -> 0x8012684C
class zProjectile * zProjectile::Allocate(unsigned int projectileID /* r31 */) {
    // Local variables
    class zProjectile * result; // r3
}
// Range: 0x80126850 -> 0x80126900
void * zProjectile::zProjectile(class zProjectile * this /* r29 */) {
    // References
    // -> struct {} __vt__16zProjectileHavok;
    // -> struct {} __vt__11zProjectile;
}
// Range: 0x80126960 -> 0x80126B48
void zProjectile::Initialize(class zProjectile * this /* r28 */, class EntityHandleBase * projectileHandle /* r29 */, class zProjectileLaunchData & launchData /* r30 */, class xBase * owner /* r27 */) {
    // Local variables
    class ProjectileAsset * projectileAsset; // r0
    class xVec3 launchVector; // r1+0x20

    {
        // Range: 0x80126A28 -> 0x80126A9C
        // Local variables
        class zProjectileHavokCreateInfo havokCreateInfo; // r1+0x70
    }
    {
        // Range: 0x80126A9C -> 0x80126B08
        // Local variables
        class xVec3 acceleration; // r1+0x14
    }
}
// Range: 0x80126B50 -> 0x80126C80
void zProjectile::FindAssetFX(class zProjectile * this /* r31 */) {
}
// Range: 0x80126C80 -> 0x80126CF4
void zProjectile::Cleanup(class zProjectile * this /* r31 */) {
}
// Range: 0x80126D00 -> 0x80126F30
void zProjectile::Update(class zProjectile * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80126D74 -> 0x80126E54
        // Local variables
        class Finite_Lifetime_Struct & mortalityProps; // r0
    }
    {
        // Range: 0x80126EC0 -> 0x80126F10
        // Local variables
        class xMat4x3 curMatrix; // r1+0x10
    }
}
// Range: 0x80126F50 -> 0x80126F58
bool zProjectile::ReadyForCleanup() {
}
// Range: 0x80126F60 -> 0x80127070
void zProjectile::Explode(class zProjectile * this /* r31 */) {
}
// Range: 0x80127070 -> 0x8012731C
void zProjectile::ProcessCollision(class zProjectile * this /* r30 */, class ProjectileCollisionDetails & collisionInfo /* r31 */) {
    {
        // Range: 0x801270A0 -> 0x80127158
        // Local variables
        class xMat4x3 collTransform; // r1+0x50
    }
    {
        // Range: 0x80127158 -> 0x80127304
        // Local variables
        float dotYAxis; // f0
        class xMat4x3 collTransform; // r1+0x10

        {
            // Range: 0x80127290 -> 0x801272DC
            // Local variables
            class xOGModelRef * hitModelRef; // r5
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zProjectile::ComputeTargetLaunchVector(const xMat4x3, const xVec3 &, const xVec3 &, float, xVec3 &)
// Range: 0x80127320 -> 0x80127494
bool zProjectile::ComputeTargetLaunchVector(class zProjectile * this /* r27 */, class xMat4x3 & initialTransform /* r28 */, class xVec3 & targetPosition /* r29 */, float maxLaunchSpeed /* f31 */, class xVec3 & launchVector /* r30 */) {
    // Local variables
    float parabolaAngle; // f0
    class xParabola results; // r1+0x20
    class xVec3 velocityDirection; // r1+0x14
    class xVec3 xzProjectedUnitVector; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x801274A0 -> 0x801274A8
class xVec3 & zProjectile::GetPos() const {
}
// Range: 0x801274B0 -> 0x801275B4
bool zProjectile::IsSpawnInProgress(class zProjectile * this /* r28 */) {
    // Local variables
    class hkpWorld * havokWorld; // r31
    class hkpCollidable collA; // r1+0x8
    class hkpCollisionInput * input; // r30
    class hkpAllCdBodyPairCollector collector; // r1+0x58

    {
        // Range: 0x8012750C -> 0x80127590
        // Local variables
        int i; // r29

        {
            // Range: 0x8012750C -> 0x80127590
            // Local variables
            class xBase * hitObject; // r4
            class hkpRigidBody * hitRB; // r0
            class hkpPhantom * hitPhantom; // r0
        }
    }
}
// signature: zProjectileSBPuck::DestructibleCheck(xBase *)
// Range: 0x801275C0 -> 0x80127618
bool zProjectileSBPuck::DestructibleCheck() {
}
// Range: 0x80127620 -> 0x80127670
void * zProjectileSBPuck::zProjectileSBPuck(class zProjectileSBPuck * this /* r31 */) {
    // References
    // -> struct {} __vt__17zProjectileSBPuck;
}
// signature: zProjectileSBPuck::Initialize(World::EntityHandleBase *, const zProjectileLaunchData &, xBase *)
// Range: 0x80127670 -> 0x801278F4
void zProjectileSBPuck::Initialize(class zProjectileSBPuck * this /* r31 */) {
    // Local variables
    class hkVector4 v0; // r1+0x40
    class hkVector4 v1; // r1+0x30
    class hkpMassProperties properties; // r1+0x50
}
// Range: 0x80127900 -> 0x80127A44
void zProjectileSBPuck::InitForSpawn(class zProjectileSBPuck * this /* r28 */, class EntityHandleBase * projectileHandle /* r29 */, class zProjectileLaunchData & launchData /* r30 */, class xBase * owner /* r31 */) {
    // Local variables
    class zNPCEntity * npcOwner; // r0
    int npcFilter; // r26
    class zProjectileLaunchData launchCopy; // r1+0x8
}
// Range: 0x80127A90 -> 0x80127BC8
bool zProjectileSBPuck::IsSpawnInProgress(class zProjectileSBPuck * this /* r31 */) {
    // Local variables
    class hkpWorld * havokWorld; // r29
    class hkpCollidable collA; // r1+0x8
    class hkpCollisionInput * input; // r28
    class hkpAllCdBodyPairCollector collector; // r1+0x58

    {
        // Range: 0x80127AEC -> 0x80127BA4
        // Local variables
        int i; // r27

        {
            // Range: 0x80127AEC -> 0x80127BA4
            // Local variables
            class xBase * hitObject; // r4
            class hkpRigidBody * hitRB; // r0
            class hkpPhantom * hitPhantom; // r0
        }
    }
}
// Range: 0x80127BD0 -> 0x80127C20
void zProjectileSBPuck::Kill(class zProjectileSBPuck * this /* r31 */) {
}
// Range: 0x80127C20 -> 0x80127C64
void zProjectileSBPuck::SetToDie(class zProjectileSBPuck * this /* r31 */) {
}
// Range: 0x80127C70 -> 0x80127CBC
void zProjectileSBPuck::Cleanup(class zProjectileSBPuck * this /* r31 */) {
}
// Range: 0x80127CC0 -> 0x801280E8
void zProjectileSBPuck::Update(class zProjectileSBPuck * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80127D4C -> 0x80128068
        // Local variables
        class fixed_stack_list nearbyNPCs; // r1+0xA0
        float coneSizeDegrees; // f30
        class xVec3 coneDirAndLength; // r1+0x64
        class fixed_stack_list homingList; // r1+0x238
        class xVec3 angVel; // r1+0x70
        class xVec3 curVelNorm; // r1+0x7C
        class xVec3 curVel; // r1+0x88
        class xVec3 projPos; // r1+0x94

        {
            // Range: 0x80127E0C -> 0x80127EEC
            // Local variables
            bool targetValid; // r6
            class iterator homingListIt; // r1+0x20

            {
                // Range: 0x80127E64 -> 0x80127EEC
                // Local variables
                int offset; // r28

                {
                    // Range: 0x80127E8C -> 0x80127EE0
                    // Local variables
                    int i; // r29
                }
            }
        }
        {
            // Range: 0x80127F08 -> 0x80127FFC
            // Local variables
            class EventProjectileApproach eventParams; // r1+0x1C
            float dotProd; // f0
            class xVec3 sideVec; // r1+0x40
            class xVec3 toTarget; // r1+0x4C
            class xVec3 enemyPos; // r1+0x58
        }
        {
            // Range: 0x8012801C -> 0x80128068
            // Local variables
            class EventProjectileApproach eventParams; // r1+0x18
        }
    }

    // References
    // -> float npcAwareRadius;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80128130 -> 0x8012885C
void zProjectileSBPuck::ProcessCollision(class zProjectileSBPuck * this /* r30 */, class ProjectileCollisionDetails & collisionInfo /* r31 */) {
    // Local variables
    class xVec3 newLinVel; // r1+0x4C
    float speed; // f31
    float yAngle; // f5
    float destroyAngle; // f30

    {
        // Range: 0x801281BC -> 0x80128250
        // Local variables
        class zCombatDamageInfo damageInfo; // r1+0x148
        enum eHitSource hitSource; // r0
        float hitDamage; // f31
    }
    {
        // Range: 0x801282F0 -> 0x801283C4
        // Local variables
        class zCombatDamageInfo damageInfo; // r1+0x10C
        enum eHitSource hitSource; // r0
        float hitDamage; // f31
        class zNPCEntity * npc; // r29
    }
    {
        // Range: 0x801283C4 -> 0x80128414
        // Local variables
        class EventActionHit hitParams; // r1+0xB8
    }
    {
        // Range: 0x80128414 -> 0x80128494
        // Local variables
        class zSBPlayer * sbPlayer; // r3
        class zCombatDamageInfo damageInfo; // r1+0xD0
        enum eHitSource hitSource; // r0
        float hitDamage; // f31
    }
    {
        // Range: 0x80128494 -> 0x801285D8
        // Local variables
        class xVec3 newVel; // r1+0x64
        float speed; // f0
        float angle; // f0
        float dotAmt; // f0
        class EventActionHit hitParams; // r1+0xA0
        class xVec3 reflectDir; // r1+0x70
        class xVec3 puckImpactPos; // r1+0x7C
        class zPuckReflector * pr; // r27
        class xVec3 vel; // r1+0x88
        class xVec3 predicted; // r1+0x94
    }
    {
        // Range: 0x801285EC -> 0x801286E0
        // Local variables
        class xVec3 curVel; // r1+0x58
    }

    // References
    // -> unsigned int dbtw_SB_ProjectilePuck_yAngleDestroy;
    // -> class xVec3 m_Null;
}
// Range: 0x80128860 -> 0x801288B0
enum eHitSource zProjectileSBPuck::GetHitSource() {
}
// Range: 0x801288B0 -> 0x80128900
void * zProjectileSBBombNPC::zProjectileSBBombNPC(class zProjectileSBBombNPC * this /* r31 */) {
    // References
    // -> struct {} __vt__20zProjectileSBBombNPC;
}
// signature: zProjectileSBBombNPC::Initialize(World::EntityHandleBase *, const zProjectileLaunchData &, xBase *)
// Range: 0x80128900 -> 0x80128AA0
void zProjectileSBBombNPC::Initialize(class zProjectileSBBombNPC * this /* r31 */) {
    // References
    // -> float dbtw_Bomb_LinearDamp;
}
// Range: 0x80128AA0 -> 0x80128C8C
void zProjectileSBBombNPC::Update(class zProjectileSBBombNPC * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r31

    {
        // Range: 0x80128B58 -> 0x80128C68
        // Local variables
        class hkVector4 torque; // r1+0x20
        class xVec3 camRelInputDir; // r1+0x30
        class xVec2 stickDir; // r1+0x10

        {
            // Range: 0x80128BAC -> 0x80128C14
            // Local variables
            float leftProject; // f0
        }
    }

    // References
    // -> float dbtw_Bomb_QuicksandLife;
}
// Range: 0x80128C90 -> 0x80128E48
void zProjectileSBBombNPC::ProcessCollision(class zProjectileSBBombNPC * this /* r31 */, class ProjectileCollisionDetails & collisionInfo /* r29 */) {
    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zProjectileSBBombNPC::CombatDamageCB(xEnt *, Sext::eHitSource)
// Range: 0x80128E50 -> 0x80128EA4
void zProjectileSBBombNPC::CombatDamageCB(class zProjectileSBBombNPC * this /* r31 */) {
}
// Range: 0x80128EB0 -> 0x80129138
void zProjectileSBBombNPC::UpdateFXStage(class zProjectileSBBombNPC * this /* r31 */) {
}
// Range: 0x80129140 -> 0x801291A8
void zProjectileSBBombNPC::Cleanup(class zProjectileSBBombNPC * this /* r31 */) {
}
// Range: 0x801291B0 -> 0x801292DC
void zProjectileSBBombNPC::Explode(class zProjectileSBBombNPC * this /* r31 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r0
}
// Range: 0x801292F0 -> 0x80129364
void zProjectileSBBombNPC::MountedBomb(class zProjectileSBBombNPC * this /* r31 */) {
    // Local variables
    class xVec3 playerFacing; // r1+0x8
}
// Range: 0x80129370 -> 0x801293C8
void zProjectileSBBombNPC::UnMountedBomb(class zProjectileSBBombNPC * this /* r30 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r0
}
// Range: 0x801293D0 -> 0x80129448
class xVec3 zProjectileSBBombNPC::GetPlayerPosition() {
    // Local variables
    class xMat4x3 curMat; // r1+0x18
    class xVec3 pos; // r1+0x8
}
// Range: 0x80129450 -> 0x801294CC
bool zProjectileSBBombNPC::IsWithinMovementTolerance(class xVec3 & v /* r31 */) {
    // Local variables
    class xVec3 displacement; // r1+0x20
    float distance; // f0
}
// Range: 0x801294D0 -> 0x8012951C
void * zProjectileSBClarinet::zProjectileSBClarinet(class zProjectileSBClarinet * this /* r31 */) {
    // References
    // -> struct {} __vt__21zProjectileSBClarinet;
}
// signature: zProjectileSBClarinet::Initialize(World::EntityHandleBase *, const zProjectileLaunchData &, xBase *)
// Range: 0x80129520 -> 0x801296B4
void zProjectileSBClarinet::Initialize(class zProjectileSBClarinet * this /* r31 */) {
    // Local variables
    class xVec3 playerVel; // r1+0x10

    // References
    // -> float magicNumber;
    // -> float targetOffset;
    // -> class xGlobals * xglobals;
}
// Range: 0x801296C0 -> 0x8012970C
void zProjectileSBClarinet::Cleanup(class zProjectileSBClarinet * this /* r31 */) {
}
// Range: 0x80129710 -> 0x80129800
void zProjectileSBClarinet::Update(class zProjectileSBClarinet * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xMat4x3 originalProjectileMat; // r1+0x30
    class xVec3 newAt; // r1+0x20
    class xVec3 sbHead; // r1+0x14
}
// Range: 0x80129800 -> 0x801298D0
void zProjectileSBClarinet::ProcessCollision(class zProjectileSBClarinet * this /* r30 */, class ProjectileCollisionDetails & collisionInfo /* r31 */) {
    // References
    // -> class xVec3 m_Null;
    // -> class xGlobals * xglobals;
}
