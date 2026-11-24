/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zContextObjectPointJump.cpp
*/
class _OGPointJumpSchema _OGPointJumpschema; // size: 0x18, address: 0x807F8E30
class SchemaRegistrator _OGPointJumpschemaReg; // size: 0x8, address: 0x807F8E48
// Range: 0x801F8F90 -> 0x801F8FA0
void World::_OGPointJumpEntity::Deactivate() {
}
// Range: 0x801F8FA0 -> 0x801F8FF0
void World::_OGPointJumpEntity::Destroy(class _OGPointJumpEntity * this /* r31 */) {
}
// signature: World::_OGPointJumpSchema::Fix(World::Asset *, long, int)
// Range: 0x801F9050 -> 0x801F9058
void World::_OGPointJumpSchema::Fix() {
}
// signature: World::_OGPointJumpSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801F9060 -> 0x801F90AC
class EntityStub * World::_OGPointJumpSchema::CreateStub(class _OGPointJumpSchema * this /* r31 */) {
}
// signature: World::_OGPointJumpSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801F90B0 -> 0x801F90C8
void World::_OGPointJumpSchema::DestroyStub() {
}
// signature: World::_OGPointJumpSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801F90D0 -> 0x801F9134
class Entity * World::_OGPointJumpSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World18_OGPointJumpEntity;
}
// signature: zPointJump_Init(void *, void *)
// Range: 0x801F9180 -> 0x801F91BC
void zPointJump_Init() {
    // References
    // -> struct {} __vt__23zContextObjectPointJump;
}
// signature: PointJumpEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801F91C0 -> 0x801F91DC
static void PointJumpEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x801F91E0 -> 0x801F9230
void zContextObjectPointJump::Init(class zContextObjectPointJump * this /* r30 */, class zContextObjectPointJumpAsset * inAsset /* r31 */) {
}
// Range: 0x801F9230 -> 0x801F9270
void zContextObjectPointJump::Setup(class zContextObjectPointJump * this /* r31 */) {
}
// Range: 0x801F9270 -> 0x801F92C8
void zContextObjectPointJump::Reset(class zContextObjectPointJump * this /* r31 */) {
}
// signature: zContextObjectPointJump::CanMount(zCommonPlayer *, zContextObject::MountData &, zContextObjectPriority &) const
// Range: 0x801F92D0 -> 0x801F94B0
bool zContextObjectPointJump::CanMount(class zContextObjectPointJump * this /* r29 */, class MountData * mountData /* r30 */, class zContextObjectPriority * priority /* r31 */) const {
    // Local variables
    class xVec3 playerPos; // r1+0x14
    float distance2; // f0
    class zContextObjectPriority thisPriority; // r1+0x48
}
// signature: zContextObjectPointJump::Mount(zCommonPlayer *, zContextObject::MountData &, float)
// Range: 0x801F94C0 -> 0x801F94F0
bool zContextObjectPointJump::Mount(class zContextObjectPointJump * this /* r7 */) {
}
// Range: 0x801F94F0 -> 0x801F9594
void zContextObjectPointJump::MountEnd(class zCommonPlayer * player /* r31 */) {
}
// signature: zContextObjectPointJump::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801F95A0 -> 0x801F96B0
void zContextObjectPointJump::HandleEvent() {
}
// Range: 0x801F96B0 -> 0x801F9884
void zContextObjectPointJump::DrivenBySetup(class zContextObjectPointJump * this /* r29 */) {
    {
        // Range: 0x801F96E0 -> 0x801F9858
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x801F96E0 -> 0x801F9858
            {
                // Range: 0x801F96E0 -> 0x801F9858
                // Local variables
                class xEnt * dent; // r0

                {
                    // Range: 0x801F96F0 -> 0x801F9858
                    // Local variables
                    class EventActionDrivenBy * actionParamsLink; // r25
                }
            }
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x801F9890 -> 0x801F9978
void zContextObjectPointJump::update() {
    {
        // Range: 0x801F98A0 -> 0x801F9938
        // Local variables
        class xVec3 offset; // r1+0x8
    }
}
