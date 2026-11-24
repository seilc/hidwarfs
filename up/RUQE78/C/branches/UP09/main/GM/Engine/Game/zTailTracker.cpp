/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zTailTracker.cpp
*/
class zFXSpawn * fxAssetSnakeRipple; // size: 0x4, address: 0x80822BAC
class zTailTracker sSingleton; // size: 0x1E0, address: 0x80822BB0
bool procTailEnabled; // size: 0x1, address: 0x807AF814
int bonesWithCollision[15]; // size: 0x3C, address: 0x807AF818
float bonesWithCollisionSize[15]; // size: 0x3C, address: 0x807AF854
float timeSinceDamagedPlayer; // size: 0x4, address: 0x80822D90
class zNPCSnakeBTTailUpdateAction * tailUpdateAction; // size: 0x4, address: 0x80822D94
unsigned int NPC_VAR_SNAKE_PROC_TAIL_ENABLED; // size: 0x4, address: 0x80822D98
unsigned int NPC_VAR_SNAKE_ATTACK_MODE; // size: 0x4, address: 0x80822D9C
unsigned int NPC_VAR_SNAKE_EEL_UID; // size: 0x4, address: 0x80822DA0
unsigned int NPC_VAR_SNAKE_EEL_DAMAGE_DIST; // size: 0x4, address: 0x80822DA4
static bool disableTail; // size: 0x1, address: 0x80822DA8
static float headShift; // size: 0x4, address: 0x807AF890
static float headRadius; // size: 0x4, address: 0x80822DAC
static float tailRadius; // size: 0x4, address: 0x807AF894
static float outOfWaterHeight; // size: 0x4, address: 0x80822DB4
static float depenDist; // size: 0x4, address: 0x807AF898
static float knockbackDist; // size: 0x4, address: 0x807AF89C
static bool eventSent; // size: 0x1, address: 0x80822DB8
static float sphereShift; // size: 0x4, address: 0x807AF8A0
static float radius; // size: 0x4, address: 0x807AF8A4
static float eelDistOverride; // size: 0x4, address: 0x807AF8A8
static float ripplePeriod; // size: 0x4, address: 0x807AF8B4
static float timeUntilNextRipple; // size: 0x4, address: 0x80822DBC
// signature: zTailTracker::ApplyBoneModificationAfterAnimatrices(xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x801C7BF0 -> 0x801C8630
void zTailTracker::ApplyBoneModificationAfterAnimatrices(class zTailTracker * this /* r27 */, class Matrix43 * skinMat /* r28 */, int boneCount /* r29 */) {
    // Local variables
    class xModelInstance * model; // r30
    class MatrixSample * samples; // r0
    class xMat4x3 tailStartMatObject; // r1+0x238
    class xMat4x3 tailStartMatWorld; // r1+0x1F8
    class xMat4x3 potentialSampleMat; // r1+0x1B8
    class xVec3 vecFromLastSample; // r1+0xB8
    float distFromLastSample; // f30
    float boneOffsets[23]; // r1+0x278
    class xVec3 finalBoneWorldPositions[23]; // r1+0x2D4
    class xMat4x3 modelMat; // r1+0x178
    class xMat3x3 invModelRot; // r1+0x148

    {
        // Range: 0x801C8168 -> 0x801C8190
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801C8340 -> 0x801C84F8
        // Local variables
        int i; // r21

        {
            // Range: 0x801C8340 -> 0x801C84F8
            // Local variables
            class xMat4x3 boneWorldMat; // r1+0x108

            {
                // Range: 0x801C8340 -> 0x801C84F8
                // Local variables
                class xMat4x3 mat; // r1+0xC8
                class xVec3 localBoneOffset; // r1+0xAC
            }
        }
    }

    // References
    // -> static float headRadius;
    // -> static float headShift;
    // -> int bonesWithCollision[15];
    // -> class zNPCSnakeBTTailUpdateAction * tailUpdateAction;
    // -> bool procTailEnabled;
    // -> static bool disableTail;
}
// signature: zTailTracker::GetMatForTailOffset(float, xMat4x3 *)
// Range: 0x801C8630 -> 0x801C87D4
void zTailTracker::GetMatForTailOffset(class xMat4x3 * pOutput /* r28 */) {
    // Local variables
    class MatrixSample * samples; // r0
    float distTravelled; // f4
    float prevDistTravelled; // f5
    int index; // r29
    int prevIndex; // r4
    float tweenPos; // f31
    class xQuat before; // r1+0x38
    class xQuat after; // r1+0x28
    class xQuat blended; // r1+0x18
    class xVec3 outputPos; // r1+0x8

    // References
    // -> class zNPCSnakeBTTailUpdateAction * tailUpdateAction;
}
// Range: 0x801C87E0 -> 0x801C886C
int zTailTracker::GetSphereIndexFromHavokObject(class hkpWorldObject * pBody /* r28 */) {
    // Local variables
    int index; // r29

    // References
    // -> int bonesWithCollision[15];
}
// Range: 0x801C8870 -> 0x801C8998
bool zTailTracker::IsInRangeOfSnake(class xVec3 & pos /* r28 */, float range /* f31 */) {
    {
        // Range: 0x801C889C -> 0x801C8958
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x801C889C -> 0x801C8958
            // Local variables
            float curDist2; // f0
            class xMat4x3 collisionSphereMatrix; // r1+0x8
            class Matrix43 collisionSphereTransform; // r1+0x48
        }
    }
}
// Range: 0x801C89A0 -> 0x801C8B08
void zTailTracker::PushSamplesOutOfSphere(class zTailTracker * this /* r26 */, class xVec3 * pusherPos /* r27 */, float pusherRadius /* f31 */) {
    // Local variables
    class MatrixSample * samples; // r29
    int index; // r28

    {
        // Range: 0x801C89F4 -> 0x801C8ACC
        // Local variables
        float combinedRadiusSquared; // f5
        float xzDistSquared; // f0
        class xVec3 delta; // r1+0x14

        {
            // Range: 0x801C89F4 -> 0x801C8ABC
            // Local variables
            float yDelta; // f1
            float newTailPos; // f1
            float tailPushAmount; // f0
        }
    }

    // References
    // -> static float tailRadius;
    // -> class zNPCSnakeBTTailUpdateAction * tailUpdateAction;
}
// Range: 0x801C8B10 -> 0x801C8F80
void zTailTracker::TouchedByPlayer(class zTailTracker * this /* r25 */, class zUPPlayer * pPlayer /* r26 */, class hkpWorldObject * pSnakeHavokObj /* r27 */, class xVec3 * pCollisionNormal /* r28 */) {
    // Local variables
    bool carlOnRope; // r29
    bool jumping; // r3

    {
        // Range: 0x801C8BE0 -> 0x801C8F0C
        // Local variables
        class zCombatDamageInfo damageInfo; // r1+0x90
        class xVec3 playerKnockbackVec; // r1+0x68
        float playerDist; // f0
        class xVec3 playerDelta; // r1+0x80

        {
            // Range: 0x801C8C98 -> 0x801C8D00
            // Local variables
            class xVec3 depenVeloc; // r1+0x74
        }
    }
    {
        // Range: 0x801C8F10 -> 0x801C8F68
        // Local variables
        class xVec3 playerPos; // r1+0x5C
    }

    // References
    // -> static float radius;
    // -> static float sphereShift;
    // -> static bool eventSent;
    // -> class xVec3 m_Null;
    // -> static float knockbackDist;
    // -> float timeSinceDamagedPlayer;
    // -> static float depenDist;
    // -> int bonesWithCollision[15];
    // -> bool procTailEnabled;
    // -> static float outOfWaterHeight;
}
// signature: zTailTracker::MonitorForSnakeBitesEel(float, Sext::uid, zBlackboard *)
// Range: 0x801C8F80 -> 0x801C9160
void zTailTracker::MonitorForSnakeBitesEel(class zTailTracker * this /* r29 */, float eelDamageDistance /* f31 */, class zBlackboard * pBlackboard /* r30 */) {
    // Local variables
    class EntityHandleBase * eelHandle; // r0

    {
        // Range: 0x801C8FE0 -> 0x801C913C
        // Local variables
        float dist; // f0
        float dz; // f3
        float dx; // f2
        class zNPCUPGeneric * pNPC; // r4
        class xVec3 eelPos; // r1+0x8
    }

    // References
    // -> unsigned int NPC_VAR_SNAKE_ATTACK_MODE;
    // -> static float eelDistOverride;
    // -> float timeSinceDamagedPlayer;
    // -> bool procTailEnabled;
}
// Range: 0x801C9160 -> 0x801C91A4
void zNPCSnakeBTTailUpdateAction::Initialize(class zNPCSnakeBTTailUpdateAction * this /* r31 */) {
}
// Range: 0x801C91B0 -> 0x801C9470
void zNPCSnakeBTTailUpdateAction::Begin() {
    // References
    // -> class zFXSpawn * fxAssetSnakeRipple;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> float timeSinceDamagedPlayer;
    // -> class zTailTracker sSingleton;
    // -> int bonesWithCollision[15];
    // -> class xMat4x3 g_I3;
    // -> float bonesWithCollisionSize[15];
    // -> class zNPCSnakeBTTailUpdateAction * tailUpdateAction;
}
// Range: 0x801C9470 -> 0x801C96C4
enum eTaskState zNPCSnakeBTTailUpdateAction::Update(class zNPCSnakeBTTailUpdateAction * this /* r28 */, float dt /* f30 */) {
    // Local variables
    int tailEnabled; // r29
    float eelDamageDistance; // f31
    class uid eelID; // r1+0x20

    // References
    // -> float timeSinceDamagedPlayer;
    // -> class zFXSpawn * fxAssetSnakeRipple;
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
    // -> static float timeUntilNextRipple;
    // -> static float ripplePeriod;
    // -> unsigned int NPC_VAR_SNAKE_EEL_DAMAGE_DIST;
    // -> unsigned int NPC_VAR_SNAKE_EEL_UID;
    // -> unsigned int NPC_VAR_SNAKE_ATTACK_MODE;
    // -> class zTailTracker sSingleton;
    // -> bool procTailEnabled;
    // -> unsigned int NPC_VAR_SNAKE_PROC_TAIL_ENABLED;
}
// Range: 0x801C96D0 -> 0x801C9754
void zNPCSnakeBTTailUpdateAction::End() {
    // References
    // -> int bonesWithCollision[15];
    // -> class zNPCSnakeBTTailUpdateAction * tailUpdateAction;
    // -> class zTailTracker sSingleton;
}
// Range: 0x801C9760 -> 0x801C97C0
void zNPCSnakeBTTailUpdateAction::Deinitialize(class zNPCSnakeBTTailUpdateAction * this /* r31 */) {
}
// signature: zNPCSnakeBTWriteTargetPositionAction::Update(float)
// Range: 0x801C97C0 -> 0x801C9924
enum eTaskState zNPCSnakeBTWriteTargetPositionAction::Update(class zNPCSnakeBTWriteTargetPositionAction * this /* r30 */) {
    // Local variables
    class xVec3 pos; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// Range: 0x801C9930 -> 0x801C99D4
bool zNPCSnakeBTTargetRippleAvailable::Evaluate() const {
    // Local variables
    class xVec3 dummy; // r1+0x44
}
