/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPlatform.cpp
*/
static class effect * sRumbleBreakaway; // size: 0x4, address: 0x80754048
static unsigned int eventsFinishedTable[17]; // size: 0x44, address: 0x8068D454
float m; // size: 0x4, address: 0x806C1C10
class xVec3 pos; // size: 0xC, address: 0x8075AF8C
// signature: zPlatform_BeforeAnimEndCB(xAnimPlay *, xAnimState *, void *)
// Range: 0x8010FD30 -> 0x8010FD4C
void zPlatform_BeforeAnimEndCB() {
}
// Range: 0x8010FD50 -> 0x8010FDCC
class Entity * Sext::xPlatformAsset::Create(class EntityHandleBase * handle /* r29 */, class xPlatformAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__9zPlatform;
}
// signature: ApplyBoneModificationAfterAnimatrices(xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x8010FE10 -> 0x8010FE28
void ApplyBoneModificationAfterAnimatrices() {
}
// Range: 0x8010FE30 -> 0x80110084
void zPlatform_Init(class zPlatform * plat /* r29 */, class xEntAsset * asset /* r30 */) {
    // Local variables
    enum eShadow castShadow; // r0
    class xPlatformAsset * platAsset; // r0
    class xEntMotionAsset * ent_motion_asset; // r31
    class xEntMotionAsset * plat_asset; // r0
    unsigned char * endByte; // r0
    unsigned long long destructibleUID; // r3:r4

    {
        // Range: 0x8010FE64 -> 0x8010FE9C
        // Local variables
        class ModelInstanceAsset * tmpAsset; // r0
    }

    // References
    // -> class zPlayerInventory inventory;
}
// Range: 0x80110090 -> 0x8011019C
void zPlatform_Setup(class zPlatform * plat /* r30 */, class xScene * sc /* r31 */) {
    {
        // Range: 0x80110164 -> 0x80110184
        // Local variables
        class FloatAndVoid dist; // r1+0x8
    }

    // References
    // -> class zGlobals globals;
    // -> static class effect * sRumbleBreakaway;
}
// Range: 0x801101A0 -> 0x801104E4
void zPlatform::Reset(class zPlatform * this /* r31 */) {
    // Local variables
    class zPlatform * plat; // r0
    class xScene * sc; // r30
    int i; // r5

    {
        // Range: 0x801102C8 -> 0x801103A4
        // Local variables
        class xMat3x3 normMat; // r1+0x8
    }

    // References
    // -> class xQuat g_IQ;
    // -> class xMat4x3 g_I3;
    // -> class zPlayerInventory inventory;
    // -> class zGlobals globals;
}
// Range: 0x801108E0 -> 0x80110964
void zPlatform::CollisionOn(class zPlatform * this /* r31 */) {
}
// Range: 0x80110970 -> 0x801109C0
void zPlatform::CollisionOff(class zPlatform * this /* r31 */) {
}
// Range: 0x801109C0 -> 0x80110A4C
void zPlatform_SceneExit() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80110C70 -> 0x80110D0C
static void @unnamed@WAD03_cpp@::PlatformApplyTilt(float dtilt /* f31 */, class xMat3x3 * mat /* r29 */, class xVec3 * scale /* r30 */, class xRot * rot /* r31 */) {
    // Local variables
    class xVec3 framerot; // r1+0x8
}
// signature: zPlatform_Update(xEnt *, xScene *, float)
// Range: 0x80110D10 -> 0x80112274
void zPlatform_Update(class xEnt * entplat /* r28 */, float dt /* f27 */) {
    // Local variables
    class zPlatform * plat; // reg65535
    unsigned short state; // r20
    int i; // r29
    int moving; // r20
    class xVec3 * opos; // r0
    class xVec3 * pos; // r0
    class xVec3 * orot; // r0
    class xVec3 * rot; // r0

    {
        // Range: 0x80110D94 -> 0x80110E6C
        // Local variables
        class Mech_Type * mkasst; // r21
    }
    {
        // Range: 0x80110EB8 -> 0x80110FBC
        {
            // Range: 0x80110EB8 -> 0x80110FBC
            // Local variables
            float speed; // f1
            class xVec3 * axis; // r4
            class xEnt * p; // r20
            float s; // f0
        }
    }
    {
        // Range: 0x80110FCC -> 0x801112CC
        // Local variables
        class xEnt * drv; // r5

        {
            // Range: 0x80111010 -> 0x8011112C
            // Local variables
            float dAngle; // f1
            float speed; // f7
            float cAngle; // f6
            float tangle; // f2
        }
        {
            // Range: 0x80111130 -> 0x801111E4
            // Local variables
            float itilt; // f0
            float dAngle; // f1
            float speed; // f1
            float cAngle; // f3
        }
        {
            // Range: 0x801111E4 -> 0x801112CC
            // Local variables
            float dAngle; // f30
            float speed; // f1
            float cAngle; // f29
            float tangle; // f2
            class xVec3 lpos; // r1+0xA0
            float s; // f28
        }
    }
    {
        // Range: 0x80111E70 -> 0x80111EB0
        // Local variables
        class xMovePoint * src; // r20
    }
    {
        // Range: 0x80112128 -> 0x801121E0
        // Local variables
        class xQuat quat; // r1+0x90
        class xMat3x3 * tempQuatMat; // r20
        class xMat4x3 tempMat; // r1+0x170
    }

    // References
    // -> static unsigned int eventsFinishedTable[17];
    // -> float m;
    // -> class xGlobals * xglobals;
}
// Range: 0x80112280 -> 0x8011236C
void zPlatform::DriveAttach(class zPlatform * this /* r28 */, class xOGEntity * passenger /* r29 */, unsigned int flags /* r30 */, int newBone /* r31 */) {
    // Local variables
    class xMat4x3 D; // r1+0x88
    class xVec3 euler; // r1+0xC
    class xMat3x3 a_descaled; // r1+0x18
    float dummy; // r1+0x8

    {
        // Range: 0x801122C8 -> 0x801122EC
        // Local variables
        class xMat4x3 Di; // r1+0x48
    }
}
// signature: zPlatform::DriveGetCurMat(int)
// Range: 0x80112370 -> 0x801123BC
class xMat4x3 * zPlatform::DriveGetCurMat(class zPlatform * this /* r31 */) {
}
// signature: zPlatform_Move(xEnt *, xScene *, float, xEntFrame *, xMat4x3 *)
// Range: 0x801123C0 -> 0x80112418
void zPlatform_Move(class xEnt * entplat /* r31 */) {
}
// signature: zPlatform_Shake(zPlatform *, float, float, float)
// Range: 0x80112420 -> 0x801124F8
void zPlatform_Shake(class zPlatform * plat /* r30 */, float ampl /* f30 */, float freq /* f31 */) {
    // Local variables
    class xFFXShakeState * ss; // r31

    {
        // Range: 0x80112454 -> 0x801124D0
        // Local variables
        class xFFX * sfkt; // r3
    }
}
// Range: 0x80112500 -> 0x80112604
static void zPlatformTranslate(class xEnt * xent /* r29 */, class xVec3 * dpos /* r30 */, class xMat4x3 * dmat /* r31 */) {
    // Local variables
    class zPlatform * plat; // r0

    {
        // Range: 0x80112540 -> 0x80112588
        // Local variables
        class xVec3 scale; // r1+0x14
        class xMat4x3 * m; // r31
    }
    {
        // Range: 0x80112594 -> 0x801125E0
        // Local variables
        class xVec3 scale; // r1+0x8
    }
}
// signature: zPlatFM_EventSetup(zPlatform *, const float *, int, unsigned int)
// Range: 0x80112610 -> 0x80112758
static void zPlatFM_EventSetup() {
    // Local variables
    class zPlatFMRunTime * fmrt; // r31
    float ds; // f3
    float ttm; // f4
    float atm; // f1
    float dtm; // f5

    {
        // Range: 0x801126E4 -> 0x80112744
        // Local variables
        class xMat3x3 normMat; // r1+0x8
    }
}
// Range: 0x80112760 -> 0x80114394
void zPlatformEventCB(class xBase * from /* r28 */, class xBase * to /* r29 */, unsigned int toEvent /* r30 */, class EventAny * genericParams /* r31 */) {
    // Local variables
    class zPlatform * plat; // reg65535
    float tp[4]; // r1+0x70

    {
        // Range: 0x80112798 -> 0x80112924
        // Local variables
        bool sentByDestructable; // r3

        {
            // Range: 0x801127A4 -> 0x801127E4
            // Local variables
            class EventActionDestructableFlag * params; // r0
        }
        {
            // Range: 0x801127E4 -> 0x801127FC
            // Local variables
            class EventActionHit * params; // r0
        }
        {
            // Range: 0x801127FC -> 0x80112924
            {
                // Range: 0x80112820 -> 0x80112924
                // Local variables
                class hkpRigidBody * physicsBody; // r0
                class hkVector4 linearVelocity; // r1+0x50
                class hkVector4 angularVelocity; // r1+0x60
                unsigned int filter; // r25
                enum MotionType motionType; // r26
            }
        }
    }
    {
        // Range: 0x8011303C -> 0x801131AC
        // Local variables
        class xOGEntity * possibleDriver; // r5
        unsigned int flags; // r25
        class EventActionDrivenBy * params; // reg65535
    }
    {
        // Range: 0x801131F8 -> 0x8011323C
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x80113240 -> 0x80113284
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x80113288 -> 0x801132CC
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801132D0 -> 0x80113314
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x80113318 -> 0x8011335C
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x80113360 -> 0x801133A4
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801133A8 -> 0x801133F8
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801133FC -> 0x8011344C
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x80113450 -> 0x801134A0
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801134A4 -> 0x80113638
        // Local variables
        class xVec3 location; // r1+0x38
        class xBase * toParamWidgetPtr; // r5
        class EventActionTransToAbsoluteDirection * params; // r0
    }
    {
        // Range: 0x8011363C -> 0x8011368C
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x80113690 -> 0x801136E0
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801136E4 -> 0x80113734
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x80113738 -> 0x80113788
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8011378C -> 0x801137DC
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x801137E0 -> 0x80113830
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x80113834 -> 0x80113894
        // Local variables
        class EventActionRotSetOrientation * params; // r0

        {
            // Range: 0x80113834 -> 0x80113894
            // Local variables
            class xMat3x3 rotMat; // r1+0xB0
            float roll; // f3
            float pitch; // f2
            float yaw; // f1
            class zPlatFMRunTime * fmrt; // r25
        }
    }
    {
        // Range: 0x80113898 -> 0x80113930
        // Local variables
        class EventActionRotGotoOrientation * params; // r0

        {
            // Range: 0x80113898 -> 0x80113930
            // Local variables
            class xMat3x3 rotMat; // r1+0x80
            float roll; // f3
            float pitch; // f2
            float yaw; // f1
            class zPlatFMRunTime * fmrt; // r25
        }
    }
    {
        // Range: 0x80113934 -> 0x801139C0
        // Local variables
        class EventActionPlatformMotion * params; // r0

        {
            // Range: 0x80113934 -> 0x801139C0
            // Local variables
            float delta_angle; // f1
            float current_angle; // f0
            float desired_angle; // f0
        }
    }
    {
        // Range: 0x801139C4 -> 0x80113A50
        // Local variables
        class EventActionPlatformMotion * params; // r0

        {
            // Range: 0x801139C4 -> 0x80113A50
            // Local variables
            float delta_angle; // f1
            float current_angle; // f0
            float desired_angle; // f0
        }
    }
    {
        // Range: 0x80113A54 -> 0x80113AE0
        // Local variables
        class EventActionPlatformMotion * params; // r0

        {
            // Range: 0x80113A54 -> 0x80113AE0
            // Local variables
            float delta_angle; // f1
            float current_angle; // f0
            float desired_angle; // f0
        }
    }
    {
        // Range: 0x80113AE4 -> 0x80113B34
        // Local variables
        class EventActionScale * params; // r0
    }
    {
        // Range: 0x80113B38 -> 0x80113B88
        // Local variables
        class EventActionScale * params; // r0
    }
    {
        // Range: 0x80113B8C -> 0x80113BE0
        // Local variables
        class EventActionScale * params; // r0
    }
    {
        // Range: 0x80113BE4 -> 0x80113C34
        // Local variables
        class EventActionScale * params; // r0
    }
    {
        // Range: 0x80113C94 -> 0x80113CEC
        // Local variables
        class xVec3 savePos; // r1+0x2C
    }
    {
        // Range: 0x80113E5C -> 0x80113ED8
        // Local variables
        class EventActionJawboneAnimateOnPlatform * params; // r0
    }
    {
        // Range: 0x80113F38 -> 0x80113F88
        // Local variables
        class EventActionAccelerate * params; // r0
    }
    {
        // Range: 0x80113F90 -> 0x80114038
        // Local variables
        enum CameraRelative cr; // r25
        class EventActionSetSkyDome * params; // r0

        {
            // Range: 0x80113FD8 -> 0x80114030
            // Local variables
            int j; // r26
        }
    }
    {
        // Range: 0x8011403C -> 0x801140B4
        // Local variables
        class EventActionMovePoint * params; // r0
    }
    {
        // Range: 0x801140C4 -> 0x80114118
        // Local variables
        class EventActionOneFloat * params; // r0

        {
            // Range: 0x801140F8 -> 0x80114118
            // Local variables
            class FloatAndVoid dist; // r1+0x10
        }
    }
    {
        // Range: 0x8011411C -> 0x80114140
        // Local variables
        class EntityHandleBase * lkHandle; // r0
    }
    {
        // Range: 0x801141D0 -> 0x80114244
        // Local variables
        class EventActionSetShadowCastDepth * params; // r0
    }
    {
        // Range: 0x801142F4 -> 0x80114330
        // Local variables
        class EventActionSetTextureBlend * params; // r0
    }
    {
        // Range: 0x80114334 -> 0x80114350
        // Local variables
        class EventActionSetColorMultiplier * params; // r0
    }

    // References
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xVec3 pos;
    // -> class zPlayerInventory inventory;
    // -> class zGlobals globals;
}
