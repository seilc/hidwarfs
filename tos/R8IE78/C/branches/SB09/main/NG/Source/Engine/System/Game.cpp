/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\System\Game.cpp
*/
class Game * singleton; // size: 0x4, address: 0x8077D188
bool gSysForceExit; // size: 0x1, address: 0x8077D18C
bool gSoundReadyToExit; // size: 0x1, address: 0x8077D18D
float softDT; // size: 0x4, address: 0x806CF1F4
float softDTVel; // size: 0x4, address: 0x80784124
float softDTFactor; // size: 0x4, address: 0x806CF1F8
unsigned int accumulatedFrame; // size: 0x4, address: 0x80784128
// Range: 0x801FAFC0 -> 0x801FB3AC
void * System::Game::Game(class Game * this /* r30 */) {
    // References
    // -> class Module * gameWindowModule;
    // -> class ScreenWarpManager * gScreenWarpManager;
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
// Range: 0x801FB3B0 -> 0x801FB3FC
void * System::Game::~Game(class Game * this /* r31 */) {
    // References
    // -> class Game * singleton;
}
// Range: 0x801FB400 -> 0x801FB494
void System::Game::ReadCommandLine(int argc /* r25 */, char * * argv /* r26 */) {
    {
        // Range: 0x801FB410 -> 0x801FB480
        // Local variables
        int i; // r27
    }

    // References
    // -> static class StartupConfig startupConfig;
}
// Range: 0x801FB4A0 -> 0x801FB524
void System::Game::Run(class Game * this /* r31 */) {
}
// Range: 0x801FB530 -> 0x801FB558
class StartupConfig * System::Game::LoadDefaultStartupConfig() {
    // References
    // -> class StartupConfig * config;
}
// Range: 0x801FB560 -> 0x801FB618
void System::Game::Startup(class Game * this /* r30 */) {
    // References
    // -> unsigned int updateFrameNumber;
    // -> class RandomTwist updateRandomizer;
    // -> class StartupConfig * config;
}
// Range: 0x801FB620 -> 0x801FB988
bool System::Game::Step(class Game * this /* r30 */) {
    // Local variables
    float dt; // f0
    float idt; // f1
    int fps; // r0

    {
        // Range: 0x801FB810 -> 0x801FB860
        // Local variables
        float fps; // f0
    }

    // References
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> float dt;
    // -> unsigned int accumulatedFrame;
    // -> float softDTFactor;
    // -> float softDTVel;
    // -> float softDT;
    // -> double secondsPerTick;
    // -> unsigned int updateFrameNumber;
}
