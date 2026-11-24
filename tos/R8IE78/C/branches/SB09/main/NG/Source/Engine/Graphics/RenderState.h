/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\RenderState.h
*/
// signature: Graphics::RenderState::SetAlphaTest(unsigned short, int)
// Range: 0x802103C0 -> 0x802104C0
void Graphics::RenderState::SetAlphaTest() {
    // References
    // -> class StateDelta stateDeltas[92];
    // -> class StateDelta stateStack[372];
    // -> int stateDeltaSize;
    // -> int stateStackSize;
    // -> class StateNode stateNodes[92];
}
// signature: Graphics::RenderState::SetAlphaBlend(unsigned short, int)
// Range: 0x8020FDC0 -> 0x8020FEC0
void Graphics::RenderState::SetAlphaBlend() {
    // References
    // -> class StateDelta stateDeltas[92];
    // -> class StateDelta stateStack[372];
    // -> int stateDeltaSize;
    // -> int stateStackSize;
    // -> class StateNode stateNodes[92];
}
// signature: Graphics::RenderState::SetCull(unsigned short, Graphics::RenderStateCull)
// Range: 0x802105C0 -> 0x802106C0
void Graphics::RenderState::SetCull() {
    // References
    // -> class StateDelta stateDeltas[92];
    // -> class StateDelta stateStack[372];
    // -> int stateDeltaSize;
    // -> int stateStackSize;
    // -> class StateNode stateNodes[92];
}
// signature: Graphics::RenderState::SetColorWrite0(unsigned short, int)
// Range: 0x802104C0 -> 0x802105C0
void Graphics::RenderState::SetColorWrite0() {
    // References
    // -> class StateDelta stateDeltas[92];
    // -> class StateDelta stateStack[372];
    // -> int stateDeltaSize;
    // -> int stateStackSize;
    // -> class StateNode stateNodes[92];
}
// signature: Graphics::RenderState::PushValueI(Graphics::RenderStateID, unsigned int, short)
// Range: 0x801C35D0 -> 0x801C3600
void Graphics::RenderState::PushValueI() {
    // References
    // -> class StateDelta stateStack[372];
    // -> int stateStackSize;
}
// signature: Graphics::RenderState::SetStateInt(Graphics::RenderStateID, unsigned short, unsigned int, unsigned int, unsigned int)
// Range: 0x801C34F0 -> 0x801C35C8
void Graphics::RenderState::SetStateInt(enum RenderStateID id /* r28 */, unsigned short priority /* r31 */, unsigned int i /* r29 */) {
    // References
    // -> class StateDelta stateDeltas[92];
    // -> int stateDeltaSize;
    // -> class StateNode stateNodes[92];
}
// Range: 0x801C34C0 -> 0x801C34EC
void Graphics::RenderState::BeginRenderMode() {
    // References
    // -> class StateDelta stateStack[372];
    // -> int stateStackSize;
}
// Range: 0x801C3600 -> 0x801C36B4
void Graphics::RenderState::EndRenderMode() {
    {
        // Range: 0x801C3610 -> 0x801C36A0
        // Local variables
        class StateNode & node; // r0
    }

    // References
    // -> int stateStackSize;
    // -> int stateDeltaSize;
    // -> class StateNode stateNodes[92];
    // -> class StateDelta stateStack[372];
    // -> class StateDelta stateDeltas[92];
}
