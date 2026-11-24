/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Display.cpp
*/
static class DisplayModule displaymod; // size: 0x98, address: 0x807FEED8
static class ModuleRegistrator displayModreg; // size: 0x8, address: 0x807FEF70
class Module * displayModule; // size: 0x4, address: 0x807093D8
unsigned int gCurrentIndexBuffer; // size: 0x4, address: 0x807FEF78
void * WiiFrameBuffer1; // size: 0x4, address: 0x807FEF7C
void * WiiFrameBuffer2; // size: 0x4, address: 0x807FEF80
void * WiiCurrentBuffer; // size: 0x4, address: 0x807FEF84
bool WiiFirstFrame; // size: 0x1, address: 0x807093DC
int windowWidth; // size: 0x4, address: 0x807FEF88
int windowHeight; // size: 0x4, address: 0x807FEF8C
static class _GXRenderModeObj ourRenderModeObj; // size: 0x3C, address: 0x807FEF90
static class _GXRenderModeObj * renderModeObj; // size: 0x4, address: 0x807FEFCC
static unsigned int fbSize; // size: 0x4, address: 0x807FEFD0
static void * WiiFifoBuffer; // size: 0x4, address: 0x807FEFE0
static class GXFifoObj * WiiFifoObj; // size: 0x4, address: 0x807FF000
class Viewport * activeViewport; // size: 0x4, address: 0x807FF004
// Range: 0x8024FD0C -> 0x80250244
static void @unnamed@WAD01_cpp@::CreateDisplay() {
    // Local variables
    unsigned int screenMode; // r0
    bool progressiveMode; // r0
    bool wasProgressiveMode; // r28
    unsigned short xfbHeight; // r27
    float yScale; // f0
    class _GXColor clearColor; // r1+0xC
    int framesToWait; // r27
    float frustMtx[4][4]; // r1+0x110
    float perspMtx[4][4]; // r1+0xD0
    float orthoMtx[4][4]; // r1+0x90
    float fovTan; // f0
    float tempWidth; // f9
    float tempHeight; // f10
    class ViewMatrix perspMat; // r1+0x50
    class ViewMatrix orthoMat; // r1+0x10

    // References
    // -> static unsigned char s_stepLookupPixels[512];
    // -> static class _GXTexObj s_stepLookupTexObj;
    // -> class WiiPipeState wiiPipeState;
    // -> static unsigned char s_unitLookupPixels[1024];
    // -> static class _GXTexObj s_unitLookupTexObj;
    // -> void * WiiCurrentBuffer;
    // -> int windowHeight;
    // -> int windowWidth;
    // -> static class GXFifoObj * WiiFifoObj;
    // -> static void * WiiFifoBuffer;
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> static unsigned int fbSize;
    // -> static class _GXRenderModeObj ourRenderModeObj;
    // -> class _GXRenderModeObj GXMpal480IntDf;
    // -> class _GXRenderModeObj GXMpal480ProgSoft;
    // -> class _GXRenderModeObj GXEurgb60Hz480IntDf;
    // -> class _GXRenderModeObj GXPal528IntDf;
    // -> class _GXRenderModeObj GXNtsc480IntDf;
    // -> static class _GXRenderModeObj * renderModeObj;
    // -> class _GXRenderModeObj GXNtsc480ProgSoft;
}
// signature: @unnamed@WAD01_cpp@::DisplayModule::RenderStartup(int)
// Range: 0x80250248 -> 0x80250258
static void @unnamed@WAD01_cpp@::DisplayModule::RenderStartup() {
    // References
    // -> class Viewport * activeViewport;
}
// signature: @unnamed@WAD01_cpp@::DisplayModule::RenderShutdown(int)
// Range: 0x80250258 -> 0x80250334
static void @unnamed@WAD01_cpp@::DisplayModule::RenderShutdown() {
    // References
    // -> void * WiiFrameBuffer2;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> void * WiiFrameBuffer1;
}
// Range: 0x80250334 -> 0x8025038C
void Graphics::Display::ClearForFMV() {
    // Local variables
    class _GXColor clearColor; // r1+0xC

    // References
    // -> void * WiiCurrentBuffer;
}
// signature: Graphics::Display::SetSuspendAndResume(bool)
// Range: 0x8025038C -> 0x80250390
void Graphics::Display::SetSuspendAndResume() {
}
// Range: 0x80250390 -> 0x8025039C
int Graphics::Display::GetScreenWidth() {
    // References
    // -> int windowWidth;
}
// Range: 0x8025039C -> 0x802503A8
int Graphics::Display::GetScreenHeight() {
    // References
    // -> int windowHeight;
}
// Range: 0x802503A8 -> 0x802503B4
class _GXRenderModeObj * Graphics::Display::GetRenderModeObj() {
    // References
    // -> static class _GXRenderModeObj * renderModeObj;
}
