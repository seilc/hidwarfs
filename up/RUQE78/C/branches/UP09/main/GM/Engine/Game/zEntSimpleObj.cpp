/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zEntSimpleObj.cpp
*/
class zScene * updateCbScene; // size: 0x4, address: 0x8083FDEC
float updateCbDt; // size: 0x4, address: 0x8083FDF0
// Range: 0x802A3240 -> 0x802A4178
void zEntSimpleObj::UpdateRender(class zEntSimpleObj * this /* r18 */) {
    // References
    // -> float dt;
    // -> class Renderable3DTransform g_identity;
}
// signature: @unnamed@WAD04_cpp@::CollisionReset(zEntSimpleObj *)
// Range: 0x802A4180 -> 0x802A41DC
static void @unnamed@WAD04_cpp@::CollisionReset() {
}
// Range: 0x802A41E0 -> 0x802A42F4
static void @unnamed@WAD04_cpp@::CollisionOn(class zEntSimpleObj * ent /* r31 */) {
    {
        // Range: 0x802A422C -> 0x802A42DC
        // Local variables
        unsigned int filter; // r30

        {
            // Range: 0x802A4274 -> 0x802A42A0
            // Local variables
            enum E_HAVOK_COLLIDE_FILTER_LAYER packedFilterLayer; // r0
        }
    }
}
// Range: 0x802A4300 -> 0x802A4388
static void @unnamed@WAD04_cpp@::CollisionOff(class zEntSimpleObj * ent /* r31 */) {
}
// Range: 0x802A4390 -> 0x802A455C
void zEntSimpleObj_MgrInit() {
    // Local variables
    class zEntSimpleObj_MgrInitCB init; // r1+0x8

    {
        // Range: 0x802A44F4 -> 0x802A4520
        // Local variables
        int i; // r27
    }

    // References
    // -> class zGlobals globals;
}
// signature: zEntSimpleObj_MgrCustomUpdate(zScene *, float)
// Range: 0x802A4560 -> 0x802A45F0
void zEntSimpleObj_MgrCustomUpdate() {
    // References
    // -> class zScene * updateCbScene;
    // -> float updateCbDt;
    // -> class zGlobals globals;
}
// Range: 0x802A45F0 -> 0x802A46D8
class Entity * Sext::xSimpleObjAsset::Create(class EntityHandleBase * handle /* r29 */, class xSimpleObjAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__13zEntSimpleObj;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zEntSimpleObj_Init(zEntSimpleObj *, Sext::xSimpleObjAsset *, bool, bool)
// Range: 0x802A46E0 -> 0x802A4F80
void zEntSimpleObj_Init(class zEntSimpleObj * ent /* r25 */, class xSimpleObjAsset * asset /* r26 */, bool candestroy /* r27 */) {
    // Local variables
    enum eShadow castShadow; // r0
    enum SimpObjOrientationType orientation; // r0

    {
        // Range: 0x802A4718 -> 0x802A49E8
        // Local variables
        class ModelInstanceAsset * tmpAsset; // r28
    }
    {
        // Range: 0x802A4E30 -> 0x802A4E80
        // Local variables
        class hkpPropertyValue val; // r1+0x20
    }
    {
        // Range: 0x802A4E88 -> 0x802A4ED4
        // Local variables
        unsigned long long destructibleUID; // r3:r4
    }

    // References
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// signature: zEntSimpleObj_Update(zEntSimpleObj *, xScene *, float)
// Range: 0x802A4F90 -> 0x802A5108
void zEntSimpleObj_Update(class zEntSimpleObj * ent /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x802A4FB8 -> 0x802A5028
        // Local variables
        float lastFrameSettleTimer; // f2
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zViewport viewports[4];
}
// Range: 0x802A5110 -> 0x802A63C4
void zEntSimpleObj_Setup(class zEntSimpleObj * ent /* r15 */) {
    // Local variables
    bool hasAnimList; // r0

    {
        // Range: 0x802A51C8 -> 0x802A5218
        // Local variables
        class Model & model; // r0

        {
            // Range: 0x802A51D0 -> 0x802A5204
            // Local variables
            int j; // r6

            {
                // Range: 0x802A51D0 -> 0x802A5204
                // Local variables
                class Geometry * geom; // r0
                class Renderable3D * renderable; // r0
            }
        }
    }
    {
        // Range: 0x802A5254 -> 0x802A5284
        // Local variables
        class zSoundSourcesPhysics * soundSourcePhys; // r0
    }

    // References
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> float dt;
    // -> class Renderable3DTransform g_identity;
    // -> unsigned int model_id;
}
// Range: 0x802A63E0 -> 0x802A648C
void zEntSimpleObj_SceneExit() {
    // References
    // -> class zGlobals globals;
}
// signature: zEntSimpleObj_Reset(zEntSimpleObj *, xScene *)
// Range: 0x802A6490 -> 0x802A66E4
void zEntSimpleObj_Reset(class zEntSimpleObj * ent /* r31 */) {
    // Local variables
    class xSimpleObjAsset * asset; // r3
    enum SimpObjOrientationType orientation; // r0
}
// Range: 0x802A66F0 -> 0x802A6750
void zEntSimpleObj_DebugReset(class zEntSimpleObj * ent /* r30 */, class xScene * sc /* r31 */) {
    // Local variables
    class xSimpleObjAsset * asset; // r4
}
// Range: 0x802A6750 -> 0x802A7484
void zEntSimpleObjEventCB(class xBase * from /* r28 */, class xBase * to /* r29 */, unsigned int toEvent /* r30 */, class EventAny * genericParams /* r31 */) {
    // Local variables
    class zEntSimpleObj * s; // reg65535

    {
        // Range: 0x802A6780 -> 0x802A6928
        // Local variables
        bool sentByDestructable; // r3

        {
            // Range: 0x802A678C -> 0x802A67CC
            // Local variables
            class EventActionDestructableFlag * params; // r0
        }
        {
            // Range: 0x802A67CC -> 0x802A67E4
            // Local variables
            class EventActionHit * params; // r0
        }
        {
            // Range: 0x802A67E4 -> 0x802A6928
            {
                // Range: 0x802A6808 -> 0x802A6928
                // Local variables
                class hkpRigidBody * physicsBody; // r27
                class hkVector4 linearVelocity; // r1+0x70
                class hkVector4 angularVelocity; // r1+0x80
                unsigned int filter; // r25
                enum MotionType motionType; // r26
            }
        }
    }
    {
        // Range: 0x802A6D0C -> 0x802A6DC4
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r25
        class EventActionDrivenBy * params; // r0
    }
    {
        // Range: 0x802A6E50 -> 0x802A6F00
        // Local variables
        class hkpPropertyValue val; // r1+0x40
    }
    {
        // Range: 0x802A6F34 -> 0x802A6FE4
        // Local variables
        class hkpPropertyValue val; // r1+0x38
    }
    {
        // Range: 0x802A7058 -> 0x802A70C4
        // Local variables
        class xVec3 savePos; // r1+0x60
    }
    {
        // Range: 0x802A7100 -> 0x802A7190
        // Local variables
        enum CameraRelative cr; // r26
        class Model & model; // r25
        class EventActionSetSkyDome * params; // r0

        {
            // Range: 0x802A7158 -> 0x802A7160
            // Local variables
            int j; // r27
        }
    }
    {
        // Range: 0x802A7194 -> 0x802A71C8
        // Local variables
        class EntityHandleBase * lkHandle; // r0

        {
            // Range: 0x802A71A0 -> 0x802A71C8
            // Local variables
            class LightKitEntity * lkEnt; // r0
        }
    }
    {
        // Range: 0x802A71D8 -> 0x802A7230
        // Local variables
        class EventActionOneFloat * params; // r0

        {
            // Range: 0x802A720C -> 0x802A722C
            // Local variables
            class FloatAndVoid dist; // r1+0x20
        }
    }
    {
        // Range: 0x802A7230 -> 0x802A7288
        // Local variables
        class hkVector4 newVelocity; // r1+0x50
        class EventActionHit * params; // r0
    }
    {
        // Range: 0x802A7404 -> 0x802A7468
        // Local variables
        class xOGModel * model; // r25
        class EventActionSetTextureBlend * params; // r0
    }

    // References
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class zGlobals globals;
}
// signature: zEntSimpleObj_SetOrientation(zEntSimpleObj *, Sext::xSimpleObjAsset::SimpObjOrientationType)
// Range: 0x802A7920 -> 0x802A7A28
void zEntSimpleObj_SetOrientation() {
    // Local variables
    enum CameraRelative cr; // r28
    class Model & model; // r0

    {
        // Range: 0x802A79B8 -> 0x802A7A04
        // Local variables
        int j; // r27
    }
}
// signature: zEntSimpleObj::DriveAttach(World::xOGEntity *, unsigned int)
// Range: 0x802A7A30 -> 0x802A7AD0
void zEntSimpleObj::DriveAttach() {
    // References
    // -> class xOGModelUpdater g_modelUpdateDefault;
}
