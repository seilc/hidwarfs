/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\RenderTarget.cpp
*/
int wiiHDR_Dither; // size: 0x4, address: 0x80709670
int wiiHDR_FinalPass; // size: 0x4, address: 0x80709674
int wiiHDR_RGB8; // size: 0x4, address: 0x80709678
int wiiHDR_FancyToggle; // size: 0x4, address: 0x8070967C
int wiiHDR_PrePasses; // size: 0x4, address: 0x80709680
int wiiHDR_FancyFaster; // size: 0x4, address: 0x80709684
int wiiHDR_DoPasses; // size: 0x4, address: 0x80709688
unsigned char wiiHDR_Recombine[4]; // size: 0x4, address: 0x8070968C
bool delayedFlipPending; // size: 0x1, address: 0x808010E1
unsigned char * HDRShadowSharedBuffer; // size: 0x4, address: 0x808010E4
unsigned long HDRShadowSharedBufferSize; // size: 0x4, address: 0x808010E8
static float zero_offsets[1][2]; // size: 0x8, address: 0x806D5EA0
static float diagonal_00_11_offsets[2][2]; // size: 0x10, address: 0x806D5EA8
static float diagonal_01_10_offsets[2][2]; // size: 0x10, address: 0x806D5EB8
static float square_offsets[4][2]; // size: 0x20, address: 0x806D5EC8
static class _GXColor colorScale; // size: 0x4, address: 0x806D5EE8
// Range: 0x80262510 -> 0x802625E4
void Graphics::RenderTarget::SetViewport(class Viewport * viewp /* r31 */) {
    // Local variables
    float zmin; // f5
    float zmax; // f6
}
// signature: Graphics::RenderTarget::TweakDepthRange(Graphics::Viewport *, float, float)
// Range: 0x802625E4 -> 0x802625E8
void Graphics::RenderTarget::TweakDepthRange() {
    // Local variables
    float zmin; // f0
    float zmax; // f0
    float lzmin; // f0
    float lzmax; // f0
}
// Range: 0x802625E8 -> 0x80262770
void * Graphics::ScreenRenderTarget::ScreenRenderTarget(class ScreenRenderTarget * this /* r28 */) {
    // References
    // -> struct {} __vt__Q28Graphics7Texture;
    // -> struct {} __vt__Q28Graphics19TextureRenderTarget;
    // -> struct {} __vt__Q28Graphics18ScreenRenderTarget;
}
// Range: 0x802627E8 -> 0x8026286C
void * Graphics::ScreenRenderTarget::~ScreenRenderTarget(class ScreenRenderTarget * this /* r29 */) {
}
// signature: Graphics::ScreenRenderTarget::Create(int, int)
// Range: 0x8026286C -> 0x80262AB8
void Graphics::ScreenRenderTarget::Create(class ScreenRenderTarget * this /* r30 */) {
    // Local variables
    class _GXRenderModeObj * renderMode; // r31
    int wiiHdrSizes[5]; // r1+0x8
    unsigned char * curBuffer; // r25

    {
        // Range: 0x802628AC -> 0x80262908
        // Local variables
        int i; // r28

        {
            // Range: 0x802628AC -> 0x80262908
            // Local variables
            int size; // r4
        }
    }
    {
        // Range: 0x8026295C -> 0x802629E8
        // Local variables
        int i; // r24

        {
            // Range: 0x8026295C -> 0x802629E8
            // Local variables
            int size; // r23
        }
    }
    {
        // Range: 0x80262A08 -> 0x80262A88
        // Local variables
        int i; // r23

        {
            // Range: 0x80262A08 -> 0x80262A88
            // Local variables
            int size; // r24
        }
    }

    // References
    // -> unsigned char * HDRShadowSharedBuffer;
    // -> unsigned long HDRShadowSharedBufferSize;
    // -> static class _GXRenderModeObj * renderModeObj;
}
// Range: 0x80262AB8 -> 0x80262B4C
void Graphics::ScreenRenderTarget::Destroy() {
    {
        // Range: 0x80262AC8 -> 0x80262AEC
        // Local variables
        int i; // r28
    }

    // References
    // -> unsigned char * HDRShadowSharedBuffer;
}
// Range: 0x80262B4C -> 0x80262B50
void Graphics::ScreenRenderTarget::RenderAttach() {
}
// Range: 0x80262B50 -> 0x80262B54
void Graphics::ScreenRenderTarget::RenderDetach() {
}
// Range: 0x80262B54 -> 0x80262B58
void Graphics::ScreenRenderTarget::Refresh() {
}
// Range: 0x80262B58 -> 0x80264734
void Graphics::ScreenRenderTarget::ApplyWiiHDR(class ScreenRenderTarget * this /* r26 */) {
    // Local variables
    float projection[4][4]; // r1+0x140
    float modelview[3][4]; // r1+0x110

    {
        // Range: 0x80262EB8 -> 0x802640C4
        // Local variables
        class _GXColor recombineCol3; // r1+0x24
        class _GXColor recombineCol21; // r1+0x28
        class _GXColor recombineCol0; // r1+0x2C
        unsigned int height; // r28
        unsigned int width; // r27

        {
            // Range: 0x80262EF4 -> 0x80262F60
            // Local variables
            int i; // r22
        }
        {
            // Range: 0x80263A28 -> 0x80263A5C
            // Local variables
            int i; // r21
        }
    }
    {
        // Range: 0x802640C4 -> 0x802643C8
        // Local variables
        float texmtx[2][4]; // r1+0xF0
        float offsetY[4]; // r1+0x30
        float offsetX[4]; // r1+0x40
        class _GXColor colorScale; // r1+0x20

        {
            // Range: 0x802641A4 -> 0x802642BC
            // Local variables
            int i; // r24
        }
        {
            // Range: 0x8026439C -> 0x802643BC
            // Local variables
            int i; // r21
        }
    }

    // References
    // -> int wiiHDR_Dither;
    // -> unsigned char wiiHDR_Recombine[4];
    // -> static float square_offsets[4][2];
    // -> static float diagonal_01_10_offsets[2][2];
    // -> int wiiHDR_DoPasses;
    // -> static float diagonal_00_11_offsets[2][2];
    // -> static float zero_offsets[1][2];
    // -> int wiiHDR_FancyFaster;
    // -> static class _GXColor colorScale;
    // -> int wiiHDR_FancyToggle;
    // -> int wiiHDR_FinalPass;
    // -> int wiiHDR_RGB8;
    // -> int wiiHDR_PrePasses;
    // -> static class _GXRenderModeObj * renderModeObj;
}
// Range: 0x80264734 -> 0x80264794
void Graphics::ScreenRenderTarget::Finish() {
    // References
    // -> bool delayedFlipPending;
    // -> void * WiiCurrentBuffer;
}
// Range: 0x80264794 -> 0x80264854
void Graphics::ScreenRenderTarget::DelayedFlip() {
    // References
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> bool WiiFirstFrame;
    // -> void * WiiCurrentBuffer;
    // -> bool delayedFlipPending;
}
// Range: 0x80264854 -> 0x80264894
void * Graphics::DepthTextureRenderTarget::~DepthTextureRenderTarget(class DepthTextureRenderTarget * this /* r31 */) {
}
// Range: 0x80264894 -> 0x80264898
void Graphics::DepthTextureRenderTarget::RenderAttach() {
}
// Range: 0x80264898 -> 0x8026489C
void Graphics::DepthTextureRenderTarget::RenderDetach() {
}
// Range: 0x8026489C -> 0x802648A0
void Graphics::DepthTextureRenderTarget::Refresh() {
}
// Range: 0x802648A0 -> 0x802648A4
void Graphics::DepthTextureRenderTarget::Start() {
}
// Range: 0x802648A4 -> 0x802648A8
void Graphics::DepthTextureRenderTarget::Finish() {
}
// Range: 0x802648A8 -> 0x80264980
void * Graphics::TextureRenderTarget::TextureRenderTarget() {
    // References
    // -> struct {} __vt__Q28Graphics7Texture;
    // -> struct {} __vt__Q28Graphics19TextureRenderTarget;
}
// Range: 0x80264980 -> 0x802649C0
void * Graphics::TextureRenderTarget::~TextureRenderTarget(class TextureRenderTarget * this /* r31 */) {
}
// Range: 0x802649C0 -> 0x802649D0
void Graphics::TextureRenderTarget::RenderAttach() {
}
// Range: 0x802649D0 -> 0x802649D4
void Graphics::TextureRenderTarget::Refresh() {
}
// signature: Graphics::TextureRenderTarget::StartTextureRenderTarget(bool, bool)
// Range: 0x802649D4 -> 0x802649D8
void Graphics::TextureRenderTarget::StartTextureRenderTarget() {
}
// Range: 0x802649D8 -> 0x80264BB4
void Graphics::TextureRenderTarget::Finish(class TextureRenderTarget * this /* r31 */) {
    // Local variables
    int srcWidth; // r30
    int srcHeight; // r29
}
// signature: Graphics::TextureRenderTarget::CreateTexture(Graphics::TextureRenderTarget::TEXTURE_FORMAT, bool, bool)
// Range: 0x80264BB4 -> 0x80264E3C
void Graphics::TextureRenderTarget::CreateTexture(class TextureRenderTarget * this /* r31 */) {
    // References
    // -> unsigned char * HDRShadowSharedBuffer;
}
