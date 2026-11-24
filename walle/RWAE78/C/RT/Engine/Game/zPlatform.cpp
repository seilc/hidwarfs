/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPlatform.cpp
*/
static class xOGSchema PlatformSchema; // size: 0x18, address: 0x807984D8
static class SchemaRegistrator PlatformSchemaReg; // size: 0x8, address: 0x807984F0
static class effect * sRumbleBreakaway; // size: 0x4, address: 0x807984F8
static unsigned int eventsFinishedTable[17]; // size: 0x44, address: 0x806CF8B0
// signature: genericPlatRender(xEnt *)
// Range: 0x801671E0 -> 0x801671E4
void genericPlatRender() {
}
// signature: zPlatform_Init(void *, void *)
// Range: 0x801671F0 -> 0x80167208
void zPlatform_Init() {
    // References
    // -> struct {} __vt__9zPlatform;
}
// Range: 0x80167210 -> 0x80167418
void zPlatform_Init(class zPlatform * plat /* r29 */, class xEntAsset * asset /* r30 */) {
    // Local variables
    class xPlatformAsset * platAsset; // r0
    class xEntMotionAsset * ent_motion_asset; // r31
    class xEntMotionAsset * plat_asset; // r0
    class xOGEntityModelContext context; // r1+0x8
    class xBound * pbound; // r0
    unsigned char * endByte; // r0
    unsigned long long destructibleUID; // r3:r4
}
// Range: 0x80167420 -> 0x80167AB0
void zPlatform_Reset(class zPlatform * plat /* r30 */, class xScene * sc /* r31 */) {
    // Local variables
    int i; // r0

    {
        // Range: 0x8016746C -> 0x80167500
        // Local variables
        class xOGEntityModelContext context; // r1+0x8
    }
    {
        // Range: 0x801675DC -> 0x801679C8
        // Local variables
        class xMat3x3 normMat; // r1+0x10
    }
}
// signature: zPlatFM_Update(zPlatform *, xScene *, float)
// Range: 0x80167AB0 -> 0x80169B64
static void zPlatFM_Update(class zPlatform * plat /* r24 */, float dt /* f26 */) {
    // Local variables
    class zPlatFMRunTime * fmrt; // r27
    class xMat4x3 * pmat; // r26
    class xMat3x3 platformRot; // r1+0xF8
    class xVec3 platformScale; // r1+0x58
    class xVec3 platformLoc; // r1+0x4C
    class xMat3x3 accumRot; // r1+0xC8
    class xVec3 accumPos; // r1+0x40
    class xVec3 accumScale; // r1+0x34
    int i; // r25
    bool finishedEvent; // r25

    {
        // Range: 0x80168188 -> 0x80168F14
        // Local variables
        float tm; // f27
        class xMat3x3 postR; // r1+0x68
        class xMat3x3 preR; // r1+0x98

        {
            // Range: 0x80168188 -> 0x801681B8
            // Local variables
            class xVec3 undoScale; // r1+0x28
            class xMat4x3 * pAccum; // r0
            class xMat4x3 * pmat; // r0
            float etm; // f3
            float ds; // f0
            float vm; // f0
            float dtm; // f6
            float atm; // f5
            float ttm; // f2

            {
                // Range: 0x80168188 -> 0x80168188
                // Local variables
                float cfdec; // f6
                float cfcs; // f5
                float cfacc; // f1
                float p; // f4
            }
            {
                // Range: 0x80168188 -> 0x80168188
                // Local variables
                float cfdec; // f3
                float cfcs; // f5
                float cfacc; // f1
                float p; // f7
            }
            {
                // Range: 0x80168188 -> 0x80168188
                // Local variables
                float cfcs; // f5
                float cfacc; // f1
                float p; // f4
            }
            {
                // Range: 0x80168188 -> 0x80168188
                // Local variables
                float cfcs; // f0
                float cfacc; // f1
                float p; // f4
            }
            {
                // Range: 0x80168188 -> 0x80168188
                // Local variables
                float cfcs; // f5
                float cfacc; // f1
                float p; // f4
            }
            {
                // Range: 0x80168188 -> 0x80168188
                // Local variables
                float p; // f2
            }
            {
                // Range: 0x80168188 -> 0x80168188
                // Local variables
                float cfdec; // f2
                float cfcs; // f1
            }
            {
                // Range: 0x80168188 -> 0x8016818C
                // Local variables
                float cfdec; // f1
                float cfcs; // f3
            }
            {
                // Range: 0x801681B8 -> 0x801681B8
                // Local variables
                class xQuat curQuat; // r1+0x18
            }
            {
                // Range: 0x801681B8 -> 0x801681B8
                // Local variables
                float scale_adjust; // f6
            }
            {
                // Range: 0x801681B8 -> 0x801681B8
                // Local variables
                float scale_adjust; // f4
            }
            {
                // Range: 0x801681B8 -> 0x801681B8
                // Local variables
                float scale_adjust; // f4
            }
            {
                // Range: 0x801681B8 -> 0x801681B8
                // Local variables
                float scale_adjust; // f4
            }
        }
        {
            // Range: 0x801681B8 -> 0x80168F14
            // Local variables
            class xMat4x3 * pmat; // r0

            {
                // Range: 0x80168DFC -> 0x80168E34
                // Local variables
                class xQuat curQuat; // r1+0x8
            }
        }
    }
    {
        // Range: 0x80168FD0 -> 0x80169080
        // Local variables
        float tm; // f0
    }
    {
        // Range: 0x80169094 -> 0x80169B14
        // Local variables
        float rdotu; // f7
        float ats; // f0
        float ups; // f0
        float rts; // f0
    }

    // References
    // -> static unsigned int eventsFinishedTable[17];
    // -> class xVec3 g_O3;
}
// Range: 0x80169B70 -> 0x8016A958
void zPlatform_Update(class xEnt * entplat /* r29 */, class xScene * sc /* r26 */, float dt /* f28 */) {
    // Local variables
    class zPlatform * plat; // reg65535
    unsigned short state; // r27
    int i; // r30
    int moving; // r26
    class xVec3 * opos; // r0
    class xVec3 * pos; // r0
    class xVec3 * orot; // r0
    class xVec3 * rot; // r0

    {
        // Range: 0x80169C20 -> 0x80169D00
        // Local variables
        class xEntMotionMechData * mkasst; // r0
    }
    {
        // Range: 0x80169D10 -> 0x80169E2C
        // Local variables
        class xEntDrive * drv; // r0

        {
            // Range: 0x80169D10 -> 0x80169E2C
            // Local variables
            float speed; // f1
            class xVec3 * axis; // r6
            class xEnt * p; // r7
            float s; // f0
        }
    }
    {
        // Range: 0x80169E48 -> 0x8016A24C
        // Local variables
        class xEntDrive * drv; // r0

        {
            // Range: 0x80169E48 -> 0x80169E4C
            // Local variables
            float dtilt; // f26
            float itilt; // f1
            float ctilt; // f3

            {
                // Range: 0x80169E4C -> 0x80169E4C
                // Local variables
                class xVec3 * scale; // r0
                class xVec3 framerot; // r1+0x58
            }
        }
        {
            // Range: 0x80169E4C -> 0x8016A24C
            // Local variables
            class xVec3 * scale; // r0
            class xVec3 framerot; // r1+0x40
            float tangle; // f2
            float eangle; // f2
            float mangle; // f0
            float dangle; // f26
            float cangle; // f1
            class xVec3 lpos; // r1+0x4C
            class xEnt * p; // r3
            float s; // f0
        }
    }
    {
        // Range: 0x8016A284 -> 0x8016A2C4
        // Local variables
        class xMovePoint * src; // r26
    }
    {
        // Range: 0x8016A4C0 -> 0x8016A8F4
        // Local variables
        class xQuat quat; // r1+0x30
        class xMat3x3 * tempQuatMat; // r30
        class xMat4x3 tempMat; // r1+0x68
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zPlatform_Move(xEnt *, xScene *, float, xEntFrame *)
// Range: 0x8016A960 -> 0x8016A9B8
void zPlatform_Move(class xEnt * entplat /* r30 */, class xScene * s /* r31 */, float dt /* f31 */) {
    // Local variables
    class zPlatform * plat; // r0
}
// signature: zPlatform_Shake(zPlatform *, float, float, float)
// Range: 0x8016A9C0 -> 0x8016AA98
void zPlatform_Shake(class zPlatform * plat /* r30 */, float ampl /* f30 */, float freq /* f31 */) {
    // Local variables
    class xFFXShakeState * ss; // r31

    {
        // Range: 0x8016A9F4 -> 0x8016AA70
        // Local variables
        class xFFX * sfkt; // r3
    }
}
// Range: 0x8016AAA0 -> 0x8016AC54
static void zPlatformTranslate(class xEnt * xent /* r29 */, class xVec3 * dpos /* r30 */, class xMat4x3 * dmat /* r31 */) {
    // Local variables
    class zPlatform * plat; // r0

    {
        // Range: 0x8016AAE4 -> 0x8016AB88
        // Local variables
        class xVec3 scale; // r1+0x14
        class xMat4x3 * m; // r31
    }
    {
        // Range: 0x8016AB90 -> 0x8016AC2C
        // Local variables
        class xVec3 scale; // r1+0x8
    }
}
// signature: zPlatFM_EventSetup(zPlatform *, const float *, int, unsigned int)
// Range: 0x8016AC60 -> 0x8016B0F0
static void zPlatFM_EventSetup() {
    // Local variables
    class zPlatFMRunTime * fmrt; // r30
    float ds; // f3
    float ttm; // f4
    float atm; // f1
    float dtm; // f5

    {
        // Range: 0x8016AD50 -> 0x8016B0C0
        // Local variables
        class xMat3x3 normMat; // r1+0x8
    }
}
// signature: zPlatformEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8016B0F0 -> 0x8016D0B8
void zPlatformEventCB(class xBase * to /* r29 */, unsigned int toEvent /* r30 */, class EventAny * genericParams /* r31 */) {
    // Local variables
    class zPlatform * plat; // reg65535
    float tp[4]; // r1+0x48
    void * lightkitMem; // r0
    class LightKitAsset * lightkitAsset; // r28

    {
        // Range: 0x8016B138 -> 0x8016B224
        // Local variables
        bool sentByDestructable; // r3

        {
            // Range: 0x8016B140 -> 0x8016B180
            // Local variables
            class EventActionDestructableFlag * params; // r0
        }
        {
            // Range: 0x8016B180 -> 0x8016B198
            // Local variables
            class EventActionHit * params; // r0
        }
    }
    {
        // Range: 0x8016B8AC -> 0x8016B8F0
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8016B8F4 -> 0x8016B938
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8016B93C -> 0x8016B980
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8016B984 -> 0x8016B9C8
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8016B9CC -> 0x8016BA10
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8016BA14 -> 0x8016BA58
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8016BA5C -> 0x8016BAAC
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8016BAB0 -> 0x8016BB00
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8016BB04 -> 0x8016BB54
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8016BB58 -> 0x8016BCC8
        // Local variables
        class xVec3 location; // r1+0x3C
        class xBase * toParamWidgetPtr; // r3
        class EventActionTransToAbsoluteDirection * params; // r0
    }
    {
        // Range: 0x8016BCCC -> 0x8016BD1C
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8016BD20 -> 0x8016BD70
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8016BD74 -> 0x8016BDC4
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8016BDC8 -> 0x8016BE18
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8016BE1C -> 0x8016BE6C
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8016BE70 -> 0x8016BEC0
        // Local variables
        class EventActionPlatformMotion * params; // r0
    }
    {
        // Range: 0x8016BEC4 -> 0x8016C218
        // Local variables
        class EventActionRotSetOrientation * params; // r0

        {
            // Range: 0x8016BEC4 -> 0x8016C218
            // Local variables
            class xMat3x3 rotMat; // r1+0x58
            float roll; // f3
            float pitch; // f2
            float yaw; // f1
            class zPlatFMRunTime * fmrt; // r31
        }
    }
    {
        // Range: 0x8016C21C -> 0x8016C264
        // Local variables
        class EventActionRotGotoOrientation * params; // r0
    }
    {
        // Range: 0x8016C268 -> 0x8016C2FC
        // Local variables
        class EventActionPlatformMotion * params; // r0

        {
            // Range: 0x8016C268 -> 0x8016C2FC
            // Local variables
            float delta_angle; // f1
            float current_angle; // f0
            float desired_angle; // f0
        }
    }
    {
        // Range: 0x8016C300 -> 0x8016C394
        // Local variables
        class EventActionPlatformMotion * params; // r0

        {
            // Range: 0x8016C300 -> 0x8016C394
            // Local variables
            float delta_angle; // f1
            float current_angle; // f0
            float desired_angle; // f0
        }
    }
    {
        // Range: 0x8016C398 -> 0x8016C42C
        // Local variables
        class EventActionPlatformMotion * params; // r0

        {
            // Range: 0x8016C398 -> 0x8016C42C
            // Local variables
            float delta_angle; // f1
            float current_angle; // f0
            float desired_angle; // f0
        }
    }
    {
        // Range: 0x8016C430 -> 0x8016C480
        // Local variables
        class EventActionScale * params; // r0
    }
    {
        // Range: 0x8016C484 -> 0x8016C4D4
        // Local variables
        class EventActionScale * params; // r0
    }
    {
        // Range: 0x8016C4D8 -> 0x8016C52C
        // Local variables
        class EventActionScale * params; // r0
    }
    {
        // Range: 0x8016C530 -> 0x8016C580
        // Local variables
        class EventActionScale * params; // r0
    }
    {
        // Range: 0x8016C5EC -> 0x8016C65C
        // Local variables
        class xVec3 savePos; // r1+0x30
    }
    {
        // Range: 0x8016C8BC -> 0x8016C930
        // Local variables
        class EventActionChangeSpeed * params; // r0
    }
    {
        // Range: 0x8016C934 -> 0x8016C9A8
        // Local variables
        class EventActionChangeSpeed * params; // r0
    }
    {
        // Range: 0x8016C9AC -> 0x8016CA1C
        // Local variables
        class EventActionAccelerate * params; // r0
    }
    {
        // Range: 0x8016CA20 -> 0x8016CA38
        // Local variables
        class EventActionSetSkyDome * params; // r0
    }
    {
        // Range: 0x8016CA3C -> 0x8016CB14
        // Local variables
        class xBase * toParamWidgetPtr; // r9
        class EventActionMount * params; // r0

        {
            // Range: 0x8016CAE0 -> 0x8016CB14
            // Local variables
            float mt; // f1
        }
    }
    {
        // Range: 0x8016CB18 -> 0x8016CBE8
        // Local variables
        class xBase * toParamWidgetPtr; // r9
        class EventActionMount * params; // r0

        {
            // Range: 0x8016CBB8 -> 0x8016CBE8
            // Local variables
            float mt; // f1
        }
    }
    {
        // Range: 0x8016CBF8 -> 0x8016CC4C
        // Local variables
        class EventActionOneFloat * params; // r0

        {
            // Range: 0x8016CC2C -> 0x8016CC4C
            // Local variables
            class FloatAndVoid dist; // r1+0x8
        }
    }
    {
        // Range: 0x8016CC50 -> 0x8016CCF0
        // Local variables
        class EventActionShrapnel * params; // r0
    }
    {
        // Range: 0x8016CF98 -> 0x8016D010
        // Local variables
        class EventActionSetShadowCastDepth * params; // r0
    }

    // References
    // -> struct {} __vt__Q28Graphics8LightKit;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> class zGlobals globals;
}
