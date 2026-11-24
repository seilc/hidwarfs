/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\PostProcess.cpp
*/
class PostProcess g_PostProcess; // size: 0x6FC, address: 0x807FF574
class HDRSettings GlobalHDRSettings; // size: 0x1C, address: 0x80709484
class OutlineSettings GlobalOutlineSettings; // size: 0x14, address: 0x807094A0
class DoFEffectSettings GlobalDoFSettings; // size: 0x18, address: 0x807094B8
static int halfPixelOffsets[13][3]; // size: 0x9C, address: 0x807094D0
static bool w; // size: 0x1, address: 0x8070956C
static bool h; // size: 0x1, address: 0x8070956D
static bool downSample; // size: 0x1, address: 0x8070956E
static bool brightPassFilter; // size: 0x1, address: 0x8070956F
static bool blur; // size: 0x1, address: 0x80709570
static bool downSample2; // size: 0x1, address: 0x80709571
static bool renderBloom; // size: 0x1, address: 0x80709572
static bool renderStar; // size: 0x1, address: 0x80709573
// signature: Graphics::PostProcess::Init(int, int, World::GlobalFXEntity *)
// Range: 0x80255F18 -> 0x802560CC
void Graphics::PostProcess::Init() {
}
// Range: 0x802560CC -> 0x80256134
void Graphics::PostProcess::RenderAttach() {
    // Local variables
    class TextureRenderTarget * i; // r30
    class TextureRenderTarget * end; // r29
}
// Range: 0x80256134 -> 0x802561CC
void Graphics::PostProcess::RenderDetach() {
    // Local variables
    class TextureRenderTarget * i; // r30
    class TextureRenderTarget * end; // r29
}
