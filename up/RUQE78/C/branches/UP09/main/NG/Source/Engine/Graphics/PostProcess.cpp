/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\PostProcess.cpp
*/
class PostProcess g_PostProcess; // size: 0xBD4, address: 0x80846A7C
class HDRSettings GlobalHDRSettings; // size: 0x1C, address: 0x807BF070
class OutlineSettings GlobalOutlineSettings; // size: 0x14, address: 0x807BF08C
class DoFEffectSettings GlobalDoFSettings; // size: 0x18, address: 0x807BF0A0
class BlackAndWhiteBlendSettings GlobalBWSettings; // size: 0x8, address: 0x80847650
static int halfPixelOffsets[13][3]; // size: 0x9C, address: 0x807BF0B8
static bool w; // size: 0x1, address: 0x807BF154
static bool h; // size: 0x1, address: 0x807BF155
static unsigned char s_indexArray[48]; // size: 0x30, address: 0x80787828
static bool downSample; // size: 0x1, address: 0x807BF156
static bool brightPassFilter; // size: 0x1, address: 0x807BF157
static bool blur; // size: 0x1, address: 0x807BF158
static bool downSample2; // size: 0x1, address: 0x807BF159
static bool renderBloom; // size: 0x1, address: 0x807BF15A
static bool renderStar; // size: 0x1, address: 0x807BF15B
// Range: 0x802ED29C -> 0x802ED304
void Graphics::PostProcess::RenderAttach() {
    // Local variables
    class TextureRenderTargetWii * i; // r30
    class TextureRenderTargetWii * end; // r29
}
// Range: 0x802ED304 -> 0x802ED35C
void Graphics::PostProcess::RenderDetach() {
    // Local variables
    class TextureRenderTargetWii * i; // r31
    class TextureRenderTargetWii * end; // r30
}
