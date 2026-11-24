/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Sampler.cpp
*/
static class SamplerModule samplermod; // size: 0x98, address: 0x80801240
static class ModuleRegistrator samplerModReg; // size: 0x8, address: 0x808012D8
class Module * samplerModule; // size: 0x4, address: 0x807096B4
static class RelativePriority priority[1]; // size: 0xC, address: 0x807096B8
class Texture * currentTextures[16]; // size: 0x40, address: 0x808012E8
// signature: @unnamed@WAD01_cpp@::SamplerModule::GetPriority(int &) const
// Range: 0x80265B68 -> 0x80265BA8
static class RelativePriority * @unnamed@WAD01_cpp@::SamplerModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[1];
    // -> class Module * renderStateModule;
}
// signature: @unnamed@WAD01_cpp@::SamplerModule::RenderStartup(int)
// Range: 0x80265BA8 -> 0x80265BAC
static void @unnamed@WAD01_cpp@::SamplerModule::RenderStartup() {
}
// signature: @unnamed@WAD01_cpp@::SamplerModule::RenderFrameBegin(int)
// Range: 0x80265BAC -> 0x80265BB0
static void @unnamed@WAD01_cpp@::SamplerModule::RenderFrameBegin() {
}
// Range: 0x80265BB0 -> 0x80265BC4
void Graphics::SamplerState::InvalidateCache() {
    // References
    // -> class Texture * currentTextures[16];
}
