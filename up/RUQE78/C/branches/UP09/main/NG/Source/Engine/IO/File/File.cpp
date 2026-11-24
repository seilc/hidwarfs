/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\IO\File\File.cpp
*/
static class FileModule filemod; // size: 0x98, address: 0x8084AF18
static class ModuleRegistrator fileModReg; // size: 0x8, address: 0x8084AFB0
class Module * fileModule; // size: 0x4, address: 0x807BFEA8
class FileError okay; // size: 0x1, address: 0x8084AFB8
class FileDeviceFactory * registryHead; // size: 0x4, address: 0x8084AFBC
class PoolArray factories; // size: 0xC, address: 0x8084AFC0
static bool g_FileSystemShuttingDown; // size: 0x1, address: 0x8084AFCC
// signature: IO::FileModule::Startup(int)
// Range: 0x80311700 -> 0x8031172C
void IO::FileModule::Startup() {
    // References
    // -> class FileDeviceFactory * registryHead;
}
// signature: IO::FileModule::Shutdown(int)
// Range: 0x8031172C -> 0x80311774
void IO::FileModule::Shutdown() {
    // References
    // -> static bool g_FileSystemShuttingDown;
    // -> class PoolArray factories;
}
// Range: 0x80311774 -> 0x803118A8
bool IO::File::Open(class File * this /* r31 */, char * fname /* r23 */, int mode /* r24 */, class FileError & err /* r25 */) {
    // References
    // -> static bool g_FileSystemShuttingDown;
    // -> class PoolArray factories;
}
// signature: IO::File::Close(IO::FileError &)
// Range: 0x803118A8 -> 0x80311914
bool IO::File::Close(class File * this /* r31 */) {
}
// signature: IO::FileNS::DeviceSortCompare(const void *, const void *)
// Range: 0x80311914 -> 0x8031193C
int IO::FileNS::DeviceSortCompare() {
    // Local variables
    class FactorySortValue * v1; // r0
    class FactorySortValue * v2; // r0
}
// Range: 0x8031193C -> 0x80311950
void IO::FileDeviceFactory::Register() {
    // References
    // -> class FileDeviceFactory * registryHead;
}
// Range: 0x80311950 -> 0x80311BB8
void IO::FileDeviceFactory::CommitRegistry() {
    // Local variables
    class FileDeviceFactory * n; // r3
    int factoryCount; // r31
    class StackPoolArray sortArray; // r1+0x8

    {
        // Range: 0x803119B8 -> 0x803119F8
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x80311A3C -> 0x80311A3C
        // Local variables
        int i; // r4
    }

    // References
    // -> class PoolArray factories;
    // -> class FileDeviceFactory * registryHead;
}
