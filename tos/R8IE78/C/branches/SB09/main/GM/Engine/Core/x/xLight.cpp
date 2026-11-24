/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xLight.cpp
*/
static unsigned int sNumLightAssets; // size: 0x4, address: 0x807201A8
static class xLightData * * sLight; // size: 0x4, address: 0x807201AC
static class LightPointSpot * sNGLights; // size: 0x4, address: 0x807201B0
static class bit_array_alloc sNGLight_Initted; // size: 0xC, address: 0x807201C0
static unsigned int sLightTotal; // size: 0x4, address: 0x807201CC
static class xLightData sTempLights[16]; // size: 0x940, address: 0x807201D0
static unsigned int sTempLightTotal; // size: 0x4, address: 0x80720B10
// Range: 0x80033EB0 -> 0x80033F78
void xLightResetAll() {
    {
        // Range: 0x80033EE0 -> 0x80033F5C
        // Local variables
        int i; // r23
    }

    // References
    // -> static unsigned int sLightTotal;
    // -> class Scene * primaryScene;
    // -> static class xLightData sTempLights[16];
    // -> static class xLightData * * sLight;
    // -> static unsigned int sNumLightAssets;
}
// Range: 0x80033F80 -> 0x80034098
void xLightSceneSetup() {
    // Local variables
    unsigned int numToAllocate; // r24

    // References
    // -> static class bit_array_alloc sNGLight_Initted;
    // -> static class LightPointSpot * sNGLights;
    // -> struct {} __vt__Q28Graphics14LightPointSpot;
    // -> static class xLightData * * sLight;
    // -> static class xMemWatermark memWatermark;
    // -> static unsigned int sNumLightAssets;
}
// Range: 0x800340A0 -> 0x80034130
void xLightDeleteArray() {
    // References
    // -> static class LightPointSpot * sNGLights;
    // -> static unsigned int sNumLightAssets;
}
// Range: 0x80034130 -> 0x80034194
void xLightSceneExit() {
    // References
    // -> static unsigned int sTempLightTotal;
    // -> static unsigned int sNumLightAssets;
    // -> static unsigned int sLightTotal;
    // -> static class xLightData * * sLight;
    // -> static class bit_array_alloc sNGLight_Initted;
}
// signature: xLightEnt::xLightEnt(World::EntityHandleBase *, xLightAsset *)
// Range: 0x800341A0 -> 0x80034204
void * xLightEnt::xLightEnt(class xLightEnt * this /* r30 */, class xLightAsset * tasset /* r31 */) {
    // References
    // -> struct {} __vt__9xLightEnt;
}
// Range: 0x80034210 -> 0x80034450
void xLightEnt::Setup(class xLightEnt * this /* r31 */) {
    // Local variables
    unsigned int lightIdx; // r29
    class Vector light_direction; // r1+0x20

    {
        // Range: 0x80034250 -> 0x800342AC
        // Local variables
        class Contents contents; // r1+0x30
    }

    // References
    // -> class Scene * primaryScene;
    // -> class xVec3 m_Null;
    // -> static class bit_array_alloc sNGLight_Initted;
    // -> static class LightPointSpot * sNGLights;
    // -> static class xLightData * * sLight;
    // -> static unsigned int sLightTotal;
}
// Range: 0x80034510 -> 0x80034570
class Entity * Sext::LightAsset::Create(class EntityHandleBase * handle /* r30 */, class LightAsset * asset /* r31 */) {
}
// Range: 0x80034570 -> 0x800345B4
void xLightInitTempLights() {
    {
        // Range: 0x80034584 -> 0x800345B0
        // Local variables
        unsigned int i; // r8
    }

    // References
    // -> static class xLightData sTempLights[16];
    // -> static class LightPointSpot * sNGLights;
}
// signature: xLightCreateTempInternal(xLightAsset *, xVec3 *)
// Range: 0x800345C0 -> 0x800347C0
class xLightData * xLightCreateTempInternal(class xLightAsset * lightAsset /* r30 */) {
    {
        // Range: 0x800345E4 -> 0x800347A4
        // Local variables
        int i; // r27

        {
            // Range: 0x800345E4 -> 0x800347A4
            // Local variables
            class xLightData * light; // r31

            {
                // Range: 0x80034610 -> 0x8003467C
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
// Range: 0x800347F0 -> 0x800348B4
void xLightDestroyTempInternal(class xLightData * xl /* r31 */) {
    {
        // Range: 0x80034814 -> 0x800348A0
        // Local variables
        int i; // r24

        {
            // Range: 0x80034814 -> 0x800348A0
            // Local variables
            class xLightData * light; // r23
        }
    }

    // References
    // -> static unsigned int sTempLightTotal;
    // -> class Scene * primaryScene;
    // -> static class xLightData * * sLight;
}
// Range: 0x800348C0 -> 0x8003497C
void xLightResolveLinks() {
    {
        // Range: 0x800348D0 -> 0x80034968
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x800348D0 -> 0x80034968
            // Local variables
            class xLightData * xl; // r26
        }
    }

    // References
    // -> static unsigned int sLightTotal;
    // -> static class xLightData * * sLight;
}
// Range: 0x80034980 -> 0x80034A18
void xLightDestroyAll() {
    // Local variables
    int total; // r27

    {
        // Range: 0x80034998 -> 0x800349FC
        // Local variables
        int i; // r26
    }

    // References
    // -> static class LightPointSpot * sNGLights;
    // -> static class xLightData * * sLight;
    // -> static unsigned int sLightTotal;
}
// Range: 0x80034A20 -> 0x80034A90
void xLightDestroy(class xLightData * xl /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80034A90 -> 0x80034BB0
void xLightReset(class xLightEnt * xlent /* r30 */) {
    // Local variables
    class xLightData * xl; // r31
    class xVec3 original_pos; // r1+0x14

    // References
    // -> class Scene * primaryScene;
}
// signature: xLightEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80034BB0 -> 0x80034E24
void xLightEventCB(class EventAny * genericParams /* r29 */) {
    // Local variables
    class xLightEnt * xlent; // r4
    class xLightData * xl; // r31

    {
        // Range: 0x80034CC0 -> 0x80034D0C
        // Local variables
        class xMat4x3 matrix; // r1+0x18
    }
    {
        // Range: 0x80034D10 -> 0x80034D2C
        // Local variables
        class EventActionSetColorIntensity * params; // r0
    }
    {
        // Range: 0x80034D2C -> 0x80034DC0
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        bool resetEffect; // r28
        class EventActionStartLightEffect * params; // r0
    }
    {
        // Range: 0x80034DC0 -> 0x80034DE4
        // Local variables
        bool resetColor; // r5
    }
}
// Range: 0x80034E30 -> 0x800351D0
void xLightUpdateAll(float dt /* f30 */) {
    {
        // Range: 0x80034E54 -> 0x800351A8
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x80034E54 -> 0x800351A8
            // Local variables
            class xLightData * xl; // r26

            {
                // Range: 0x80034E54 -> 0x80034E54
                // Local variables
                class Vector3 amend_pos; // r1+0x88
                unsigned int baseType; // r4
                class xMat4x3 matrix; // r1+0xA0
                class xVec3 pos; // r1+0x94
            }
            {
                // Range: 0x80034E68 -> 0x800351A8
                // Local variables
                class ColorF tempColor; // r1+0x78
                float percentage; // f5
            }
        }
    }

    // References
    // -> static unsigned int sLightTotal;
    // -> static class xLightData * * sLight;
    // -> unsigned int g_rttidParentTable[264];
}
// signature: xLightResetEffect(xLightData *)
// Range: 0x800351F0 -> 0x80035248
void xLightResetEffect() {
}
// Range: 0x80035250 -> 0x80035518
void xLightUpdateLODFlag(class xLightData * light /* r31 */) {
    // Local variables
    float lodDistance; // f31
    float lightToCamDist2; // f30
    float lightToPlayerDist2; // f29
    float checkLODDistance2; // f0

    // References
    // -> class xGlobals * xglobals;
}
// signature: xLightOn(xLightData *, bool, const float)
// Range: 0x80035520 -> 0x80035730
void xLightOn(class xLightData * xl /* r31 */) {
}
// signature: xLightToggle(xLightData *, const float)
// Range: 0x80035740 -> 0x8003575C
void xLightToggle() {
}
// signature: xLightSetColor(xLightData *, const float, const float, const float, const float)
// Range: 0x80035760 -> 0x800357B8
void xLightSetColor() {
    // Local variables
    class ColorF col; // r1+0x8
}
// signature: xLightSetColor(xLightData *, const Basic::ColorF &, const float)
// Range: 0x800357C0 -> 0x800358F4
void xLightSetColor(class xLightData * xl /* r31 */, float transitionTime /* f31 */) {
    // Local variables
    float intensity; // f4
    class ColorF tempCol; // r1+0x38
}
// Range: 0x80035900 -> 0x800359A8
void xLightSetPos(class xLightData * xl /* r30 */, class xVec3 & pos /* r31 */) {
    // Local variables
    class Vector3 amend_pos; // r1+0x28
}
// Range: 0x800359D0 -> 0x80035A34
void xLightSetRadius(class xLightData * xl /* r31 */, float radius /* f31 */) {
}
