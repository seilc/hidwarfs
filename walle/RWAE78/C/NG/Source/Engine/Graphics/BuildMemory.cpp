/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\BuildMemory.cpp
*/
class BuildBuffer g_renderBuildBuffer; // size: 0x3C, address: 0x807FEDF0
class BuildMemoryModule buildMemoryMod; // size: 0x98, address: 0x807FEE30
static class RelativePriority priority[4]; // size: 0x30, address: 0x807093A0
float ROUNDING_BONE_PAL; // size: 0x4, address: 0x807093D0
class Module * buildMemoryModule; // size: 0x4, address: 0x807093D4
static class ModuleRegistrator buildMemoryModReg; // size: 0x8, address: 0x807FEED0
// signature: Graphics::BuildMemoryModule::GetPriority(int &) const
// Range: 0x8024FA88 -> 0x8024FADC
class RelativePriority * Graphics::BuildMemoryModule::GetPriority() const {
    // References
    // -> class Module * sceneGraphModule;
    // -> static class RelativePriority priority[4];
    // -> class Module * displayModule;
}
// signature: Graphics::BuildMemoryModule::RenderStartup(int)
// Range: 0x8024FADC -> 0x8024FBD8
void Graphics::BuildMemoryModule::RenderStartup() {
    // References
    // -> class BuildBuffer g_renderBuildBuffer;
}
// signature: Graphics::BuildMemoryModule::RenderShutdown(int)
// Range: 0x8024FBD8 -> 0x8024FC58
void Graphics::BuildMemoryModule::RenderShutdown() {
    // References
    // -> class BuildBuffer g_renderBuildBuffer;
}
// signature: Graphics::BuildMemoryModule::RenderFrameEnd(int)
// Range: 0x8024FC58 -> 0x8024FCCC
void Graphics::BuildMemoryModule::RenderFrameEnd() {
    // References
    // -> class BuildBuffer g_renderBuildBuffer;
}
