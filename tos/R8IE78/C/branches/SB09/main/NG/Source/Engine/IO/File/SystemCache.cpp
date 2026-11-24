/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\IO\File\SystemCache.cpp
*/
static class SystemCacheModule systemCacheMod; // size: 0x98, address: 0x80779AF0
int gSystemCacheStarted; // size: 0x4, address: 0x80779B88
class Module * systemCacheModule; // size: 0x4, address: 0x806CE020
static class SystemCacheWii wiiSystemCache; // size: 0x250, address: 0x80779B90
static float NORMAL_TOL; // size: 0x4, address: 0x806936D8
static char * wiiSystemCacheFile; // size: 0x4, address: 0x806CE024
int FILENAME_LENGTH; // size: 0x4, address: 0x806936D4
// Range: 0x801E35E0 -> 0x801E3624
void * SystemCacheModule::SystemCacheModule(class SystemCacheModule * this /* r31 */) {
    // References
    // -> struct {} __vt__17SystemCacheModule;
}
// Range: 0x801E3630 -> 0x801E363C
class SystemCacheWii * IO::SystemCacheWii::GetSystemCache() {
    // References
    // -> static class SystemCacheWii wiiSystemCache;
}
// Range: 0x801E3640 -> 0x801E3774
int IO::SystemCacheWii::CacheMemory(class SystemCacheWii * this /* r26 */, void * mem /* r27 */, int size /* r28 */) {
    // Local variables
    int idx; // r29
    char filename[256]; // r1+0x8
    int result; // r0

    // References
    // -> static char * wiiSystemCacheFile;
}
// signature: IO::SystemCacheWii::RestoreMemory(void *)
// Range: 0x801E3780 -> 0x801E37B8
void IO::SystemCacheWii::RestoreMemory() {
    {
        // Range: 0x801E3784 -> 0x801E37B4
        // Local variables
        int i; // r7
    }
}
// signature: IO::SystemCacheWii::RestoreMemory(int)
// Range: 0x801E37C0 -> 0x801E3834
void IO::SystemCacheWii::RestoreMemory(class SystemCacheWii * this /* r29 */) {
}
