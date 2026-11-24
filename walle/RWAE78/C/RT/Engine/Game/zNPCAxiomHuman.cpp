/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCAxiomHuman.cpp
*/
class zNPCEntityParams sEntParams; // size: 0x44, address: 0x807913BC
bool hitPlayer; // size: 0x1, address: 0x80791400
unsigned int knockedOverCount; // size: 0x4, address: 0x80791404
// Range: 0x800F0B20 -> 0x800F1180
void zNPCAxiomHuman::Type::CreateAnimTable(class xAnimTable * table /* r27 */) {
}
// Range: 0x800F1180 -> 0x800F127C
void zNPCAxiomHuman::Type::InitTypeParameters() {
    // References
    // -> class zNPCEntityParams sEntParams;
    // -> class zCreator _inst;
    // -> struct {} __vt__45zCreator<2,20zNPCMainStateHandler,9zNPCLogic>;
    // -> class zCreator _inst;
    // -> struct {} __vt__45zCreator<6,14zNPCPerception,14zNPCPerception>;
    // -> class zCreator _inst;
    // -> struct {} __vt__41zCreator<8,12zNPCSteering,12zNPCSteering>;
    // -> class zCreator _inst;
    // -> struct {} __vt__37zCreator<3,10zNPCEntity,10zNPCEntity>;
}
// Range: 0x800F1280 -> 0x800F1298
void zNPCAxiomHuman::Type::ScenePrepare() {
    // References
    // -> unsigned int knockedOverCount;
    // -> bool hitPlayer;
}
// signature: zNPCAxiomHuman::Initialize(const zNPCStatus *)
// Range: 0x800F12B0 -> 0x800F12CC
void zNPCAxiomHuman::Initialize() {
    // References
    // -> class zNPCEntityParams sEntParams;
}
// signature: zNPCAxiomHuman::Activate(const zNPCStatus *)
// Range: 0x800F12D0 -> 0x800F13D0
bool zNPCAxiomHuman::Activate() {
    // References
    // -> class _Creator creator;
    // -> struct {} __vt__Q218zNPCHumanMainState8_Creator;
    // -> class xGlobals * xglobals;
}
// Range: 0x800F13D0 -> 0x800F16A0
bool zNPCAxiomHuman::CheckSceneSetupValidity(class zNPCAxiomHuman * this /* r31 */) {
    // Local variables
    bool wallNetValid; // r0
}
// Range: 0x800F16B0 -> 0x800F17F0
void zNPCAxiomHuman::Update(class zNPCAxiomHuman * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800F17F0 -> 0x800F1814
void zNPCAxiomHuman::Render() {
}
// Range: 0x800F1820 -> 0x800F1854
unsigned int zNPCAxiomHuman::GetVariant() {
}
// signature: zNPCHumanMainState::ControlUpdate(float)
// Range: 0x800F1860 -> 0x800F19D4
class zNPCStateResult zNPCHumanMainState::ControlUpdate(class zNPCHumanMainState * this /* r29 */) {
    // Local variables
    enum HitType hitType; // r31

    {
        // Range: 0x800F18B0 -> 0x800F19B0
        // Local variables
        bool countHit; // r30
    }

    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult ControlForced;
    // -> float sTimeElapsed;
}
// Range: 0x800F1A60 -> 0x800F1B9C
class zNPCStateResult zNPCHumanMainState::Enter(class zNPCHumanMainState * this /* r28 */) {
    // Local variables
    int displayScreen; // r0
    class xOGEntityWithModel * ngEntity; // r30
    unsigned short partCount; // r0

    {
        // Range: 0x800F1B1C -> 0x800F1B44
        // Local variables
        int i; // r29
    }
}
// Range: 0x800F1BB0 -> 0x800F1D34
void zNPCHumanMainState::Exit(class zNPCHumanMainState * this /* r31 */) {
    // References
    // -> class zFactory factory;
}
// signature: zNPCHumanMainState::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x800F1D40 -> 0x800F1F48
class zNPCStateResult zNPCHumanMainState::ChildDone(class zNPCHumanMainState * this /* r31 */) {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x800F1F90 -> 0x800F2278
class zNPCStateResult zNPCHumanMainState::PushMoveStateFirstTime(class zNPCHumanMainState * this /* r28 */, int id /* r29 */) {
    // Local variables
    class AxiomHuman * npcassAxiomHuman; // r31

    // References
    // -> class zNPCStateResult Visible;
    // -> struct {} __vt__27zNPCActivePerceptionControl;
    // -> struct {} __vt__23zNPCFollowMPPathControl;
    // -> class zFactory factory;
}
// Range: 0x800F2310 -> 0x800F2624
class zNPCStateResult zNPCHumanMainState::PushTeleportState(class zNPCHumanMainState * this /* r28 */, int id /* r29 */) {
    // Local variables
    class AxiomHuman * npcassAxiomHuman; // r26

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisZ;
    // -> struct {} __vt__17zNPCTeleportState;
    // -> class zFactory factory;
}
// Range: 0x800F2640 -> 0x800F29A8
class zNPCStateResult zNPCHumanMainState::PushMoveState(class zNPCHumanMainState * this /* r28 */, int id /* r29 */) {
    // Local variables
    class AxiomHuman * npcassAxiomHuman; // r27

    // References
    // -> class zNPCStateResult Visible;
    // -> struct {} __vt__27zNPCActivePerceptionControl;
    // -> struct {} __vt__23zNPCFollowMPPathControl;
    // -> class zFactory factory;
}
// Range: 0x800F29B0 -> 0x800F2CDC
class zNPCStateResult zNPCHumanMainState::PushFreakedOutMoveState(class zNPCHumanMainState * this /* r28 */, int id /* r29 */) {
    // Local variables
    class AxiomHuman * npcassAxiomHuman; // r27
    class zNPCSteeringMoveToControl * moveControl; // r0

    // References
    // -> class zNPCStateResult NotVisible;
    // -> struct {} __vt__27zNPCActivePerceptionControl;
    // -> struct {} __vt__23zNPCFollowMPPathControl;
    // -> class zFactory factory;
}
// Range: 0x800F2D00 -> 0x800F2F10
class zNPCStateResult zNPCHumanMainState::PushBackupState(class zNPCHumanMainState * this /* r28 */) {
    // References
    // -> struct {} __vt__23zNPCSteeringFleeControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__14zNPCFleeAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x800F2F50 -> 0x800F31C4
class zNPCStateResult zNPCHumanMainState::PushSomeHitState(class zNPCHumanMainState * this /* r29 */) {
    // References
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
    // -> unsigned int knockedOverCount;
}
// Range: 0x800F31D0 -> 0x800F3524
class zNPCStateResult zNPCHumanMainState::PushDamagedHitState(class zNPCHumanMainState * this /* r29 */) {
    // References
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// Range: 0x800F3670 -> 0x800F39A8
class zNPCStateResult zNPCHumanMainState::PushGetUpState(class zNPCHumanMainState * this /* r29 */) {
    // References
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// signature: zNPCHumanMainState::characterInteractionCallback(hkpCharacterProxy *, hkpCharacterProxy *, const hkContactPoint &)
// Range: 0x800F39B0 -> 0x800F3A44
void zNPCHumanMainState::characterInteractionCallback(class zNPCHumanMainState * this /* r31 */) {
    // Local variables
    class hkpShapePhantom * shapePhantom; // r0
    class xBase * base; // r4

    {
        // Range: 0x800F39DC -> 0x800F3A04
        // Local variables
        class zPlayer * player; // r0
    }
}
// signature: zNPCHumanMainState::objectInteractionCallback(hkpCharacterProxy *, const hkpCharacterObjectInteractionEvent &, hkpCharacterObjectInteractionResult &)
// Range: 0x800F3A60 -> 0x800F3BF4
void zNPCHumanMainState::objectInteractionCallback(class zNPCHumanMainState * this /* r30 */) {
    // Local variables
    class hkpRigidBody * rb; // r28
    class xBase * base; // reg65535

    {
        // Range: 0x800F3A9C -> 0x800F3B3C
        // Local variables
        class hkVector4 knockback; // r1+0x10
        class zPlayer * player; // r31
    }
    {
        // Range: 0x800F3B40 -> 0x800F3B68
        // Local variables
        class zNPCEntity * npc; // r0
    }
    {
        // Range: 0x800F3B6C -> 0x800F3BD0
        // Local variables
        class zProjectile * projectile; // r3
    }
}
// signature: zNPCHumanMainState::contactPointAddedCallback(const hkpRootCdPoint &)
// Range: 0x800F3C00 -> 0x800F3D24
void zNPCHumanMainState::contactPointAddedCallback(class zNPCHumanMainState * this /* r31 */) {
    // Local variables
    class zProjectile * projectile; // r6
}
// Range: 0x800F3D30 -> 0x800F3F84
void zNPCHumanMainState::CollideWithPlayer(class zNPCHumanMainState * this /* r28 */, class zPlayer * player /* r29 */) {
    // Local variables
    class xVec3 targetDir; // r1+0x8

    {
        // Range: 0x800F3D64 -> 0x800F3F4C
        // Local variables
        class zCombatDamageInfo combatDamageInfo; // r1+0x18
    }

    // References
    // -> bool hitPlayer;
    // -> class xVec3 m_UnitAxisZ;
}
