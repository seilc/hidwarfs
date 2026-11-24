/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCPuppet.cpp
*/
class zNPCEntityParams sEntParams; // size: 0x44, address: 0x80791B60
// Range: 0x80129A90 -> 0x8012A244
void zNPCPuppet::Type::CreateAnimTable(class xAnimTable * table /* r27 */) {
}
// Range: 0x8012A250 -> 0x8012A324
void zNPCPuppet::Type::InitTypeParameters() {
    // References
    // -> class zCreator _inst;
    // -> struct {} __vt__37zCreator<7,10zNPCCombat,10zNPCCombat>;
    // -> class zCreator _inst;
    // -> struct {} __vt__45zCreator<2,20zNPCMainStateHandler,9zNPCLogic>;
    // -> class zCreator _inst;
    // -> struct {} __vt__41zCreator<8,12zNPCSteering,12zNPCSteering>;
    // -> class zCreator _inst;
    // -> struct {} __vt__37zCreator<3,10zNPCEntity,10zNPCEntity>;
}
// signature: zNPCPuppet::Initialize(const zNPCStatus *)
// Range: 0x8012A330 -> 0x8012A34C
void zNPCPuppet::Initialize() {
    // References
    // -> class zNPCEntityParams sEntParams;
}
// signature: zNPCPuppet::Activate(const zNPCStatus *)
// Range: 0x8012A350 -> 0x8012A3B4
bool zNPCPuppet::Activate() {
    // References
    // -> class _Creator creator;
    // -> struct {} __vt__Q219zNPCPuppetMainState8_Creator;
}
// Range: 0x8012A3C0 -> 0x8012A3F0
bool zNPCPuppet::CheckSceneSetupValidity() {
}
// Range: 0x8012A3F0 -> 0x8012A530
void zNPCPuppet::Update(class zNPCPuppet * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x8012A530 -> 0x8012A554
void zNPCPuppet::Render() {
}
// signature: zNPCPuppetMainState::ControlUpdate(float)
// Range: 0x8012A560 -> 0x8012A628
class zNPCStateResult zNPCPuppetMainState::ControlUpdate(class zNPCPuppetMainState * this /* r31 */) {
    {
        // Range: 0x8012A57C -> 0x8012A604
        // Local variables
        float curAnimTime; // f0
    }

    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x8012A630 -> 0x8012A9C8
class zNPCStateResult zNPCPuppetMainState::Enter(class zNPCPuppetMainState * this /* r27 */) {
    // References
    // -> struct {} __vt__25zNPCIdleWithFidgetControl;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// signature: zNPCPuppetMainState::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x8012A9D0 -> 0x8012B3F0
class zNPCStateResult zNPCPuppetMainState::ChildDone(class zNPCPuppetMainState * this /* r31 */, class zNPCState * childState /* r28 */) {
    // References
    // -> struct {} __vt__25zNPCIdleWithFidgetControl;
    // -> class zFactory factory;
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult ControlForced;
}
// Range: 0x8012B3F0 -> 0x8012C264
class zNPCStateResult zNPCPuppetMainState::EventProc(class zNPCPuppetMainState * this /* r26 */, class xBase * from /* r27 */, class xBase * to /* r28 */, unsigned int to_event /* r29 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x8012B4EC -> 0x8012B75C
        // Local variables
        class xBase * toParamWidgetPtr; // r29
        class EventActionPlayCustomAnim * params; // r0
    }
    {
        // Range: 0x8012B75C -> 0x8012B7B8
        {
            // Range: 0x8012B764 -> 0x8012B7B8
            // Local variables
            class zNPCFollowMPPathControl * followMPState; // r0
        }
    }
    {
        // Range: 0x8012B7C8 -> 0x8012BBFC
        // Local variables
        class xBase * toParamWidgetPtr; // r29
        class EventActionFollowPath * params; // r0
    }
    {
        // Range: 0x8012BBFC -> 0x8012BE04
        // Local variables
        class zNPCGetsDamageInfo npcDamageInfo; // r1+0xA0
    }
    {
        // Range: 0x8012BE04 -> 0x8012C108
        // Local variables
        class xBase * toParamWidgetPtr; // r29
        class EventActionMovePoint * params; // r0
    }
    {
        // Range: 0x8012C108 -> 0x8012C19C
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        class EventActionEnt * params; // r0
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisZ;
    // -> struct {} __vt__17zNPCTeleportState;
    // -> class xVec3 m_Null;
    // -> struct {} __vt__23zNPCFollowMPPathControl;
    // -> class zNPCStateResult NotDone;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
    // -> class zNPCStateResult ControlForced;
}
// signature: zNPCPuppetMainState::NPCGetsDamage(const zNPCGetsDamageInfo &)
// Range: 0x8012C270 -> 0x8012C41C
class zNPCStateResult zNPCPuppetMainState::NPCGetsDamage(class zNPCPuppetMainState * this /* r28 */) {
    // References
    // -> struct {} __vt__16zNPCDamageAction;
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
    // -> class zNPCStateResult NotDone;
}
// Range: 0x8012C420 -> 0x8012C644
class zNPCStateResult zNPCPuppetMainState::ApplyLookAt(class zNPCPuppetMainState * this /* r29 */, class xVec3 * lookAt /* r31 */) {
    // Local variables
    int currentStateID; // r0

    {
        // Range: 0x8012C4A4 -> 0x8012C508
        // Local variables
        class zNPCIdleWithFidgetControl * idleState; // r0

        {
            // Range: 0x8012C4B8 -> 0x8012C4EC
            // Local variables
            class zNPCSteeringDest dest; // r1+0x28
        }
    }
    {
        // Range: 0x8012C508 -> 0x8012C5C8
        // Local variables
        class zNPCFollowMPPathControl * moveState; // r0

        {
            // Range: 0x8012C51C -> 0x8012C590
            // Local variables
            class zNPCSteeringDest dest; // r1+0x18
        }
    }
    {
        // Range: 0x8012C5C8 -> 0x8012C620
        // Local variables
        class zNPCOneShotAnimAction * custAnimState; // r0

        {
            // Range: 0x8012C5DC -> 0x8012C608
            // Local variables
            class zNPCSteeringDest dest; // r1+0x8
        }
    }

    // References
    // -> class zNPCStateResult NotDone;
}
