/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Graphics.cpp
*/
int gperf_shadows; // size: 0x4, address: 0x80709434
int gperf_pause; // size: 0x4, address: 0x807FF204
int gperf_shadowScissor; // size: 0x4, address: 0x807FF208
int gperf_postprocess; // size: 0x4, address: 0x807FF20C
static class RenderModule rendermod; // size: 0x98, address: 0x807FF210
static class ModuleRegistrator renderModReg; // size: 0x8, address: 0x807FF2A8
class Module * renderModule; // size: 0x4, address: 0x80709438
static bool inRenderPhase; // size: 0x1, address: 0x807FF2B0
static class CriticalSection renderThreadCriticalSection; // size: 0x18, address: 0x807FF2C0
// signature: Graphics::RenderModule::Startup(int)
// Range: 0x80250E3C -> 0x80250E40
void Graphics::RenderModule::Startup() {
}
// signature: Graphics::RenderModule::Shutdown(int)
// Range: 0x80250E40 -> 0x80250E44
void Graphics::RenderModule::Shutdown() {
}
// signature: Graphics::RenderModule::Update(int)
// Range: 0x80250E44 -> 0x80250E48
void Graphics::RenderModule::Update() {
}
// Range: 0x80250E48 -> 0x80250E54
void Graphics::RenderModule::InitCriticalSection() {
    // References
    // -> static class CriticalSection renderThreadCriticalSection;
}
// Range: 0x80250E54 -> 0x80250E58
void Graphics::RenderModule::DestroyCriticalSection() {
}
// Range: 0x80250E58 -> 0x80250EB8
void Graphics::StartRenderThread() {
    // References
    // -> static bool inRenderPhase;
}
// Range: 0x80250EB8 -> 0x80250EFC
void Graphics::StopRenderThread() {
    // References
    // -> static bool inRenderPhase;
}
// Range: 0x80250EFC -> 0x80250F3C
void Graphics::FrameStepBegin() {
    // References
    // -> static bool inRenderPhase;
}
// Range: 0x80250F3C -> 0x80250FC4
void Graphics::FrameStepEnd() {
    // References
    // -> static bool inRenderPhase;
    // -> static class CriticalSection renderThreadCriticalSection;
}
