/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\IO\File\LFDevice.cpp
*/
static class LFDeviceModule lfsmod; // size: 0xA8, address: 0x8077A9F8
static class ModuleRegistrator lfDeviceModReg; // size: 0x8, address: 0x8077AAA0
class Module * lfstreamModule; // size: 0x4, address: 0x806CE868
class RelativePriority priority[1]; // size: 0xC, address: 0x806CE878
// signature: IO::LFDevice::LFDevice(IO::LFDeviceFactory *)
// Range: 0x801E80C0 -> 0x801E80DC
void * IO::LFDevice::LFDevice() {
    // References
    // -> struct {} __vt__Q22IO8LFDevice;
}
// signature: IO::LFDevice::Close(IO::FileError &)
// Range: 0x801E80E0 -> 0x801E8130
bool IO::LFDevice::Close(class LFDevice * this /* r30 */) {
    // Local variables
    bool success; // r31
}
// signature: IO::LFDevice::Seek(long long, IO::File::SeekOrigin, IO::FileError &)
// Range: 0x801E8130 -> 0x801E81C0
bool IO::LFDevice::Seek(class LFDevice * this /* r30 */, long long offset /* r0:r31 */) {
    // Local variables
    int newOffset; // reg65535
    bool result; // r0
}
// signature: IO::LFDevice::Tell(IO::FileError &)
// Range: 0x801E81C0 -> 0x801E81D0
long long IO::LFDevice::Tell() {
}
// signature: IO::LFDevice::Size(IO::FileError &)
// Range: 0x801E81D0 -> 0x801E81E0
long long IO::LFDevice::Size() {
}
// signature: IO::LFDevice::ReadSize(IO::FileError &)
// Range: 0x801E81E0 -> 0x801E822C
long long IO::LFDevice::ReadSize() {
    // Local variables
    long long size; // r0:r0
}
// signature: IO::LFDevice::ReadAlign(IO::FileError &)
// Range: 0x801E8230 -> 0x801E823C
long long IO::LFDevice::ReadAlign() {
}
// signature: IO::LFDevice::Read(void *, int, IO::FileError &)
// Range: 0x801E8240 -> 0x801E824C
int IO::LFDevice::Read() {
    // Local variables
    int result; // r0
}
// signature: IO::LFDevice::Write(const void *, int, IO::FileError &)
// Range: 0x801E8250 -> 0x801E8258
int IO::LFDevice::Write() {
}
// signature: IO::LFDevice::OpenHandle(const char *, int, IO::FileError &)
// Range: 0x801E8260 -> 0x801E8340
class FileHandleData * IO::LFDevice::OpenHandle(char * fname /* r30 */) {
    // Local variables
    char path[256]; // r1+0x8
    class FileHandleData * handle; // r31
}
// signature: IO::LFDevice::CloseHandle(IO::FileHandleData *, IO::FileError &)
// Range: 0x801E8360 -> 0x801E83B4
bool IO::LFDevice::CloseHandle(class FileHandleData * handle /* r30 */) {
    // Local variables
    bool success; // r31
}
// Range: 0x801E83C0 -> 0x801E83E8
void * IO::LFDeviceFactory::LFDeviceFactory() {
    // References
    // -> struct {} __vt__Q22IO15LFDeviceFactory;
}
// signature: IO::LFDeviceFactory::OpenDevice(const char *, int, IO::FileError &)
// Range: 0x801E83F0 -> 0x801E84C0
class FileDevice * IO::LFDeviceFactory::OpenDevice(class LFDeviceFactory * this /* r27 */, int mode /* r28 */, class FileError & err /* r29 */) {
    // Local variables
    class FileHandleData * handle; // r0
}
// Range: 0x801E84C0 -> 0x801E8520
void IO::LFDeviceFactory::FreeDevice(class LFDevice * stream /* r31 */) {
}
// Range: 0x801E8520 -> 0x801E856C
void * IO::LFDeviceModule::LFDeviceModule(class LFDeviceModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q22IO14LFDeviceModule;
}
// signature: IO::LFDeviceModule::GetPriority(int &) const
// Range: 0x801E8570 -> 0x801E85B0
class RelativePriority * IO::LFDeviceModule::GetPriority() const {
    // References
    // -> class RelativePriority priority[1];
    // -> class Module * fileModule;
}
// signature: IO::LFDeviceModule::Startup(int)
// Range: 0x801E85B0 -> 0x801E85B8
void IO::LFDeviceModule::Startup() {
}
