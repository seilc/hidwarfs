/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Graphics.cpp
*/
int gperf_shadows; // size: 0x4, address: 0x8084662C
int gperf_pause; // size: 0x4, address: 0x80846630
int gperf_shadowScissor; // size: 0x4, address: 0x80846634
int gperf_postprocess; // size: 0x4, address: 0x80846638
static class RenderModule rendermod; // size: 0x98, address: 0x80846640
static class ModuleRegistrator renderModReg; // size: 0x8, address: 0x808466D8
class Module * renderModule; // size: 0x4, address: 0x807BEFEC
static bool inRenderPhase; // size: 0x1, address: 0x808466E0
static class CriticalSection renderThreadCriticalSection; // size: 0x20, address: 0x808466F0
// signature: Graphics::RenderModule::Startup(int)
// Range: 0x802E79F8 -> 0x802E79FC
void Graphics::RenderModule::Startup() {
}
// signature: Graphics::RenderModule::Shutdown(int)
// Range: 0x802E79FC -> 0x802E7A00
void Graphics::RenderModule::Shutdown() {
}
// signature: Graphics::RenderModule::Update(int)
// Range: 0x802E7A00 -> 0x802E7A04
void Graphics::RenderModule::Update() {
}
// Range: 0x802E7A04 -> 0x802E7A1C
void Graphics::RenderModule::InitCriticalSection() {
    // References
    // -> static class CriticalSection renderThreadCriticalSection;
}
// Range: 0x802E7A1C -> 0x802E7A98
void Graphics::RenderLoopEnterCS() {
    // References
    // -> static class CriticalSection renderThreadCriticalSection;
}
// Range: 0x802E7A98 -> 0x802E7AC4
void Graphics::RenderLoopExitCS() {
    // References
    // -> static class CriticalSection renderThreadCriticalSection;
}
// Range: 0x802E7AC4 -> 0x802E7B24
void Graphics::StartRenderThread() {
    // References
    // -> static bool inRenderPhase;
}
// Range: 0x802E7B24 -> 0x802E7B68
void Graphics::StopRenderThread() {
    // References
    // -> static bool inRenderPhase;
}
// Range: 0x802E7B68 -> 0x802E7BA4
void Graphics::FrameStepBegin() {
    // References
    // -> static bool inRenderPhase;
}
// Range: 0x802E7BA4 -> 0x802E7C78
void Graphics::FrameStepEnd() {
    // References
    // -> static bool inRenderPhase;
    // -> static class CriticalSection renderThreadCriticalSection;
}
