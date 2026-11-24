/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\System\Game.cpp
*/
class Game * singleton; // size: 0x4, address: 0x8084E068
bool gSysForceExit; // size: 0x1, address: 0x8084E06C
bool gSoundReadyToExit; // size: 0x1, address: 0x8084E06D
static float softDT; // size: 0x4, address: 0x807C1548
static float softDTVel; // size: 0x4, address: 0x8084E070
static float softDTFactor; // size: 0x4, address: 0x807C154C
static unsigned int accumulatedFrame; // size: 0x4, address: 0x8084E074
// Range: 0x8034DCA8 -> 0x8034E088
void * System::Game::Game(class Game * this /* r30 */) {
    // References
    // -> class Module * gameWindowModule;
    // -> class Module * trcModule;
    // -> class Module * scaleformModule;
    // -> class Module * systemCacheModule;
    // -> class Module * cinematicModule;
    // -> class Module * physicsModule;
    // -> class Module * entityMgrModule;
    // -> class Module * coordinatorModule;
    // -> class Module * mstQueryModule;
    // -> class Module * lsPoolModule;
    // -> class Module * bootStrapModule;
    // -> class Module * dynaMemModule;
    // -> class Module * domainModule;
    // -> class Module * mathModule;
    // -> class Module * globalsModule;
    // -> class Module * timeModule;
    // -> class Module * taskingModule;
    // -> class Module * coreTaskingModule;
    // -> class Module * allocModule;
    // -> class Module * colorModule;
    // -> class Module * worldModule;
    // -> class Module * utilModule;
    // -> class Module * padModule;
    // -> class Module * mediaModule;
    // -> class Module * mediaDeviceLFSModule;
    // -> class Module * lfstreamModule;
    // -> class Module * fileModule;
    // -> class Module * consolePadModule;
    // -> class Module * sceneModule;
    // -> class Module * sceneGraphModule;
    // -> class Module * samplerModule;
    // -> class Module * renderStateModule;
    // -> class Module * primitiveModule;
    // -> class Module * renderModule;
    // -> class Module * effectModule;
    // -> class Module * displayModule;
    // -> class Module * buildMemoryModule;
    // -> class Module * entityModule;
    // -> class Game * singleton;
}
// Range: 0x8034E088 -> 0x8034E510
void * System::Game::~Game(class Game * this /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
    // -> class Game * singleton;
}
// signature: System::Game::ReadCommandLine(int, char **)
// Range: 0x8034E510 -> 0x8034E5A0
void System::Game::ReadCommandLine(int argc /* r26 */) {
    {
        // Range: 0x8034E520 -> 0x8034E580
        // Local variables
        int i; // r27
    }

    // References
    // -> static class StartupConfig startupConfig;
}
// Range: 0x8034E5A0 -> 0x8034E8FC
void System::Game::Run(class Game * this /* r31 */) {
    // References
    // -> static int doForcedDVDCheck;
    // -> unsigned int updateFrameNumber;
    // -> class RandomTwist updateRandomizer;
    // -> class StartupConfig * config;
}
// Range: 0x8034E8FC -> 0x8034E924
class StartupConfig * System::Game::LoadDefaultStartupConfig() {
    // References
    // -> class StartupConfig * config;
}
// Range: 0x8034E924 -> 0x8034EC8C
bool System::Game::Step(class Game * this /* r29 */) {
    // Local variables
    float dt; // f0
    float idt; // f1
    int fps; // r0

    {
        // Range: 0x8034EB1C -> 0x8034EB68
        // Local variables
        float fps; // f0
    }

    // References
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> float dt;
    // -> static unsigned int accumulatedFrame;
    // -> static float softDTFactor;
    // -> static float softDTVel;
    // -> static float softDT;
    // -> double secondsPerTick;
    // -> unsigned int updateFrameNumber;
}
