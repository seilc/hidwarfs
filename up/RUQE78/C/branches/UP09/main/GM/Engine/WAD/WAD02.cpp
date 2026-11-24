/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80158320 -> 0x801F3178
*/
extern struct {} __vt__17hkpWorldRayCaster; // size: 0x10
extern struct {} __vt__23hkpSingleShapeContainer; // size: 0x28
extern struct {} __vt__23hkpConvexTranslateShape; // size: 0x48
// total size: 0x4
class zCreatorI {};
// total size: 0x48
class zNPCGroupBase : public xBase {
    // Members
    class zNPCGroupType * type; // offset 0x38, size 0x4
    class NPCGroupAsset * asset; // offset 0x3C, size 0x4
    class zNPCBase * * npcs; // offset 0x40, size 0x4
    unsigned int npcsNum; // offset 0x44, size 0x4
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
// total size: 0x20
class NPCGroupAsset : public xBaseAsset {
    // Members
    class __NPCs__ NPCs; // offset 0x10, size 0x8
    class LinkAsset EventLinksNew; // offset 0x18, size 0x8
};
// total size: 0x8
class __NPCs__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
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
// total size: 0x198
class zNPCPerception : public zNPCComponent {
    // Members
    class zWallNet * npcWallNet; // offset 0x8, size 0x4
    class NPCPerceptionAsset * perceptionAsset; // offset 0xC, size 0x4
    class zNPCPerceptionTarget targets[4]; // offset 0x10, size 0x180
    unsigned int targetBitMask; // offset 0x190, size 0x4
    enum eStatus status; // offset 0x194, size 0x4
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
// total size: 0x60
class zNPCPerceptionTarget {
    // Members
    class xEnt * targetEnt; // offset 0x0, size 0x4
    class zNPCPerception * ownerNpcPerc; // offset 0x4, size 0x4
    class zPerceptionType types[5]; // offset 0x8, size 0x50
    class zLOSCache losCache; // offset 0x58, size 0x8
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
// total size: 0x10
class zNPCInfoNode {
    // Members
    class zNPCInfoNode * next; // offset 0x0, size 0x4
    class zNPCBase * owner; // offset 0x4, size 0x4
    enum eNPCInfoNodeType infoNodeType; // offset 0x8, size 0x4
};
enum eNPCInfoNodeType {
    eNPCInfoNodeType_First = 0,
    eNPCInfoNodeType_AnimationSignaler = 0,
    eNPCInfoNodeType_MovePointSave = 1,
    eNPCInfoNodeType_PathInfo = 2,
    eNPCInfoNodeType_Bouncer = 3,
    eNPCInfoNodeTypeCount = 4,
    eNPCInfoNodeTypeForceInt = 2147483647,
};
// total size: 0x98
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
    float mRateLifeTime; // offset 0x88, size 0x4
    float mLifeTimeScale; // offset 0x8C, size 0x4
    float mEmitRateScale; // offset 0x90, size 0x4
    float mEmitAccumulator; // offset 0x94, size 0x4
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
// total size: 0x1F0
class FXParticleSystem : public xBaseScene {
    // Members
    class _ParticleData ParticleData; // offset 0x10, size 0x158
    class _ParticleEmitterParameters ParticleEmitterParameters; // offset 0x170, size 0x80
};
// total size: 0x158
class _ParticleData {
    // Members
    class _Emit Emit; // offset 0x0, size 0x50
    class _Texture Texture; // offset 0x50, size 0x30
    class _Update Update; // offset 0x80, size 0xD8
};
// total size: 0x50
class _Emit {
    // Members
    bool Burst; // offset 0x0, size 0x1
    class CurveWithMinMax EmitRate; // offset 0x8, size 0x10
    float EmissionLifetime; // offset 0x18, size 0x4
    class _Lifetime Lifetime; // offset 0x1C, size 0x8
    float CameraOffsetZ; // offset 0x24, size 0x4
    enum RotationType Rotation; // offset 0x28, size 0x4
    class _Axis Axis; // offset 0x2C, size 0x10
    class __DirType__ DirType; // offset 0x3C, size 0xC
    class _Velocity Velocity; // offset 0x48, size 0x8
};
// total size: 0x10
class CurveWithMinMax {
    // Members
    class uid Curve; // offset 0x0, size 0x8
    float Min; // offset 0x8, size 0x4
    float Max; // offset 0xC, size 0x4
};
// total size: 0x8
class _Lifetime {
    // Members
    float Base; // offset 0x0, size 0x4
    float Variance; // offset 0x4, size 0x4
};
enum RotationType {
    RANDOM_INITIAL = 0,
    NO_INITIAL_CHANGE = 1,
    ALONG_INITIAL_TANGENT = 2,
    END_RotationTypeENUM = 3,
};
// total size: 0x10
class _Axis {
    // Members
    class vec3 Direction; // offset 0x0, size 0xC
    bool WorldSpace; // offset 0xC, size 0x1
};
// total size: 0xC
class __DirType__ {
    // Members
    enum DirectionType type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0x8
};
enum DirectionType {
    ALONG_AXIS = 0,
    AWAY_AXIS = 1,
    AROUND_AXIS = 2,
    END_DirectionTypeENUM = 3,
};
// total size: 0x8
class @class {
    // Members
    class AlongAxisData _ALONG_AXIS; // offset 0x0, size 0x8
    class NoneStruct _AWAY_AXIS; // offset 0x0, size 0x1
    class NoneStruct _AROUND_AXIS; // offset 0x0, size 0x1
};
// total size: 0x8
class AlongAxisData {
    // Members
    float velHAngle; // offset 0x0, size 0x4
    float velWAngle; // offset 0x4, size 0x4
};
// total size: 0x1
class NoneStruct {};
// total size: 0x8
class _Velocity {
    // Members
    float Magnitude; // offset 0x0, size 0x4
    float Variance; // offset 0x4, size 0x4
};
// total size: 0x30
class _Texture {
    // Members
    class _Animation Animation; // offset 0x0, size 0x30
};
// total size: 0x30
class _Animation {
    // Members
    class _FrameData FrameData; // offset 0x0, size 0x20
    bool RandomStart; // offset 0x20, size 0x1
    class __TextureData__ TextureData; // offset 0x24, size 0xC
};
// total size: 0x20
class _FrameData {
    // Members
    class uid VisualEffect; // offset 0x0, size 0x8
    class uid OverrideTexture; // offset 0x8, size 0x8
    unsigned int Rows; // offset 0x10, size 0x4
    unsigned int Columns; // offset 0x14, size 0x4
    bool ColumnFirst; // offset 0x18, size 0x1
    float FPS; // offset 0x1C, size 0x4
};
// total size: 0xC
class __TextureData__ {
    // Members
    enum TextureDataType type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0x8
};
enum TextureDataType {
    FullTexture = 0,
    NoAnimation = 1,
    UseCells = 2,
    UseCoordList = 3,
    END_TextureDataTypeENUM = 4,
};
// total size: 0x8
class @class {
    // Members
    class NoneStruct _FullTexture; // offset 0x0, size 0x1
    class NoneStruct _NoAnimation; // offset 0x0, size 0x1
    class CellTextureData _UseCells; // offset 0x0, size 0x8
    class CoordListTextureData _UseCoordList; // offset 0x0, size 0x8
};
// total size: 0x8
class CellTextureData {
    // Members
    unsigned int StartFrame; // offset 0x0, size 0x4
    unsigned int EndFrame; // offset 0x4, size 0x4
};
// total size: 0x8
class CoordListTextureData {
    // Members
    class __UVCoords__ UVCoords; // offset 0x0, size 0x8
};
// total size: 0x8
class __UVCoords__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0xD8
class _Update {
    // Members
    class _Motion Motion; // offset 0x0, size 0x70
    class _Size Size; // offset 0x70, size 0x28
    class _Colors Colors; // offset 0x98, size 0x30
    class Reemit_TYPE Reemit; // offset 0xC8, size 0x10
};
// total size: 0x70
class _Motion {
    // Members
    class _Scale Scale; // offset 0x0, size 0x18
    float MaxVelocity; // offset 0x18, size 0x4
    class _Rotation Rotation; // offset 0x20, size 0x18
    class __AccelerationSystems__ AccelerationSystems; // offset 0x38, size 0x8
    class __TurbulenceSystems__ TurbulenceSystems; // offset 0x40, size 0x8
    class __Attractors__ Attractors; // offset 0x48, size 0x8
    class __WindSystems__ WindSystems; // offset 0x50, size 0x8
    class __VortexSystems__ VortexSystems; // offset 0x58, size 0x8
    class __CollisionSystems__ CollisionSystems; // offset 0x60, size 0x8
    class __AttachSystems__ AttachSystems; // offset 0x68, size 0x8
};
// total size: 0x18
class _Scale {
    // Members
    class _Magnitude Magnitude; // offset 0x0, size 0x10
    float MaxVariance; // offset 0x10, size 0x4
    float Variance; // offset 0x14, size 0x4
};
// total size: 0x10
class _Magnitude {
    // Members
    class uid Curve; // offset 0x0, size 0x8
    float Min; // offset 0x8, size 0x4
    float Max; // offset 0xC, size 0x4
};
// total size: 0x18
class _Rotation {
    // Members
    enum RotationUpdateType Type; // offset 0x0, size 0x4
    class CurveWithMinMax Value; // offset 0x8, size 0x10
};
enum RotationUpdateType {
    None = 0,
    ByValue = 1,
    ByAcceleration = 2,
    AlongTangent = 3,
    END_RotationUpdateTypeENUM = 4,
};
// total size: 0x8
class __AccelerationSystems__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __TurbulenceSystems__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __Attractors__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __WindSystems__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __VortexSystems__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __CollisionSystems__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __AttachSystems__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x28
class _Size {
    // Members
    class CurveWithMinMax Width; // offset 0x0, size 0x10
    class CurveWithMinMax Height; // offset 0x10, size 0x10
    float Variance; // offset 0x20, size 0x4
};
// total size: 0x30
class _Colors {
    // Members
    class CurveWithMinMax Alpha; // offset 0x0, size 0x10
    class ColorCurveWithMinMax Color; // offset 0x10, size 0x20
};
// total size: 0x20
class ColorCurveWithMinMax {
    // Members
    class uid Curve; // offset 0x0, size 0x8
    class FloatColorRGB Min; // offset 0x8, size 0xC
    class FloatColorRGB Max; // offset 0x14, size 0xC
};
// total size: 0x10
class Reemit_TYPE {
    // Members
    class uid SystemID; // offset 0x0, size 0x8
    float Percent; // offset 0x8, size 0x4
    int EmitCount; // offset 0xC, size 0x4
};
// total size: 0x80
class _ParticleEmitterParameters {
    // Members
    class CullingData Culling; // offset 0x0, size 0x8
    class __motion_data__ motion_data; // offset 0x8, size 0x8
    class __volume_data__ volume_data; // offset 0x10, size 0x60
    bool EdgeVolume; // offset 0x70, size 0x1
};
// total size: 0x8
class __motion_data__ {
    // Members
    enum MotionType type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0x1
};
enum MotionType {
    None = 0,
    Spiral = 1,
    END_MotionTypeENUM = 2,
};
// total size: 0x1
class @class {
    // Members
    class NoneMotion _None; // offset 0x0, size 0x1
};
// total size: 0x1
class NoneMotion {};
// total size: 0x60
class __volume_data__ {
    // Members
    enum VolumeType type; // offset 0x0, size 0x4
    class @class u; // offset 0x10, size 0x50
};
enum VolumeType {
    Point = 0,
    Sphere = 1,
    Circle = 2,
    Line = 3,
    Model = 4,
    Box = 5,
    CurveUID = 6,
    END_VolumeTypeENUM = 7,
};
// total size: 0x50
class @class {
    // Members
    class PointVolume _Point; // offset 0x0, size 0x1
    class SphereVolume _Sphere; // offset 0x0, size 0x4
    class CircleVolume _Circle; // offset 0x0, size 0x10
    class LineVolume _Line; // offset 0x0, size 0x10
    class ModelVolume _Model; // offset 0x0, size 0x50
    class BoxVolume _Box; // offset 0x0, size 0xC
    class CurveVolume _CurveUID; // offset 0x0, size 0x8
};
// total size: 0x1
class PointVolume {};
// total size: 0x4
class SphereVolume {
    // Members
    float radius; // offset 0x0, size 0x4
};
// total size: 0x10
class CircleVolume {
    // Members
    float xRadius; // offset 0x0, size 0x4
    float yRadius; // offset 0x4, size 0x4
    float arc_length; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
};
// total size: 0x10
class LineVolume {
    // Members
    bool cylindrical; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float xRadius; // offset 0x4, size 0x4
    float yRadius; // offset 0x8, size 0x4
    float length; // offset 0xC, size 0x4
};
// total size: 0x50
class ModelVolume {
    // Members
    bool VertexEmit; // offset 0x0, size 0x1
    class ModelInstanceAsset ModelInstances; // offset 0x10, size 0x40
};
// total size: 0xC
class BoxVolume {
    // Members
    class vec3 dimensions; // offset 0x0, size 0xC
};
// total size: 0x8
class CurveVolume {
    // Members
    class uid curve; // offset 0x0, size 0x8
};
// total size: 0x4
class zFXParticleLocator {
    // Members
    class activity_data * activity; // offset 0x0, size 0x4
};
// total size: 0x2C
class activity_data {
    // Members
    void (* get_offset)(class xVec3 & offset, class emit_volume_data & data); // offset 0x0, size 0x4
    class emit_volume_data volume; // offset 0x4, size 0x28
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
// total size: 0x60
class SystemInstance {
    // Members
    class zFXObjectSystem * mSystem; // offset 0x0, size 0x4
    class CullingData mUseCulling; // offset 0x4, size 0x8
    class xBaseTransform mBaseTransform; // offset 0xC, size 0x48
    bool mIsRunning; // offset 0x54, size 0x1
    bool mIsEmitting; // offset 0x55, size 0x1
    bool mIsParentCulled; // offset 0x56, size 0x1
    bool mIsRegistered; // offset 0x57, size 0x1
    unsigned int mPoolIdx; // offset 0x58, size 0x4
    float mEmitAccumulator; // offset 0x5C, size 0x4
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
// total size: 0x230
class FXObjectSystem : public xBaseScene {
    // Members
    class _ObjectData ObjectData; // offset 0x10, size 0x1A0
    class _ObjectEmitterParameters ObjectEmitterParameters; // offset 0x1B0, size 0x80
};
// total size: 0x1A0
class _ObjectData {
    // Members
    class _Emit Emit; // offset 0x0, size 0x1C
    class _Model Model; // offset 0x20, size 0x40
    class _Update Update; // offset 0x60, size 0x140
};
// total size: 0x1C
class _Emit {
    // Members
    class vec3 velDir; // offset 0x0, size 0xC
    bool velWorldSpace; // offset 0xC, size 0x1
    bool Burst; // offset 0xD, size 0x1
    float EmitRate; // offset 0x10, size 0x4
    class _Lifetime Lifetime; // offset 0x14, size 0x8
};
// total size: 0x40
class _Model {
    // Members
    class ModelInstanceAsset Model; // offset 0x0, size 0x40
};
// total size: 0x140
class _Update {
    // Members
    class _Motion Motion; // offset 0x0, size 0xA8
    class _Size Size; // offset 0xA8, size 0x50
    class _Colors Colors; // offset 0xF8, size 0x48
};
// total size: 0xA8
class _Motion {
    // Members
    class _Speed Speed; // offset 0x0, size 0x18
    class _Acceleration Acceleration; // offset 0x18, size 0x30
    class _Rotation Rotation; // offset 0x48, size 0x60
};
// total size: 0x18
class _Speed {
    // Members
    class CurveWithMinMax Magnitude; // offset 0x0, size 0x10
    float Variance; // offset 0x10, size 0x4
};
// total size: 0x30
class _Acceleration {
    // Members
    class vec3 Direction; // offset 0x0, size 0xC
    class CurveWithMinMax Magnitude; // offset 0x10, size 0x10
    bool AccelWorldSpace; // offset 0x20, size 0x1
    float Max; // offset 0x24, size 0x4
    float Gravity; // offset 0x28, size 0x4
};
// total size: 0x60
class _Rotation {
    // Members
    enum RotationUpdateType Type; // offset 0x0, size 0x4
    class CurveWithMinMaxPlusVar Yaw; // offset 0x8, size 0x18
    class CurveWithMinMaxPlusVar Pitch; // offset 0x20, size 0x18
    class CurveWithMinMaxPlusVar Roll; // offset 0x38, size 0x18
    bool UseUpVector; // offset 0x50, size 0x1
    class vec3 UpVector; // offset 0x54, size 0xC
};
enum RotationUpdateType {
    None = 0,
    ByValue = 1,
    ByAcceleration = 2,
    END_RotationUpdateTypeENUM = 3,
};
// total size: 0x18
class CurveWithMinMaxPlusVar {
    // Members
    class uid Curve; // offset 0x0, size 0x8
    float Min; // offset 0x8, size 0x4
    float Max; // offset 0xC, size 0x4
    float Variance; // offset 0x10, size 0x4
};
// total size: 0x50
class _Size {
    // Members
    class CurveWithMinMaxPlusVar Width; // offset 0x0, size 0x18
    class CurveWithMinMaxPlusVar Height; // offset 0x18, size 0x18
    class CurveWithMinMaxPlusVar Depth; // offset 0x30, size 0x18
    float Variance; // offset 0x48, size 0x4
};
// total size: 0x48
class _Colors {
    // Members
    class CurveWithMinMaxPlusVar Alpha; // offset 0x0, size 0x18
    class ColorCurveWithMinMax1Max2 Color; // offset 0x18, size 0x30
};
// total size: 0x30
class ColorCurveWithMinMax1Max2 {
    // Members
    class uid Curve; // offset 0x0, size 0x8
    class FloatColorRGB Min; // offset 0x8, size 0xC
    class FloatColorRGB Max; // offset 0x14, size 0xC
    class FloatColorRGB Max2; // offset 0x20, size 0xC
};
// total size: 0x80
class _ObjectEmitterParameters {
    // Members
    class CullingData Culling; // offset 0x0, size 0x8
    class __volume_data__ volume_data; // offset 0x10, size 0x60
    bool EdgeVolume; // offset 0x70, size 0x1
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
// total size: 0x60
class zFloatingCollectibleSpawner : public xEffectAttachIntf {
    // Members
    class zFloatingCollectibleSpawnerAsset * asset; // offset 0x3C, size 0x4
    class xBase * * collectibleList; // offset 0x40, size 0x4
    class zFloatingCollectible * * spawnList; // offset 0x44, size 0x4
    int collectibleCount; // offset 0x48, size 0x4
    class hkpRigidBody * SpawnerBody; // offset 0x4C, size 0x4
    bool isSpawning; // offset 0x50, size 0x1
    bool isHit; // offset 0x51, size 0x1
    bool spawned; // offset 0x52, size 0x1
    float timer; // offset 0x54, size 0x4
    class BadgePoint * badgePointAsset; // offset 0x58, size 0x4
};
// total size: 0x50
class zFloatingCollectibleGroup : public xOGEntity {
    // Members
    class zFloatingCollectibleGroupAsset * asset; // offset 0x3C, size 0x4
    class zFloatingCollectible * * itemList; // offset 0x40, size 0x4
    int itemCount; // offset 0x44, size 0x4
    int * allocList; // offset 0x48, size 0x4
    int allocCount; // offset 0x4C, size 0x4
};
// total size: 0x18
class zFloatingCollectibleGroupAsset : public xBaseScene {
    // Members
    class __ItemList__ ItemList; // offset 0x10, size 0x8
};
// total size: 0x8
class __ItemList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x40
class CollectibleSpawnerAsset : public xBaseScene {
    // Members
    class vec3 Position; // offset 0x10, size 0xC
    class Rotation3 Orientation; // offset 0x1C, size 0xC
    bool Driven; // offset 0x28, size 0x1
    class __Collectibles__ Collectibles; // offset 0x2C, size 0x8
    class LinkAsset EventLinksNew; // offset 0x34, size 0x8
};
// total size: 0x8
class __Collectibles__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0xB60
class zCollectibleSpawner : public xOGEntity {
    // Members
    class Slot * freeSlot; // offset 0x3C, size 0x4
    class Slot slotsStorage[64]; // offset 0x40, size 0xA00
    class zQueue pool; // offset 0xA40, size 0x108
    class zFloatingCollectible * ptrs[4]; // offset 0xB48, size 0x10
    unsigned int collectiblesCount; // offset 0xB58, size 0x4
    class CollectibleSpawnerAsset * asset; // offset 0xB5C, size 0x4
};
// total size: 0x28
class Slot {
    // Members
    int * count; // offset 0x0, size 0x4
    class xVec3 pos; // offset 0x4, size 0xC
    class xVec3 scale; // offset 0x10, size 0xC
    int flags; // offset 0x1C, size 0x4
    float elapsed; // offset 0x20, size 0x4
    class xOGEntity * owner; // offset 0x24, size 0x4
};
// total size: 0x108
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class Slot * data[64]; // offset 0x8, size 0x100
};
// total size: 0x14410
class zCollectibleInstancer {
    // Members
    class Slot * freeSlot; // offset 0x0, size 0x4
    class Slot slotsStorage[256]; // offset 0x8, size 0x14000
    class zQueue pool; // offset 0x14008, size 0x408
};
// total size: 0x140
class Slot {
    // Members
    class zCollectibleSpawner * owner; // offset 0x0, size 0x4
    class EntityHandleBase dummyHandle; // offset 0x8, size 0x48
    class zFloatingCollectible instance; // offset 0x50, size 0xE8
    int freeFlag; // offset 0x138, size 0x4
};
// total size: 0x408
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class Slot * data[256]; // offset 0x8, size 0x400
};
// total size: 0x20
class FMVReference : public xBaseScene {
    // Members
    enum FMVIdentifier fmv; // offset 0x10, size 0x4
    class LinkAsset EventLinksNew; // offset 0x14, size 0x8
};
enum FMVIdentifier {
    FMV_None = 0,
    FMV_alphatst = 1,
    FMV_TEST0900 = 2,
    FMV_A = 3,
    FMV_B = 4,
    FMV_C = 5,
    FMV_Pixar = 6,
    FMV_BVG = 7,
    FMV_THQ = 8,
    FMV_HI = 9,
    FMV_Legal = 10,
    FMV_Attract = 11,
    END_FMV_ENUM = 12,
};
enum movieEndCode {
    eMovieEnd = 0,
    eMovieAborted = 1,
    eMovieAbortAll = 2,
};
// total size: 0x48
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
    bool fullscreen; // offset 0x40, size 0x1
    bool skippable; // offset 0x41, size 0x1
    bool last; // offset 0x42, size 0x1
    bool (* delaycbFn)(); // offset 0x44, size 0x4
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
// total size: 0x28
class zFogAsset : public xBaseScene {
    // Members
    unsigned int color; // offset 0x10, size 0x4
    float start; // offset 0x14, size 0x4
    float end; // offset 0x18, size 0x4
    enum FogInterpolationMode mode; // offset 0x1C, size 0x4
    class LinkAsset EventLinksNew; // offset 0x20, size 0x8
};
// total size: 0x4
class EventActionActivateFog : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
// total size: 0x14018
class zFXScriptSpawnPtMgr {
    // Members
    class SpawnSlot slotsStorage[256]; // offset 0x0, size 0x14000
    class NumberPool mNumPool; // offset 0x14000, size 0x14
};
// total size: 0x140
class SpawnSlot {
    // Members
    class EntityHandleBase dummyHandle; // offset 0x0, size 0x48
    class zFXSpawn spawnPt; // offset 0x48, size 0xF8
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
// total size: 0x48
class FXWidget {
    // Members
    class uid Generator; // offset 0x0, size 0x8
    class vec3 Offset; // offset 0x8, size 0xC
    class Rotation3 Orientation; // offset 0x14, size 0xC
    bool WorldSpaceOrientation; // offset 0x20, size 0x1
    class _Timing Timing; // offset 0x24, size 0x14
    class SoundBankSource Sound; // offset 0x38, size 0xC
};
// total size: 0x14
class _Timing {
    // Members
    float Start; // offset 0x0, size 0x4
    float Stop; // offset 0x4, size 0x4
    class _Variance Variance; // offset 0x8, size 0xC
};
// total size: 0xC
class _Variance {
    // Members
    float Start; // offset 0x0, size 0x4
    float Stop; // offset 0x4, size 0x4
    float Chance; // offset 0x8, size 0x4
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
// total size: 0x14
class AccelerationEffect {
    // Members
    class vec3 Direction; // offset 0x0, size 0xC
    float Magnitude; // offset 0xC, size 0x4
    bool WorldSpace; // offset 0x10, size 0x1
};
// total size: 0x10
class WindEffect {
    // Members
    class vec3 Velocity; // offset 0x0, size 0xC
    float Coefficient; // offset 0xC, size 0x4
};
// total size: 0x10
class TurbulenceEffect {
    // Members
    float StrengthMax; // offset 0x0, size 0x4
    float UpdateRate; // offset 0x4, size 0x4
    unsigned int NumPoints; // offset 0x8, size 0x4
    float Range; // offset 0xC, size 0x4
};
// total size: 0x40
class TrianglesSubpart : public Subpart {
    // Members
    int m_numTriangleShapes; // offset 0x10, size 0x4
    float * m_vertexBase; // offset 0x14, size 0x4
    int m_vertexStriding; // offset 0x18, size 0x4
    int m_numVertices; // offset 0x1C, size 0x4
    class hkVector4 m_extrusion; // offset 0x20, size 0x10
    void * m_indexBase; // offset 0x30, size 0x4
    int m_indexStriding; // offset 0x34, size 0x4
    class hkEnum m_stridingType; // offset 0x38, size 0x1
    signed char m_flipAlternateTriangles; // offset 0x39, size 0x1
    int m_triangleOffset; // offset 0x3C, size 0x4
};
// total size: 0x10
class Subpart {
    // Members
    class hkEnum m_type; // offset 0x0, size 0x1
    class hkEnum m_materialIndexStridingType; // offset 0x1, size 0x1
    short m_materialStriding; // offset 0x2, size 0x2
    void * m_materialIndexBase; // offset 0x4, size 0x4
    unsigned short m_materialIndexStriding; // offset 0x8, size 0x2
    unsigned short m_numMaterials; // offset 0xA, size 0x2
    class hkpMeshMaterial * m_materialBase; // offset 0xC, size 0x4
};
// total size: 0x1
class hkEnum {
    // Members
    signed char m_storage; // offset 0x0, size 0x1
};
// total size: 0x0
class hkpMeshMaterial {};
// total size: 0x40
class hkpMoppBvTreeShape : public hkMoppBvTreeShapeBase {
    // Members
    class hkpSingleShapeContainer m_child; // offset 0x30, size 0x8
    int m_childSize; // offset 0x38, size 0x4
};
// total size: 0x30
class hkMoppBvTreeShapeBase : public hkpBvTreeShape {
    // Members
    class hkpMoppCode * m_code; // offset 0x14, size 0x4
    unsigned char * m_moppData; // offset 0x18, size 0x4
    unsigned int m_moppDataSize; // offset 0x1C, size 0x4
    class hkVector4 m_codeInfoCopy; // offset 0x20, size 0x10
};
// total size: 0x14
class hkpBvTreeShape : public hkpShape {
    // Members
    class hkEnum m_bvTreeType; // offset 0x10, size 0x1
};
// total size: 0x1
class hkEnum {
    // Members
    unsigned char m_storage; // offset 0x0, size 0x1
};
// total size: 0x30
class hkpMoppCode : public hkReferencedObject {
    // Members
    class CodeInfo m_info; // offset 0x10, size 0x10
    class hkArray m_data; // offset 0x20, size 0xC
    class hkEnum m_buildType; // offset 0x2C, size 0x1
};
// total size: 0x10
class CodeInfo {
    // Members
    class hkVector4 m_offset; // offset 0x0, size 0x10
};
// total size: 0x24
class generator_data {
    // Members
    class xVec3 mAccelDir; // offset 0x0, size 0xC
    class xVec3 mDPos; // offset 0xC, size 0xC
    float mDPosScale; // offset 0x18, size 0x4
    float mForcedAgeRate; // offset 0x1C, size 0x4
    short mObjectsAlive; // offset 0x20, size 0x2
};
// total size: 0x60
class object_instance {
    // Members
    class xVec3 loc; // offset 0x0, size 0xC
    class xVec3 velDir; // offset 0xC, size 0xC
    class xVec3 ypr; // offset 0x18, size 0xC
    float scaleDeltaW; // offset 0x24, size 0x4
    float scaleDeltaH; // offset 0x28, size 0x4
    float scaleDeltaD; // offset 0x2C, size 0x4
    class xVec3 rotDeltaYPR; // offset 0x30, size 0xC
    class xColor colorDelta; // offset 0x3C, size 0x4
    float alphaDelta; // offset 0x40, size 0x4
    float accelVel; // offset 0x44, size 0x4
    float velModifier; // offset 0x48, size 0x4
    float age; // offset 0x4C, size 0x4
    float ageRate; // offset 0x50, size 0x4
    class xOGModel * ogModel; // offset 0x54, size 0x4
    unsigned int poolIdx; // offset 0x58, size 0x4
    class zFXObjectSystem * system; // offset 0x5C, size 0x4
};
// total size: 0x408
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class object_instance * data[256]; // offset 0x8, size 0x400
};
// total size: 0x20
class Info {
    // Members
    class xVec3 mDir; // offset 0x0, size 0xC
    float mSpeed; // offset 0xC, size 0x4
    float mLifetime; // offset 0x10, size 0x4
    float mLength; // offset 0x14, size 0x4
    float mWidth; // offset 0x18, size 0x4
    class xColor mColor; // offset 0x1C, size 0x4
};
// total size: 0x40
class zRainControl : public xOGEntity {
    // Members
    class RainControl * mAsset; // offset 0x3C, size 0x4
};
// total size: 0x58
class RainControl : public xBaseScene {
    // Members
    float intensity; // offset 0x10, size 0x4
    float fadeIn; // offset 0x14, size 0x4
    float fadeOut; // offset 0x18, size 0x4
    class vec3 direction; // offset 0x1C, size 0xC
    class uid SplashFX; // offset 0x28, size 0x8
    class _ScreenEffect ScreenEffect; // offset 0x30, size 0x28
};
// total size: 0x28
class _ScreenEffect {
    // Members
    float speed; // offset 0x0, size 0x4
    float life; // offset 0x4, size 0x4
    float length; // offset 0x8, size 0x4
    float width; // offset 0xC, size 0x4
    class FloatColorRGBA color; // offset 0x10, size 0x10
    class uid texture; // offset 0x20, size 0x8
};
// total size: 0x4
class EventNotifyDispatcher_TitleState : public EventNotifyNew {
    // Members
    enum eTitleState param0; // offset 0x0, size 0x4
};
enum eTitleState {
    eTitleState_Start = 0,
    eTitleState_Attract = 1,
    END_eTitleState_ENUM = 2,
};
// total size: 0x4
class EventNotifyDispatcher_LoadState : public EventNotifyNew {
    // Members
    enum eLoadState param0; // offset 0x0, size 0x4
};
enum eLoadState {
    eLoadState_Loading = 0,
    END_eLoadState_ENUM = 1,
};
// total size: 0x4
class EventNotifyDispatcher_SaveState : public EventNotifyNew {
    // Members
    enum eSaveState param0; // offset 0x0, size 0x4
};
enum eSaveState {
    eSaveState_Saving = 0,
    END_eSaveState_ENUM = 1,
};
// total size: 0x4
class EventNotifyDispatcher_PauseState : public EventNotifyNew {
    // Members
    enum ePauseState param0; // offset 0x0, size 0x4
};
// total size: 0x4
class EventNotifyDispatcher_GameState : public EventNotifyNew {
    // Members
    enum eGameState param0; // offset 0x0, size 0x4
};
enum eGameState {
    eGameState_FirstTime = 0,
    eGameState_Play = 1,
    eGameState_SceneSwitch = 2,
    eGameState_Dead = 3,
    eGameState_Exit = 4,
    END_eGameState_ENUM = 5,
};
// total size: 0x30
class GradientCurve : public xBaseAsset {
    // Members
    float startVal; // offset 0x10, size 0x4
    float endVal; // offset 0x14, size 0x4
    unsigned char endInterpType; // offset 0x18, size 0x1
    class __points__ points; // offset 0x1C, size 0x8
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
// total size: 0x8
class __points__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x1
class less {};
// total size: 0x8
class dirPair {
    // Members
    int horizontal; // offset 0x0, size 0x4
    int vertical; // offset 0x4, size 0x4
};
// total size: 0xD00
class zHousePlayer : public zCommonPlayer {
    // Members
    class hkVector4 halfExtents; // offset 0xCF0, size 0x10
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
// total size: 0x1F0
class HudUp : public xBaseScene {
    // Members
    unsigned int features; // offset 0x10, size 0x4
    class uid scaleformHud; // offset 0x18, size 0x8
    class __imageList__ imageList; // offset 0x20, size 0x1C8
    class LinkAsset EventLinksNew; // offset 0x1E8, size 0x8
};
// total size: 0x1C8
class __imageList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class ImageList data[4]; // offset 0x8, size 0x1C0
};
// total size: 0x70
class ImageList {
    // Members
    class __radarArrows__ radarArrows; // offset 0x0, size 0x8
    class __radarIcons__ radarIcons; // offset 0x8, size 0x8
    class __grayPlayerRings__ grayPlayerRings; // offset 0x10, size 0x8
    class __bluePlayerRings__ bluePlayerRings; // offset 0x18, size 0x8
    class __yellowPlayerRings__ yellowPlayerRings; // offset 0x20, size 0x8
    class __redPlayerRings__ redPlayerRings; // offset 0x28, size 0x8
    class __grayObjectRings__ grayObjectRings; // offset 0x30, size 0x8
    class __blueObjectRings__ blueObjectRings; // offset 0x38, size 0x8
    class __yellowObjectRings__ yellowObjectRings; // offset 0x40, size 0x8
    class __redObjectRings__ redObjectRings; // offset 0x48, size 0x8
    class uid target; // offset 0x50, size 0x8
    class uid redTarget; // offset 0x58, size 0x8
    class uid blueArrow; // offset 0x60, size 0x8
    class uid yellowArrow; // offset 0x68, size 0x8
};
// total size: 0x8
class __radarArrows__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __radarIcons__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __grayPlayerRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __bluePlayerRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __yellowPlayerRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __redPlayerRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __grayObjectRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __blueObjectRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __yellowObjectRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __redObjectRings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x2B8
class zHudUp : public xOGEntity {
    // Members
    class HudUp * asset; // offset 0x3C, size 0x4
    class zScaleform * hudPlayer; // offset 0x40, size 0x4
    class RadarData radarData[4]; // offset 0x44, size 0xF0
    bool radarInitialized; // offset 0x134, size 0x1
    unsigned int abilityRefresh; // offset 0x138, size 0x4
    enum ePlayerTypeUp playerType[4]; // offset 0x13C, size 0x10
    int numPlayers; // offset 0x14C, size 0x4
    int numGrayPlayers; // offset 0x150, size 0x4
    int numBluePlayers; // offset 0x154, size 0x4
    int numYellowPlayers; // offset 0x158, size 0x4
    int numGrayObjects; // offset 0x15C, size 0x4
    int numBlueObjects; // offset 0x160, size 0x4
    int numYellowObjects; // offset 0x164, size 0x4
    float health; // offset 0x168, size 0x4
    int maxHealth; // offset 0x16C, size 0x4
    int badgeCount; // offset 0x170, size 0x4
    enum eContextActionID contextActions[4]; // offset 0x174, size 0x10
    int specialAbilities[4][4]; // offset 0x184, size 0x40
    class xEnt * blueObjects[16]; // offset 0x1C4, size 0x40
    class xEnt * yellowObjects[16]; // offset 0x204, size 0x40
    class xEnt * grayObjects[16]; // offset 0x244, size 0x40
    int plyrScore[4]; // offset 0x284, size 0x10
    int maxScore; // offset 0x294, size 0x4
    int scaleMultiplier; // offset 0x298, size 0x4
    bool hudShown; // offset 0x29C, size 0x1
    float hudCountdown; // offset 0x2A0, size 0x4
    bool hudAbilitiesVisible; // offset 0x2A4, size 0x1
    float hudAbilitiesCountdown; // offset 0x2A8, size 0x4
    int houseHealth; // offset 0x2AC, size 0x4
    bool houseHealthVisible; // offset 0x2B0, size 0x1
    bool hudGlobalVisibility; // offset 0x2B1, size 0x1
};
// total size: 0x3C
class RadarData {
    // Members
    enum BiplaneHudVisibility bphVisible; // offset 0x0, size 0x4
    int arrowCount; // offset 0x4, size 0x4
    float * flashArrow; // offset 0x8, size 0x4
    class zUIImage * * radarArrows; // offset 0xC, size 0x4
    class zUIImage * * radarIcons; // offset 0x10, size 0x4
    class zUIImage * * targetRings; // offset 0x14, size 0x4
    class zUIImage * * redTargetRings; // offset 0x18, size 0x4
    class zUIImage * * bluePlayerRings; // offset 0x1C, size 0x4
    class zUIImage * * yellowPlayerRings; // offset 0x20, size 0x4
    class zUIImage * * grayPlayerRings; // offset 0x24, size 0x4
    class zUIImage * * redPlayerRings; // offset 0x28, size 0x4
    class zUIImage * * blueObjectRings; // offset 0x2C, size 0x4
    class zUIImage * * yellowObjectRings; // offset 0x30, size 0x4
    class zUIImage * target; // offset 0x34, size 0x4
    class zUIImage * redTarget; // offset 0x38, size 0x4
};
enum BiplaneHudVisibility {
    BPH_VISIBLE_OFF = 0,
    BPH_VISIBLE_TARGET = 1,
    BPH_VISIBLE_RADARTARGET = 2,
    BPH_VISIBLE_MAX = 3,
};
// total size: 0x8
class EventActionHudSetActivePlayers : public EventActionNew {
    // Members
    class __players__ players; // offset 0x0, size 0x8
};
// total size: 0x8
class __players__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    bool data[4]; // offset 0x4, size 0x4
};
// total size: 0x8
class EventActionHudSetPlayer : public EventActionNew {
    // Members
    int playerIdx; // offset 0x0, size 0x4
    enum ePlayerTypeUp characterID; // offset 0x4, size 0x4
};
// total size: 0xC
class EventActionHudSpecialAbility : public EventActionNew {
    // Members
    enum ePlayerTypeUp player; // offset 0x0, size 0x4
    unsigned char ability; // offset 0x4, size 0x1
    int count; // offset 0x8, size 0x4
};
// total size: 0x10
class InteractionInfo {
    // Members
    unsigned int interactionBaseType; // offset 0x0, size 0x4
    unsigned int applicablePlayers; // offset 0x4, size 0x4
    unsigned int playerActionID; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
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
// total size: 0x10
class zKevinPlayerMelee : public zPlayerMelee {};
// total size: 0xA8
class zKevinPlayerIdle : public zPlayerIdleUP {};
// total size: 0x10
class zKevinPlayerWalk : public zPlayerWalkUP {};
// total size: 0x10
class zKevinPlayerRun : public zPlayerRunUP {};
// total size: 0x1C
class zKevinPlayerJump : public zPlayerJumpUP {};
// total size: 0x54
class zKevinPlayerAIJump : public zPlayerAIJump {};
// total size: 0x14
class zKevinPlayerFall : public zPlayerFallUP {};
// total size: 0x24
class zKevinPlayerSpringboard : public zUPPlayerInterAction {
    // Members
    class zAnimPackage * currentPackage; // offset 0x14, size 0x4
    class xVec2 lookPos; // offset 0x18, size 0x8
    float destAngle; // offset 0x20, size 0x4
};
// total size: 0x14
class zKevinPlayerUnsummon : public zUPPlayerAction {
    // Members
    bool animationPlayed; // offset 0x10, size 0x1
};
// total size: 0x8
class zRuntimeEntityCreateInfo {
    // Members
    class RuntimeEntityAsset * reAsset; // offset 0x0, size 0x4
    class xBase * owner; // offset 0x4, size 0x4
};
// total size: 0xB0
class RuntimeEntityAsset {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0x0, size 0x40
    class uid RibbonEffectID; // offset 0x40, size 0x8
    class uid ActiveFXSpawnID; // offset 0x48, size 0x8
    class uid SpawnFXSpawnID; // offset 0x50, size 0x8
    class uid DeathFXSpawnID; // offset 0x58, size 0x8
    class uid PingFXSpawnID; // offset 0x60, size 0x8
    class uid TimeoutFXSpawnID; // offset 0x68, size 0x8
    class SoundSourcesPhysics SoundsPhysics; // offset 0x70, size 0x38
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
    class xMat4x3 currentMat; // offset 0x54, size 0x40
    class xVec3 startPos; // offset 0x94, size 0xC
    class xVec3 targetDir; // offset 0xA0, size 0xC
    class xVec3 dPos; // offset 0xAC, size 0xC
    float totalLaserTime; // offset 0xB8, size 0x4
    float curLaserTime; // offset 0xBC, size 0x4
    float speed; // offset 0xC0, size 0x4
    float lifeSpan; // offset 0xC4, size 0x4
    float damage; // offset 0xC8, size 0x4
    float damageRadius; // offset 0xCC, size 0x4
    enum eHitSource hitSource; // offset 0xD0, size 0x4
    enum zHitTarget hitTarget; // offset 0xD4, size 0x4
    enum eLaserType type; // offset 0xD8, size 0x4
    unsigned int killedFrameDelay; // offset 0xDC, size 0x4
    bool targetDirSet; // offset 0xE0, size 0x1
    bool startPosSet; // offset 0xE1, size 0x1
    bool lifeSpanSet; // offset 0xE2, size 0x1
    bool alwaysKillOnHit; // offset 0xE3, size 0x1
    int filterSize; // offset 0xE4, size 0x4
    class xBase * filterList[4]; // offset 0xE8, size 0x10
    class zRuntimeEntityFX fxComp; // offset 0xF8, size 0x68
    class EntityHandleBase dummyHandle; // offset 0x160, size 0x48
};
// total size: 0x58
class zRuntimeEntity : public xBase {
    // Members
    class zRuntimeEntity * next; // offset 0x38, size 0x4
    class zRuntimeEntity * prev; // offset 0x3C, size 0x4
    unsigned int refCount; // offset 0x40, size 0x4
    class xBase * owner; // offset 0x44, size 0x4
    class RuntimeEntityAsset * asset; // offset 0x48, size 0x4
    class zRuntimeEntityFX * FX; // offset 0x4C, size 0x4
    unsigned int isAlive : 1; // offset 0x50, size 0x4, bit offset 0
    unsigned int updateWhilePaused : 1; // offset 0x50, size 0x4, bit offset 1
    unsigned int updateInCinematic : 1; // offset 0x50, size 0x4, bit offset 2
    unsigned int pad : 29; // offset 0x50, size 0x4, bit offset 3
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
// total size: 0x4
class hkpBroadPhaseCastCollector {};
// total size: 0x30
class hkpWorldRayCastInput {
    // Members
    class hkVector4 m_from; // offset 0x0, size 0x10
    class hkVector4 m_to; // offset 0x10, size 0x10
    class hkBool m_enableShapeCollectionFilter; // offset 0x20, size 0x1
    unsigned int m_filterInfo; // offset 0x24, size 0x4
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
// total size: 0x28
class LedgeGrab : public InteractionUP {
    // Members
    class uid Ledge; // offset 0x10, size 0x8
    bool Climbable; // offset 0x18, size 0x1
    class LinkAsset EventLinksNew; // offset 0x1C, size 0x8
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
// total size: 0xB8
class zLedgeShimmy : public zInteractionUPWithIcons {
    // Members
    class zLedge * ledge; // offset 0x84, size 0x4
    float shimmySpeed; // offset 0x88, size 0x4
    float minProbability; // offset 0x8C, size 0x4
    float maxThresholdSpeed; // offset 0x90, size 0x4
    float maxProbability; // offset 0x94, size 0x4
    float fullBalanceDistance; // offset 0x98, size 0x4
    float fullBalanceTime; // offset 0x9C, size 0x4
    float offBalanceDuration; // offset 0xA0, size 0x4
    unsigned int balanceNumButtonPress; // offset 0xA4, size 0x4
    class zRussellPlayer * russellPlayer; // offset 0xA8, size 0x4
    class zLedgeShimmyAsset * asset; // offset 0xAC, size 0x4
    class zTrigger * * triggers; // offset 0xB0, size 0x4
    class zAnimPackage * russellAnimShimmy; // offset 0xB4, size 0x4
};
// total size: 0x1C0
class zRopeCut : public zInteractionUPWithIcons {
    // Members
    class xVec3 dirLoc; // offset 0x84, size 0xC
    class xEntFrame frame; // offset 0x90, size 0x124
    class zRopeCutAsset * asset; // offset 0x1B4, size 0x4
    class zAnimPackage * russellRopeCutAnim; // offset 0x1B8, size 0x4
};
// total size: 0x80
class zRopeCutAsset : public InteractionUpWithIcons {
    // Members
    class Matrix43POD field; // offset 0x20, size 0x30
    class vec3 ropeFocus; // offset 0x50, size 0xC
    class uid Script; // offset 0x60, size 0x8
    class uid RussellRopeCutAnim; // offset 0x68, size 0x8
    bool Alive; // offset 0x70, size 0x1
    class LinkAsset EventLinksNew; // offset 0x74, size 0x8
};
// total size: 0x60
class zLedgeShimmyAsset : public InteractionUpWithIcons {
    // Members
    class __triggers__ triggers; // offset 0x1C, size 0x8
    float ShimmySpeed; // offset 0x24, size 0x4
    class MinThreshold_Type MinThreshold; // offset 0x28, size 0x4
    class MaxThreshold_Type MaxThreshold; // offset 0x2C, size 0x8
    float FullBalanceDistance; // offset 0x34, size 0x4
    float FullBalanceTime; // offset 0x38, size 0x4
    float OffBalanceDuration; // offset 0x3C, size 0x4
    int BalanceNumButtonPress; // offset 0x40, size 0x4
    class uid Ledge; // offset 0x48, size 0x8
    class uid RussellShimmyAnim; // offset 0x50, size 0x8
    class LinkAsset EventLinksNew; // offset 0x58, size 0x8
};
// total size: 0x8
class __triggers__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x4
class MinThreshold_Type {
    // Members
    float MinProbability; // offset 0x0, size 0x4
};
// total size: 0x8
class MaxThreshold_Type {
    // Members
    float MaxSpeed; // offset 0x0, size 0x4
    float MaxProbability; // offset 0x4, size 0x4
};
// total size: 0xC
class sSpot {
    // Members
    class ImmediatePrototypeEntity * ent; // offset 0x0, size 0x4
    class zGradientCurve * sizeCurve; // offset 0x4, size 0x4
    class zGradientCurve * rotCurve; // offset 0x8, size 0x4
};
// total size: 0x50
class LensFlareSpawnPt : public xBaseScene {
    // Members
    unsigned char alphaType; // offset 0x10, size 0x1
    class vec3 center; // offset 0x14, size 0xC
    class Rotation3 direction; // offset 0x20, size 0xC
    float radius; // offset 0x2C, size 0x4
    int numPts; // offset 0x30, size 0x4
    class uid falloffCurve; // offset 0x38, size 0x8
    float falloffMin; // offset 0x40, size 0x4
    float falloffMax; // offset 0x44, size 0x4
    class __spots__ spots; // offset 0x48, size 0x8
};
// total size: 0x8
class __spots__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
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
// total size: 0xFEC
class SceneData {
    // Members
    class Scene scene; // offset 0x0, size 0xFE4
    unsigned char * sceneBuffer; // offset 0xFE4, size 0x4
    int sceneBufferSize; // offset 0xFE8, size 0x4
};
// total size: 0x20
class MaterialDepotSpace : public Space {};
// total size: 0x290
class ScreenRenderTargetWii : public ScreenRenderTargetCommon {
    // Members
    class Texture HDRtexture[5]; // offset 0x24, size 0x168
    unsigned char * HDRtexData[5]; // offset 0x18C, size 0x14
    unsigned long HDRtexDataSize[5]; // offset 0x1A0, size 0x14
    class Texture HDRtexture_BlurWork[2]; // offset 0x1B4, size 0x90
    class Texture BlackAndWhiteTextures[1]; // offset 0x244, size 0x48
    unsigned char * BlackAndWhiteTextureData[1]; // offset 0x28C, size 0x4
};
// total size: 0x24
class ScreenRenderTargetCommon : public RenderTarget {
    // Members
    class ColorF backgroundColor; // offset 0x14, size 0x10
};
// total size: 0x28
class ScreenView : public View {};
// total size: 0x210DC
class ProjectShadowView : public View {
    // Members
    class Bucket * bucketList; // offset 0x28, size 0x4
    unsigned int bucketCount; // offset 0x2C, size 0x4
    class Scene * parentScene; // offset 0x30, size 0x4
    class TextureRenderTargetWii myRenderTarget; // offset 0x34, size 0x15C
    class TextureRenderTargetWii myBlurRenderTarget; // offset 0x190, size 0x15C
    class ProjectShadowSpace mySpace; // offset 0x2EC, size 0x24
    class Viewport myViewport; // offset 0x310, size 0x24C
    class SimpleShadow mySimpleShadows; // offset 0x55C, size 0x33C
    unsigned int casterViewportCount; // offset 0x898, size 0x4
    class Viewport * casterViewportList[4]; // offset 0x89C, size 0x10
    int renderTargetSize; // offset 0x8AC, size 0x4
    class Sampler shadowSampler; // offset 0x8B0, size 0xC
    class ShadowCache caches[12]; // offset 0x8BC, size 0x20820
};
// total size: 0x108
class Bucket {
    // Members
    unsigned int fbMask; // offset 0x0, size 0x4
    unsigned int cacheIndex; // offset 0x4, size 0x4
    unsigned int tempCasterIndex; // offset 0x8, size 0x4
    unsigned int tempRendIndex; // offset 0xC, size 0x4
    unsigned int tempCasterCount; // offset 0x10, size 0x4
    class Vector4 component; // offset 0x14, size 0x10
    class Vector4 receiveRangeBase; // offset 0x24, size 0x10
    class Vector4 receiveRange; // offset 0x34, size 0x10
    class Matrix43 receiveMatrix; // offset 0x44, size 0x30
    class Vector4 receiveColor; // offset 0x74, size 0x10
    int scissorRect[4]; // offset 0x84, size 0x10
    class Vector4 castRange; // offset 0x94, size 0x10
    class Matrix43 castMatrix; // offset 0xA4, size 0x30
    class BroadBound casterBound; // offset 0xD4, size 0x20
    float shadowCastDepth; // offset 0xF4, size 0x4
    float shadowCastStartDepth; // offset 0xF8, size 0x4
    unsigned int casterFlags; // offset 0xFC, size 0x4
    unsigned int minPixels; // offset 0x100, size 0x4
    unsigned int maxPixels; // offset 0x104, size 0x4
};
// total size: 0x15C
class TextureRenderTargetWii : public TextureRenderTargetCommon {
    // Members
    class Texture texture2; // offset 0x64, size 0x48
    class Texture texture3; // offset 0xAC, size 0x48
    class Texture texture4; // offset 0xF4, size 0x48
    unsigned int numTextures; // offset 0x13C, size 0x4
    unsigned int destWidth; // offset 0x140, size 0x4
    unsigned int destHeight; // offset 0x144, size 0x4
    unsigned char * texData; // offset 0x148, size 0x4
    unsigned char * texData2; // offset 0x14C, size 0x4
    unsigned char * texData3; // offset 0x150, size 0x4
    unsigned char * texData4; // offset 0x154, size 0x4
    unsigned long texDataSize; // offset 0x158, size 0x4
};
// total size: 0x64
class TextureRenderTargetCommon : public RenderTarget {
    // Members
    class Texture texture; // offset 0x14, size 0x48
    bool msaa; // offset 0x5C, size 0x1
    bool depth; // offset 0x5D, size 0x1
    int format; // offset 0x60, size 0x4
};
// total size: 0x24
class ProjectShadowSpace : public Space {
    // Members
    class ProjectShadowView * parent; // offset 0x20, size 0x4
};
// total size: 0x33C
class SimpleShadow {
    // Members
    class ShadowSimpleCollisionQueue sCollQueue[2]; // offset 0x0, size 0x18
    class ShadowSimpleCache * sDrawQueue[200]; // offset 0x18, size 0x320
    int nextDrawIdx; // offset 0x338, size 0x4
};
// total size: 0xC
class ShadowSimpleCollisionQueue {
    // Members
    class ShadowSimpleCache * cache; // offset 0x0, size 0x4
    unsigned int priority; // offset 0x4, size 0x4
    class Renderable3D * castRend; // offset 0x8, size 0x4
};
// total size: 0x2B58
class ShadowCache {
    // Members
    unsigned int * projectShadowCachePtr; // offset 0x0, size 0x4
    unsigned short inUse; // offset 0x4, size 0x2
    unsigned short dirtyPriority; // offset 0x6, size 0x2
    unsigned short polyCount; // offset 0x8, size 0x2
    unsigned short bucketIndex; // offset 0xA, size 0x2
    float polyRayDepth[5]; // offset 0xC, size 0x14
    float blurScale; // offset 0x20, size 0x4
    class BroadBound casterBound; // offset 0x24, size 0x20
    class BroadBound bound; // offset 0x44, size 0x20
    class BroadBound clippedBound; // offset 0x64, size 0x20
    class Vector boundCenter; // offset 0x84, size 0x10
    class Vector boundHalf; // offset 0x94, size 0x10
    class Vector boundQuarter; // offset 0xA4, size 0x10
    class Vector4 capsuleStart; // offset 0xB4, size 0x10
    class Vector capsuleEnd; // offset 0xC4, size 0x10
    class ShadowPoly poly[256]; // offset 0xD4, size 0x2400
    float polyDepth[256]; // offset 0x24D4, size 0x400
    class Renderable3DLink receiverLink[32]; // offset 0x28D4, size 0x180
    unsigned short entCount; // offset 0x2A54, size 0x2
    unsigned short entLast; // offset 0x2A56, size 0x2
    class Renderable3D * receiver[32]; // offset 0x2A58, size 0x80
    float receiverDepth[32]; // offset 0x2AD8, size 0x80
};
// total size: 0x24
class ShadowPoly {
    // Members
    class Vector3 v0; // offset 0x0, size 0xC
    class Vector3 v1; // offset 0xC, size 0xC
    class Vector3 v2; // offset 0x18, size 0xC
};
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
// total size: 0xF0
class zScaleformAsset : public zUI {
    // Members
    class uid scaleformNG; // offset 0xA8, size 0x8
    class uid dispatcher; // offset 0xB0, size 0x8
    class uid sounds; // offset 0xB8, size 0x8
    class uid rumbleEmitter; // offset 0xC0, size 0x8
    class uid pointers; // offset 0xC8, size 0x8
    unsigned char viewnum; // offset 0xD0, size 0x1
    unsigned char renderLayer; // offset 0xD1, size 0x1
    unsigned char padInput; // offset 0xD2, size 0x1
    unsigned char pointerInput; // offset 0xD3, size 0x1
    bool stopRendering; // offset 0xD4, size 0x1
    bool ignoreGlobalStop; // offset 0xD5, size 0x1
    enum MovieType movieType; // offset 0xD8, size 0x4
    class LinkAsset EventLinksNew; // offset 0xDC, size 0x8
};
enum MovieType {
    MovieTypeNormal = 0,
    MovieTypePointers = 1,
    MovieTypeSystem = 2,
    MovieTypeLoadScreen = 3,
    MovieTypePause = 4,
    END_MovieTypeENUM = 5,
};
enum BootMenuEnum {
    BootMenu_Start = 0,
    BootMenu_Init = 1,
    BootMenu_Setup = 2,
    BootMenu_Loop = 3,
    BootMenu_Done = 4,
};
// total size: 0x4
class File {
    // Members
    class FileDevice * stream; // offset 0x0, size 0x4
};
// total size: 0x4
class FileDevice {};
// total size: 0x1
class FileError {};
// total size: 0x11
class ConsoleLanguageMapping {
    // Members
    unsigned char langCode; // offset 0x0, size 0x1
    char langName[8]; // offset 0x1, size 0x8
    char naLangName[8]; // offset 0x9, size 0x8
};
// total size: 0xE0
class UI_Text : public UIText {
    // Members
    class LinkAsset EventLinksNew; // offset 0xD8, size 0x8
};
// total size: 0xE0
class UIText : public zUI {
    // Members
    unsigned int text; // offset 0xA8, size 0x4
    class uid font; // offset 0xB0, size 0x8
    unsigned char fontSizeW; // offset 0xB8, size 0x1
    unsigned char fontSizeH; // offset 0xB9, size 0x1
    unsigned char fontSpacingX; // offset 0xBA, size 0x1
    unsigned char fontSpacingY; // offset 0xBB, size 0x1
    unsigned char textBoxInsetTop; // offset 0xBC, size 0x1
    unsigned char textBoxInsetLeft; // offset 0xBD, size 0x1
    unsigned char textBoxInsetRight; // offset 0xBE, size 0x1
    unsigned char textBoxInsetBottom; // offset 0xBF, size 0x1
    unsigned char justifyX; // offset 0xC0, size 0x1
    unsigned char justifyY; // offset 0xC1, size 0x1
    unsigned char textFlags; // offset 0xC2, size 0x1
    unsigned int shadowColor; // offset 0xC4, size 0x4
    float shadowOffsetX; // offset 0xC8, size 0x4
    float shadowOffsetY; // offset 0xCC, size 0x4
    float textScaleX; // offset 0xD0, size 0x4
    float textScaleY; // offset 0xD4, size 0x4
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
// total size: 0xB8
class zNPCAnimViewer : public zNPCBase {};
// total size: 0x2C
class zNPCGetsDamageInfo {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    class xBase * from; // offset 0x4, size 0x4
    class zNPCEntity * npcEntity; // offset 0x8, size 0x4
    float damageHP; // offset 0xC, size 0x4
    float remainingHP; // offset 0x10, size 0x4
    enum eHitSource hitSource; // offset 0x14, size 0x4
    enum zHitTarget hitTarget; // offset 0x18, size 0x4
    enum eNPCHitReaction hitReaction; // offset 0x1C, size 0x4
    class xVec3 knockback; // offset 0x20, size 0xC
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
// total size: 0x4
class zCreator : public zCreatorI {};
// total size: 0x1A0
class UPBiplane : public NPCAsset {
    // Members
    class uid Player1; // offset 0x180, size 0x8
    class uid House; // offset 0x188, size 0x8
    class uid HouseAttackStart; // offset 0x190, size 0x8
};
// total size: 0x14
class zNPCBiplaneBTActionBuilder : public zBTActionBuilder {
    // Members
    class zNPCBase * npcBase; // offset 0x8, size 0x4
    unsigned int actionCount; // offset 0xC, size 0x4
    unsigned int * actions; // offset 0x10, size 0x4
};
// total size: 0x20
class zNPCBiplaneRayHitCollector : public hkpRayHitCollector {
    // Members
    bool hitIt; // offset 0x8, size 0x1
    class xBase * hitObj; // offset 0xC, size 0x4
    float nearDist; // offset 0x10, size 0x4
    class xVec3 hitNormal; // offset 0x14, size 0xC
};
// total size: 0xC
class zNPCBiplaneBTConditionBuilder : public zBTConditionBuilder {
    // Members
    class zNPCBase * npcBase; // offset 0x8, size 0x4
};
// total size: 0xC
class zNPCBiplaneBTManager : public zNPCLogic {
    // Members
    class zNPCBTClientBase * btClient; // offset 0x8, size 0x4
};
// total size: 0xC8
class zNPCBiplaneSteering : public zNPCSteering {
    // Members
    float yaw; // offset 0x4C, size 0x4
    float pitch; // offset 0x50, size 0x4
    float roll; // offset 0x54, size 0x4
    float yawVel; // offset 0x58, size 0x4
    float pitchVel; // offset 0x5C, size 0x4
    float rollVel; // offset 0x60, size 0x4
    float yawModifier; // offset 0x64, size 0x4
    float currentSpeed; // offset 0x68, size 0x4
    float YAW_ACCEL; // offset 0x6C, size 0x4
    float YAW_VEL_MAX; // offset 0x70, size 0x4
    float YAW_ANG_VEL; // offset 0x74, size 0x4
    float PITCH_ACCEL; // offset 0x78, size 0x4
    float PITCH_VEL_MAX; // offset 0x7C, size 0x4
    float PITCH_ANG_MAX; // offset 0x80, size 0x4
    float ROLL_ACCEL; // offset 0x84, size 0x4
    float ROLL_VEL_MAX; // offset 0x88, size 0x4
    float ROLL_MAX; // offset 0x8C, size 0x4
    float START_SPEED; // offset 0x90, size 0x4
    float BRAKE_SPEED; // offset 0x94, size 0x4
    class zNPCSteeringControl * curControl; // offset 0x98, size 0x4
    class xVec3 inputControls; // offset 0x9C, size 0xC
    class xQuat flightOrientation; // offset 0xA8, size 0x10
    class xQuat yawedOrientation; // offset 0xB8, size 0x10
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
// total size: 0x4
class EventActionOneUnsignedInt : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
};
// total size: 0x2C
class ProjectileCollisionDetails {
    // Members
    class xBase * hitObject; // offset 0x0, size 0x4
    class xVec3 contactPosition; // offset 0x4, size 0xC
    class xVec3 contactNormal; // offset 0x10, size 0xC
    class xVec3 projectileVelocity; // offset 0x1C, size 0xC
    class SurfaceGamePlay * hitSurface; // offset 0x28, size 0x4
};
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
// total size: 0x4
class Action_NPC_Write_PatrolMovePointShifted : public ActionBase {
    // Members
    unsigned int LaneMax; // offset 0x0, size 0x4
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
    END_eMovePointType_ENUM = 3,
};
// total size: 0x10
class Action_NPC_Write_CurrentPosition : public ActionBase {
    // Members
    bool ConstrainToWallnet; // offset 0x0, size 0x1
    class vec3 Offset; // offset 0x4, size 0xC
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
// total size: 0x10
class Action_NPC_PlayAnimationType : public ActionBase {
    // Members
    unsigned int Animation; // offset 0x0, size 0x4
    unsigned int EventData; // offset 0x4, size 0x4
    float Acceleration; // offset 0x8, size 0x4
    enum eHeadingCalcType Heading; // offset 0xC, size 0x4
};
// total size: 0x14
class Action_NPC_BadgeCollected : public ActionBase {
    // Members
    unsigned char BadgeNum; // offset 0x0, size 0x1
    unsigned char BadgeType; // offset 0x1, size 0x1
    class vec3 Offset; // offset 0x4, size 0xC
    bool UseCurrentPosition; // offset 0x10, size 0x1
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
// total size: 0x78
class MappedElectricity : public Electricity {
    // Members
    class xVec3 * refRowsOffset; // offset 0x64, size 0x4
    class xVec3 * refRowsOffsetNew; // offset 0x68, size 0x4
    int * refRowsSet; // offset 0x6C, size 0x4
    int mappedRows; // offset 0x70, size 0x4
    float * rowsAlphaScale; // offset 0x74, size 0x4
};
// total size: 0x64
class Electricity : public ElectricCylinder {
    // Members
    class xVec3 * rowsOffset; // offset 0x60, size 0x4
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
// total size: 0x190
class zNPCGenericSpawner : public zNPCGeneric {
    // Members
    class GenericSpawner * assetSpawner; // offset 0x174, size 0x4
    class zNPCGenericPool * genericPool; // offset 0x178, size 0x4
    class zNPCGeneric * myReservedNPC; // offset 0x17C, size 0x4
    unsigned int spawnCounter; // offset 0x180, size 0x4
    float timeSinceSpawn; // offset 0x184, size 0x4
    bool doNonstopSpawn; // offset 0x188, size 0x1
    bool spawningEnabled; // offset 0x189, size 0x1
};
// total size: 0x190
class GenericSpawner : public NPCGeneric {
    // Members
    class uid enemyList; // offset 0x180, size 0x8
    unsigned int spawnLimit; // offset 0x188, size 0x4
    float spawnDelay; // offset 0x18C, size 0x4
};
// total size: 0x180
class NPCGeneric : public NPCAsset {};
// total size: 0x50
class zNPCGenericPool : private xOGEntity {
    // Members
    class EntityHandleBase * handle; // offset 0x3C, size 0x4
    bool * ReservedList; // offset 0x40, size 0x4
    unsigned long long * SpawnerList; // offset 0x44, size 0x4
    class zNPCGenericPoolAsset * asset; // offset 0x48, size 0x4
};
// total size: 0x18
class zNPCGenericPoolAsset : public xBaseScene {
    // Members
    class __npcs__ npcs; // offset 0x10, size 0x8
};
// total size: 0x8
class __npcs__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0xC
class Condition_NPC_PlayerInAttackRange : public ConditionBase {
    // Members
    bool CheckInWallNet; // offset 0x0, size 0x1
    unsigned int PlayerVariable; // offset 0x4, size 0x4
    float Offset; // offset 0x8, size 0x4
};
// total size: 0x8
class Condition_NPC_HitCount : public ConditionBase {
    // Members
    int numHits; // offset 0x0, size 0x4
    unsigned int compOperator; // offset 0x4, size 0x4
};
// total size: 0x8
class Condition_NPC_DistanceFromFloatingObject : public ConditionBase {
    // Members
    float distance; // offset 0x0, size 0x4
    unsigned int compOperator; // offset 0x4, size 0x4
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
    class ShootToTargetStruct _Target; // offset 0x0, size 0x1
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
// total size: 0x1
class ShootToTargetStruct {
    // Members
    bool implementMe; // offset 0x0, size 0x1
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
};
// total size: 0x1
class _ResetToMax {};
// total size: 0x4
class _SetToVal {
    // Members
    float value; // offset 0x0, size 0x4
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
// total size: 0x14
class Action_NPC_Swarm_BadgeCollected : public Action_NPC_BadgeCollected {};
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
// total size: 0x180
class AnimViewer : public NPCAsset {};
// total size: 0x180
class UPGeneric : public NPCAsset {};
// total size: 0x1A0
class GenericSwarm : public NPCAsset {
    // Members
    int MemberNumber; // offset 0x180, size 0x4
    float SpawnPeriod; // offset 0x184, size 0x4
    class uid HidePoint; // offset 0x188, size 0x8
    class uid DeathDecal; // offset 0x190, size 0x8
};
// total size: 0x20
class NPCGroupCircle : public NPCGroupAsset {};
// total size: 0x8
class Action_NPC_Write_AttackDestination : public ActionBase {
    // Members
    float DistancePastPlayer; // offset 0x0, size 0x4
    unsigned int PlayerVariable; // offset 0x4, size 0x4
};
// total size: 0x8
class Action_NPC_Dog_AttackIdle : public ActionBase {
    // Members
    class Pointer32 CustomAnimationName; // offset 0x0, size 0x4
    class Pointer32 CustomRotateAnimationName; // offset 0x4, size 0x4
};
// total size: 0x10
class Action_NPC_Spider_JumpAttack : public ActionBase {
    // Members
    float Height; // offset 0x0, size 0x4
    float Damage; // offset 0x4, size 0x4
    float DamageInterval; // offset 0x8, size 0x4
    float ShakeLength; // offset 0xC, size 0x4
};
// total size: 0x158
class zNPCUPGeneric : public zNPCBase {
    // Members
    class zBoneTracker headTracker; // offset 0xB8, size 0x7C
    bool headTrackEnabled; // offset 0x134, size 0x1
    class xBase * headTrackPrevLookAtBase; // offset 0x138, size 0x4
    class xBase * headTrackPoiBase; // offset 0x13C, size 0x4
    class xVec3 headTrackPoi; // offset 0x140, size 0xC
    bool headTrackValidPoi; // offset 0x14C, size 0x1
    bool headTrackBlendToLookAt; // offset 0x14D, size 0x1
    class xEnt * headTrackOverrideEnt; // offset 0x150, size 0x4
};
// total size: 0x20
class RippleTableElement {
    // Members
    class xVec3 pos; // offset 0x0, size 0xC
    float aliveTime; // offset 0xC, size 0x4
    float totalTime; // offset 0x10, size 0x4
    class xBase * owner; // offset 0x14, size 0x4
    class zFXSpawn * fxSpawn; // offset 0x18, size 0x4
    enum eRippleCreateMode createMode; // offset 0x1C, size 0x4
};
enum eRippleCreateMode {
    eRippleCreateMode_False = 0,
    eRippleCreateMode_Normal = 1,
};
// total size: 0xC
class BspCollisionListener : public zNPCCollisionListener {
    // Members
    class zNPCBTCrocBossKnockOutOnContactBspAction * parentAction; // offset 0x8, size 0x4
};
// total size: 0x10
class zNPCEntity_ModelUpdater : public xOGModelUpdater {};
// total size: 0x8
class zNPCFXTypeInfo {
    // Members
    enum eNPCFXType type; // offset 0x0, size 0x4
    class zNPCFXNode * (* fxNodeCreator)(class zFactory * factory); // offset 0x4, size 0x4
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
// total size: 0x10
class ImmediateInstanceAsset {
    // Members
    unsigned long long immediatePrototypeID; // offset 0x0, size 0x8
    unsigned short rendCount; // offset 0x8, size 0x2
    unsigned short pad; // offset 0xA, size 0x2
    class Pointer32 rendSettings; // offset 0xC, size 0x4
};
// total size: 0x48
class EntityHandle : public EntityHandleBase {};
// total size: 0x1C
class zNPCManager : public zModule {
    // Members
    class xAnimTable * animTables; // offset 0x18, size 0x4
};
// total size: 0x10
class zNPCManager_CylinderCheck_CB {
    // Members
    class xVec3 * center; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float hUp; // offset 0x8, size 0x4
    float hDown; // offset 0xC, size 0x4
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
enum eNPCPerceptionType {
    eNPCPerception_TargetReachable = 0,
    eNPCPerception_TargetChargable = 1,
    eNPCPerception_TargetAttackable = 2,
    eNPCPerception_TargetVisible = 3,
    eNPCPerception_TargetShootable = 4,
    END_eNPCPerception_ENUM = 5,
};
// total size: 0x20
class PerceptionNode {
    // Members
    unsigned char Shape; // offset 0x0, size 0x1
    class @class __anon; // offset 0x4, size 0x14
    class PercShapeSphere Sphere; // offset 0x4, size 0x4
    class PercShapeSoundSphere SoundSphere; // offset 0x4, size 0x8
    class PercShapeCylinder Cylinder; // offset 0x4, size 0xC
    class PercShapeAngularSphere AngularSphere; // offset 0x4, size 0xC
    class PercShapeAngularCylinder AngularCylinder; // offset 0x4, size 0x14
    class PercShapeNPCWalls InNPCWalls; // offset 0x4, size 0x8
    unsigned int flags; // offset 0x18, size 0x4
    float HysteresisRatio; // offset 0x1C, size 0x4
};
// total size: 0x14
class @class {
    // Members
    class PercShapeSphere Sphere; // offset 0x0, size 0x4
    class PercShapeSoundSphere SoundSphere; // offset 0x0, size 0x8
    class PercShapeCylinder Cylinder; // offset 0x0, size 0xC
    class PercShapeAngularSphere AngularSphere; // offset 0x0, size 0xC
    class PercShapeAngularCylinder AngularCylinder; // offset 0x0, size 0x14
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
// total size: 0xC
class PercShapeAngularSphere {
    // Members
    float Radius; // offset 0x0, size 0x4
    float Angle; // offset 0x4, size 0x4
    float tanHAngle; // offset 0x8, size 0x4
};
// total size: 0x14
class PercShapeAngularCylinder {
    // Members
    float Radius; // offset 0x0, size 0x4
    float HeightUp; // offset 0x4, size 0x4
    float HeightDown; // offset 0x8, size 0x4
    float Angle; // offset 0xC, size 0x4
    float tanHAngle; // offset 0x10, size 0x4
};
// total size: 0x8
class PercShapeNPCWalls {
    // Members
    float HeightUp; // offset 0x0, size 0x4
    float HeightDown; // offset 0x4, size 0x4
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
// total size: 0x3C
class Type : public zNPCType {};
// total size: 0x1
class zNPCRegistry {};
// total size: 0x14
class zNPCSearchMapLinkCostCalculator : public zPathFinderSearchMapLinkCostCalculator {
    // Members
    class zNPCBase * npcBase; // offset 0x10, size 0x4
};
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
// total size: 0x30
class NavLink : public xBaseScene {
    // Members
    class uid Start; // offset 0x10, size 0x8
    class uid End; // offset 0x18, size 0x8
    unsigned int Flags; // offset 0x20, size 0x4
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
// total size: 0x48
class zWallNetGroup : public xOGEntity {
    // Members
    class WallNetGroup * myAsset; // offset 0x3C, size 0x4
    class zWallNet * * wallNets; // offset 0x40, size 0x4
    int count; // offset 0x44, size 0x4
};
// total size: 0x18
class WallNetGroup : public xBaseScene {
    // Members
    class __WallNets__ WallNets; // offset 0x10, size 0x8
};
// total size: 0x8
class __WallNets__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0xA4
class zNPCSingleSteering : public zNPCSteering {
    // Members
    class xVec3 supportVel; // offset 0x4C, size 0xC
    class xVec3 wantedVel; // offset 0x58, size 0xC
    class xVec3 wantedHeading; // offset 0x64, size 0xC
    class xSpringyAngle turnSpring; // offset 0x70, size 0x18
    class zWallNetPositionXZ wallNetPosition; // offset 0x88, size 0x14
    float curTurnRate; // offset 0x9C, size 0x4
    class zNPCSteeringControl * curControl; // offset 0xA0, size 0x4
};
// total size: 0x164C
class zNPCSwarmSteering : public zNPCSteering {
    // Members
    class xVec3 supportVels[64]; // offset 0x4C, size 0x300
    class xVec3 wantedVels[64]; // offset 0x34C, size 0x300
    class xVec3 wantedHeadings[64]; // offset 0x64C, size 0x300
    class xSpringyAngle turnSprings[64]; // offset 0x94C, size 0x600
    class zWallNetPositionXZ wallNetPositions[64]; // offset 0xF4C, size 0x500
    float curTurnRates[64]; // offset 0x144C, size 0x100
    class zNPCSteeringControl * curControls[64]; // offset 0x154C, size 0x100
};
// total size: 0x10
class zNPCSteeringVec {
    // Members
    class xVec3 dir; // offset 0x0, size 0xC
    float mag; // offset 0xC, size 0x4
};
// total size: 0x84
class zNPCSteeringWanderControl : public zNPCSteeringControl {
    // Members
    class zWanderData wanderData; // offset 0x48, size 0x1C
    class zWallAvoidanceData wallAvoidanceData; // offset 0x64, size 0x10
    class zNPCSteeringAccumulator accAccum; // offset 0x74, size 0x10
};
// total size: 0x94
class zNPCSteeringFleeControl : public zNPCSteeringControl {
    // Members
    class zWanderData wanderData; // offset 0x48, size 0x1C
    class zWallAvoidanceData wallAvoidanceData; // offset 0x64, size 0x10
    class zNPCSteeringDest fleeDestination; // offset 0x74, size 0x10
    class zNPCSteeringAccumulator accAccum; // offset 0x84, size 0x10
};
// total size: 0x224
class zNPCSteeringFollowPlayerControl : public zNPCSteeringMoveToControl {
    // Members
    class zPlayer * player; // offset 0x208, size 0x4
    class zObjectAvoidanceData objectAvoidanceData; // offset 0x20C, size 0x18
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
// total size: 0xC
class NPC_Combat {
    // Members
    float HitPoints; // offset 0x0, size 0x4
    class __Attacks__ Attacks; // offset 0x4, size 0x8
};
// total size: 0x8
class __Attacks__ {
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
// total size: 0x38
class Action_NPC_Wasp_AttackOrbit : public Action_NPC_MoveTo {
    // Members
    float Radius; // offset 0x2C, size 0x4
    float RadiusIncrement; // offset 0x30, size 0x4
    float IdleTime; // offset 0x34, size 0x4
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
// total size: 0x220
class zNGLoadingScreen {
    // Members
    class EntityHandleBase dummyHandle; // offset 0x0, size 0x48
    class LoadingScreen * mAsset; // offset 0x48, size 0x4
    class ScaleformBlobEntity * mSfEntity; // offset 0x4C, size 0x4
    class zScaleformAsset * mSfAsset; // offset 0x50, size 0x4
    class zScaleform mSfObj; // offset 0x60, size 0x150
    bool mIsFlash; // offset 0x1B0, size 0x1
    unsigned int currentIndex; // offset 0x1B4, size 0x4
    unsigned long long nextLoadingScreenID; // offset 0x1B8, size 0x8
    float width; // offset 0x1C0, size 0x4
    float height; // offset 0x1C4, size 0x4
    float xPos; // offset 0x1C8, size 0x4
    float yPos; // offset 0x1CC, size 0x4
    class ColorF oldBackgroundColor; // offset 0x1D0, size 0x10
    bool cleaned; // offset 0x1E0, size 0x1
    void * immediatePrototypePointer; // offset 0x1E4, size 0x4
    class ImmediateInstanceArticle * immediateArticlePointer; // offset 0x1E8, size 0x4
    class zUI * * uiElements; // offset 0x1EC, size 0x4
    class zUIGroup * * uiGroups; // offset 0x1F0, size 0x4
    unsigned int uiElementCount; // offset 0x1F4, size 0x4
    unsigned int uiGroupCount; // offset 0x1F8, size 0x4
    float timer; // offset 0x1FC, size 0x4
    class Time thisTime; // offset 0x200, size 0x8
    class Time lastTime; // offset 0x208, size 0x8
    bool showingFMV; // offset 0x210, size 0x1
};
// total size: 0x50
class LoadingScreen : public xBaseAsset {
    // Members
    class __uiElements__ uiElements; // offset 0x10, size 0x8
    class Pointer32 stringLoading; // offset 0x18, size 0x4
    class __stringHints__ stringHints; // offset 0x1C, size 0x8
    class __elements__ elements; // offset 0x24, size 0x8
    unsigned int clearColor; // offset 0x2C, size 0x4
    float delay; // offset 0x30, size 0x4
    enum AspectRatioAdjust aspectRatioAdjustment; // offset 0x34, size 0x4
    bool random; // offset 0x38, size 0x1
    class uid scaleformPlayerId; // offset 0x40, size 0x8
    class LinkAsset EventLinksNew; // offset 0x48, size 0x8
};
// total size: 0x8
class __uiElements__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __stringHints__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __elements__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
enum AspectRatioAdjust {
    Crop = 0,
    CropLeft = 1,
    CropRight = 2,
    CropTop = 3,
    CropBottom = 4,
    Scale = 5,
    END_AspectRatioAdjustENUM = 6,
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
