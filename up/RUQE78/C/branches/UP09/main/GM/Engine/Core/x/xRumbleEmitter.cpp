/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xRumbleEmitter.cpp
*/
// signature: @unnamed@WAD00_cpp@::emitter_EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800750B0 -> 0x800756C8
static void @unnamed@WAD00_cpp@::emitter_EventCB(class xBase * to /* r28 */) {
    {
        // Range: 0x800750F8 -> 0x800751FC
        // Local variables
        class emitterBase * pEffect; // reg65535
        unsigned int whichController; // r4

        {
            // Range: 0x800750F8 -> 0x800751F4
            // Local variables
            class zPlayerInput * pad; // r22
        }
    }
    {
        // Range: 0x800751FC -> 0x800753F0
        // Local variables
        class emitterBase * pEffect; // reg65535
        unsigned int whichViewport; // r31

        {
            // Range: 0x80075208 -> 0x800752F0
            // Local variables
            int startidx; // r30
        }
        {
            // Range: 0x800752F0 -> 0x800753E8
            // Local variables
            int playerIndex; // r5

            {
                // Range: 0x80075340 -> 0x80075348
                // Local variables
                int i; // r22
            }
        }
    }
    {
        // Range: 0x800753F0 -> 0x800756A8
        // Local variables
        class emitterBase * pEffect; // r0
        unsigned int whichViewport; // r30

        {
            // Range: 0x800753FC -> 0x8007552C
            // Local variables
            int startidx; // r29
        }
        {
            // Range: 0x8007552C -> 0x800756A8
            // Local variables
            int playerIndex; // r5

            {
                // Range: 0x8007557C -> 0x80075584
                // Local variables
                int i; // r22
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> static class Manager rumbleManager;
    // -> int gTrcPortPlayerMap[4];
}
// signature: xRumble::effectAsset::GetIntensity(float, float) const
// Range: 0x800756E0 -> 0x80075830
float xRumble::effectAsset::GetIntensity(class effectAsset * this /* r30 */, float currentTime /* f30 */) const {
    {
        // Range: 0x8007574C -> 0x80075798
        // Local variables
        float pulsePeriod; // f31
    }
}
// Range: 0x80075830 -> 0x80075950
bool xRumble::boxEmitter::GetIntensity(class boxEmitter * this /* r29 */, class xVec3 & playerPos /* r30 */, float & intensity /* r31 */) const {
    // References
    // -> class xGlobals * xglobals;
}
// signature: xRumble::sphericalEmitter::GetIntensity(const xVec3 &, float &) const
// Range: 0x80075950 -> 0x80075B3C
bool xRumble::sphericalEmitter::GetIntensity(class sphericalEmitter * this /* r29 */, float & intensity /* r30 */) const {
    // Local variables
    float distSqrd; // f31
    int charIndex; // r27

    // References
    // -> class xGlobals * xglobals;
}
// signature: xRumble::sphericalEmitter::UpdatePosition(const xVec3 &) const
// Range: 0x80075B60 -> 0x80075B80
void xRumble::sphericalEmitter::UpdatePosition() const {
}
// Range: 0x80075B80 -> 0x80075C64
class Entity * Sext::Rumble::Create(class EntityHandleBase * handle /* r30 */, class Rumble * asset /* r31 */) {
    // References
    // -> struct {} __vt__Q27xRumble6effect;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80075C70 -> 0x80075D8C
class Entity * Sext::Rumble_Spherical_Emitter::Create(class EntityHandleBase * handle /* r29 */, class Rumble_Spherical_Emitter * asset /* r30 */) {
    // References
    // -> struct {} __vt__Q27xRumble16sphericalEmitter;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80075D90 -> 0x80075EA0
class Entity * Sext::Rumble_Box_Emitter::Create(class EntityHandleBase * handle /* r29 */, class Rumble_Box_Emitter * asset /* r30 */) {
    // References
    // -> struct {} __vt__Q27xRumble10boxEmitter;
    // -> struct {} __vt__Q25World9xOGEntity;
}
