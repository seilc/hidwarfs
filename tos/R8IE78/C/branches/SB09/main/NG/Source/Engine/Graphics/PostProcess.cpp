/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\PostProcess.cpp
*/
class PostProcess g_PostProcess; // size: 0xBD4, address: 0x807752E4
class HDRSettings GlobalHDRSettings; // size: 0x1C, address: 0x806CD1CC
class DoFEffectSettings GlobalDoFSettings; // size: 0x18, address: 0x806CD1E8
class BlackAndWhiteBlendSettings GlobalBWSettings; // size: 0x8, address: 0x80775EB8
float midGreyKeyValue; // size: 0x4, address: 0x80692D9C
unsigned char s_indexArray[48]; // size: 0x30, address: 0x80692DA8
// Range: 0x801C8820 -> 0x801C88A4
void * Graphics::PostProcess::PostProcess(class PostProcess * this /* r29 */) {
    // References
    // -> struct {} __vt__Q28Graphics11PostProcess;
}
// signature: Graphics::PostProcess::Init(int, int, World::GlobalFXEntity *)
// Range: 0x801C88B0 -> 0x801C88D0
void Graphics::PostProcess::Init() {
    // References
    // -> class ScreenWarpManager * gScreenWarpManager;
}
// Range: 0x801C88D0 -> 0x801C8928
void Graphics::PostProcess::RenderAttach() {
    // Local variables
    class TextureRenderTargetWii * i; // r30
    class TextureRenderTargetWii * end; // r29
}
// Range: 0x801C8930 -> 0x801C8980
void Graphics::PostProcess::RenderDetach() {
    // Local variables
    class TextureRenderTargetWii * i; // r31
    class TextureRenderTargetWii * end; // r30
}
// signature: Graphics::PostProcess::AddViewport(Graphics::Viewport *, float, float, float, float)
// Range: 0x801C8F40 -> 0x801C8FAC
void Graphics::PostProcess::AddViewport(class PostProcess * this /* r31 */) {
}
// Range: 0x801C8FB0 -> 0x801C8FE4
bool Graphics::PostProcess::IsReady() {
}
