/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\IO\File\File.cpp
*/
static class FileModule filemod; // size: 0x98, address: 0x80779768
static class ModuleRegistrator fileModReg; // size: 0x8, address: 0x80779800
class Module * fileModule; // size: 0x4, address: 0x806CDF78
class FileError okay; // size: 0x1, address: 0x80779808
class FileDeviceFactory * registryHead; // size: 0x4, address: 0x8077980C
class PoolArray factories; // size: 0xC, address: 0x80779810
static bool g_FileSystemShuttingDown; // size: 0x1, address: 0x8077981C
// Range: 0x801E0BA0 -> 0x801E0BEC
void * IO::FileModule::FileModule(class FileModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q22IO10FileModule;
}
// signature: IO::FileModule::Startup(int)
// Range: 0x801E0BF0 -> 0x801E0C1C
void IO::FileModule::Startup() {
    // References
    // -> class FileDeviceFactory * registryHead;
}
// signature: IO::FileModule::Shutdown(int)
// Range: 0x801E0C20 -> 0x801E0C24
void IO::FileModule::Shutdown() {
}
// Range: 0x801E0C30 -> 0x801E0C98
bool IO::File::Open(class File * this /* r28 */, char * fname /* r29 */, int mode /* r30 */, class FileError & err /* r31 */) {
}
// signature: IO::File::Close(IO::FileError &)
// Range: 0x801E0CA0 -> 0x801E0D0C
bool IO::File::Close(class File * this /* r31 */) {
}
// signature: IO::FileNS::DeviceSortCompare(const void *, const void *)
// Range: 0x801E0D10 -> 0x801E0D38
int IO::FileNS::DeviceSortCompare() {
    // Local variables
    class FactorySortValue * v1; // r0
    class FactorySortValue * v2; // r0
}
// Range: 0x801E0D40 -> 0x801E0D54
void IO::FileDeviceFactory::Register() {
    // References
    // -> class FileDeviceFactory * registryHead;
}
// Range: 0x801E0D60 -> 0x801E0EB0
void IO::FileDeviceFactory::CommitRegistry() {
    // Local variables
    class FileDeviceFactory * n; // r3
    int factoryCount; // r31
    class StackPoolArray sortArray; // r1+0x8

    {
        // Range: 0x801E0DC4 -> 0x801E0E1C
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x801E0E58 -> 0x801E0E90
        // Local variables
        int i; // r0
    }

    // References
    // -> class PoolArray factories;
    // -> class FileDeviceFactory * registryHead;
}
// Range: 0x801E0F10 -> 0x801E0F58
void IO::FileDeviceFactory::DestroyRegistry() {
    // References
    // -> static bool g_FileSystemShuttingDown;
    // -> class PoolArray factories;
}
// Range: 0x801E0F60 -> 0x801E1024
class FileDevice * IO::FileDeviceFactory::OpenAny(char * fname /* r24 */, int mode /* r25 */, class FileError & err /* r26 */) {
    {
        // Range: 0x801E0F68 -> 0x801E100C
        // Local variables
        int endi; // r27
        int i; // r28
    }

    // References
    // -> static bool g_FileSystemShuttingDown;
    // -> class PoolArray factories;
}
