/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Sampler.cpp
*/
static class SamplerModule samplermod; // size: 0x98, address: 0x80848C40
static class ModuleRegistrator samplerModReg; // size: 0x8, address: 0x80848CD8
class Module * samplerModule; // size: 0x4, address: 0x807BF2BC
static class RelativePriority priority[1]; // size: 0xC, address: 0x807BF2C0
class Texture * currentTextures[16]; // size: 0x40, address: 0x80848CE8
// signature: @unnamed@WAD01_cpp@::SamplerModule::GetPriority(int &) const
// Range: 0x802FD240 -> 0x802FD280
static class RelativePriority * @unnamed@WAD01_cpp@::SamplerModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[1];
    // -> class Module * renderStateModule;
}
// signature: @unnamed@WAD01_cpp@::SamplerModule::RenderStartup(int)
// Range: 0x802FD280 -> 0x802FD284
static void @unnamed@WAD01_cpp@::SamplerModule::RenderStartup() {
}
// signature: @unnamed@WAD01_cpp@::SamplerModule::RenderFrameBegin(int)
// Range: 0x802FD284 -> 0x802FD288
static void @unnamed@WAD01_cpp@::SamplerModule::RenderFrameBegin() {
}
// Range: 0x802FD288 -> 0x802FD29C
void Graphics::SamplerState::InvalidateCache() {
    // References
    // -> class Texture * currentTextures[16];
}
