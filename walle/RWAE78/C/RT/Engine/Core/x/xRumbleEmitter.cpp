/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xRumbleEmitter.cpp
*/
class _OGRumbleSchema _OGRumbleschema; // size: 0x18, address: 0x8075DA70
class SchemaRegistrator _OGRumbleschemaReg; // size: 0x8, address: 0x8075DA88
class _OGRumble_Box_EmitterSchema _OGRumble_Box_Emitterschema; // size: 0x18, address: 0x8075DA90
class SchemaRegistrator _OGRumble_Box_EmitterschemaReg; // size: 0x8, address: 0x8075DAA8
class _OGRumble_Spherical_EmitterSchema _OGRumble_Spherical_Emitterschema; // size: 0x18, address: 0x8075DAB0
class SchemaRegistrator _OGRumble_Spherical_EmitterschemaReg; // size: 0x8, address: 0x8075DAC8
// Range: 0x80056360 -> 0x80056370
void World::_OGRumbleEntity::Deactivate() {
}
// Range: 0x80056370 -> 0x800563C0
void World::_OGRumbleEntity::Destroy(class _OGRumbleEntity * this /* r31 */) {
}
// signature: World::_OGRumbleSchema::Fix(World::Asset *, long, int)
// Range: 0x80056420 -> 0x80056428
void World::_OGRumbleSchema::Fix() {
}
// signature: World::_OGRumbleSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80056430 -> 0x8005647C
class EntityStub * World::_OGRumbleSchema::CreateStub(class _OGRumbleSchema * this /* r31 */) {
}
// signature: World::_OGRumbleSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80056480 -> 0x80056498
void World::_OGRumbleSchema::DestroyStub() {
}
// signature: World::_OGRumbleSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800564A0 -> 0x80056508
class Entity * World::_OGRumbleSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World15_OGRumbleEntity;
}
// Range: 0x80056550 -> 0x80056560
void World::_OGRumble_Box_EmitterEntity::Deactivate() {
}
// Range: 0x80056560 -> 0x800565B0
void World::_OGRumble_Box_EmitterEntity::Destroy(class _OGRumble_Box_EmitterEntity * this /* r31 */) {
}
// signature: World::_OGRumble_Box_EmitterSchema::Fix(World::Asset *, long, int)
// Range: 0x80056610 -> 0x80056618
void World::_OGRumble_Box_EmitterSchema::Fix() {
}
// signature: World::_OGRumble_Box_EmitterSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80056620 -> 0x8005666C
class EntityStub * World::_OGRumble_Box_EmitterSchema::CreateStub(class _OGRumble_Box_EmitterSchema * this /* r31 */) {
}
// signature: World::_OGRumble_Box_EmitterSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80056670 -> 0x80056688
void World::_OGRumble_Box_EmitterSchema::DestroyStub() {
}
// signature: World::_OGRumble_Box_EmitterSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80056690 -> 0x800566F8
class Entity * World::_OGRumble_Box_EmitterSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World27_OGRumble_Box_EmitterEntity;
}
// Range: 0x80056740 -> 0x80056750
void World::_OGRumble_Spherical_EmitterEntity::Deactivate() {
}
// Range: 0x80056750 -> 0x800567A0
void World::_OGRumble_Spherical_EmitterEntity::Destroy(class _OGRumble_Spherical_EmitterEntity * this /* r31 */) {
}
// signature: World::_OGRumble_Spherical_EmitterSchema::Fix(World::Asset *, long, int)
// Range: 0x80056800 -> 0x80056808
void World::_OGRumble_Spherical_EmitterSchema::Fix() {
}
// signature: World::_OGRumble_Spherical_EmitterSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80056810 -> 0x8005685C
class EntityStub * World::_OGRumble_Spherical_EmitterSchema::CreateStub(class _OGRumble_Spherical_EmitterSchema * this /* r31 */) {
}
// signature: World::_OGRumble_Spherical_EmitterSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80056860 -> 0x80056878
void World::_OGRumble_Spherical_EmitterSchema::DestroyStub() {
}
// signature: World::_OGRumble_Spherical_EmitterSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80056880 -> 0x800568E8
class Entity * World::_OGRumble_Spherical_EmitterSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World33_OGRumble_Spherical_EmitterEntity;
}
// signature: @unnamed@WAD00_cpp@::emitter_EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80056930 -> 0x80056DE8
static void @unnamed@WAD00_cpp@::emitter_EventCB(class xBase * to /* r28 */) {
    {
        // Range: 0x80056970 -> 0x80056B20
        // Local variables
        class emitterBase * pEffect; // reg65535
        unsigned int whichViewport; // r31

        {
            // Range: 0x8005697C -> 0x80056A20
            // Local variables
            int startidx; // r22
        }
        {
            // Range: 0x80056A20 -> 0x80056B18
            // Local variables
            int playerIndex; // r5

            {
                // Range: 0x80056A70 -> 0x80056A78
                // Local variables
                int i; // r22
            }
        }
    }
    {
        // Range: 0x80056B20 -> 0x80056DC8
        // Local variables
        class emitterBase * pEffect; // r0
        unsigned int whichViewport; // r30

        {
            // Range: 0x80056B2C -> 0x80056C4C
            // Local variables
            int startidx; // r29
        }
        {
            // Range: 0x80056C4C -> 0x80056DC8
            // Local variables
            int playerIndex; // r5

            {
                // Range: 0x80056C9C -> 0x80056CA4
                // Local variables
                int i; // r22
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> static class Manager rumbleManager;
}
// signature: xRumble::effectAsset::GetIntensity(float, float) const
// Range: 0x80056DF0 -> 0x80056F40
float xRumble::effectAsset::GetIntensity(class effectAsset * this /* r30 */, float currentTime /* f30 */) const {
    {
        // Range: 0x80056E5C -> 0x80056EA8
        // Local variables
        float pulsePeriod; // f31
    }
}
// signature: xRumble::effect::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x80056F40 -> 0x80056F94
void xRumble::effect::Init() {
    // References
    // -> struct {} __vt__Q27xRumble6effect;
}
// signature: xRumble::boxEmitter::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x80056FE0 -> 0x800570CC
void xRumble::boxEmitter::Init(class xDynAsset * asset /* r28 */) {
    // References
    // -> struct {} __vt__Q27xRumble10boxEmitter;
}
// Range: 0x800570D0 -> 0x800571F0
bool xRumble::boxEmitter::GetIntensity(class boxEmitter * this /* r29 */, class xVec3 * playerPos /* r30 */, float * intensity /* r31 */) const {
    // References
    // -> class xGlobals * xglobals;
}
// signature: xRumble::sphericalEmitter::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x800571F0 -> 0x800572E8
void xRumble::sphericalEmitter::Init(class xDynAsset * asset /* r28 */) {
    // References
    // -> struct {} __vt__Q27xRumble16sphericalEmitter;
}
// signature: xRumble::sphericalEmitter::GetIntensity(const xVec3 &, float &) const
// Range: 0x800572F0 -> 0x80057514
bool xRumble::sphericalEmitter::GetIntensity(class sphericalEmitter * this /* r29 */, float * intensity /* r30 */) const {
    // Local variables
    float distSqrd; // f28
    int charIndex; // r28

    // References
    // -> class xGlobals * xglobals;
}
// signature: xRumble::sphericalEmitter::UpdatePosition(const xVec3 &) const
// Range: 0x80057540 -> 0x80057560
void xRumble::sphericalEmitter::UpdatePosition() const {
}
// signature: xRumble::FreezableObjectEffect::GetIntensity(const xVec3 &, float &) const
// Range: 0x80057560 -> 0x80057708
bool xRumble::FreezableObjectEffect::GetIntensity(class FreezableObjectEffect * this /* r29 */, float * intensity /* r30 */) const {
    // Local variables
    float distSqrd; // f28
}
// signature: xRumble::FreezableObjectEffect::UpdatePosition(xVec3 &)
// Range: 0x80057710 -> 0x8005772C
void xRumble::FreezableObjectEffect::UpdatePosition() {
}
