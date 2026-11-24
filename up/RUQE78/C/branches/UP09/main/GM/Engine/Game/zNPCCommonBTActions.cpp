/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCCommonBTActions.cpp
*/
char * GENERIC_NAMES[2]; // size: 0x8, address: 0x807AF770
static unsigned int GENERIC_HASHES[2]; // size: 0x8, address: 0x80822B48
static class EntityHandleBase dummyHandle; // size: 0x48, address: 0x80822B50
static class xVec3 scale; // size: 0xC, address: 0x80822B98
// Range: 0x801A8EE0 -> 0x801A8EEC
void zNPCBTIdleAction::Initialize() {
}
// signature: zNPCBTIdleAction::Setup(const Sext::ActionBase *)
// Range: 0x801A8EF0 -> 0x801A8EFC
void zNPCBTIdleAction::Setup() {
}
// Range: 0x801A8F00 -> 0x801A916C
void zNPCBTIdleAction::Begin(class zNPCBTIdleAction * this /* r31 */) {
}
// signature: zNPCBTIdleAction::Update(float)
// Range: 0x801A9170 -> 0x801A9AB4
enum eTaskState zNPCBTIdleAction::Update(class zNPCBTIdleAction * this /* r31 */) {
    {
        // Range: 0x801A9264 -> 0x801A9A94
        // Local variables
        unsigned int loopLimit; // r5
    }
}
// Range: 0x801A9B70 -> 0x801A9B8C
void zNPCBTIdleAction::End() {
}
// signature: zNPCBTPlayFXAction::Setup(const Sext::ActionBase *)
// Range: 0x801A9B90 -> 0x801A9B9C
void zNPCBTPlayFXAction::Setup() {
}
// Range: 0x801A9BA0 -> 0x801A9D78
void zNPCBTPlayFXAction::Begin(class zNPCBTPlayFXAction * this /* r29 */) {
    // Local variables
    class Action_NPC_PlayFX * asset; // r31
    class zFXSpawn * fxAsset; // r30
    int bone; // r31
    class xVec3 offset; // r1+0x10

    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// signature: zNPCBTPlayFXAction::Update(float)
// Range: 0x801A9D80 -> 0x801A9E9C
enum eTaskState zNPCBTPlayFXAction::Update(class zNPCBTPlayFXAction * this /* r31 */) {
    // Local variables
    class Action_NPC_PlayFX * asset; // r5
    class xVec3 offset; // r1+0x8
}
// Range: 0x801A9EA0 -> 0x801AA040
void zNPCBTPlayFXAction::End(class zNPCBTPlayFXAction * this /* r29 */) {
    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// signature: zNPCBTPlayAnimationAction::Setup(const Sext::ActionBase *)
// Range: 0x801AA050 -> 0x801AA06C
void zNPCBTPlayAnimationAction::Setup() {
}
// Range: 0x801AA070 -> 0x801AA360
void zNPCBTPlayAnimationAction::Begin(class zNPCBTPlayAnimationAction * this /* r31 */) {
    // Local variables
    int index; // r5
    void * rawAnimData; // r29
    class xAnimState * aState; // r0

    // References
    // -> char * GENERIC_NAMES[2];
    // -> static unsigned int GENERIC_HASHES[2];
}
// signature: zNPCBTPlayAnimationAction::Update(float)
// Range: 0x801AA360 -> 0x801AA474
enum eTaskState zNPCBTPlayAnimationAction::Update(class zNPCBTPlayAnimationAction * this /* r31 */) {
}
// Range: 0x801AA480 -> 0x801AA49C
void zNPCBTPlayAnimationAction::End() {
}
// Range: 0x801AA4A0 -> 0x801AA4AC
void zNPCBTPlayAnimationTypeAction::Initialize() {
}
// signature: zNPCBTPlayAnimationTypeAction::Setup(const Sext::ActionBase *)
// Range: 0x801AA4B0 -> 0x801AA4D4
void zNPCBTPlayAnimationTypeAction::Setup() {
    // Local variables
    class Action_NPC_PlayAnimationType * asset; // r0
}
// Range: 0x801AA4E0 -> 0x801AA784
void zNPCBTPlayAnimationTypeAction::Begin(class zNPCBTPlayAnimationTypeAction * this /* r31 */) {
    {
        // Range: 0x801AA538 -> 0x801AA5F4
        // Local variables
        class zVariableEventData eventData; // r1+0x8
    }
}
// signature: zNPCBTPlayAnimationTypeAction::Update(float)
// Range: 0x801AA790 -> 0x801AA8A4
enum eTaskState zNPCBTPlayAnimationTypeAction::Update(class zNPCBTPlayAnimationTypeAction * this /* r31 */) {
}
// Range: 0x801AA8B0 -> 0x801AA8CC
void zNPCBTPlayAnimationTypeAction::End() {
}
// signature: zNPCBTBadgeCollectedAction::Update(float)
// Range: 0x801AA8D0 -> 0x801AAA74
enum eTaskState zNPCBTBadgeCollectedAction::Update() {
    // Local variables
    class Action_NPC_BadgeCollected * asset; // r27
    int badgeNum; // r4
    int gold; // r31
    int silver; // r30
    int bronze; // r29
    int health; // r28
    class xVec3 pos; // r1+0x2C
    class xVec3 offset; // r1+0x20

    // References
    // -> class zPlayerInventory inventory;
    // -> static unsigned int NPC_VAR_BADGE_POS;
}
// Range: 0x801AAA80 -> 0x801AAFA4
enum eTaskState zNPCBTRotateToFaceAction::Update(class zNPCBTRotateToFaceAction * this /* r29 */, float dt /* f31 */) {
    // Local variables
    class Action_NPC_Rotate_To_Face * asset; // r31
    enum eNPCRotateToFace faceType; // r0
    class xEntFrame * frame; // r30
    class xVec3 faceTarget; // r1+0x38
    class xVec3 desiredDirection; // r1+0x2C
    float turnToFaceAngle; // f0
    float curAngle; // f0
    float diffAngle; // f0
    float turnSpeed; // f3
    float yawDelta; // f1
    float halfConeAngle; // f4

    {
        // Range: 0x801AAB20 -> 0x801AAB58
        // Local variables
        class zPlayer * player; // r0
    }
    {
        // Range: 0x801AAB5C -> 0x801AABF4
        // Local variables
        class zPlayer * player; // r28
    }
    {
        // Range: 0x801AAEE0 -> 0x801AAF08
        // Local variables
        float max; // f0
    }
    {
        // Range: 0x801AAF0C -> 0x801AAF2C
        // Local variables
        float max; // f0
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> class xVec3 m_Null;
    // -> static unsigned int NPC_VAR_ROTATE_TO_FACE_POS;
    // -> class xGlobals * xglobals;
}
// signature: zNPCBTShowAction::Update(float)
// Range: 0x801AAFB0 -> 0x801AB068
enum eTaskState zNPCBTShowAction::Update() {
    // References
    // -> class Scene * primaryScene;
}
// signature: zNPCBTHideAction::Update(float)
// Range: 0x801AB070 -> 0x801AB1B0
enum eTaskState zNPCBTHideAction::Update() {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x801AB1B0 -> 0x801AB1C0
void zNPCBTFadeOutAction::Begin() {
}
// signature: zNPCBTFadeOutAction::Update(float)
// Range: 0x801AB1C0 -> 0x801AB2EC
enum eTaskState zNPCBTFadeOutAction::Update() {
    // Local variables
    float duration; // f1
    float alpha; // f31
}
// signature: zNPCBTFadeInAction::Update(float)
// Range: 0x801AB300 -> 0x801AB428
enum eTaskState zNPCBTFadeInAction::Update() {
    // Local variables
    float duration; // f1
    float alpha; // f31
}
// signature: zNPCBTSetCollidesAction::Update(float)
// Range: 0x801AB440 -> 0x801AB500
enum eTaskState zNPCBTSetCollidesAction::Update() {
}
// signature: zNPCBTPlayNPCFXAction::Setup(const Sext::ActionBase *)
// Range: 0x801AB500 -> 0x801AB514
void zNPCBTPlayNPCFXAction::Setup() {
}
// Range: 0x801AB520 -> 0x801AB564
void zNPCBTPlayNPCFXAction::Begin(class zNPCBTPlayNPCFXAction * this /* r31 */) {
}
// signature: zNPCBTPlayNPCFXAction::Update(float)
// Range: 0x801AB570 -> 0x801AB5CC
enum eTaskState zNPCBTPlayNPCFXAction::Update() {
}
// Range: 0x801AB5D0 -> 0x801AB65C
void zNPCBTPlayNPCFXAction::End() {
}
// signature: zNPCBTPlayEELFXAction::Setup(const Sext::ActionBase *)
// Range: 0x801AB660 -> 0x801AB6EC
void zNPCBTPlayEELFXAction::Setup(class zNPCBTPlayEELFXAction * this /* r30 */) {
    // Local variables
    class ElectricArc * electric; // r0

    // References
    // -> static class EntityHandleBase dummyHandle;
}
// Range: 0x801AB6F0 -> 0x801AB710
void zNPCBTPlayEELFXAction::Begin(class zNPCBTPlayEELFXAction * this /* r4 */) {
}
// signature: zNPCBTPlayEELFXAction::Update(float)
// Range: 0x801AB710 -> 0x801AB7F4
enum eTaskState zNPCBTPlayEELFXAction::Update(class zNPCBTPlayEELFXAction * this /* r26 */) {
    {
        // Range: 0x801AB740 -> 0x801AB7CC
        // Local variables
        int j; // r29

        {
            // Range: 0x801AB740 -> 0x801AB7CC
            // Local variables
            class MappedElectricity * p; // r28

            {
                // Range: 0x801AB76C -> 0x801AB7B8
                // Local variables
                unsigned int i; // r27

                {
                    // Range: 0x801AB76C -> 0x801AB7B8
                    // Local variables
                    class xVec3 pt; // r1+0x8
                }
            }
        }
    }
}
// Range: 0x801AB800 -> 0x801AB820
void zNPCBTPlayEELFXAction::End() {
}
// Range: 0x801AB820 -> 0x801AB89C
void zNPCBTPlayEELFXAction::Deinitialize(class zNPCBTPlayEELFXAction * this /* r30 */) {
}
// signature: zNPCBTGenerateCollectiblesAction::Setup(const Sext::ActionBase *)
// Range: 0x801AB8A0 -> 0x801AB8CC
void zNPCBTGenerateCollectiblesAction::Setup() {
    // Local variables
    class Action_NPC_GenerateCollectibles * asset; // r0
}
// signature: zNPCBTGenerateCollectiblesAction::Update(float)
// Range: 0x801AB8D0 -> 0x801ABAAC
enum eTaskState zNPCBTGenerateCollectiblesAction::Update(class zNPCBTGenerateCollectiblesAction * this /* r30 */) {
    // Local variables
    class zNPCTemplate * npcTemplate; // r0

    {
        // Range: 0x801AB8F0 -> 0x801ABA90
        {
            // Range: 0x801AB95C -> 0x801ABA90
            // Local variables
            class xVec3 spawnLocation; // r1+0x8
        }
    }

    // References
    // -> static class xVec3 scale;
    // -> class xVec3 m_DoubleVec;
}
// signature: zNPCBTSetCollectibleAction::Update(float)
// Range: 0x801ABAB0 -> 0x801ABAD0
enum eTaskState zNPCBTSetCollectibleAction::Update() {
}
// signature: zNPCBTStartHeadTrackingAction::Update(float)
// Range: 0x801ABAD0 -> 0x801ABCDC
enum eTaskState zNPCBTStartHeadTrackingAction::Update(class zNPCBTStartHeadTrackingAction * this /* r29 */) {
    // Local variables
    class Action_NPC_StartHeadTracking * asset; // r4
    class xBase * targetBase; // r31

    {
        // Range: 0x801ABB10 -> 0x801ABB68
        // Local variables
        enum ePlayerName playerName; // r4
    }
    {
        // Range: 0x801ABB68 -> 0x801ABC44
        // Local variables
        enum eVarType type; // r0
        unsigned int varName; // r30

        {
            // Range: 0x801ABB7C -> 0x801ABC44
            // Local variables
            class zUpFloatingObject * obj; // r3
            class zPlayer * p; // r3
        }
    }
}
// signature: zNPCBTStopHeadTrackingAction::Update(float)
// Range: 0x801ABCE0 -> 0x801ABD00
enum eTaskState zNPCBTStopHeadTrackingAction::Update() {
}
// signature: zNPCBT_GenericSpawnerInit_Action::Setup(const Sext::ActionBase *)
// Range: 0x801ABD00 -> 0x801ABD08
void zNPCBT_GenericSpawnerInit_Action::Setup() {
}
// signature: zNPCBT_GenericSpawnerInit_Action::Update(float)
// Range: 0x801ABD10 -> 0x801ABDCC
enum eTaskState zNPCBT_GenericSpawnerInit_Action::Update() {
    // Local variables
    float spawnDelay; // f0
}
// signature: zNPCBT_SpawnPreallocatedNPC_Action::Setup(const Sext::ActionBase *)
// Range: 0x801ABDD0 -> 0x801ABDE0
void zNPCBT_SpawnPreallocatedNPC_Action::Setup() {
}
// Range: 0x801ABDE0 -> 0x801AC624
void zNPCBT_SpawnPreallocatedNPC_Action::Begin(class zNPCBT_SpawnPreallocatedNPC_Action * this /* r28 */) {
    // Local variables
    class zNPCGenericSpawner * spawner; // r30
    class zNPCEntity * spawnerEnt; // r0
    class xEntFrame * spawnedFrame; // r29
    float atDistance; // f31
    class xMat4x3 initMat; // r1+0xA8
    int boneCount; // r0
    class xVec3 down; // r1+0x68
    float angleWithHoriz; // f0
    float totAndle; // f0
    float frames; // f2

    // References
    // -> class Scene * primaryScene;
    // -> class xVec3 m_Null;
}
// Range: 0x801AC630 -> 0x801AC818
enum eTaskState zNPCBT_SpawnPreallocatedNPC_Action::Update(class zNPCBT_SpawnPreallocatedNPC_Action * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class xEntFrame * frame; // r31
    class xVec3 tempy; // r1+0x8
    class NPCAsset * enemyAsset; // r0

    {
        // Range: 0x801AC680 -> 0x801AC6B8
        // Local variables
        class zNPCGenericSpawner * spawner; // r0
    }
    {
        // Range: 0x801AC6CC -> 0x801AC790
        // Local variables
        class xMat3x3 rot; // r1+0x18
    }
}
// Range: 0x801AC8C0 -> 0x801AC940
void zNPCBT_SpawnPreallocatedNPC_Action::End() {
    // Local variables
    class zNPCGenericSpawner * spawner; // r6
}
// signature: zNPCBT_Spawner_SetRotateToFaceVariable::Update(float)
// Range: 0x801AC940 -> 0x801ACAEC
enum eTaskState zNPCBT_Spawner_SetRotateToFaceVariable::Update(class zNPCBT_Spawner_SetRotateToFaceVariable * this /* r31 */) {
    // Local variables
    class zNPCGenericSpawner * spawner; // r0
    class xVec3 facePos; // r1+0x8
    bool writeResult; // r0

    // References
    // -> static unsigned int NPC_VAR_ROTATE_TO_FACE_POS;
}
// Range: 0x801ACAF0 -> 0x801ACCD4
void zNPCBT_InstantSpawnNPC_Action::Begin(class zNPCBT_InstantSpawnNPC_Action * this /* r29 */) {
    // Local variables
    unsigned int variableNameHash; // r30
    class zNPCGenericSpawner * spawner; // r5
    class xMat4x3 initMat; // r1+0x20

    {
        // Range: 0x801ACBBC -> 0x801ACC7C
        {
            // Range: 0x801ACC1C -> 0x801ACC7C
            // Local variables
            class xVec3 pos; // r1+0x10
            class xBase * pBase; // r0
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCBT_InstantSpawnNPC_Action::Update(float)
// Range: 0x801ACCE0 -> 0x801ACDF4
enum eTaskState zNPCBT_InstantSpawnNPC_Action::Update(class zNPCBT_InstantSpawnNPC_Action * this /* r29 */) {
}
