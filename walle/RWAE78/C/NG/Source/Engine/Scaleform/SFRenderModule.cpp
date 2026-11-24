/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Scaleform\SFRenderModule.cpp
*/
class SFRenderModule rendMod; // size: 0xB0, address: 0x80806990
static class ModuleRegistrator sfRendModReg; // size: 0x8, address: 0x80806A40
class Module * sfRenderModule; // size: 0x4, address: 0x8070B244
// signature: Scaleform::SFRenderModule::RenderStartup(int)
// Range: 0x802A74D0 -> 0x802A75D8
void Scaleform::SFRenderModule::RenderStartup(class SFRenderModule * this /* r30 */) {
    // References
    // -> class Coordinator * coord;
    // -> bool initialized;
    // -> bool accessLock;
}
// signature: Scaleform::SFRenderModule::RenderShutdown(int)
// Range: 0x802A75D8 -> 0x802A75DC
void Scaleform::SFRenderModule::RenderShutdown() {
}
// Range: 0x802A75DC -> 0x802A782C
void Scaleform::SFRenderModule::display(class SFRenderModule * this /* r29 */, unsigned int viewNum /* r30 */) {
    // Local variables
    unsigned int dispIndex; // r30

    // References
    // -> float SFRMaxTime;
    // -> float SFRMinTime;
    // -> float SFRTime;
    // -> double millisecondsPerTick;
    // -> class Time lastSFRTime;
}
// signature: Scaleform::SFRenderModule::SwapRender(int)
// Range: 0x802A782C -> 0x802A7830
void Scaleform::SFRenderModule::SwapRender() {
}
// signature: Scaleform::SFRenderModule::sfPlayerStateChanged(Scaleform::eSFPlayerState)
// Range: 0x802A7830 -> 0x802A7838
void Scaleform::SFRenderModule::sfPlayerStateChanged() {
}
