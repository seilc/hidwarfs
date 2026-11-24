/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPlatform.cpp
*/
static class effect * sRumbleBreakaway; // size: 0x4, address: 0x80823AAC
static unsigned int eventsFinishedTable[17]; // size: 0x44, address: 0x80782580
static float m; // size: 0x4, address: 0x807B4D0C
static class xVec3 pos; // size: 0xC, address: 0x80823AB0
// Range: 0x801F5B30 -> 0x801F5C08
class Entity * Sext::xPlatformAsset::Create(class EntityHandleBase * handle /* r29 */, class xPlatformAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__9zPlatform;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: ApplyBoneModificationAfterAnimatrices(xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x801F5C10 -> 0x801F5C28
void ApplyBoneModificationAfterAnimatrices() {
}
// Range: 0x801F5C30 -> 0x801F6350
void zPlatform_Init(class zPlatform * plat /* r26 */, class xEntAsset * asset /* r27 */) {
    // Local variables
    enum eShadow castShadow; // r0
    class xPlatformAsset * platAsset; // r0
    class xEntMotionAsset * ent_motion_asset; // r28
    class xEntMotionAsset * plat_asset; // r0
    unsigned char * endByte; // r0
    unsigned long long destructibleUID; // r3:r4

    {
        // Range: 0x801F5C64 -> 0x801F5F30
        // Local variables
        class ModelInstanceAsset * tmpAsset; // r28
    }

    // References
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x801F6350 -> 0x801F665C
void zPlatform::Reset(class zPlatform * this /* r31 */) {
    // Local variables
    class zPlatform * plat; // r0
    class xScene * sc; // r30
    int i; // r0

    {
        // Range: 0x801F645C -> 0x801F6540
        // Local variables
        class xMat3x3 normMat; // r1+0x8
        class xMat4x3 * pmat; // r0
    }
    {
        // Range: 0x801F6578 -> 0x801F6590
        // Local variables
        bool destructibleCollisionOffResetAllowed; // r0
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x801F69B0 -> 0x801F69C8
void zPlatform::CollisionFlagOn() {
}
// Range: 0x801F69D0 -> 0x801F6A20
void zPlatform::CollisionOff(class zPlatform * this /* r31 */) {
}
// signature: zPlatFM_Update(zPlatform *, xScene *, float)
// Range: 0x801F6A30 -> 0x801F89D8
static void zPlatFM_Update(class zPlatform * plat /* r27 */, float dt /* f27 */) {
    // Local variables
    class zPlatFMRunTime * fmrt; // r29
    class xMat3x3 platformRot; // r1+0xF8
    class xVec3 platformScale; // r1+0x58
    class xVec3 platformLoc; // r1+0x4C
    class xMat3x3 accumRot; // r1+0xC8
    class xVec3 accumPos; // r1+0x40
    class xVec3 accumScale; // r1+0x34
    int i; // r28
    bool finishedEvent; // r25

    {
        // Range: 0x801F70C4 -> 0x801F7DC8
        // Local variables
        float tm; // f1
        class xMat3x3 postR; // r1+0x68
        class xMat3x3 preR; // r1+0x98

        {
            // Range: 0x801F70C4 -> 0x801F70F4
            // Local variables
            class xVec3 undoScale; // r1+0x28
            class xMat4x3 * pAccum; // r0
            float etm; // f7
            float ds; // f0
            float vm; // f0
            float dtm; // f6
            float atm; // f5
            float ttm; // f3

            {
                // Range: 0x801F70C4 -> 0x801F70C4
                // Local variables
                float cfdec; // f5
                float cfcs; // f4
                float cfacc; // f1
                float p; // f3
            }
            {
                // Range: 0x801F70C4 -> 0x801F70C4
                // Local variables
                float cfdec; // f3
                float cfcs; // f5
                float cfacc; // f1
                float p; // f8
            }
            {
                // Range: 0x801F70C4 -> 0x801F70C4
                // Local variables
                float cfcs; // f4
                float cfacc; // f1
                float p; // f3
            }
            {
                // Range: 0x801F70C4 -> 0x801F70C4
                // Local variables
                float cfcs; // f0
                float cfacc; // f1
                float p; // f3
            }
            {
                // Range: 0x801F70C4 -> 0x801F70C4
                // Local variables
                float cfcs; // f4
                float cfacc; // f1
                float p; // f3
            }
            {
                // Range: 0x801F70C4 -> 0x801F70C4
                // Local variables
                float p; // f2
            }
            {
                // Range: 0x801F70C4 -> 0x801F70C4
                // Local variables
                float cfdec; // f2
                float cfcs; // f1
            }
            {
                // Range: 0x801F70C4 -> 0x801F70C8
                // Local variables
                float cfdec; // f1
                float cfcs; // f4
            }
            {
                // Range: 0x801F70F4 -> 0x801F70F4
                // Local variables
                class xQuat curQuat; // r1+0x18
            }
            {
                // Range: 0x801F70F4 -> 0x801F70F4
                // Local variables
                float scale_adjust; // f7
            }
            {
                // Range: 0x801F70F4 -> 0x801F70F4
                // Local variables
                float scale_adjust; // f5
            }
            {
                // Range: 0x801F70F4 -> 0x801F70F4
                // Local variables
                float scale_adjust; // f5
            }
            {
                // Range: 0x801F70F4 -> 0x801F70F4
                // Local variables
                float scale_adjust; // f5
            }
        }
        {
            // Range: 0x801F70F4 -> 0x801F7DC8
            {
                // Range: 0x801F7CB0 -> 0x801F7CE8
                // Local variables
                class xQuat curQuat; // r1+0x8
            }
        }
    }
    {
        // Range: 0x801F7E84 -> 0x801F7F34
        // Local variables
        float tm; // f0
    }
    {
        // Range: 0x801F7F48 -> 0x801F8998
        // Local variables
        float rdotu; // f10
        float ats; // f0
        float ups; // f0
        float rts; // f0
    }

    // References
    // -> static unsigned int eventsFinishedTable[17];
    // -> class xVec3 g_O3;
}
// Range: 0x801F89E0 -> 0x801F9A18
void zPlatform_Update(class xEnt * entplat /* r28 */, class xScene * sc /* r22 */, float dt /* f26 */) {
    // Local variables
    class zPlatform * plat; // reg65535
    unsigned short state; // r22
    int i; // r29
    int moving; // r22
    class xVec3 * opos; // r0
    class xVec3 * pos; // r0
    class xVec3 * orot; // r0
    class xVec3 * rot; // r0

    {
        // Range: 0x801F8A7C -> 0x801F8B5C
        // Local variables
        class Mech_Type * mkasst; // r23
    }
    {
        // Range: 0x801F8BAC -> 0x801F8CC8
        // Local variables
        class xEntDrive * drv; // r0

        {
            // Range: 0x801F8BAC -> 0x801F8CC8
            // Local variables
            float speed; // f1
            class xVec3 * axis; // r7
            class xEnt * p; // r6
            float s; // f0
        }
    }
    {
        // Range: 0x801F8CE4 -> 0x801F9200
        // Local variables
        class xEnt * drv; // r0

        {
            // Range: 0x801F8CE4 -> 0x801F8CF0
            // Local variables
            float dAngle; // f27
            float speed; // f6
            float cAngle; // f5
            float tangle; // f0
            class xEnt * p; // r0
        }
        {
            // Range: 0x801F8CF0 -> 0x801F8CF0
            // Local variables
            float itilt; // f0
            float dAngle; // f27
            float speed; // f0
            float cAngle; // f3
        }
        {
            // Range: 0x801F8CF0 -> 0x801F9200
            // Local variables
            float dAngle; // f27
            float speed; // f13
            float cAngle; // f25
            float tangle; // f0
            class xVec3 lpos; // r1+0x70
            class xEnt * p; // r0
            float s; // f28
        }
    }
    {
        // Range: 0x801F9238 -> 0x801F9278
        // Local variables
        class xMovePoint * src; // r22
    }
    {
        // Range: 0x801F9590 -> 0x801F99A4
        // Local variables
        class xQuat quat; // r1+0x60
        class xMat3x3 * tempQuatMat; // r4
        class xMat4x3 tempMat; // r1+0x80
    }

    // References
    // -> static float m;
    // -> class xGlobals * xglobals;
}
// signature: zPlatform_Move(xEnt *, xScene *, float, xEntFrame *)
// Range: 0x801F9A20 -> 0x801F9A78
void zPlatform_Move(class xEnt * entplat /* r31 */) {
}
// signature: zPlatform_Shake(zPlatform *, float, float, float)
// Range: 0x801F9A80 -> 0x801F9B58
void zPlatform_Shake(class zPlatform * plat /* r30 */, float ampl /* f30 */, float freq /* f31 */) {
    // Local variables
    class xFFXShakeState * ss; // r31

    {
        // Range: 0x801F9AB4 -> 0x801F9B30
        // Local variables
        class xFFX * sfkt; // r3
    }
}
// Range: 0x801F9B60 -> 0x801F9D10
static void zPlatformTranslate(class xEnt * xent /* r29 */, class xVec3 * dpos /* r30 */, class xMat4x3 * dmat /* r31 */) {
    // Local variables
    class zPlatform * plat; // r0

    {
        // Range: 0x801F9BA4 -> 0x801F9C44
        // Local variables
        class xVec3 scale; // r1+0x14
    }
    {
        // Range: 0x801F9C4C -> 0x801F9CE8
        // Local variables
        class xVec3 scale; // r1+0x8
    }
}
// signature: zPlatFM_EventSetup(zPlatform *, const float *, int, unsigned int)
// Range: 0x801F9D10 -> 0x801FA150
static void zPlatFM_EventSetup() {
    // Local variables
    class zPlatFMRunTime * fmrt; // r31
    float ds; // f3
    float ttm; // f4
    float atm; // f1
    float dtm; // f5

    {
        // Range: 0x801F9DE4 -> 0x801FA13C
        // Local variables
        class xMat3x3 normMat; // r1+0x8
    }
}
// Range: 0x801FA150 -> 0x801FDE24
void zPlatformEventCB(class xBase * from /* r1+0x10 */, class xBase * to /* r15 */, unsigned int toEvent /* r16 */, class EventAny * genericParams /* r17 */) {
    // Local variables
    class zPlatform * plat; // r0
    float tp[4]; // r1+0x1C0

    {
        // Range: 0x801FA178 -> 0x801FB510
        // Local variables
        bool sentByDestructable; // r3

        {
            // Range: 0x801FA19C -> 0x801FA1DC
            // Local variables
            class EventActionDestructableFlag * params; // r0
        }
        {
            // Range: 0x801FA1DC -> 0x801FA1F4
            // Local variables
            class EventActionHit * params; // r0
        }
        {
            // Range: 0x801FA1F4 -> 0x801FB510
            // Local variables
            enum eShadow castShadow; // r0

            {
                // Range: 0x801FA21C -> 0x801FB510
                // Local variables
                class hkpRigidBody * physicsBody; // r0
                class hkVector4 linearVelocity; // r1+0x1A0
                class hkVector4 angularVelocity; // r1+0x1B0
                unsigned int filter; // r21
                enum MotionType motionType; // r20
            }
        }
    }
    {
        // Range: 0x801FBC28 -> 0x801FBCFC
        // Local variables
        class xOGEntity * possibleDriver; // r0
        unsigned int flags; // r18
        class EventActionDrivenBy * params; // r0
    }
    {
        // Range: 0x801FBD48 -> 0x801FBD8C
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801FBD90 -> 0x801FBDD4
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801FBDD8 -> 0x801FBE1C
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801FBE20 -> 0x801FBE64
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801FBE68 -> 0x801FBEAC
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801FBEB0 -> 0x801FBEF4
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801FBEF8 -> 0x801FBF48
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801FBF4C -> 0x801FBF9C
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801FBFA0 -> 0x801FBFF0
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801FBFF4 -> 0x801FC128
        // Local variables
        class xVec3 location; // r1+0x18C
        class xBase * toParamWidgetPtr; // r5
        class EventActionTransToAbsoluteDirection * params; // r0
    }
    {
        // Range: 0x801FC12C -> 0x801FC17C
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801FC180 -> 0x801FC1D0
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801FC1D4 -> 0x801FC224
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801FC228 -> 0x801FC278
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801FC27C -> 0x801FC2CC
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801FC2D0 -> 0x801FC320
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801FC324 -> 0x801FC660
        // Local variables
        class EventActionRotSetOrientation * params; // r0

        {
            // Range: 0x801FC324 -> 0x801FC660
            // Local variables
            class xMat3x3 rotMat; // r1+0x228
            float roll; // f3
            float pitch; // f2
            float yaw; // f1
            class zPlatFMRunTime * fmrt; // r14
        }
    }
    {
        // Range: 0x801FC664 -> 0x801FC9D8
        // Local variables
        class EventActionRotGotoOrientation * params; // r0

        {
            // Range: 0x801FC664 -> 0x801FC9D8
            // Local variables
            class xMat3x3 rotMat; // r1+0x1F8
            float roll; // f3
            float pitch; // f2
            float yaw; // f1
            class zPlatFMRunTime * fmrt; // r14
        }
    }
    {
        // Range: 0x801FC9DC -> 0x801FCA70
        // Local variables
        class EventActionPlatformMotion * params; // r0

        {
            // Range: 0x801FC9DC -> 0x801FCA70
            // Local variables
            float delta_angle; // f1
            float current_angle; // f0
            float desired_angle; // f0
        }
    }
    {
        // Range: 0x801FCA74 -> 0x801FCB08
        // Local variables
        class EventActionPlatformMotion * params; // r0

        {
            // Range: 0x801FCA74 -> 0x801FCB08
            // Local variables
            float delta_angle; // f1
            float current_angle; // f0
            float desired_angle; // f0
        }
    }
    {
        // Range: 0x801FCB0C -> 0x801FCBA0
        // Local variables
        class EventActionPlatformMotion * params; // r0

        {
            // Range: 0x801FCB0C -> 0x801FCBA0
            // Local variables
            float delta_angle; // f1
            float current_angle; // f0
            float desired_angle; // f0
        }
    }
    {
        // Range: 0x801FCBA4 -> 0x801FCBF4
        // Local variables
        class EventActionScale * params; // r0
    }
    {
        // Range: 0x801FCBF8 -> 0x801FCC48
        // Local variables
        class EventActionScale * params; // r0
    }
    {
        // Range: 0x801FCC4C -> 0x801FCCA0
        // Local variables
        class EventActionScale * params; // r0
    }
    {
        // Range: 0x801FCCA4 -> 0x801FCCF4
        // Local variables
        class EventActionScale * params; // r0
    }
    {
        // Range: 0x801FCD54 -> 0x801FCDB8
        // Local variables
        class xVec3 savePos; // r1+0x180
    }
    {
        // Range: 0x801FD224 -> 0x801FD3F0
        // Local variables
        class EventActionJawboneAnimateOnPlatform * params; // r0

        {
            // Range: 0x801FD230 -> 0x801FD368
            // Local variables
            unsigned long long modelUID; // r4:r5
            int orientation; // r16

            {
                // Range: 0x801FD330 -> 0x801FD368
                // Local variables
                class zFXSpawn * fxSpawnAsset; // r0
            }
        }
    }
    {
        // Range: 0x801FD420 -> 0x801FD494
        // Local variables
        class EventActionSetSpeed * params; // r0
    }
    {
        // Range: 0x801FD498 -> 0x801FD528
        // Local variables
        class EventActionChangeSpeed * params; // r0
    }
    {
        // Range: 0x801FD52C -> 0x801FD5BC
        // Local variables
        class EventActionChangeSpeed * params; // r0
    }
    {
        // Range: 0x801FD5C0 -> 0x801FD628
        // Local variables
        class EventActionAccelerate * params; // r0
    }
    {
        // Range: 0x801FD62C -> 0x801FD6E4
        // Local variables
        enum CameraRelative cr; // r18
        class Model & model; // r16
        class EventActionSetSkyDome * params; // r0

        {
            // Range: 0x801FD67C -> 0x801FD67C
            // Local variables
            int j; // r17
        }
    }
    {
        // Range: 0x801FD6E8 -> 0x801FD784
        // Local variables
        class EventActionMovePoint * params; // r0
    }
    {
        // Range: 0x801FD788 -> 0x801FD7E8
        // Local variables
        class EventActionOneFloat * params; // r0

        {
            // Range: 0x801FD7C8 -> 0x801FD7E8
            // Local variables
            class FloatAndVoid dist; // r1+0x1C
        }
    }
    {
        // Range: 0x801FD7EC -> 0x801FD810
        // Local variables
        class EntityHandleBase * lkHandle; // r0
        class EventActionLightKit * params; // r0

        {
            // Range: 0x801FD7F8 -> 0x801FD810
            // Local variables
            class LightKitEntity * lkEnt; // r0
        }
    }
    {
        // Range: 0x801FD9C8 -> 0x801FDA44
        // Local variables
        class EventActionSetShadowCastDepth * params; // r0
    }
    {
        // Range: 0x801FDAF8 -> 0x801FDB1C
        // Local variables
        class EventActionOrientToTarget * params; // r0
    }
    {
        // Range: 0x801FDB20 -> 0x801FDE00
        // Local variables
        class xOGModel * model; // r0
        class EventActionSetTextureBlend * params; // r0
    }

    // References
    // -> static class xVec3 pos;
    // -> class xQuat g_IQ;
    // -> class Scene * primaryScene;
    // -> class zGlobals globals;
    // -> class Renderable3DTransform g_identity;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
