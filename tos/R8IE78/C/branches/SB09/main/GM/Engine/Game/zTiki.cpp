/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zTiki.cpp
*/
static class xAnimTable * animTables; // size: 0x4, address: 0x8075A6E4
// Range: 0x80171690 -> 0x80171720
class Entity * Sext::zTikiAsset::Create(class EntityHandleBase * handle /* r29 */, class zTikiAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__5zTiki;
}
// signature: zTikiEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80171720 -> 0x8017173C
static void zTikiEventWrapper(class xBase * from /* r0 */) {
}
// signature: zTiki::HitCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80171740 -> 0x80171764
unsigned int zTiki::HitCheck() {
}
// signature: ExplodeCB(xAnimPlay *, xAnimState *, void *)
// Range: 0x80171770 -> 0x801717BC
void ExplodeCB() {
    // Local variables
    class zTiki * tiki; // r0

    {
        // Range: 0x8017177C -> 0x801717AC
        // Local variables
        class EventActionDestructableFlag params; // r1+0x8
    }
}
// Range: 0x801717C0 -> 0x80171BA8
class xAnimTable * zTiki::CreateAnimTable(unsigned long long animSetID /* r30:r29 */) {
    // Local variables
    class xAnimTable * table; // r31

    // References
    // -> static class xAnimTable * animTables;
}
// signature: zTiki::RemoveAnimTable(unsigned long long)
// Range: 0x80171C30 -> 0x80171CD4
void zTiki::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animTables;
}
// Range: 0x80171CE0 -> 0x80171D74
void * zTiki::~zTiki(class zTiki * this /* r30 */) {
    // References
    // -> struct {} __vt__5zTiki;
}
// signature: zTiki::Init(void *)
// Range: 0x80171D80 -> 0x80171EF0
void zTiki::Init(class zTiki * this /* r31 */) {
    // Local variables
    class ModelInstanceArticle * modelArt; // r0
    unsigned long long destructibleUID; // r3:r4

    {
        // Range: 0x80171DF0 -> 0x80171E84
        // Local variables
        class xAnimTable * table; // r5
    }

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animTables;
}
// Range: 0x80171EF0 -> 0x80171F08
enum E_HAVOK_COLLIDE_FILTER_LAYER zTiki::GetSceneInitCollisionFilter() {
}
// Range: 0x80171F10 -> 0x80172084
void zTiki::InitPhysics(class zTiki * this /* r31 */) {
    // Local variables
    class hkpShape * collisionShape; // r28
    enum hkpCollidableQualityType collidableQuality; // r0
    class hkpShape * scaled_shape; // r28
    class hkTransform transform; // r1+0x60
    class Matrix43 mathmat; // r1+0x30

    // References
    // -> class CHavokShapeBuilder * s_instance;
}
// Range: 0x80172090 -> 0x80172134
class xVec3 zTiki::GetCenter() {
    // Local variables
    class xVec3 center; // r1+0x20
}
// Range: 0x80172140 -> 0x801721A4
void zTiki::StartPhysics(class zTiki * this /* r31 */) {
}
// Range: 0x801721B0 -> 0x8017220C
void zTiki::StopPhysics(class zTiki * this /* r31 */) {
}
// Range: 0x80172210 -> 0x80172240
void zTiki::Show() {
}
// Range: 0x80172240 -> 0x80172268
bool zTiki::IsAnimated() {
}
// Range: 0x80172270 -> 0x801722B0
bool zTiki::IsAnimatedThisFrame() {
}
// Range: 0x801722B0 -> 0x8017249C
void zTiki::Reset(class zTiki * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80172590 -> 0x801725E8
void zTiki::DebugReset(class zTiki * this /* r29 */) {
}
// Range: 0x801725F0 -> 0x80172648
void zTiki::TikiSave(class zTiki * this /* r30 */, class xSerial * s /* r31 */) {
}
// Range: 0x80172650 -> 0x801726AC
void zTiki::TikiLoad(class zTiki * this /* r30 */, class xSerial * s /* r31 */) {
    // Local variables
    int b; // r1+0x8
}
// Range: 0x801726B0 -> 0x80172D98
void zTiki::HandleEvent(class zTiki * this /* r23 */, class xBase * from /* r24 */, unsigned int toEvent /* r25 */, class EventAny * genericParams /* r26 */) {
    {
        // Range: 0x80172708 -> 0x801729E0
        // Local variables
        bool sentByDestructable; // r8

        {
            // Range: 0x80172710 -> 0x801727A4
            // Local variables
            class EventActionDestructableFlag * params; // r0
        }
        {
            // Range: 0x801727A8 -> 0x801729E0
            // Local variables
            class EventActionHit * params; // r0

            {
                // Range: 0x801727C0 -> 0x801729E0
                // Local variables
                class zCollectibleSpawner * spawner; // r28
                unsigned int remainingHP; // r29
                enum enState stateBefore; // r30
                bool sourceWasPlankton; // r31
                class EventActionHit adjustedParams; // r1+0x20

                {
                    // Range: 0x801728FC -> 0x80172988
                    // Local variables
                    class xVec3 pos; // r1+0x8
                    class xVec3 scale; // r1+0x14

                    {
                        // Range: 0x80172914 -> 0x80172988
                        // Local variables
                        unsigned int i; // r27
                    }
                }
            }
        }
    }
    {
        // Range: 0x80172B94 -> 0x80172C54
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r25
        class EventActionDrivenBy * paramst; // r0
    }
}
// signature: zTiki::Update(float, zScene *)
// Range: 0x80172DA0 -> 0x801734B8
void zTiki::Update(class zTiki * this /* r30 */, float dt /* f31 */) {
    // Local variables
    float sqrDistToPlayer; // f0
    bool requiresPhysicsUpdate; // r31

    {
        // Range: 0x80172F3C -> 0x8017324C
        // Local variables
        bool falling; // r28
        class xVec3 oldPos; // r1+0x68

        {
            // Range: 0x80173004 -> 0x801730C0
            // Local variables
            float depenAmount; // f3

            {
                // Range: 0x80173064 -> 0x80173098
                // Local variables
                class FMOD_VECTOR * pos; // r7
                class zSoundFXMultiple * fxAsset; // r0
            }
        }
    }
    {
        // Range: 0x80173278 -> 0x80173304
        // Local variables
        class xQuat quat; // r1+0x58
    }
    {
        // Range: 0x801733A4 -> 0x80173404
        // Local variables
        class EventActionHit params; // r1+0x78
    }
    {
        // Range: 0x80173404 -> 0x80173494
        // Local variables
        float distToPlayer2; // f0
    }

    // References
    // -> class hkQuaternion hkQuaternionIdentity;
    // -> class hkVector4 hkVector4Zero;
    // -> class xGlobals * xglobals;
}
// Range: 0x801734C0 -> 0x80173660
void zTiki::DeactivateTiki(class zTiki * this /* r31 */, bool silent /* r30 */) {
    {
        // Range: 0x80173514 -> 0x80173648
        // Local variables
        class zCollectibleSpawner * spawner; // r0

        {
            // Range: 0x801735D8 -> 0x80173648
            // Local variables
            class xVec3 pos; // r1+0x8
            class xVec3 scale; // r1+0x14
        }
    }
}
// Range: 0x80173660 -> 0x8017393C
void zTiki::CollisionCallback(class zTiki * this /* r24 */, class xBase * other /* r25 */, class hkpRigidBody * otherRigidBody /* r26 */, class hkpContactProcessEvent & event /* r27 */, bool flip /* r28 */) {
    // Local variables
    int depenContactIndex; // r31
    class hkpProcessCollisionData * pCollisionData; // r30

    {
        // Range: 0x801736BC -> 0x801736E8
        // Local variables
        float distance2; // f0
        class xVec3 & myPos; // r0
        class xVec3 & otherPos; // r0
        class zTiki * otherTiki; // r0
    }
    {
        // Range: 0x801736EC -> 0x801737FC
        // Local variables
        int i; // r29

        {
            // Range: 0x801736EC -> 0x801737FC
            // Local variables
            class hkVector4 separatingNormal; // r1+0x10
            class hkContactPoint & contactPoint; // r0

            {
                // Range: 0x801736EC -> 0x801737FC
                // Local variables
                float depen; // f1

                {
                    // Range: 0x801736F8 -> 0x801736F8
                    // Local variables
                    class zTiki * otherTiki; // r0
                }
            }
        }
    }
    {
        // Range: 0x801737FC -> 0x80173918
        // Local variables
        class SurfaceGamePlay * surface; // r0
        int numDatas; // r25
        unsigned int shapeKey; // r19

        {
            // Range: 0x80173840 -> 0x801738C8
            // Local variables
            class hkInplaceArray data; // r1+0x20
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80173940 -> 0x801739C4
bool zTiki::CheckHammerRecoil(class zTiki * this /* r30 */) {
    {
        // Range: 0x80173968 -> 0x801739AC
        // Local variables
        enum eHitSource hitSource; // r31
    }
}
// signature: zTiki::SetBSPVisible(bool)
// Range: 0x801739D0 -> 0x80173A4C
void zTiki::SetBSPVisible(class zTiki * this /* r31 */) {
}
// signature: zTiki::DrivePrep(World::xOGEntity *)
// Range: 0x80173A50 -> 0x80173A80
bool zTiki::DrivePrep() {
    // References
    // -> class xVec3 m_Null;
}
// signature: zTiki::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x80173A80 -> 0x80173BA0
void zTiki::DriveCauseMove(class zTiki * this /* r29 */, class xMat4x3 * parent /* r0 */, class xMat4x3 * oldMat /* r30 */, float dt /* f31 */) {
    // Local variables
    class xMat4x3 baseMat; // r1+0x50

    {
        // Range: 0x80173B0C -> 0x80173B7C
        // Local variables
        class xQuat quat; // r1+0x40
    }
}
// signature: zTiki::DriveAttach(World::xOGEntity *, unsigned int, int)
// Range: 0x80173BA0 -> 0x80173C14
void zTiki::DriveAttach(class zTiki * this /* r29 */, class xOGEntity * passenger /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    class xMat4x3 D; // r1+0x18
    class xVec3 euler; // r1+0x8
}
// signature: zTikiCollisionListener::contactPointRemovedCallback(hkpContactPointRemovedEvent &)
// Range: 0x80173C20 -> 0x80173C30
void zTikiCollisionListener::contactPointRemovedCallback() {
}
// Range: 0x80173C30 -> 0x80173CCC
void zTikiCollisionListener::contactProcessCallback(class zTikiCollisionListener * this /* r29 */, class hkpContactProcessEvent & event /* r30 */) {
    // Local variables
    class hkpRigidBody * rbA; // r31
    class hkpRigidBody * rbB; // r5
    class xBase * baseA; // r0
    class xBase * baseB; // r4
}
// Range: 0x80173CD0 -> 0x80173CE0
void * zTikiCollisionListener::zTikiCollisionListener() {
    // References
    // -> struct {} __vt__22zTikiCollisionListener;
}
