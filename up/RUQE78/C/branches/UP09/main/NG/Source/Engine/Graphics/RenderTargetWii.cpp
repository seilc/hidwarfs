/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\RenderTargetWii.cpp
*/
int wiiHDR_Dither; // size: 0x4, address: 0x807BF258
int wiiHDR_FinalPass; // size: 0x4, address: 0x807BF25C
int wiiHDR_RGB8; // size: 0x4, address: 0x807BF260
int wiiHDR_FancyToggle; // size: 0x4, address: 0x807BF264
int wiiHDR_PrePasses; // size: 0x4, address: 0x807BF268
int wiiHDR_FancyFaster; // size: 0x4, address: 0x807BF26C
int wiiHDR_DoPasses; // size: 0x4, address: 0x807BF270
unsigned char wiiHDR_Recombine[4]; // size: 0x4, address: 0x807BF274
bool delayedFlipPending; // size: 0x1, address: 0x80848AC9
unsigned char * HDRShadowSharedBuffer; // size: 0x4, address: 0x80848ACC
unsigned long HDRShadowSharedBufferSize; // size: 0x4, address: 0x80848AD0
static int size; // size: 0x4, address: 0x80848AD4
static float zero_offsets[1][2]; // size: 0x8, address: 0x80787BA0
static float diagonal_00_11_offsets[2][2]; // size: 0x10, address: 0x80787BA8
static float diagonal_01_10_offsets[2][2]; // size: 0x10, address: 0x80787BB8
static float square_offsets[4][2]; // size: 0x20, address: 0x80787BC8
static class _GXColor colorScale; // size: 0x4, address: 0x80787BE8
// Range: 0x802F94A0 -> 0x802F9574
void Graphics::RenderTarget::SetViewport(class Viewport * viewp /* r31 */) {
    // Local variables
    float zmin; // f5
    float zmax; // f6
}
// Range: 0x802F9574 -> 0x802F963C
void * Graphics::ScreenRenderTargetWii::ScreenRenderTargetWii(class ScreenRenderTargetWii * this /* r29 */) {
    // References
    // -> struct {} __vt__Q28Graphics21ScreenRenderTargetWii;
}
// Range: 0x802F9644 -> 0x802F96DC
void * Graphics::ScreenRenderTargetWii::~ScreenRenderTargetWii(class ScreenRenderTargetWii * this /* r29 */) {
}
// signature: Graphics::ScreenRenderTargetWii::Create(int, int)
// Range: 0x802F96DC -> 0x802F99C8
void Graphics::ScreenRenderTargetWii::Create(class ScreenRenderTargetWii * this /* r29 */) {
    // Local variables
    int wiiHdrSizes[5]; // r1+0x8
    unsigned char * curBuffer; // r24

    {
        // Range: 0x802F971C -> 0x802F9778
        // Local variables
        int i; // r27

        {
            // Range: 0x802F971C -> 0x802F9778
            // Local variables
            int size; // r4
        }
    }
    {
        // Range: 0x802F97CC -> 0x802F9858
        // Local variables
        int i; // r23

        {
            // Range: 0x802F97CC -> 0x802F9858
            // Local variables
            int size; // r22
        }
    }
    {
        // Range: 0x802F987C -> 0x802F98FC
        // Local variables
        int i; // r22

        {
            // Range: 0x802F987C -> 0x802F98FC
            // Local variables
            int size; // r23
        }
    }

    // References
    // -> unsigned char * HDRShadowSharedBuffer;
    // -> unsigned long HDRShadowSharedBufferSize;
    // -> static class _GXRenderModeObj * renderModeObj;
}
// Range: 0x802F99D4 -> 0x802F9A68
void Graphics::ScreenRenderTargetWii::Destroy() {
    {
        // Range: 0x802F99E4 -> 0x802F9A08
        // Local variables
        int i; // r28
    }

    // References
    // -> unsigned char * HDRShadowSharedBuffer;
}
// Range: 0x802F9A6C -> 0x802F9A70
void Graphics::ScreenRenderTargetWii::RenderAttach() {
}
// Range: 0x802F9A70 -> 0x802F9A74
void Graphics::ScreenRenderTargetWii::RenderDetach() {
}
// signature: Graphics::ScreenRenderTargetWii::StartScreenRenderTarget(bool)
// Range: 0x802F9A74 -> 0x802F9B00
void Graphics::ScreenRenderTargetWii::StartScreenRenderTarget() {
    // Local variables
    class _GXColor clearColor; // r1+0xC
}
// Range: 0x802F9B04 -> 0x802FB984
void Graphics::ScreenRenderTargetWii::ApplyWiiHDR(class ScreenRenderTargetWii * this /* r26 */) {
    // Local variables
    float projection[4][4]; // r1+0x148
    float modelview[3][4]; // r1+0x118

    {
        // Range: 0x802F9E64 -> 0x802FB0E8
        // Local variables
        class _GXColor recombineCol3; // r1+0x2C
        class _GXColor recombineCol21; // r1+0x30
        class _GXColor recombineCol0; // r1+0x34
        unsigned int height; // r27
        unsigned int width; // r28

        {
            // Range: 0x802F9E84 -> 0x802F9EF0
            // Local variables
            int i; // r22
        }
        {
            // Range: 0x802FAA08 -> 0x802FAA3C
            // Local variables
            int i; // r21
        }
    }
    {
        // Range: 0x802FB0E8 -> 0x802FB3F8
        // Local variables
        float texmtx[2][4]; // r1+0xF8
        float offsetY[4]; // r1+0x38
        float offsetX[4]; // r1+0x48
        class _GXColor colorScale; // r1+0x28

        {
            // Range: 0x802FB1C8 -> 0x802FB2E0
            // Local variables
            int i; // r24
        }
        {
            // Range: 0x802FB3CC -> 0x802FB3EC
            // Local variables
            int i; // r21
        }
    }
    {
        // Range: 0x802FB71C -> 0x802FB928
        // Local variables
        class _GXColor blendScale1; // r1+0x24
        unsigned char blendFactor1; // r4
    }

    // References
    // -> class BlackAndWhiteBlendSettings GlobalBWSettings;
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
// Range: 0x802FB984 -> 0x802FB9E4
void Graphics::ScreenRenderTargetWii::Finish() {
    // References
    // -> bool delayedFlipPending;
    // -> void * WiiCurrentBuffer;
}
// Range: 0x802FB9E8 -> 0x802FBA80
void Graphics::ScreenRenderTargetWii::DelayedFlip() {
    // References
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> bool WiiFirstFrame;
    // -> void * WiiCurrentBuffer;
    // -> bool delayedFlipPending;
}
// Range: 0x802FBA80 -> 0x802FBB08
void Graphics::ScreenRenderTargetWii::RenderPostEffects() {
    // References
    // -> int gperf_postprocess;
    // -> class PostProcess g_PostProcess;
}
// Range: 0x802FBB14 -> 0x802FBB24
void Graphics::DepthTextureRenderTargetWii::RenderDetach() {
}
// Range: 0x802FBB24 -> 0x802FBB28
void Graphics::DepthTextureRenderTargetWii::Refresh() {
}
// Range: 0x802FBB28 -> 0x802FBB2C
void Graphics::DepthTextureRenderTargetWii::Start() {
}
// Range: 0x802FBB2C -> 0x802FBB30
void Graphics::DepthTextureRenderTargetWii::Finish() {
}
// Range: 0x802FBB30 -> 0x802FBB34
void Graphics::DepthTextureRenderTargetWii::CreateTexture() {
}
// Range: 0x802FBB34 -> 0x802FBB38
void Graphics::DepthTextureRenderTargetWii::DestroyTexture() {
}
// Range: 0x802FBB38 -> 0x802FBC68
void * Graphics::TextureRenderTargetWii::TextureRenderTargetWii() {
    // References
    // -> struct {} __vt__Q28Graphics22TextureRenderTargetWii;
    // -> struct {} __vt__Q28Graphics7Texture;
}
// signature: Graphics::TextureRenderTargetWii::CreateImmediate(int, int, int)
// Range: 0x802FBC70 -> 0x802FBCA0
void Graphics::TextureRenderTargetWii::CreateImmediate() {
}
// signature: Graphics::TextureRenderTargetWii::Clear(int)
// Range: 0x802FBCA0 -> 0x802FBCA4
void Graphics::TextureRenderTargetWii::Clear() {
}
// signature: Graphics::TextureRenderTargetWii::StartTextureRenderTarget(bool, bool)
// Range: 0x802FBCA4 -> 0x802FBCA8
void Graphics::TextureRenderTargetWii::StartTextureRenderTarget() {
}
// Range: 0x802FBCAC -> 0x802FBEE0
void Graphics::TextureRenderTargetWii::Finish(class TextureRenderTargetWii * this /* r31 */) {
    // Local variables
    enum _GXTexFmt wiiFormat; // r30
    int srcWidth; // r29
    int srcHeight; // r28
}
// signature: Graphics::TextureRenderTargetWii::Create(int, int, int, int)
// Range: 0x802FBEE4 -> 0x802FBF08
void Graphics::TextureRenderTargetWii::Create() {
}
// Range: 0x802FBF28 -> 0x802FC31C
void Graphics::TextureRenderTargetWii::CreateTexture(class TextureRenderTargetWii * this /* r28 */, int iformat /* r29 */) {
    // Local variables
    enum _GXTexFmt wiiFormat; // r30

    // References
    // -> unsigned char * HDRShadowSharedBuffer;
}
// Range: 0x802FC31C -> 0x802FC438
void Graphics::TextureRenderTargetWii::DestroyTexture(class TextureRenderTargetWii * this /* r30 */) {
}
