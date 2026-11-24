/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCEve.cpp
*/
class zNPCEntityParams sEntParams; // size: 0x44, address: 0x80791458
float ORBIT_SPEED; // size: 0x4, address: 0x806FB854
float ROTATE_SPEED; // size: 0x4, address: 0x806FB858
class xVec3 OFFSET; // size: 0xC, address: 0x806FB85C
class xVec3 STORKJUMP_OFFSET; // size: 0xC, address: 0x8079149C
class xVec3 CHEAT_OFFSET; // size: 0xC, address: 0x806FB868
float TIME_AT_CAMERA_AT; // size: 0x4, address: 0x806FB874
float TIME_AT_WALLE; // size: 0x4, address: 0x806FB878
float TIME_AT_CAMERA; // size: 0x4, address: 0x806FB87C
float timer; // size: 0x4, address: 0x807914A8
int CAM_STATE; // size: 0x4, address: 0x807914AC
float LASER_PUTAWAY_TIME; // size: 0x4, address: 0x806FB880
float LASER_HOLD_FIRE_DELAY; // size: 0x4, address: 0x806FB884
float LASER_RAPID_FIRE_DELAY; // size: 0x4, address: 0x806FB888
float LASER_AUTO_TARGET_DIST_THRESHOLD; // size: 0x4, address: 0x806FB88C
float LASER_AUTO_TARGET_CUBE_TIME; // size: 0x4, address: 0x806FB890
float LASER_AUTO_TARGET_CUBE_START_TIME; // size: 0x4, address: 0x806FB894
float PLAYER_LOS_AVOIDANCE_ANGLE; // size: 0x4, address: 0x806FB898
float CAMERA_AVOIDANCE_ANGLE; // size: 0x4, address: 0x806FB89C
bool USE_LOCKED_OFFSET; // size: 0x1, address: 0x807914B0
bool USE_TELEPORT; // size: 0x1, address: 0x806FB8A0
unsigned int NPC_EVE_LastWalleFiredProjectileID; // size: 0x4, address: 0x807914B4
static float timeAccum; // size: 0x4, address: 0x807914B8
static float lastScale; // size: 0x4, address: 0x806FB968
// signature: zNPCEveNS::zNPCEveLOSHitCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x80151B30 -> 0x80151BE0
void zNPCEveNS::zNPCEveLOSHitCollector::addRayHit() {
    // Local variables
    class xBase * base; // r7
}
// Range: 0x80106A90 -> 0x80106B44
void zNPCEve::Type::InitTypeParameters() {
    // References
    // -> class zNPCEntityParams sEntParams;
    // -> class zCreator _inst;
    // -> struct {} __vt__45zCreator<2,20zNPCMainStateHandler,9zNPCLogic>;
    // -> class zCreator _inst;
    // -> struct {} __vt__41zCreator<8,12zNPCSteering,12zNPCSteering>;
    // -> class zCreator _inst;
    // -> struct {} __vt__37zCreator<3,10zNPCEntity,10zNPCEntity>;
}
// Range: 0x80106B50 -> 0x801079EC
void zNPCEve::Type::CreateAnimTable(class xAnimTable * table /* r27 */) {
}
// signature: zNPCEve::Initialize(const zNPCStatus *)
// Range: 0x80107BA0 -> 0x80107BF4
void zNPCEve::Initialize(class zNPCEve * this /* r31 */) {
    // References
    // -> class zNPCEntityParams sEntParams;
}
// signature: zNPCEve::Deactivate(zNPCStatus *)
// Range: 0x80107C00 -> 0x80107C98
void zNPCEve::Deactivate(class zNPCEve * this /* r30 */) {
}
// signature: zNPCEve::Activate(const zNPCStatus *)
// Range: 0x80107CA0 -> 0x80107FC4
bool zNPCEve::Activate(class zNPCEve * this /* r31 */) {
    {
        // Range: 0x80107E38 -> 0x80107E3C
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x80107E74 -> 0x80107E74
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x80107EC8 -> 0x80107EC8
        // Local variables
        int i; // r0
    }

    // References
    // -> class _Creator creator;
    // -> struct {} __vt__Q216zNPCEveMainState8_Creator;
    // -> class xGlobals * xglobals;
}
// Range: 0x80107FD0 -> 0x80107FD8
bool zNPCEve::CheckSceneSetupValidity() {
}
// Range: 0x80107FE0 -> 0x801083E8
void zNPCEve::ResetPosition(class zNPCEve * this /* r29 */) {
    // Local variables
    class xVec3 newPos; // r1+0xB0
    class zNPCEntity * npcEnt; // r0
    class hkpCharacterProxy * characterProxy; // r28

    {
        // Range: 0x801082C4 -> 0x8010831C
        // Local variables
        class hkVector4 newVel4; // r1+0x90
        class hkVector4 newPos4; // r1+0xA0
    }
}
// Range: 0x80108430 -> 0x801087E4
void zNPCEve::Update(class zNPCEve * this /* r30 */, float dt /* f30 */) {
    // Local variables
    class zWallePlayer * wPlayer; // r31

    {
        // Range: 0x80108460 -> 0x801087BC
        // Local variables
        bool cubeTargetUpdated; // r27
        bool autoTargetUpdated; // r26
        class xVec3 bonePos; // r1+0x8
    }
}
// Range: 0x80108820 -> 0x801089DC
void zNPCEve::SlaveNPCEndUpdate(class zNPCEve * this /* r30 */, float dt /* f31 */) {
    // References
    // -> bool USE_LOCKED_OFFSET;
}
// signature: zNPCEve::UpdateAutoTarget(float)
// Range: 0x801089F0 -> 0x80109024
void zNPCEve::UpdateAutoTarget(class zNPCEve * this /* r28 */) {
    // Local variables
    class xVec3 start; // r1+0x5C
    class xVec3 end; // r1+0x50
    class hkVector4 fromPos; // r1+0x40
    class hkVector4 toPos; // r1+0x30
    class hkpAllRayHitCollector hitCollector; // r1+0x70

    {
        // Range: 0x80108B98 -> 0x80108CC8
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x80108B98 -> 0x80108CC8
            // Local variables
            int j; // r25
            class xVec3 targetPos; // r1+0x1C
            class xEnt * ent; // r29
            class xBase * base; // reg65535

            {
                // Range: 0x80108BC8 -> 0x80108C00
                // Local variables
                class zNPCBase * npcBase; // r3
                class zNPCEntity * npcEnt; // r26
            }
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__21hkpAllRayHitCollector;
    // -> float LASER_AUTO_TARGET_DIST_THRESHOLD;
}
// Range: 0x80109050 -> 0x801091D0
void zNPCEve::UpdateAutoTargetCube(class zNPCEve * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class zWallePlayer * wPlayer; // r27

    {
        // Range: 0x8010906C -> 0x80109170
        // Local variables
        class zProjectile * targetedProj; // r25
        bool blockedLOS; // r26

        {
            // Range: 0x80109098 -> 0x80109128
            // Local variables
            class zProjectileHavok * targetedProjHavok; // r24

            {
                // Range: 0x801090BC -> 0x80109114
                // Local variables
                int j; // r23
            }
        }
    }
    {
        // Range: 0x80109170 -> 0x801091B0
        // Local variables
        class zProjectile * targetedProjectile; // r0
    }

    // References
    // -> float LASER_AUTO_TARGET_CUBE_TIME;
}
// Range: 0x801091D0 -> 0x801098DC
class xVec3 zNPCEve::GetAutoTargetCubeDir(class zNPCEve * this /* r25 */) {
    // Local variables
    class xVec3 targetDir; // r1+0x124
    class zWallePlayer * wPlayer; // r5
    class zProjectile * targetedProjectile; // r0
    int j; // r7
    class zLaser * l; // r0
    class xVec3 laserStartPos; // r1+0x118

    {
        // Range: 0x80109348 -> 0x80109848
        // Local variables
        void * tempVoid; // r1+0x10
        float hkContactDistance; // r1+0x14
        class hkVector4 hkContactPos; // r1+0x70
        class hkVector4 hkAimedPos; // r1+0x80
        class hkVector4 hkCurrentPos; // r1+0x90
        class xVec3 predTargetPos; // r1+0xC4
        class xVec3 down_2; // r1+0xD0
        float timeToImpact; // f5
        float distance2; // f0
        class xVec3 aimedPos; // r1+0xDC
        class xVec3 deltaPos; // r1+0xE8
        int iter; // r28
        float gravity; // f2
        class xVec3 currentTargetedObjectPos; // r1+0xF4
        class xVec3 rbVel; // r1+0x100
        class xVec3 rbPos; // r1+0x10C

        {
            // Range: 0x80109414 -> 0x80109460
            // Local variables
            class xVec3 scaledDown_2; // r1+0xA0
            class xVec3 scaledVel; // r1+0xAC
            class xVec3 laserToAimed; // r1+0xB8
        }
        {
            // Range: 0x80109684 -> 0x80109684
            // Local variables
            class hkMonitorStream * mStream; // r0

            {
                // Range: 0x80109684 -> 0x80109684
                // Local variables
                class TimerCommand * h; // r0
            }
        }
        {
            // Range: 0x80109704 -> 0x80109704
            // Local variables
            class hkMonitorStream * mStream; // r0

            {
                // Range: 0x80109704 -> 0x80109704
                // Local variables
                class TimerCommand * h; // r0
            }
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
}
// Range: 0x801098E0 -> 0x80109904
void zNPCEve::Render() {
}
// Range: 0x80109910 -> 0x80109BB8
bool zNPCEve::BlockedLOS(class zNPCEve * this /* r28 */, class xVec3 * destPos /* r29 */, class xBase * dest /* r30 */) {
    // Local variables
    class xVec3 npcCenter; // r1+0x40
    class hkVector4 from; // r1+0x30
    class hkVector4 to; // r1+0x20
    class zNPCEveLOSHitCollector losHitCollector; // r1+0x70

    {
        // Range: 0x80109AB4 -> 0x80109AB4
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x80109AB4 -> 0x80109AB4
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x80109B3C -> 0x80109B3C
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x80109B3C -> 0x80109B3C
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__Q29zNPCEveNS22zNPCEveLOSHitCollector;
}
// Range: 0x80109C00 -> 0x80109C6C
bool zNPCEve::StorkJumpAllowed() {
    // Local variables
    class zNPCControl * control; // r0
    int stateID; // r0
}
// Range: 0x80109C70 -> 0x80109D04
void zNPCEve::ResetStorkJumpFlags() {
    {
        // Range: 0x80109CA0 -> 0x80109CF4
        // Local variables
        class hkpShapePhantom * shapePhantom; // r3
    }
}
// Range: 0x80109D10 -> 0x80109DB8
bool zNPCEve::WantToShoot(class zNPCEve * this /* r30 */) {
    // Local variables
    class zWallePlayer * wPlayer; // r29
}
// Range: 0x80109DC0 -> 0x80109ED8
bool zNPCEve::WantToShootHold(class zNPCEve * this /* r27 */) {
    // Local variables
    class zWallePlayer * wPlayer; // r0
}
// Range: 0x80109EE0 -> 0x8010A0D8
void zNPCEve::ShootLaser(class zNPCEve * this /* r31 */) {
    // Local variables
    int j; // r6
    class zLaser * l; // r29
    class xVec3 * targetDir; // r28
    class zWallePlayer * wPlayer; // r27

    {
        // Range: 0x8010A040 -> 0x8010A0A0
        // Local variables
        class zProjectile * targetedProjectile; // r0
    }

    // References
    // -> float LASER_AUTO_TARGET_CUBE_START_TIME;
    // -> float LASER_AUTO_TARGET_CUBE_TIME;
    // -> float LASER_RAPID_FIRE_DELAY;
    // -> float LASER_HOLD_FIRE_DELAY;
}
// Range: 0x8010A0E0 -> 0x8010A170
void zNPCEve::UpgradeWeapon() {
    {
        // Range: 0x8010A0E0 -> 0x8010A0E0
        // Local variables
        int j; // r0
    }
}
// Range: 0x8010A170 -> 0x8010A2A8
void zNPCEve::ProcessIgnoredContacts(class zNPCEve * this /* r28 */, class hkArray * objectsWeHit /* r29 */) {
    {
        // Range: 0x8010A18C -> 0x8010A278
        // Local variables
        int i; // r30

        {
            // Range: 0x8010A18C -> 0x8010A278
            // Local variables
            class zNPCEntity * npcEnt; // r6
            class xBase * hitBase; // r4
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x8010A2B0 -> 0x8010A948
class zNPCStateResult zNPCEveMainState::Enter(class zNPCEveMainState * this /* r25 */) {
    // Local variables
    class zNPCEve * npcEve; // r26
    class hkpShapePhantom * shapePhantom; // r0
    class hkpPropertyValue prop; // r1+0x10

    // References
    // -> float PLAYER_LOS_AVOIDANCE_ANGLE;
    // -> float CAMERA_AVOIDANCE_ANGLE;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> bool USE_LOCKED_OFFSET;
    // -> struct {} __vt__31zNPCSteeringFollowPlayerControl;
    // -> struct {} __vt__23zNPCFollowPlayerControl;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCMoveToAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x8010A950 -> 0x8010AAFC
void zNPCEveMainState::Exit(class zNPCEveMainState * this /* r31 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x8010AB00 -> 0x8010BAB0
class zNPCStateResult zNPCEveMainState::ControlUpdate(class zNPCEveMainState * this /* r30 */, float dt /* f31 */) {
    // Local variables
    int curState; // r0
    class zNPCEve * npcEve; // r31

    {
        // Range: 0x8010AC70 -> 0x8010ADB0
        // Local variables
        class zWallePlayer * wPlayer; // r0
    }
    {
        // Range: 0x8010ADB0 -> 0x8010AEF0
        // Local variables
        class zWallePlayer * wPlayer; // r0
    }
    {
        // Range: 0x8010B010 -> 0x8010B1B4
        // Local variables
        class zWallePlayer * wPlayer; // r29
    }
    {
        // Range: 0x8010B1B4 -> 0x8010B358
        // Local variables
        class zWallePlayer * wPlayer; // r29
    }
    {
        // Range: 0x8010B704 -> 0x8010B7E4
        // Local variables
        class zWallePlayer * wPlayer; // r0
    }
    {
        // Range: 0x8010B7E4 -> 0x8010B8C4
        // Local variables
        class zWallePlayer * wPlayer; // r0
    }

    // References
    // -> float LASER_PUTAWAY_TIME;
    // -> class zNPCStateResult NotDone;
    // -> bool USE_LOCKED_OFFSET;
    // -> bool USE_TELEPORT;
    // -> class zNPCStateResult ControlForced;
}
// signature: zNPCEveMainState::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x8010BB30 -> 0x8010BD54
class zNPCStateResult zNPCEveMainState::ChildDone(class zNPCEveMainState * this /* r30 */, int childStateID /* r31 */) {
    {
        // Range: 0x8010BBF0 -> 0x8010BC7C
        // Local variables
        class zNPCEve * npcEve; // r31
    }
    {
        // Range: 0x8010BCF0 -> 0x8010BD28
        // Local variables
        class zNPCEve * npcEve; // r0
    }

    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult ControlForced;
}
// signature: zNPCEveMainState::EventProc(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8010BD60 -> 0x8010BEF4
class zNPCStateResult zNPCEveMainState::EventProc(class zNPCEveMainState * this /* r31 */) {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCEveMainState::NPCGetsDamage(const zNPCGetsDamageInfo &)
// Range: 0x8010BF00 -> 0x8010BF34
class zNPCStateResult zNPCEveMainState::NPCGetsDamage() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x8010BF40 -> 0x8010C998
class zNPCStateResult zNPCEveMainState::HandleDamage(class zNPCEveMainState * this /* r27 */, class xBase * hitBase /* r28 */) {
    // Local variables
    int curChildID; // r0

    // References
    // -> struct {} __vt__18zNPCEveDamageState;
    // -> struct {} __vt__31zNPCSteeringFollowPlayerControl;
    // -> struct {} __vt__23zNPCFollowPlayerControl;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCMoveToAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
    // -> class zNPCStateResult ControlForced;
    // -> class zNPCStateResult NotDone;
}
// Range: 0x8010C9A0 -> 0x8010CBF8
class zNPCStateResult zNPCEveMainState::PushIdleState(class zNPCEveMainState * this /* r27 */) {
    // References
    // -> float PLAYER_LOS_AVOIDANCE_ANGLE;
    // -> float CAMERA_AVOIDANCE_ANGLE;
    // -> struct {} __vt__36zNPCEveFollowPlayerWithFidgetControl;
    // -> struct {} __vt__25zNPCIdleWithFidgetControl;
    // -> class zFactory factory;
    // -> bool USE_LOCKED_OFFSET;
}
// Range: 0x8010CC00 -> 0x8010CE48
class zNPCStateResult zNPCEveMainState::PushMoveState(class zNPCEveMainState * this /* r30 */) {
    // References
    // -> float PLAYER_LOS_AVOIDANCE_ANGLE;
    // -> float CAMERA_AVOIDANCE_ANGLE;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__14zNPCIdleAction;
    // -> class zFactory factory;
    // -> bool USE_LOCKED_OFFSET;
}
// Range: 0x8010CE50 -> 0x8010D068
class zNPCStateResult zNPCEveMainState::PushLaserDrawState(class zNPCEveMainState * this /* r30 */) {
    // References
    // -> float PLAYER_LOS_AVOIDANCE_ANGLE;
    // -> float CAMERA_AVOIDANCE_ANGLE;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
    // -> bool USE_LOCKED_OFFSET;
}
// Range: 0x8010D070 -> 0x8010D284
class zNPCStateResult zNPCEveMainState::PushLaserIdleState(class zNPCEveMainState * this /* r30 */) {
    // References
    // -> float PLAYER_LOS_AVOIDANCE_ANGLE;
    // -> float CAMERA_AVOIDANCE_ANGLE;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__14zNPCIdleAction;
    // -> class zFactory factory;
    // -> bool USE_LOCKED_OFFSET;
}
// Range: 0x8010D290 -> 0x8010D4D8
class zNPCStateResult zNPCEveMainState::PushLaserMoveState(class zNPCEveMainState * this /* r30 */) {
    // References
    // -> float PLAYER_LOS_AVOIDANCE_ANGLE;
    // -> float CAMERA_AVOIDANCE_ANGLE;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__14zNPCIdleAction;
    // -> class zFactory factory;
    // -> bool USE_LOCKED_OFFSET;
}
// Range: 0x8010D4E0 -> 0x8010D6FC
class zNPCStateResult zNPCEveMainState::PushLaserShootState(class zNPCEveMainState * this /* r30 */) {
    // References
    // -> float PLAYER_LOS_AVOIDANCE_ANGLE;
    // -> float CAMERA_AVOIDANCE_ANGLE;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
    // -> bool USE_LOCKED_OFFSET;
}
// Range: 0x8010D700 -> 0x8010D934
class zNPCStateResult zNPCEveMainState::PushLaserShootMoveState(class zNPCEveMainState * this /* r30 */) {
    // References
    // -> float PLAYER_LOS_AVOIDANCE_ANGLE;
    // -> float CAMERA_AVOIDANCE_ANGLE;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
    // -> bool USE_LOCKED_OFFSET;
}
// Range: 0x8010D940 -> 0x8010DB4C
class zNPCStateResult zNPCEveMainState::PushLaserPutawayState(class zNPCEveMainState * this /* r30 */) {
    // References
    // -> float PLAYER_LOS_AVOIDANCE_ANGLE;
    // -> float CAMERA_AVOIDANCE_ANGLE;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
    // -> bool USE_LOCKED_OFFSET;
}
// Range: 0x8010DB50 -> 0x8010DD84
class zNPCStateResult zNPCEveMainState::PushStorkJumpStartState(class zNPCEveMainState * this /* r30 */) {
    // Local variables
    class zNPCEve * npcEve; // r4
    class hkpShapePhantom * shapePhantom; // r3

    {
        // Range: 0x8010DCF8 -> 0x8010DD48
        // Local variables
        class hkpPropertyValue prop; // r1+0x10
    }

    // References
    // -> struct {} __vt__26zNPCEveStorkJumpStartState;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// Range: 0x8010DD90 -> 0x8010DF30
class zNPCStateResult zNPCEveMainState::PushStorkJumpActiveState(class zNPCEveMainState * this /* r28 */) {
    // References
    // -> struct {} __vt__25zNPCEveStorkJumpIdleState;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// Range: 0x8010DF30 -> 0x8010E13C
class zNPCStateResult zNPCEveMainState::PushStorkJumpLandState(class zNPCEveMainState * this /* r30 */) {
    // References
    // -> float PLAYER_LOS_AVOIDANCE_ANGLE;
    // -> float CAMERA_AVOIDANCE_ANGLE;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
    // -> bool USE_LOCKED_OFFSET;
}
// Range: 0x8010E140 -> 0x8010E34C
class zNPCStateResult zNPCEveMainState::PushStorkJumpLandHardState(class zNPCEveMainState * this /* r30 */) {
    // References
    // -> float PLAYER_LOS_AVOIDANCE_ANGLE;
    // -> float CAMERA_AVOIDANCE_ANGLE;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
    // -> bool USE_LOCKED_OFFSET;
}
// Range: 0x8010E350 -> 0x8010E55C
class zNPCStateResult zNPCEveMainState::PushStorkJumpHitDropState(class zNPCEveMainState * this /* r30 */) {
    // References
    // -> float PLAYER_LOS_AVOIDANCE_ANGLE;
    // -> float CAMERA_AVOIDANCE_ANGLE;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
    // -> bool USE_LOCKED_OFFSET;
}
// Range: 0x8010E560 -> 0x8010E760
class zNPCStateResult zNPCEveMainState::PushCheatState(class zNPCEveMainState * this /* r30 */) {
    // References
    // -> struct {} __vt__17zNPCEveCheatState;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// Range: 0x8010E760 -> 0x8010E8D4
class zNPCStateResult zNPCEveMainState::PushTeleportState(class zNPCEveMainState * this /* r29 */) {
    // Local variables
    class xVec3 destPos; // r1+0x14
    class xVec3 destDir; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> struct {} __vt__17zNPCTeleportState;
    // -> class zFactory factory;
}
// Range: 0x8010E8E0 -> 0x8010E980
class zNPCStateResult zNPCEveMainState::PushAimIdleState(class zNPCEveMainState * this /* r30 */) {
    // References
    // -> struct {} __vt__27zNPCEveAimWithFidgetControl;
    // -> class zFactory factory;
}
// Range: 0x8010E980 -> 0x8010EB3C
class zNPCStateResult zNPCEveMainState::PushAimMoveState(class zNPCEveMainState * this /* r28 */) {
    // References
    // -> struct {} __vt__15zNPCEveAimState;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// Range: 0x8010EB40 -> 0x8010ECEC
class zNPCStateResult zNPCEveMainState::PushAimLaserDrawState(class zNPCEveMainState * this /* r28 */) {
    // References
    // -> struct {} __vt__15zNPCEveAimState;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// Range: 0x8010ECF0 -> 0x8010EE9C
class zNPCStateResult zNPCEveMainState::PushAimLaserState(class zNPCEveMainState * this /* r28 */) {
    // References
    // -> struct {} __vt__15zNPCEveAimState;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// Range: 0x8010EEA0 -> 0x8010F054
class zNPCStateResult zNPCEveMainState::PushAimLaserShootState(class zNPCEveMainState * this /* r28 */) {
    // References
    // -> struct {} __vt__15zNPCEveAimState;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// Range: 0x8010F060 -> 0x8010F20C
class zNPCStateResult zNPCEveMainState::PushAimLaserPutawayState(class zNPCEveMainState * this /* r28 */) {
    // References
    // -> struct {} __vt__15zNPCEveAimState;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// Range: 0x8010F210 -> 0x8010F2FC
bool zNPCEveMainState::ForceTeleport() {
    // Local variables
    class zNPCEve * npcEve; // r29
    class xVec3 dist; // r1+0x8
    class zCam * cam; // r0
}
// Range: 0x8010F300 -> 0x8010F30C
bool zNPCEveMainState::BeginStorkJumpCheck() {
}
// Range: 0x8010F310 -> 0x8010F328
bool zNPCEveMainState::ForceEndStorkJump() {
}
// Range: 0x8010F330 -> 0x8010F3BC
void zNPCEveMainState::EndStorkJump() {
    // Local variables
    class zNPCEve * npcEve; // r3
    class hkpShapePhantom * shapePhantom; // r3
}
// signature: zNPCEveMainState::FindHitDirection(zNPCEveMainState::HitDirection &, xBase *)
// Range: 0x8010F3C0 -> 0x8010F5F0
void zNPCEveMainState::FindHitDirection(enum HitDirection * hitDirection /* r29 */) {
    // Local variables
    class xEnt * ent; // r6

    {
        // Range: 0x8010F450 -> 0x8010F5BC
        // Local variables
        float leftDot; // f0
        float atDot; // f0
        float cos45; // f0
        class xVec3 hitDir; // r1+0x8
    }
}
// Range: 0x8010F5F0 -> 0x8010F638
bool zNPCEveMainState::IsAiming() {
}
// Range: 0x8010F640 -> 0x8010FD4C
void zNPCEveMainState::CreateEveMotion(class zNPCBase * owner /* r19 */, float dt /* f28 */, float targetScale /* f29 */, bool disableScale /* r20 */, bool updateWithTeleport /* r21 */) {
    // Local variables
    class zPlayerInput * pad; // r27
    int viewportIndex; // r26
    class zCamFirstPerson * cfps; // r25
    float orbitSpeed; // f0
    float x; // f0
    float offestY; // f26
    float offsetH; // f25
    float blendY; // f24
    float bobSpeed; // f31
    float bobAmp; // f30
    class zNPCEntity * compNPCEntity; // r24
    class xMat4x3 * npcMat; // r23
    class xMat4x3 scaleMat; // r1+0x168
    class xMat4x3 tmpMat; // r1+0x128
    class xVec3 oldpos; // r1+0x118
    class zWallePlayer * wPlayer; // r22
    class xVec3 playerPos; // r1+0x10C
    class xVec3 moveDir; // r1+0x100
    float oldY; // f27
    class xVec3 newPos; // r1+0xF4
    class xVec3 newForward; // r1+0xE8

    {
        // Range: 0x8010FA30 -> 0x8010FBD0
        // Local variables
        class xVec3 * oldAt; // r27

        {
            // Range: 0x8010FA34 -> 0x8010FA70
            // Local variables
            class zProjectile * targetedProjectile; // r0
        }
        {
            // Range: 0x8010FAD0 -> 0x8010FB18
            // Local variables
            class zProjectile * targetedProjectile; // r3

            {
                // Range: 0x8010FAD8 -> 0x8010FB14
                // Local variables
                class xVec3 tempVec; // r1+0xDC
            }
        }
    }
    {
        // Range: 0x8010FBD0 -> 0x8010FC40
        // Local variables
        class xVec3 targetLocation; // r1+0xC4
        class xVec3 targetDirection; // r1+0xD0
        float toHitDistance; // r1+0x8
    }

    // References
    // -> float TIME_AT_CAMERA_AT;
    // -> float LASER_AUTO_TARGET_CUBE_TIME;
    // -> unsigned int NPC_EVE_LastWalleFiredProjectileID;
    // -> int CAM_STATE;
    // -> float timer;
    // -> static float lastScale;
    // -> static float timeAccum;
    // -> class xVec3 m_UnitAxisY;
    // -> float ORBIT_SPEED;
    // -> class xGlobals * xglobals;
}
// Range: 0x8010FDD0 -> 0x8010FDFC
class zNPCStateResult zNPCEveStorkJumpStartState::Enter() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x8010FE00 -> 0x801102FC
class zNPCStateResult zNPCEveStorkJumpStartState::ActionUpdate(class zNPCEveStorkJumpStartState * this /* r29 */, float dt /* f31 */) {
    // Local variables
    class zNPCEve * npcEve; // r0
    class zWallePlayer * wPlayer; // r0
    class zNPCEntity * npcEntity; // r0
    class xVec3 npcPos; // r1+0x74
    class xVec3 newPos; // r1+0x68
    class xVec3 targetPos; // r1+0x5C

    {
        // Range: 0x8010FFE0 -> 0x80110184
        // Local variables
        float dpos; // f31
        float vel; // f1
        float diffDist; // f0
        class xVec3 diff; // r1+0x50
    }
    {
        // Range: 0x80110184 -> 0x801101D8
        // Local variables
        class hkVector4 newPos4; // r1+0x40
    }

    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Done;
    // -> class xVec3 STORKJUMP_OFFSET;
}
// signature: zNPCEveStorkJumpIdleState::ActionUpdate(float)
// Range: 0x80110300 -> 0x8011063C
class zNPCStateResult zNPCEveStorkJumpIdleState::ActionUpdate(class zNPCEveStorkJumpIdleState * this /* r29 */) {
    // Local variables
    class zNPCEve * npcEve; // r0
    class zWallePlayer * wPlayer; // r0
    class zNPCEntity * npcEntity; // r0
    class xMat4x3 jointJMatrix; // r1+0x30
    class xVec3 newPos; // r1+0x20

    {
        // Range: 0x801104B4 -> 0x80110548
        // Local variables
        class hkVector4 newPos4; // r1+0x10
    }

    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Done;
    // -> class xVec3 STORKJUMP_OFFSET;
}
// Range: 0x80110640 -> 0x80110970
class zNPCStateResult zNPCEveDamageState::Enter(class zNPCEveDamageState * this /* r30 */) {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x80110970 -> 0x80110F7C
class zNPCStateResult zNPCEveDamageState::ActionUpdate(class zNPCEveDamageState * this /* r30 */, float dt /* f31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Arrived;
    // -> class zNPCStateResult AnimDone;
    // -> class zNPCStateResult TimerDone;
}
// signature: zNPCEveCheatState::ActionUpdate(float)
// Range: 0x80110F80 -> 0x80111154
class zNPCStateResult zNPCEveCheatState::ActionUpdate() {
    // Local variables
    class zNPCEve * npcEve; // r0
    class zWallePlayer * wPlayer; // r0
    class zNPCEntity * npcEntity; // r0
    class xMat4x3 jointJMatrix; // r1+0x30
    class xVec3 newPos; // r1+0x20
    class hkVector4 newPos4; // r1+0x10

    // References
    // -> class zNPCStateResult NotDone;
    // -> class xVec3 CHEAT_OFFSET;
}
// Range: 0x80111160 -> 0x80111548
void zNPCEveFollowPlayerWithFidgetControl::Initialize(class zNPCEveFollowPlayerWithFidgetControl * this /* r30 */) {
    // References
    // -> struct {} __vt__31zNPCSteeringFollowPlayerControl;
    // -> struct {} __vt__23zNPCFollowPlayerControl;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCMoveToAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x80111550 -> 0x801115C0
void zNPCEveFollowPlayerWithFidgetControl::Deinitialize(class zNPCEveFollowPlayerWithFidgetControl * this /* r30 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x801115C0 -> 0x801118BC
void zNPCEveFollowPlayerWithFidgetControl::InitAnims(class zNPCEveFollowPlayerWithFidgetControl * this /* r29 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x801118C0 -> 0x8011190C
class zNPCStateResult zNPCEveFollowPlayerWithFidgetControl::Enter() {
}
// signature: zNPCEveFollowPlayerWithFidgetControl::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x80111910 -> 0x80111C90
class zNPCStateResult zNPCEveFollowPlayerWithFidgetControl::ChildDone(class zNPCEveFollowPlayerWithFidgetControl * this /* r28 */, int childStateID /* r29 */) {
    // Local variables
    int chosenRarity; // r30
    class zNPCEve * npcEve; // r3
    class zWallePlayer * wPlayer; // r26
    class xVec3 toPlayer; // r1+0x14
    class xVec3 xzPlayerRight; // r1+0x8
    class NPCEveExtraIdleTableEntry * entry; // r25
    unsigned int animID; // r7
    float blendTime; // f1

    // References
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x80111C90 -> 0x80111CB0
class zNPCStateResult zNPCEveAimState::Enter() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x80111CB0 -> 0x80111E4C
class zNPCStateResult zNPCEveAimState::ActionUpdate(class zNPCEveAimState * this /* r30 */, float dt /* f31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Done;
}
// Range: 0x80111E50 -> 0x801122A8
void zNPCEveAimState::UpdatePosition(float dt /* f31 */) {
    // Local variables
    class zNPCEve * npcEve; // r3
    class zWallePlayer * wPlayer; // r4
    class xVec3 playerPos; // r1+0x68
    class zCam * cam; // r0
    class xMat4x3 camMat; // r1+0x78
    class xVec3 camPos; // r1+0x5C
    class xVec3 camAt; // r1+0x50
    class xVec3 camToPlayer; // r1+0x44
    class xVec3 camToPlayerXZ; // r1+0x38
    float angle; // f2
    class xVec3 camRight; // r1+0x2C
    class xVec3 camToEve; // r1+0x20
    class xVec3 desiredPos; // r1+0x14
    class xVec3 instaVel; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x801122B0 -> 0x80112914
void zNPCEveAimState::UpdateLean(class zNPCEveAimState * this /* r28 */, float dt /* f30 */) {
    // Local variables
    class zNPCEve * npcEve; // r22
    class zWallePlayer * wPlayer; // r29
    class xVec2 stickInput; // r1+0x8
    class xVec3 camRelInput; // r1+0x34
    float stickMag; // f0
    float stickNormMag; // f0
    float npcNormXZ; // f0
    class xVec3 npcAtXZ; // r1+0x28
    class xVec3 npcRightXZ; // r1+0x1C
    float rightProject; // f0
    float leanLerpDest; // f1
    float blendDiff; // f3
    float aimLerpDest; // f3
    float atProject; // f0
    float driveLerpDest; // f1
}
// Range: 0x80112920 -> 0x80112AB0
void zNPCEveAimWithFidgetControl::Initialize(class zNPCEveAimWithFidgetControl * this /* r31 */) {
    // References
    // -> struct {} __vt__15zNPCEveAimState;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// Range: 0x80112AB0 -> 0x80112B20
void zNPCEveAimWithFidgetControl::Deinitialize(class zNPCEveAimWithFidgetControl * this /* r30 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x80112B20 -> 0x80112E1C
void zNPCEveAimWithFidgetControl::InitAnims(class zNPCEveAimWithFidgetControl * this /* r29 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80112E20 -> 0x80112E6C
class zNPCStateResult zNPCEveAimWithFidgetControl::Enter() {
}
// signature: zNPCEveAimWithFidgetControl::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x80112E70 -> 0x801131F0
class zNPCStateResult zNPCEveAimWithFidgetControl::ChildDone(class zNPCEveAimWithFidgetControl * this /* r28 */, int childStateID /* r29 */) {
    // Local variables
    int chosenRarity; // r30
    class zNPCEve * npcEve; // r3
    class zWallePlayer * wPlayer; // r26
    class xVec3 toPlayer; // r1+0x14
    class xVec3 xzPlayerRight; // r1+0x8
    class NPCEveExtraIdleTableEntry * entry; // r25
    unsigned int animID; // r7
    float blendTime; // f1

    // References
    // -> class xVec3 m_UnitAxisX;
}
