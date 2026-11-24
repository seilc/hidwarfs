/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\System\Game.cpp
*/
class Game * singleton; // size: 0x4, address: 0x80806C78
bool gSysForceExit; // size: 0x1, address: 0x80806C7C
bool gSoundReadyToExit; // size: 0x1, address: 0x80806C7D
static float softDT; // size: 0x4, address: 0x8070B4DC
static float softDTVel; // size: 0x4, address: 0x80806C80
static float softDTFactor; // size: 0x4, address: 0x8070B4E0
// Range: 0x802AE46C -> 0x802AE850
void * System::Game::Game(class Game * this /* r30 */) {
    // References
    // -> class Module * gameWindowModule;
    // -> class Module * sfRenderModule;
    // -> class Module * sfUpdateModule;
    // -> class Module * systemCacheModule;
    // -> class Module * cinematicModule;
    // -> class Module * physicsModule;
    // -> class Module * scadMgrModule;
    // -> class Module * coordinatorModule;
    // -> class Module * mstQueryModule;
    // -> class Module * lsPoolModule;
    // -> class Module * bootStrapModule;
    // -> class Module * blobloidModule;
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
// Range: 0x802AE860 -> 0x802AEB74
void * System::Game::~Game(class Game * this /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
    // -> class Game * singleton;
}
// signature: System::Game::ReadCommandLine(int, char **)
// Range: 0x802AEB74 -> 0x802AEC04
void System::Game::ReadCommandLine(int argc /* r26 */) {
    {
        // Range: 0x802AEB84 -> 0x802AEBE4
        // Local variables
        int i; // r27
    }

    // References
    // -> static class StartupConfig startupConfig;
}
// Range: 0x802AEC04 -> 0x802AF148
void System::Game::Run(class Game * this /* r30 */) {
    // References
    // -> unsigned int updateFrameNumber;
    // -> class RandomTwist updateRandomizer;
    // -> class ModuleRegistrator * head;
    // -> static class PoolArray modules;
    // -> bool commit;
    // -> int size;
    // -> class ThreadLocalStorageTable table;
    // -> static class ThreadLocalStorage threadLocal;
    // -> class StartupConfig * config;
}
// Range: 0x802AF148 -> 0x802AF170
class StartupConfig * System::Game::LoadDefaultStartupConfig() {
    // References
    // -> class StartupConfig * config;
}
// Range: 0x802AF170 -> 0x802AF544
bool System::Game::Step(class Game * this /* r29 */) {
    // Local variables
    float dt; // f0
    float idt; // f1
    int fps; // r0

    {
        // Range: 0x802AF364 -> 0x802AF3B0
        // Local variables
        float sleepTime; // f2
    }

    // References
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> class Time lastCPUTime[6];
    // -> class Time lastPauseCPUTime[6];
    // -> class Time pauseCPUTime[6];
    // -> float dt;
    // -> static float softDTFactor;
    // -> static float softDTVel;
    // -> static float softDT;
    // -> double secondsPerTick;
    // -> unsigned int updateFrameNumber;
}
