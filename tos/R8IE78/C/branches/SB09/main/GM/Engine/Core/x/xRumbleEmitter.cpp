/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xRumbleEmitter.cpp
*/
// signature: @unnamed@WAD00_cpp@::emitter_EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8003F420 -> 0x8003F764
static void @unnamed@WAD00_cpp@::emitter_EventCB() {
    {
        // Range: 0x8003F458 -> 0x8003F4CC
        // Local variables
        class emitterBase * pEffect; // r27
        unsigned int whichController; // r3

        {
            // Range: 0x8003F458 -> 0x8003F4C4
            // Local variables
            class zPlayerInput * pad; // r28
        }
    }
    {
        // Range: 0x8003F4CC -> 0x8003F62C
        // Local variables
        class emitterBase * pEffect; // r30
        unsigned int whichViewport; // r31

        {
            // Range: 0x8003F4DC -> 0x8003F588
            // Local variables
            int startidx; // r26
        }
        {
            // Range: 0x8003F588 -> 0x8003F624
            // Local variables
            int playerIndex; // r6

            {
                // Range: 0x8003F5DC -> 0x8003F624
                // Local variables
                int i; // r0
            }
        }
    }
    {
        // Range: 0x8003F62C -> 0x8003F750
        // Local variables
        class emitterBase * pEffect; // r30
        unsigned int whichViewport; // r26

        {
            // Range: 0x8003F63C -> 0x8003F6B4
            // Local variables
            int startidx; // r27
        }
        {
            // Range: 0x8003F6B4 -> 0x8003F750
            // Local variables
            int playerIndex; // r6

            {
                // Range: 0x8003F708 -> 0x8003F750
                // Local variables
                int i; // r0
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: xRumble::effectAsset::GetIntensity(float, float) const
// Range: 0x8003F770 -> 0x8003F8D8
float xRumble::effectAsset::GetIntensity(class effectAsset * this /* r31 */, float currentTime /* f30 */) const {
    {
        // Range: 0x8003F7D4 -> 0x8003F82C
        // Local variables
        float pulsePeriod; // f31
    }
}
// signature: xRumble::effect::effect(World::EntityHandleBase *, xRumble::effectAsset *)
// Range: 0x8003F8E0 -> 0x8003F944
void * xRumble::effect::effect(class effect * this /* r30 */, class effectAsset * pAsset /* r31 */) {
    // References
    // -> struct {} __vt__Q27xRumble6effect;
}
// signature: xRumble::boxEmitter::boxEmitter(World::EntityHandleBase *, xRumble::boxEmitterAsset *)
// Range: 0x8003F990 -> 0x8003FA08
void * xRumble::boxEmitter::boxEmitter(class boxEmitter * this /* r30 */, class boxEmitterAsset * pAsset /* r31 */) {
    // References
    // -> struct {} __vt__Q27xRumble10boxEmitter;
}
// Range: 0x8003FA10 -> 0x8003FB28
bool xRumble::boxEmitter::GetIntensity(class boxEmitter * this /* r29 */, class xVec3 & playerPos /* r30 */, float & intensity /* r31 */) const {
    // References
    // -> class xGlobals * xglobals;
}
// signature: xRumble::sphericalEmitter::sphericalEmitter(World::EntityHandleBase *, xRumble::sphericalEmitterAsset *)
// Range: 0x8003FB30 -> 0x8003FBBC
void * xRumble::sphericalEmitter::sphericalEmitter(class sphericalEmitter * this /* r30 */, class sphericalEmitterAsset * pAsset /* r31 */) {
    // References
    // -> struct {} __vt__Q27xRumble16sphericalEmitter;
}
// Range: 0x8003FBC0 -> 0x8003FD70
bool xRumble::sphericalEmitter::GetIntensity(class sphericalEmitter * this /* r30 */, class xVec3 & playerPos /* r28 */, float & intensity /* r31 */) const {
    // Local variables
    float distSqrd; // f31
    int charIndex; // r28

    // References
    // -> class xGlobals * xglobals;
}
// signature: xRumble::sphericalEmitter::UpdatePosition(const xVec3 &) const
// Range: 0x8003FD90 -> 0x8003FD9C
void xRumble::sphericalEmitter::UpdatePosition() const {
}
// Range: 0x8003FDA0 -> 0x8003FE00
class Entity * Sext::Rumble::Create(class EntityHandleBase * handle /* r30 */, class Rumble * asset /* r31 */) {
}
// Range: 0x8003FE00 -> 0x8003FE60
class Entity * Sext::Rumble_Spherical_Emitter::Create(class EntityHandleBase * handle /* r30 */, class Rumble_Spherical_Emitter * asset /* r31 */) {
}
// Range: 0x8003FE60 -> 0x8003FEC0
class Entity * Sext::Rumble_Box_Emitter::Create(class EntityHandleBase * handle /* r30 */, class Rumble_Box_Emitter * asset /* r31 */) {
}
