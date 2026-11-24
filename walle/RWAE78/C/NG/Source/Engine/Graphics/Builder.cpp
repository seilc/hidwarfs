/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Builder.cpp
*/
static class BuilderModule builderMod; // size: 0x98, address: 0x807FED48
static class RelativePriority priority[2]; // size: 0x18, address: 0x80709380
static class ModuleRegistrator builderModReg; // size: 0x8, address: 0x807FEDE8
class Module * builderModule; // size: 0x4, address: 0x80709398
// signature: @unnamed@WAD01_cpp@::BuilderModule::GetPriority(int &) const
// Range: 0x8024F9EC -> 0x8024FA38
static class RelativePriority * @unnamed@WAD01_cpp@::BuilderModule::GetPriority() const {
    // References
    // -> class Module * taskingModule;
    // -> static class RelativePriority priority[2];
    // -> class Module * coreTaskingModule;
}
// signature: @unnamed@WAD01_cpp@::BuilderModule::Startup(int)
// Range: 0x8024FA38 -> 0x8024FA3C
static void @unnamed@WAD01_cpp@::BuilderModule::Startup() {
}
// signature: @unnamed@WAD01_cpp@::BuilderModule::Shutdown(int)
// Range: 0x8024FA3C -> 0x8024FA40
static void @unnamed@WAD01_cpp@::BuilderModule::Shutdown() {
}
// Range: 0x8024FA40 -> 0x8024FA44
void Graphics::Builder::HackFlushPending() {
}
// signature: Graphics::Builder::AsyncBuild(Graphics::Renderable *, Graphics::Geometry *) const
// Range: 0x8024FA44 -> 0x8024FA48
void Graphics::Builder::AsyncBuild() const {
}
