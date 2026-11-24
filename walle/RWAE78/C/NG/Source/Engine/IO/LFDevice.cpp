/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\IO\LFDevice.cpp
*/
static class LFDeviceModule lfsmod; // size: 0xA8, address: 0x80803FE8
static class ModuleRegistrator lfDeviceModReg; // size: 0x8, address: 0x80804090
class Module * lfstreamModule; // size: 0x4, address: 0x8070AA30
static class RelativePriority priority[1]; // size: 0xC, address: 0x8070AA40
// signature: IO::LFDevice::Close(IO::FileError &)
// Range: 0x80287A20 -> 0x802882A8
bool IO::LFDevice::Close(class LFDevice * this /* r29 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> bool shutdown;
}
// signature: IO::LFDevice::Seek(long long, IO::File::SeekOrigin, IO::FileError &)
// Range: 0x802882A8 -> 0x8028840C
bool IO::LFDevice::Seek(class LFDevice * this /* r29 */, long long offset /* r0:r30 */) {
    // Local variables
    int newOffset; // r4
    bool resultStart; // r0

    // References
    // -> bool shutdown;
}
// signature: IO::LFDevice::Tell(IO::FileError &)
// Range: 0x8028841C -> 0x8028842C
long long IO::LFDevice::Tell() {
}
// signature: IO::LFDevice::Size(IO::FileError &)
// Range: 0x8028842C -> 0x8028843C
long long IO::LFDevice::Size() {
}
// signature: IO::LFDevice::ReadSize(IO::FileError &)
// Range: 0x8028843C -> 0x80288488
long long IO::LFDevice::ReadSize() {
    // Local variables
    long long size; // r0:r0
}
// signature: IO::LFDevice::ReadAlign(IO::FileError &)
// Range: 0x80288488 -> 0x80288494
long long IO::LFDevice::ReadAlign() {
}
// signature: IO::LFDevice::Read(void *, int, IO::FileError &)
// Range: 0x80288494 -> 0x80288580
int IO::LFDevice::Read(class LFDevice * this /* r31 */) {
    // References
    // -> bool shutdown;
}
// signature: IO::LFDevice::Write(const void *, int, IO::FileError &)
// Range: 0x80288580 -> 0x80288588
int IO::LFDevice::Write() {
}
// signature: IO::LFDevice::OpenHandle(const char *, int, IO::FileError &)
// Range: 0x80288588 -> 0x80288ABC
class FileHandleData * IO::LFDevice::OpenHandle(char * fname /* r28 */) {
    // Local variables
    char path[256]; // r1+0x8
    class FileHandleData * handle; // r31

    {
        // Range: 0x802885FC -> 0x80288A98
        // Local variables
        bool openSuccess; // r0
    }

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> bool shutdown;
}
// signature: IO::LFDeviceFactory::Compatible(const char *, int)
// Range: 0x80288ABC -> 0x80288AC4
bool IO::LFDeviceFactory::Compatible() {
}
// signature: IO::LFDeviceFactory::OpenDevice(const char *, int, IO::FileError &)
// Range: 0x80288AC4 -> 0x80288BA0
class FileDevice * IO::LFDeviceFactory::OpenDevice(class LFDeviceFactory * this /* r27 */, int mode /* r28 */, class FileError * err /* r29 */) {
    // Local variables
    class FileHandleData * handle; // r0

    // References
    // -> struct {} __vt__Q22IO8LFDevice;
}
// signature: IO::LFDeviceModule::GetPriority(int &) const
// Range: 0x80288ED4 -> 0x80288F14
class RelativePriority * IO::LFDeviceModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[1];
    // -> class Module * fileModule;
}
// signature: IO::LFDeviceModule::Startup(int)
// Range: 0x80288F14 -> 0x80288F1C
void IO::LFDeviceModule::Startup() {
}
