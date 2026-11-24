/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xLightEffect.cpp
*/
class _OGLight_Effect_FlickerSchema _OGLight_Effect_Flickerschema; // size: 0x18, address: 0x807580C0
class SchemaRegistrator _OGLight_Effect_FlickerschemaReg; // size: 0x8, address: 0x807580D8
class _OGLight_Effect_StrobeSchema _OGLight_Effect_Strobeschema; // size: 0x18, address: 0x807580E0
class SchemaRegistrator _OGLight_Effect_StrobeschemaReg; // size: 0x8, address: 0x807580F8
// Range: 0x80047BB0 -> 0x80047BC0
void World::_OGLight_Effect_FlickerEntity::Deactivate() {
}
// Range: 0x80047BC0 -> 0x80047C10
void World::_OGLight_Effect_FlickerEntity::Destroy(class _OGLight_Effect_FlickerEntity * this /* r31 */) {
}
// signature: World::_OGLight_Effect_FlickerSchema::Fix(World::Asset *, long, int)
// Range: 0x80047C70 -> 0x80047C78
void World::_OGLight_Effect_FlickerSchema::Fix() {
}
// signature: World::_OGLight_Effect_FlickerSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80047C80 -> 0x80047CCC
class EntityStub * World::_OGLight_Effect_FlickerSchema::CreateStub(class _OGLight_Effect_FlickerSchema * this /* r31 */) {
}
// signature: World::_OGLight_Effect_FlickerSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80047CD0 -> 0x80047CE8
void World::_OGLight_Effect_FlickerSchema::DestroyStub() {
}
// signature: World::_OGLight_Effect_FlickerSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80047CF0 -> 0x80047D58
class Entity * World::_OGLight_Effect_FlickerSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World29_OGLight_Effect_FlickerEntity;
}
// Range: 0x80047DA0 -> 0x80047DB0
void World::_OGLight_Effect_StrobeEntity::Deactivate() {
}
// Range: 0x80047DB0 -> 0x80047E00
void World::_OGLight_Effect_StrobeEntity::Destroy(class _OGLight_Effect_StrobeEntity * this /* r31 */) {
}
// signature: World::_OGLight_Effect_StrobeSchema::Fix(World::Asset *, long, int)
// Range: 0x80047E60 -> 0x80047E68
void World::_OGLight_Effect_StrobeSchema::Fix() {
}
// signature: World::_OGLight_Effect_StrobeSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80047E70 -> 0x80047EBC
class EntityStub * World::_OGLight_Effect_StrobeSchema::CreateStub(class _OGLight_Effect_StrobeSchema * this /* r31 */) {
}
// signature: World::_OGLight_Effect_StrobeSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80047EC0 -> 0x80047ED8
void World::_OGLight_Effect_StrobeSchema::DestroyStub() {
}
// signature: World::_OGLight_Effect_StrobeSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80047EE0 -> 0x80047F48
class Entity * World::_OGLight_Effect_StrobeSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World28_OGLight_Effect_StrobeEntity;
}
// signature: xLightEffectFlicker::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x80047F90 -> 0x80047FD8
void xLightEffectFlicker::Init() {
    // Local variables
    class xLightEffectFlicker * flickerEffect; // r0

    // References
    // -> struct {} __vt__19xLightEffectFlicker;
}
// signature: xLightEffectFlicker::StartEffect(xLight &, bool)
// Range: 0x80048020 -> 0x80048060
void xLightEffectFlicker::StartEffect() {
}
// signature: xLightEffectFlicker::StopEffect(xLight &, bool)
// Range: 0x80048060 -> 0x80048174
void xLightEffectFlicker::StopEffect(class xLight * light /* r31 */) {
}
// signature: xLightEffectFlicker::UpdateEffect(xLight &, float)
// Range: 0x80048180 -> 0x80048A94
void xLightEffectFlicker::UpdateEffect(class xLight * light /* r31 */) {
    // Local variables
    class xLightEffectFlickerData * flickerData; // r0

    {
        // Range: 0x800481AC -> 0x80048A80
        // Local variables
        float blendtime; // f0
        class _xFColor newColor; // r1+0x48

        {
            // Range: 0x8004833C -> 0x800484E8
            // Local variables
            float randomNum; // f0
        }
    }

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// signature: xLightEffectStrobe::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x80048AA0 -> 0x80048AF4
void xLightEffectStrobe::Init() {
    // Local variables
    class xLightEffectStrobe * strobeEffect; // r0

    // References
    // -> struct {} __vt__18xLightEffectStrobe;
}
// signature: xLightEffectStrobe::StartEffect(xLight &, bool)
// Range: 0x80048B00 -> 0x80048B48
void xLightEffectStrobe::StartEffect() {
}
// signature: xLightEffectStrobe::StopEffect(xLight &, bool)
// Range: 0x80048B50 -> 0x80048C64
void xLightEffectStrobe::StopEffect(class xLight * light /* r31 */) {
}
// signature: xLightEffectStrobe::UpdateEffect(xLight &, float)
// Range: 0x80048C70 -> 0x8004925C
void xLightEffectStrobe::UpdateEffect(class xLight * light /* r31 */) {
    // Local variables
    class xLightEffectStrobeData * strobeData; // r0

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
