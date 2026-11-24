/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xLightEffect.cpp
*/
// Range: 0x80035A80 -> 0x80035B00
class Entity * Sext::Light_Effect_Flicker::Create(class EntityHandleBase * handle /* r29 */, class Light_Effect_Flicker * asset /* r30 */) {
    // References
    // -> struct {} __vt__19xLightEffectFlicker;
}
// signature: xLightEffectFlicker::StartEffect(xLightData &, bool)
// Range: 0x80035B40 -> 0x80035B90
void xLightEffectFlicker::StartEffect(class xLightData & light /* r31 */) {
}
// signature: xLightEffectFlicker::StopEffect(xLightData &, bool)
// Range: 0x80035B90 -> 0x80035BB8
void xLightEffectFlicker::StopEffect() {
}
// signature: xLightEffectFlicker::UpdateEffect(xLightData &, float)
// Range: 0x80035BC0 -> 0x80035D1C
void xLightEffectFlicker::UpdateEffect(class xLightEffectFlicker * this /* r28 */, class xLightData & light /* r29 */) {
    // Local variables
    class xLightEffectFlickerData & flickerData; // r0

    {
        // Range: 0x80035BD8 -> 0x80035D04
        // Local variables
        float blendtime; // f0
        class ColorF newColor; // r1+0x8

        {
            // Range: 0x80035C20 -> 0x80035C78
            // Local variables
            float randomNum; // f0
        }
    }
}
// Range: 0x80035D20 -> 0x80035DB4
class Entity * Sext::Light_Effect_Strobe::Create(class EntityHandleBase * handle /* r29 */, class Light_Effect_Strobe * asset /* r30 */) {
    // References
    // -> struct {} __vt__18xLightEffectStrobe;
}
// signature: xLightEffectStrobe::StartEffect(xLightData &, bool)
// Range: 0x80035DC0 -> 0x80035E18
void xLightEffectStrobe::StartEffect(class xLightData & light /* r31 */) {
}
// signature: xLightEffectStrobe::UpdateEffect(xLightData &, float)
// Range: 0x80035E20 -> 0x80035F20
void xLightEffectStrobe::UpdateEffect(class xLightEffectStrobe * this /* r31 */) {
    // Local variables
    class xLightEffectStrobeData & strobeData; // r30
}
