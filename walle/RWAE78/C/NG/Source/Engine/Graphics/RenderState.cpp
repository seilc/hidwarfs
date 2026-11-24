/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\RenderState.cpp
*/
static class RenderStateModule rsmod; // size: 0x98, address: 0x807FFD60
static class ModuleRegistrator renderStateModReg; // size: 0x8, address: 0x807FFDF8
class Module * renderStateModule; // size: 0x4, address: 0x80709624
class StateNode stateNodes[92]; // size: 0x2E0, address: 0x807FFE00
class StateDelta stateDeltas[92]; // size: 0x2E0, address: 0x808000E0
unsigned int stateDefaults[92]; // size: 0x170, address: 0x808003C0
int stateDeltaSize; // size: 0x4, address: 0x80800530
class StateDelta stateStack[372]; // size: 0xBA0, address: 0x80800538
int stateStackSize; // size: 0x4, address: 0x808010D8
static class RenderStateIDIntPair startupDefaultStatesi[13]; // size: 0x68, address: 0x806D5BF0
static class RenderStateIDIntPair alphaBlendTransparentStates[8]; // size: 0x40, address: 0x806D5C58
static class RenderStateIDIntPair alphaBlendDefaultStates[8]; // size: 0x40, address: 0x806D5C98
static class RenderStateIDFloatPair startupDefaultStatesf[3]; // size: 0x18, address: 0x806D5CD8
static int dirtyCompoundFlags; // size: 0x4, address: 0x808010DC
static class StateHandler stateHandlerTable[92]; // size: 0x170, address: 0x806D5CF0
enum _GXBlendFactor blendFactorTable[15]; // size: 0x3C, address: 0x80709628
static class RelativePriority priority[1]; // size: 0xC, address: 0x80709664
// signature: @unnamed@WAD01_cpp@::LoadDefaults(int *)
// Range: 0x8026124C -> 0x80261458
static void @unnamed@WAD01_cpp@::LoadDefaults() {
    {
        // Range: 0x80261254 -> 0x80261330
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x80261330 -> 0x80261330
        // Local variables
        int i; // r0
    }

    // References
    // -> static class RenderStateIDFloatPair startupDefaultStatesf[3];
    // -> int stateDeltaSize;
    // -> static class RenderStateIDIntPair startupDefaultStatesi[13];
    // -> unsigned int stateDefaults[92];
    // -> class StateNode stateNodes[92];
}
// Range: 0x80261458 -> 0x802614BC
void Graphics::RenderState::SetMacro_AlphaBlendTransparent(bool enableDepthWrite /* r31 */) {
    // References
    // -> static class RenderStateIDIntPair alphaBlendTransparentStates[8];
}
// Range: 0x802614BC -> 0x802614F0
void Graphics::RenderState::SetMacro_AlphaBlendDefault() {
    // References
    // -> static class RenderStateIDIntPair alphaBlendDefaultStates[8];
}
// signature: Graphics::RenderState::SetDefaults(const Graphics::RenderState::RenderStateIDIntPair *, int, bool)
// Range: 0x802614F0 -> 0x8026183C
void Graphics::RenderState::SetDefaults(int size /* r25 */, bool forceApply /* r26 */) {
    {
        // Range: 0x80261528 -> 0x802616C8
        // Local variables
        int i; // r27

        {
            // Range: 0x80261528 -> 0x802616C8
            // Local variables
            unsigned int value; // r3
            enum RenderStateID id; // r7
        }
    }

    // References
    // -> enum _GXBlendFactor blendFactorTable[15];
    // -> static class StateHandler stateHandlerTable[92];
    // -> class StateNode stateNodes[92];
    // -> unsigned int stateDefaults[92];
    // -> static int dirtyCompoundFlags;
}
// Range: 0x8026183C -> 0x80261B80
void Graphics::RenderState::Flush() {
    {
        // Range: 0x80261880 -> 0x802619F8
        // Local variables
        int i; // r28

        {
            // Range: 0x80261880 -> 0x802619F8
            // Local variables
            unsigned int newValue; // r3
            class StateNode * node; // r27
            enum RenderStateID id; // r5
        }
    }

    // References
    // -> enum _GXBlendFactor blendFactorTable[15];
    // -> class StateNode stateNodes[92];
    // -> static class StateHandler stateHandlerTable[92];
    // -> class StateDelta stateDeltas[92];
    // -> static int dirtyCompoundFlags;
    // -> int stateDeltaSize;
}
// signature: Graphics::RenderState::InvalidateCache(bool)
// Range: 0x80261B80 -> 0x80261EAC
void Graphics::RenderState::InvalidateCache() {
    {
        // Range: 0x80261BB8 -> 0x80261D20
        // Local variables
        int i; // r21

        {
            // Range: 0x80261BB8 -> 0x80261D20
            // Local variables
            unsigned int v; // r0
        }
    }

    // References
    // -> enum _GXBlendFactor blendFactorTable[15];
    // -> int stateStackSize;
    // -> int stateDeltaSize;
    // -> static class StateHandler stateHandlerTable[92];
    // -> unsigned int stateDefaults[92];
    // -> class StateNode stateNodes[92];
    // -> static int dirtyCompoundFlags;
}
// signature: Graphics::RenderState::WiiSetDefaultStates(bool)
// Range: 0x80261EAC -> 0x802624C8
void Graphics::RenderState::WiiSetDefaultStates() {
    // Local variables
    class _GXColor WHITE; // r1+0x1C

    {
        // Range: 0x80261EB4 -> 0x80262104
        // Local variables
        float identity_mtx[3][4]; // r1+0x20

        {
            // Range: 0x802620C4 -> 0x802620F8
            // Local variables
            int i; // r29
        }
    }
    {
        // Range: 0x802623C4 -> 0x802623F0
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x8026245C -> 0x80262468
        // Local variables
        int i; // r29
    }
}
// signature: Graphics::RenderStateModule::GetPriority(int &) const
// Range: 0x802624C8 -> 0x80262508
class RelativePriority * Graphics::RenderStateModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[1];
    // -> class Module * sceneGraphModule;
}
// signature: Graphics::RenderStateModule::RenderStartup(int)
// Range: 0x80262508 -> 0x80262510
void Graphics::RenderStateModule::RenderStartup() {
}
