/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Scaleform\ScaleformModule.cpp
*/
class ScaleformModule sfMod; // size: 0xB8, address: 0x8084DE10
static class ModuleRegistrator sfModReg; // size: 0x8, address: 0x8084DEC8
class Module * scaleformModule; // size: 0x4, address: 0x807C12F8
bool isFirstScene; // size: 0x1, address: 0x807C12FC
// signature: Scaleform::ScaleformModule::Startup(int)
// Range: 0x8034860C -> 0x803489AC
void Scaleform::ScaleformModule::Startup(class ScaleformModule * this /* r29 */) {
    // References
    // -> class Coordinator * coord;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> bool initialized;
    // -> bool accessLock;
}
// signature: Scaleform::ScaleformModule::Shutdown(int)
// Range: 0x803489AC -> 0x803489B0
void Scaleform::ScaleformModule::Shutdown() {
}
// signature: Scaleform::ScaleformModule::RenderStartup(int)
// Range: 0x803489B0 -> 0x803489B4
void Scaleform::ScaleformModule::RenderStartup() {
}
// signature: Scaleform::ScaleformModule::RenderShutdown(int)
// Range: 0x803489B4 -> 0x803489B8
void Scaleform::ScaleformModule::RenderShutdown() {
}
// signature: Scaleform::ScaleformModule::Update(int)
// Range: 0x803489B8 -> 0x80348DEC
void Scaleform::ScaleformModule::Update(class ScaleformModule * this /* r27 */) {
    // Local variables
    class ViewNode * pMovie; // r28

    {
        // Range: 0x80348BC0 -> 0x80348C78
        // Local variables
        class Rect2D viewRect; // r1+0x60
    }
    {
        // Range: 0x80348CA8 -> 0x80348D44
        // Local variables
        int poolSize; // r0
        class NodeType * pool; // r26
        class Iterator pendTail; // r1+0x10
        class Iterator pendIter; // r1+0x14
    }
}
// signature: Scaleform::ScaleformModule::SwapUpdate(int)
// Range: 0x80348F14 -> 0x80348F2C
void Scaleform::ScaleformModule::SwapUpdate() {
}
// signature: Scaleform::ScaleformModule::sfPlayerStateChanged(Scaleform::eSFPlayerState)
// Range: 0x80348F2C -> 0x80348F44
void Scaleform::ScaleformModule::sfPlayerStateChanged() {
}
// Range: 0x80348F44 -> 0x803498FC
void Scaleform::ScaleformModule::applyEvents(class ScaleformModule * this /* r23 */, class ViewNode * pMovie /* r24 */) {
    // Local variables
    class PoolList * events; // r5
    enum eSFEventType eventInst; // r0

    {
        // Range: 0x80348F70 -> 0x803498DC
        // Local variables
        class GFxValue arg; // r1+0x50
        class GFxValue * args; // r3

        {
            // Range: 0x80348F70 -> 0x80348F78
            // Local variables
            class GFxValue boolArgs[4]; // r1+0x60
        }
    }
}
// Range: 0x803498FC -> 0x803499B4
void Scaleform::ScaleformModule::displayCustomTextsOnly(class ScaleformModule * this /* r30 */) {
}
// signature: Scaleform::ScaleformModule::display(unsigned int)
// Range: 0x803499B4 -> 0x80349C34
void Scaleform::ScaleformModule::display(class ScaleformModule * this /* r30 */) {
    // Local variables
    unsigned int dispIndex; // r31
}
// Range: 0x80349C34 -> 0x80349C4C
bool Scaleform::ScaleformModule::IsCustomTextRendererAvailable() {
}
// signature: Scaleform::ScaleformModule::SetCustomText(const char *, float, float, float, float, Scaleform::CustomTextRendererFontParams &, Scaleform::CustomTextHAlignment, Scaleform::CustomTextVAlignment, float, float)
// Range: 0x80349C4C -> 0x80349E40
void Scaleform::ScaleformModule::SetCustomText(float posX /* f26 */, float posY /* f27 */, float posX2 /* f28 */, float posY2 /* f29 */, class CustomTextRendererFontParams & fontParams /* r28 */, enum CustomTextHAlignment hAlignment /* r29 */, enum CustomTextVAlignment vAlignment /* r30 */, float pixelOffsetX /* f30 */, float pixelOffsetY /* f31 */) {
}
// Range: 0x80349E40 -> 0x80349EA8
void Scaleform::ScaleformModule::ClearCustomText() {
}
