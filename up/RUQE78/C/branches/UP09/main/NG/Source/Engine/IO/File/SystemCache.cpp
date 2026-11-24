/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\IO\File\SystemCache.cpp
*/
static class SystemCacheModule systemCacheMod; // size: 0x98, address: 0x8084B328
int gSystemCacheStarted; // size: 0x4, address: 0x8084B3C0
class Module * systemCacheModule; // size: 0x4, address: 0x807BFF58
static class SystemCacheWii wiiSystemCache; // size: 0x94, address: 0x8084B3C4
static int MODE_READ; // size: 0x4, address: 0x80787FEC
static int MODE_WRITE; // size: 0x4, address: 0x80787FF0
static int MODE_CREATE; // size: 0x4, address: 0x80787FF4
static int MODE_TRUNC; // size: 0x4, address: 0x80787FF8
static int MODE_TEXT; // size: 0x4, address: 0x80787FFC
static int sizeNeed; // size: 0x4, address: 0x80788000
static int powerCallbackWaitTime; // size: 0x4, address: 0x80788004
static int extensionConnectWaitTime; // size: 0x4, address: 0x80788008
static int * device; // size: 0x4, address: 0x8078800C
static int align; // size: 0x4, address: 0x80788010
static int align; // size: 0x4, address: 0x80788014
static float MYBIGNUM; // size: 0x4, address: 0x80788018
static int LEFTIDX; // size: 0x4, address: 0x8078801C
static int TOPIDX; // size: 0x4, address: 0x80788020
static int NEARIDX; // size: 0x4, address: 0x80788024
static float myAttnA; // size: 0x4, address: 0x80788028
static float myAttnK; // size: 0x4, address: 0x8078802C
static float MYBIGNUM; // size: 0x4, address: 0x80788030
static unsigned int SHADOW_FEATURE_FLAG; // size: 0x4, address: 0x80788034
static float TAD; // size: 0x4, address: 0x80788038
static unsigned int WORK_AREA_SIZE; // size: 0x4, address: 0x8078803C
static bool enableVsync; // size: 0x1, address: 0x80788040
static enum _GXTexFmt format; // size: 0x4, address: 0x80788044
static int * device; // size: 0x4, address: 0x80788048
static int * device; // size: 0x4, address: 0x8078804C
static int * device; // size: 0x4, address: 0x80788050
static int * device; // size: 0x4, address: 0x80788054
static int MAX_SPOT; // size: 0x4, address: 0x80788058
static float MYBIGNUM; // size: 0x4, address: 0x8078805C
static unsigned int SHADOW_FEATURE_FLAG; // size: 0x4, address: 0x80788060
static int NUM_VERTICES; // size: 0x4, address: 0x80788064
static int NUM_PRIMITIVES; // size: 0x4, address: 0x80788068
static int NUM_INDICES; // size: 0x4, address: 0x8078806C
static float midGreyKeyValue; // size: 0x4, address: 0x80788070
static int numBitsInInt; // size: 0x4, address: 0x80788074
static int NUM_SPECIAL_REFS; // size: 0x4, address: 0x80788078
static float SPOT_EPSILON; // size: 0x4, address: 0x8078807C
static float spotFalloffA; // size: 0x4, address: 0x80788080
static float spotFalloffB; // size: 0x4, address: 0x80788084
static int TEX_SIZE; // size: 0x4, address: 0x80788088
static float colorScale; // size: 0x4, address: 0x8078808C
static int lodMax; // size: 0x4, address: 0x80788090
static int lodMax; // size: 0x4, address: 0x80788094
static char * wiiSystemCacheFile; // size: 0x4, address: 0x807BFF5C
// signature: SystemCacheModule::Startup(int)
// Range: 0x80314C10 -> 0x80314C14
void SystemCacheModule::Startup() {
}
// signature: SystemCacheModule::Shutdown(int)
// Range: 0x80314C14 -> 0x80314C18
void SystemCacheModule::Shutdown() {
}
// signature: SystemCacheModule::Update(int)
// Range: 0x80314C18 -> 0x80314C1C
void SystemCacheModule::Update() {
}
// Range: 0x80314C1C -> 0x80314C28
class SystemCacheWii * IO::SystemCacheWii::GetSystemCache() {
    // References
    // -> static class SystemCacheWii wiiSystemCache;
}
// Range: 0x80314C28 -> 0x80314D20
bool IO::SystemCacheWii::CacheMemory(class SystemCacheWii * this /* r29 */, void * mem /* r30 */, int size /* r31 */) {
    // Local variables
    int result; // r0

    // References
    // -> static char * wiiSystemCacheFile;
}
// Range: 0x80314D20 -> 0x80314D84
void IO::SystemCacheWii::RestoreMemory(class SystemCacheWii * this /* r31 */) {
}
