/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\IO\File.cpp
*/
static class FileModule filemod; // size: 0x98, address: 0x80803930
static class ModuleRegistrator fileModReg; // size: 0x8, address: 0x808039C8
class Module * fileModule; // size: 0x4, address: 0x80709FAC
class FileError okay; // size: 0x1, address: 0x808039D0
class FileDeviceFactory * registryHead; // size: 0x4, address: 0x808039D4
class PoolArray factories; // size: 0xC, address: 0x808039D8
static bool g_FileSystemShuttingDown; // size: 0x1, address: 0x808039E4
// signature: IO::FileModule::Startup(int)
// Range: 0x8027E498 -> 0x8027E4C4
void IO::FileModule::Startup() {
    // References
    // -> class FileDeviceFactory * registryHead;
}
// signature: IO::FileModule::Shutdown(int)
// Range: 0x8027E4C4 -> 0x8027E50C
void IO::FileModule::Shutdown() {
    // References
    // -> static bool g_FileSystemShuttingDown;
    // -> class PoolArray factories;
}
// Range: 0x8027E50C -> 0x8027E640
bool IO::File::Open(class File * this /* r31 */, char * fname /* r23 */, int mode /* r24 */, class FileError * err /* r25 */) {
    // References
    // -> static bool g_FileSystemShuttingDown;
    // -> class PoolArray factories;
}
// signature: IO::File::Close(IO::FileError &)
// Range: 0x8027E640 -> 0x8027E6AC
bool IO::File::Close(class File * this /* r31 */) {
}
// signature: IO::FileNS::DeviceSortCompare(const void *, const void *)
// Range: 0x8027E6AC -> 0x8027E6D4
int IO::FileNS::DeviceSortCompare() {
    // Local variables
    class FactorySortValue * v1; // r0
    class FactorySortValue * v2; // r0
}
// Range: 0x8027E6D4 -> 0x8027E6E8
void IO::FileDeviceFactory::Register() {
    // References
    // -> class FileDeviceFactory * registryHead;
}
// Range: 0x8027E6E8 -> 0x8027E958
void IO::FileDeviceFactory::CommitRegistry() {
    // Local variables
    class FileDeviceFactory * n; // r3
    int factoryCount; // r31
    class StackPoolArray sortArray; // r1+0x8

    {
        // Range: 0x8027E750 -> 0x8027E790
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x8027E7E0 -> 0x8027E7E0
        // Local variables
        int i; // r4
    }

    // References
    // -> class PoolArray factories;
    // -> class FileDeviceFactory * registryHead;
}
