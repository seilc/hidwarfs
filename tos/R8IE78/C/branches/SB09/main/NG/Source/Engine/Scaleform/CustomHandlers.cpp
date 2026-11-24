/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Scaleform\CustomHandlers.cpp
*/
char parsed[512]; // size: 0x200, address: 0x80783F18
// Range: 0x801F1810 -> 0x801F1A80
class GImageInfoBase * Scaleform::CustomImageCreator::CreateImage(class GFxImageCreateInfo & info /* r29 */) {
    // Local variables
    class GPtr newImage; // r1+0xC
    class GPtr texInfo; // r1+0x8
    class Coordinator * coordinator; // r30
    char * filename; // r0
    class TextureNode * curNode; // r0

    {
        // Range: 0x801F1968 -> 0x801F1A4C
        // Local variables
        class _GXTexObj * texHandle; // r0
        class GTextureWii * sfTexObj; // r29
    }

    // References
    // -> class GMemoryHeap * pGlobalHeap;
}
// Range: 0x801F1AE0 -> 0x801F1B28
void * Scaleform::CustomCommandHandler::CustomCommandHandler(class CustomCommandHandler * this /* r30 */, class Coordinator * sfc /* r31 */) {
    // References
    // -> struct {} __vt__Q29Scaleform20CustomCommandHandler;
}
// signature: Scaleform::CustomCommandHandler::Callback(GFxMovieView *, const char *, const char *)
// Range: 0x801F1D20 -> 0x801F1D74
void Scaleform::CustomCommandHandler::Callback(char * pcommand /* r30 */, char * parg /* r31 */) {
    // Local variables
    class ViewNode * curNode; // r0
}
// Range: 0x801F1D80 -> 0x801F1DC8
void * Scaleform::ExternalInterfaceHandler::ExternalInterfaceHandler(class ExternalInterfaceHandler * this /* r30 */, class Coordinator * sfc /* r31 */) {
    // References
    // -> struct {} __vt__Q29Scaleform24ExternalInterfaceHandler;
}
// Range: 0x801F1DD0 -> 0x801F1E54
void Scaleform::ExternalInterfaceHandler::Callback(class GFxMovieView * pmovieView /* r28 */, char * methodName /* r29 */, class GFxValue * args /* r30 */, unsigned int argCount /* r31 */) {
    // Local variables
    class ViewNode * curNode; // r0
    class GFxValue retVal; // r1+0x8
}
// Range: 0x801F1E60 -> 0x801F2064
void Scaleform::CustomTranslator::Translate(class TranslateInfo * ptranslateInfo /* r30 */) {
    {
        // Range: 0x801F1E68 -> 0x801F2050
        // Local variables
        char * text; // r31
        unsigned int len; // r1+0x8

        {
            // Range: 0x801F1E9C -> 0x801F1EC8
            // Local variables
            wchar_t * it; // r3
        }
        {
            // Range: 0x801F1EDC -> 0x801F2050
            // Local variables
            int wIndex; // r8

            {
                // Range: 0x801F1F3C -> 0x801F201C
                // Local variables
                unsigned int i; // r9
            }
        }
    }

    // References
    // -> char parsed[512];
}
