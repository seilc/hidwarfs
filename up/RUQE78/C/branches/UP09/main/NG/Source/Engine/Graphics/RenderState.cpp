/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\RenderState.cpp
*/
static class RenderStateModule rsmod; // size: 0x98, address: 0x80847748
static class ModuleRegistrator renderStateModReg; // size: 0x8, address: 0x808477E0
class Module * renderStateModule; // size: 0x4, address: 0x807BF20C
class StateNode stateNodes[92]; // size: 0x2E0, address: 0x808477E8
class StateDelta stateDeltas[92]; // size: 0x2E0, address: 0x80847AC8
unsigned int stateDefaults[92]; // size: 0x170, address: 0x80847DA8
int stateDeltaSize; // size: 0x4, address: 0x80847F18
class StateDelta stateStack[372]; // size: 0xBA0, address: 0x80847F20
int stateStackSize; // size: 0x4, address: 0x80848AC0
static class RenderStateIDIntPair startupDefaultStatesi[15]; // size: 0x78, address: 0x807878E0
static class RenderStateIDIntPair alphaBlendTransparentStates[8]; // size: 0x40, address: 0x80787958
static class RenderStateIDIntPair alphaBlendDefaultStates[8]; // size: 0x40, address: 0x80787998
static class RenderStateIDFloatPair startupDefaultStatesf[3]; // size: 0x18, address: 0x807879D8
static int dirtyCompoundFlags; // size: 0x4, address: 0x80848AC4
static class StateHandler stateHandlerTable[92]; // size: 0x170, address: 0x807879F0
enum _GXBlendFactor blendFactorTable[15]; // size: 0x3C, address: 0x807BF210
static class RelativePriority priority[1]; // size: 0xC, address: 0x807BF24C
// signature: @unnamed@WAD01_cpp@::LoadDefaults(int *)
// Range: 0x802F7EDC -> 0x802F8100
static void @unnamed@WAD01_cpp@::LoadDefaults() {
    {
        // Range: 0x802F7EE4 -> 0x802F7FC0
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x802F7FC0 -> 0x802F7FC0
        // Local variables
        int i; // r0
    }

    // References
    // -> static class RenderStateIDFloatPair startupDefaultStatesf[3];
    // -> int stateDeltaSize;
    // -> static class RenderStateIDIntPair startupDefaultStatesi[15];
    // -> unsigned int stateDefaults[92];
    // -> class StateNode stateNodes[92];
}
// Range: 0x802F8100 -> 0x802F8164
void Graphics::RenderState::SetMacro_AlphaBlendTransparent(bool enableDepthWrite /* r31 */) {
    // References
    // -> static class RenderStateIDIntPair alphaBlendTransparentStates[8];
}
// Range: 0x802F8164 -> 0x802F8198
void Graphics::RenderState::SetMacro_AlphaBlendDefault() {
    // References
    // -> static class RenderStateIDIntPair alphaBlendDefaultStates[8];
}
// signature: Graphics::RenderState::SetDefaults(const Graphics::RenderState::RenderStateIDIntPair *, int, bool)
// Range: 0x802F8198 -> 0x802F84DC
void Graphics::RenderState::SetDefaults(int size /* r25 */, bool forceApply /* r26 */) {
    {
        // Range: 0x802F81D0 -> 0x802F8360
        // Local variables
        int i; // r27

        {
            // Range: 0x802F81D0 -> 0x802F8360
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
// signature: Graphics::RenderState::SetStateImmediate(int *, Graphics::RenderStateID, unsigned int)
// Range: 0x802F84DC -> 0x802F87C0
void Graphics::RenderState::SetStateImmediate() {
    // References
    // -> enum _GXBlendFactor blendFactorTable[15];
    // -> static int dirtyCompoundFlags;
    // -> static class StateHandler stateHandlerTable[92];
    // -> class StateNode stateNodes[92];
}
// Range: 0x802F87C0 -> 0x802F8AFC
void Graphics::RenderState::Flush() {
    {
        // Range: 0x802F8808 -> 0x802F896C
        // Local variables
        int i; // r28

        {
            // Range: 0x802F8808 -> 0x802F896C
            // Local variables
            unsigned int newValue; // r3
            class StateNode & node; // r27
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
// Range: 0x802F8AFC -> 0x802F8E24
void Graphics::RenderState::InvalidateCache() {
    {
        // Range: 0x802F8B34 -> 0x802F8C90
        // Local variables
        int i; // r28

        {
            // Range: 0x802F8B34 -> 0x802F8C90
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
// Range: 0x802F8E24 -> 0x802F9420
void Graphics::RenderState::WiiSetDefaultStates() {
    {
        // Range: 0x802F8E2C -> 0x802F9060
        // Local variables
        float identity_mtx[3][4]; // r1+0x20

        {
            // Range: 0x802F9020 -> 0x802F9054
            // Local variables
            int i; // r28
        }
    }
    {
        // Range: 0x802F9318 -> 0x802F9344
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x802F93B0 -> 0x802F93BC
        // Local variables
        int i; // r28
    }
}
// signature: Graphics::RenderStateModule::GetPriority(int &) const
// Range: 0x802F9420 -> 0x802F9460
class RelativePriority * Graphics::RenderStateModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[1];
    // -> class Module * sceneGraphModule;
}
// signature: Graphics::RenderStateModule::RenderStartup(int)
// Range: 0x802F9460 -> 0x802F9468
void Graphics::RenderStateModule::RenderStartup() {
}
