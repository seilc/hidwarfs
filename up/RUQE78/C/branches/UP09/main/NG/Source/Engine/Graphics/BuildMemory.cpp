/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\BuildMemory.cpp
*/
class BuildBuffer g_renderBuildBuffer; // size: 0x3C, address: 0x80846370
class BuildMemoryModule buildMemoryMod; // size: 0x98, address: 0x808463B0
static class RelativePriority priority[4]; // size: 0x30, address: 0x807BEF60
float ROUNDING_BONE_PAL; // size: 0x4, address: 0x807BEF90
class Module * buildMemoryModule; // size: 0x4, address: 0x807BEF94
static class ModuleRegistrator buildMemoryModReg; // size: 0x8, address: 0x80846450
// signature: Graphics::BuildMemoryModule::GetPriority(int &) const
// Range: 0x802E68E8 -> 0x802E693C
class RelativePriority * Graphics::BuildMemoryModule::GetPriority() const {
    // References
    // -> class Module * sceneGraphModule;
    // -> static class RelativePriority priority[4];
    // -> class Module * displayModule;
}
// signature: Graphics::BuildMemoryModule::RenderStartup(int)
// Range: 0x802E693C -> 0x802E6A38
void Graphics::BuildMemoryModule::RenderStartup() {
    // References
    // -> class BuildBuffer g_renderBuildBuffer;
}
// signature: Graphics::BuildMemoryModule::RenderShutdown(int)
// Range: 0x802E6A38 -> 0x802E6AB8
void Graphics::BuildMemoryModule::RenderShutdown() {
    // References
    // -> class BuildBuffer g_renderBuildBuffer;
}
// signature: Graphics::BuildMemoryModule::RenderFrameEnd(int)
// Range: 0x802E6AB8 -> 0x802E6B2C
void Graphics::BuildMemoryModule::RenderFrameEnd() {
    // References
    // -> class BuildBuffer g_renderBuildBuffer;
}
