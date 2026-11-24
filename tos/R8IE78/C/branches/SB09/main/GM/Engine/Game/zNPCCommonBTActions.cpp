/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCCommonBTActions.cpp
*/
char * GENERIC_NAMES[2]; // size: 0x8, address: 0x806BDAC0
static unsigned int GENERIC_HASHES[2]; // size: 0x8, address: 0x807531C0
static class EntityHandleBase dummyHandle; // size: 0x48, address: 0x807531C8
class xVec3 scale; // size: 0xC, address: 0x80753F24
// Range: 0x800DE8D0 -> 0x800DE99C
void zNPCBTIdleAction::ActionAnimInit(class zNPCBTIdleAction * this /* r28 */, char * prefix /* r29 */) {
    {
        // Range: 0x800DE8F8 -> 0x800DE968
        // Local variables
        char animationNameBuffer[32]; // r1+0x8
    }
}
// Range: 0x800DE9A0 -> 0x800DE9AC
void zNPCBTIdleAction::Initialize() {
}
// signature: zNPCBTIdleAction::Setup(const Sext::ActionBase *)
// Range: 0x800DE9B0 -> 0x800DE9BC
void zNPCBTIdleAction::Setup() {
}
// Range: 0x800DE9C0 -> 0x800DEA34
void zNPCBTIdleAction::Begin(class zNPCBTIdleAction * this /* r31 */) {
}
// signature: zNPCBTIdleAction::Update(float)
// Range: 0x800DEA40 -> 0x800DEBE0
enum eTaskState zNPCBTIdleAction::Update(class zNPCBTIdleAction * this /* r31 */) {
    {
        // Range: 0x800DEA8C -> 0x800DEBC8
        // Local variables
        unsigned int loopLimit; // r5
    }
}
// Range: 0x800DEBE0 -> 0x800DEBFC
void zNPCBTIdleAction::End() {
}
// signature: zNPCBTPlayFXAction::Setup(const Sext::ActionBase *)
// Range: 0x800DEC00 -> 0x800DEC0C
void zNPCBTPlayFXAction::Setup() {
}
// Range: 0x800DEC10 -> 0x800DED50
void zNPCBTPlayFXAction::Begin(class zNPCBTPlayFXAction * this /* r28 */) {
    // Local variables
    class Action_NPC_PlayFX * asset; // r31
    class zFXSpawn * fxAsset; // r30
    int bone; // r29
    class xVec3 offset; // r1+0x10
}
// signature: zNPCBTPlayFXAction::Update(float)
// Range: 0x800DED50 -> 0x800DEDEC
enum eTaskState zNPCBTPlayFXAction::Update(class zNPCBTPlayFXAction * this /* r31 */) {
    // Local variables
    class Action_NPC_PlayFX * asset; // r4
    class xVec3 offset; // r1+0x8
}
// Range: 0x800DEDF0 -> 0x800DEE68
void zNPCBTPlayFXAction::End(class zNPCBTPlayFXAction * this /* r31 */) {
    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// signature: zNPCBTPlayAnimationAction::Setup(const Sext::ActionBase *)
// Range: 0x800DEE70 -> 0x800DEE8C
void zNPCBTPlayAnimationAction::Setup() {
}
// Range: 0x800DEE90 -> 0x800DEFA4
void zNPCBTPlayAnimationAction::Begin(class zNPCBTPlayAnimationAction * this /* r31 */) {
    // Local variables
    int index; // r30
    void * rawAnimData; // r29
    class xAnimState * aState; // r0

    // References
    // -> char * GENERIC_NAMES[2];
    // -> static unsigned int GENERIC_HASHES[2];
}
// signature: zNPCBTPlayAnimationAction::Update(float)
// Range: 0x800DEFB0 -> 0x800DF024
enum eTaskState zNPCBTPlayAnimationAction::Update(class zNPCBTPlayAnimationAction * this /* r31 */) {
}
// Range: 0x800DF030 -> 0x800DF04C
void zNPCBTPlayAnimationAction::End() {
}
// Range: 0x800DF050 -> 0x800DF05C
void zNPCBTPlayAnimationTypeAction::Initialize() {
}
// signature: zNPCBTPlayAnimationTypeAction::Setup(const Sext::ActionBase *)
// Range: 0x800DF060 -> 0x800DF08C
void zNPCBTPlayAnimationTypeAction::Setup() {
    // Local variables
    class Action_NPC_PlayAnimationType * asset; // r0
}
// Range: 0x800DF090 -> 0x800DF1C4
void zNPCBTPlayAnimationTypeAction::Begin(class zNPCBTPlayAnimationTypeAction * this /* r31 */) {
    {
        // Range: 0x800DF0D4 -> 0x800DF16C
        // Local variables
        class zVariableEventData eventData; // r1+0x8

        {
            // Range: 0x800DF0E8 -> 0x800DF16C
            // Local variables
            class xBase * faceObject; // r0
        }
    }
}
// signature: zNPCBTPlayAnimationTypeAction::Update(float)
// Range: 0x800DF2C0 -> 0x800DF334
enum eTaskState zNPCBTPlayAnimationTypeAction::Update(class zNPCBTPlayAnimationTypeAction * this /* r31 */) {
}
// Range: 0x800DF340 -> 0x800DF35C
void zNPCBTPlayAnimationTypeAction::End() {
}
// Range: 0x800DF360 -> 0x800DF5F4
enum eTaskState zNPCBTRotateToFaceAction::Update(class zNPCBTRotateToFaceAction * this /* r30 */, float dt /* f30 */) {
    // Local variables
    class Action_NPC_Rotate_To_Face * asset; // r31
    enum eNPCRotateToFace faceType; // r4
    class xVec3 faceTarget; // r1+0x20
    class xVec3 desiredDirection; // r1+0x14
    float turnToFaceAngle; // f0
    float curAngle; // f0
    float diffAngle; // f1
    float turnSpeed; // f3
    float yawDelta; // f2
    float halfConeAngle; // f4

    {
        // Range: 0x800DF3E4 -> 0x800DF410
        // Local variables
        class zPlayer * player; // r0
    }
    {
        // Range: 0x800DF41C -> 0x800DF460
        // Local variables
        bool readResult; // r0
    }
    {
        // Range: 0x800DF460 -> 0x800DF4A4
        // Local variables
        bool readResult; // r0
    }
    {
        // Range: 0x800DF52C -> 0x800DF554
        // Local variables
        float max; // f0
    }
    {
        // Range: 0x800DF558 -> 0x800DF578
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
// Range: 0x800DF600 -> 0x800DF62C
enum eTaskState zNPCBTShowAction::Update() {
}
// signature: zNPCBTHideAction::Update(float)
// Range: 0x800DF630 -> 0x800DF65C
enum eTaskState zNPCBTHideAction::Update() {
}
// Range: 0x800DF660 -> 0x800DF670
void zNPCBTFadeOutAction::Begin() {
}
// signature: zNPCBTFadeOutAction::Update(float)
// Range: 0x800DF670 -> 0x800DF720
enum eTaskState zNPCBTFadeOutAction::Update() {
    // Local variables
    float duration; // f1
    float alpha; // f31
}
// signature: zNPCBTFadeInAction::Update(float)
// Range: 0x800DF840 -> 0x800DF8EC
enum eTaskState zNPCBTFadeInAction::Update() {
    // Local variables
    float duration; // f1
    float alpha; // f31
}
// signature: zNPCBTSetCollidesAction::Setup(const Sext::ActionBase *)
// Range: 0x800DF8F0 -> 0x800DF8FC
void zNPCBTSetCollidesAction::Setup() {
}
// signature: zNPCBTSetCollidesAction::Update(float)
// Range: 0x800DF900 -> 0x800DF95C
enum eTaskState zNPCBTSetCollidesAction::Update() {
}
// signature: zNPCBTPlayNPCFXAction::Setup(const Sext::ActionBase *)
// Range: 0x800DF960 -> 0x800DF974
void zNPCBTPlayNPCFXAction::Setup() {
}
// Range: 0x800DF980 -> 0x800DF9C4
void zNPCBTPlayNPCFXAction::Begin(class zNPCBTPlayNPCFXAction * this /* r31 */) {
}
// signature: zNPCBTPlayNPCFXAction::Update(float)
// Range: 0x800DF9D0 -> 0x800DFA2C
enum eTaskState zNPCBTPlayNPCFXAction::Update() {
}
// Range: 0x800DFA30 -> 0x800DFA50
void zNPCBTPlayNPCFXAction::End() {
}
// signature: zNPCBTPlayEELFXAction::Setup(const Sext::ActionBase *)
// Range: 0x800DFA50 -> 0x800DFAD4
void zNPCBTPlayEELFXAction::Setup(class zNPCBTPlayEELFXAction * this /* r30 */) {
    // Local variables
    class ElectricArc * electric; // r0

    // References
    // -> static class EntityHandleBase dummyHandle;
}
// Range: 0x800DFAE0 -> 0x800DFB00
void zNPCBTPlayEELFXAction::Begin(class zNPCBTPlayEELFXAction * this /* r4 */) {
}
// signature: zNPCBTPlayEELFXAction::Update(float)
// Range: 0x800DFB00 -> 0x800DFB34
enum eTaskState zNPCBTPlayEELFXAction::Update() {
}
// Range: 0x800DFB40 -> 0x800DFB60
void zNPCBTPlayEELFXAction::End() {
}
// Range: 0x800DFB60 -> 0x800DFBD4
void zNPCBTPlayEELFXAction::Deinitialize(class zNPCBTPlayEELFXAction * this /* r30 */) {
}
// Range: 0x800DFBE0 -> 0x800DFC38
void zNPCBTGenerateCollectiblesAction::Setup(class zNPCBTGenerateCollectiblesAction * this /* r30 */, class ActionBase * assetData /* r31 */) {
    // Local variables
    class Action_NPC_GenerateCollectibles * asset; // r0
}
// signature: zNPCBTGenerateCollectiblesAction::Update(float)
// Range: 0x800DFC40 -> 0x800DFD1C
enum eTaskState zNPCBTGenerateCollectiblesAction::Update(class zNPCBTGenerateCollectiblesAction * this /* r30 */) {
    {
        // Range: 0x800DFC5C -> 0x800DFD04
        // Local variables
        class zCollectibleSpawner * spawner; // r31

        {
            // Range: 0x800DFC6C -> 0x800DFD04
            // Local variables
            class xVec3 spawnLocation; // r1+0x8
        }
    }

    // References
    // -> class xVec3 scale;
    // -> class xVec3 m_DoubleVec;
}
// signature: zNPCBTSetCollectibleAction::Update(float)
// Range: 0x800DFD20 -> 0x800DFD40
enum eTaskState zNPCBTSetCollectibleAction::Update() {
}
// signature: zNPCBTStartHeadTrackingAction::Update(float)
// Range: 0x800DFD40 -> 0x800DFE30
enum eTaskState zNPCBTStartHeadTrackingAction::Update(class zNPCBTStartHeadTrackingAction * this /* r30 */) {
    // Local variables
    class Action_NPC_StartHeadTracking * asset; // r4

    {
        // Range: 0x800DFD74 -> 0x800DFDC8
        // Local variables
        enum ePlayerName playerName; // r4
    }
    {
        // Range: 0x800DFDC8 -> 0x800DFE18
        // Local variables
        enum eVarType type; // r0
        unsigned int varName; // r31

        {
            // Range: 0x800DFDDC -> 0x800DFE18
            // Local variables
            class zPlayer * p; // r1+0x8
        }
    }
}
// Range: 0x800DFE30 -> 0x800DFF3C
enum eTaskState zNPCBTExtraCollisionAction::Update(class zNPCBTExtraCollisionAction * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class Action_NPC_Extra_Collision * asset; // r31
    class xMat4x3 collisMat; // r1+0x50
    class xVec3 offset; // r1+0x40

    // References
    // -> class xQuat g_IQ;
}
// Range: 0x800DFF40 -> 0x800E009C
void zNPCBTExtraCollisionAction::Begin(class zNPCBTExtraCollisionAction * this /* r28 */) {
    // Local variables
    class Action_NPC_Extra_Collision * asset; // r29
    class xMat4x3 collisMat; // r1+0x30
    class xVec3 scaleVec; // r1+0x20
    float radius; // f31
    class hkpShape * collisionShape; // r0

    // References
    // -> class xMat4x3 g_I3;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x800E00A0 -> 0x800E00F8
void zNPCBTExtraCollisionAction::End(class zNPCBTExtraCollisionAction * this /* r31 */) {
}
// Range: 0x800E0100 -> 0x800E0110
void zNPCBTExtraCollisionAction::Cleanup() {
}
// signature: zNPCBTPositionEntAtBoneAction::Update(float)
// Range: 0x800E0110 -> 0x800E01F8
enum eTaskState zNPCBTPositionEntAtBoneAction::Update(class zNPCBTPositionEntAtBoneAction * this /* r29 */) {
    // Local variables
    class Action_NPC_PositionEntAtBone * asset; // r31
    class xBase * base; // r30
    class xMat4x3 mat; // r1+0x20
    class xVec3 offset; // r1+0x14

    {
        // Range: 0x800E0198 -> 0x800E01B8
        // Local variables
        class zTrigger * trigger; // r0
    }
}
// signature: zNPCBTTextureSwapAction::Update(float)
// Range: 0x800E0200 -> 0x800E0368
enum eTaskState zNPCBTTextureSwapAction::Update() {
}
// signature: zNPCBT_GenericSpawnerInit_Action::Setup(const Sext::ActionBase *)
// Range: 0x800E0370 -> 0x800E0378
void zNPCBT_GenericSpawnerInit_Action::Setup() {
}
// signature: zNPCBT_GenericSpawnerInit_Action::Update(float)
// Range: 0x800E0380 -> 0x800E03E4
enum eTaskState zNPCBT_GenericSpawnerInit_Action::Update() {
    // Local variables
    float spawnDelay; // r1+0x8
}
// Range: 0x800E03F0 -> 0x800E0698
void zNPCBT_SpawnNPC_ThrowToLocation_Action::Begin(class zNPCBT_SpawnNPC_ThrowToLocation_Action * this /* r29 */) {
    // Local variables
    class Action_NPC_SpawnNPC_ThrowToLocation * asset; // r31
    class zNPCGenericSpawner * spawner; // r30
    float atDistance; // f31
    class xMat4x3 initMat; // r1+0x60
    int boneCount; // r0
    class xAnimTransition * transition; // r27
}
// Range: 0x800E06A0 -> 0x800E091C
enum eTaskState zNPCBT_SpawnNPC_ThrowToLocation_Action::Update(class zNPCBT_SpawnNPC_ThrowToLocation_Action * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class Action_NPC_SpawnNPC_ThrowToLocation * asset; // r0
    class xVec3 tempy; // r1+0x14
    class NPCAsset * enemyAsset; // r0

    {
        // Range: 0x800E06DC -> 0x800E0714
        // Local variables
        class zNPCGenericSpawner * spawner; // r0
    }
    {
        // Range: 0x800E0720 -> 0x800E0880
        // Local variables
        class xMat3x3 rot; // r1+0x20
        float totAngle; // f2
        float angleWithHoriz; // f0
        class xVec3 down; // r1+0x8
    }
}
// Range: 0x800E0920 -> 0x800E0964
void zNPCBT_SpawnNPC_ThrowToLocation_Action::End() {
}
// signature: zNPCBT_Spawner_SetRotateToFaceVariable::Update(float)
// Range: 0x800E0970 -> 0x800E0A10
enum eTaskState zNPCBT_Spawner_SetRotateToFaceVariable::Update(class zNPCBT_Spawner_SetRotateToFaceVariable * this /* r30 */) {
    // Local variables
    class zNPCGenericSpawner * spawner; // r31
    class xVec3 facePos; // r1+0x8
    bool writeResult; // r0

    // References
    // -> static unsigned int NPC_VAR_ROTATE_TO_FACE_POS;
}
// signature: zNPCBT_Spawner_UnreserveNPC::Update(float)
// Range: 0x800E0A10 -> 0x800E0A58
enum eTaskState zNPCBT_Spawner_UnreserveNPC::Update() {
    // Local variables
    class zNPCGenericSpawner * spawner; // r31
}
// Range: 0x800E0A60 -> 0x800E0B64
void zNPCBT_InstantSpawnNPC_Action::Begin(class zNPCBT_InstantSpawnNPC_Action * this /* r30 */) {
    // Local variables
    unsigned int variableNameHash; // r31
    class uid entUid; // r1+0x8
    class xMat4x3 initMat; // r1+0x20

    {
        // Range: 0x800E0AB0 -> 0x800E0B20
        {
            // Range: 0x800E0AD4 -> 0x800E0B20
            // Local variables
            class xVec3 pos; // r1+0x10
            class xBase * pBase; // r4
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCBT_InstantSpawnNPC_Action::Update(float)
// Range: 0x800E0B70 -> 0x800E0BEC
enum eTaskState zNPCBT_InstantSpawnNPC_Action::Update(class zNPCBT_InstantSpawnNPC_Action * this /* r31 */) {
}
// Range: 0x800E0BF0 -> 0x800E0C6C
void zNPCBT_InstantSpawnNPC_Action::End(class zNPCBT_InstantSpawnNPC_Action * this /* r31 */) {
}
