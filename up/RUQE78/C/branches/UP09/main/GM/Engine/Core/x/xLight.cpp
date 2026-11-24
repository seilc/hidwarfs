/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xLight.cpp
*/
static unsigned int sNumLightAssets; // size: 0x4, address: 0x8080848C
static class xLightData * * sLight; // size: 0x4, address: 0x80808490
static class LightPointSpot * sNGLights; // size: 0x4, address: 0x80808494
static class bit_array_alloc sNGLight_Initted; // size: 0xC, address: 0x808084A4
static unsigned int sLightTotal; // size: 0x4, address: 0x808084B0
static class xLightData sTempLights[16]; // size: 0x940, address: 0x808084B8
static unsigned int sTempLightTotal; // size: 0x4, address: 0x80808DF8
// Range: 0x80062270 -> 0x800627C0
void xLightSceneSetup() {
    // Local variables
    unsigned int numToAllocate; // r28

    // References
    // -> static unsigned int sLightTotal;
    // -> class Scene * primaryScene;
    // -> static class xLightData sTempLights[16];
    // -> static class bit_array_alloc sNGLight_Initted;
    // -> static class LightPointSpot * sNGLights;
    // -> struct {} __vt__Q28Graphics14LightPointSpot;
    // -> static class xLightData * * sLight;
    // -> static class xMemWatermark memWatermark;
    // -> static unsigned int sNumLightAssets;
}
// Range: 0x800627D0 -> 0x80062938
void xLightSceneExit() {
    // References
    // -> static unsigned int sTempLightTotal;
    // -> static unsigned int sNumLightAssets;
    // -> static class bit_array_alloc sNGLight_Initted;
    // -> static class LightPointSpot * sNGLights;
    // -> static class xLightData * * sLight;
    // -> static unsigned int sLightTotal;
    // -> class Scene * primaryScene;
}
// Range: 0x80062940 -> 0x80062BE8
void xLightEnt::Setup(class xLightEnt * this /* r29 */) {
    // Local variables
    unsigned int lightIdx; // r0
    class Vector light_direction; // r1+0x20

    {
        // Range: 0x8006299C -> 0x800629E0
        // Local variables
        class Contents contents; // r1+0x30
    }

    // References
    // -> class Scene * primaryScene;
    // -> static class bit_array_alloc sNGLight_Initted;
    // -> static class LightPointSpot * sNGLights;
    // -> static class xLightData * * sLight;
    // -> static unsigned int sLightTotal;
}
// Range: 0x80062C00 -> 0x80062CE4
class Entity * Sext::LightAsset::Create(class EntityHandleBase * handle /* r30 */, class LightAsset * asset /* r31 */) {
    // References
    // -> struct {} __vt__9xLightEnt;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: xLightCreateTempInternal(xLightAsset *, xVec3 *)
// Range: 0x80062CF0 -> 0x80062F8C
class xLightData * xLightCreateTempInternal(class xLightAsset * lightAsset /* r29 */) {
    {
        // Range: 0x80062D1C -> 0x80062F68
        // Local variables
        int i; // r6

        {
            // Range: 0x80062D1C -> 0x80062F68
            // Local variables
            class xLightData * light; // r30

            {
                // Range: 0x80062D58 -> 0x80062DCC
                // Local variables
                class Vector & light_direction; // r0
                class Vector & light_position; // r0
                class Contents contents; // r1+0x20
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> static class bit_array_alloc sNGLight_Initted;
    // -> static unsigned int sTempLightTotal;
    // -> static class xLightData * * sLight;
    // -> static class xLightData sTempLights[16];
}
// Range: 0x80062F90 -> 0x80063054
void xLightDestroyTempInternal(class xLightData * xl /* r31 */) {
    {
        // Range: 0x80062FB4 -> 0x80063030
        // Local variables
        int i; // r24

        {
            // Range: 0x80062FB4 -> 0x80063030
            // Local variables
            class xLightData * light; // r23
        }
    }

    // References
    // -> static unsigned int sTempLightTotal;
    // -> class Scene * primaryScene;
    // -> static class xLightData * * sLight;
}
// Range: 0x80063060 -> 0x80063198
void xLightResolveLinks() {
    {
        // Range: 0x80063084 -> 0x800630A4
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x80063084 -> 0x800630A4
            // Local variables
            class xLightData * xl; // r26
        }
    }

    // References
    // -> static unsigned int sLightTotal;
    // -> static class xLightData * * sLight;
}
// Range: 0x800631B0 -> 0x80063494
void xLightReset(class xLightEnt * xlent /* r30 */) {
    // Local variables
    class xLightData * xl; // r31
    class xVec3 original_pos; // r1+0x9C

    // References
    // -> class Scene * primaryScene;
}
// signature: xLightEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800634A0 -> 0x80063824
void xLightEventCB(class EventAny * genericParams /* r29 */) {
    // Local variables
    class xLightEnt * xlent; // r4
    class xLightData * xl; // r31

    {
        // Range: 0x800635C0 -> 0x80063724
        // Local variables
        class EventActionSetColorIntensity * params; // r0
    }
    {
        // Range: 0x80063724 -> 0x800637B8
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        bool resetEffect; // r28
        class EventActionStartLightEffect * params; // r0
    }
    {
        // Range: 0x800637B8 -> 0x800637DC
        // Local variables
        bool resetColor; // r5
    }
}
// Range: 0x80063830 -> 0x80063D64
void xLightUpdateAll(float dt /* f30 */) {
    {
        // Range: 0x80063854 -> 0x8006388C
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x80063854 -> 0x8006388C
            // Local variables
            class xLightData * xl; // r25

            {
                // Range: 0x80063854 -> 0x80063854
                // Local variables
                class Vector3 amend_pos; // r1+0xC0
                unsigned int baseType; // r4
                class xMat4x3 matrix; // r1+0xD8
                class xVec3 pos; // r1+0xCC
            }
            {
                // Range: 0x80063868 -> 0x8006388C
                // Local variables
                class ColorF tempColor; // r1+0xB0
                float percentage; // f8
            }
        }
    }

    // References
    // -> static unsigned int sLightTotal;
    // -> static class xLightData * * sLight;
    // -> unsigned int g_rttidParentTable[246];
}
// Range: 0x80063D90 -> 0x8006408C
void xLightUpdateLODFlag(class xLightData * light /* r30 */) {
    // Local variables
    float lodDistance; // f31
    float lightToCamDist2; // f30
    float lightToPlayerDist2; // f29
    float checkLODDistance2; // f0

    // References
    // -> class xGlobals * xglobals;
}
// signature: xLightOn(xLightData *, bool, const float)
// Range: 0x80064090 -> 0x8006426C
void xLightOn(class xLightData * xl /* r31 */) {
}
// Range: 0x80064280 -> 0x8006432C
void xLightSetPos(class xLightData * xl /* r30 */, class xVec3 & pos /* r31 */) {
    // Local variables
    class Vector3 amend_pos; // r1+0x28
}
