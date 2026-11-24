/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zDirection.cpp
*/
class _OGDirectionSchema _OGDirectionschema; // size: 0x18, address: 0x8076D1F0
class SchemaRegistrator _OGDirectionschemaReg; // size: 0x8, address: 0x8076D208
// Range: 0x800C8760 -> 0x800C8770
void World::_OGDirectionEntity::Deactivate() {
}
// Range: 0x800C8770 -> 0x800C87C0
void World::_OGDirectionEntity::Destroy(class _OGDirectionEntity * this /* r31 */) {
}
// signature: World::_OGDirectionSchema::Fix(World::Asset *, long, int)
// Range: 0x800C8820 -> 0x800C8828
void World::_OGDirectionSchema::Fix() {
}
// signature: World::_OGDirectionSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C8830 -> 0x800C887C
class EntityStub * World::_OGDirectionSchema::CreateStub(class _OGDirectionSchema * this /* r31 */) {
}
// signature: World::_OGDirectionSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800C8880 -> 0x800C8898
void World::_OGDirectionSchema::DestroyStub() {
}
// signature: World::_OGDirectionSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C88A0 -> 0x800C8904
class Entity * World::_OGDirectionSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World18_OGDirectionEntity;
}
// signature: DirectionEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C8950 -> 0x800C896C
static void DirectionEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800C8970 -> 0x800C89C0
void zDirection::Init(class zDirection * this /* r30 */, class zDirectionAsset * inAsset /* r31 */) {
}
// Range: 0x800C89C0 -> 0x800C89F8
void zDirection::Setup() {
}
// Range: 0x800C8A00 -> 0x800C8A38
void zDirection::Reset() {
}
// Range: 0x800C8A40 -> 0x800C8AF0
void zDirection::DebugReset(class zDirection * this /* r25 */) {
    // Local variables
    int tidx; // r0
    int num; // r27

    {
        // Range: 0x800C8A7C -> 0x800C8AD0
        // Local variables
        int count; // r26

        {
            // Range: 0x800C8A7C -> 0x800C8AD0
            // Local variables
            class zGust * gust; // r5
        }
    }

    // References
    // -> class zGlobals globals;
}
// signature: zDirection::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C8AF0 -> 0x800C8B30
void zDirection::HandleEvent() {
}
// signature: zDirection_Init(void *, void *)
// Range: 0x800C8B30 -> 0x800C8B54
void zDirection_Init() {
    // References
    // -> struct {} __vt__10zDirection;
}
// Range: 0x800C8B60 -> 0x800C8BB8
void zDirection::GetDirection(class zDirection * this /* r5 */, class xVec3 * direction /* r31 */) {
    // Local variables
    class xMat3x3 mat; // r1+0x8
}
// Range: 0x800C8BC0 -> 0x800C8C0C
void zDirection::GetRotation(class zDirection * this /* r5 */, class xQuat * quat /* r31 */) {
    // Local variables
    class xMat3x3 mat; // r1+0x8
}
