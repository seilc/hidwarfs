/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUPCrocBoss.cpp
*/
static unsigned int NPC_VAR_CROC_AI_MODE; // size: 0x4, address: 0x80822DC4
static unsigned int NPC_VAR_CROC_DRIFT_POS; // size: 0x4, address: 0x80822DC8
static unsigned int NPC_VAR_CROC_DRIFT_DIST; // size: 0x4, address: 0x80822DCC
static unsigned int NPC_VAR_CROC_DRIFT_DURATION; // size: 0x4, address: 0x80822DD0
static unsigned int NPC_VAR_CROC_DRIFT_OVERRIDE; // size: 0x4, address: 0x80822DD4
static unsigned int NPC_VAR_CROC_KNOCK_OUT_AVAILABLE; // size: 0x4, address: 0x80822DD8
static unsigned int NPC_VAR_CROC_SUBMERGE_FLAG; // size: 0x4, address: 0x80822DDC
static bool playerDead; // size: 0x1, address: 0x80822DE0
static float overshoot; // size: 0x4, address: 0x807AF8BC
static float yThresh; // size: 0x4, address: 0x807AF8C0
static float knockbackDist; // size: 0x4, address: 0x807AF8C4
static float cosAngleThresh; // size: 0x4, address: 0x807AF8CC
// Range: 0x801C99E0 -> 0x801C9A40
void zNPCCrocBTBrainAction::Begin(class zNPCCrocBTBrainAction * this /* r31 */) {
    // References
    // -> static bool playerDead;
}
// Range: 0x801C9A40 -> 0x801C9A44
void zNPCCrocBTBrainAction::Cleanup() {
}
// Range: 0x801C9A50 -> 0x801C9C78
enum eTaskState zNPCCrocBTBrainAction::Update(class zNPCCrocBTBrainAction * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 crocPos; // r1+0x4C

    {
        // Range: 0x801C9AC4 -> 0x801C9B20
        // Local variables
        float zPos; // f2
        float xPos; // f3
    }
    {
        // Range: 0x801C9B24 -> 0x801C9C54
        // Local variables
        class zFXSpawn * fxSpawn; // r0
        class xVec3 spawnPoint; // r1+0x40
    }

    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// Range: 0x801C9C80 -> 0x801C9E48
class zPlayer * GetClosestPlayerInWater(class zNPCBase * pNPC /* r26 */, bool zOnly /* r27 */) {
    // Local variables
    class zWallNet * wallnet; // r30
    float minDist2; // f30
    class zPlayer * chosenPlayer; // r29

    {
        // Range: 0x801C9CC8 -> 0x801C9E08
        // Local variables
        int i; // r28

        {
            // Range: 0x801C9CC8 -> 0x801C9E08
            {
                // Range: 0x801C9CE0 -> 0x801C9E08
                // Local variables
                float dist2; // f0
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801C9E50 -> 0x801C9F04
bool zNPCBTCrocPlayerInAttackRangeCondition::Evaluate(class zNPCBTCrocPlayerInAttackRangeCondition * this /* r31 */) const {
    // Local variables
    float attackRange; // f31
    class zPlayer * player; // r0
    float dist2; // f0
}
// signature: zNPCCrocBTWriteTargetPositionAction::Update(float)
// Range: 0x801C9F10 -> 0x801CA20C
enum eTaskState zNPCCrocBTWriteTargetPositionAction::Update(class zNPCCrocBTWriteTargetPositionAction * this /* r31 */) {
    // Local variables
    bool useZOnly; // r30
    int submergeFlagSet; // r0
    class xVec3 pos; // r1+0x38
    class zPlayer * player; // r0
    class xVec3 chargeDir; // r1+0x2C

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> static float overshoot;
    // -> class xVec3 m_UnitAxisX;
    // -> class xVec3 m_Null;
    // -> static unsigned int NPC_VAR_CROC_SUBMERGE_FLAG;
}
// signature: zNPCCrocBTWriteKODriftPoint::Update(float)
// Range: 0x801CA210 -> 0x801CA570
enum eTaskState zNPCCrocBTWriteKODriftPoint::Update(class zNPCCrocBTWriteKODriftPoint * this /* r30 */) {
    // Local variables
    class xVec3 driftPos; // r1+0x64

    {
        // Range: 0x801CA27C -> 0x801CA480
        // Local variables
        float driftDist; // f31
        class xVec3 centerVec; // r1+0x4C
        class xVec3 poolCenter; // r1+0x58
    }
    {
        // Range: 0x801CA480 -> 0x801CA4AC
        // Local variables
        class EntityHandleBase * movepointHandle; // r0
    }

    // References
    // -> static unsigned int NPC_VAR_CROC_DRIFT_POS;
    // -> static unsigned int NPC_VAR_CROC_DRIFT_DIST;
    // -> static unsigned int NPC_VAR_CROC_DRIFT_OVERRIDE;
}
// Range: 0x801CA570 -> 0x801CA5A4
void zNPCCrocBTKODrift::Begin() {
}
// Range: 0x801CA5B0 -> 0x801CA870
enum eTaskState zNPCCrocBTKODrift::Update(class zNPCCrocBTKODrift * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float timePercent; // f31
    float blendPos; // f0
    class xVec3 currPos; // r1+0x74

    // References
    // -> static unsigned int NPC_VAR_CROC_DRIFT_DURATION;
    // -> static unsigned int NPC_VAR_CROC_DRIFT_POS;
}
// signature: BspCollisionListener::contactPointAddedCallback(const hkpRootCdPoint &)
// Range: 0x801CA870 -> 0x801CAA34
void BspCollisionListener::contactPointAddedCallback(class BspCollisionListener * this /* r31 */) {
    // Local variables
    class hkpWorldObject * worldObjA; // r6
    class hkpWorldObject * worldObjB; // r7
    class xBase * baseA; // r0
    class xBase * baseB; // r29
    class hkVector4 normalhk4; // r1+0x20
    class xVec3 normal; // r1+0x10

    // References
    // -> static float yThresh;
}
// Range: 0x801CAA40 -> 0x801CAAC4
void zNPCBTCrocBossKnockOutOnContactBspAction::Begin(class zNPCBTCrocBossKnockOutOnContactBspAction * this /* r30 */) {
    // References
    // -> struct {} __vt__20BspCollisionListener;
    // -> class zFactory factory;
}
// Range: 0x801CAAE0 -> 0x801CABE4
void zNPCBTCrocBossKnockOutOnContactBspAction::Cleanup(class zNPCBTCrocBossKnockOutOnContactBspAction * this /* r31 */) {
    // References
    // -> class zFactory factory;
}
// signature: zNPCBTCrocBossKnockOutOnContactBspAction::OnContactPlayer(xBase *, xVec3 *)
// Range: 0x801CABF0 -> 0x801CAED4
void zNPCBTCrocBossKnockOutOnContactBspAction::OnContactPlayer(class zNPCBTCrocBossKnockOutOnContactBspAction * this /* r30 */, class xBase * playerBase /* r31 */) {
    // Local variables
    int knockOutAvailable; // r0
    float damage; // f0
    class xVec3 playerKnockbackVec; // r1+0x68
    class xVec3 playerDelta; // r1+0x5C
    class zCombatDamageInfo damageInfo; // r1+0x78
    class EventActionDamagePlayer params; // r1+0x50
    class zUPPlayer * pPlayer; // r0

    // References
    // -> static bool playerDead;
    // -> class xVec3 m_Null;
    // -> static float knockbackDist;
    // -> static unsigned int NPC_VAR_CROC_KNOCK_OUT_AVAILABLE;
}
// Range: 0x801CAEE0 -> 0x801CB124
void zNPCBTCrocBossKnockOutOnContactBspAction::OnContactNonPlayer(class zNPCBTCrocBossKnockOutOnContactBspAction * this /* r29 */, class xBase * base /* r30 */, class xVec3 * normal /* r28 */) {
    // Local variables
    int knockOutAvailable; // r0

    {
        // Range: 0x801CAFD0 -> 0x801CB104
        // Local variables
        float cosAngleOfIncidence; // f0
        float animTime; // f1
        bool movingFast; // r0

        {
            // Range: 0x801CB018 -> 0x801CB104
            {
                // Range: 0x801CB044 -> 0x801CB090
                // Local variables
                class zEntSimpleObj * simp; // r0

                {
                    // Range: 0x801CB058 -> 0x801CB090
                    // Local variables
                    class EventActionDestructableFlag params; // r1+0x8
                }
            }
        }
    }

    // References
    // -> static float cosAngleThresh;
    // -> static unsigned int NPC_VAR_CROC_AI_MODE;
    // -> static unsigned int NPC_VAR_CROC_KNOCK_OUT_AVAILABLE;
}
