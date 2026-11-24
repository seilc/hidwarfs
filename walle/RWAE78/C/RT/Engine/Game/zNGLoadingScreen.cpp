/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNGLoadingScreen.cpp
*/
class _OGLoadingScreenSchema _OGLoadingScreenschema; // size: 0x18, address: 0x807F9898
class SchemaRegistrator _OGLoadingScreenschemaReg; // size: 0x8, address: 0x807F98B0
class zNGLoadingScreen gNGLoadingScreen; // size: 0x1F0, address: 0x807F98C0
class D3DRECT gRect; // size: 0x10, address: 0x80704D40
class D3DRECT gDstRect; // size: 0x10, address: 0x80704D50
static char sLoadingScreenMemoryBuffer[8192]; // size: 0x2000, address: 0x807F9AB0
// Range: 0x80205930 -> 0x80205940
void World::_OGLoadingScreenEntity::Deactivate() {
}
// Range: 0x80205940 -> 0x80205990
void World::_OGLoadingScreenEntity::Destroy(class _OGLoadingScreenEntity * this /* r31 */) {
}
// signature: World::_OGLoadingScreenSchema::Fix(World::Asset *, long, int)
// Range: 0x802059F0 -> 0x802059F8
void World::_OGLoadingScreenSchema::Fix() {
}
// signature: World::_OGLoadingScreenSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80205A00 -> 0x80205A4C
class EntityStub * World::_OGLoadingScreenSchema::CreateStub(class _OGLoadingScreenSchema * this /* r31 */) {
}
// signature: World::_OGLoadingScreenSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80205A50 -> 0x80205A68
void World::_OGLoadingScreenSchema::DestroyStub() {
}
// signature: World::_OGLoadingScreenSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80205A70 -> 0x80205AD8
class Entity * World::_OGLoadingScreenSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World22_OGLoadingScreenEntity;
}
// signature: CustomSignalHandler(zUI *, unsigned long long, unsigned int, Sext::EventAny *, void *)
// Range: 0x80205B20 -> 0x80205B2C
void CustomSignalHandler() {
}
// Range: 0x80205B30 -> 0x80205BCC
void * zNGLoadingScreen::zNGLoadingScreen() {
    // References
    // -> struct {} __vt__10zScaleform;
}
// Range: 0x80205BD0 -> 0x80206410
void zNGLoadingScreen::Start(class zNGLoadingScreen * this /* r15 */, class LoadingScreen * asset /* r17 */) {
    {
        // Range: 0x80205CA4 -> 0x802063F0
        // Local variables
        unsigned int groupIndex; // r0
        unsigned int elementIndex; // r0
        char * memPointer; // r18
        class ScadMgr * scadMgr; // r19
        unsigned int modelCount; // r0
        float scale; // f3
        float aspect_ratio; // f0
        class xColor_tag * setXColor; // r0
        class ColorF setColor; // r1+0x48

        {
            // Range: 0x80205ED8 -> 0x80206004
            // Local variables
            unsigned int i; // r23

            {
                // Range: 0x80205ED8 -> 0x80206004
                // Local variables
                class xDynAsset * uiAsset; // r0
                class Goodie * goodie; // r0
            }
        }
        {
            // Range: 0x802060B0 -> 0x802062E4
            // Local variables
            unsigned int j; // r17

            {
                // Range: 0x802060B0 -> 0x802062E4
                // Local variables
                class xDynAsset * uiAsset; // r16
                class Goodie * goodie; // r0
            }
        }
        {
            // Range: 0x8020630C -> 0x80206318
            // Local variables
            unsigned int m; // r16
        }
        {
            // Range: 0x80206338 -> 0x80206380
            // Local variables
            unsigned int k; // r17
        }
    }

    // References
    // -> long long startupTicks;
    // -> struct {} __vt__7zUIText;
    // -> struct {} __vt__6zUIBox;
    // -> void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params);
    // -> class xBase * (* lookupFunction)(unsigned long long uid);
    // -> static char sLoadingScreenMemoryBuffer[8192];
    // -> class ScreenRenderTarget TheScreenTarget;
    // -> struct {} __vt__10zScaleform;
    // -> class Module * homeMenuModule;
}
// Range: 0x80206430 -> 0x80206918
void zNGLoadingScreen::Step(class zNGLoadingScreen * this /* r26 */) {
    // Local variables
    float deltaTime; // f31

    {
        // Range: 0x802064B8 -> 0x802068F8
        // Local variables
        bool changed; // r27
        unsigned int next; // r28
        int elementCount; // r0

        {
            // Range: 0x802064BC -> 0x802064C8
            // Local variables
            unsigned int m; // r28
        }
        {
            // Range: 0x802064F0 -> 0x80206524
            // Local variables
            unsigned int k; // r28
        }
        {
            // Range: 0x80206570 -> 0x80206730
            // Local variables
            int clicks; // r0

            {
                // Range: 0x80206690 -> 0x802066E0
                // Local variables
                int i; // r25
            }
        }
        {
            // Range: 0x80206730 -> 0x80206794
            // Local variables
            char name[8]; // r1+0x20
        }
        {
            // Range: 0x80206798 -> 0x802067EC
            // Local variables
            class ScadMgr * scadMgr; // r25
        }
        {
            // Range: 0x802067EC -> 0x802068F8
            // Local variables
            class EntityHandle * immediatePrototype; // r25
            class Referrer referrer; // r1+0x8

            {
                // Range: 0x80206868 -> 0x802068F8
                // Local variables
                class Renderable3D * renderable; // r25
                class ImmediateRenderUIImage image; // r1+0x28
                class Matrix43 transform; // r1+0x50
            }
        }
    }

    // References
    // -> class D3DRECT gDstRect;
    // -> class D3DRECT gRect;
}
// Range: 0x802069B0 -> 0x80206B18
void zNGLoadingScreen::Stop(class zNGLoadingScreen * this /* r31 */) {
    {
        // Range: 0x80206A7C -> 0x80206AA4
        // Local variables
        unsigned int k; // r29
    }

    // References
    // -> void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params);
    // -> class xBase * (* lookupFunction)(unsigned long long uid);
    // -> class Module * homeMenuModule;
}
// Range: 0x80206B20 -> 0x80206B60
void zNGLoadingScreen::Cleanup() {
    // References
    // -> class ScreenRenderTarget TheScreenTarget;
}
// signature: zNGLoadingScreen::CustomSignal(xBase *, unsigned long long, unsigned int, Sext::EventAny *)
// Range: 0x80206B60 -> 0x80206CD8
void zNGLoadingScreen::CustomSignal(class zNGLoadingScreen * this /* r30 */, unsigned int event /* r31 */) {
    {
        // Range: 0x80206B68 -> 0x80206BD8
        // Local variables
        unsigned int i; // r11
    }
    {
        // Range: 0x80206BE4 -> 0x80206CBC
        // Local variables
        unsigned int j; // r11
    }

    // References
    // -> class zNGLoadingScreen gNGLoadingScreen;
}
// signature: UIGroupUIDLookup(unsigned long long)
// Range: 0x80206CE0 -> 0x80206D9C
class xBase * UIGroupUIDLookup() {
    // References
    // -> class zNGLoadingScreen gNGLoadingScreen;
}
// signature: UIGroupEventHandler(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80206DA0 -> 0x80206DD0
void UIGroupEventHandler(class xBase * from /* r0 */) {
    // References
    // -> class zNGLoadingScreen gNGLoadingScreen;
}
