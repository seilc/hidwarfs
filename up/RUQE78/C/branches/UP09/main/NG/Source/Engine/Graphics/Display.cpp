/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Display.cpp
*/
static class DisplayModule displaymod; // size: 0x98, address: 0x80846458
static class ModuleRegistrator displayModreg; // size: 0x8, address: 0x808464F0
class Module * displayModule; // size: 0x4, address: 0x807BEF98
unsigned int gCurrentIndexBuffer; // size: 0x4, address: 0x808464F8
void * WiiFrameBuffer1; // size: 0x4, address: 0x808464FC
void * WiiFrameBuffer2; // size: 0x4, address: 0x80846500
void * WiiCurrentBuffer; // size: 0x4, address: 0x80846504
bool WiiFirstFrame; // size: 0x1, address: 0x807BEF9C
int windowWidth; // size: 0x4, address: 0x80846508
int windowHeight; // size: 0x4, address: 0x8084650C
static class _GXRenderModeObj ourRenderModeObj; // size: 0x3C, address: 0x80846510
static class _GXRenderModeObj * renderModeObj; // size: 0x4, address: 0x8084654C
static unsigned int fbSize; // size: 0x4, address: 0x80846550
static void * WiiFifoBuffer; // size: 0x4, address: 0x80846560
static class GXFifoObj * WiiFifoObj; // size: 0x4, address: 0x80846580
class Viewport * activeViewport; // size: 0x4, address: 0x80846584
// Range: 0x802E6B30 -> 0x802E7000
static void @unnamed@WAD01_cpp@::CreateDisplay() {
    // Local variables
    unsigned int screenMode; // r0
    bool progressiveMode; // r0
    bool wasProgressiveMode; // r28
    unsigned short xfbHeight; // r27
    float yScale; // f0
    class _GXColor clearColor; // r1+0xC
    int framesToWait; // r27
    float frustMtx[4][4]; // r1+0xD0
    float perspMtx[4][4]; // r1+0x90
    float fovTan; // f0
    float tempWidth; // f2
    float tempHeight; // f7
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
// Range: 0x802E7000 -> 0x802E7010
static void @unnamed@WAD01_cpp@::DisplayModule::RenderStartup() {
    // References
    // -> class Viewport * activeViewport;
}
// signature: @unnamed@WAD01_cpp@::DisplayModule::RenderShutdown(int)
// Range: 0x802E7010 -> 0x802E70BC
static void @unnamed@WAD01_cpp@::DisplayModule::RenderShutdown() {
    // References
    // -> void * WiiFrameBuffer2;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> void * WiiFrameBuffer1;
}
// Range: 0x802E70BC -> 0x802E7114
void Graphics::Display::ClearForFMV() {
    // Local variables
    class _GXColor clearColor; // r1+0xC

    // References
    // -> void * WiiCurrentBuffer;
}
// Range: 0x802E7114 -> 0x802E7120
int Graphics::Display::GetScreenWidth() {
    // References
    // -> int windowWidth;
}
// Range: 0x802E7120 -> 0x802E712C
int Graphics::Display::GetScreenHeight() {
    // References
    // -> int windowHeight;
}
// Range: 0x802E712C -> 0x802E7138
class _GXRenderModeObj * Graphics::Display::GetRenderModeObj() {
    // References
    // -> static class _GXRenderModeObj * renderModeObj;
}
