/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\BuildMemory.cpp
*/
class BuildBuffer g_renderBuildBuffer; // size: 0x3C, address: 0x80774B68
class BuildMemoryModule buildMemoryMod; // size: 0x98, address: 0x80774BA8
class RelativePriority priority[4]; // size: 0x30, address: 0x806CB0B8
class Module * buildMemoryModule; // size: 0x4, address: 0x806CB0E8
static class ModuleRegistrator buildMemoryModReg; // size: 0x8, address: 0x80774C40
// Range: 0x801C2500 -> 0x801C254C
void * Graphics::BuildMemoryModule::BuildMemoryModule(class BuildMemoryModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28Graphics17BuildMemoryModule;
}
// signature: Graphics::BuildMemoryModule::GetPriority(int &) const
// Range: 0x801C2550 -> 0x801C25A4
class RelativePriority * Graphics::BuildMemoryModule::GetPriority() const {
    // References
    // -> class Module * sceneGraphModule;
    // -> class RelativePriority priority[4];
    // -> class Module * displayModule;
}
// signature: Graphics::BuildMemoryModule::RenderStartup(int)
// Range: 0x801C25B0 -> 0x801C2654
void Graphics::BuildMemoryModule::RenderStartup() {
    // References
    // -> class BuildBuffer g_renderBuildBuffer;
}
// signature: Graphics::BuildMemoryModule::RenderShutdown(int)
// Range: 0x801C26C0 -> 0x801C2738
void Graphics::BuildMemoryModule::RenderShutdown() {
    // References
    // -> class BuildBuffer g_renderBuildBuffer;
}
// signature: Graphics::BuildMemoryModule::RenderFrameEnd(int)
// Range: 0x801C2740 -> 0x801C275C
void Graphics::BuildMemoryModule::RenderFrameEnd() {
    // References
    // -> class BuildBuffer g_renderBuildBuffer;
}
