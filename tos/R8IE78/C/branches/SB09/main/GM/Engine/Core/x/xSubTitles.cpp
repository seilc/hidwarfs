/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xSubTitles.cpp
*/
static float horizontalSafeSpacing; // size: 0x4, address: 0x8072D440
static float verticalSafeSpacing; // size: 0x4, address: 0x8072D444
static float textBoxWidth; // size: 0x4, address: 0x8072D448
static float textBoxHeight; // size: 0x4, address: 0x8072D44C
static float textBoxPosX; // size: 0x4, address: 0x8072D450
static float textBoxPosY; // size: 0x4, address: 0x8072D454
static float textBoxPosX2; // size: 0x4, address: 0x8072D458
static float textBoxPosY2; // size: 0x4, address: 0x8072D45C
static float textBoxShadowOffsetX; // size: 0x4, address: 0x8072D460
static float textBoxShadowOffsetY; // size: 0x4, address: 0x8072D464
static class xSubtitlesAsset * m_pCurrentAsset; // size: 0x4, address: 0x8072D468
static float fontSize; // size: 0x4, address: 0x806B41C0
static unsigned int m_uLastTimeKey; // size: 0x4, address: 0x8072D46C
static float runningTime; // size: 0x4, address: 0x8072D470
static bool hasStringChanged; // size: 0x1, address: 0x8072D474
static bool hasSetFirstString; // size: 0x1, address: 0x8072D475
char * pszDisplay; // size: 0x4, address: 0x806B41C4
// Range: 0x800467A0 -> 0x800468AC
void xSubTitlesInit() {
    // Local variables
    float DISPLAY_HEIGHT; // f3

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
// Range: 0x800468B0 -> 0x80046924
void xSubTitlesRender() {
    // References
    // -> static unsigned int m_uLastTimeKey;
    // -> static float runningTime;
    // -> static bool hasSetFirstString;
    // -> static bool hasStringChanged;
    // -> static class xSubtitlesAsset * m_pCurrentAsset;
    // -> class Module * scaleformModule;
    // -> class zGlobals globals;
}
// Range: 0x80046930 -> 0x80046BD0
void xSubTitlesUpdate(float dt /* f31 */) {
    // Local variables
    unsigned int uSearchIndex; // r30

    {
        // Range: 0x80046A94 -> 0x80046B68
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
    // -> char * pszDisplay;
    // -> static bool hasStringChanged;
    // -> static bool hasSetFirstString;
    // -> static float runningTime;
    // -> static unsigned int m_uLastTimeKey;
    // -> static class xSubtitlesAsset * m_pCurrentAsset;
    // -> class zGlobals globals;
}
