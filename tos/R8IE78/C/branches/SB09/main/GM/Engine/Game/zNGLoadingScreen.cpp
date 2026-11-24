/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNGLoadingScreen.cpp
*/
class zNGLoadingScreen gNGLoadingScreen; // size: 0x220, address: 0x8076ED50
class D3DRECT gRect; // size: 0x10, address: 0x806C86B8
class D3DRECT gDstRect; // size: 0x10, address: 0x806C86C8
static char sLoadingScreenMemoryBuffer[10240]; // size: 0x2800, address: 0x8076EF70
// signature: CustomSignalHandler(zUI *, unsigned long long, unsigned int, Sext::EventAny *, void *)
// Range: 0x8019CA60 -> 0x8019CA6C
void CustomSignalHandler() {
}
// Range: 0x8019CA70 -> 0x8019CB80
void * zNGLoadingScreen::zNGLoadingScreen(class zNGLoadingScreen * this /* r30 */) {
}
// signature: zNGLoadingScreen::Start(Sext::LoadingScreen *, unsigned int, unsigned int)
// Range: 0x8019CB80 -> 0x8019D360
void zNGLoadingScreen::Start(class zNGLoadingScreen * this /* r27 */, class LoadingScreen * asset /* r23 */) {
    {
        // Range: 0x8019CC90 -> 0x8019D340
        // Local variables
        unsigned int groupIndex; // r0
        unsigned int elementIndex; // r0
        class StackAllocator allocator; // r1+0x20
        float scale; // f3
        float aspect_ratio; // f0
        class xColor & setXColor; // r0
        class ColorF setColor; // r1+0x30

        {
            // Range: 0x8019CEDC -> 0x8019CF38
            // Local variables
            unsigned int i; // r21

            {
                // Range: 0x8019CEDC -> 0x8019CF38
                // Local variables
                class EntityHandleBase * goodie; // r0
            }
        }
        {
            // Range: 0x8019CFBC -> 0x8019D1FC
            // Local variables
            unsigned int j; // r29

            {
                // Range: 0x8019CFBC -> 0x8019D1FC
                // Local variables
                class xBaseAsset * uiAsset; // r28
                class EntityHandleBase * goodie; // r0
            }
        }
        {
            // Range: 0x8019D210 -> 0x8019D23C
            // Local variables
            unsigned int m; // r21
        }
        {
            // Range: 0x8019D23C -> 0x8019D278
            // Local variables
            unsigned int k; // r21
        }
        {
            // Range: 0x8019D278 -> 0x8019D324
            // Local variables
            unsigned int k; // r21
        }
    }

    // References
    // -> struct {} __vt__8zUIGroup;
    // -> struct {} __vt__8zUIModel;
    // -> struct {} __vt__8zUIImage;
    // -> struct {} __vt__13zUIController;
    // -> void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params);
    // -> class xBase * (* lookupFunction)(unsigned long long uid);
    // -> static char sLoadingScreenMemoryBuffer[10240];
    // -> class ScreenRenderTargetWii TheScreenTarget;
    // -> class Module * homeMenuModule;
    // -> class Module * trcModule;
}
// Range: 0x8019D3E0 -> 0x8019DB94
void zNGLoadingScreen::Step(class zNGLoadingScreen * this /* r28 */) {
    // Local variables
    float deltaTime; // f31

    {
        // Range: 0x8019D4EC -> 0x8019D628
        // Local variables
        int i; // r31
    }
    {
        // Range: 0x8019D73C -> 0x8019DB74
        // Local variables
        bool changed; // r29
        unsigned int next; // r30
        int elementCount; // r0

        {
            // Range: 0x8019D740 -> 0x8019D774
            // Local variables
            unsigned int m; // r27
        }
        {
            // Range: 0x8019D774 -> 0x8019D7D4
            // Local variables
            unsigned int k; // r27
        }
        {
            // Range: 0x8019D804 -> 0x8019D9C8
            // Local variables
            int clicks; // r0

            {
                // Range: 0x8019D934 -> 0x8019D990
                // Local variables
                int i; // r6
            }
        }
        {
            // Range: 0x8019D9C8 -> 0x8019DA44
            // Local variables
            char name[8]; // r1+0x48
        }
        {
            // Range: 0x8019DA90 -> 0x8019DB74
            // Local variables
            class EntityHandle * immediatePrototype; // r27
            class Referrer referrer; // r1+0x18

            {
                // Range: 0x8019DAE8 -> 0x8019DB74
                // Local variables
                class Renderable3D * renderable; // r3
                class ImmediateRenderUIImage image; // r1+0x50
                class Matrix43 transform; // r1+0x80
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> class D3DRECT gDstRect;
    // -> class D3DRECT gRect;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
    // -> double secondsPerTick;
}
// Range: 0x8019DBA0 -> 0x8019DCD0
void zNGLoadingScreen::Stop(class zNGLoadingScreen * this /* r31 */) {
    {
        // Range: 0x8019DC40 -> 0x8019DC78
        // Local variables
        unsigned int k; // r29
    }

    // References
    // -> void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params);
    // -> class xBase * (* lookupFunction)(unsigned long long uid);
    // -> class Module * trcModule;
    // -> class Module * homeMenuModule;
}
// Range: 0x8019DCD0 -> 0x8019DD20
void zNGLoadingScreen::Cleanup(class zNGLoadingScreen * this /* r31 */) {
    // References
    // -> class ScreenRenderTargetWii TheScreenTarget;
}
// Range: 0x8019DD20 -> 0x8019DDC8
void FollowLinks(class xBase * to /* r27 */, unsigned int event /* r28 */) {
    {
        // Range: 0x8019DD50 -> 0x8019DDB4
        // Local variables
        unsigned int i; // r29
    }

    // References
    // -> class zNGLoadingScreen gNGLoadingScreen;
}
// signature: zNGLoadingScreen::CustomSignal(xBase *, unsigned long long, unsigned int, Sext::EventAny *)
// Range: 0x8019DDD0 -> 0x8019DEBC
void zNGLoadingScreen::CustomSignal(class zNGLoadingScreen * this /* r30 */, unsigned int event /* r31 */) {
    {
        // Range: 0x8019DDE8 -> 0x8019DE48
        // Local variables
        unsigned int i; // r0
    }
    {
        // Range: 0x8019DE48 -> 0x8019DEA8
        // Local variables
        unsigned int j; // r0
    }
}
// signature: zNGLoadingScreen::GetUIElement(unsigned long long)
// Range: 0x8019DEC0 -> 0x8019DF50
class xBase * zNGLoadingScreen::GetUIElement() {
    {
        // Range: 0x8019DEC4 -> 0x8019DF08
        // Local variables
        unsigned int i; // r0
    }
    {
        // Range: 0x8019DF08 -> 0x8019DF48
        // Local variables
        unsigned int j; // r0
    }
}
// Range: 0x8019DF50 -> 0x8019DFCC
void zNGLoadingScreen::SetLoadingDone(class zNGLoadingScreen * this /* r30 */, bool b /* r31 */) {
}
// Range: 0x8019DFD0 -> 0x8019E010
bool zNGLoadingScreen::IsReadyForTermination() {
}
// signature: UIGroupUIDLookup(unsigned long long)
// Range: 0x8019E010 -> 0x8019E024
class xBase * UIGroupUIDLookup() {
    // References
    // -> class zNGLoadingScreen gNGLoadingScreen;
}
// signature: UIGroupEventHandler(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8019E030 -> 0x8019E060
void UIGroupEventHandler(class xBase * from /* r0 */) {
    // References
    // -> class zNGLoadingScreen gNGLoadingScreen;
}
