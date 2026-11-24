/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\RenderState.cpp
*/
static class RenderStateModule rsmod; // size: 0x98, address: 0x80775FA0
static class ModuleRegistrator renderStateModReg; // size: 0x8, address: 0x80776038
class Module * renderStateModule; // size: 0x4, address: 0x806CD204
class StateNode stateNodes[92]; // size: 0x2E0, address: 0x80776040
class StateDelta stateDeltas[92]; // size: 0x2E0, address: 0x80776320
unsigned int stateDefaults[92]; // size: 0x170, address: 0x80776600
int stateDeltaSize; // size: 0x4, address: 0x80776770
class StateDelta stateStack[372]; // size: 0xBA0, address: 0x80776778
int stateStackSize; // size: 0x4, address: 0x80777318
static class RenderStateIDIntPair startupDefaultStatesi[15]; // size: 0x78, address: 0x80692DF0
static class RenderStateIDIntPair alphaBlendTransparentStates[8]; // size: 0x40, address: 0x80692E68
static class RenderStateIDIntPair alphaBlendDefaultStates[8]; // size: 0x40, address: 0x80692EA8
static class RenderStateIDFloatPair startupDefaultStatesf[3]; // size: 0x18, address: 0x80692EE8
static int dirtyCompoundFlags; // size: 0x4, address: 0x8077731C
static class StateHandler stateHandlerTable[92]; // size: 0x170, address: 0x80692F00
enum _GXBlendFactor blendFactorTable[15]; // size: 0x3C, address: 0x806CD208
int * device; // size: 0x4, address: 0x80693070
int * device; // size: 0x4, address: 0x80693078
int * device; // size: 0x4, address: 0x8069307C
class RelativePriority priority[1]; // size: 0xC, address: 0x806CD244
int * device; // size: 0x4, address: 0x80693084
// Range: 0x801C9E60 -> 0x801C9EC4
void Graphics::RenderState::SetMacro_AlphaBlendTransparent(bool enableDepthWrite /* r31 */) {
    // References
    // -> static class RenderStateIDIntPair alphaBlendTransparentStates[8];
}
// Range: 0x801C9ED0 -> 0x801C9F04
void Graphics::RenderState::SetMacro_AlphaBlendDefault() {
    // References
    // -> static class RenderStateIDIntPair alphaBlendDefaultStates[8];
}
// signature: Graphics::RenderState::ApplyState(int *, Graphics::RenderStateID, unsigned int)
// Range: 0x801C9FD0 -> 0x801CA134
void Graphics::RenderState::ApplyState() {
    // Local variables
    int compoundFlag; // r6

    // References
    // -> static class StateHandler stateHandlerTable[92];
    // -> static int dirtyCompoundFlags;
}
// signature: Graphics::RenderState::EndApplyState(int *)
// Range: 0x801CA140 -> 0x801CA2C0
void Graphics::RenderState::EndApplyState() {
    // Local variables
    int dirty; // r31

    {
        // Range: 0x801CA220 -> 0x801CA2AC
        // Local variables
        unsigned int sepAlphaBlend; // r28
        unsigned int colorWrite; // r29
        enum RenderStateBlend dstBlendAlpha; // r30
        enum RenderStateBlend srcBlendAlpha; // r31
    }

    // References
    // -> enum _GXBlendFactor blendFactorTable[15];
    // -> class StateNode stateNodes[92];
    // -> static int dirtyCompoundFlags;
}
// Range: 0x801C9F10 -> 0x801C9FCC
void Graphics::RenderState::SetDefaults(class RenderStateIDIntPair * list /* r24 */, int size /* r25 */, bool forceApply /* r26 */) {
    {
        // Range: 0x801C9F38 -> 0x801C9FB0
        // Local variables
        int i; // r27

        {
            // Range: 0x801C9F38 -> 0x801C9FB0
            // Local variables
            unsigned int value; // r5
            enum RenderStateID id; // r4
        }
    }

    // References
    // -> static int dirtyCompoundFlags;
    // -> class StateNode stateNodes[92];
    // -> unsigned int stateDefaults[92];
}
// signature: Graphics::RenderState::SetStateImmediate(int *, Graphics::RenderStateID, unsigned int)
// Range: 0x801CA2C0 -> 0x801CA314
void Graphics::RenderState::SetStateImmediate(int * device /* r31 */) {
    // References
    // -> static int dirtyCompoundFlags;
    // -> class StateNode stateNodes[92];
}
// Range: 0x801CA320 -> 0x801CA3D0
void Graphics::RenderState::Flush() {
    {
        // Range: 0x801CA350 -> 0x801CA3AC
        // Local variables
        int i; // r25

        {
            // Range: 0x801CA350 -> 0x801CA3AC
            // Local variables
            unsigned int newValue; // r5
            class StateNode & node; // r24
            enum RenderStateID id; // r4
        }
    }

    // References
    // -> class StateNode stateNodes[92];
    // -> class StateDelta stateDeltas[92];
    // -> static int dirtyCompoundFlags;
    // -> int stateDeltaSize;
}
// signature: Graphics::RenderState::InvalidateCache(bool)
// Range: 0x801CA3D0 -> 0x801CA474
void Graphics::RenderState::InvalidateCache() {
    {
        // Range: 0x801CA3EC -> 0x801CA44C
        // Local variables
        int i; // r23
    }

    // References
    // -> int stateStackSize;
    // -> int stateDeltaSize;
    // -> static int dirtyCompoundFlags;
    // -> class StateNode stateNodes[92];
    // -> unsigned int stateDefaults[92];
}
// signature: Graphics::RenderState::WiiSetDefaultStates(bool)
// Range: 0x801CA480 -> 0x801CAA6C
void Graphics::RenderState::WiiSetDefaultStates() {
    {
        // Range: 0x801CA498 -> 0x801CA6B4
        // Local variables
        float identity_mtx[3][4]; // r1+0x20

        {
            // Range: 0x801CA674 -> 0x801CA6B4
            // Local variables
            int i; // r28
        }
    }
    {
        // Range: 0x801CA96C -> 0x801CA9A4
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x801CAA04 -> 0x801CAA1C
        // Local variables
        int i; // r28
    }
}
// Range: 0x801CAA70 -> 0x801CAAB4
void * Graphics::RenderStateModule::RenderStateModule(class RenderStateModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28Graphics17RenderStateModule;
}
// signature: Graphics::RenderStateModule::GetPriority(int &) const
// Range: 0x801CAAC0 -> 0x801CAB00
class RelativePriority * Graphics::RenderStateModule::GetPriority() const {
    // References
    // -> class RelativePriority priority[1];
    // -> class Module * sceneGraphModule;
}
// signature: Graphics::RenderStateModule::RenderStartup(int)
// Range: 0x801CAB00 -> 0x801CABF4
void Graphics::RenderStateModule::RenderStartup() {
    // References
    // -> int stateDeltaSize;
    // -> static class RenderStateIDFloatPair startupDefaultStatesf[3];
    // -> static class RenderStateIDIntPair startupDefaultStatesi[15];
    // -> unsigned int stateDefaults[92];
    // -> class StateNode stateNodes[92];
}
