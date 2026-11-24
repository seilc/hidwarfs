/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Scaleform\CustomTextRenderer.cpp
*/
static char * defaultFontName; // size: 0x4, address: 0x807C11F0
// Range: 0x8033373C -> 0x80333778
void * Scaleform::CustomTextRendererFontParams::CustomTextRendererFontParams() {
}
// Range: 0x80333778 -> 0x8033416C
void * Scaleform::CustomTextRenderer::CustomTextRenderer(class CustomTextRenderer * this /* r27 */, class GFxMovieDef * data /* r28 */, class GPtr & pRenderConfig /* r29 */) {
    // Local variables
    class TextParams defParams; // r1+0xC

    {
        // Range: 0x803340A4 -> 0x803340F0
        // Local variables
        int i; // r0
    }

    // References
    // -> static char * defaultFontName;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> bool IsHeapInitialized;
}
// Range: 0x80334BA4 -> 0x80334BB0
void Scaleform::CustomTextRenderer::SetTextChanged() {
}
// Range: 0x80334BF4 -> 0x80334D9C
void Scaleform::CustomTextRenderer::PrepareTextParams(class TextParams & params /* r27 */, class CustomTextRendererFontParams & fontParams /* r28 */, enum CustomTextHAlignment hAlignment /* r29 */, enum CustomTextVAlignment vAlignment /* r30 */, float * overrideFontSize /* r31 */) {
    // References
    // -> static char * defaultFontName;
}
// Range: 0x80334D9C -> 0x80335128
void Scaleform::CustomTextRenderer::RenderText(class CustomTextRenderer * this /* r31 */) {
    {
        // Range: 0x80334DE0 -> 0x80334F80
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x80334DE0 -> 0x80334F80
            // Local variables
            enum CustomTextVAlignment vAlignment; // r25
            float yOffsetForVAlignCenter; // f29
            float currentTextBoxHeight; // f2
            float currentTextBoxWith; // f0
            class GSize textExtent; // r1+0x18
            class TextParams textParams; // r1+0x4C
            float curTextSize; // r1+0xC
            float wantedTextBoxHeight; // f28
            float wantedTextBoxWidth; // f29
            class CustomTextRenderInfo & curRenderInfo; // r26

            {
                // Range: 0x80334DE0 -> 0x80334DE4
                // Local variables
                class GSize textExtent; // r1+0x10
            }
            {
                // Range: 0x80334DE4 -> 0x80334F1C
                // Local variables
                float HeightDiff; // f1
            }
        }
    }
    {
        // Range: 0x80334FC4 -> 0x803350E0
        // Local variables
        unsigned int i; // r25

        {
            // Range: 0x80334FCC -> 0x803350C0
            // Local variables
            class GPtr drawText; // r1+0x8
            float posY2Real; // f31
            float posX2Real; // f30
            float posYReal; // f29
            float posXReal; // f28
            class TextParams textParams; // r1+0x30
        }
    }
}
