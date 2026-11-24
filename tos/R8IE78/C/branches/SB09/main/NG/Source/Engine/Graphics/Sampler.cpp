/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Sampler.cpp
*/
static class SamplerModule samplermod; // size: 0x98, address: 0x807774A0
static class ModuleRegistrator samplerModReg; // size: 0x8, address: 0x80777538
class Module * samplerModule; // size: 0x4, address: 0x806CD2C8
class RelativePriority priority[1]; // size: 0xC, address: 0x806CD2CC
class Texture * currentTextures[16]; // size: 0x40, address: 0x80777540
// Range: 0x801CEA20 -> 0x801CEA64
static void * @unnamed@WAD01_cpp@::SamplerModule::SamplerModule(class SamplerModule * this /* r31 */) {
    // References
    // -> static struct {} __vt__Q219@unnamed@WAD01_cpp@13SamplerModule;
}
// signature: @unnamed@WAD01_cpp@::SamplerModule::GetPriority(int &) const
// Range: 0x801CEA70 -> 0x801CEAB0
static class RelativePriority * @unnamed@WAD01_cpp@::SamplerModule::GetPriority() const {
    // References
    // -> class RelativePriority priority[1];
    // -> class Module * renderStateModule;
}
// Range: 0x801CEAB0 -> 0x801CEAC4
void Graphics::SamplerState::InvalidateCache() {
    // References
    // -> class Texture * currentTextures[16];
}
