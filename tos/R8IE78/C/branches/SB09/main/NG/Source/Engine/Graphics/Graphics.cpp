/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Graphics.cpp
*/
int gperf_shadows; // size: 0x4, address: 0x80774E60
int gperf_pause; // size: 0x4, address: 0x80774E64
int gperf_shadowScissor; // size: 0x4, address: 0x80774E68
int gperf_postprocess; // size: 0x4, address: 0x80774E6C
static class RenderModule rendermod; // size: 0x98, address: 0x80774E70
static class ModuleRegistrator renderModReg; // size: 0x8, address: 0x80774F08
class Module * renderModule; // size: 0x4, address: 0x806CD15C
static bool inRenderPhase; // size: 0x1, address: 0x80774F10
static class CriticalSection renderThreadCriticalSection; // size: 0x20, address: 0x80774F20
// Range: 0x801C4670 -> 0x801C46B4
void * Graphics::RenderModule::RenderModule(class RenderModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28Graphics12RenderModule;
}
// Range: 0x801C46C0 -> 0x801C46D8
void Graphics::RenderModule::InitCriticalSection() {
    // References
    // -> static class CriticalSection renderThreadCriticalSection;
}
// Range: 0x801C46E0 -> 0x801C46EC
void Graphics::RenderLoopEnterCS() {
    // References
    // -> static class CriticalSection renderThreadCriticalSection;
}
// Range: 0x801C46F0 -> 0x801C46FC
void Graphics::RenderLoopExitCS() {
    // References
    // -> static class CriticalSection renderThreadCriticalSection;
}
// Range: 0x801C4700 -> 0x801C4758
void Graphics::StartRenderThread() {
    // References
    // -> static bool inRenderPhase;
}
// Range: 0x801C4760 -> 0x801C47A4
void Graphics::StopRenderThread() {
    // References
    // -> static bool inRenderPhase;
}
// Range: 0x801C47B0 -> 0x801C47EC
void Graphics::FrameStepBegin() {
    // References
    // -> static bool inRenderPhase;
}
// Range: 0x801C47F0 -> 0x801C485C
void Graphics::FrameStepEnd() {
    // References
    // -> static bool inRenderPhase;
    // -> static class CriticalSection renderThreadCriticalSection;
}
