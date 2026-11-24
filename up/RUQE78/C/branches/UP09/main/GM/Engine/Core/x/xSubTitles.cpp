/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xSubTitles.cpp
*/
static float horizontalSafeSpacing; // size: 0x4, address: 0x80815408
static float verticalSafeSpacing; // size: 0x4, address: 0x8081540C
static float textBoxWidth; // size: 0x4, address: 0x80815410
static float textBoxHeight; // size: 0x4, address: 0x80815414
static float textBoxPosX; // size: 0x4, address: 0x80815418
static float textBoxPosY; // size: 0x4, address: 0x8081541C
static float textBoxPosX2; // size: 0x4, address: 0x80815420
static float textBoxPosY2; // size: 0x4, address: 0x80815424
static float textBoxShadowOffsetX; // size: 0x4, address: 0x80815428
static float textBoxShadowOffsetY; // size: 0x4, address: 0x8081542C
static class xSubtitlesAsset * m_pCurrentAsset; // size: 0x4, address: 0x80815430
static float fontSize; // size: 0x4, address: 0x807A2388
static unsigned int m_uLastTimeKey; // size: 0x4, address: 0x80815434
static float runningTime; // size: 0x4, address: 0x80815438
static bool hasStringChanged; // size: 0x1, address: 0x8081543C
static bool hasSetFirstString; // size: 0x1, address: 0x8081543D
static char * pszDisplay; // size: 0x4, address: 0x807A238C
// Range: 0x80082D90 -> 0x80082E7C
void xSubTitlesInit() {
    // Local variables
    float DISPLAY_HEIGHT; // f2

    // References
    // -> static float textBoxShadowOffsetY;
    // -> static float textBoxShadowOffsetX;
    // -> static float textBoxPosY2;
    // -> static float textBoxPosX2;
    // -> static float textBoxPosY;
    // -> static float textBoxPosX;
    // -> static float textBoxHeight;
    // -> static float textBoxWidth;
    // -> static float verticalSafeSpacing;
    // -> static float horizontalSafeSpacing;
    // -> static float fontSize;
}
// signature: xSubTitlesRender(Sext::xSubtitlesAsset *)
// Range: 0x80082E80 -> 0x80082EEC
void xSubTitlesRender() {
    // References
    // -> static unsigned int m_uLastTimeKey;
    // -> static float runningTime;
    // -> static bool hasSetFirstString;
    // -> static bool hasStringChanged;
    // -> static class xSubtitlesAsset * m_pCurrentAsset;
    // -> class zGlobals globals;
}
// Range: 0x80082EF0 -> 0x80083198
void xSubTitlesUpdate(float dt /* f31 */) {
    // Local variables
    unsigned int uSearchIndex; // r30

    {
        // Range: 0x8008305C -> 0x80083130
        // Local variables
        class CustomTextRendererFontParams normalTextFontParams; // r1+0x8
        class CustomTextRendererFontParams dropShadowFontParams; // r1+0x1C
    }

    // References
    // -> static float textBoxShadowOffsetY;
    // -> static float textBoxShadowOffsetX;
    // -> static float textBoxPosY2;
    // -> static float textBoxPosX2;
    // -> static float textBoxPosY;
    // -> static float textBoxPosX;
    // -> class Module * scaleformModule;
    // -> static float fontSize;
    // -> static char * pszDisplay;
    // -> static bool hasStringChanged;
    // -> static bool hasSetFirstString;
    // -> static float runningTime;
    // -> static unsigned int m_uLastTimeKey;
    // -> static class xSubtitlesAsset * m_pCurrentAsset;
    // -> class zGlobals globals;
}
