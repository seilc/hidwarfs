/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800AF0A0 -> 0x80103F88
*/
extern struct {} __vt__26hkpClosestCdPointCollector; // size: 0x14
extern struct {} __vt__18hkReferencedObject; // size: 0x14
extern struct {} __vt__17hkpWorldRayCaster; // size: 0x10
extern struct {} __vt__25hkpAllCdBodyPairCollector; // size: 0x14
extern struct {} __ptmf_null; // size: 0xC
// total size: 0x48
class EntityHandle : public EntityHandleBase {};
// total size: 0xA4
class SystemInstance {
    // Members
    class zFXParticleSystem * mSystem; // offset 0x0, size 0x4
    class Attach * mAttachSystem; // offset 0x4, size 0x4
    int mNumAttractors; // offset 0x8, size 0x4
    class Attractor * mAttractorSystems; // offset 0xC, size 0x4
    int mNumVortices; // offset 0x10, size 0x4
    class Vortex * mVortexSystems; // offset 0x14, size 0x4
    int mNumCollision; // offset 0x18, size 0x4
    class Collision * mCollisionSystems; // offset 0x1C, size 0x4
    class xVec3 mLocalAccelDir; // offset 0x20, size 0xC
    float mLocalAccelMagnitude; // offset 0x2C, size 0x4
    class CullingData mUseCulling; // offset 0x30, size 0x8
    class xBaseTransform mBaseTransform; // offset 0x38, size 0x48
    bool mIsRunning; // offset 0x80, size 0x1
    bool mIsEmitting; // offset 0x81, size 0x1
    bool mIsParentCulled; // offset 0x82, size 0x1
    bool mIsRegistered; // offset 0x83, size 0x1
    int mPoolIdx; // offset 0x84, size 0x4
    class xVec3 mVolumeScale; // offset 0x88, size 0xC
    float mRateLifeTime; // offset 0x94, size 0x4
    float mLifeTimeScale; // offset 0x98, size 0x4
    float mEmitRateScale; // offset 0x9C, size 0x4
    float mEmitAccumulator; // offset 0xA0, size 0x4
};
// total size: 0xC0
class zFXParticleSystem : public xOGEntity {
    // Members
    unsigned int mUVAnimCount; // offset 0x3C, size 0x4
    class xVec4 * mUVAnimList; // offset 0x40, size 0x4
    class FXParticleSystem * mAsset; // offset 0x44, size 0x4
    int mBatchSysID; // offset 0x48, size 0x4
    class zFXParticleLocator mLocator; // offset 0x4C, size 0x4
    class MiniCurve mRateCurve; // offset 0x50, size 0x8
    class MiniCurve mRotationCurve; // offset 0x58, size 0x8
    class MiniCurve mSpeedCurve; // offset 0x60, size 0x8
    class MiniCurve mColorCurve; // offset 0x68, size 0x8
    class MiniCurve mAlphaCurve; // offset 0x70, size 0x8
    class MiniCurve mWidthCurve; // offset 0x78, size 0x8
    class MiniCurve mHeightCurve; // offset 0x80, size 0x8
    class xVec3 mWorldAccelDir; // offset 0x88, size 0xC
    float mWorldAccelMagnitude; // offset 0x94, size 0x4
    class xVec3 mWindDir; // offset 0x98, size 0xC
    float mWindCoeff; // offset 0xA4, size 0x4
    class Turbulence * mTurbulence; // offset 0xA8, size 0x4
    class SystemInstance * mReemitInstance; // offset 0xAC, size 0x4
    unsigned char mOffset_Loc; // offset 0xB0, size 0x1
    unsigned char mOffset_Dir; // offset 0xB1, size 0x1
    unsigned char mOffset_Width; // offset 0xB2, size 0x1
    unsigned char mOffset_Height; // offset 0xB3, size 0x1
    unsigned char mOffset_AlphaF; // offset 0xB4, size 0x1
    unsigned char mOffset_RGBA; // offset 0xB5, size 0x1
    unsigned char mOffset_UVidx; // offset 0xB6, size 0x1
    unsigned char mOffset_Rot; // offset 0xB7, size 0x1
    unsigned char mOffsetTotal; // offset 0xB8, size 0x1
};
// total size: 0x4
class zFXParticleLocator {
    // Members
    unsigned int activityIdx; // offset 0x0, size 0x4
};
// total size: 0x8
class MiniCurve {
    // Members
    float mNumPointsMinus1; // offset 0x0, size 0x4
    float * mLookupTable; // offset 0x4, size 0x4
};
// total size: 0x10
class Turbulence {
    // Members
    float mStrengthMax; // offset 0x0, size 0x4
    unsigned int mUpdateRate; // offset 0x4, size 0x4
    unsigned int mDim; // offset 0x8, size 0x4
    float mInvRange; // offset 0xC, size 0x4
};
// total size: 0x1868
class Attach {
    // Members
    class xEffectAttachIntf * mEntity; // offset 0x0, size 0x4
    float mDelay; // offset 0x4, size 0x4
    float mInvMaxDistance; // offset 0x8, size 0x4
    float mWobbleAmount; // offset 0xC, size 0x4
    class MiniCurve mCurve; // offset 0x10, size 0x8
    class xVec3 mLastPos; // offset 0x18, size 0xC
    class xVec3 mStartPos; // offset 0x24, size 0xC
    class xVec3 mTrailDiff; // offset 0x30, size 0xC
    class xVec3 mCurrentDiff; // offset 0x3C, size 0xC
    unsigned int mTrailIdx; // offset 0x48, size 0x4
    class PositionData mPositionPool[512]; // offset 0x4C, size 0x1800
    class CircularQueue mQueue; // offset 0x184C, size 0x10
    unsigned int mFlagIdxMask; // offset 0x185C, size 0x4
    unsigned int mFlagInitialized; // offset 0x1860, size 0x4
    unsigned char mFlagShift; // offset 0x1864, size 0x1
    bool mInitialized; // offset 0x1865, size 0x1
};
// total size: 0xC
class PositionData {
    // Members
    class xVec3 mDeltaPos; // offset 0x0, size 0xC
};
// total size: 0x10
class CircularQueue {
    // Members
    unsigned int start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int mask; // offset 0x8, size 0x4
    class PositionData * pool; // offset 0xC, size 0x4
};
// total size: 0x20
class Attractor {
    // Members
    class xVec3 mLocation; // offset 0x0, size 0xC
    class xVec3 mOffset; // offset 0xC, size 0xC
    float mStrength; // offset 0x18, size 0x4
    float mFrameStrength; // offset 0x1C, size 0x4
};
// total size: 0x3C
class Vortex {
    // Members
    class xVec3 mLocation; // offset 0x0, size 0xC
    class xVec3 mOffset; // offset 0xC, size 0xC
    class xVec3 mDirection; // offset 0x18, size 0xC
    class xVec3 mOriginalDirection; // offset 0x24, size 0xC
    float mStrength; // offset 0x30, size 0x4
    float mFrameStrength; // offset 0x34, size 0x4
    bool mWorldSpace; // offset 0x38, size 0x1
};
// total size: 0x38
class Collision {
    // Members
    class Shape * mShape; // offset 0x0, size 0x4
    class Effect mEffect; // offset 0x4, size 0x24
    float mPercent; // offset 0x28, size 0x4
    unsigned int mFlagTestedMarked; // offset 0x2C, size 0x4
    unsigned int mFlagFinished; // offset 0x30, size 0x4
    bool mIsWorldOffset; // offset 0x34, size 0x1
};
// total size: 0x4
class Shape {};
// total size: 0x24
class Effect {
    // Members
    bool mAgeRemaining; // offset 0x0, size 0x1
    float mAgeFactor; // offset 0x4, size 0x4
    float mAgeExact; // offset 0x8, size 0x4
    enum BounceTYPE mBounceType; // offset 0xC, size 0x4
    float mEnergyLoss; // offset 0x10, size 0x4
    float mDirectionFactor; // offset 0x14, size 0x4
    class SystemInstance * mEmitInstance; // offset 0x18, size 0x4
    float mEmitPercent; // offset 0x1C, size 0x4
    unsigned int mEmitCount; // offset 0x20, size 0x4
};
enum BounceTYPE {
    None = 0,
    Reflect = 1,
    Refract = 2,
    END_BounceTYPEENUM = 3,
};
// total size: 0x70
class SystemInstance {
    // Members
    class zFXObjectSystem * mSystem; // offset 0x0, size 0x4
    class CullingData mUseCulling; // offset 0x4, size 0x8
    class xBaseTransform mBaseTransform; // offset 0xC, size 0x48
    class xVec3 mVolumeScale; // offset 0x54, size 0xC
    unsigned int mPoolIdx; // offset 0x60, size 0x4
    float mEmitAccumulator; // offset 0x64, size 0x4
    float mEmitRateScale; // offset 0x68, size 0x4
    bool mIsRunning; // offset 0x6C, size 0x1
    bool mIsEmitting; // offset 0x6D, size 0x1
    bool mIsParentCulled; // offset 0x6E, size 0x1
    bool mIsRegistered; // offset 0x6F, size 0x1
};
// total size: 0x78
class zFXObjectSystem : public xOGEntity {
    // Members
    bool isInitialized; // offset 0x3C, size 0x1
    class FXObjectSystem * mAsset; // offset 0x40, size 0x4
    class ModelInstanceAsset * mModelAsset; // offset 0x44, size 0x4
    class zFXObjectLocator mLocator; // offset 0x48, size 0x4
    class zGradientCurve * mYawCurve; // offset 0x4C, size 0x4
    class zGradientCurve * mPitchCurve; // offset 0x50, size 0x4
    class zGradientCurve * mRollCurve; // offset 0x54, size 0x4
    class zGradientCurve * speedCurve; // offset 0x58, size 0x4
    class zGradientCurve * accelCurve; // offset 0x5C, size 0x4
    class zGradientCurve * colorCurve; // offset 0x60, size 0x4
    class zGradientCurve * alphaCurve; // offset 0x64, size 0x4
    class zGradientCurve * heightCurve; // offset 0x68, size 0x4
    class zGradientCurve * widthCurve; // offset 0x6C, size 0x4
    class zGradientCurve * depthCurve; // offset 0x70, size 0x4
};
// total size: 0x4
class zFXObjectLocator {
    // Members
    class activity_data * activity; // offset 0x0, size 0x4
};
// total size: 0x34
class activity_data {
    // Members
    class zFXObjectLocator * owner; // offset 0x0, size 0x4
    class FXObjectSystem * asset; // offset 0x4, size 0x4
    void (* get_offset)(class xVec3 & offset, class emit_volume_data & data); // offset 0x8, size 0x4
    class emit_volume_data volume; // offset 0xC, size 0x28
};
// total size: 0x28
class emit_volume_data {
    // Members
    float radius; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0x24
    class @class circle; // offset 0x4, size 0x10
    class @class line; // offset 0x4, size 0x10
    class @class model_vert; // offset 0x4, size 0x24
    class @class box; // offset 0x4, size 0x18
    class @class curve; // offset 0x4, size 0x4
};
// total size: 0x24
class @class {
    // Members
    class @class circle; // offset 0x0, size 0x10
    class @class line; // offset 0x0, size 0x10
    class @class model_vert; // offset 0x0, size 0x24
    class @class box; // offset 0x0, size 0x18
    class @class curve; // offset 0x0, size 0x4
};
// total size: 0x10
class @class {
    // Members
    float xRadius; // offset 0x0, size 0x4
    float yRadius; // offset 0x4, size 0x4
    float ang_delta; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
};
// total size: 0x10
class @class {
    // Members
    float xRadius; // offset 0x0, size 0x4
    float yRadius; // offset 0x4, size 0x4
    float length; // offset 0x8, size 0x4
    unsigned int cap_weight; // offset 0xC, size 0x4
};
// total size: 0x24
class @class {
    // Members
    int vertices[1]; // offset 0x0, size 0x4
    int surfaceCount[1]; // offset 0x4, size 0x4
    class ModelInstanceAsset * models[1]; // offset 0x8, size 0x4
    class xVec3 modelCenter[1]; // offset 0xC, size 0xC
    int models_size; // offset 0x18, size 0x4
    int total_vertices; // offset 0x1C, size 0x4
    int total_surfaces; // offset 0x20, size 0x4
};
// total size: 0x18
class @class {
    // Members
    class xVec3 dim; // offset 0x0, size 0xC
    class xVec3 halfDim; // offset 0xC, size 0xC
};
// total size: 0x4
class @class {
    // Members
    class CurveEntity * curve; // offset 0x0, size 0x4
};
// total size: 0x48
class zGradientCurve : public xOGEntity {
    // Members
    unsigned int numPoints; // offset 0x3C, size 0x4
    class sCurvePoint * points; // offset 0x40, size 0x4
    float * lookupTable; // offset 0x44, size 0x4
};
// total size: 0xC
class sCurvePoint {
    // Members
    float time; // offset 0x0, size 0x4
    float val; // offset 0x4, size 0x4
    enum eInterpolationType type; // offset 0x8, size 0x4
};
enum eInterpolationType {
    LINEAR = 0,
    EXPONENTIAL = 1,
    SMOOTH = 2,
};
// total size: 0x68
class SystemInstance {
    // Members
    class zRibbon * mSystem; // offset 0x0, size 0x4
    class xFXRibbon * mRibbon; // offset 0x4, size 0x4
    class xVec3 mVelocity; // offset 0x8, size 0xC
    class xVec3 mOffset; // offset 0x14, size 0xC
    class xBaseTransform mBaseTransform; // offset 0x20, size 0x48
};
// total size: 0x80
class zRibbon : public xOGEntity {
    // Members
    class Ribbon * asset; // offset 0x3C, size 0x4
    class config_type config; // offset 0x40, size 0x38
    class curve_node * curveNodes; // offset 0x78, size 0x4
};
// total size: 0x60
class FXScreenWarp : public xOGEntity {
    // Members
    class FXScreenWarp * mAsset; // offset 0x3C, size 0x4
    class xVec3 mLocationOG; // offset 0x40, size 0xC
    class Vector2 mLocation; // offset 0x4C, size 0x8
    class Warp * mWarp; // offset 0x54, size 0x4
    unsigned short mScreenWarpFlags; // offset 0x58, size 0x2
};
// total size: 0x28
class FXScreenWarp : public xBaseScene {
    // Members
    unsigned short type; // offset 0x10, size 0x2
    float radius; // offset 0x14, size 0x4
    float cullDistance; // offset 0x18, size 0x4
    float intensity; // offset 0x1C, size 0x4
    float frequency; // offset 0x20, size 0x4
    float duration; // offset 0x24, size 0x4
};
// total size: 0x38
class Warp {
    // Members
    class Warp * next; // offset 0x0, size 0x4
    class Warp * prev; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    float life; // offset 0xC, size 0x4
    float iduration; // offset 0x10, size 0x4
    float radius; // offset 0x14, size 0x4
    float intensity; // offset 0x18, size 0x4
    float freq; // offset 0x1C, size 0x4
    enum eScreenWarpTypes type; // offset 0x20, size 0x4
    class Vector2 loc2; // offset 0x24, size 0x8
    class Vector2 * trackLoc2; // offset 0x2C, size 0x4
    void (* freeWarpCallback)(class Warp & warp); // offset 0x30, size 0x4
    void * userData; // offset 0x34, size 0x4
};
enum eScreenWarpTypes {
    SCREEN_WARP_TYPE_INVALID = 4294967295,
    SCREEN_WARP_TYPE_WARBLE = 0,
    SCREEN_WARP_TYPE_LENS = 1,
    SCREEN_WARP_TYPE_RIPPLE = 2,
    SCREEN_WARP_TYPE_SHOCKWAVE = 3,
    SCREEN_WARP_TYPE_HEAT_SHIMMER = 4,
    SCREEN_WARP_TYPE_STATIC_LENS = 5,
    SCREEN_WARP_MAX_TYPE = 6,
};
// total size: 0x4
class CreatorI {};
// total size: 0x48
class zNPCGroupBase : public xBase {
    // Members
    class zNPCGroupType * type; // offset 0x34, size 0x4
    class NPCGroupAsset * asset; // offset 0x38, size 0x4
    class zNPCBase * * npcs; // offset 0x3C, size 0x4
    unsigned int npcsNum; // offset 0x40, size 0x4
};
// total size: 0x10
class zNPCGroupType {
    // Members
    enum eNPCGroupType npcGroupTypeEnum; // offset 0x0, size 0x4
    class zNPCGroupBase * (* allocateNPCGroupFunction)(class EntityHandleBase * handle); // offset 0x4, size 0x4
    unsigned int npcGroupTID_ID; // offset 0x8, size 0x4
};
enum eNPCGroupType {
    eNPCGroupType_Unknown = 4294967295,
    eNPCGroupType_Circle = 0,
    eNPCGroupType_SpaceInvaders = 1,
    eNPCGroupTypeCount = 2,
    eNPCGroupTypeForceInt = 2147483647,
};
// total size: 0x8
class zNPCSteeringOld : public zNPCComponent {};
// total size: 0x18
class zNPCSteeringCollisionHandler : public hkReferencedObject, public zNPCCollisionListener {
    // Members
    int currentNumberOfUserEdgesAdded; // offset 0x10, size 0x4
    bool checkForWallnetEdges; // offset 0x14, size 0x1
    bool collidedWithWallnetEdge; // offset 0x15, size 0x1
};
// total size: 0x28
class zNPCSteeringRigidBodyCollisionHandler : public hkReferencedObject, public zNPCRigidBodyCollisionListener {
    // Members
    int currentNumberOfUserEdgesAdded; // offset 0x14, size 0x4
    bool checkForWallnetEdges; // offset 0x18, size 0x1
    bool collidedWithWallnetEdge; // offset 0x19, size 0x1
    class hkArray m_verticalContactPoints; // offset 0x1C, size 0xC
};
// total size: 0x1E8
class zNPCPerception : public zNPCComponent {
    // Members
    class zWallNet * npcWallNet; // offset 0x8, size 0x4
    class NPCPerceptionAsset * perceptionAsset; // offset 0xC, size 0x4
    class zNPCPerceptionTarget targets[4]; // offset 0x10, size 0x1D0
    unsigned int targetBitMask; // offset 0x1E0, size 0x4
    enum eStatus status; // offset 0x1E4, size 0x4
};
// total size: 0x8
class NPCPerceptionAsset {
    // Members
    class __PerceptionTypes__ PerceptionTypes; // offset 0x0, size 0x8
};
// total size: 0x8
class __PerceptionTypes__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x4
class Pointer32 {
    // Members
    unsigned int _p; // offset 0x0, size 0x4
};
// total size: 0x74
class zNPCPerceptionTarget {
    // Members
    class xEnt * targetEnt; // offset 0x0, size 0x4
    class zNPCPerception * ownerNpcPerc; // offset 0x4, size 0x4
    class zPerceptionType types[6]; // offset 0x8, size 0x60
    class zLOSCache losCache; // offset 0x68, size 0x8
    bool perceivedAny; // offset 0x70, size 0x1
};
// total size: 0x10
class zPerceptionType {
    // Members
    class PerceptionType * typeAsset; // offset 0x0, size 0x4
    class zNPCPerceptionTarget * ownerTarget; // offset 0x4, size 0x4
    float perceivedTimer; // offset 0x8, size 0x4
    bool isDirty; // offset 0xC, size 0x1
    bool isPerceived; // offset 0xD, size 0x1
};
// total size: 0x10
class PerceptionType {
    // Members
    unsigned char Type; // offset 0x0, size 0x1
    float MemoryTime; // offset 0x4, size 0x4
    class __PerceptionNodes__ PerceptionNodes; // offset 0x8, size 0x8
};
// total size: 0x8
class __PerceptionNodes__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class zLOSCache {
    // Members
    float LOSTimer; // offset 0x0, size 0x4
    bool isInLOS; // offset 0x4, size 0x1
};
enum eStatus {
    Normal = 0,
    Never = 1,
    Always = 2,
};
// total size: 0xC0
class zNPCQuickTimeCombat : public zNPCComponent {
    // Members
    bool enabled; // offset 0x8, size 0x1
    float currentHP; // offset 0xC, size 0x4
    int numCountered; // offset 0x10, size 0x4
    int numCounterMove; // offset 0x14, size 0x4
    class zNPCCombatCounterSet counterSet; // offset 0x18, size 0x94
    float elapsedTime; // offset 0xAC, size 0x4
    bool attacking; // offset 0xB0, size 0x1
    enum eNPCCombatAttackStatus attackStatus; // offset 0xB4, size 0x4
    float currentTimeToReact; // offset 0xB8, size 0x4
    enum eNPCCombatPlayerCounter currentCounter; // offset 0xBC, size 0x4
};
// total size: 0x94
class zNPCCombatCounterSet {
    // Members
    int numCounters; // offset 0x0, size 0x4
    class zNPCCombatCounterPattern counters[4]; // offset 0x4, size 0x90
};
// total size: 0x24
class zNPCCombatCounterPattern {
    // Members
    int numCounterMoves; // offset 0x0, size 0x4
    class zNPCCombatCounterPatternEntry counterMoves[4]; // offset 0x4, size 0x20
};
// total size: 0x8
class zNPCCombatCounterPatternEntry {
    // Members
    enum eNPCCombatPlayerCounter pattern; // offset 0x0, size 0x4
    float timeToReact; // offset 0x4, size 0x4
};
enum eNPCCombatPlayerCounter {
    eNPCCombatPlayerCounter_None = 0,
    eNPCCombatPlayerCounter_Up = 1,
    eNPCCombatPlayerCounter_Down = 2,
    eNPCCombatPlayerCounter_Left = 3,
    eNPCCombatPlayerCounter_Right = 4,
};
enum eNPCCombatAttackStatus {
    eNPCCombatAttackStatus_None = 0,
    eNPCCombatAttackStatus_Success = 1,
    eNPCCombatAttackStatus_Fail = 2,
};
// total size: 0x3C
class zNPCFX : public zNPCComponent {
    // Members
    class zNPCFXNode * FXs[8]; // offset 0x8, size 0x20
    bool isRunning[8]; // offset 0x28, size 0x8
    unsigned int numberOfFXs; // offset 0x30, size 0x4
    class zNPCFXParams * params; // offset 0x34, size 0x4
    class zNPCEntity * customEnt; // offset 0x38, size 0x4
};
// total size: 0x10
class zNPCFXNode {
    // Members
    unsigned int nameHash; // offset 0x0, size 0x4
    enum eNPCFXType fxType; // offset 0x4, size 0x4
    class zNPCFX * owner; // offset 0x8, size 0x4
};
enum eNPCFXType {
    eNPCFXTypeOneShot = 0,
    eNPCFXTypeLoop = 1,
    eNPCFXTypeImmediateInstanceLoop = 2,
    END_eNPCFXTypeENUM = 3,
};
// total size: 0x28
class zNPCFXParams {
    // Members
    float stunnedCardScale; // offset 0x0, size 0x4
    float stunnedCardTurnRadius; // offset 0x4, size 0x4
    float stunnedCardTurnRate; // offset 0x8, size 0x4
    float stunnedCardTurnRateVarFreq; // offset 0xC, size 0x4
    class xVec3 stunnedNPCOffset; // offset 0x10, size 0xC
    unsigned int stunnedNumberOfCards; // offset 0x1C, size 0x4
    float stunnedFadeInTime; // offset 0x20, size 0x4
    float stunnedDelayTime; // offset 0x24, size 0x4
};
// total size: 0xAC
class zNPCExtraModel : public zNPCComponent {
    // Members
    class xMat4x3 curMatrix; // offset 0x8, size 0x40
    class xMat4x3 initialMatrix; // offset 0x48, size 0x40
    class xVec3 curScale; // offset 0x88, size 0xC
    class xVec3 initialScale; // offset 0x94, size 0xC
    class xOGModel * modelRenderData; // offset 0xA0, size 0x4
    class ModelInstanceAsset * modelInstanceAsset; // offset 0xA4, size 0x4
    bool matSet; // offset 0xA8, size 0x1
    bool scaleSet; // offset 0xA9, size 0x1
    bool enabled; // offset 0xAA, size 0x1
    bool paused; // offset 0xAB, size 0x1
};
// total size: 0x150
class zUIImage : public zUI {
    // Members
    class ImageState currentImage; // offset 0xF8, size 0x8
    class ImageState startMovementImage; // offset 0x100, size 0x8
    unsigned long long currentID; // offset 0x108, size 0x8
    void (* customUVCallback)(void *, class UIVertex &, class UIVertex &, class UIVertex &, class UIVertex &); // offset 0x110, size 0x4
    void * customUVCallbackData; // offset 0x114, size 0x4
    void * cachedImmediateProtoHandle; // offset 0x118, size 0x4
    class ImmediateInstanceArticle * cachedImmediateArticle; // offset 0x11C, size 0x4
    bool overrideTexture; // offset 0x120, size 0x1
    unsigned short textureParamHandle; // offset 0x122, size 0x2
    class Sampler overrideSamplerData; // offset 0x124, size 0xC
    class Material * material; // offset 0x130, size 0x4
    class RenderMode * brightRenderMode; // offset 0x134, size 0x4
    class xOGEntity * attachedTo3D; // offset 0x138, size 0x4
    class xVec3 attachedTo3DWorldOffset; // offset 0x13C, size 0xC
    int attachedToBone3D; // offset 0x148, size 0x4
};
// total size: 0x8
class ImageState {
    // Members
    float offsetU; // offset 0x0, size 0x4
    float offsetV; // offset 0x4, size 0x4
};
// total size: 0x110
class zTarget {
    // Members
    class xVec3 targetPosLocked; // offset 0x0, size 0xC
    class xVec3 targetDirLocked; // offset 0xC, size 0xC
    float toHitDistLocked; // offset 0x18, size 0x4
    class zPlayerInput * pad; // offset 0x1C, size 0x4
    class zUIImage * marker; // offset 0x20, size 0x4
    class zUIImage * markerGreen; // offset 0x24, size 0x4
    class zUIImage * markerRed; // offset 0x28, size 0x4
    class zUIImage * markerIRWarning; // offset 0x2C, size 0x4
    class zUIImage * markerIRError; // offset 0x30, size 0x4
    class zUIImage * markerHealth; // offset 0x34, size 0x4
    class zUIImage * view; // offset 0x38, size 0x4
    int viewportIndex; // offset 0x3C, size 0x4
    class hkpWorld * havokWorld; // offset 0x40, size 0x4
    float xMin; // offset 0x44, size 0x4
    float xMax; // offset 0x48, size 0x4
    float yMin; // offset 0x4C, size 0x4
    float yMax; // offset 0x50, size 0x4
    float xCenter; // offset 0x54, size 0x4
    float yCenter; // offset 0x58, size 0x4
    float xMinLocked; // offset 0x5C, size 0x4
    float xMaxLocked; // offset 0x60, size 0x4
    float yMinLocked; // offset 0x64, size 0x4
    float yMaxLocked; // offset 0x68, size 0x4
    float cMarkerX; // offset 0x6C, size 0x4
    float cMarkerY; // offset 0x70, size 0x4
    float elapsed; // offset 0x74, size 0x4
    class xMat4x3 targetSourceMatrix; // offset 0x78, size 0x40
    class xMat4x3 cameraMatrix; // offset 0xB8, size 0x40
    class xBase * owner; // offset 0xF8, size 0x4
    void * outputOwner; // offset 0xFC, size 0x4
    class xEnt * pHitEnt; // offset 0x100, size 0x4
    class xBase * pHitBase; // offset 0x104, size 0x4
    bool overThresholdX : 1; // offset 0x108, size 0x1, bit offset 0
    bool overThresholdY : 1; // offset 0x108, size 0x1, bit offset 1
    bool markersEnabled : 1; // offset 0x108, size 0x1, bit offset 2
    bool autoReturning : 1; // offset 0x108, size 0x1, bit offset 3
    bool aimAtCameraCenter : 1; // offset 0x108, size 0x1, bit offset 4
    bool aimWithPlayerFacing : 1; // offset 0x108, size 0x1, bit offset 5
    bool enableAutoReturn : 1; // offset 0x108, size 0x1, bit offset 6
    bool hitDetected : 1; // offset 0x108, size 0x1, bit offset 7
    bool secondPlayer : 1; // offset 0x109, size 0x1, bit offset 0
    enum IRStatus targetStatus; // offset 0x10C, size 0x4
};
enum IRStatus {
    IR_VALID = 0,
    IR_WARNING = 1,
    IR_ERROR = 2,
};
// total size: 0xA0
class zFountain : public xOGEntity {
    // Members
    class zFountainAsset * asset; // offset 0x3C, size 0x4
    class hkpRigidBody * rigidBody; // offset 0x40, size 0x4
    bool isOn; // offset 0x44, size 0x1
    bool fillDone; // offset 0x45, size 0x1
    float detectRadius; // offset 0x48, size 0x4
    enum eSBFacingDir facingDir; // offset 0x4C, size 0x4
    bool flipOrientationFacing; // offset 0x50, size 0x1
    class zFXSpawn * FXAsset; // offset 0x54, size 0x4
    class zFXSpawn * FXSpawn; // offset 0x58, size 0x4
    class xMat4x3 driveOffMat; // offset 0x5C, size 0x40
};
enum eSBFacingDir {
    eSBFacing_ModelOrientation = 0,
    eSBFacing_AwayFromCenter = 1,
    eSBFacing_Count = 2,
};
// total size: 0xC
class SBFillWithGooVec : public EventActionVector {};
// total size: 0x670
class zCollectibleSpawner : public xOGEntity {
    // Members
    class Slot * freeSlot; // offset 0x3C, size 0x4
    class Slot slotsStorage[32]; // offset 0x40, size 0x580
    class zQueue pool; // offset 0x5C0, size 0x88
    class zFloatingCollectible * ptrs[4]; // offset 0x648, size 0x10
    unsigned int collectiblesCount; // offset 0x658, size 0x4
    unsigned int healthCollectibleIndex; // offset 0x65C, size 0x4
    unsigned int ammoCollectibleIndex; // offset 0x660, size 0x4
    class CollectibleSpawnerAsset * asset; // offset 0x664, size 0x4
    class xCounter * enablePuckCounter; // offset 0x668, size 0x4
};
// total size: 0x2C
class Slot {
    // Members
    int * count; // offset 0x0, size 0x4
    class xVec3 pos; // offset 0x4, size 0xC
    class xVec3 scale; // offset 0x10, size 0xC
    int flags; // offset 0x1C, size 0x4
    float elapsed; // offset 0x20, size 0x4
    float initialAngle; // offset 0x24, size 0x4
    class xOGEntity * owner; // offset 0x28, size 0x4
};
// total size: 0x88
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class Slot * data[32]; // offset 0x8, size 0x80
};
// total size: 0xC80
class zPlanktonPlayer : public zCommonPlayer {
    // Members
    enum planktonState currentState; // offset 0x898, size 0x4
    class hkpShapePhantom * phantomPlankton; // offset 0x89C, size 0x4
    float appearBlend; // offset 0x8A0, size 0x4
    bool appearing; // offset 0x8A4, size 0x1
    bool disappearing; // offset 0x8A5, size 0x1
    bool talking; // offset 0x8A6, size 0x1
    bool designerForceAppear; // offset 0x8A7, size 0x1
    bool usingMirrorHoverPosition; // offset 0x8A8, size 0x1
    bool forceHoverPosition; // offset 0x8A9, size 0x1
    float yOffsetFromPlayer; // offset 0x8AC, size 0x4
    class ElectricArc * stunElectricArc; // offset 0x8B0, size 0x4
    class ElectricArc * damageElectricArc; // offset 0x8B4, size 0x4
    class ElectricArc * shakeElectricArc; // offset 0x8B8, size 0x4
    enum OwnerType currentOwnerType; // offset 0x8BC, size 0x4
    bool firstFrameUpdate; // offset 0x8C0, size 0x1
    class zPlanktonPlayerShakeHelper shakeHelper; // offset 0x8C8, size 0x388
    class xVec3 emitterPos; // offset 0xC50, size 0xC
    class xVec3 lookAtPos; // offset 0xC5C, size 0xC
    class xVec3 emitterLookAtDir; // offset 0xC68, size 0xC
    bool emitterAnimControlled; // offset 0xC74, size 0x1
    unsigned int prevPlayerPort; // offset 0xC78, size 0x4
};
enum planktonState {
    PLANKTON_Hidden = 0,
    PLANKTON_Idle = 1,
    PLANKTON_Enter = 2,
    PLANKTON_Exit = 3,
    PLANKTON_Shake = 4,
    PLANKTON_ShakeMiss = 5,
    PLANKTON_ZapStun = 6,
    PLANKTON_ZapHurt = 7,
    PLANKTON_ZapMiss = 8,
};
enum OwnerType {
    OWNERTYPE_HUMAN = 0,
    OWNERTYPE_AI = 1,
    OWNERTYPE_LAST = 2,
};
// total size: 0x388
class zPlanktonPlayerShakeHelper {
    // Members
    class TweakParams tweakParams; // offset 0x0, size 0x70
    class xEnt * shakeEnt; // offset 0x70, size 0x4
    class hkpCollidable * shakeEntCollidable; // offset 0x74, size 0x4
    class xVec3 targettedPosition; // offset 0x78, size 0xC
    class zFloatingCollectible * targettedCollectible; // offset 0x84, size 0x4
    float collectibleGrabTimer; // offset 0x88, size 0x4
    bool hideReticle; // offset 0x8C, size 0x1
    bool prevHideReticle; // offset 0x8D, size 0x1
    bool reticleOffScreen; // offset 0x8E, size 0x1
    class xVec3 grabPos; // offset 0x90, size 0xC
    float grabTime; // offset 0x9C, size 0x4
    float grabOffscreenTime; // offset 0xA0, size 0x4
    float grabOutOfRangeTime; // offset 0xA4, size 0x4
    float energyShake; // offset 0xA8, size 0x4
    float energyShakeDelayTime; // offset 0xAC, size 0x4
    float energyStun; // offset 0xB0, size 0x4
    float energyStunDelayTime; // offset 0xB4, size 0x4
    int zapAmmo; // offset 0xB8, size 0x4
    float zapDelayTime; // offset 0xBC, size 0x4
    class xVec2 reticleActualPos; // offset 0xC0, size 0x8
    class xVec2 reticleAssistedPos; // offset 0xC8, size 0x8
    class xVec2 reticleAssistedSize; // offset 0xD0, size 0x8
    class xBase * aimAssistTarget; // offset 0xD8, size 0x4
    class ElectricArc * stunElectricArc; // offset 0xDC, size 0x4
    float stunElectricArcTimer; // offset 0xE0, size 0x4
    class ElectricArc * damageElectricArc; // offset 0xE4, size 0x4
    float damageElectricArcTimer; // offset 0xE8, size 0x4
    class ElectricArc * shakeElectricArc; // offset 0xEC, size 0x4
    class zFXSpawn * shakeEffectSpawnPt; // offset 0xF0, size 0x4
    class zFXSpawn * shakeEffectFXScript; // offset 0xF4, size 0x4
    class zPlanktonAimAssistTargetSelector targetSelector; // offset 0xF8, size 0x34
    class zPlanktonTargetIndicator targetIndicator; // offset 0x12C, size 0x48
    class zPlanktonProjectileManager projectileManager; // offset 0x174, size 0x4C
    unsigned int raycastCycleCounter; // offset 0x1C0, size 0x4
    class zPlanktonSwingGesture swingGesture; // offset 0x1C4, size 0x50
    class zPlanktonShakeGesture shakeGesture; // offset 0x218, size 0x170
};
// total size: 0x70
class TweakParams {
    // Members
    float GrabTimeLimit; // offset 0x0, size 0x4
    float GrabMinTime; // offset 0x4, size 0x4
    float GrabMaxDistFromPlayer; // offset 0x8, size 0x4
    float GrabOffscreenTimeLimit; // offset 0xC, size 0x4
    float GrabOutOfRangeTimeLimit; // offset 0x10, size 0x4
    float GrabCollectibleGrabTime; // offset 0x14, size 0x4
    unsigned int GrabSwingStability; // offset 0x18, size 0x4
    unsigned int GrabSlamStability; // offset 0x1C, size 0x4
    float GrabSlamThreshold; // offset 0x20, size 0x4
    float EnergyShakeDrainRate; // offset 0x24, size 0x4
    float EnergyShakeRestoreDelay; // offset 0x28, size 0x4
    float EnergyShakeRestoreRate; // offset 0x2C, size 0x4
    float EnergyStunRestoreDelay; // offset 0x30, size 0x4
    float EnergyStunRestoreRate; // offset 0x34, size 0x4
    float ZapDamageDelay; // offset 0x38, size 0x4
    int ZapDamageMaxAmmo; // offset 0x3C, size 0x4
    float StunElectricArcTime; // offset 0x40, size 0x4
    float DamageElectricArcTime; // offset 0x44, size 0x4
    float StunDelayTime; // offset 0x48, size 0x4
    float DamageDelayTime; // offset 0x4C, size 0x4
    float ZapIneffectiveArcRange; // offset 0x50, size 0x4
    float AimAssistCastDistanceFromCamera; // offset 0x54, size 0x4
    float AimAssistCastRadius; // offset 0x58, size 0x4
    float AimAssistMaxScreenSpaceDistance; // offset 0x5C, size 0x4
    float AimAssistTrackingRate; // offset 0x60, size 0x4
    float StickSensitivity; // offset 0x64, size 0x4
    float StickSensitivityLeftMultiplier; // offset 0x68, size 0x4
    float StickSensitivityRightMultiplier; // offset 0x6C, size 0x4
};
// total size: 0x34
class zPlanktonAimAssistTargetSelector : public zPlanktonTargetListener {
    // Members
    unsigned int numTargets; // offset 0x8, size 0x4
    unsigned int currentFrame; // offset 0xC, size 0x4
    class TargetAndWeight targets[1]; // offset 0x10, size 0x14
    class xBase * currentTarget; // offset 0x24, size 0x4
    class hkpCollidable * currentTargetCollidable; // offset 0x28, size 0x4
    float currentTargetTime; // offset 0x2C, size 0x4
    bool currentTargetIsInTargetList; // offset 0x30, size 0x1
};
// total size: 0x8
class zPlanktonTargetListener : public hkpEntityListener, public hkpPhantomListener {};
// total size: 0x14
class TargetAndWeight {
    // Members
    class hkpCollidable * collidable; // offset 0x0, size 0x4
    class xBase * base; // offset 0x4, size 0x4
    float weight; // offset 0x8, size 0x4
    float accumWeights[1]; // offset 0xC, size 0x4
    unsigned int age; // offset 0x10, size 0x4
};
// total size: 0x48
class zPlanktonTargetIndicator {
    // Members
    class zUIImage * uiCenter; // offset 0x0, size 0x4
    class zUIImage * uiTopLeft; // offset 0x4, size 0x4
    class zUIImage * uiTopRight; // offset 0x8, size 0x4
    class zUIImage * uiBottomLeft; // offset 0xC, size 0x4
    class zUIImage * uiBottomRight; // offset 0x10, size 0x4
    bool foundAllImages; // offset 0x14, size 0x1
    class xVec2 oldTargetPos; // offset 0x18, size 0x8
    class xVec2 blendedTargetPos; // offset 0x20, size 0x8
    float targetPosBlend; // offset 0x28, size 0x4
    class xVec2 oldTargetSize; // offset 0x2C, size 0x8
    class xVec2 blendedTargetSize; // offset 0x34, size 0x8
    class xColor reticleColor; // offset 0x3C, size 0x4
    class xColor targetColor; // offset 0x40, size 0x4
    bool hasAmmo; // offset 0x44, size 0x1
};
// total size: 0x4C
class zPlanktonProjectileManager : public zPlanktonTargetListener {
    // Members
    class Projectile projectile; // offset 0x8, size 0x30
    bool isProjectileActive; // offset 0x38, size 0x1
    class zFXSpawn * stunFXScript; // offset 0x3C, size 0x4
    class zFXSpawn * damageFXScript; // offset 0x40, size 0x4
    class zFXSpawn * stunDoneFXScript; // offset 0x44, size 0x4
    class zFXSpawn * damageDoneFXScript; // offset 0x48, size 0x4
};
// total size: 0x30
class Projectile {
    // Members
    class xBase * shooter; // offset 0x0, size 0x4
    class hkpCollidable * targetCollidable; // offset 0x4, size 0x4
    class xBase * targetBase; // offset 0x8, size 0x4
    class xVec3 currentPosition; // offset 0xC, size 0xC
    class xVec3 endPosition; // offset 0x18, size 0xC
    float speed; // offset 0x24, size 0x4
    class zFXSpawn * fxSpawnPt; // offset 0x28, size 0x4
    bool damage; // offset 0x2C, size 0x1
    bool readyForCleanup; // offset 0x2D, size 0x1
};
// total size: 0x50
class zPlanktonSwingGesture {
    // Members
    class xVec3 lastAcc; // offset 0x0, size 0xC
    class xVec3 deltaAcc; // offset 0xC, size 0xC
    class xVec3 dirVec2; // offset 0x18, size 0xC
    float dirSpeedMax2; // offset 0x24, size 0x4
    class xVec2 swing2D; // offset 0x28, size 0x8
    int swing2Stability; // offset 0x30, size 0x4
    bool firstUpdate; // offset 0x34, size 0x1
    float ACC_MAX; // offset 0x38, size 0x4
    float ACC_DAMP; // offset 0x3C, size 0x4
    float DIR_VEC_DAMP; // offset 0x40, size 0x4
    float DIR_SPEED_DAMP; // offset 0x44, size 0x4
    float DIR_SPEED_MIN; // offset 0x48, size 0x4
    float DIR_VEC_CLAMP; // offset 0x4C, size 0x4
};
// total size: 0x170
class zPlanktonShakeGesture {
    // Members
    class TweakParams tweakParams; // offset 0x0, size 0x8
    class Time swingTimes[2][20]; // offset 0x8, size 0x140
    unsigned int swingFirstIndex[2]; // offset 0x148, size 0x8
    unsigned int swingCount[2]; // offset 0x150, size 0x8
    float swingLastDir[2]; // offset 0x158, size 0x8
    class xVec3 filteredAcc; // offset 0x160, size 0xC
};
// total size: 0x8
class TweakParams {
    // Members
    float ShakeAccelFilter; // offset 0x0, size 0x4
    float ShakeThreshold; // offset 0x4, size 0x4
};
// total size: 0x18
class EventActionSpawnCollectibleAtPosition : public EventActionNew {
    // Members
    class uid targetUID; // offset 0x0, size 0x8
    class vec3 offset; // offset 0x8, size 0xC
};
// total size: 0x13C10
class zCollectibleInstancer {
    // Members
    class Slot * freeSlot; // offset 0x0, size 0x4
    class Slot slotsStorage[256]; // offset 0x8, size 0x13800
    class zQueue pool; // offset 0x13808, size 0x408
};
// total size: 0x138
class Slot {
    // Members
    class zCollectibleSpawner * owner; // offset 0x0, size 0x4
    class EntityHandleBase dummyHandle; // offset 0x8, size 0x48
    class zFloatingCollectible instance; // offset 0x50, size 0xE0
    int freeFlag; // offset 0x130, size 0x4
};
// total size: 0x408
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class Slot * data[256]; // offset 0x8, size 0x400
};
enum movieEndCode {
    eMovieEnd = 0,
    eMovieAborted = 1,
    eMovieAbortAll = 2,
};
// total size: 0x50
class MovieData {
    // Members
    char movie[12]; // offset 0x0, size 0xC
    void * hBink; // offset 0xC, size 0x4
    enum movieEndCode (* cbFn)(class MovieData * data); // offset 0x10, size 0x4
    class D3DRECT rect; // offset 0x14, size 0x10
    class D3DRECT dstRect; // offset 0x24, size 0x10
    int surfaceIndex; // offset 0x34, size 0x4
    int startFrameSmall; // offset 0x38, size 0x4
    int startCountdown; // offset 0x3C, size 0x4
    unsigned long long subtitlesID; // offset 0x40, size 0x8
    bool fullscreen; // offset 0x48, size 0x1
    bool skippable; // offset 0x49, size 0x1
    bool last; // offset 0x4A, size 0x1
    bool (* delaycbFn)(); // offset 0x4C, size 0x4
};
// total size: 0x10
class D3DRECT {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
    int w; // offset 0x8, size 0x4
    int h; // offset 0xC, size 0x4
};
// total size: 0x40
class zFog : public xOGEntity {
    // Members
    class zFogAsset * asset; // offset 0x3C, size 0x4
};
// total size: 0x4
class EventActionActivateFog : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
// total size: 0x1C018
class zFXScriptSpawnPtMgr {
    // Members
    class SpawnSlot slotsStorage[256]; // offset 0x0, size 0x1C000
    class NumberPool mNumPool; // offset 0x1C000, size 0x14
};
// total size: 0x1C0
class SpawnSlot {
    // Members
    class EntityHandleBase dummyHandle; // offset 0x0, size 0x48
    class zFXSpawn spawnPt; // offset 0x48, size 0x178
};
// total size: 0x14
class NumberPool {
    // Members
    unsigned int * mAvailableNums; // offset 0x0, size 0x4
    unsigned int mTop; // offset 0x4, size 0x4
    unsigned int mBottom; // offset 0x8, size 0x4
    unsigned int mNextKey; // offset 0xC, size 0x4
    unsigned int mSize; // offset 0x10, size 0x4
};
// total size: 0x1
class _FXSpawnCleanupCB {};
// total size: 0x180
class zFXSpawnWithSoundAssetMultiple : public zFXSpawn {
    // Members
    class FXSoundMultipleList * mSoundMultipleList; // offset 0x178, size 0x4
    unsigned int mSoundMultipleCount; // offset 0x17C, size 0x4
};
// total size: 0x70
class FXSoundMultipleList {
    // Members
    unsigned int index; // offset 0x0, size 0x4
    class zSoundAssetMultiple zsam; // offset 0x8, size 0x68
};
// total size: 0x180
class zFXSpawnObject : public zFXSpawnWithSoundAssetMultiple {};
// total size: 0x188
class zFXInstance : public zFXSpawnWithSoundAssetMultiple {
    // Members
    class FXInstance * mAsset; // offset 0x180, size 0x4
};
// total size: 0x80
class FXInstance : public xBaseScene {
    // Members
    class uid SpawnID; // offset 0x10, size 0x8
    bool autoStart; // offset 0x18, size 0x1
    class vec3 position; // offset 0x1C, size 0xC
    class Rotation3 orientation; // offset 0x28, size 0xC
    class CullingData Culling; // offset 0x34, size 0x8
    class FXTiming Timing; // offset 0x3C, size 0x10
    class FXAttachEntity Entity; // offset 0x50, size 0x30
};
// total size: 0x24
class generator_data {
    // Members
    class xVec3 mAccelDir; // offset 0x0, size 0xC
    class xVec3 mDPos; // offset 0xC, size 0xC
    float mDPosScale; // offset 0x18, size 0x4
    short mTurbulenceIndex; // offset 0x1C, size 0x2
    short mParticlesAlive; // offset 0x1E, size 0x2
    bool mKillAll; // offset 0x20, size 0x1
};
// total size: 0x38
class particle_instance {
    // Members
    class xVec3 loc; // offset 0x0, size 0xC
    class xVec3 dir; // offset 0xC, size 0xC
    unsigned int speedScaleVariance; // offset 0x18, size 0x4
    float age; // offset 0x1C, size 0x4
    float ageRate; // offset 0x20, size 0x4
    float rot; // offset 0x24, size 0x4
    float animCell; // offset 0x28, size 0x4
    float scaleDelta; // offset 0x2C, size 0x4
    unsigned int flags; // offset 0x30, size 0x4
    unsigned int poolIdx; // offset 0x34, size 0x4
};
// total size: 0x8
class activity_data {
    // Members
    void (* get_offset)(class xVec3 & outOffset, int volumeIdx); // offset 0x0, size 0x4
    int volumeIdx; // offset 0x4, size 0x4
};
// total size: 0x14
class other_volume {
    // Members
    class @class circle; // offset 0x0, size 0x10
    class @class line; // offset 0x0, size 0x14
    class @class box; // offset 0x0, size 0xC
    class @class curve; // offset 0x0, size 0x4
};
// total size: 0x14
class @class {
    // Members
    float xRadius; // offset 0x0, size 0x4
    float yRadius; // offset 0x4, size 0x4
    float length; // offset 0x8, size 0x4
    unsigned int cap_weight; // offset 0xC, size 0x4
    float scale; // offset 0x10, size 0x4
};
// total size: 0xC
class @class {
    // Members
    class xVec3 halfDim; // offset 0x0, size 0xC
};
// total size: 0x30
class generator_data {
    // Members
    class xVec3 mAccelDir; // offset 0x0, size 0xC
    class xVec3 mDPos; // offset 0xC, size 0xC
    class xVec3 mVolumeScale; // offset 0x18, size 0xC
    float mDPosScale; // offset 0x24, size 0x4
    float mForcedAgeRate; // offset 0x28, size 0x4
    short mObjectsAlive; // offset 0x2C, size 0x2
};
// total size: 0x6C
class object_instance {
    // Members
    class xVec3 loc; // offset 0x0, size 0xC
    class xVec3 velDir; // offset 0xC, size 0xC
    class xVec3 ypr; // offset 0x18, size 0xC
    class xVec3 yprOrig; // offset 0x24, size 0xC
    float scaleDeltaW; // offset 0x30, size 0x4
    float scaleDeltaH; // offset 0x34, size 0x4
    float scaleDeltaD; // offset 0x38, size 0x4
    class xVec3 rotDeltaYPR; // offset 0x3C, size 0xC
    class xColor colorDelta; // offset 0x48, size 0x4
    float alphaDelta; // offset 0x4C, size 0x4
    float accelVel; // offset 0x50, size 0x4
    float velModifier; // offset 0x54, size 0x4
    float age; // offset 0x58, size 0x4
    float ageRate; // offset 0x5C, size 0x4
    class xOGModel * ogModel; // offset 0x60, size 0x4
    unsigned int poolIdx; // offset 0x64, size 0x4
    class zFXObjectSystem * system; // offset 0x68, size 0x4
};
// total size: 0x408
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class object_instance * data[256]; // offset 0x8, size 0x400
};
// total size: 0x90
class model_volume {
    // Members
    int vertices[5]; // offset 0x0, size 0x14
    int surfaceCount[5]; // offset 0x14, size 0x14
    class ModelInstanceAsset * models[5]; // offset 0x28, size 0x14
    class xVec3 modelCenter[5]; // offset 0x3C, size 0x3C
    int models_size; // offset 0x78, size 0x4
    int total_vertices; // offset 0x7C, size 0x4
    int total_surfaces; // offset 0x80, size 0x4
    class xVec3 scale; // offset 0x84, size 0xC
};
// total size: 0x70
class hkpListShape : public hkpShapeCollection {
    // Members
    class hkArray m_childInfo; // offset 0x18, size 0xC
    unsigned short m_flags; // offset 0x24, size 0x2
    unsigned short m_numDisabledChildren; // offset 0x26, size 0x2
    class hkVector4 m_aabbHalfExtents; // offset 0x30, size 0x10
    class hkVector4 m_aabbCenter; // offset 0x40, size 0x10
    unsigned int m_enabledChildren[8]; // offset 0x50, size 0x20
};
// total size: 0x18
class hkpShapeCollection : public hkpShape, public hkpShapeContainer {
    // Members
    class hkBool m_disableWelding; // offset 0x14, size 0x1
    class hkEnum m_collectionType; // offset 0x15, size 0x1
};
// total size: 0x1
class hkEnum {
    // Members
    unsigned char m_storage; // offset 0x0, size 0x1
};
// total size: 0xC
class hkArray {
    // Members
    class ChildInfo * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x10
class ChildInfo {
    // Members
    class hkpShape * m_shape; // offset 0x0, size 0x4
    unsigned int m_collisionFilterInfo; // offset 0x4, size 0x4
    int m_shapeSize; // offset 0x8, size 0x4
    int m_numChildShapes; // offset 0xC, size 0x4
};
// total size: 0x4
class EventNotifyDispatcher_CombinedGameState : public EventNotifyNew {
    // Members
    enum eGameStateCombined param0; // offset 0x0, size 0x4
};
// total size: 0x1
class less {};
// total size: 0x120
class zHammer : public xEffectAttachIntf {
    // Members
    class zHammerAsset * asset; // offset 0x3C, size 0x4
    class RenderedPhysicsModel rpModel; // offset 0x40, size 0x50
    float stateTimer; // offset 0x90, size 0x4
    bool on; // offset 0x94, size 0x1
    class xSphere damageSphere; // offset 0x98, size 0x10
    class xVec3 damageBoneOffset; // offset 0xA8, size 0xC
    float curRelY; // offset 0xB4, size 0x4
    float strikeDistance; // offset 0xB8, size 0x4
    class State * currentState; // offset 0xBC, size 0x4
    class State_Up * stateUp; // offset 0xC0, size 0x4
    class State_Strike * stateStrike; // offset 0xC4, size 0x4
    class State_Impact * stateImpact; // offset 0xC8, size 0x4
    class State_Recoil * stateRecoil; // offset 0xCC, size 0x4
    class zTransparentHelper TransparentHelper; // offset 0xD0, size 0x8
    class xMat4x3 accumRelMat; // offset 0xD8, size 0x40
};
// total size: 0x8
class State {
    // Members
    class zHammer * hammer; // offset 0x0, size 0x4
};
// total size: 0x8
class State_Up : public State {};
// total size: 0x8
class State_Strike : public State {};
// total size: 0x8
class State_Impact : public State {};
// total size: 0x8
class State_Recoil : public State {};
// total size: 0x4
class ButtonPressed : public EventNotifyNew {
    // Members
    enum ePressSource pressSource; // offset 0x0, size 0x4
};
enum ePressSource {
    ePressSource_Normal = 0,
    ePressSource_Powerup = 1,
    END_ePressSource_ENUM = 2,
};
// total size: 0x5C
class MultiplayerStats {
    // Members
    int numPlayers; // offset 0x0, size 0x4
    int gameType; // offset 0x4, size 0x4
    bool gameStarted; // offset 0x8, size 0x1
    int playerNum[4]; // offset 0xC, size 0x10
    int charType[4]; // offset 0x1C, size 0x10
    int team[4]; // offset 0x2C, size 0x10
    int result[4]; // offset 0x3C, size 0x10
    int score[4]; // offset 0x4C, size 0x10
};
// total size: 0x78
class zHudSB : public xOGEntity {
    // Members
    class HudSB * asset; // offset 0x3C, size 0x4
    class zScaleform * hudPlayer; // offset 0x40, size 0x4
    float health; // offset 0x44, size 0x4
    int maxHealth; // offset 0x48, size 0x4
    float stunEnergy; // offset 0x4C, size 0x4
    float shakeEnergy; // offset 0x50, size 0x4
    int powerup; // offset 0x54, size 0x4
    float powerupMinutes; // offset 0x58, size 0x4
    float powerupSeconds; // offset 0x5C, size 0x4
    class xTimer * timer; // offset 0x60, size 0x4
    float timerMinutes; // offset 0x64, size 0x4
    float timerSeconds; // offset 0x68, size 0x4
    float bossMeter; // offset 0x6C, size 0x4
    bool hudShown; // offset 0x70, size 0x1
    bool hudGlobalVisibility; // offset 0x71, size 0x1
    class zSoundCue * scTimer; // offset 0x74, size 0x4
};
// total size: 0x10
class EventActionShowCounter : public EventActionNew {
    // Members
    unsigned int counterIcon; // offset 0x0, size 0x4
    short param0; // offset 0x4, size 0x2
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x48
class zTikiScreen : public xOGEntity {
    // Members
    class TikiScreen * asset; // offset 0x3C, size 0x4
    class zScaleform * scaleformPlayer; // offset 0x40, size 0x4
    bool shown; // offset 0x44, size 0x1
    bool isTikiActive; // offset 0x45, size 0x1
};
// total size: 0x10
class GFxValue {
    // Members
    enum ValueType Type; // offset 0x0, size 0x4
    class ValueUnion Value; // offset 0x8, size 0x8
};
enum ValueType {
    VT_Undefined = 0,
    VT_Null = 1,
    VT_Boolean = 2,
    VT_Number = 3,
    VT_String = 4,
    VT_StringW = 5,
    VT_ConvertBit = 16,
    VT_ConvertBoolean = 18,
    VT_ConvertNumber = 19,
    VT_ConvertString = 20,
    VT_ConvertStringW = 21,
};
// total size: 0x8
class ValueUnion {
    // Members
    double NValue; // offset 0x0, size 0x8
    bool BValue; // offset 0x0, size 0x1
    char * pString; // offset 0x0, size 0x4
    unsigned short * pStringW; // offset 0x0, size 0x4
};
// total size: 0x48
class zBuyScreen : public xOGEntity {
    // Members
    class BuyScreen * asset; // offset 0x3C, size 0x4
    class zScaleform * scaleformPlayer; // offset 0x40, size 0x4
    bool shown; // offset 0x44, size 0x1
    bool isActive; // offset 0x45, size 0x1
    bool needToShow; // offset 0x46, size 0x1
};
// total size: 0x50
class zPlanktonReticle : public xOGEntity {
    // Members
    class PlanktonReticle * asset; // offset 0x3C, size 0x4
    class zScaleform * reticlePlayer; // offset 0x40, size 0x4
    bool reticleShown; // offset 0x44, size 0x1
    bool rimGrabbable; // offset 0x45, size 0x1
    enum zPlanktonReticleEyeStates eyeState; // offset 0x48, size 0x4
};
enum zPlanktonReticleEyeStates {
    ezPlanktonReticleEyeStates_Neutral = 0,
    ezPlanktonReticleEyeStates_Hurtable = 1,
    ezPlanktonReticleEyeStates_Stunnable = 2,
    ezPlanktonReticleEyeStates_Count = 3,
};
// total size: 0x10
class EventActionScale : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    float param2; // offset 0x8, size 0x4
    float param3; // offset 0xC, size 0x4
};
// total size: 0x88
class zInteractionUPWithIcons : public zInteractionUP {
    // Members
    class zInWorldIcon icon; // offset 0x50, size 0x30
    bool iconEnabled; // offset 0x80, size 0x1
    bool iconEventEnabled; // offset 0x81, size 0x1
};
// total size: 0x30
class zInWorldIcon {
    // Members
    enum eFadeState state; // offset 0x0, size 0x4
    class ImmediatePrototypeEntity * immModel; // offset 0x4, size 0x4
    class ImmediatePrototypeEntity * newImmModel; // offset 0x8, size 0x4
    class xVec3 pos; // offset 0xC, size 0xC
    float iconScale; // offset 0x18, size 0x4
    float alphaT; // offset 0x1C, size 0x4
    float outerRadius2; // offset 0x20, size 0x4
    float innerRadius2; // offset 0x24, size 0x4
    float minOnTime; // offset 0x28, size 0x4
    bool enabled; // offset 0x2C, size 0x1
};
enum eFadeState {
    eFadeState_Off = 0,
    eFadeState_In = 1,
    eFadeState_On = 2,
    eFadeState_Out = 3,
    eFadeState_Dying = 4,
    eFadeState_Dead = 5,
    eFadeState_Swap = 6,
    eFadeState_Total = 7,
};
// total size: 0x10
class InteractionInfo {
    // Members
    unsigned int interactionBaseType; // offset 0x0, size 0x4
    unsigned int applicablePlayers; // offset 0x4, size 0x4
    unsigned int playerActionID; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
};
// total size: 0x88
class zInWorldIconWidget : public xOGEntity {
    // Members
    class zInWorldIconWidgetAsset * asset; // offset 0x3C, size 0x4
    enum eFadeState state; // offset 0x40, size 0x4
    class ImmediatePrototypeEntity * immModel; // offset 0x44, size 0x4
    bool CCGCable; // offset 0x48, size 0x1
    class ImmediatePrototypeEntity * immModelCC; // offset 0x4C, size 0x4
    class ImmediatePrototypeEntity * immModelGC; // offset 0x50, size 0x4
    class ImmediatePrototypeEntity * newImmModel; // offset 0x54, size 0x4
    class xBase * target; // offset 0x58, size 0x4
    class xVec3 * pos; // offset 0x5C, size 0x4
    class xVec3 offset; // offset 0x60, size 0xC
    float iconScale; // offset 0x6C, size 0x4
    float alphaT; // offset 0x70, size 0x4
    float playerRadius2; // offset 0x74, size 0x4
    float cameraRadius2; // offset 0x78, size 0x4
    float minOnTime; // offset 0x7C, size 0x4
    bool enabled; // offset 0x80, size 0x1
    float shakingTimer; // offset 0x84, size 0x4
};
// total size: 0xB4
class zWallNetCollis {
    // Members
    class xVec3 collisionPoints[4]; // offset 0x0, size 0x30
    class xVec3 collisionNormals[4]; // offset 0x30, size 0x30
    int triIDs[4]; // offset 0x60, size 0x10
    int edgeIDs[4]; // offset 0x70, size 0x10
    float collisionDist[4]; // offset 0x80, size 0x10
    unsigned int numberOfCollisions; // offset 0x90, size 0x4
    unsigned int closestCollision; // offset 0x94, size 0x4
    class xVec3 endPoint; // offset 0x98, size 0xC
    float sweepDist; // offset 0xA4, size 0x4
    float movableDist; // offset 0xA8, size 0x4
    class zWallNet * wallNet; // offset 0xAC, size 0x4
    bool calculateDistance : 1; // offset 0xB0, size 0x1, bit offset 0
    bool calculateNormal : 1; // offset 0xB0, size 0x1, bit offset 1
    bool calculateExactPoint : 1; // offset 0xB0, size 0x1, bit offset 2
    bool consumed : 1; // offset 0xB0, size 0x1, bit offset 3
    bool hitIt : 1; // offset 0xB0, size 0x1, bit offset 4
    unsigned char pad : 3; // offset 0xB0, size 0x1, bit offset 5
};
// total size: 0x40
class zSweptCircle {
    // Members
    class xVec2 start; // offset 0x0, size 0x8
    float radius; // offset 0x8, size 0x4
    float dist; // offset 0xC, size 0x4
    class xVec2 dir; // offset 0x10, size 0x8
    class xVec2 end; // offset 0x18, size 0x8
    class xVec2 left; // offset 0x20, size 0x8
    float curDist; // offset 0x28, size 0x4
    class xVec2 curEnd; // offset 0x2C, size 0x8
    bool hitSomething; // offset 0x34, size 0x1
    class xVec2 contactPoint; // offset 0x38, size 0x8
};
// total size: 0x18
class FindWNCB {
    // Members
    class xVec3 & pos; // offset 0x0, size 0x4
    enum eWallNetUserType userType; // offset 0x4, size 0x4
    class xBase * user; // offset 0x8, size 0x4
    bool skipOffWallNets; // offset 0xC, size 0x1
    class zWallNet * foundWN; // offset 0x10, size 0x4
    int foundTriID; // offset 0x14, size 0x4
};
// total size: 0x8
class zRuntimeEntityCreateInfo {
    // Members
    class RuntimeEntityAsset * reAsset; // offset 0x0, size 0x4
    class xBase * owner; // offset 0x4, size 0x4
};
enum eLaserType {
    eLaserType_Default = 0,
    eLaserType_Player_Basic = 1,
    eLaserType_Player_Upgraded = 2,
    eLaserType_Count = 3,
};
// total size: 0x1A8
class zRunEntLaser : public zRuntimeEntity {
    // Members
    class xMat4x3 currentMat; // offset 0x50, size 0x40
    class xVec3 startPos; // offset 0x90, size 0xC
    class xVec3 targetDir; // offset 0x9C, size 0xC
    class xVec3 dPos; // offset 0xA8, size 0xC
    float totalLaserTime; // offset 0xB4, size 0x4
    float curLaserTime; // offset 0xB8, size 0x4
    float speed; // offset 0xBC, size 0x4
    float lifeSpan; // offset 0xC0, size 0x4
    float damage; // offset 0xC4, size 0x4
    float damageRadius; // offset 0xC8, size 0x4
    enum eHitSource hitSource; // offset 0xCC, size 0x4
    enum zHitTarget hitTarget; // offset 0xD0, size 0x4
    enum eLaserType type; // offset 0xD4, size 0x4
    unsigned int killedFrameDelay; // offset 0xD8, size 0x4
    bool targetDirSet; // offset 0xDC, size 0x1
    bool startPosSet; // offset 0xDD, size 0x1
    bool lifeSpanSet; // offset 0xDE, size 0x1
    bool alwaysKillOnHit; // offset 0xDF, size 0x1
    int filterSize; // offset 0xE0, size 0x4
    class xBase * filterList[4]; // offset 0xE4, size 0x10
    class zRuntimeEntityFX fxComp; // offset 0xF4, size 0x68
    class EntityHandleBase dummyHandle; // offset 0x160, size 0x48
};
// total size: 0x50
class zRuntimeEntity : public xBase {
    // Members
    class zRuntimeEntity * next; // offset 0x34, size 0x4
    class zRuntimeEntity * prev; // offset 0x38, size 0x4
    unsigned int refCount; // offset 0x3C, size 0x4
    class xBase * owner; // offset 0x40, size 0x4
    class RuntimeEntityAsset * asset; // offset 0x44, size 0x4
    class zRuntimeEntityFX * FX; // offset 0x48, size 0x4
    unsigned int isAlive : 1; // offset 0x4C, size 0x4, bit offset 0
    unsigned int updateWhilePaused : 1; // offset 0x4C, size 0x4, bit offset 1
    unsigned int updateInCinematic : 1; // offset 0x4C, size 0x4, bit offset 2
    unsigned int pad : 29; // offset 0x4C, size 0x4, bit offset 3
};
// total size: 0x68
class zRuntimeEntityFX {
    // Members
    bool active; // offset 0x0, size 0x1
    class zRuntimeEntity * owner; // offset 0x4, size 0x4
    class zRibbon * ribbonEffect; // offset 0x8, size 0x4
    class xFXRibbon * ribbon; // offset 0xC, size 0x4
    class zFXSpawn * activeFXAsset; // offset 0x10, size 0x4
    class zFXSpawn * spawnFXAsset; // offset 0x14, size 0x4
    class zFXSpawn * deathFXAsset; // offset 0x18, size 0x4
    class zFXSpawn * pingFXAsset; // offset 0x1C, size 0x4
    class zFXSpawn * timeoutFXAsset; // offset 0x20, size 0x4
    class zFXSpawn * activeFXScriptSpawnPoint; // offset 0x24, size 0x4
    class xMat4x3 ownerInitialMat; // offset 0x28, size 0x40
};
// total size: 0x1C
class zLaserLOSChecker : public hkpRayHitCollector {
    // Members
    class xBase * ignoreStart; // offset 0x8, size 0x4
    class xBase * ignoreTarget; // offset 0xC, size 0x4
    float minHitFraction; // offset 0x10, size 0x4
    class xBase * hitObj; // offset 0x14, size 0x4
    bool hitIt; // offset 0x18, size 0x1
};
// total size: 0x4
class hkpBroadPhaseCastCollector {};
// total size: 0x20
class zLaserLOSCombinedCollector : public hkpRayHitCollector {
    // Members
    class xBase * ignoreStart; // offset 0x8, size 0x4
    class xBase * ignoreTarget; // offset 0xC, size 0x4
    float minHitFraction; // offset 0x10, size 0x4
    class xBase * hitObj; // offset 0x14, size 0x4
    bool hitIt; // offset 0x18, size 0x1
    bool * optionalHitResult; // offset 0x1C, size 0x4
};
// total size: 0x50
class hkpWorldRayCaster : public hkpBroadPhaseCastCollector {
    // Members
    class hkpWorldRayCastInput * m_input; // offset 0x4, size 0x4
    class hkpRayCollidableFilter * m_filter; // offset 0x8, size 0x4
    class hkpRayHitCollector * m_collectorBase; // offset 0xC, size 0x4
    int m_collectorStriding; // offset 0x10, size 0x4
    class hkpShapeRayCastInput m_shapeInput; // offset 0x20, size 0x30
};
// total size: 0x30
class hkpShapeRayCastInput {
    // Members
    class hkVector4 m_from; // offset 0x0, size 0x10
    class hkVector4 m_to; // offset 0x10, size 0x10
    unsigned int m_filterInfo; // offset 0x20, size 0x4
    class hkpRayShapeCollectionFilter * m_rayShapeCollectionFilter; // offset 0x24, size 0x4
};
// total size: 0x14
class zLaserScannerLOSHitCollector : public hkpRayHitCollector {
    // Members
    bool hitIt; // offset 0x8, size 0x1
    class xBase * source; // offset 0xC, size 0x4
    class xBase * target; // offset 0x10, size 0x4
};
// total size: 0xA8
class zLedge : public xOGEntity {
    // Members
    class Ledge * asset; // offset 0x3C, size 0x4
    class xEnt * driver; // offset 0x40, size 0x4
    class xMat3x3 original_matrix; // offset 0x44, size 0x30
    class xVec3 original_pos; // offset 0x74, size 0xC
    class @class __anon; // offset 0x80, size 0x24
    class xRay3 lineLedge; // offset 0x80, size 0x24
    class CurveEntity * curveLedge; // offset 0x80, size 0x4
};
// total size: 0x24
class @class {
    // Members
    class xRay3 lineLedge; // offset 0x0, size 0x24
    class CurveEntity * curveLedge; // offset 0x0, size 0x4
};
// total size: 0x78
class zLedgeGrab : public zInteractionUP {
    // Members
    class LedgeGrab * asset; // offset 0x50, size 0x4
    bool alive; // offset 0x54, size 0x1
    class zLedge * ledge; // offset 0x58, size 0x4
    class xVec3 grabPos; // offset 0x5C, size 0xC
    class zCommonPlayer * grabbingPlayer; // offset 0x68, size 0x4
    class xEnt * driver; // offset 0x6C, size 0x4
    float u; // offset 0x70, size 0x4
    bool leftIsNegative; // offset 0x74, size 0x1
};
// total size: 0xC
class sSpot {
    // Members
    class ImmediatePrototypeEntity * ent; // offset 0x0, size 0x4
    class zGradientCurve * sizeCurve; // offset 0x4, size 0x4
    class zGradientCurve * rotCurve; // offset 0x8, size 0x4
};
// total size: 0x68
class zLensFlareSpawnPt : public xOGEntity {
    // Members
    class LensFlareSpawnPt * asset; // offset 0x3C, size 0x4
    class sPoint * points; // offset 0x40, size 0x4
    unsigned int numPoints; // offset 0x44, size 0x4
    class xVec2 screenPt; // offset 0x48, size 0x8
    float alpha; // offset 0x50, size 0x4
    bool visible; // offset 0x54, size 0x1
    class zGradientCurve * alphaFalloffCurve; // offset 0x58, size 0x4
    class sSpot * spots; // offset 0x5C, size 0x4
    unsigned int numSpots; // offset 0x60, size 0x4
};
// total size: 0x10
class sPoint {
    // Members
    class xVec3 pos; // offset 0x0, size 0xC
    bool lastRayCastValue[4]; // offset 0xC, size 0x4
};
// total size: 0xC
class zLensFlareSpawnPt_Gather_CB {
    // Members
    class zLensFlareSpawnPt * * list; // offset 0x0, size 0x4
    int count; // offset 0x4, size 0x4
    int allocCount; // offset 0x8, size 0x4
};
// total size: 0x8
class DelegateP2 {
    // Members
    void * obj; // offset 0x0, size 0x4
    void (* invoker)(void *, unsigned int, class xBase *); // offset 0x4, size 0x4
};
// total size: 0x1008
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class zLocator * data[1024]; // offset 0x8, size 0x1000
};
// total size: 0x110
class zLocator : public xOGEntity {
    // Members
    char * name; // offset 0x3C, size 0x4
    unsigned long long clipUID; // offset 0x40, size 0x8
    int model; // offset 0x48, size 0x4
    int bone; // offset 0x4C, size 0x4
    int useBoneRot; // offset 0x50, size 0x4
    class vec3 pos; // offset 0x54, size 0xC
    class vec3 offset; // offset 0x60, size 0xC
    class Rotation3 orientation; // offset 0x6C, size 0xC
    int currentValue; // offset 0x78, size 0x4
    int currentTimeRange; // offset 0x7C, size 0x4
    float currentTimer; // offset 0x80, size 0x4
    class BoolChannel visibility; // offset 0x84, size 0x14
    int assetDataSize; // offset 0x98, size 0x4
    class ComboAnimBlobAssetV2 * assetData; // offset 0x9C, size 0x4
    class zFXSpawn * spawnPt; // offset 0xA0, size 0x4
    class zFXSpawn * spawnPtAsset; // offset 0xA4, size 0x4
    class ModelInstanceArticle * modelArticle; // offset 0xA8, size 0x4
    class xMat4x3 mat; // offset 0xAC, size 0x40
    class xVec3 oldPos; // offset 0xEC, size 0xC
    class xVec3 dPos; // offset 0xF8, size 0xC
    class Matrix43 * mMat; // offset 0x104, size 0x4
    bool hasSkeleton; // offset 0x108, size 0x1
    bool active; // offset 0x109, size 0x1
};
// total size: 0x14
class BoolChannel {
    // Members
    float timeMin; // offset 0x0, size 0x4
    float timeMax; // offset 0x4, size 0x4
    int initialValue; // offset 0x8, size 0x4
    int transitionsCount; // offset 0xC, size 0x4
    float * transitions; // offset 0x10, size 0x4
};
// total size: 0x1
class Locator {};
// total size: 0x9C
class zMainOGModule : public Module {
    // Members
    enum eModGameState gameState; // offset 0x98, size 0x4
};
enum eModGameState {
    eNoState = 0,
    eMainInit = 1,
    eGameInit = 2,
    eSceneInit = 3,
    eScenePostInit = 4,
    eSceneGameplay = 5,
    eSceneExit = 6,
    eGameShutdown = 7,
    eMainShutdown = 8,
};
// total size: 0x8
class ModuleRegistrator {
    // Members
    class Module * mod; // offset 0x0, size 0x4
    class ModuleRegistrator * next; // offset 0x4, size 0x4
};
// total size: 0x10D4
class SceneData {
    // Members
    class Scene scene; // offset 0x0, size 0x10CC
    unsigned char * sceneBuffer; // offset 0x10CC, size 0x4
    int sceneBufferSize; // offset 0x10D0, size 0x4
};
// total size: 0x20
class MaterialDepotSpace : public Space {};
// total size: 0x2DC
class ScreenRenderTargetWii : public ScreenRenderTargetCommon {
    // Members
    class Texture HDRtexture[5]; // offset 0x24, size 0x168
    unsigned char * HDRtexData[5]; // offset 0x18C, size 0x14
    unsigned int HDRtexDataSize[5]; // offset 0x1A0, size 0x14
    class Texture HDRtexture_BlurWork[2]; // offset 0x1B4, size 0x90
    class Texture BlackAndWhiteTexture; // offset 0x244, size 0x48
    unsigned char * BlackAndWhiteTextureData; // offset 0x28C, size 0x4
    class Texture ScreenWarpTexture; // offset 0x290, size 0x48
    unsigned char * ScreenWarpTextureData; // offset 0x2D8, size 0x4
};
// total size: 0x24
class ScreenRenderTargetCommon : public RenderTarget {
    // Members
    class ColorF backgroundColor; // offset 0x14, size 0x10
};
// total size: 0x28
class ScreenView : public View {};
// total size: 0xC
class RelativePriority {
    // Members
    enum PriorityOrder order; // offset 0x0, size 0x4
    class Module * associate; // offset 0x4, size 0x4
    int events; // offset 0x8, size 0x4
};
enum PriorityOrder {
    PRIORITY_BEFORE = 0,
    PRIORITY_AFTER = 1,
};
enum UnloadSceneEnum {
    UNLOADSCENE_NONE = 0,
    UNLOADSCENE_SCENESWITCH = 1,
    UNLOADSCENE_QUITGAME = 2,
};
enum eGameInitState {
    eInit = 0,
    eLoadingMnls = 1,
    eLanguageSelect = 2,
    eLanguageUnload = 3,
    eLanguageDone = 4,
    eLoadingFont = 5,
    eShowingLegalScreen = 6,
    eLoadingStrap = 7,
    eShowingStrapScreen = 8,
    eDoneStrap = 9,
    eShowingNoHDDSpaceScreen = 10,
    eDoneHDDCheck = 11,
    eLoadingBulk = 12,
    eLoadingBoot = 13,
    eLoadingPlat = 14,
    eLoadingMish = 15,
    eLoadingMnui = 16,
    eFinishingMovies = 17,
};
enum _tagGameVidMode {
    eGameVidModeNTSC = 0,
    eGameVidModePAL = 1,
};
// total size: 0x18
class Game {
    // Members
    class Time time; // offset 0x0, size 0x8
    bool ran; // offset 0x8, size 0x1
    bool firstUpdate; // offset 0x9, size 0x1
    bool quitting; // offset 0xA, size 0x1
    class ReferenceCounter runrc; // offset 0xC, size 0x4
    char * gameName; // offset 0x10, size 0x4
    unsigned int buildNumber; // offset 0x14, size 0x4
};
// total size: 0x98
class LegalScreenInfo {
    // Members
    float timer; // offset 0x0, size 0x4
    class Time lastTime; // offset 0x8, size 0x8
    class xtextbox textBox; // offset 0x10, size 0x88
};
// total size: 0x14
class zEmbeddedStartupIcon {
    // Members
    bool started; // offset 0x0, size 0x1
    unsigned int xPos; // offset 0x4, size 0x4
    unsigned int yPos; // offset 0x8, size 0x4
    unsigned int width; // offset 0xC, size 0x4
    unsigned int height; // offset 0x10, size 0x4
};
enum BootMenuEnum {
    BootMenu_Start = 0,
    BootMenu_Init = 1,
    BootMenu_Setup = 2,
    BootMenu_Loop = 3,
    BootMenu_NetworkSetup = 4,
    BootMenu_Done = 5,
};
enum SceneInitState {
    SceneInitState_GameInit = 0,
    SceneInitState_GameSetup = 1,
    SceneInitState_NetworkingSceneStart = 2,
    SceneInitState_Finalize = 3,
};
// total size: 0x4
class File {
    // Members
    class FileDevice * stream; // offset 0x0, size 0x4
};
// total size: 0x4
class FileDevice {};
// total size: 0x11
class ConsoleLanguageMapping {
    // Members
    unsigned char langCode; // offset 0x0, size 0x1
    char langName[8]; // offset 0x1, size 0x8
    char naLangName[8]; // offset 0x9, size 0x8
};
// total size: 0x1C
class zMODDebugMetrics : public zModule {
    // Members
    bool isStartOfNewScene; // offset 0x18, size 0x1
};
// total size: 0x18
class zMODExample : public zModule {};
// total size: 0x20
class BlockAllocatorArray {
    // Members
    int blockSize; // offset 0x4, size 0x4
    int size; // offset 0x8, size 0x4
    class Block * blockPool; // offset 0xC, size 0x4
    class Block * backBlock; // offset 0x10, size 0x4
    int blockCount; // offset 0x14, size 0x4
    enum GlobalHeapEnum heap; // offset 0x18, size 0x4
    enum eMemMgrTag memTag; // offset 0x1C, size 0x4
};
// total size: 0x10
class Block {
    // Members
    class zNeoDrivenLink * pool; // offset 0x0, size 0x4
    class Block * next; // offset 0x4, size 0x4
    class Block * prev; // offset 0x8, size 0x4
    int idx; // offset 0xC, size 0x4
};
// total size: 0xC0
class zNPCAnimViewer : public zNPCBase {};
// total size: 0x8
class EventActionAdjustHitpoint : public EventActionNew {
    // Members
    enum eMethod Method; // offset 0x0, size 0x4
    float HP; // offset 0x4, size 0x4
};
enum eMethod {
    INCREMENT = 0,
    DECREMENT = 1,
    VALUE = 2,
    END_eMethodENUM = 3,
};
// total size: 0x14
class zNPCGivesDamageInfo {
    // Members
    class xEnt * toEnt; // offset 0x0, size 0x4
    class zNPCEntity * npcEntity; // offset 0x4, size 0x4
    float damageHP; // offset 0x8, size 0x4
    enum eHitSource hitSource; // offset 0xC, size 0x4
    enum zHitTarget hitTarget; // offset 0x10, size 0x4
};
// total size: 0x14
class zNPCBTActionBuilder : public zBTActionBuilder {
    // Members
    class zNPCBase * npcBase; // offset 0x8, size 0x4
    unsigned int actionCount; // offset 0xC, size 0x4
    unsigned int * actions; // offset 0x10, size 0x4
};
// total size: 0xC
class zNPCBTConditionBuilder : public zBTConditionBuilder {
    // Members
    class zNPCBase * npcBase; // offset 0x8, size 0x4
};
// total size: 0x1A4
class zNPCBTClient : public zNPCBTClientBase {};
// total size: 0xC
class zNPCBTManager : public zNPCLogic {
    // Members
    class zNPCBTClientBase * btClient; // offset 0x8, size 0x4
};
// total size: 0x10
class EventNotifyTrap : public EventNotifyNew {
    // Members
    class vec3 trapPosition; // offset 0x0, size 0xC
    unsigned char trapType; // offset 0xC, size 0x1
};
// total size: 0x4
class EventActionOneUnsignedInt : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
};
// total size: 0x40
class hkpCharacterObjectInteractionEvent {
    // Members
    class hkVector4 m_position; // offset 0x0, size 0x10
    class hkVector4 m_normal; // offset 0x10, size 0x10
    float m_objectImpulse; // offset 0x20, size 0x4
    float m_timestep; // offset 0x24, size 0x4
    float m_projectedVelocity; // offset 0x28, size 0x4
    float m_objectMassInv; // offset 0x2C, size 0x4
    class hkpRigidBody * m_body; // offset 0x30, size 0x4
};
// total size: 0x28
class zEntEventToAllNpcsFromNpcWithinDistance_CB {
    // Members
    float distance; // offset 0x0, size 0x4
    class xBase * from; // offset 0x4, size 0x4
    class zNPCBase * fromNPCBase; // offset 0x8, size 0x4
    unsigned int fromEvent; // offset 0xC, size 0x4
    unsigned int toEvent; // offset 0x10, size 0x4
    class EventAny * params; // offset 0x14, size 0x4
    enum ForceEvent forceEvent; // offset 0x18, size 0x4
    class xVec3 fromPos; // offset 0x1C, size 0xC
};
enum ForceEvent {
    FE_YES = 0,
    FE_NO = 1,
};
// total size: 0x8
class Action_NPC_Write_InsideWallnet : public ActionBase {
    // Members
    unsigned int VariableName; // offset 0x0, size 0x4
    float DistanceFromEdge; // offset 0x4, size 0x4
};
// total size: 0x10
class Action_NPC_Flying_Write_InsideWallnet : public Action_NPC_Write_InsideWallnet {
    // Members
    class FlyingNPCHeightAdjustment HeightAdjustment; // offset 0x8, size 0x8
};
// total size: 0x8
class FlyingNPCHeightAdjustment {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class NoneStruct None; // offset 0x0, size 0x1
    class FixedStruct Fixed; // offset 0x0, size 0x4
    class HeightFromWNStruct HeightFromWN; // offset 0x0, size 0x4
    class SpawnHeightStruct SpawnHeight; // offset 0x0, size 0x1
    unsigned int HeightAdjustmentType; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class NoneStruct None; // offset 0x0, size 0x1
    class FixedStruct Fixed; // offset 0x0, size 0x4
    class HeightFromWNStruct HeightFromWN; // offset 0x0, size 0x4
    class SpawnHeightStruct SpawnHeight; // offset 0x0, size 0x1
};
// total size: 0x1
class NoneStruct {};
// total size: 0x4
class FixedStruct {
    // Members
    float YOffset; // offset 0x0, size 0x4
};
// total size: 0x4
class HeightFromWNStruct {
    // Members
    float Height; // offset 0x0, size 0x4
};
// total size: 0x1
class SpawnHeightStruct {};
// total size: 0x2C
class Action_NPC_Write_TargetPlayer : public ActionBase {
    // Members
    float UpdatePeriod; // offset 0x0, size 0x4
    bool CheckInWallNet; // offset 0x4, size 0x1
    bool CheckSwitch; // offset 0x5, size 0x1
    bool NotifyPlayer; // offset 0x6, size 0x1
    class _Distance Distance; // offset 0x8, size 0xC
    class _AttackingEnemy AttackingEnemy; // offset 0x14, size 0x8
    class _TargetingEnemy TargetingEnemy; // offset 0x1C, size 0x8
    class _HumanAI HumanAI; // offset 0x24, size 0x8
};
// total size: 0xC
class _Distance {
    // Members
    float Weight; // offset 0x0, size 0x4
    float MaxDistance; // offset 0x4, size 0x4
    bool ExcludeBeyondMaxDist; // offset 0x8, size 0x1
};
// total size: 0x8
class _AttackingEnemy {
    // Members
    float Weight; // offset 0x0, size 0x4
    unsigned int MaxEnemy; // offset 0x4, size 0x4
};
// total size: 0x8
class _TargetingEnemy {
    // Members
    float Weight; // offset 0x0, size 0x4
    unsigned int MaxEnemy; // offset 0x4, size 0x4
};
// total size: 0x8
class _HumanAI {
    // Members
    float Weight; // offset 0x0, size 0x4
    bool ExcludeIfAI; // offset 0x4, size 0x1
};
// total size: 0x38
class zVariable : public zVariableBase {
    // Members
    class xMovePoint * defaultValue; // offset 0x30, size 0x4
    class xMovePoint * value; // offset 0x34, size 0x4
};
// total size: 0x18
class Action_NPC_Write_PlayerPosition : public ActionBase {
    // Members
    enum OffsetTypes OffsetType; // offset 0x0, size 0x4
    class vec3 Offset; // offset 0x4, size 0xC
    bool IgnoreHeight; // offset 0x10, size 0x1
    unsigned int PlayerVariable; // offset 0x14, size 0x4
};
enum OffsetTypes {
    eOffsetType_None = 0,
    eOffsetType_Absolute = 1,
    eOffsetType_NPCFrame = 2,
    eOffsetType_PlayerFrame = 3,
    END_eOffsetType_ENUM = 4,
};
enum MovePointType {
    eMovePointType_Closest = 0,
    eMovePointType_Farthest = 1,
    eMovePointType_Random = 2,
    eMovePointType_ClosestToMe = 3,
    eMovePointType_FarthestToMe = 4,
    END_eMovePointType_ENUM = 5,
};
// total size: 0x10
class Action_NPC_Write_CurrentPosition : public ActionBase {
    // Members
    bool ConstrainToWallnet; // offset 0x0, size 0x1
    class vec3 Offset; // offset 0x4, size 0xC
};
// total size: 0x18
class Action_NPC_Flying_Write_CurrentPosition : public Action_NPC_Write_CurrentPosition {
    // Members
    class FlyingNPCHeightAdjustment HeightAdjustment; // offset 0x10, size 0x8
};
// total size: 0x8
class Action_NPC_Write_ChildMovePoint : public ActionBase {
    // Members
    bool StopOnFirst; // offset 0x0, size 0x1
    float ExcludeRadius; // offset 0x4, size 0x4
};
// total size: 0x20
class Action_NPC_PlayFX : public ActionBase {
    // Members
    class uid fx; // offset 0x0, size 0x8
    int bone; // offset 0x8, size 0x4
    class vec3 offset; // offset 0xC, size 0xC
    bool kill; // offset 0x18, size 0x1
};
// total size: 0x14
class Action_NPC_PlayAnimationType : public ActionBase {
    // Members
    unsigned int Animation; // offset 0x0, size 0x4
    bool ForceRestart; // offset 0x4, size 0x1
    unsigned int EventData; // offset 0x8, size 0x4
    float Acceleration; // offset 0xC, size 0x4
    enum eHeadingCalcType Heading; // offset 0x10, size 0x4
};
// total size: 0x10
class Action_NPC_Rotate_To_Face : public ActionBase {
    // Members
    enum eNPCRotateToFace faceWhat; // offset 0x0, size 0x4
    bool completeWhenFacing; // offset 0x4, size 0x1
    float turnSpeed; // offset 0x8, size 0x4
    float accuracyAngleDegrees; // offset 0xC, size 0x4
};
enum eNPCRotateToFace {
    Player = 0,
    ClosestPlayerOnWallNet = 1,
    PlayerWeAreAttacking = 2,
    RotateToFaceVar = 3,
    CurrentDestinationVar = 4,
    END_eNPCRotateToFaceENUM = 5,
};
// total size: 0x14
class Action_NPC_GenerateCollectibles : public ActionBase {
    // Members
    unsigned int BoneIndex; // offset 0x0, size 0x4
    class vec3 Offset; // offset 0x4, size 0xC
    enum eNPCCollectibleType Type; // offset 0x10, size 0x4
};
// total size: 0x8
class Action_NPC_StartHeadTracking : public ActionBase {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class PlayerStruct Player; // offset 0x0, size 0x1
    class VariableStruct Variable; // offset 0x0, size 0x4
    unsigned int TargetType; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class PlayerStruct Player; // offset 0x0, size 0x1
    class VariableStruct Variable; // offset 0x0, size 0x4
};
// total size: 0x1
class PlayerStruct {
    // Members
    unsigned char PlayerName; // offset 0x0, size 0x1
};
// total size: 0x4
class VariableStruct {
    // Members
    unsigned int VariableName; // offset 0x0, size 0x4
};
// total size: 0x14
class Action_NPC_Extra_Collision : public ActionBase {
    // Members
    int bone; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    class vec3 offset; // offset 0x8, size 0xC
};
// total size: 0x20
class Action_NPC_PositionEntAtBone : public ActionBase {
    // Members
    class uid EntityUID; // offset 0x0, size 0x8
    unsigned int BoneIndex; // offset 0x8, size 0x4
    class vec3 Offset; // offset 0xC, size 0xC
    bool StopWhenSet; // offset 0x18, size 0x1
};
// total size: 0x24
class Action_NPC_SpawnNPC_ThrowToLocation : public ActionBase {
    // Members
    float atDistance; // offset 0x0, size 0x4
    int spawnBone; // offset 0x4, size 0x4
    class vec3 spawnBoneOffset; // offset 0x8, size 0xC
    float gravity; // offset 0x14, size 0x4
    float h0; // offset 0x18, size 0x4
    float hMax; // offset 0x1C, size 0x4
    unsigned int spawnedNPCAnimID; // offset 0x20, size 0x4
};
// total size: 0x8
class Condition_NPC_HitCount : public ConditionBase {
    // Members
    int numHits; // offset 0x0, size 0x4
    unsigned int compOperator; // offset 0x4, size 0x4
};
// total size: 0x1C
class zNPCBTHitCountCondition : public zNPCBTCondition {
    // Members
    int numHits; // offset 0x14, size 0x4
    unsigned int op; // offset 0x18, size 0x4
};
// total size: 0xC
class Condition_NPC_HitPointCount : public ConditionBase {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class ValueStruct Value; // offset 0x0, size 0x4
    class VariableStruct Variable; // offset 0x0, size 0x4
    unsigned int hitCount; // offset 0x4, size 0x4
    unsigned int compOperator; // offset 0x8, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class ValueStruct Value; // offset 0x0, size 0x4
    class VariableStruct Variable; // offset 0x0, size 0x4
};
// total size: 0x4
class ValueStruct {
    // Members
    int hitCount; // offset 0x0, size 0x4
};
enum eBoolOperators {
    BoolOperator_EqualTo = 0,
    BoolOperator_Greater = 1,
    BoolOperator_Less = 2,
    BoolOperator_GreaterEq = 3,
    BoolOperator_LessEq = 4,
    BoolOperator_NotEq = 5,
    END_BoolOperator_ENUM = 6,
};
// total size: 0x4
class EventActionShowBossMeter : public EventActionNew {
    // Members
    enum eBossMeterType BossType; // offset 0x0, size 0x4
};
enum eBossMeterType {
    eBossMeterType_Miniboss1 = 0,
    eBossMeterType_Miniboss2 = 1,
    eBossMeterType_Miniboss3 = 2,
    eBossMeterType_Boss1 = 3,
    eBossMeterType_Boss2 = 4,
    eBossMeterType_Boss3 = 5,
    END_eBossMeterType_ENUM = 6,
};
// total size: 0xC
class PlayerCollisionListener : public zNPCCollisionListener {
    // Members
    class zNPCBTDamagePlayerOnContactAction * parentAction; // offset 0x8, size 0x4
};
// total size: 0x8
class Action_NPC_DamagePlayerOnContact : public ActionBase {
    // Members
    float damage; // offset 0x0, size 0x4
    enum eHitSource SourceType; // offset 0x4, size 0x4
};
// total size: 0xC
class EventActionDamagePlayer : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    enum eHitSource param1; // offset 0x4, size 0x4
    bool param2; // offset 0x8, size 0x1
};
// total size: 0x10
class Action_NPC_DamagePlayerInRange : public ActionBase {
    // Members
    unsigned int options; // offset 0x0, size 0x4
    float range; // offset 0x4, size 0x4
    float damage; // offset 0x8, size 0x4
    enum eHitSource SourceType; // offset 0xC, size 0x4
};
// total size: 0x40
class Action_NPC_Shoot : public ActionBase {
    // Members
    int bone; // offset 0x0, size 0x4
    class uid projectileAsset; // offset 0x8, size 0x8
    class @class unionLaunchSpeed; // offset 0x10, size 0x4
    unsigned char launchSpeedOption; // offset 0x14, size 0x1
    class vec3 launchPositionOffset; // offset 0x18, size 0xC
    enum eShootTo shootTo; // offset 0x24, size 0x4
    class __shootToUnion__ shootToUnion; // offset 0x28, size 0x14
};
// total size: 0x4
class @class {
    // Members
    class _FromAsset FromAsset; // offset 0x0, size 0x1
    class _Custom Custom; // offset 0x0, size 0x4
};
// total size: 0x1
class _FromAsset {};
// total size: 0x4
class _Custom {
    // Members
    float speedValue; // offset 0x0, size 0x4
};
enum eShootTo {
    eShootTo_Direction = 0,
    eShootTo_Target = 1,
    END_eShootTo_ENUM = 2,
};
// total size: 0x14
class __shootToUnion__ {
    // Members
    enum eShootTo type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0x10
};
// total size: 0x10
class @class {
    // Members
    class ShootToDirectionStruct _Direction; // offset 0x0, size 0x10
    class ShootToTargetStruct _Target; // offset 0x0, size 0xC
};
// total size: 0x10
class ShootToDirectionStruct {
    // Members
    class @class toDirUnion; // offset 0x0, size 0xC
    unsigned char shootDirection; // offset 0xC, size 0x1
};
// total size: 0xC
class @class {
    // Members
    class _dirAt dirAt; // offset 0x0, size 0x1
    class _dirUp dirUp; // offset 0x0, size 0x1
    class _dirRight dirRight; // offset 0x0, size 0x1
    class _dirBone dirBone; // offset 0x0, size 0x1
    class _dirVector dirVector; // offset 0x0, size 0xC
};
// total size: 0x1
class _dirAt {
    // Members
    bool positive; // offset 0x0, size 0x1
};
// total size: 0x1
class _dirUp {
    // Members
    bool positive; // offset 0x0, size 0x1
};
// total size: 0x1
class _dirRight {
    // Members
    bool positive; // offset 0x0, size 0x1
};
// total size: 0x1
class _dirBone {
    // Members
    unsigned char dirBoneIndx; // offset 0x0, size 0x1
};
// total size: 0xC
class _dirVector {
    // Members
    class vec3 dirVecValue; // offset 0x0, size 0xC
};
// total size: 0xC
class ShootToTargetStruct {
    // Members
    class vec3 targetPositionOffset; // offset 0x0, size 0xC
};
// total size: 0x6C
class zProjectileLaunchData {
    // Members
    enum LaunchType launchType; // offset 0x0, size 0x4
    float launchSpeed; // offset 0x4, size 0x4
    class @class __anon; // offset 0x8, size 0xC
    class xVec3 launchDirection; // offset 0x8, size 0xC
    class xVec3 targetPosition; // offset 0x8, size 0xC
    class xVec3 targetVelocity; // offset 0x14, size 0xC
    class xMat4x3 mat; // offset 0x20, size 0x40
    class ModelInstanceAsset * modelOverride; // offset 0x60, size 0x4
    float gravityOverride; // offset 0x64, size 0x4
    enum E_HAVOK_COLLIDE_FILTER_LAYER havokCollLayer; // offset 0x68, size 0x4
};
enum LaunchType {
    TO_TARGET = 0,
    TO_DIRECTION = 1,
};
// total size: 0xC
class @class {
    // Members
    class xVec3 launchDirection; // offset 0x0, size 0xC
    class xVec3 targetPosition; // offset 0x0, size 0xC
};
// total size: 0x8
class Action_NPC_ReleaseAttack : public ActionBase {
    // Members
    unsigned int PlayerVariable; // offset 0x0, size 0x4
    float Delay; // offset 0x4, size 0x4
};
// total size: 0x8
class Action_NPC_Set_CombatCurHitPoints : public ActionBase {
    // Members
    class @class UnionCurHitPoints; // offset 0x0, size 0x4
    unsigned char newCurHitPoints; // offset 0x4, size 0x1
};
// total size: 0x4
class @class {
    // Members
    class _ResetToMax ResetToMax; // offset 0x0, size 0x1
    class _SetToVal SetToVal; // offset 0x0, size 0x4
    class _SetToVariable SetToVariable; // offset 0x0, size 0x4
};
// total size: 0x1
class _ResetToMax {};
// total size: 0x4
class _SetToVal {
    // Members
    float value; // offset 0x0, size 0x4
};
// total size: 0x4
class _SetToVariable {
    // Members
    unsigned int valueVariable; // offset 0x0, size 0x4
};
// total size: 0x1
class Action_NPC_SetHitProfile : public ActionBase {
    // Members
    unsigned char HitProfile; // offset 0x0, size 0x1
};
// total size: 0x14
class Action_NPC_Jump : public ActionBase {
    // Members
    unsigned int DestinationVariable; // offset 0x0, size 0x4
    float Height; // offset 0x4, size 0x4
    float VelocityXZ; // offset 0x8, size 0x4
    float MaxVelocityY; // offset 0xC, size 0x4
    bool CheckDestination; // offset 0x10, size 0x1
    bool UseLaunchVelXZ; // offset 0x11, size 0x1
};
// total size: 0x34
class Action_NPC_Flee : public Action_NPC_MoveTo {
    // Members
    unsigned int PlayerVariable; // offset 0x2C, size 0x4
    bool UseFleePoint; // offset 0x30, size 0x1
    bool UseFleeDirection; // offset 0x31, size 0x1
};
// total size: 0x34
class Action_NPC_Flutter : public Action_NPC_MoveTo {
    // Members
    float MinYOffset; // offset 0x2C, size 0x4
    float MaxYOffset; // offset 0x30, size 0x4
};
// total size: 0x2C
class Action_NPC_PathFollowMP : public ActionBase {
    // Members
    float PathWidth; // offset 0x0, size 0x4
    unsigned int MovementVariable; // offset 0x4, size 0x4
    class NPC_Action_MovementData MovementData; // offset 0x8, size 0x24
};
// total size: 0x10
class NPCFollowPath : public EventActionFollowPath {};
// total size: 0x10
class EventActionFollowPath : public EventActionNew {
    // Members
    enum eNPCMoveType moveType; // offset 0x0, size 0x4
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x8
class Action_NPC_Stop : public ActionBase {
    // Members
    float Acceleration; // offset 0x0, size 0x4
    enum eHeadingCalcType Heading; // offset 0x4, size 0x4
};
// total size: 0xC
class Action_NPC_FaceFromEvent : public ActionBase {
    // Members
    unsigned int Animation; // offset 0x0, size 0x4
    float Acceleration; // offset 0x4, size 0x4
    unsigned int FaceEventVar; // offset 0x8, size 0x4
};
// total size: 0x30
class Action_NPC_Orbit : public Action_NPC_MoveTo {
    // Members
    unsigned int PlayerVariable; // offset 0x2C, size 0x4
};
// total size: 0x4
class Action_NPC_SnapToFloor : public ActionBase {
    // Members
    float HeightOffset; // offset 0x0, size 0x4
};
// total size: 0x24
class zNPCRayHitCollector : public hkpRayHitCollector {
    // Members
    bool hitIt; // offset 0x8, size 0x1
    class xBase * hitObj; // offset 0xC, size 0x4
    class xBase * ignoreObj; // offset 0x10, size 0x4
    float nearDist; // offset 0x14, size 0x4
    class xVec3 hitNormal; // offset 0x18, size 0xC
};
// total size: 0x8
class Action_NPC_SwarmMoveTo : public ActionBase {
    // Members
    bool allArrive; // offset 0x0, size 0x1
    float MaxSpeed; // offset 0x4, size 0x4
};
// total size: 0x14
class Action_NPC_SwarmFlutter : public Action_NPC_SwarmMoveTo {
    // Members
    float MinYOffset; // offset 0x8, size 0x4
    float MaxYOffset; // offset 0xC, size 0x4
    float GlideProbability; // offset 0x10, size 0x4
};
// total size: 0x2
class Action_NPC_Swarm_BugCollected : public ActionBase {
    // Members
    unsigned char BugType; // offset 0x0, size 0x1
    unsigned char BugColor; // offset 0x1, size 0x1
};
// total size: 0x8
class Action_NPC_SwarmPathFollowMP : public ActionBase {
    // Members
    float PathWidth; // offset 0x0, size 0x4
    float MaxSpeed; // offset 0x4, size 0x4
};
// total size: 0x18
class Action_NPC_SwarmPathFollowCircle : public ActionBase {
    // Members
    class vec3 offset; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
    float PathWidth; // offset 0x10, size 0x4
    float MaxSpeed; // offset 0x14, size 0x4
};
// total size: 0x8
class Action_NPC_SetRPSAttackState : public ActionBase {
    // Members
    unsigned char State; // offset 0x0, size 0x1
    float Delay; // offset 0x4, size 0x4
};
// total size: 0x34
class zPlanktonShakeState {
    // Members
    class xVec3 lookAtPoint; // offset 0x0, size 0xC
    class xVec2 swingPos; // offset 0xC, size 0x8
    class xVec2 swingVel; // offset 0x14, size 0x8
    float x; // offset 0x1C, size 0x4
    float y; // offset 0x20, size 0x4
    int shakeCountX; // offset 0x24, size 0x4
    int shakeCountY; // offset 0x28, size 0x4
    bool performSlam; // offset 0x2C, size 0x1
    bool performingAutoShake; // offset 0x2D, size 0x1
    float autoShakeDelay; // offset 0x30, size 0x4
};
// total size: 0x8
class Action_NPC_GenerateSpinVortex : public ActionBase {
    // Members
    float Radius; // offset 0x0, size 0x4
    float Acceleration; // offset 0x4, size 0x4
};
// total size: 0x8
class EventMapNode {
    // Members
    unsigned int percievedEvent; // offset 0x0, size 0x4
    unsigned int notPercievedEvent; // offset 0x4, size 0x4
};
// total size: 0x18
class Action_NPC_WriteSquidBossBlockTime : public ActionBase {
    // Members
    class uid StageCounterUID; // offset 0x0, size 0x8
    unsigned int TimeVariable; // offset 0x8, size 0x4
    unsigned int IndexVariable; // offset 0xC, size 0x4
    unsigned int MultiplierVariable; // offset 0x10, size 0x4
    bool Block; // offset 0x14, size 0x1
};
// total size: 0x2C
class Action_NPC_FollowPerceptionTarget : public ActionBase {
    // Members
    unsigned char Target; // offset 0x0, size 0x1
    class NPC_Action_MovementData MovementData; // offset 0x4, size 0x24
    bool EndActionWhenArrived; // offset 0x28, size 0x1
};
// total size: 0x8
class Condition_NPC_CheckPerception : public ConditionBase {
    // Members
    unsigned int Targets; // offset 0x0, size 0x4
    unsigned char PerceptionType; // offset 0x4, size 0x1
    bool Anded; // offset 0x5, size 0x1
};
// total size: 0x2
class Condition_NPC_CheckPerceptionTargetStatus : public ConditionBase {
    // Members
    unsigned char Target; // offset 0x0, size 0x1
    unsigned char PerceptionTargetStatusType; // offset 0x1, size 0x1
};
// total size: 0x8
class Condition_NPC_IsInWallnet : public ConditionBase {
    // Members
    enum CheckType Check; // offset 0x0, size 0x4
    unsigned char Target; // offset 0x4, size 0x1
};
// total size: 0x8
class Condition_NPC_FacingPerceptionTarget : public ConditionBase {
    // Members
    unsigned char Target; // offset 0x0, size 0x1
    float Tolerance; // offset 0x4, size 0x4
};
// total size: 0xC
class Condition_NPC_NearbyProjectile : public ConditionBase {
    // Members
    enum eProjectileType projectileType; // offset 0x0, size 0x4
    float CollCylHeight; // offset 0x4, size 0x4
    float CollCylRadius; // offset 0x8, size 0x4
};
// total size: 0x10
class zNPCEntity_ModelUpdater : public xOGModelUpdater {};
// total size: 0x70
class hkpCharacterRigidBodyCinfo {
    // Members
    unsigned int m_collisionFilterInfo; // offset 0x0, size 0x4
    class hkpShape * m_shape; // offset 0x4, size 0x4
    class hkVector4 m_position; // offset 0x10, size 0x10
    class hkQuaternion m_rotation; // offset 0x20, size 0x10
    float m_mass; // offset 0x30, size 0x4
    float m_friction; // offset 0x34, size 0x4
    float m_maxLinearVelocity; // offset 0x38, size 0x4
    float m_allowedPenetrationDepth; // offset 0x3C, size 0x4
    class hkVector4 m_up; // offset 0x40, size 0x10
    float m_maxSlope; // offset 0x50, size 0x4
    float m_maxForce; // offset 0x54, size 0x4
    float m_maxSpeedForSimplexSolver; // offset 0x58, size 0x4
    float m_penetrationRecoverySpeed; // offset 0x5C, size 0x4
    int m_userPlane; // offset 0x60, size 0x4
    float m_supportDistance; // offset 0x64, size 0x4
    int m_vdbColor; // offset 0x68, size 0x4
};
// total size: 0x1D0
class TriggerIdentifyingPointCollectorNoShrapnelOrPuck : public TriggerIdentifyingPointCollector {
    // Members
    class hkArray m_shrapnelObjectsWeHit; // offset 0x1B8, size 0xC
    class hkArray m_floatingObjectsWeHit; // offset 0x1C4, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    class ShrapnelContactData * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x30
class ShrapnelContactData {
    // Members
    class hkpRigidBody * rBody; // offset 0x0, size 0x4
    class hkContactPoint contact; // offset 0x10, size 0x20
};
// total size: 0x20
class hkpCharacterObjectInteractionResult {
    // Members
    class hkVector4 m_objectImpulse; // offset 0x0, size 0x10
    class hkVector4 m_impulsePosition; // offset 0x10, size 0x10
};
// total size: 0x8
class zNPCFXTypeInfo {
    // Members
    enum eNPCFXType type; // offset 0x0, size 0x4
    class zNPCFXNode * (* fxNodeCreator)(class Factory * factory); // offset 0x4, size 0x4
};
// total size: 0x18
class zNPCFXOneShotFXScript : public zNPCFXNode {
    // Members
    class FXTypeFXScript * asset; // offset 0x10, size 0x4
    class zFXSpawn * script; // offset 0x14, size 0x4
};
// total size: 0x28
class FXTypeFXScript {
    // Members
    int AttachedBone; // offset 0x0, size 0x4
    class vec3 AttachOffset; // offset 0x4, size 0xC
    class Rotation3 AttachOrientation; // offset 0x10, size 0xC
    class uid FXSpawnID; // offset 0x20, size 0x8
};
// total size: 0x1C
class zNPCFXLoopFXScript : public zNPCFXNode {
    // Members
    class FXTypeFXScript * asset; // offset 0x10, size 0x4
    class zFXSpawn * script; // offset 0x14, size 0x4
    class zFXSpawn * spawnPoint; // offset 0x18, size 0x4
};
// total size: 0x30
class zNPCFXImmediateInstanceLoop : public zNPCFXNode {
    // Members
    class FXTypeImmediateInstance * asset; // offset 0x10, size 0x4
    class ImmediatePrototypeEntity * textures[4]; // offset 0x14, size 0x10
    unsigned int numberOfTextures; // offset 0x24, size 0x4
    float curFXAngle; // offset 0x28, size 0x4
    float curFXTime; // offset 0x2C, size 0x4
};
// total size: 0x40
class FXTypeImmediateInstance {
    // Members
    class ImmediateInstanceAsset Texture1; // offset 0x0, size 0x10
    class ImmediateInstanceAsset Texture2; // offset 0x10, size 0x10
    class ImmediateInstanceAsset Texture3; // offset 0x20, size 0x10
    class ImmediateInstanceAsset Texture4; // offset 0x30, size 0x10
};
// total size: 0x3C
class Type : public zNPCType {};
// total size: 0x4
class Creator : public CreatorI {};
// total size: 0x44
class zProjectileManager : public zModule {
    // Members
    unsigned int nextProjectileID; // offset 0x18, size 0x4
    class zProjectile * projectiles[10]; // offset 0x1C, size 0x28
};
// total size: 0x1C8
class zProjectileSBPuck : public zProjectile {
    // Members
    enum ePuckType puckType; // offset 0x198, size 0x4
    class zNPCBase * homingTarget; // offset 0x19C, size 0x4
    class zFXSpawn * activeFXAsset; // offset 0x1A0, size 0x4
    class zFXSpawn * activeFXSpawn; // offset 0x1A4, size 0x4
    bool reverseMode; // offset 0x1A8, size 0x1
    float ignoreReflectionTimer; // offset 0x1AC, size 0x4
    float appearDelayTimer; // offset 0x1B0, size 0x4
    class xVec3 desiredVelocity; // offset 0x1B4, size 0xC
    bool readyToProcessCollision; // offset 0x1C0, size 0x1
};
enum ePuckType {
    PLAYER_PUCK = 0,
    PLAYER_SPONGEBUFF_PUCK = 1,
    PLAYER_POWERUP_PUCK = 2,
    TURRET_PUCK = 3,
};
// total size: 0x8
class EventActionEntOrGroup : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x20
class BlackboardWritePayload {
    // Members
    unsigned int WriteTo; // offset 0x0, size 0x4
    enum eSourceType SourceType; // offset 0x4, size 0x4
    class @class __anon; // offset 0x8, size 0x18
    class VariableStruct Variable; // offset 0x8, size 0x4
    class ValueStruct Value; // offset 0x8, size 0x18
    class ResetStruct Reset; // offset 0x8, size 0x1
};
enum eSourceType {
    eSourceType_Variable = 0,
    eSourceType_Value = 1,
    eSourceType_Reset = 2,
    END_eSourceType_ENUM = 3,
};
// total size: 0x18
class @class {
    // Members
    class VariableStruct Variable; // offset 0x0, size 0x4
    class ValueStruct Value; // offset 0x0, size 0x18
    class ResetStruct Reset; // offset 0x0, size 0x1
};
// total size: 0x18
class ValueStruct {
    // Members
    class __VariableTypeUnion__ VariableTypeUnion; // offset 0x0, size 0x18
};
// total size: 0x18
class __VariableTypeUnion__ {
    // Members
    enum eBlackboardVariableType type; // offset 0x0, size 0x4
    class @class u; // offset 0x8, size 0x10
};
enum eBlackboardVariableType {
    eBlackboardVariableType_Integer = 0,
    eBlackboardVariableType_Float = 1,
    eBlackboardVariableType_Boolean = 2,
    eBlackboardVariableType_Player = 3,
    eBlackboardVariableType_Vector3 = 4,
    eBlackboardVariableType_UID = 5,
    eBlackboardVariableType_EventData = 6,
    END_eBlackboardVariableType_ENUM = 7,
};
// total size: 0x10
class @class {
    // Members
    class IntStruct _Integer; // offset 0x0, size 0x8
    class FloatStruct _Float; // offset 0x0, size 0x8
    class BoolStruct _Boolean; // offset 0x0, size 0x1
    class PlayerStruct _Player; // offset 0x0, size 0x4
    class VectorStruct _Vector3; // offset 0x0, size 0xC
    class UIDStruct _UID; // offset 0x0, size 0x8
};
// total size: 0x8
class IntStruct {
    // Members
    enum eNumericWriteType WriteType; // offset 0x0, size 0x4
    int Value; // offset 0x4, size 0x4
};
enum eNumericWriteType {
    eNumericWriteType_SetTo = 0,
    eNumericWriteType_Increment = 1,
    END_eNumericWriteType_ENUM = 2,
};
// total size: 0x8
class FloatStruct {
    // Members
    enum eNumericWriteType WriteType; // offset 0x0, size 0x4
    float Value; // offset 0x4, size 0x4
};
// total size: 0x1
class BoolStruct {
    // Members
    bool Value; // offset 0x0, size 0x1
};
// total size: 0x4
class PlayerStruct {
    // Members
    enum ePlayerType Value; // offset 0x0, size 0x4
};
enum ePlayerType {
    P1 = 0,
    P2 = 1,
    P3 = 2,
    P4 = 3,
    None = 4,
    END_ePlayerTypeENUM = 5,
};
// total size: 0xC
class VectorStruct {
    // Members
    class vec3 Value; // offset 0x0, size 0xC
};
// total size: 0x8
class UIDStruct {
    // Members
    class uid Value; // offset 0x0, size 0x8
};
// total size: 0x1
class ResetStruct {};
// total size: 0x28
class EventActionJawboneAnimateOnNPC : public EventActionNew {
    // Members
    short FirstBone; // offset 0x0, size 0x2
    short LastBone; // offset 0x2, size 0x2
    enum eJawboneSpeechType SpeechType; // offset 0x4, size 0x4
    float MinAngle; // offset 0x8, size 0x4
    float MaxAngle; // offset 0xC, size 0x4
    float SpeechPeriod; // offset 0x10, size 0x4
    class uid VFXAssetID; // offset 0x18, size 0x8
    int VFXBone; // offset 0x20, size 0x4
};
// total size: 0x278
class zNPCGenericSwarm : public zNPCBase {
    // Members
    class zNPCEntity * entities[32]; // offset 0xC0, size 0x80
    class zNPCFX * entFXs[32]; // offset 0x140, size 0x80
    int memberStatus[32]; // offset 0x1C0, size 0x80
    int numberOfSwarmers; // offset 0x240, size 0x4
    class xVec3 averagePos; // offset 0x244, size 0xC
    float memberSpawnTimeAcc; // offset 0x250, size 0x4
    float avgMemberSpawnPeriod; // offset 0x254, size 0x4
    float nextMemberSpawnPeriod; // offset 0x258, size 0x4
    int remainingSpawns; // offset 0x25C, size 0x4
    class zWallNet * wallNet; // offset 0x260, size 0x4
    class xVec3 hidePoint; // offset 0x264, size 0xC
    int numberOfKilledMembers; // offset 0x270, size 0x4
    unsigned int killedMembers; // offset 0x274, size 0x4
};
// total size: 0x1A0
class GenericSwarm : public NPCAsset {
    // Members
    int MemberNumber; // offset 0x188, size 0x4
    float SpawnPeriod; // offset 0x18C, size 0x4
    class uid HidePoint; // offset 0x190, size 0x8
    class uid DeathDecal; // offset 0x198, size 0x8
};
// total size: 0x1C
class zNPCManager : public zModule {
    // Members
    class xAnimTable * animTables; // offset 0x18, size 0x4
};
// total size: 0xC
class zNPCManager_WithinSphereCheck_CB {
    // Members
    class fixed_stack_list * npcList; // offset 0x0, size 0x4
    class xVec3 * checkPos; // offset 0x4, size 0x4
    float radius; // offset 0x8, size 0x4
};
// total size: 0x14
class zNPCManager_WithinConeCheck_CB {
    // Members
    class fixed_stack_list * npcList; // offset 0x0, size 0x4
    class xVec3 * startPos; // offset 0x4, size 0x4
    class xVec3 * dirNormalized; // offset 0x8, size 0x4
    float coneLength; // offset 0xC, size 0x4
    float coneAngle; // offset 0x10, size 0x4
};
// total size: 0x8A8
class zNPCNinjaManager : public zModule {
    // Members
    class fixed_stack_list waitingQueue[4]; // offset 0x18, size 0x860
    class zNPCBase * curAttacker[4]; // offset 0x878, size 0x10
    float remainingAttackTime[4]; // offset 0x888, size 0x10
    float delayReleaseTime[4]; // offset 0x898, size 0x10
};
// total size: 0x218
class fixed_stack_list {
    // Members
    unsigned long _size; // offset 0x0, size 0x4
    class empty_node_type head; // offset 0x4, size 0x8
    class empty_node_type tail; // offset 0xC, size 0x8
    class node_type * stack; // offset 0x14, size 0x4
    class node_type buffer[32]; // offset 0x18, size 0x200
};
// total size: 0x8
class empty_node_type {
    // Members
    class node_type * prev; // offset 0x0, size 0x4
    class node_type * next; // offset 0x4, size 0x4
};
// total size: 0x10
class node_type : public empty_node_type {
    // Members
    class NinjaSlot value; // offset 0x8, size 0x8
};
// total size: 0x8
class NinjaSlot {
    // Members
    class zNPCBase * requestor; // offset 0x0, size 0x4
    unsigned int requestedThisFrame; // offset 0x4, size 0x4
};
// total size: 0x28
class PerceptionNode {
    // Members
    unsigned char Shape; // offset 0x0, size 0x1
    class @class __anon; // offset 0x4, size 0x18
    class PercShapeSphere Sphere; // offset 0x4, size 0x4
    class PercShapeSoundSphere SoundSphere; // offset 0x4, size 0x8
    class PercShapeCylinder Cylinder; // offset 0x4, size 0xC
    class PercShapeAngularSphere AngularSphere; // offset 0x4, size 0x10
    class PercShapeAngularCylinder AngularCylinder; // offset 0x4, size 0x18
    class PercShapeNPCWalls InNPCWalls; // offset 0x4, size 0x8
    unsigned int flags; // offset 0x1C, size 0x4
    unsigned int LOSCollisionLayer; // offset 0x20, size 0x4
    float HysteresisRatio; // offset 0x24, size 0x4
};
// total size: 0x18
class @class {
    // Members
    class PercShapeSphere Sphere; // offset 0x0, size 0x4
    class PercShapeSoundSphere SoundSphere; // offset 0x0, size 0x8
    class PercShapeCylinder Cylinder; // offset 0x0, size 0xC
    class PercShapeAngularSphere AngularSphere; // offset 0x0, size 0x10
    class PercShapeAngularCylinder AngularCylinder; // offset 0x0, size 0x18
    class PercShapeNPCWalls InNPCWalls; // offset 0x0, size 0x8
};
// total size: 0x4
class PercShapeSphere {
    // Members
    float Radius; // offset 0x0, size 0x4
};
// total size: 0x8
class PercShapeSoundSphere {
    // Members
    float Radius; // offset 0x0, size 0x4
    float SoundSphereDetectionNoise; // offset 0x4, size 0x4
};
// total size: 0xC
class PercShapeCylinder {
    // Members
    float Radius; // offset 0x0, size 0x4
    float HeightUp; // offset 0x4, size 0x4
    float HeightDown; // offset 0x8, size 0x4
};
// total size: 0x10
class PercShapeAngularSphere {
    // Members
    bool UseTargetBounds; // offset 0x0, size 0x1
    float Radius; // offset 0x4, size 0x4
    float Angle; // offset 0x8, size 0x4
    float tanHAngle; // offset 0xC, size 0x4
};
// total size: 0x18
class PercShapeAngularCylinder {
    // Members
    bool UseTargetBounds; // offset 0x0, size 0x1
    float Radius; // offset 0x4, size 0x4
    float HeightUp; // offset 0x8, size 0x4
    float HeightDown; // offset 0xC, size 0x4
    float Angle; // offset 0x10, size 0x4
    float tanHAngle; // offset 0x14, size 0x4
};
// total size: 0x8
class PercShapeNPCWalls {
    // Members
    float HeightUp; // offset 0x0, size 0x4
    float HeightDown; // offset 0x4, size 0x4
};
enum eCollisionLayer {
    eCollisionALL = 0,
    eFixedLayer = 1,
    eFixedNoCamLayer = 2,
    eKeyFrameObjLayer = 3,
    eDynamicSimpleObjLayer = 4,
    eShrapnelObjLayer = 5,
    ePOWLayer = 6,
    ePOWNoPlayerLayer = 7,
    eFlyingDebrisLayer = 8,
    eRagdollsLayer = 9,
    eNPCLayer = 10,
    eProjectilesLayer = 11,
    eProjectilesNoPlayerNoProjectilesLayer = 12,
    ePlayerLayer = 13,
    eFXParticlesLayer = 14,
    eTriggersLayer = 15,
    eCameraLayer = 16,
    eNPCNoPlayerLayer = 17,
    eProjectilesNoPlayerLayer = 18,
    eProjectilesNoProjectilesLayer = 19,
    eCollectiblesLayer = 20,
    eStaticCollectiblesLayer = 21,
    eCollectiblesNoPlanktonLayer = 22,
    eTikisLayer = 24,
    ePlanktonBeamLayer = 25,
    eNPCNoNPCLayer = 26,
    eNoCollisionLayer = 31,
    eDefaultCollision = 32,
    END_ENUM = 33,
};
// total size: 0x8
class EventActionSwitchWallNet : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x14
class zNPCPerceptionLOSChecker : public hkpRayHitCollector {
    // Members
    class zNPCEntity * ignoreStart; // offset 0x8, size 0x4
    class xEnt * ignoreEnd; // offset 0xC, size 0x4
    bool hitIt; // offset 0x10, size 0x1
};
// total size: 0x1
class zNPCRegistry {};
// total size: 0x58
class zNavLink : public xOGEntity {
    // Members
    class NavLink * asset; // offset 0x3C, size 0x4
    class zNavMarker * start; // offset 0x40, size 0x4
    class zNavMarker * end; // offset 0x44, size 0x4
    bool enabled; // offset 0x48, size 0x1
    class xBase * lockedBy; // offset 0x4C, size 0x4
    bool isLooseLock; // offset 0x50, size 0x1
};
// total size: 0x48
class zWallNetGroup : public xOGEntity {
    // Members
    class WallNetGroup * myAsset; // offset 0x3C, size 0x4
    class zWallNet * * wallNets; // offset 0x40, size 0x4
    int count; // offset 0x44, size 0x4
};
// total size: 0x98
class zSpinner : public xEffectAttachIntf {
    // Members
    class zSpinnerAsset * asset; // offset 0x3C, size 0x4
    bool on; // offset 0x40, size 0x1
    float stateTimer; // offset 0x44, size 0x4
    int spinCount; // offset 0x48, size 0x4
    class hkpRigidBody * rigidBody; // offset 0x4C, size 0x4
    class hkpShape * rbShape; // offset 0x50, size 0x4
    enum SpinnerStateID curStateID; // offset 0x54, size 0x4
    class xMat4x3 driveOffMat; // offset 0x58, size 0x40
};
enum SpinnerStateID {
    SPINNER_UNDEF = 0,
    SPINNER_IDLE = 1,
    SPINNER_SPIN = 2,
    SPINNER_RECOVER = 3,
};
// total size: 0xA8
class zNPCSingleSteering : public zNPCSteering {
    // Members
    class xVec3 supportVel; // offset 0x48, size 0xC
    class xVec3 wantedVel; // offset 0x54, size 0xC
    class xVec3 wantedHeading; // offset 0x60, size 0xC
    class xSpringyAngle turnSpring; // offset 0x6C, size 0x18
    class zWallNetPositionXZ wallNetPosition; // offset 0x84, size 0x14
    float curTurnRate; // offset 0x98, size 0x4
    float timeSinceLastHoverRayCast; // offset 0x9C, size 0x4
    float estimatedGroundHeight; // offset 0xA0, size 0x4
    class zNPCSteeringControl * curControl; // offset 0xA4, size 0x4
};
// total size: 0x1648
class zNPCSwarmSteering : public zNPCSteering {
    // Members
    class xVec3 supportVels[64]; // offset 0x48, size 0x300
    class xVec3 wantedVels[64]; // offset 0x348, size 0x300
    class xVec3 wantedHeadings[64]; // offset 0x648, size 0x300
    class xSpringyAngle turnSprings[64]; // offset 0x948, size 0x600
    class zWallNetPositionXZ wallNetPositions[64]; // offset 0xF48, size 0x500
    float curTurnRates[64]; // offset 0x1448, size 0x100
    class zNPCSteeringControl * curControls[64]; // offset 0x1548, size 0x100
};
// total size: 0x10
class zNPCSteeringVec {
    // Members
    class xVec3 dir; // offset 0x0, size 0xC
    float mag; // offset 0xC, size 0x4
};
// total size: 0x88
class zNPCSteeringWanderControl : public zNPCSteeringControl {
    // Members
    class zWanderData wanderData; // offset 0x4C, size 0x1C
    class zWallAvoidanceData wallAvoidanceData; // offset 0x68, size 0x10
    class zNPCSteeringAccumulator accAccum; // offset 0x78, size 0x10
};
// total size: 0x98
class zNPCSteeringFleeControl : public zNPCSteeringControl {
    // Members
    class zWanderData wanderData; // offset 0x4C, size 0x1C
    class zWallAvoidanceData wallAvoidanceData; // offset 0x68, size 0x10
    class zNPCSteeringDest fleeDestination; // offset 0x78, size 0x10
    class zNPCSteeringAccumulator accAccum; // offset 0x88, size 0x10
};
// total size: 0x228
class zNPCSteeringFollowPlayerControl : public zNPCSteeringMoveToControl {
    // Members
    class zPlayer * player; // offset 0x20C, size 0x4
    class zObjectAvoidanceData objectAvoidanceData; // offset 0x210, size 0x18
};
// total size: 0x18
class zObjectAvoidanceData {
    // Members
    float avoidanceMinAcc; // offset 0x0, size 0x4
    float avoidanceMaxAcc; // offset 0x4, size 0x4
    float avoidanceTime; // offset 0x8, size 0x4
    float avoidanceMinDist; // offset 0xC, size 0x4
    float avoidanceSphereRad; // offset 0x10, size 0x4
    bool enabled; // offset 0x14, size 0x1
};
// total size: 0x50
class zNPCSteeringFollowPlayerClosestHitCollector : public hkpClosestCdPointCollector {
    // Members
    class xBase * ignoreStart; // offset 0x40, size 0x4
    class xBase * ignoreBase; // offset 0x44, size 0x4
};
// total size: 0x40
class hkpClosestCdPointCollector : public hkpCdPointCollector {
    // Members
    class hkpRootCdPoint m_hitPoint; // offset 0x10, size 0x30
};
// total size: 0x58
class zNPCSteeringFloatControl : public zNPCSteeringControl {
    // Members
    class xVec3 floatAcc; // offset 0x4C, size 0xC
};
// total size: 0x1C
class NPC_Combat {
    // Members
    float HitPoints; // offset 0x0, size 0x4
    class __DamageMultipliers__ DamageMultipliers; // offset 0x4, size 0x8
    class __Attacks__ Attacks; // offset 0xC, size 0x8
    class __HitSpots__ HitSpots; // offset 0x14, size 0x8
};
// total size: 0x8
class __DamageMultipliers__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __Attacks__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __HitSpots__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0xC
class NPCCounterPattern {
    // Members
    unsigned int Rank; // offset 0x0, size 0x4
    class __Counters__ Counters; // offset 0x4, size 0x8
};
// total size: 0x8
class __Counters__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x50
class CombatAttack {
    // Members
    unsigned int Name; // offset 0x0, size 0x4
    float StartTime; // offset 0x4, size 0x4
    float EndTime; // offset 0x8, size 0x4
    float Radius; // offset 0xC, size 0x4
    class __Spheres__ Spheres; // offset 0x10, size 0x8
    float Damage; // offset 0x18, size 0x4
    enum eHitSource SourceType; // offset 0x1C, size 0x4
    float Impact; // offset 0x20, size 0x4
    unsigned int AttackFlags; // offset 0x24, size 0x4
    unsigned int ChainAttackState; // offset 0x28, size 0x4
    unsigned int HitFilter; // offset 0x2C, size 0x4
    class RumbleEmitterData RumbleEmitter; // offset 0x30, size 0x20
};
// total size: 0x8
class __Spheres__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x20
class RumbleEmitterData {
    // Members
    class uid RumbleEmitterID; // offset 0x0, size 0x8
    float RumbleStartTime; // offset 0x8, size 0x4
    class SBScreenShakeData SBScreenShake; // offset 0xC, size 0x10
};
// total size: 0x10
class SBScreenShakeData {
    // Members
    float MaxScreenShake; // offset 0x0, size 0x4
    float MaxScreenShakeDist; // offset 0x4, size 0x4
    float MinScreenShake; // offset 0x8, size 0x4
    float MinScreenShakeDist; // offset 0xC, size 0x4
};
// total size: 0x4
class zNPCUpdateLODResult {
    // Members
    unsigned char result; // offset 0x0, size 0x1
    bool callDeactivate : 1; // offset 0x1, size 0x1, bit offset 0
    bool callActivate : 1; // offset 0x1, size 0x1, bit offset 1
    bool callPause : 1; // offset 0x1, size 0x1, bit offset 2
    bool callResume : 1; // offset 0x1, size 0x1, bit offset 3
    bool callUpdate : 1; // offset 0x1, size 0x1, bit offset 4
    unsigned char pad1 : 3; // offset 0x1, size 0x1, bit offset 5
    unsigned short pad2; // offset 0x2, size 0x2
};
// total size: 0x160
class zNPCUPGeneric : public zNPCBase {
    // Members
    class zBoneTracker headTracker; // offset 0xC0, size 0x7C
    bool headTrackEnabled; // offset 0x13C, size 0x1
    class xBase * headTrackPrevLookAtBase; // offset 0x140, size 0x4
    class xBase * headTrackPoiBase; // offset 0x144, size 0x4
    class xVec3 headTrackPoi; // offset 0x148, size 0xC
    bool headTrackValidPoi; // offset 0x154, size 0x1
    bool headTrackBlendToLookAt; // offset 0x155, size 0x1
    class xEnt * headTrackOverrideEnt; // offset 0x158, size 0x4
};
// total size: 0x190
class UPGeneric : public NPCAsset {};
// total size: 0xA8
class zPuckReflector : public xOGEntity {
    // Members
    class zPuckReflectorAsset * asset; // offset 0x3C, size 0x4
    class hkpRigidBody * rigidBody; // offset 0x40, size 0x4
    class xOGEntity * reflectTarget; // offset 0x44, size 0x4
    float yawRange; // offset 0x48, size 0x4
    class xVec3 dir; // offset 0x4C, size 0xC
    class xVec3 dirLocal; // offset 0x58, size 0xC
    class xMat4x3 driveOffMat; // offset 0x64, size 0x40
};
// total size: 0x10
class Rain : public Shape {
    // Members
    class xVec3 mLastCollideNormal; // offset 0x4, size 0xC
};
// total size: 0x34
class intersect_args {
    // Members
    bool mOutDoesCollide; // offset 0x0, size 0x1
    class xVec3 mOutCollidePos; // offset 0x4, size 0xC
    class xVec3 mOutCollideNormal; // offset 0x10, size 0xC
    class xVec3 mInParticlePos; // offset 0x1C, size 0xC
    class xVec3 mInParticleDir; // offset 0x28, size 0xC
};
// total size: 0x8
class intersect_env_CB {
    // Members
    class intersect_args & mArgs; // offset 0x0, size 0x4
    class HavokPrimObj collBox; // offset 0x4, size 0x4
};
// total size: 0x10
class World : public Shape {
    // Members
    class xVec3 mLastCollideNormal; // offset 0x4, size 0xC
};
// total size: 0x1C
class intersect_args {
    // Members
    bool mOutDoesCollide; // offset 0x0, size 0x1
    class xVec3 mOutCollideNormal; // offset 0x4, size 0xC
    class xVec3 mInParticlePos; // offset 0x10, size 0xC
};
// total size: 0x28
class Plane : public Shape {
    // Members
    class xVec3 mNormal; // offset 0x4, size 0xC
    class xVec3 mCenter; // offset 0x10, size 0xC
    class xVec3 mOffset; // offset 0x1C, size 0xC
};
// total size: 0x24
class Sphere : public Shape {
    // Members
    float mRadiusSq; // offset 0x4, size 0x4
    float mRadius; // offset 0x8, size 0x4
    class xVec3 mCenter; // offset 0xC, size 0xC
    class xVec3 mOffset; // offset 0x18, size 0xC
};
// total size: 0x1
class FileError {};
// total size: 0x220
class zNGLoadingScreen {
    // Members
    class EntityHandleBase dummyHandle; // offset 0x0, size 0x48
    class LoadingScreen * mAsset; // offset 0x48, size 0x4
    class ScaleformBlobEntity * mSfEntity; // offset 0x4C, size 0x4
    class zScaleformAsset * mSfAsset; // offset 0x50, size 0x4
    class zScaleform mSfObj; // offset 0x60, size 0x140
    bool mIsFlash; // offset 0x1A0, size 0x1
    unsigned int currentIndex; // offset 0x1A4, size 0x4
    unsigned long long nextLoadingScreenID; // offset 0x1A8, size 0x8
    unsigned long long nextSecondaryLoadingScreenID; // offset 0x1B0, size 0x8
    float width; // offset 0x1B8, size 0x4
    float height; // offset 0x1BC, size 0x4
    float xPos; // offset 0x1C0, size 0x4
    float yPos; // offset 0x1C4, size 0x4
    class ColorF oldBackgroundColor; // offset 0x1C8, size 0x10
    bool cleaned; // offset 0x1D8, size 0x1
    void * immediatePrototypePointer; // offset 0x1DC, size 0x4
    class ImmediateInstanceArticle * immediateArticlePointer; // offset 0x1E0, size 0x4
    class zUI * * uiElements; // offset 0x1E4, size 0x4
    class zUIGroup * * uiGroups; // offset 0x1E8, size 0x4
    unsigned int uiElementCount; // offset 0x1EC, size 0x4
    unsigned int uiGroupCount; // offset 0x1F0, size 0x4
    float timer; // offset 0x1F4, size 0x4
    class Time thisTime; // offset 0x1F8, size 0x8
    class Time lastTime; // offset 0x200, size 0x8
    bool showingFMV; // offset 0x208, size 0x1
    bool loadingDone; // offset 0x209, size 0x1
    bool readyForTermination; // offset 0x20A, size 0x1
    bool prevPadTypeDisabled; // offset 0x20B, size 0x1
    bool waitingForInput; // offset 0x20C, size 0x1
    float prepTimer; // offset 0x210, size 0x4
    float revealTimer; // offset 0x214, size 0x4
    float fadeTimer; // offset 0x218, size 0x4
};
// total size: 0x3C
class StartupConfig {
    // Members
    class @class mem; // offset 0x0, size 0x20
    class @class io; // offset 0x20, size 0x8
    class @class loader; // offset 0x28, size 0x10
    class @class wiiDebug; // offset 0x38, size 0x4
};
// total size: 0x20
class @class {
    // Members
    class @class system; // offset 0x0, size 0x8
    class @class graphics; // offset 0x8, size 0x18
};
// total size: 0x8
class @class {
    // Members
    int threadStack; // offset 0x0, size 0x4
    int debugThreadStack; // offset 0x4, size 0x4
};
// total size: 0x18
class @class {
    // Members
    int sysStack; // offset 0x0, size 0x4
    int threadStack; // offset 0x4, size 0x4
    int debugThreadStack; // offset 0x8, size 0x4
    int channel; // offset 0xC, size 0x4
    int postRenderChannel; // offset 0x10, size 0x4
    int limbo; // offset 0x14, size 0x4
};
// total size: 0x8
class @class {
    // Members
    class @class mediaIO; // offset 0x0, size 0x8
};
// total size: 0x8
class @class {
    // Members
    char * contentRoot; // offset 0x0, size 0x4
    char pathDelim; // offset 0x4, size 0x1
};
// total size: 0x10
class @class {
    // Members
    char * bootINIFile; // offset 0x0, size 0x4
    char * domainPathDB; // offset 0x4, size 0x4
    char * configWidgetPF; // offset 0x8, size 0x4
    int maxPackBlobs; // offset 0xC, size 0x4
};
// total size: 0x4
class @class {
    // Members
    enum WiiHIO2Tool wiiHIO2Tool; // offset 0x0, size 0x4
};
enum WiiHIO2Tool {
    WII_NONE = 0,
    WII_TTY = 1,
    WII_SCREENSHOT = 2,
    WII_HVDB = 3,
};
