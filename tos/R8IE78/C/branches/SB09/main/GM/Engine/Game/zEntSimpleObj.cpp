/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zEntSimpleObj.cpp
*/
class zScene * updateCbScene; // size: 0x4, address: 0x8076DF8C
float updateCbDt; // size: 0x4, address: 0x8076DF90
// Range: 0x80197C10 -> 0x80197C84
void zEntSimpleObj::UpdateRender(class zEntSimpleObj * this /* r31 */) {
}
// signature: @unnamed@WAD04_cpp@::CollisionReset(zEntSimpleObj *)
// Range: 0x80197C90 -> 0x80197CE8
static void @unnamed@WAD04_cpp@::CollisionReset() {
}
// Range: 0x80197CF0 -> 0x80197DFC
static void @unnamed@WAD04_cpp@::CollisionOn(class zEntSimpleObj * ent /* r31 */) {
    {
        // Range: 0x80197D3C -> 0x80197DE4
        // Local variables
        unsigned int filter; // r30

        {
            // Range: 0x80197D84 -> 0x80197DB0
            // Local variables
            enum E_HAVOK_COLLIDE_FILTER_LAYER packedFilterLayer; // r0
        }
    }
}
// Range: 0x80197E00 -> 0x80197EA8
static void @unnamed@WAD04_cpp@::CollisionOff(class zEntSimpleObj * ent /* r31 */) {
}
// Range: 0x80198080 -> 0x801980E0
void * zEntSimpleObj_MgrInitCB::~zEntSimpleObj_MgrInitCB(class zEntSimpleObj_MgrInitCB * this /* r30 */) {
}
// Range: 0x80197EB0 -> 0x80198074
void zEntSimpleObj_MgrInit() {
    // Local variables
    class zEntSimpleObj_MgrInitCB init; // r1+0x8

    {
        // Range: 0x80198010 -> 0x80198050
        // Local variables
        int i; // r28
    }

    // References
    // -> class zGlobals globals;
}
// signature: zEntSimpleObj_MgrCustomUpdate(zScene *, float)
// Range: 0x801980E0 -> 0x80198158
void zEntSimpleObj_MgrCustomUpdate() {
    // References
    // -> class zGlobals globals;
    // -> float updateCbDt;
    // -> class zScene * updateCbScene;
}
// Range: 0x80198160 -> 0x801981F8
class Entity * Sext::xSimpleObjAsset::Create(class EntityHandleBase * handle /* r29 */, class xSimpleObjAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__13zEntSimpleObj;
}
// signature: zEntSimpleObj_Init(zEntSimpleObj *, Sext::xSimpleObjAsset *, bool, bool)
// Range: 0x80198200 -> 0x801984B8
void zEntSimpleObj_Init(class zEntSimpleObj * ent /* r29 */, class xSimpleObjAsset * asset /* r30 */, bool candestroy /* r31 */) {
    // Local variables
    enum eShadow castShadow; // r0
    enum SimpObjOrientationType orientation; // r0

    {
        // Range: 0x80198238 -> 0x80198270
        // Local variables
        class ModelInstanceAsset * tmpAsset; // r0
    }
    {
        // Range: 0x801983D0 -> 0x80198420
        // Local variables
        class hkpPropertyValue val; // r1+0x10
    }
    {
        // Range: 0x80198428 -> 0x80198470
        // Local variables
        unsigned long long destructibleUID; // r3:r4
    }
}
// Range: 0x801984C0 -> 0x80198600
void zEntSimpleObj_Update(class zEntSimpleObj * ent /* r29 */, class xScene * sc /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x80198518 -> 0x80198584
        // Local variables
        float lastFrameSettleTimer; // f2
    }

    // References
    // -> class zViewport viewports[4];
    // -> class hkVector4 hkVector4Zero;
    // -> class hkQuaternion hkQuaternionIdentity;
}
// Range: 0x80198660 -> 0x80198810
void zEntSimpleObj_Setup(class zEntSimpleObj * ent /* r31 */) {
    {
        // Range: 0x801986A8 -> 0x801986FC
        {
            // Range: 0x801986B8 -> 0x801986FC
            // Local variables
            int j; // r6
        }
    }
    {
        // Range: 0x801987C8 -> 0x801987E8
        // Local variables
        class FloatAndVoid dist; // r1+0x8
    }

    // References
    // -> class zGlobals globals;
    // -> class xOGModelUpdater g_modelUpdateNone;
}
// Range: 0x80198810 -> 0x80198880
void zEntSimpleObj_SceneExit() {
    // References
    // -> class zGlobals globals;
}
// signature: zEntSimpleObj_Reset(zEntSimpleObj *, xScene *)
// Range: 0x80198880 -> 0x80198C90
void zEntSimpleObj_Reset(class zEntSimpleObj * ent /* r26 */) {
}
// Range: 0x80198C90 -> 0x80198CE8
void zEntSimpleObj_DebugReset(class zEntSimpleObj * ent /* r30 */, class xScene * sc /* r31 */) {
    // Local variables
    class xSimpleObjAsset * asset; // r4
}
// Range: 0x80198CF0 -> 0x80199AF0
void zEntSimpleObjEventCB(class xBase * from /* r30 */, class xBase * to /* r29 */, unsigned int toEvent /* r28 */, class EventAny * genericParams /* r27 */) {
    // Local variables
    class zEntSimpleObj * s; // reg65535

    {
        // Range: 0x80198D28 -> 0x80198EB0
        // Local variables
        bool sentByDestructable; // r3

        {
            // Range: 0x80198D34 -> 0x80198D74
            // Local variables
            class EventActionDestructableFlag * params; // r0
        }
        {
            // Range: 0x80198D74 -> 0x80198D8C
            // Local variables
            class EventActionHit * params; // r0
        }
        {
            // Range: 0x80198D8C -> 0x80198EB0
            {
                // Range: 0x80198DB0 -> 0x80198EB0
                // Local variables
                class hkpRigidBody * physicsBody; // r0
                class hkVector4 linearVelocity; // r1+0x80
                class hkVector4 angularVelocity; // r1+0x90
                unsigned int filter; // r21
                enum MotionType motionType; // r20
            }
        }
    }
    {
        // Range: 0x8019927C -> 0x8019933C
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r20
        class EventActionDrivenBy * params; // r0
    }
    {
        // Range: 0x801993C8 -> 0x80199448
        // Local variables
        class hkpPropertyValue val; // r1+0x30
    }
    {
        // Range: 0x8019947C -> 0x801994FC
        // Local variables
        class hkpPropertyValue val; // r1+0x28
    }
    {
        // Range: 0x80199570 -> 0x801995D8
        // Local variables
        class xVec3 savePos; // r1+0x70
    }
    {
        // Range: 0x80199614 -> 0x801996BC
        // Local variables
        enum CameraRelative cr; // r20
        class EventActionSetSkyDome * params; // r0

        {
            // Range: 0x8019965C -> 0x801996B4
            // Local variables
            int j; // r21
        }
    }
    {
        // Range: 0x801996C0 -> 0x801996E4
        // Local variables
        class EntityHandleBase * lkHandle; // r0
    }
    {
        // Range: 0x801996F4 -> 0x8019974C
        // Local variables
        class EventActionOneFloat * params; // r0

        {
            // Range: 0x80199728 -> 0x80199748
            // Local variables
            class FloatAndVoid dist; // r1+0x10
        }
    }
    {
        // Range: 0x8019974C -> 0x801997A4
        // Local variables
        class hkVector4 newVelocity; // r1+0x60
        class EventActionHit * params; // r0
    }
    {
        // Range: 0x80199948 -> 0x80199AAC
        // Local variables
        class EventActionSetTextureBlend * params; // r0
    }

    // References
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class zGlobals globals;
}
// signature: zEntSimpleObj_SetOrientation(zEntSimpleObj *, Sext::xSimpleObjAsset::SimpObjOrientationType)
// Range: 0x80199AF0 -> 0x80199BF8
void zEntSimpleObj_SetOrientation() {
    // Local variables
    enum CameraRelative cr; // r28
    class Model & model; // r0

    {
        // Range: 0x80199B88 -> 0x80199BE4
        // Local variables
        int j; // r27
    }
}
// Range: 0x80199C00 -> 0x80199C4C
bool zEntSimpleObj::DrivePrep(class zEntSimpleObj * this /* r30 */, class xOGEntity * driver /* r31 */) {
    // References
    // -> class xOGModelUpdater g_modelUpdateDefault;
}
