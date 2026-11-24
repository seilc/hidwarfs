/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCCharger.cpp
*/
class zNPCEntityParams sEntParams; // size: 0x44, address: 0x80791408
class zNPCCombatParams sCombatParams; // size: 0xC, address: 0x8079144C
// Range: 0x800F66F0 -> 0x800F67BC
void zNPCCharger::Type::CreateAnimTable(class xAnimTable * table /* r27 */) {
}
// Range: 0x800F67C0 -> 0x800F68FC
void zNPCCharger::Type::InitTypeParameters() {
    // References
    // -> class zNPCCombatParams sCombatParams;
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
// signature: zNPCCharger::Initialize(const zNPCStatus *)
// Range: 0x800F6900 -> 0x800F691C
void zNPCCharger::Initialize() {
    // References
    // -> class zNPCEntityParams sEntParams;
}
// signature: zNPCCharger::Activate(const zNPCStatus *)
// Range: 0x800F6920 -> 0x800F6AE0
bool zNPCCharger::Activate(class zNPCCharger * this /* r28 */) {
    // Local variables
    unsigned int numTargets; // r30

    {
        // Range: 0x800F693C -> 0x800F6A44
        // Local variables
        int i; // r29

        {
            // Range: 0x800F6A2C -> 0x800F6A44
            // Local variables
            class zNPCEve * eveRef; // r0
        }
    }

    // References
    // -> class zNPCCombatParams sCombatParams;
    // -> class _Creator creator;
    // -> struct {} __vt__Q220zNPCChargerMainState8_Creator;
    // -> class xGlobals * xglobals;
}
// Range: 0x800F6AE0 -> 0x800F6B20
bool zNPCCharger::CheckSceneSetupValidity() {
    // Local variables
    enum eAnimSetType animSetType; // r0
}
// Range: 0x800F6B20 -> 0x800F6C60
void zNPCCharger::Update(class zNPCCharger * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800F6C60 -> 0x800F6C84
void zNPCCharger::Render() {
}
// Range: 0x800F6C90 -> 0x800F6DC8
void zNPCCharger::ProcessIgnoredContacts(class zNPCCharger * this /* r28 */, class hkArray * objectsWeHit /* r29 */) {
    {
        // Range: 0x800F6CAC -> 0x800F6D98
        // Local variables
        int i; // r30

        {
            // Range: 0x800F6CAC -> 0x800F6D98
            // Local variables
            class zNPCEntity * npcEnt; // r3
            class xBase * hitBase; // r5
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800F6DD0 -> 0x800F7220
class zNPCStateResult zNPCChargerMainState::ControlUpdate(class zNPCChargerMainState * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class Charger * npcassCharger; // r31
    bool killedByTimer; // r5
    class xVec3 bounceVel; // r1+0xC

    {
        // Range: 0x800F6E58 -> 0x800F6EB0
        // Local variables
        class xVec3 * oldVel; // r0
        class xVec3 * vel; // r0
    }
    {
        // Range: 0x800F6F20 -> 0x800F7180
        // Local variables
        float angularSpeed; // f28
        float speed; // f0
        float r; // f0
    }

    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Killed;
}
// Range: 0x800F7230 -> 0x800F72EC
class zNPCStateResult zNPCChargerMainState::Enter(class zNPCChargerMainState * this /* r29 */) {
    // Local variables
    class hkpShapePhantom * shapePhantom; // r0
    class hkpPropertyValue prop; // r1+0x10
}
// Range: 0x800F72F0 -> 0x800F7474
void zNPCChargerMainState::Exit(class zNPCChargerMainState * this /* r31 */) {
    // References
    // -> class zFactory factory;
}
// signature: zNPCChargerMainState::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x800F7480 -> 0x800F7804
class zNPCStateResult zNPCChargerMainState::ChildDone(class zNPCChargerMainState * this /* r28 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zGlobals globals;
    // -> class zSoundFX * pEventSfx;
    // -> class zOneLinerSystem gOneLinerSystem;
    // -> struct {} __vt__25zNPCSteeringNoMoveControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCNoMoveAction;
    // -> class zFactory factory;
    // -> class zNPCStateResult Killed;
}
// signature: zNPCChargerMainState::NPCGetsDamage(const zNPCGetsDamageInfo &)
// Range: 0x800F7830 -> 0x800F7844
class zNPCStateResult zNPCChargerMainState::NPCGetsDamage() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x800F7850 -> 0x800F7D1C
class zNPCStateResult zNPCChargerMainState::PushFollowMPState(class zNPCChargerMainState * this /* r27 */) {
    // Local variables
    class Charger * npcassCharger; // r28
    unsigned int targetBitMask; // r5

    {
        // Range: 0x800F7C24 -> 0x800F7CD8
        // Local variables
        unsigned int zeroed; // r9
    }

    // References
    // -> class zNPCStateResult Chargable;
    // -> struct {} __vt__27zNPCActivePerceptionControl;
    // -> struct {} __vt__20zNPCSequencerControl;
    // -> struct {} __vt__25zNPCSteeringWanderControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCWanderAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> struct {} __vt__23zNPCFollowMPPathControl;
    // -> class zFactory factory;
}
// Range: 0x800F7D20 -> 0x800F832C
class zNPCStateResult zNPCChargerMainState::PushChargePlayerState(class zNPCChargerMainState * this /* r27 */) {
    // Local variables
    class Charger * npcassCharger; // r28
    unsigned int targetBitMask; // r5

    {
        // Range: 0x800F8258 -> 0x800F8258
        // Local variables
        unsigned int zeroed; // r7
    }

    // References
    // -> struct {} __vt__27zNPCActivePerceptionControl;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__14zNPCSeekAction;
    // -> struct {} __vt__25zNPCSteeringWanderControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCWanderAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// signature: zNPCChargerMainState::processConstraintsCallback(const hkArray<hkpRootCdPoint> &, hkpSimplexSolverInput &)
// Range: 0x800F85A0 -> 0x800F89B4
void zNPCChargerMainState::processConstraintsCallback(class zNPCChargerMainState * this /* r29 */) {
    // Local variables
    int numContacts; // r5

    {
        // Range: 0x800F85F4 -> 0x800F897C
        // Local variables
        int i; // r0

        {
            // Range: 0x800F85F4 -> 0x800F897C
            // Local variables
            float collNormalY; // f0

            {
                // Range: 0x800F85F4 -> 0x800F85F8
                // Local variables
                class xVec3 targetDir; // r1+0x20

                {
                    // Range: 0x800F85F8 -> 0x800F85F8
                    // Local variables
                    class xEnt * ent; // r30
                }
                {
                    // Range: 0x800F85F8 -> 0x800F85F8
                    // Local variables
                    class zPlayer * playerOwner; // r0
                    class zProjectile * ownerProjectile; // r28
                }
            }
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisZ;
}
