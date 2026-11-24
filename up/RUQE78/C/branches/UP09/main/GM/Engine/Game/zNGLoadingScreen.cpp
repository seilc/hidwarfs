/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNGLoadingScreen.cpp
*/
int loadingScreenMode; // size: 0x4, address: 0x80840D94
class zUIImage * spinningImageBlue; // size: 0x4, address: 0x80840D98
class zUIImage * spinningImageWhite; // size: 0x4, address: 0x80840D9C
class zUIImage * tipsTextBoxImage; // size: 0x4, address: 0x80840DA0
class zUIImage * controllerImage; // size: 0x4, address: 0x80840DA4
class zUIImage * cloudImage[3]; // size: 0xC, address: 0x80840DA8
class zUIImage * gradientImageColor; // size: 0x4, address: 0x80840DB4
class zUIImage * gradientImageBW[5]; // size: 0x14, address: 0x80840DB8
class zUIImage * lightRayImage[12]; // size: 0x30, address: 0x80840DD0
static char * pszLoadingString; // size: 0x4, address: 0x807BBBD4
static char * pszRandomHintHeader; // size: 0x4, address: 0x807BBBD8
static char * pszRandomHintString; // size: 0x4, address: 0x807BBBDC
static char * pszAcesHeader0; // size: 0x4, address: 0x807BBBE0
static char * pszAcesHeader1; // size: 0x4, address: 0x807BBBE4
static char * pcsAcesControlA; // size: 0x4, address: 0x807BBBE8
static char * pcsAcesControlB; // size: 0x4, address: 0x807BBBEC
static char * pcsAcesControlX; // size: 0x4, address: 0x807BBBF0
static char * pcsAcesControlY; // size: 0x4, address: 0x807BBBF4
static char * pcsAcesControlLT; // size: 0x4, address: 0x807BBBF8
static char * pcsAcesControlRT; // size: 0x4, address: 0x807BBBFC
static char * pcsAcesControlLB; // size: 0x4, address: 0x807BBC00
static char * pcsAcesControlRB; // size: 0x4, address: 0x807BBC04
static char * pcsAcesControlStart; // size: 0x4, address: 0x807BBC08
static char * pcsAcesControlLStick; // size: 0x4, address: 0x807BBC0C
static char * pcsAcesControlDPadDown; // size: 0x4, address: 0x807BBC10
static class LevelHintTable leveHintTable[71]; // size: 0x238, address: 0x807864D8
class zNGLoadingScreen gNGLoadingScreen; // size: 0x220, address: 0x80840E10
class D3DRECT gRect; // size: 0x10, address: 0x807BBC18
class D3DRECT gDstRect; // size: 0x10, address: 0x807BBC28
static char sLoadingScreenMemoryBuffer[10240]; // size: 0x2800, address: 0x80841030
static char * meridBadgeFontName; // size: 0x4, address: 0x807BBC38
static char * interstateBoldFontName; // size: 0x4, address: 0x807BBC3C
static char * meridBadgeFontName; // size: 0x4, address: 0x807BBC40
static float rot; // size: 0x4, address: 0x80843830
// signature: CustomSignalHandler(zUI *, unsigned long long, unsigned int, Sext::EventAny *, void *)
// Range: 0x802ABFA0 -> 0x802ABFAC
void CustomSignalHandler() {
}
// Range: 0x802ABFB0 -> 0x802AC09C
void * zNGLoadingScreen::zNGLoadingScreen() {
    // References
    // -> struct {} __vt__10zScaleform;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: RenderCustomTextOffsettedFromRect(const char *, const xFRect &, const xFRect &, bool, HorizontalOffsetType, VerticalOffsetType, HorizontalOffsetType, VerticalOffsetType, xColor, float, const char *, Scaleform::CustomTextHAlignment, Scaleform::CustomTextVAlignment)
// Range: 0x802AC0A0 -> 0x802AC388
static void RenderCustomTextOffsettedFromRect(char * text /* r27 */, class xColor & color /* r28 */, float normFontSize /* f31 */, char * fontName /* r29 */, enum CustomTextHAlignment hAlignment /* r30 */, enum CustomTextVAlignment vAlignment /* r31 */) {
    // Local variables
    class xFRect dstRectWorld; // r1+0x8
    float DISPLAY_HEIGHT; // f1
    unsigned int TEXT_SIZE; // r0
    float textBoxLeft; // f31
    float textBoxRight; // f30
    float textBoxTop; // f29
    float textBoxBottom; // f28
    class CustomTextRendererFontParams fontParams; // r1+0x18

    // References
    // -> class Module * scaleformModule;
}
// signature: zNGLoadingScreen::Start(Sext::LoadingScreen *, unsigned int, unsigned int)
// Range: 0x802AC390 -> 0x802AD98C
void zNGLoadingScreen::Start(class zNGLoadingScreen * this /* r15 */, class LoadingScreen * asset /* r1+0x18 */, unsigned int nextSceneID /* r14 */) {
    // Local variables
    class ScaleformModule * scaleFormModule; // r0

    {
        // Range: 0x802AC508 -> 0x802AD964
        // Local variables
        class xFRect controllerImageRect; // r1+0x150
        class xFRect textBoxImageRect; // r1+0x160
        class xFRect spiningImageRect; // r1+0x170
        float SCREEN_WIDTH_FOR_UI; // f2
        float SCREEN_HEIGHT_FOR_UI; // f1
        float SCREEN_ASPECT_RATIO; // f31
        unsigned int groupIndex; // r0
        unsigned int elementIndex; // r0
        class StackAllocator allocator; // r1+0x180
        unsigned int modelCount; // r4
        float scale; // f3
        float aspect_ratio; // f0
        class xColor & setXColor; // r0
        class ColorF setColor; // r1+0x190

        {
            // Range: 0x802AC768 -> 0x802AC7D4
            // Local variables
            unsigned int i; // r14

            {
                // Range: 0x802AC768 -> 0x802AC7D4
                // Local variables
                class xBaseAsset * uiAsset; // r0
                class EntityHandleBase * goodie; // r0
            }
        }
        {
            // Range: 0x802AC8A0 -> 0x802ACC34
            // Local variables
            unsigned int j; // r18

            {
                // Range: 0x802AC8A0 -> 0x802ACC34
                // Local variables
                class xBaseAsset * uiAsset; // r17
                class EntityHandleBase * goodie; // r0

                {
                    // Range: 0x802AC8A0 -> 0x802AC8A8
                    // Local variables
                    class zUIBox * box; // r0
                }
                {
                    // Range: 0x802AC8A8 -> 0x802AC8AC
                    // Local variables
                    class zUIController * controller; // r0
                }
                {
                    // Range: 0x802AC8AC -> 0x802AC8B0
                    // Local variables
                    class zUIImage * image; // r0
                }
                {
                    // Range: 0x802AC8B0 -> 0x802AC8B4
                    // Local variables
                    class zUIModel * model; // r0
                }
                {
                    // Range: 0x802AC8B4 -> 0x802AC8B8
                    // Local variables
                    class zUIText * text; // r16
                }
                {
                    // Range: 0x802AC8B8 -> 0x802ACC34
                    // Local variables
                    class zUIGroup * text; // r0
                }
            }
        }
        {
            // Range: 0x802ACDF4 -> 0x802ACF18
            // Local variables
            unsigned int rand; // r0
        }
        {
            // Range: 0x802ACFF4 -> 0x802AD000
            // Local variables
            unsigned int m; // r16
        }
        {
            // Range: 0x802AD020 -> 0x802AD048
            // Local variables
            unsigned int k; // r16
        }
        {
            // Range: 0x802AD05C -> 0x802AD0A4
            // Local variables
            unsigned int k; // r17
        }
        {
            // Range: 0x802AD0EC -> 0x802AD350
            {
                // Range: 0x802AD0F4 -> 0x802AD178
                // Local variables
                class xFRect loadingTextDestRect; // r1+0x140
            }
            {
                // Range: 0x802AD178 -> 0x802AD200
                // Local variables
                class xFRect hintTextHeaderDestRect; // r1+0x130
            }
            {
                // Range: 0x802AD200 -> 0x802AD288
                // Local variables
                class xFRect hintTextDestRect; // r1+0x120
            }
        }
        {
            // Range: 0x802AD354 -> 0x802AD908
            {
                // Range: 0x802AD364 -> 0x802AD3FC
                // Local variables
                class xFRect loadingTextDestRect; // r1+0x110
            }
            {
                // Range: 0x802AD408 -> 0x802AD48C
                // Local variables
                class xFRect textDestRect; // r1+0x100
            }
            {
                // Range: 0x802AD48C -> 0x802AD52C
                // Local variables
                class xFRect textDestRect; // r1+0xF0
            }
            {
                // Range: 0x802AD52C -> 0x802AD7AC
                // Local variables
                class xFRect LStickDestRect; // r1+0x90
                class xFRect XDestRect; // r1+0xA0
                class xFRect BDestRect; // r1+0xB0
                class xFRect YDestRect; // r1+0xC0
                class xFRect ADestRect; // r1+0xD0
                class xFRect DPadDownDestRect; // r1+0xE0
            }
            {
                // Range: 0x802AD8CC -> 0x802AD8CC
                // Local variables
                unsigned int i; // r18
            }
        }
    }

    // References
    // -> long long startupTicks;
    // -> static char * meridBadgeFontName;
    // -> static char * interstateBoldFontName;
    // -> static char * meridBadgeFontName;
    // -> static char * pcsAcesControlDPadDown;
    // -> static char * pcsAcesControlLStick;
    // -> static char * pcsAcesControlStart;
    // -> static char * pcsAcesControlRB;
    // -> static char * pcsAcesControlLB;
    // -> static char * pcsAcesControlRT;
    // -> static char * pcsAcesControlLT;
    // -> static char * pcsAcesControlY;
    // -> static char * pcsAcesControlX;
    // -> static char * pcsAcesControlB;
    // -> static char * pcsAcesControlA;
    // -> static char * pszAcesHeader1;
    // -> static char * pszAcesHeader0;
    // -> static char * pszRandomHintString;
    // -> static char * pszRandomHintHeader;
    // -> static class LevelHintTable leveHintTable[71];
    // -> static char * pszLoadingString;
    // -> class zUIImage * gradientImageColor;
    // -> class zUIImage * controllerImage;
    // -> class zUIImage * tipsTextBoxImage;
    // -> class zUIImage * spinningImageWhite;
    // -> class zUIImage * spinningImageBlue;
    // -> class zUIImage * lightRayImage[12];
    // -> class zUIImage * gradientImageBW[5];
    // -> class zUIImage * cloudImage[3];
    // -> struct {} __vt__8zUIGroup;
    // -> struct {} __vt__7zUIText;
    // -> struct {} __vt__8zUIModel;
    // -> struct {} __vt__8zUIImage;
    // -> struct {} __vt__13zUIController;
    // -> struct {} __vt__6zUIBox;
    // -> struct {} __vt__Q25World9xOGEntity;
    // -> void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params);
    // -> class xBase * (* lookupFunction)(unsigned long long uid);
    // -> static char sLoadingScreenMemoryBuffer[10240];
    // -> class ScreenRenderTargetWii TheScreenTarget;
    // -> class Module * homeMenuModule;
    // -> int loadingScreenMode;
    // -> class Module * scaleformModule;
}
// Range: 0x802AD9E0 -> 0x802ADF30
void zNGLoadingScreen::Step(class zNGLoadingScreen * this /* r27 */) {
    // Local variables
    float deltaTime; // f31

    {
        // Range: 0x802ADA60 -> 0x802ADF10
        // Local variables
        bool changed; // r28
        unsigned int next; // r29
        int elementCount; // r0
        float rotVal; // f1

        {
            // Range: 0x802ADA64 -> 0x802ADA70
            // Local variables
            unsigned int m; // r29
        }
        {
            // Range: 0x802ADAF8 -> 0x802ADB2C
            // Local variables
            unsigned int k; // r29
        }
        {
            // Range: 0x802ADB78 -> 0x802ADD44
            // Local variables
            int clicks; // r0

            {
                // Range: 0x802ADCA4 -> 0x802ADCF4
                // Local variables
                int i; // r26
            }
        }
        {
            // Range: 0x802ADD44 -> 0x802ADDB4
            // Local variables
            char name[8]; // r1+0x28
        }
        {
            // Range: 0x802ADE00 -> 0x802ADF10
            // Local variables
            class EntityHandle * immediatePrototype; // r26
            class Referrer referrer; // r1+0x10

            {
                // Range: 0x802ADE74 -> 0x802ADF10
                // Local variables
                class Renderable3D * renderable; // r26
                class ImmediateRenderUIImage image; // r1+0x30
                class Matrix43 transform; // r1+0x58
            }
        }
    }

    // References
    // -> class D3DRECT gDstRect;
    // -> class D3DRECT gRect;
    // -> class zUIImage * spinningImageWhite;
    // -> static float rot;
    // -> class zUIImage * spinningImageBlue;
}
// Range: 0x802ADF70 -> 0x802AE0B4
void zNGLoadingScreen::Stop(class zNGLoadingScreen * this /* r31 */) {
    {
        // Range: 0x802AE000 -> 0x802AE028
        // Local variables
        unsigned int k; // r29
    }

    // References
    // -> class Module * scaleformModule;
    // -> int loadingScreenMode;
    // -> void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params);
    // -> class xBase * (* lookupFunction)(unsigned long long uid);
    // -> class Module * homeMenuModule;
}
// Range: 0x802AE0C0 -> 0x802AE100
void zNGLoadingScreen::Cleanup() {
    // References
    // -> class ScreenRenderTargetWii TheScreenTarget;
}
// signature: zNGLoadingScreen::CustomSignal(xBase *, unsigned long long, unsigned int, Sext::EventAny *)
// Range: 0x802AE100 -> 0x802AE278
void zNGLoadingScreen::CustomSignal(class zNGLoadingScreen * this /* r30 */, unsigned int event /* r31 */) {
    {
        // Range: 0x802AE108 -> 0x802AE178
        // Local variables
        unsigned int i; // r11
    }
    {
        // Range: 0x802AE184 -> 0x802AE25C
        // Local variables
        unsigned int j; // r11
    }

    // References
    // -> class zNGLoadingScreen gNGLoadingScreen;
}
// signature: UIGroupUIDLookup(unsigned long long)
// Range: 0x802AE280 -> 0x802AE33C
class xBase * UIGroupUIDLookup() {
    // References
    // -> class zNGLoadingScreen gNGLoadingScreen;
}
// signature: UIGroupEventHandler(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x802AE340 -> 0x802AE370
void UIGroupEventHandler(class xBase * from /* r0 */) {
    // References
    // -> class zNGLoadingScreen gNGLoadingScreen;
}
