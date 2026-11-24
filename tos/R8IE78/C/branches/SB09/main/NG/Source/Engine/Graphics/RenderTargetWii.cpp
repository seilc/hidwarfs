/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\RenderTargetWii.cpp
*/
int wiiHDR_Dither; // size: 0x4, address: 0x806CD250
int wiiHDR_FinalPass; // size: 0x4, address: 0x806CD254
int wiiHDR_FancyToggle; // size: 0x4, address: 0x806CD258
int wiiHDR_PrePasses; // size: 0x4, address: 0x806CD25C
int wiiHDR_FancyFaster; // size: 0x4, address: 0x806CD260
int wiiHDR_DoPasses; // size: 0x4, address: 0x806CD264
int wiiHDR_Smooth; // size: 0x4, address: 0x80777320
unsigned char wiiHDR_Recombine[4]; // size: 0x4, address: 0x806CD268
bool delayedFlipPending; // size: 0x1, address: 0x80777324
unsigned char * SharedBuffer; // size: 0x4, address: 0x80777328
unsigned int SharedBufferSize; // size: 0x4, address: 0x8077732C
int curValue; // size: 0x4, address: 0x806CD26C
int wiiHdrSizes[5]; // size: 0x14, address: 0x806CD270
float s_work[4][2]; // size: 0x20, address: 0x806930A8
float zero_offsets[1][2]; // size: 0x8, address: 0x806930C8
float diagonal_00_11_offsets[2][2]; // size: 0x10, address: 0x806930D0
float diagonal_01_10_offsets[2][2]; // size: 0x10, address: 0x806930E0
float square_offsets[4][2]; // size: 0x20, address: 0x806930F0
class _GXColor colorScale; // size: 0x4, address: 0x80693110
unsigned int numVSyncWaitWii; // size: 0x4, address: 0x80777330
unsigned long retraceCount; // size: 0x4, address: 0x80779ECC
// Range: 0x801CAC00 -> 0x801CACD4
void Graphics::RenderTarget::SetViewport(class Viewport * viewp /* r31 */) {
    // Local variables
    float zmin; // f5
    float zmax; // f6
}
// signature: Graphics::ScreenRenderTargetWii::WiiCopyFilter(int)
// Range: 0x801CACE0 -> 0x801CAD4C
void Graphics::ScreenRenderTargetWii::WiiCopyFilter() {
    {
        // Range: 0x801CAD24 -> 0x801CAD3C
        // Local variables
        unsigned char unusedB[7]; // r1+0x8
        unsigned char unusedA[12][2]; // r1+0x10
    }

    // References
    // -> static class _GXRenderModeObj * renderModeObj;
    // -> int curValue;
}
// Range: 0x801CAD50 -> 0x801CADF8
void * Graphics::ScreenRenderTargetWii::ScreenRenderTargetWii(class ScreenRenderTargetWii * this /* r29 */) {
    // References
    // -> struct {} __vt__Q28Graphics21ScreenRenderTargetWii;
}
// Range: 0x801CAE90 -> 0x801CAF28
void * Graphics::ScreenRenderTargetWii::~ScreenRenderTargetWii(class ScreenRenderTargetWii * this /* r29 */) {
}
// Range: 0x801CAF30 -> 0x801CAFDC
void Graphics::ScreenRenderTargetWii::HDRSize(class ScreenRenderTargetWii * this /* r25 */) {
    // Local variables
    class _GXRenderModeObj * renderMode; // r28
    unsigned int totalSize; // r27

    {
        // Range: 0x801CAF44 -> 0x801CAFAC
        // Local variables
        int i; // r26

        {
            // Range: 0x801CAF44 -> 0x801CAFAC
            // Local variables
            int size; // r4
        }
    }

    // References
    // -> unsigned int SharedBufferSize;
    // -> int wiiHdrSizes[5];
    // -> static class _GXRenderModeObj * renderModeObj;
}
// Range: 0x801CAFE0 -> 0x801CB038
void Graphics::ScreenRenderTargetWii::ScreenWarpSize() {
    // Local variables
    unsigned int totalSize; // r3

    // References
    // -> unsigned int SharedBufferSize;
    // -> static class _GXRenderModeObj * renderModeObj;
}
// Range: 0x801CB040 -> 0x801CB098
void Graphics::ScreenRenderTargetWii::BlackWhiteSize() {
    // Local variables
    unsigned int totalSize; // r3

    // References
    // -> unsigned int SharedBufferSize;
    // -> static class _GXRenderModeObj * renderModeObj;
}
// signature: Graphics::ScreenRenderTargetWii::Create(int, int)
// Range: 0x801CB0A0 -> 0x801CB388
void Graphics::ScreenRenderTargetWii::Create(class ScreenRenderTargetWii * this /* r29 */) {
    // Local variables
    class _GXRenderModeObj * renderMode; // r0
    unsigned char * curBuffer; // r23

    {
        // Range: 0x801CB130 -> 0x801CB1EC
        // Local variables
        int i; // r22

        {
            // Range: 0x801CB130 -> 0x801CB1EC
            // Local variables
            int size; // r21
        }
    }
    {
        // Range: 0x801CB1EC -> 0x801CB29C
        // Local variables
        int i; // r21

        {
            // Range: 0x801CB1EC -> 0x801CB29C
            // Local variables
            int size; // r22
        }
    }

    // References
    // -> int wiiHdrSizes[5];
    // -> unsigned int SharedBufferSize;
    // -> static class _GXRenderModeObj * renderModeObj;
    // -> unsigned char * SharedBuffer;
}
// Range: 0x801CB390 -> 0x801CB430
void Graphics::ScreenRenderTargetWii::Destroy(class ScreenRenderTargetWii * this /* r27 */) {
    {
        // Range: 0x801CB3A0 -> 0x801CB3DC
        // Local variables
        int i; // r28
    }

    // References
    // -> unsigned char * SharedBuffer;
    // -> unsigned int SharedBufferSize;
}
// signature: Graphics::ScreenRenderTargetWii::StartScreenRenderTarget(bool)
// Range: 0x801CB430 -> 0x801CB4BC
void Graphics::ScreenRenderTargetWii::StartScreenRenderTarget() {
    // Local variables
    class _GXColor clearColor; // r1+0xC
}
// Range: 0x801CB4C0 -> 0x801CB5A8
static void Graphics::WiiTexgenOffsets(float screenW /* f30 */, float screenH /* f31 */, float (* table)[2] /* r27 */, int count /* r28 */) {
    // Local variables
    float texmtx[2][4]; // r1+0x8

    {
        // Range: 0x801CB530 -> 0x801CB580
        // Local variables
        int i; // r29
    }
}
// Range: 0x801CB5B0 -> 0x801CB6A0
static void Graphics::WiiScreenQuad(float x /* f28 */, float y /* f29 */, float screenW /* f30 */, float screenH /* f31 */) {
}
// Range: 0x801CB6B0 -> 0x801CCFA4
void Graphics::ScreenRenderTargetWii::ApplyWiiHDR(class ScreenRenderTargetWii * this /* r24 */) {
    // Local variables
    float projection[4][4]; // r1+0xA8
    float modelview[3][4]; // r1+0x78

    {
        // Range: 0x801CB938 -> 0x801CBC28
        // Local variables
        int i; // r25
    }
    {
        // Range: 0x801CBDA4 -> 0x801CC82C
        // Local variables
        class _GXColor recombineCol3; // r1+0x2C
        class _GXColor recombineCol21; // r1+0x30
        class _GXColor recombineCol0; // r1+0x34
        unsigned int height; // r26
        unsigned int width; // r25

        {
            // Range: 0x801CBDCC -> 0x801CBE48
            // Local variables
            int i; // r19
        }
        {
            // Range: 0x801CC460 -> 0x801CC4A0
            // Local variables
            int i; // r19
        }
    }
    {
        // Range: 0x801CC82C -> 0x801CCAA4
        // Local variables
        float texmtx[2][4]; // r1+0x58
        float offsetY[4]; // r1+0x38
        float offsetX[4]; // r1+0x48
        class _GXColor colorScale; // r1+0x28

        {
            // Range: 0x801CC8F0 -> 0x801CCA24
            // Local variables
            int i; // r20
        }
        {
            // Range: 0x801CCA78 -> 0x801CCAA4
            // Local variables
            int i; // r19
        }
    }
    {
        // Range: 0x801CCDC0 -> 0x801CCF48
        // Local variables
        class _GXColor blendScale1; // r1+0x24
        unsigned char blendFactor1; // r4
    }

    // References
    // -> class BlackAndWhiteBlendSettings GlobalBWSettings;
    // -> int wiiHDR_Dither;
    // -> int wiiHDR_FinalPass;
    // -> unsigned char wiiHDR_Recombine[4];
    // -> float square_offsets[4][2];
    // -> float diagonal_01_10_offsets[2][2];
    // -> int wiiHDR_DoPasses;
    // -> float diagonal_00_11_offsets[2][2];
    // -> float zero_offsets[1][2];
    // -> int wiiHDR_FancyFaster;
    // -> class _GXColor colorScale;
    // -> int wiiHDR_FancyToggle;
    // -> float s_work[4][2];
    // -> int wiiHDR_PrePasses;
    // -> int gperf_postprocess;
    // -> static class _GXRenderModeObj * renderModeObj;
}
// Range: 0x801CCFB0 -> 0x801CD030
void Graphics::ScreenRenderTargetWii::ApplyWiiScreenWarp(class ScreenRenderTargetWii * this /* r30 */) {
    // References
    // -> class ScreenWarpManager * gScreenWarpManager;
    // -> static class _GXRenderModeObj * renderModeObj;
}
// Range: 0x801CD030 -> 0x801CD090
void Graphics::ScreenRenderTargetWii::Finish() {
    // References
    // -> bool delayedFlipPending;
    // -> void * WiiCurrentBuffer;
}
// Range: 0x801CD090 -> 0x801CD190
void Graphics::ScreenRenderTargetWii::DelayedFlip() {
    // Local variables
    bool waitForVsync; // r29

    // References
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> bool WiiFirstFrame;
    // -> void * WiiCurrentBuffer;
    // -> unsigned int numVSyncWaitWii;
    // -> unsigned long retraceCount;
    // -> bool delayedFlipPending;
}
// Range: 0x801CD190 -> 0x801CD220
void Graphics::ScreenRenderTargetWii::RenderPostEffects(class ScreenRenderTargetWii * this /* r30 */) {
    // References
    // -> int gperf_postprocess;
    // -> int wiiHDR_Smooth;
    // -> class PostProcess g_PostProcess;
}
// Range: 0x801CD220 -> 0x801CD2AC
void * Graphics::TextureRenderTargetWii::TextureRenderTargetWii(class TextureRenderTargetWii * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28Graphics22TextureRenderTargetWii;
    // -> struct {} __vt__Q28Graphics25TextureRenderTargetCommon;
}
// Range: 0x801CD310 -> 0x801CD388
void * Graphics::TextureRenderTargetWii::~TextureRenderTargetWii(class TextureRenderTargetWii * this /* r30 */) {
}
// signature: Graphics::TextureRenderTargetWii::CreateImmediate(int, int, int)
// Range: 0x801CD390 -> 0x801CD3C0
void Graphics::TextureRenderTargetWii::CreateImmediate() {
}
// Range: 0x801CD3C0 -> 0x801CD5D4
void Graphics::TextureRenderTargetWii::Finish(class TextureRenderTargetWii * this /* r31 */) {
    // Local variables
    enum _GXTexFmt wiiFormat; // r30
    int srcWidth; // r29
    int srcHeight; // r28
}
// signature: Graphics::TextureRenderTargetWii::Create(int, int, int, int)
// Range: 0x801CD5E0 -> 0x801CD614
void Graphics::TextureRenderTargetWii::Create(class TextureRenderTargetWii * this /* r30 */, int inumTextures /* r31 */) {
}
// Range: 0x801CD640 -> 0x801CDA20
void Graphics::TextureRenderTargetWii::CreateTexture(class TextureRenderTargetWii * this /* r29 */, int iformat /* r30 */) {
    // Local variables
    enum _GXTexFmt wiiFormat; // r31

    // References
    // -> unsigned char * SharedBuffer;
}
// Range: 0x801CDA20 -> 0x801CDB3C
void Graphics::TextureRenderTargetWii::DestroyTexture(class TextureRenderTargetWii * this /* r31 */) {
}
