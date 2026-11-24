/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xLightEffect.cpp
*/
// Range: 0x80064390 -> 0x80064468
class Entity * Sext::Light_Effect_Flicker::Create(class EntityHandleBase * handle /* r30 */, class Light_Effect_Flicker * asset /* r31 */) {
    // References
    // -> struct {} __vt__19xLightEffectFlicker;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: xLightEffectFlicker::StartEffect(xLightData &, bool)
// Range: 0x80064470 -> 0x800644B0
void xLightEffectFlicker::StartEffect() {
}
// signature: xLightEffectFlicker::StopEffect(xLightData &, bool)
// Range: 0x800644B0 -> 0x800645C4
void xLightEffectFlicker::StopEffect(class xLightData & light /* r31 */) {
}
// signature: xLightEffectFlicker::UpdateEffect(xLightData &, float)
// Range: 0x800645D0 -> 0x80064EE4
void xLightEffectFlicker::UpdateEffect(class xLightData & light /* r31 */) {
    // Local variables
    class xLightEffectFlickerData & flickerData; // r0

    {
        // Range: 0x800645FC -> 0x80064ED0
        // Local variables
        float blendtime; // f0
        class ColorF newColor; // r1+0x48

        {
            // Range: 0x8006478C -> 0x80064938
            // Local variables
            float randomNum; // f0
        }
    }

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// Range: 0x80064EF0 -> 0x80064FD4
class Entity * Sext::Light_Effect_Strobe::Create(class EntityHandleBase * handle /* r30 */, class Light_Effect_Strobe * asset /* r31 */) {
    // References
    // -> struct {} __vt__18xLightEffectStrobe;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: xLightEffectStrobe::StartEffect(xLightData &, bool)
// Range: 0x80064FE0 -> 0x80065028
void xLightEffectStrobe::StartEffect() {
}
// signature: xLightEffectStrobe::StopEffect(xLightData &, bool)
// Range: 0x80065030 -> 0x80065144
void xLightEffectStrobe::StopEffect(class xLightData & light /* r31 */) {
}
// signature: xLightEffectStrobe::UpdateEffect(xLightData &, float)
// Range: 0x80065150 -> 0x80065740
void xLightEffectStrobe::UpdateEffect(class xLightEffectStrobe * this /* r30 */, class xLightData & light /* r31 */) {
    // Local variables
    class xLightEffectStrobeData & strobeData; // r0

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
