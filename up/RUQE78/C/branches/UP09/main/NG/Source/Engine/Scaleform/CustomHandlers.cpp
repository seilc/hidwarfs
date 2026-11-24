/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Scaleform\CustomHandlers.cpp
*/
static char parsed[256]; // size: 0x100, address: 0x8084DCF8
// Range: 0x80335128 -> 0x80335394
class GImageInfoBase * Scaleform::CustomImageCreator::CreateImage(class GFxImageCreateInfo & info /* r29 */) {
    // Local variables
    class GPtr newImage; // r1+0xC
    class GPtr texInfo; // r1+0x8
    class Coordinator * coordinator; // r30
    char * filename; // r0
    class TextureNode * curNode; // r0

    {
        // Range: 0x80335280 -> 0x80335350
        // Local variables
        class _GXTexObj * alphaTexHandle; // r0
        class _GXTexObj * texHandle; // r29
        class GTextureWii * sfTexObj; // r30
    }
}
// Range: 0x8033539C -> 0x80335408
void * Scaleform::CustomCommandHandler::CustomCommandHandler(class CustomCommandHandler * this /* r30 */, class Coordinator * sfc /* r31 */) {
    // References
    // -> struct {} __vt__Q29Scaleform20CustomCommandHandler;
    // -> struct {} __vt__8GFxState;
}
// signature: Scaleform::CustomCommandHandler::Callback(GFxMovieView *, const char *, const char *)
// Range: 0x80335414 -> 0x8033547C
void Scaleform::CustomCommandHandler::Callback() {
}
// Range: 0x8033547C -> 0x803354E8
void * Scaleform::ExternalInterfaceHandler::ExternalInterfaceHandler(class ExternalInterfaceHandler * this /* r30 */, class Coordinator * sfc /* r31 */) {
    // References
    // -> struct {} __vt__Q29Scaleform24ExternalInterfaceHandler;
    // -> struct {} __vt__8GFxState;
}
// signature: Scaleform::ExternalInterfaceHandler::Callback(GFxMovieView *, const char *, const GFxValue *, unsigned int)
// Range: 0x803354EC -> 0x803355B0
void Scaleform::ExternalInterfaceHandler::Callback(class GFxMovieView * pmovieView /* r31 */, char * methodName /* r11 */, class GFxValue * args /* r10 */) {
    // Local variables
    class GFxValue retVal; // r1+0x8
}
// signature: Scaleform::CustomTranslator::Translate(GFxWStringBuffer *, const wchar_t *)
// Range: 0x803355B0 -> 0x803357C4
bool Scaleform::CustomTranslator::Translate(class GFxWStringBuffer * dest /* r29 */) {
    // Local variables
    bool bTranslated; // r30

    {
        // Range: 0x803355B8 -> 0x803357A4
        // Local variables
        char * text; // r31
        unsigned int len; // r1+0x8

        {
            // Range: 0x803355F4 -> 0x80335610
            // Local variables
            wchar_t * it; // r3
        }
        {
            // Range: 0x80335654 -> 0x803357A4
            // Local variables
            int wIndex; // r7

            {
                // Range: 0x803356B0 -> 0x80335784
                // Local variables
                unsigned int i; // r8
            }
        }
    }

    // References
    // -> static char parsed[256];
}
