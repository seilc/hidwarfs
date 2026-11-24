/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Scaleform\SFUpdateModule.cpp
*/
class SFUpdateModule updMod; // size: 0xB4, address: 0x80806A48
static class ModuleRegistrator sfUpdateModReg; // size: 0x8, address: 0x80806B00
class Module * sfUpdateModule; // size: 0x4, address: 0x8070B248
bool isFirstScene; // size: 0x1, address: 0x8070B24C
// signature: Scaleform::SFUpdateModule::Startup(int)
// Range: 0x802A7B44 -> 0x802A7C54
void Scaleform::SFUpdateModule::Startup(class SFUpdateModule * this /* r31 */) {
    // References
    // -> class Coordinator * coord;
    // -> bool initialized;
    // -> bool accessLock;
}
// signature: Scaleform::SFUpdateModule::Shutdown(int)
// Range: 0x802A7C54 -> 0x802A7C58
void Scaleform::SFUpdateModule::Shutdown() {
}
// signature: Scaleform::SFUpdateModule::Update(int)
// Range: 0x802A7C58 -> 0x802A8A00
void Scaleform::SFUpdateModule::Update(class SFUpdateModule * this /* r29 */) {
    {
        // Range: 0x802A7D2C -> 0x802A88AC
        {
            // Range: 0x802A7D2C -> 0x802A7D30
            // Local variables
            class Rect2D viewRect; // r1+0x80
        }
        {
            // Range: 0x802A7D30 -> 0x802A7D30
            // Local variables
            float args[8]; // r1+0x90
        }
    }

    // References
    // -> float SFUMaxTime;
    // -> float SFUMinTime;
    // -> float SFUTime;
    // -> double millisecondsPerTick;
    // -> class Time lastSFUTime;
}
// signature: Scaleform::SFUpdateModule::SwapUpdate(int)
// Range: 0x802A8A00 -> 0x802A8A20
void Scaleform::SFUpdateModule::SwapUpdate() {
}
// signature: Scaleform::SFUpdateModule::sfPlayerStateChanged(Scaleform::eSFPlayerState)
// Range: 0x802A8A20 -> 0x802A8A38
void Scaleform::SFUpdateModule::sfPlayerStateChanged() {
}
// signature: Scaleform::SFUpdateModule::applyEvents(Util::PoolList<Scaleform::SFEventNode *> *)
// Range: 0x802A8A38 -> 0x802AA1B8
void Scaleform::SFUpdateModule::applyEvents(class SFUpdateModule * this /* r19 */) {
    // Local variables
    enum eSFEventType eventInst; // r0

    {
        // Range: 0x802A8A6C -> 0x802AA188
        // Local variables
        class GFxValue arg; // r1+0x180
        class GFxValue * args; // r3

        {
            // Range: 0x802A8A6C -> 0x802A8AA0
            // Local variables
            class GFxValue * args; // r20

            {
                // Range: 0x802A8A6C -> 0x802A8AA0
                // Local variables
                float coords[15]; // r1+0x1D0

                {
                    // Range: 0x802A8A74 -> 0x802A8A74
                    // Local variables
                    unsigned int i; // r0
                }
            }
        }
        {
            // Range: 0x802A8AA0 -> 0x802A8AA4
            // Local variables
            class GFxValue boolArgs[4]; // r1+0x190
        }
        {
            // Range: 0x802A8AA8 -> 0x802A8AAC
            // Local variables
            char * namePtr; // r0
            float sceneID; // r1+0x8
        }
    }

    // References
    // -> bool isFirstScene;
    // -> static char * PLATFORM_NAME;
}
