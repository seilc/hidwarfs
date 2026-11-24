/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xLight.cpp
*/
class _OGlightSchema _OGlightschema; // size: 0x18, address: 0x80755C00
class SchemaRegistrator _OGlightschemaReg; // size: 0x8, address: 0x80755C18
static class xLight * sLight[32]; // size: 0x80, address: 0x80755C20
static int sLightTotal; // size: 0x4, address: 0x80755CA0
static class xLight sTempLights[16]; // size: 0xC00, address: 0x80755CB0
static class xLightAsset sTempLightAssets[16]; // size: 0xD00, address: 0x807568B0
static class LightPointSpot sNGLights[32]; // size: 0xB00, address: 0x807575C0
// Range: 0x80045C50 -> 0x80045C60
void World::_OGlightEntity::Deactivate() {
}
// Range: 0x80045C60 -> 0x80045CB0
void World::_OGlightEntity::Destroy(class _OGlightEntity * this /* r31 */) {
}
// signature: World::_OGlightSchema::Fix(World::Asset *, long, int)
// Range: 0x80045D10 -> 0x80045D18
void World::_OGlightSchema::Fix() {
}
// signature: World::_OGlightSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80045D20 -> 0x80045D6C
class EntityStub * World::_OGlightSchema::CreateStub(class _OGlightSchema * this /* r31 */) {
}
// signature: World::_OGlightSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80045D70 -> 0x80045D88
void World::_OGlightSchema::DestroyStub() {
}
// signature: World::_OGlightSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80045D90 -> 0x80045DF8
class Entity * World::_OGlightSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World14_OGlightEntity;
}
// Range: 0x80045E40 -> 0x80045F50
void xLightSceneInit() {
    // References
    // -> static int sLightTotal;
    // -> static class xLight sTempLights[16];
    // -> static class xLight * sLight[32];
}
// Range: 0x80045F50 -> 0x80046068
void xLightSceneExit() {
    // References
    // -> class Scene * primaryScene;
    // -> static class xLight * sLight[32];
    // -> static int sLightTotal;
}
// signature: xLightInit(xBase &, xDynAsset &, unsigned long)
// Range: 0x80046070 -> 0x80046074
void xLightInit() {
}
// Range: 0x80046080 -> 0x80046314
void xLightInit(class xBase * b /* r29 */, class xLightAsset * tasset /* r30 */) {
    // Local variables
    class xLight * light; // reg65535
    class Vector3 light_direction; // r1+0x20

    // References
    // -> class Scene * primaryScene;
    // -> static class LightPointSpot sNGLights[32];
    // -> static class xLight * sLight[32];
    // -> static int sLightTotal;
}
// Range: 0x80046330 -> 0x8004656C
void xLightInitTempLights() {
    // Local variables
    int i; // r19

    {
        // Range: 0x80046380 -> 0x8004649C
        // Local variables
        class Vector3 light_direction; // r1+0x8
    }

    // References
    // -> static class xLightAsset sTempLightAssets[16];
    // -> static class LightPointSpot sNGLights[32];
    // -> static class xLight sTempLights[16];
    // -> static unsigned long long nextUID;
}
// Range: 0x80046570 -> 0x80046854
class xLight * xLightCreateTempInternal(class xLightAsset * lightAsset /* r28 */, class xVec3 * pos /* r29 */) {
    {
        // Range: 0x800465B8 -> 0x80046830
        // Local variables
        int i; // r0

        {
            // Range: 0x800465B8 -> 0x80046830
            // Local variables
            class Vector3 light_direction; // r1+0x4C
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> static class LightPointSpot sNGLights[32];
    // -> static class xLight * sLight[32];
    // -> static class xLight sTempLights[16];
}
// Range: 0x80046870 -> 0x80046924
void xLightDestroyTempInternal(class xLight * xl /* r25 */) {
    {
        // Range: 0x80046884 -> 0x80046900
        // Local variables
        int i; // r27

        {
            // Range: 0x80046884 -> 0x80046900
            // Local variables
            class xLight * light; // r26
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> static class xLight * sLight[32];
}
// Range: 0x80046940 -> 0x80046A6C
void xLightResolveLinks() {
    {
        // Range: 0x80046968 -> 0x80046988
        // Local variables
        int i; // r28

        {
            // Range: 0x80046968 -> 0x80046988
            // Local variables
            class xLight * xl; // r27
        }
    }

    // References
    // -> static int sLightTotal;
    // -> static class xLight * sLight[32];
}
// signature: xLightEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80046A70 -> 0x80047094
void xLightEventCB(class EventAny * genericParams /* r29 */) {
    // Local variables
    class xLight * xl; // r30

    {
        // Range: 0x80046E04 -> 0x80046F68
        // Local variables
        class EventActionSetColorIntensity * params; // r0
    }
    {
        // Range: 0x80046F68 -> 0x80047024
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        bool resetEffect; // r28
        class EventActionStartLightEffect * params; // r0
    }
    {
        // Range: 0x80047024 -> 0x80047044
        // Local variables
        bool resetColor; // r5
    }
}
// Range: 0x800470A0 -> 0x80047560
void xLightUpdateAll(float dt /* f30 */) {
    // Local variables
    int i; // r29

    {
        // Range: 0x800470C4 -> 0x800470EC
        // Local variables
        class xLight * xl; // r28

        {
            // Range: 0x800470C4 -> 0x800470C4
            // Local variables
            class Vector3 amend_pos; // r1+0x88
            class xMat4x3 matrix; // r1+0xA0
            class xVec3 pos; // r1+0x94
        }
        {
            // Range: 0x800470D4 -> 0x800470EC
            // Local variables
            class _xFColor tempColor; // r1+0x78
            float percentage; // f8
        }
    }

    // References
    // -> static int sLightTotal;
    // -> static class xLight * sLight[32];
}
// Range: 0x80047580 -> 0x8004788C
void xLightUpdateLODFlag(class xLight * light /* r29 */) {
    // Local variables
    float lodDistance; // f31
    float lightToCamDist2; // f30
    float lightToPlayerDist2; // f29
    float checkLODDistance2; // f0

    // References
    // -> class xGlobals * xglobals;
}
// signature: xLightOn(xLight *, bool, const float)
// Range: 0x80047890 -> 0x80047A84
void xLightOn(class xLight * xl /* r30 */) {
}
// Range: 0x80047AA0 -> 0x80047B4C
void xLightSetPos(class xLight * xl /* r30 */, class xVec3 * pos /* r31 */) {
    // Local variables
    class Vector3 amend_pos; // r1+0x28
}
