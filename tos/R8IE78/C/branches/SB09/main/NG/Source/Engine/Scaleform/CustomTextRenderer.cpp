/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Scaleform\CustomTextRenderer.cpp
*/
static char * defaultFontName; // size: 0x4, address: 0x806CEED0
// Range: 0x801F0A60 -> 0x801F0A9C
void * Scaleform::CustomTextRendererFontParams::CustomTextRendererFontParams() {
}
// Range: 0x801F0AA0 -> 0x801F0D40
void * Scaleform::CustomTextRenderer::CustomTextRenderer(class CustomTextRenderer * this /* r31 */, class GFxMovieDef * data /* r27 */, class GPtr & pRenderConfig /* r28 */) {
    // Local variables
    class TextParams defParams; // r1+0xC

    {
        // Range: 0x801F0CB4 -> 0x801F0CE0
        // Local variables
        int i; // r0
    }

    // References
    // -> static char * defaultFontName;
    // -> class GMemoryHeap * pGlobalHeap;
}
// Range: 0x801F0EF0 -> 0x801F0EFC
void Scaleform::CustomTextRenderer::SetTextChanged() {
}
// Range: 0x801F0F00 -> 0x801F0F80
void Scaleform::CustomTextRenderer::ClearText(class CustomTextRenderer * this /* r31 */) {
}
// signature: Scaleform::CustomTextRenderer::SetText(const char *, float, float, float, float, Scaleform::CustomTextRendererFontParams &, Scaleform::CustomTextHAlignment, Scaleform::CustomTextVAlignment, float, float)
// Range: 0x801F0F80 -> 0x801F10E4
void Scaleform::CustomTextRenderer::SetText(class CustomTextRenderer * this /* r29 */, float posX /* f26 */, float posY /* f27 */, float posX2 /* f28 */, float posY2 /* f29 */, class CustomTextRendererFontParams & fontParams /* r28 */, enum CustomTextHAlignment hAlignment /* r30 */, enum CustomTextVAlignment vAlignment /* r31 */, float pixelOffsetX /* f30 */, float pixelOffsetY /* f31 */) {
}
// Range: 0x801F1140 -> 0x801F12E0
void Scaleform::CustomTextRenderer::PrepareTextParams(class TextParams & params /* r30 */, class CustomTextRendererFontParams & fontParams /* r26 */, enum CustomTextHAlignment hAlignment /* r27 */, enum CustomTextVAlignment vAlignment /* r31 */, float * overrideFontSize /* r28 */) {
    // References
    // -> static char * defaultFontName;
}
// Range: 0x801F12E0 -> 0x801F174C
void Scaleform::CustomTextRenderer::RenderText(class CustomTextRenderer * this /* r31 */) {
    {
        // Range: 0x801F1344 -> 0x801F1500
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x801F1344 -> 0x801F14DC
            // Local variables
            enum CustomTextVAlignment vAlignment; // r26
            float yOffsetForVAlignCenter; // f29
            float currentTextBoxHeight; // f2
            float currentTextBoxWith; // f0
            class GSize textExtent; // r1+0x20
            class TextParams textParams; // r1+0x64
            float curTextSize; // r1+0x14
            float wantedTextBoxHeight; // f28
            float wantedTextBoxWidth; // f29
            class CustomTextRenderInfo & curRenderInfo; // r28

            {
                // Range: 0x801F1344 -> 0x801F1348
                // Local variables
                class GSize textExtent; // r1+0x18
            }
            {
                // Range: 0x801F1348 -> 0x801F1474
                // Local variables
                float HeightDiff; // f1
            }
        }
    }
    {
        // Range: 0x801F1510 -> 0x801F16F4
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x801F1510 -> 0x801F16BC
            // Local variables
            class GPtr drawBG; // r1+0xC
            class GPtr drawText; // r1+0x10
            float bgPosY2Real; // f24
            float bgPosX2Real; // f25
            float bgPosYReal; // f26
            float bgPosXReal; // f27
            float posY2Real; // f31
            float posX2Real; // f30
            float posYReal; // f29
            float posXReal; // f28
            class TextParams textParams; // r1+0x48
        }
    }
}
