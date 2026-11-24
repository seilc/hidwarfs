/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCMowbot.cpp
*/
class zNPCEntityParams sEntParams; // size: 0x44, address: 0x8079170C
class zNPCCombatParams sCombatParams; // size: 0xC, address: 0x80791750
bool hitPlayer; // size: 0x1, address: 0x8079175C
static float spawnFXWaitTimer; // size: 0x4, address: 0x80791760
// Range: 0x8011FF10 -> 0x80120460
void zNPCMowbot::Type::CreateAnimTable(class xAnimTable * table /* r27 */) {
}
// Range: 0x80120460 -> 0x80120588
void zNPCMowbot::Type::InitTypeParameters() {
    // References
    // -> class zNPCEntityParams sEntParams;
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
// Range: 0x80120590 -> 0x801205A0
void zNPCMowbot::Type::ScenePrepare() {
    // References
    // -> bool hitPlayer;
}
// signature: zNPCMowbot::Initialize(const zNPCStatus *)
// Range: 0x801205A0 -> 0x801205BC
void zNPCMowbot::Initialize() {
    // References
    // -> class zNPCEntityParams sEntParams;
}
// signature: zNPCMowbot::Activate(const zNPCStatus *)
// Range: 0x801205C0 -> 0x8012078C
bool zNPCMowbot::Activate(class zNPCMowbot * this /* r28 */) {
    // Local variables
    unsigned int numTargets; // r30

    {
        // Range: 0x801205DC -> 0x801206E4
        // Local variables
        int i; // r29

        {
            // Range: 0x801206CC -> 0x801206E4
            // Local variables
            class zNPCEve * eveRef; // r0
        }
    }

    // References
    // -> class zNPCCombatParams sCombatParams;
    // -> class _Creator creator;
    // -> struct {} __vt__Q219zNPCMowbotMainState8_Creator;
    // -> class xGlobals * xglobals;
}
// Range: 0x80120790 -> 0x801207E4
bool zNPCMowbot::CheckSceneSetupValidity(class zNPCMowbot * this /* r31 */) {
    // Local variables
    bool wallNetValid; // r0
}
// Range: 0x801207F0 -> 0x80120930
void zNPCMowbot::Update(class zNPCMowbot * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80120930 -> 0x80120954
void zNPCMowbot::Render() {
}
// Range: 0x80120960 -> 0x80120ABC
void zNPCMowbot::CubeDropped(class zNPCMowbot * this /* r28 */, class zProjectile * cube /* r29 */) {
    {
        // Range: 0x80120990 -> 0x80120A94
        // Local variables
        int curState; // r0
        class zNPCMowbotMainState * mainState; // r30

        {
            // Range: 0x801209C0 -> 0x80120A78
            // Local variables
            class zWallNetDestination dest; // r1+0x18
        }
    }

    // References
    // -> class zNPCStateResult ControlForced;
}
// signature: zNPCMowbotMainState::ControlUpdate(float)
// Range: 0x80120AC0 -> 0x80120ACC
class zNPCStateResult zNPCMowbotMainState::ControlUpdate() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x80120AD0 -> 0x80120C50
class zNPCStateResult zNPCMowbotMainState::Enter(class zNPCMowbotMainState * this /* r28 */) {
    // References
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// signature: zNPCMowbotMainState::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x80120C50 -> 0x80120E08
class zNPCStateResult zNPCMowbotMainState::ChildDone(class zNPCMowbotMainState * this /* r29 */, int childStateID /* r30 */, class zNPCStateResult * childStateResult /* r31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Killed;
    // -> class zNPCStateResult ControlForced;
    // -> class zNPCStateResult Damaged;
}
// Range: 0x80120E10 -> 0x80120E84
int zNPCMowbotMainState::CheckPerception() {
}
// Range: 0x80120E90 -> 0x801210A0
class zNPCStateResult zNPCMowbotMainState::PushEngageState(class zNPCMowbotMainState * this /* r30 */) {
    // References
    // -> class zNPCStateResult NotChargable;
    // -> class zNPCStateResult NotReachable;
    // -> struct {} __vt__27zNPCActivePerceptionControl;
    // -> struct {} __vt__25zNPCMowbotEngageMainState;
    // -> class zFactory factory;
}
// Range: 0x801210A0 -> 0x80121548
class zNPCStateResult zNPCMowbotMainState::PushSearchState(class zNPCMowbotMainState * this /* r29 */) {
    // Local variables
    unsigned int targetBitMask; // r5

    {
        // Range: 0x8012146C -> 0x8012150C
        // Local variables
        unsigned int zeroed; // r9
    }

    // References
    // -> class zNPCStateResult Chargable;
    // -> class zNPCStateResult NotReachable;
    // -> struct {} __vt__27zNPCActivePerceptionControl;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCMoveToAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x80121550 -> 0x80121854
class zNPCStateResult zNPCMowbotMainState::PushGoToCubeState(class zNPCMowbotMainState * this /* r29 */) {
    // References
    // -> struct {} __vt__23zNPCMowbotGoToCubeState;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCMoveToAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x80121860 -> 0x80121BA4
class zNPCStateResult zNPCMowbotMainState::PushCleanCubeState(class zNPCMowbotMainState * this /* r29 */) {
    // Local variables
    class xVec3 nullVec; // r1+0x18
    class zNPCSteeringDest cubeDestination; // r1+0x8

    // References
    // -> class xVec3 m_Null;
    // -> struct {} __vt__24zNPCMowbotCleanCubeState;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__14zNPCSeekAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x80121BC0 -> 0x801221B4
class zNPCStateResult zNPCMowbotMainState::PushCantReachState(class zNPCMowbotMainState * this /* r27 */) {
    // Local variables
    class zNPCMoveToAction * cantRachMoveState; // r28
    unsigned int targetBitMask; // r5

    {
        // Range: 0x801220C4 -> 0x80122178
        // Local variables
        unsigned int zeroed; // r9
    }

    // References
    // -> class zNPCStateResult Done;
    // -> struct {} __vt__27zNPCActivePerceptionControl;
    // -> struct {} __vt__20zNPCSequencerControl;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> struct {} __vt__24zNPCMowbotCantReachState;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCMoveToAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x801221C0 -> 0x80122344
class zNPCStateResult zNPCMowbotMainState::PushHitState(class zNPCMowbotMainState * this /* r28 */) {
    // References
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
}
// Range: 0x80122350 -> 0x801224DC
class zNPCStateResult zNPCMowbotMainState::PushStunnedState(class zNPCMowbotMainState * this /* r28 */) {
    // References
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
}
// Range: 0x801224E0 -> 0x80122810
class zNPCStateResult zNPCMowbotMainState::PushKilledState(class zNPCMowbotMainState * this /* r28 */) {
    // References
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
    // -> class zGlobals globals;
    // -> class zSoundFX * pEventSfx;
    // -> class zOneLinerSystem gOneLinerSystem;
}
// Range: 0x80122810 -> 0x8012290C
class zNPCStateResult zNPCMowbotMainState::NPCGetsDamage(class zNPCMowbotMainState * this /* r28 */, class zNPCGetsDamageInfo * npcDamageInfo /* r29 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Damaged;
}
// Range: 0x80122910 -> 0x80122AA0
class zNPCStateResult zNPCMowbotEngageMainState::Enter(class zNPCMowbotEngageMainState * this /* r28 */) {
    // References
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// signature: zNPCMowbotEngageMainState::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x80122AA0 -> 0x80123000
class zNPCStateResult zNPCMowbotEngageMainState::ChildDone(class zNPCMowbotEngageMainState * this /* r31 */, int childStateID /* r30 */, class zNPCStateResult * childStateResult /* r28 */) {
    {
        // Range: 0x80122B14 -> 0x80122BB4
        // Local variables
        class zNPCSeekAction * normalWindupEnd; // r28
    }
    {
        // Range: 0x80122C20 -> 0x80122C8C
        // Local variables
        class zNPCOneShotAnimAction * heavyWindupState; // r28
    }
    {
        // Range: 0x80122C8C -> 0x80122CC4
        // Local variables
        class zNPCPerception * perception; // r0
    }
    {
        // Range: 0x80122CC4 -> 0x80122D24
        // Local variables
        class zNPCOneShotAnimAction * failState; // r28
    }
    {
        // Range: 0x80122D24 -> 0x80122D5C
        // Local variables
        class zNPCPerception * perception; // r0
    }
    {
        // Range: 0x80122D5C -> 0x80122DF4
        // Local variables
        class zNPCSeekAction * heavyWindupEnd; // r28
    }
    {
        // Range: 0x80122E0C -> 0x80122E84
        // Local variables
        class zNPCOneShotAnimAction * heavyFailState; // r28
    }
    {
        // Range: 0x80122E84 -> 0x80122F3C
        // Local variables
        class zNPCMowbotCleanState * cleanState; // r28
    }
    {
        // Range: 0x80122F3C -> 0x80122F74
        // Local variables
        class zNPCPerception * perception; // r0
    }
    {
        // Range: 0x80122F80 -> 0x80122FD8
        // Local variables
        class zNPCOneShotAnimAction * windupState; // r28
    }

    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Fail;
    // -> class zNPCStateResult Success;
    // -> class zNPCStateResult Done;
    // -> class zNPCStateResult Damaged;
}
// signature: zNPCMowbotEngageMainState::ControlUpdate(float)
// Range: 0x80123260 -> 0x80123310
class zNPCStateResult zNPCMowbotEngageMainState::ControlUpdate(class zNPCMowbotEngageMainState * this /* r31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult ControlForced;
}
// Range: 0x80123310 -> 0x801235F8
class zNPCStateResult zNPCMowbotEngageMainState::PushNormalChargeState(class zNPCMowbotEngageMainState * this /* r29 */) {
    // References
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__14zNPCSeekAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x80123600 -> 0x801238DC
class zNPCStateResult zNPCMowbotEngageMainState::PushNormalAttackState(class zNPCMowbotEngageMainState * this /* r29 */) {
    // References
    // -> struct {} __vt__21zNPCMowbotAttackState;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__14zNPCSeekAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x801238E0 -> 0x80123BB4
class zNPCStateResult zNPCMowbotEngageMainState::PushHeavyChargeState(class zNPCMowbotEngageMainState * this /* r29 */) {
    // References
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__14zNPCSeekAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x80123BC0 -> 0x80123E90
class zNPCStateResult zNPCMowbotEngageMainState::PushHeavyAttackState(class zNPCMowbotEngageMainState * this /* r29 */) {
    // References
    // -> struct {} __vt__21zNPCMowbotAttackState;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__14zNPCSeekAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x80123E90 -> 0x80124054
class zNPCStateResult zNPCMowbotEngageMainState::PushGloatState(class zNPCMowbotEngageMainState * this /* r28 */) {
    // References
    // -> struct {} __vt__14zNPCNoMoveLoop;
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
}
// signature: zNPCMowbotAttackState::ActionUpdate(float)
// Range: 0x80124060 -> 0x801242D0
class zNPCStateResult zNPCMowbotAttackState::ActionUpdate(class zNPCMowbotAttackState * this /* r31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Fail;
    // -> class zNPCStateResult Done;
    // -> class zNPCStateResult Success;
    // -> static float spawnFXWaitTimer;
}
// Range: 0x801242D0 -> 0x80124510
void zNPCMowbotAttackState::Activate(class zNPCMowbotAttackState * this /* r29 */) {
}
// Range: 0x80124510 -> 0x801245DC
void zNPCMowbotAttackState::Deactivate() {
}
// signature: zNPCMowbotAttackState::characterInteractionCallback(hkpCharacterProxy *, hkpCharacterProxy *, const hkContactPoint &)
// Range: 0x801245F0 -> 0x80124994
void zNPCMowbotAttackState::characterInteractionCallback(class zNPCMowbotAttackState * this /* r29 */, class hkpCharacterProxy * otherProxy /* r30 */) {
    // Local variables
    class hkpShapePhantom * shapePhantom; // r0
    class xBase * base; // r4
    class zPlayer * player; // r0

    {
        // Range: 0x80124620 -> 0x80124938
        // Local variables
        class xEnt * ent; // r5
    }

    // References
    // -> static float spawnFXWaitTimer;
}
// signature: zNPCMowbotAttackState::objectInteractionCallback(hkpCharacterProxy *, const hkpCharacterObjectInteractionEvent &, hkpCharacterObjectInteractionResult &)
// Range: 0x801249A0 -> 0x80124D30
void zNPCMowbotAttackState::objectInteractionCallback(class zNPCMowbotAttackState * this /* r29 */, class hkpCharacterObjectInteractionEvent * input /* r30 */) {
    // Local variables
    class hkpRigidBody * rb; // r5
    class xBase * base; // r4
    class zPlayer * player; // r0

    {
        // Range: 0x801249D0 -> 0x80124CDC
        // Local variables
        class xEnt * ent; // r5
    }

    // References
    // -> static float spawnFXWaitTimer;
}
// Range: 0x80124D30 -> 0x801254FC
void zNPCMowbotAttackState::HandlePlayerHit(class zNPCMowbotAttackState * this /* r28 */, class zPlayer * player /* r29 */, class hkpRigidBody * rigidBody /* r30 */) {
    // Local variables
    float animTime; // f0

    {
        // Range: 0x80124DD8 -> 0x8012504C
        // Local variables
        class xVec3 targetDir; // r1+0x78

        {
            // Range: 0x80124FA4 -> 0x8012504C
            // Local variables
            class zCombatDamageInfo combatDamageInfo; // r1+0xC0
        }
    }
    {
        // Range: 0x80125064 -> 0x801252D8
        // Local variables
        class xVec3 targetDir; // r1+0x6C

        {
            // Range: 0x80125230 -> 0x801252D8
            // Local variables
            class zCombatDamageInfo combatDamageInfo; // r1+0x88
        }
    }
    {
        // Range: 0x801252F8 -> 0x801254B4
        // Local variables
        float velMag; // f3
        class xVec3 targetDir; // r1+0x60
    }

    // References
    // -> bool hitPlayer;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_Null;
}
// Range: 0x80125500 -> 0x801255D8
void zNPCMowbotCleanState::Activate(class zNPCMowbotCleanState * this /* r30 */) {
}
// Range: 0x801255E0 -> 0x801256AC
void zNPCMowbotCleanState::Deactivate() {
}
// signature: zNPCMowbotCleanState::characterInteractionCallback(hkpCharacterProxy *, hkpCharacterProxy *, const hkContactPoint &)
// Range: 0x801256B0 -> 0x80125900
void zNPCMowbotCleanState::characterInteractionCallback(class zNPCMowbotCleanState * this /* r29 */) {
    // Local variables
    class hkpShapePhantom * shapePhantom; // r0
    class xBase * base; // reg65535
    class zPlayer * player; // r30
    class xVec3 targetDir; // r1+0x20

    // References
    // -> bool hitPlayer;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_Null;
}
// signature: zNPCMowbotCleanState::objectInteractionCallback(hkpCharacterProxy *, const hkpCharacterObjectInteractionEvent &, hkpCharacterObjectInteractionResult &)
// Range: 0x80125900 -> 0x8012593C
void zNPCMowbotCleanState::objectInteractionCallback() {
    // Local variables
    class xBase * base; // r4

    // References
    // -> bool hitPlayer;
}
