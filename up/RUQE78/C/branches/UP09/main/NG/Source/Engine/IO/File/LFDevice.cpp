/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\IO\File\LFDevice.cpp
*/
static class LFDeviceModule lfsmod; // size: 0xA8, address: 0x8084B638
static class ModuleRegistrator lfDeviceModReg; // size: 0x8, address: 0x8084B6E0
class Module * lfstreamModule; // size: 0x4, address: 0x807C09D8
static class RelativePriority priority[1]; // size: 0xC, address: 0x807C09E8
// signature: IO::LFDevice::Close(IO::FileError &)
// Range: 0x8031BE04 -> 0x8031C920
bool IO::LFDevice::Close(class LFDevice * this /* r29 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: IO::LFDevice::Seek(long long, IO::File::SeekOrigin, IO::FileError &)
// Range: 0x8031C920 -> 0x8031C9BC
bool IO::LFDevice::Seek(class LFDevice * this /* r30 */, long long offset /* r0:r31 */) {
    // Local variables
    int newOffset; // reg65535
    bool result; // r0
}
// signature: IO::LFDevice::Tell(IO::FileError &)
// Range: 0x8031C9BC -> 0x8031C9CC
long long IO::LFDevice::Tell() {
}
// signature: IO::LFDevice::Size(IO::FileError &)
// Range: 0x8031C9CC -> 0x8031C9DC
long long IO::LFDevice::Size() {
}
// signature: IO::LFDevice::ReadSize(IO::FileError &)
// Range: 0x8031C9DC -> 0x8031CA28
long long IO::LFDevice::ReadSize() {
    // Local variables
    long long size; // r0:r0
}
// signature: IO::LFDevice::ReadAlign(IO::FileError &)
// Range: 0x8031CA28 -> 0x8031CA34
long long IO::LFDevice::ReadAlign() {
}
// signature: IO::LFDevice::Read(void *, int, IO::FileError &)
// Range: 0x8031CA34 -> 0x8031CA40
int IO::LFDevice::Read() {
    // Local variables
    int result; // r0
}
// signature: IO::LFDevice::OpenHandle(const char *, int, IO::FileError &)
// Range: 0x8031CA44 -> 0x8031D2E4
class FileHandleData * IO::LFDevice::OpenHandle(char * fname /* r30 */) {
    // Local variables
    char path[256]; // r1+0x8
    class FileHandleData * handle; // r31

    // References
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
}
// signature: IO::LFDeviceFactory::OpenDevice(const char *, int, IO::FileError &)
// Range: 0x8031D2E8 -> 0x8031D8A4
class FileDevice * IO::LFDeviceFactory::OpenDevice(class LFDeviceFactory * this /* r26 */, int mode /* r27 */, class FileError & err /* r28 */) {
    // Local variables
    class FileHandleData * handle; // r0

    // References
    // -> struct {} __vt__Q22IO8LFDevice;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: IO::LFDeviceModule::GetPriority(int &) const
// Range: 0x8031D8A8 -> 0x8031D8E8
class RelativePriority * IO::LFDeviceModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[1];
    // -> class Module * fileModule;
}
// signature: IO::LFDeviceModule::Startup(int)
// Range: 0x8031D8E8 -> 0x8031D8F0
void IO::LFDeviceModule::Startup() {
}
