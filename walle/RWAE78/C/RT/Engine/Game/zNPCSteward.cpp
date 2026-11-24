/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCSteward.cpp
*/
class zNPCEntityParams sEntParams; // size: 0x44, address: 0x80792004
class zNPCCombatParams sNormalCombatParams; // size: 0xC, address: 0x80792048
class zNPCCombatParams sKeyCombatParams; // size: 0xC, address: 0x80792054
class zNPCCombatParams sBombCombatParams; // size: 0xC, address: 0x80792060
static class zNPCHitReactionTable sStewardCombatReactionTable[2]; // size: 0x10, address: 0x806FBB08
// Range: 0x80139010 -> 0x8013919C
void zNPCSteward::Type::InitTypeParameters() {
    // References
    // -> class zNPCCombatParams sBombCombatParams;
    // -> class zNPCCombatParams sKeyCombatParams;
    // -> class zNPCCombatParams sNormalCombatParams;
    // -> class zNPCEntityParams sEntParams;
    // -> static class zNPCHitReactionTable sStewardCombatReactionTable[2];
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
// Range: 0x801391A0 -> 0x8013959C
void zNPCSteward::Type::CreateAnimTable(class xAnimTable * table /* r27 */) {
}
// signature: zNPCSteward::Initialize(const zNPCStatus *)
// Range: 0x801395A0 -> 0x801395FC
void zNPCSteward::Initialize(class zNPCSteward * this /* r31 */) {
    // References
    // -> class zNPCEntityParams sEntParams;
}
// signature: zNPCSteward::Activate(const zNPCStatus *)
// Range: 0x80139600 -> 0x8013987C
bool zNPCSteward::Activate(class zNPCSteward * this /* r28 */) {
    // Local variables
    unsigned int numTargets; // r30

    {
        // Range: 0x8013961C -> 0x80139724
        // Local variables
        int i; // r29

        {
            // Range: 0x8013970C -> 0x80139724
            // Local variables
            class zNPCEve * eveRef; // r0
        }
    }

    // References
    // -> class zNPCCombatParams sNormalCombatParams;
    // -> class zNPCCombatParams sBombCombatParams;
    // -> class zNPCCombatParams sKeyCombatParams;
    // -> class _Creator creator;
    // -> struct {} __vt__Q220zNPCStewardMainState8_Creator;
    // -> class _Creator creator;
    // -> struct {} __vt__Q224zNPCStewardBombMainState8_Creator;
    // -> class xGlobals * xglobals;
}
// Range: 0x80139880 -> 0x801398D4
bool zNPCSteward::CheckSceneSetupValidity(class zNPCSteward * this /* r31 */) {
    // Local variables
    bool wallNetValid; // r0
}
// Range: 0x801398E0 -> 0x80139A20
void zNPCSteward::Update(class zNPCSteward * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80139A20 -> 0x80139A44
void zNPCSteward::Render() {
}
// Range: 0x80139A50 -> 0x80139D24
class zNPCStateResult zNPCStewardMainState::EventProc(class zNPCStewardMainState * this /* r25 */, class xBase * from /* r26 */, class xBase * to /* r27 */, unsigned int to_event /* r28 */, class EventAny * params /* r29 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zGlobals globals;
    // -> class zSoundFX * pEventSfx;
    // -> class zOneLinerSystem gOneLinerSystem;
}
// Range: 0x80139D40 -> 0x80139DA0
enum ZeroPointState zNPCSteward::GetZeroPointState() {
    // Local variables
    class zNPCControl * control; // r0
}
// Range: 0x80139DA0 -> 0x80139E24
enum ZeroPointFacing zNPCSteward::GetZeroPointFacing() {
    // Local variables
    class zNPCControl * control; // r31

    {
        // Range: 0x80139DC4 -> 0x80139E0C
        // Local variables
        class zZeroPointPullAction * pullAction; // r0
    }
}
// Range: 0x80139E30 -> 0x80139EEC
bool zNPCSteward::IsAutoTargetable(class zNPCSteward * this /* r30 */) {
    {
        // Range: 0x80139E48 -> 0x80139EB8
        {
            // Range: 0x80139E5C -> 0x80139EB0
            // Local variables
            class zNPCControl * control; // r0
        }
    }
}
// Range: 0x80139EF0 -> 0x8013A25C
class zNPCStateResult zNPCStewardMainState::Enter(class zNPCStewardMainState * this /* r30 */) {
    // References
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> struct {} __vt__26zNPCFollowNPCOnPathControl;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCMoveToAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x8013A260 -> 0x8013A460
void zNPCStewardMainState::Exit(class zNPCStewardMainState * this /* r31 */) {
    // Local variables
    int stateID; // r0

    {
        // Range: 0x8013A284 -> 0x8013A36C
        // Local variables
        enum ZeroPointState zeroPointState; // r0
        class zCommonPlayer * zeroPointTarget; // r28
        class zNPCSteward * steward; // r27
    }

    // References
    // -> class zFactory factory;
}
// signature: zNPCStewardMainState::ControlUpdate(float)
// Range: 0x8013A460 -> 0x8013ACC4
class zNPCStateResult zNPCStewardMainState::ControlUpdate(class zNPCStewardMainState * this /* r26 */) {
    // Local variables
    int curState; // r27

    // References
    // -> class zNPCStateResult NotDone;
    // -> struct {} __vt__16zNPCDamageAction;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
    // -> class zNPCStateResult ControlForced;
}
// signature: zNPCStewardMainState::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x8013ACD0 -> 0x8013B0AC
class zNPCStateResult zNPCStewardMainState::ChildDone(class zNPCStewardMainState * this /* r27 */, int childStateID /* r28 */, class zNPCStateResult * childStateResult /* r29 */) {
    // Local variables
    class zNPCPerception * perception; // r31

    {
        // Range: 0x8013AD64 -> 0x8013ADFC
        // Local variables
        class Steward * stewardAsset; // r0
        class zNPCSteward * steward; // r0
        bool shootZeroPoint; // r29

        {
            // Range: 0x8013AD80 -> 0x8013ADDC
            // Local variables
            float distance; // f0
            class xVec3 displacement; // r1+0x8
            class xEnt * target; // r0
        }
    }
    {
        // Range: 0x8013AE94 -> 0x8013AF10
        // Local variables
        class xEnt * target; // r29
    }
    {
        // Range: 0x8013B050 -> 0x8013B090
        // Local variables
        class zNPCGroupBase * npcGroup; // r29
    }

    // References
    // -> class zNPCStateResult Success;
    // -> class zNPCStateResult Damaged;
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult ControlForced;
}
// Range: 0x8013B0B0 -> 0x8013B15C
class zNPCStateResult zNPCStewardMainState::PushTurnState(class zNPCStewardMainState * this /* r30 */) {
}
// Range: 0x8013B160 -> 0x8013B1F4
class zNPCStateResult zNPCStewardMainState::PushMoveState(class zNPCStewardMainState * this /* r30 */) {
}
// Range: 0x8013B200 -> 0x8013BACC
class zNPCStateResult zNPCStewardMainState::PushDamageState(class zNPCStewardMainState * this /* r31 */) {
    {
        // Range: 0x8013B21C -> 0x8013B8F0
        // Local variables
        class xEnt * ent; // r24
    }

    // References
    // -> static class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
// signature: zNPCStewardMainState::UpdateDisplayScreen(int)
// Range: 0x8013BAD0 -> 0x8013BCD8
void zNPCStewardMainState::UpdateDisplayScreen(class zNPCStewardMainState * this /* r29 */) {
    // Local variables
    int newScreen; // r31
    bool isKey; // r30

    {
        // Range: 0x8013BBC0 -> 0x8013BCBC
        // Local variables
        class xOGEntityWithModel * ngEntity; // r30

        {
            // Range: 0x8013BBD0 -> 0x8013BC4C
            // Local variables
            unsigned short partCount; // r0

            {
                // Range: 0x8013BC00 -> 0x8013BC40
                // Local variables
                int i; // r29
            }
        }
        {
            // Range: 0x8013BC4C -> 0x8013BCBC
            // Local variables
            unsigned short partCount; // r0

            {
                // Range: 0x8013BC70 -> 0x8013BCB0
                // Local variables
                int i; // r29
            }
        }
    }
}
// Range: 0x8013BCE0 -> 0x8013BFAC
class zNPCStateResult zNPCStewardMainState::PushZeroPointShootState(class zNPCStewardMainState * this /* r29 */) {
    // Local variables
    class zNPCSteward * turret; // r0
    class Steward * turretAsset; // r30
    class zZeroPointFireActionInfo info; // r1+0x8
    float * fireTime; // r0

    // References
    // -> struct {} __vt__20zZeroPointFireAction;
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
}
// Range: 0x8013BFB0 -> 0x8013C35C
class zNPCStateResult zNPCStewardMainState::PushZeroPointPullState(class zNPCStewardMainState * this /* r29 */) {
    // Local variables
    class zNPCSteward * turret; // r0
    class Steward * turretAsset; // r27
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
// Range: 0x8013C360 -> 0x8013C708
class zNPCStateResult zNPCStewardMainState::PushZeroPointHoldState(class zNPCStewardMainState * this /* r29 */) {
    // Local variables
    class zNPCSteward * turret; // r0
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
// Range: 0x8013C710 -> 0x8013CBC8
class zNPCStateResult zNPCStewardMainState::PushZeroPointThrowState(class zNPCStewardMainState * this /* r29 */) {
    // Local variables
    class zNPCSteward * turret; // r0
    class Steward * turretAsset; // r27
    class zZeroPointThrowActionInfo info; // r1+0x50

    {
        // Range: 0x8013C7B4 -> 0x8013C850
        // Local variables
        class xVec3 throwDirection; // r1+0x44
    }
    {
        // Range: 0x8013C854 -> 0x8013C9F0
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
// Range: 0x8013CBD0 -> 0x8013CC7C
class zNPCStateResult zNPCStewardMainState::PushShootRechargeState(class zNPCStewardMainState * this /* r30 */) {
}
// Range: 0x8013CC80 -> 0x8013D0F0
class zNPCStateResult zNPCStewardMainState::PushShootState(class zNPCStewardMainState * this /* r29 */) {
    // Local variables
    class ShootInfo info; // r1+0x8

    // References
    // -> struct {} __vt__21zNPCShootLaserControl;
    // -> class zFactory factory;
}
// Range: 0x8013D0F0 -> 0x8013D688
class zNPCStateResult zNPCStewardMainState::NPCGetsDamage(class zNPCStewardMainState * this /* r26 */, class zNPCGetsDamageInfo * npcDamageInfo /* r25 */) {
    // Local variables
    int curChildID; // r0

    // References
    // -> struct {} __vt__16zNPCDamageAction;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
    // -> class zNPCStateResult Damaged;
    // -> class zNPCStateResult NotDone;
}
// Range: 0x8013D690 -> 0x8013D6D8
bool zNPCStewardMainState::IsAutoTargetable() {
    // Local variables
    int curChildID; // r0
}
// Range: 0x8013D6E0 -> 0x8013D980
class zNPCStateResult zNPCStewardBombMainState::Enter(class zNPCStewardBombMainState * this /* r29 */) {
    // Local variables
    unsigned int targetBitMask; // r6

    {
        // Range: 0x8013D884 -> 0x8013D93C
        // Local variables
        unsigned int zeroed; // r10
    }

    // References
    // -> class zNPCStateResult Visible;
    // -> struct {} __vt__27zNPCActivePerceptionControl;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__14zNPCIdleAction;
    // -> class zFactory factory;
}
// signature: zNPCStewardBombMainState::ControlUpdate(float)
// Range: 0x8013D980 -> 0x8013D9CC
class zNPCStateResult zNPCStewardBombMainState::ControlUpdate(class zNPCStewardBombMainState * this /* r31 */) {
    // Local variables
    int curState; // r0

    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCStewardBombMainState::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x8013D9D0 -> 0x8013E648
class zNPCStateResult zNPCStewardBombMainState::ChildDone(class zNPCStewardBombMainState * this /* r27 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Damaged;
    // -> struct {} __vt__16zNPCDamageAction;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
    // -> class zGlobals globals;
    // -> class zSoundFX * pEventSfx;
    // -> class zOneLinerSystem gOneLinerSystem;
    // -> class zNPCStateResult Killed;
}
// Range: 0x8013E650 -> 0x8013E914
class zNPCStateResult zNPCStewardBombMainState::NPCGetsDamage(class zNPCStewardBombMainState * this /* r31 */, class zNPCGetsDamageInfo * npcDamageInfo /* r28 */) {
    // Local variables
    int curChildID; // r0

    // References
    // -> class zNPCStateResult Killed;
    // -> struct {} __vt__16zNPCDamageAction;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Damaged;
}
// Range: 0x8013E920 -> 0x8013ED44
class zNPCStateResult zNPCStewardBombMainState::PushChargeState(class zNPCStewardBombMainState * this /* r29 */) {
    // Local variables
    float speed; // f31
    class zNPCSeekAction * chargePlayer; // r0
    unsigned int targetBitMask; // r6

    {
        // Range: 0x8013EC48 -> 0x8013ED00
        // Local variables
        unsigned int zeroed; // r10
    }

    // References
    // -> class zNPCStateResult Attackable;
    // -> struct {} __vt__27zNPCActivePerceptionControl;
    // -> struct {} __vt__26zNPCStewardBombChargeState;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__14zNPCSeekAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// signature: zNPCStewardBombMainState::UpdateDisplayScreen(int)
// Range: 0x8013ED50 -> 0x8013EE54
void zNPCStewardBombMainState::UpdateDisplayScreen() {
    // Local variables
    int newScreen; // r30

    {
        // Range: 0x8013EDB4 -> 0x8013EE38
        // Local variables
        unsigned short partCount; // r0

        {
            // Range: 0x8013EDEC -> 0x8013EE2C
            // Local variables
            int i; // r29
        }
    }
}
// Range: 0x8013EE60 -> 0x8013EFE8
class zNPCStateResult zNPCStewardBombChargeState::Update(class zNPCStewardBombChargeState * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 offset; // r1+0x14

    // References
    // -> class zNPCStateResult Attackable;
    // -> class zNPCStateResult NotDone;
}
