/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCBiplane.cpp
*/
class zNPCEntityParams sEntParams; // size: 0x14, address: 0x80822B28
class zNPCBiplaneActiveArray * staticArray; // size: 0x4, address: 0x80822B3C
bool initialized; // size: 0x1, address: 0x80822B40
// signature: zNPCBiplaneProxyCollisionListener::processConstraintsCallback(const hkArray<hkpRootCdPoint> &, hkpSimplexSolverInput &)
// Range: 0x8019D060 -> 0x8019D5D4
void zNPCBiplaneProxyCollisionListener::processConstraintsCallback() {
    // Local variables
    class hkpSurfaceConstraintInfo * pConstraints; // r0
    class zNPCEntity * pNPCEnt; // r30
    bool collision; // r29

    {
        // Range: 0x8019D080 -> 0x8019D4BC
        // Local variables
        int i; // r28

        {
            // Range: 0x8019D080 -> 0x8019D4BC
            // Local variables
            float atXZDotProd; // f0
            float rightXZDotProd; // f0
            float atDotProd; // f0
            class xBase * baseB; // r19
            class xBase * baseA; // r23
            class hkpPhantom * phantomB; // r0
            class hkpPhantom * phantomA; // r0
            class hkpRigidBody * bodyB; // r0
            class hkpRigidBody * bodyA; // r0
            class hkpWorldObject * otherHavokObj; // r0
            class xBase * otherBase; // r27
            class xVec3 newNormal; // r1+0x1C
            class hkVector4 newhkNormal; // r1+0x30
            class hkpRootCdPoint point; // r1+0x40

            {
                // Range: 0x8019D484 -> 0x8019D4BC
                // Local variables
                float newDiff; // f0
            }
        }
    }
    {
        // Range: 0x8019D4D0 -> 0x8019D5B8
        // Local variables
        class EventActionVector collisionParams; // r1+0x10
    }
}
// Range: 0x8019D610 -> 0x8019D6B4
void zNPCBiplane::Type::InitTypeParameters() {
    // References
    // -> class zCreator _inst;
    // -> struct {} __vt__37zCreator<6,10zNPCCombat,10zNPCCombat>;
    // -> class zCreator _inst;
    // -> struct {} __vt__48zCreator<7,19zNPCBiplaneSteering,12zNPCSteering>;
    // -> class zCreator _inst;
    // -> struct {} __vt__45zCreator<1,20zNPCBiplaneBTManager,9zNPCLogic>;
}
// signature: zNPCBiplane::Type::CreateAnimTable(xAnimTable *)
// Range: 0x8019D6C0 -> 0x8019D6C4
void zNPCBiplane::Type::CreateAnimTable() {
}
// signature: zNPCBiplane::Activate(const zNPCStatus *)
// Range: 0x8019D6D0 -> 0x8019D830
bool zNPCBiplane::Activate(class zNPCBiplane * this /* r31 */) {
    {
        // Range: 0x8019D734 -> 0x8019D770
        // Local variables
        class zNPCCombatParams defaultParams; // r1+0x8
    }

    // References
    // -> class zNPCBiplaneActiveArray * staticArray;
    // -> bool initialized;
}
// signature: zNPCBiplane::DeactivateNPC(zNPCStatus *)
// Range: 0x8019D830 -> 0x8019D8FC
void zNPCBiplane::DeactivateNPC(class zNPCBiplane * this /* r30 */) {
    // References
    // -> class zNPCBiplaneActiveArray * staticArray;
    // -> bool initialized;
}
// signature: zNPCBiplane::Initialize(const zNPCStatus *)
// Range: 0x8019D900 -> 0x8019DAC0
void zNPCBiplane::Initialize(class zNPCBiplane * this /* r29 */) {
    // Local variables
    class UPBiplane * assetBiplane; // r0
    class NPCTemplate * npcTemplateAsset; // r30

    // References
    // -> class zNPCEntityParams sEntParams;
    // -> class zFactory factory;
}
// signature: zNPCBiplane::Uninitialize(zNPCStatus *)
// Range: 0x8019DAC0 -> 0x8019DBB8
void zNPCBiplane::Uninitialize(class zNPCBiplane * this /* r30 */) {
    // References
    // -> bool sInvalidSceneState;
    // -> class zFactory factory;
}
// Range: 0x8019DBC0 -> 0x8019DBD4
bool zNPCBiplane::CheckSceneSetupValidity() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8019DBE0 -> 0x8019DD8C
void zNPCBiplane::SceneSetup(class zNPCBiplane * this /* r30 */) {
    {
        // Range: 0x8019DBF4 -> 0x8019DD78
        // Local variables
        class zNPCBiplaneBTActionBuilder * actionBuilder; // r0
    }

    // References
    // -> struct {} __vt__29zNPCBiplaneBTConditionBuilder;
    // -> struct {} __vt__26zNPCBiplaneBTActionBuilder;
    // -> struct {} __vt__19zNPCBiplaneBTClient;
    // -> struct {} __vt__9zBTClient;
}
// signature: zNPCBiplane::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8019DDB0 -> 0x8019E280
void zNPCBiplane::SystemEvent(class zNPCBiplane * this /* r31 */) {
    {
        // Range: 0x8019E1CC -> 0x8019E1EC
        // Local variables
        float newSpeed; // f0
    }
    {
        // Range: 0x8019E208 -> 0x8019E228
        // Local variables
        class EventActionVector * collisionParams; // r0
    }

    // References
    // -> class xVec3 m_Null;
    // -> class zNPCBiplaneActiveArray * staticArray;
    // -> bool initialized;
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// Range: 0x8019E280 -> 0x8019E81C
void zNPCBiplane::NPCGetsDamage(class zNPCBiplane * this /* r31 */, class zNPCGetsDamageInfo & npcDamageInfo /* r29 */) {
    // Local variables
    unsigned int quarterLife; // r0

    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// signature: zNPCBiplane::IsPositionVisible(const xVec3 &)
// Range: 0x8019E820 -> 0x8019EA2C
bool zNPCBiplane::IsPositionVisible(class zNPCBiplane * this /* r31 */) {
    // Local variables
    class xVec3 * npcPos; // r0
    class hkVector4 hkNPCVec; // r1+0x20
    class hkVector4 hkTargetVec; // r1+0x10
    class zNPCBiplaneRayHitCollector hitCollector; // r1+0x30

    {
        // Range: 0x8019E870 -> 0x8019E870
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x8019E870 -> 0x8019E870
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x8019E920 -> 0x8019E920
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x8019E920 -> 0x8019E920
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__26zNPCBiplaneRayHitCollector;
}
// Range: 0x8019EA40 -> 0x8019EB8C
int zNPCBiplane::GetEnemies(class xBase * * enemies /* r30 */) {
    // Local variables
    int numEnemies; // r31
    class zNPCBiplaneActiveArray * activeArray; // r5

    {
        // Range: 0x8019EA58 -> 0x8019EAA8
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x8019EB2C -> 0x8019EB58
        // Local variables
        int i; // r6
    }

    // References
    // -> class zNPCBiplaneActiveArray * staticArray;
    // -> bool initialized;
    // -> class xGlobals * xglobals;
}
// Range: 0x8019EB90 -> 0x8019EC14
class zNPCBiplaneActiveArray * zNPCBiplaneActiveArray::GetArray() {
    // References
    // -> class zNPCBiplaneActiveArray * staticArray;
    // -> bool initialized;
}
// signature: zNPCBiplaneActiveArray::RemoveElement(zNPCBiplane *)
// Range: 0x8019EC20 -> 0x8019ED00
void zNPCBiplaneActiveArray::RemoveElement() {
    // Local variables
    unsigned int index; // r7
    bool foundElement; // r8
}
// signature: zNPCBiplaneActiveArray::GetElement(unsigned int)
// Range: 0x8019ED00 -> 0x8019ED20
class zNPCBiplane * zNPCBiplaneActiveArray::GetElement() {
}
// Range: 0x8019ED20 -> 0x8019EE24
bool zNPCBTBiplaneChaseSpecWeapCondition::Evaluate(class zNPCBTBiplaneChaseSpecWeapCondition * this /* r30 */) const {
    // Local variables
    class zBiplanePlayer * enemyPlayer; // r0
    float specWeapsRange; // f0
    float maxRange2; // f7
    float curRange2; // f0
    class xVec3 toTarget; // r1+0x14
}
// Range: 0x8019EE30 -> 0x8019EF1C
bool zNPCBTBiplaneAvoidPlaneCondition::Evaluate(class zNPCBTBiplaneAvoidPlaneCondition * this /* r31 */) const {
    // References
    // -> static float NPC_BIPLANE_EMERGENCY_DIST;
    // -> static float NPC_BIPLANE_AVOID_DIST;
}
// Range: 0x8019EF20 -> 0x8019EF5C
bool zNPCBTBiplaneEnemyPlaneVisibleCondition::Evaluate() const {
}
// Range: 0x8019EF80 -> 0x8019F194
bool zNPCBTBiplaneEnemyInSightsCondition::Evaluate(class zNPCBTBiplaneEnemyInSightsCondition * this /* r31 */) const {
    // Local variables
    class xEnt * curTargetEnt; // r30
    class xVec3 toTarget; // r1+0x8

    {
        // Range: 0x8019EFF8 -> 0x8019F04C
        // Local variables
        class xBase * target; // r3
    }

    // References
    // -> static unsigned int NPC_VAR_BIPLANE_CURR_TARGET;
}
// Range: 0x8019F1A0 -> 0x8019F358
bool zNPCBTBiplanePlayerAttackingCondition::Evaluate(class zNPCBTBiplanePlayerAttackingCondition * this /* r31 */) const {
    // Local variables
    class zCommonPlayer * primaryPlayer; // r0

    {
        // Range: 0x8019F230 -> 0x8019F274
        // Local variables
        unsigned int i; // r6
    }
    {
        // Range: 0x8019F280 -> 0x8019F340
        // Local variables
        class xVec3 toTarget; // r1+0x14
    }

    // References
    // -> static float NPC_BIPLANE_ATTACK_DIST_2;
    // -> class zNPCBiplaneActiveArray * staticArray;
    // -> bool initialized;
}
// Range: 0x8019F370 -> 0x8019F440
bool zNPCBTBiplaneAnyNPCUnderAttackCondition::Evaluate() const {
    {
        // Range: 0x8019F3E0 -> 0x8019F424
        // Local variables
        unsigned int i; // r6
    }

    // References
    // -> class zNPCBiplaneActiveArray * staticArray;
    // -> bool initialized;
}
// Range: 0x8019F440 -> 0x8019F4C8
bool zNPCBTBiplaneTargetIsPlaneCondition::Evaluate() const {
    // Local variables
    class xBase * target; // r3

    // References
    // -> static unsigned int NPC_VAR_BIPLANE_CURR_TARGET;
}
// Range: 0x8019F4D0 -> 0x8019F548
bool zNPCBTBiplaneTargetIsStaticCondition::Evaluate() const {
    // Local variables
    class xBase * target; // r3

    // References
    // -> static unsigned int NPC_VAR_BIPLANE_CURR_TARGET;
}
// signature: zNPCBTBiplaneTargetChangedCondition::Setup(const Sext::ConditionBase *)
// Range: 0x8019F550 -> 0x8019F5F0
void zNPCBTBiplaneTargetChangedCondition::Setup(class zNPCBTBiplaneTargetChangedCondition * this /* r30 */) {
    // References
    // -> static unsigned int NPC_VAR_BIPLANE_CURR_TARGET;
}
// Range: 0x8019F620 -> 0x8019F63C
bool zNPCBTBiplaneTargetChangedCondition::Evaluate() const {
}
// Range: 0x8019F640 -> 0x8019F65C
void zNPCBTBiplaneTargetChangedCondition::Cleanup(class zNPCBTBiplaneTargetChangedCondition * this /* r6 */) {
    // References
    // -> static unsigned int NPC_VAR_BIPLANE_CURR_TARGET;
}
// Range: 0x8019F660 -> 0x8019F6C8
void zNPCBTBiplaneTargetChangedCondition::ReadNewTarget(class zNPCBTBiplaneTargetChangedCondition * this /* r31 */) {
    // References
    // -> static unsigned int NPC_VAR_BIPLANE_CURR_TARGET;
}
