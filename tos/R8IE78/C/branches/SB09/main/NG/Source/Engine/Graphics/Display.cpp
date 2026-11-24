/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Display.cpp
*/
static class DisplayModule displaymod; // size: 0x98, address: 0x80774C48
static class ModuleRegistrator displayModreg; // size: 0x8, address: 0x80774CE0
class Module * displayModule; // size: 0x4, address: 0x806CB0F4
unsigned int gCurrentIndexBuffer; // size: 0x4, address: 0x80774CE8
void * WiiFrameBuffer1; // size: 0x4, address: 0x80774CEC
void * WiiFrameBuffer2; // size: 0x4, address: 0x80774CF0
void * WiiCurrentBuffer; // size: 0x4, address: 0x80774CF4
bool WiiFirstFrame; // size: 0x1, address: 0x806CB0F8
int windowWidth; // size: 0x4, address: 0x80774CF8
int windowHeight; // size: 0x4, address: 0x80774CFC
static class _GXRenderModeObj ourRenderModeObj; // size: 0x3C, address: 0x80774D00
static class _GXRenderModeObj * renderModeObj; // size: 0x4, address: 0x80774D3C
static unsigned int fbSize; // size: 0x4, address: 0x80774D40
static void * WiiFifoBuffer; // size: 0x4, address: 0x80774D60
static class GXFifoObj * WiiFifoObj; // size: 0x4, address: 0x80774D80
static unsigned char kWiiMenuVfilterInt[7]; // size: 0x7, address: 0x80692C10
class Viewport * activeViewport; // size: 0x4, address: 0x80774D84
// Range: 0x801C2860 -> 0x801C28BC
static void * @unnamed@WAD01_cpp@::DisplayModule::DisplayModule(class DisplayModule * this /* r31 */) {
    // References
    // -> static void * WiiFifoBuffer;
    // -> static struct {} __vt__Q219@unnamed@WAD01_cpp@13DisplayModule;
}
// signature: @unnamed@WAD01_cpp@::DisplayModule::RenderStartup(int)
// Range: 0x801C28C0 -> 0x801C2FB0
static void @unnamed@WAD01_cpp@::DisplayModule::RenderStartup() {
    // References
    // -> class WiiPipeState wiiPipeState;
    // -> unsigned int numVSyncWaitWii;
    // -> class StartupConfig * config;
    // -> void * WiiCurrentBuffer;
    // -> int windowHeight;
    // -> int windowWidth;
    // -> static class GXFifoObj * WiiFifoObj;
    // -> static void * WiiFifoBuffer;
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
    // -> static unsigned int fbSize;
    // -> static class _GXRenderModeObj * renderModeObj;
    // -> class _GXRenderModeObj GXMpal480IntDf;
    // -> class _GXRenderModeObj GXMpal480ProgSoft;
    // -> class _GXRenderModeObj GXEurgb60Hz480IntDf;
    // -> class _GXRenderModeObj GXEurgb60Hz480ProgSoft;
    // -> class _GXRenderModeObj GXPal528IntDf;
    // -> static unsigned char kWiiMenuVfilterInt[7];
    // -> class _GXRenderModeObj GXNtsc480IntDf;
    // -> static class _GXRenderModeObj ourRenderModeObj;
    // -> class _GXRenderModeObj GXNtsc480ProgSoft;
    // -> class Viewport * activeViewport;
}
// signature: @unnamed@WAD01_cpp@::DisplayModule::RenderShutdown(int)
// Range: 0x801C2FB0 -> 0x801C2FE4
static void @unnamed@WAD01_cpp@::DisplayModule::RenderShutdown() {
    // References
    // -> void * WiiFrameBuffer2;
    // -> void * WiiFrameBuffer1;
}
// Range: 0x801C2FF0 -> 0x801C3048
void Graphics::Display::ClearForFMV() {
    // Local variables
    class _GXColor clearColor; // r1+0xC

    // References
    // -> void * WiiCurrentBuffer;
}
// Range: 0x801C3050 -> 0x801C305C
int Graphics::Display::GetScreenWidth() {
    // References
    // -> int windowWidth;
}
// Range: 0x801C3060 -> 0x801C306C
int Graphics::Display::GetScreenHeight() {
    // References
    // -> int windowHeight;
}
// Range: 0x801C3070 -> 0x801C307C
class _GXRenderModeObj * Graphics::Display::GetRenderModeObj() {
    // References
    // -> static class _GXRenderModeObj * renderModeObj;
}
