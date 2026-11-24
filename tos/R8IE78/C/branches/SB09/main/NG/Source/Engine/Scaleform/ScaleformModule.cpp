/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Scaleform\ScaleformModule.cpp
*/
class ScaleformModule sfMod; // size: 0xB8, address: 0x8077CF38
static class ModuleRegistrator sfModReg; // size: 0x8, address: 0x8077CFF0
class Module * scaleformModule; // size: 0x4, address: 0x806CEFC8
bool isFirstScene; // size: 0x1, address: 0x806CEFCC
int forceGarbageCollect; // size: 0x4, address: 0x80784118
// Range: 0x801F6B40 -> 0x801F6BA4
void * Scaleform::ScaleformModule::ScaleformModule(class ScaleformModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q29Scaleform15ScaleformModule;
}
// signature: Scaleform::ScaleformModule::Startup(int)
// Range: 0x801F6BB0 -> 0x801F6C00
void Scaleform::ScaleformModule::Startup(class ScaleformModule * this /* r31 */) {
}
// signature: Scaleform::ScaleformModule::Update(int)
// Range: 0x801F6C00 -> 0x801F6FFC
void Scaleform::ScaleformModule::Update(class ScaleformModule * this /* r27 */) {
    // Local variables
    class ViewNode * pMovie; // r28

    {
        // Range: 0x801F6D00 -> 0x801F6D00
        // Local variables
        class Rect2D viewRect; // r1+0x48
    }

    // References
    // -> int forceGarbageCollect;
    // -> float dt;
}
// signature: Scaleform::ScaleformModule::SwapUpdate(int)
// Range: 0x801F7000 -> 0x801F7018
void Scaleform::ScaleformModule::SwapUpdate() {
}
// signature: Scaleform::ScaleformModule::sfPlayerStateChanged(Scaleform::eSFPlayerState)
// Range: 0x801F7020 -> 0x801F7038
void Scaleform::ScaleformModule::sfPlayerStateChanged() {
}
// Range: 0x801F7040 -> 0x801F7920
void Scaleform::ScaleformModule::applyEvents(class ViewNode * pMovie /* r25 */) {
    // Local variables
    class PoolList * events; // r5
    enum eSFEventType eventInst; // r0

    {
        // Range: 0x801F7068 -> 0x801F7908
        // Local variables
        class GFxValue arg; // r1+0x8
        class GFxValue * args; // r5

        {
            // Range: 0x801F7068 -> 0x801F7088
            // Local variables
            class GFxValue boolArgs[4]; // r1+0x18

            {
                // Range: 0x801F7068 -> 0x801F7088
                // Local variables
                int i; // r0
            }
        }
    }
}
// Range: 0x801F7980 -> 0x801F79D4
void Scaleform::ScaleformModule::displayCustomTextsOnly(class ScaleformModule * this /* r31 */) {
}
// Range: 0x801F79E0 -> 0x801F7A4C
void Scaleform::ScaleformModule::skipDisplay(class ScaleformModule * this /* r31 */) {
}
// signature: Scaleform::ScaleformModule::display(unsigned int)
// Range: 0x801F7A50 -> 0x801F7C40
void Scaleform::ScaleformModule::display(class ScaleformModule * this /* r30 */) {
    // Local variables
    unsigned int dispIndex; // r31

    {
        // Range: 0x801F7AF4 -> 0x801F7C2C
        // Local variables
        class ViewNode * pMovie; // r0

        {
            // Range: 0x801F7B6C -> 0x801F7BF4
            // Local variables
            class GViewport viewport; // r1+0x8
        }
    }
}
// signature: Scaleform::ScaleformModule::SetCustomText(const char *, float, float, float, float, Scaleform::CustomTextRendererFontParams &, Scaleform::CustomTextHAlignment, Scaleform::CustomTextVAlignment, float, float)
// Range: 0x801F7C90 -> 0x801F7CA8
void Scaleform::ScaleformModule::SetCustomText() {
}
// Range: 0x801F7CB0 -> 0x801F7CB8
void Scaleform::ScaleformModule::ClearCustomText() {
}
