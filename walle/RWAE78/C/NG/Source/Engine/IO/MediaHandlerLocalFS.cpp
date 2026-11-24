/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\IO\MediaHandlerLocalFS.cpp
*/
static class MediaModuleLFS handlerLFS; // size: 0x9C, address: 0x808039E8
static class ModuleRegistrator mediaHandlerLFSModReg; // size: 0x8, address: 0x80803A88
class Module * mediaDeviceLFSModule; // size: 0x4, address: 0x80709FD0
static class RelativePriority priority[2]; // size: 0x18, address: 0x80709FE0
static class MediaThreadLFS threadLFS; // size: 0x84, address: 0x80803A94
// signature: @unnamed@WAD01_cpp@::FileHandleData::DvdCallback(long, DVDFileInfo *)
// Range: 0x8027EF3C -> 0x8027EF4C
static void @unnamed@WAD01_cpp@::FileHandleData::DvdCallback() {
    // Local variables
    class FileHandleData * fhd; // r0
}
// signature: @unnamed@WAD01_cpp@::LFSSeek(@unnamed@WAD01_cpp@::FileHandleData *, int, IO::MediaFile::enSeekOrigin)
// Range: 0x8027EE38 -> 0x8027EF3C
static bool @unnamed@WAD01_cpp@::LFSSeek(class FileHandleData * handle /* r30 */, int offset /* r31 */) {
    // Local variables
    int newOffset; // r4
    bool resultStart; // r0
}
// Range: 0x8027EF4C -> 0x8027F0A4
static bool @unnamed@WAD01_cpp@::TaskFileRead::UpdateSlice(class TaskFileRead * this /* r28 */, class MediaLFSJob * job /* r29 */) {
    // Local variables
    int amtToRead; // r30

    {
        // Range: 0x8027F008 -> 0x8027F064
        // Local variables
        class MediaFile * medFile; // r3
    }
}
// Range: 0x8027F0A4 -> 0x8027F3E4
bool IO::MediaLFSTask::ExecuteStep(class MediaLFSTask * this /* r28 */, class MediaLFSJob * job /* r31 */) {
    // Local variables
    bool isDone; // r5
}
// signature: IO::MediaModuleLFS::GetPriority(int &) const
// Range: 0x8027F3E4 -> 0x8027F428
class RelativePriority * IO::MediaModuleLFS::GetPriority() const {
    // References
    // -> static class RelativePriority priority[2];
    // -> class Module * mediaModule;
}
// signature: IO::MediaModuleLFS::Startup(int)
// Range: 0x8027F428 -> 0x8027F4D8
void IO::MediaModuleLFS::Startup(class MediaModuleLFS * this /* r30 */) {
    // References
    // -> static class MediaModule mediamod;
    // -> struct {} __vt__Q22IO15MediaHandlerLFS;
    // -> struct {} __vt__Q22IO12MediaHandler;
}
// signature: IO::MediaModuleLFS::Shutdown(int)
// Range: 0x8027F534 -> 0x8027F5AC
void IO::MediaModuleLFS::Shutdown(class MediaModuleLFS * this /* r30 */) {
}
// Range: 0x8027F60C -> 0x8027F69C
class Runnable * IO::MediaHandlerLFS::CreateRunner(class MediaHandlerLFS * this /* r29 */) {
    // References
    // -> struct {} __vt__Q22IO14MediaThreadLFS;
    // -> static class MediaThreadLFS threadLFS;
}
// signature: IO::MediaHandlerLFS::MediaGuide(IO::MediaMemGuide *)
// Range: 0x8027F6DC -> 0x8027F6F8
void IO::MediaHandlerLFS::MediaGuide() {
}
// Range: 0x8027F6F8 -> 0x8027FDF8
void IO::MediaThreadLFS::Run(class MediaThreadLFS * this /* r27 */) {
}
// Range: 0x8027FDF8 -> 0x8027FFC0
bool IO::MediaThreadLFS::ParseCmd(class MediaThreadLFS * this /* r25 */, class MediaCmd * cmd /* r24 */) {
    {
        // Range: 0x8027FEEC -> 0x8027FFA8
        // Local variables
        class MediaLFSJob * job; // r24
    }
}
// Range: 0x8027FFC0 -> 0x8028005C
void IO::LFSJobBucket::QueueReady(class LFSJobBucket * this /* r28 */) {
}
// Range: 0x8028005C -> 0x80280190
void IO::MediaLFSJob::InputCommand(class MediaLFSJob * this /* r28 */, class MediaCmd * cmd /* r29 */) {
}
