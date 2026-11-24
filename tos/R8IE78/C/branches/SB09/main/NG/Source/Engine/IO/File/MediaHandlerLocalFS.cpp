/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\IO\File\MediaHandlerLocalFS.cpp
*/
static class MediaModuleLFS handlerLFS; // size: 0x9C, address: 0x80779820
static class ModuleRegistrator mediaHandlerLFSModReg; // size: 0x8, address: 0x807798C0
class Module * mediaDeviceLFSModule; // size: 0x4, address: 0x806CDF98
int MODE_READ; // size: 0x4, address: 0x806936B0
int MODE_WRITE; // size: 0x4, address: 0x806936B4
int MODE_CREATE; // size: 0x4, address: 0x806936B8
int MODE_TRUNC; // size: 0x4, address: 0x806936BC
int MODE_TEXT; // size: 0x4, address: 0x806936C0
class RelativePriority priority[2]; // size: 0x18, address: 0x806CDFA8
class MediaThreadLFS threadLFS; // size: 0x84, address: 0x80779EDC
// Range: 0x801E15C0 -> 0x801E1918
bool IO::MediaLFSTask::ExecuteStep(class MediaLFSTask * this /* r30 */, class MediaLFSJob * job /* r31 */) {
    // Local variables
    bool isDone; // r5
}
// Range: 0x801E1920 -> 0x801E1964
void * IO::MediaModuleLFS::MediaModuleLFS(class MediaModuleLFS * this /* r31 */) {
    // References
    // -> struct {} __vt__Q22IO14MediaModuleLFS;
}
// signature: IO::MediaModuleLFS::GetPriority(int &) const
// Range: 0x801E1970 -> 0x801E19B4
class RelativePriority * IO::MediaModuleLFS::GetPriority() const {
    // References
    // -> class RelativePriority priority[2];
    // -> class Module * mediaModule;
}
// signature: IO::MediaModuleLFS::Startup(int)
// Range: 0x801E19C0 -> 0x801E1A44
void IO::MediaModuleLFS::Startup(class MediaModuleLFS * this /* r30 */) {
    // References
    // -> static class MediaModule mediamod;
    // -> struct {} __vt__Q22IO15MediaHandlerLFS;
    // -> struct {} __vt__Q22IO12MediaHandler;
}
// signature: IO::MediaModuleLFS::Shutdown(int)
// Range: 0x801E1AB0 -> 0x801E1B20
void IO::MediaModuleLFS::Shutdown(class MediaModuleLFS * this /* r30 */) {
}
// Range: 0x801E1B70 -> 0x801E1BE0
class Runnable * IO::MediaHandlerLFS::CreateRunner(class MediaHandlerLFS * this /* r29 */) {
    // References
    // -> struct {} __vt__Q22IO14MediaThreadLFS;
    // -> class MediaThreadLFS threadLFS;
}
// signature: IO::MediaHandlerLFS::MediaGuide(IO::MediaMemGuide *)
// Range: 0x801E1C20 -> 0x801E1C3C
void IO::MediaHandlerLFS::MediaGuide() {
}
// Range: 0x801E1C40 -> 0x801E1C94
void IO::MediaThreadLFS::Run(class MediaThreadLFS * this /* r31 */) {
    {
        // Range: 0x801E1C58 -> 0x801E1C70
        // Local variables
        bool isDone; // r0
    }
}
// Range: 0x801E1CA0 -> 0x801E1CF4
void IO::MediaThreadLFS::RunBegin(class MediaThreadLFS * this /* r31 */) {
}
// Range: 0x801E1D00 -> 0x801E1D80
bool IO::MediaThreadLFS::RunUpdate(class MediaThreadLFS * this /* r31 */) {
    // Local variables
    bool haveTasks; // r0
}
// signature: IO::MediaThreadLFS::ProcessCmdQueue(bool)
// Range: 0x801E1D80 -> 0x801E1DF0
void IO::MediaThreadLFS::ProcessCmdQueue(class MediaThreadLFS * this /* r30 */) {
    // Local variables
    class CmdQueue * que; // r31
    class MediaCmd * cmd; // r4

    {
        // Range: 0x801E1DAC -> 0x801E1DDC
        // Local variables
        bool rc; // r0
    }
}
// Range: 0x801E1DF0 -> 0x801E1E8C
bool IO::MediaThreadLFS::ParseCmd(class MediaCmd * cmd /* r31 */) {
    {
        // Range: 0x801E1E3C -> 0x801E1E50
        // Local variables
        class MediaLFSJob * job; // r0
    }
    {
        // Range: 0x801E1E64 -> 0x801E1E74
        // Local variables
        class MediaLFSJob * job; // r4
    }
}
// signature: IO::MediaThreadLFS::OpenNewJob(IO::MediaObject *, IO::MediaCmdOpen *)
// Range: 0x801E1E90 -> 0x801E1EE4
class MediaLFSJob * IO::MediaThreadLFS::OpenNewJob() {
    // Local variables
    class MediaLFSJob * job; // r5
}
// Range: 0x801E1EF0 -> 0x801E1F14
bool IO::MediaThreadLFS::BucketsAreEmpty() {
}
// Range: 0x801E1F20 -> 0x801E1F68
bool IO::MediaThreadLFS::HaveAnyTasks(class MediaThreadLFS * this /* r31 */) {
}
// Range: 0x801E1F70 -> 0x801E1FE8
void IO::MediaThreadLFS::ProcessBuckets(class MediaThreadLFS * this /* r31 */) {
}
// signature: IO::LFSJobBucket::Init(int, int)
// Range: 0x801E1FF0 -> 0x801E2070
void IO::LFSJobBucket::Init(class LFSJobBucket * this /* r30 */, int numEle /* r31 */) {
}
// Range: 0x801E2070 -> 0x801E20EC
void IO::LFSJobBucket::Done(class LFSJobBucket * this /* r31 */) {
}
// Range: 0x801E20F0 -> 0x801E213C
class MediaLFSJob * IO::LFSJobBucket::AddJob(class LFSJobBucket * this /* r30 */, class MediaObject * medObj /* r31 */) {
}
// Range: 0x801E2140 -> 0x801E2174
bool IO::LFSJobBucket::HasATask() {
}
// Range: 0x801E2180 -> 0x801E2204
void IO::LFSJobBucket::QueueReady(class LFSJobBucket * this /* r28 */) {
}
// Range: 0x801E2210 -> 0x801E227C
void IO::LFSJobBucket::UpdateQueued(class LFSJobBucket * this /* r29 */) {
}
// Range: 0x801E2280 -> 0x801E22F8
void IO::LFSJobBucket::UnqueueDone(class LFSJobBucket * this /* r29 */) {
}
// Range: 0x801E2300 -> 0x801E2370
void IO::LFSJobBucket::DestroyOld(class LFSJobBucket * this /* r29 */) {
}
// Range: 0x801E2370 -> 0x801E23DC
void IO::LFSJobBucket::AbortJobTask(class LFSJobBucket * this /* r28 */, class MediaLFSJob * job /* r29 */) {
}
// signature: IO::MediaLFSJob::Init(IO::LFSJobBucket *, IO::MediaObject *)
// Range: 0x801E23E0 -> 0x801E2400
void IO::MediaLFSJob::Init() {
}
// Range: 0x801E2400 -> 0x801E2420
void IO::MediaLFSJob::DenyAccess() {
}
// Range: 0x801E2420 -> 0x801E253C
void IO::MediaLFSJob::InputCommand(class MediaLFSJob * this /* r28 */, class MediaCmd * cmd /* r29 */) {
}
// Range: 0x801E2540 -> 0x801E2584
void IO::MediaLFSJob::Update(class MediaLFSJob * this /* r31 */) {
    // Local variables
    bool isDone; // r0
}
// Range: 0x801E2590 -> 0x801E2668
void IO::MediaLFSJob::TaskDoneConfirmed(bool taskAborted /* r29 */) {
    // Local variables
    bool wasOk; // r31
}
