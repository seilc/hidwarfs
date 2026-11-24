/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\IO\File\MediaHandlerLocalFS.cpp
*/
static class MediaModuleLFS handlerLFS; // size: 0x9C, address: 0x8084AFD0
static class ModuleRegistrator mediaHandlerLFSModReg; // size: 0x8, address: 0x8084B070
class Module * mediaDeviceLFSModule; // size: 0x4, address: 0x807BFECC
static class RelativePriority priority[2]; // size: 0x18, address: 0x807BFED8
static class MediaThreadLFS threadLFS; // size: 0x84, address: 0x8084B07C
// Range: 0x8031215C -> 0x803122B0
static bool @unnamed@WAD01_cpp@::TaskFileRead::UpdateSlice(class TaskFileRead * this /* r30 */, class MediaLFSJob * job /* r31 */) {
    // Local variables
    int amtToRead; // r24
}
// Range: 0x803122B0 -> 0x803125C0
bool IO::MediaLFSTask::ExecuteStep(class MediaLFSTask * this /* r28 */, class MediaLFSJob * job /* r31 */) {
    // Local variables
    bool isDone; // r5
}
// signature: IO::MediaModuleLFS::GetPriority(int &) const
// Range: 0x803125C0 -> 0x80312604
class RelativePriority * IO::MediaModuleLFS::GetPriority() const {
    // References
    // -> static class RelativePriority priority[2];
    // -> class Module * mediaModule;
}
// signature: IO::MediaModuleLFS::Startup(int)
// Range: 0x80312604 -> 0x803126B4
void IO::MediaModuleLFS::Startup(class MediaModuleLFS * this /* r30 */) {
    // References
    // -> static class MediaModule mediamod;
    // -> struct {} __vt__Q22IO15MediaHandlerLFS;
    // -> struct {} __vt__Q22IO12MediaHandler;
}
// signature: IO::MediaModuleLFS::Shutdown(int)
// Range: 0x80312710 -> 0x80312788
void IO::MediaModuleLFS::Shutdown(class MediaModuleLFS * this /* r30 */) {
}
// Range: 0x803127E8 -> 0x80312878
class Runnable * IO::MediaHandlerLFS::CreateRunner(class MediaHandlerLFS * this /* r29 */) {
    // References
    // -> struct {} __vt__Q22IO14MediaThreadLFS;
    // -> static class MediaThreadLFS threadLFS;
}
// signature: IO::MediaHandlerLFS::MediaGuide(IO::MediaMemGuide *)
// Range: 0x8031287C -> 0x80312898
void IO::MediaHandlerLFS::MediaGuide() {
}
// Range: 0x80312898 -> 0x803130B8
void IO::MediaThreadLFS::Run(class MediaThreadLFS * this /* r25 */) {
}
// Range: 0x803130B8 -> 0x803132C8
bool IO::MediaThreadLFS::ParseCmd(class MediaThreadLFS * this /* r25 */, class MediaCmd * cmd /* r24 */) {
    {
        // Range: 0x803131AC -> 0x803132B0
        // Local variables
        class MediaLFSJob * job; // r31
    }
}
// Range: 0x803132C8 -> 0x80313364
void IO::LFSJobBucket::QueueReady(class LFSJobBucket * this /* r28 */) {
}
// Range: 0x80313364 -> 0x80313498
void IO::MediaLFSJob::InputCommand(class MediaLFSJob * this /* r28 */, class MediaCmd * cmd /* r29 */) {
}
