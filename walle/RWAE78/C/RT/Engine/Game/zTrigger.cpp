/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zTrigger.cpp
*/
class _OGTriggerOGSchema _OGTriggerOGschema; // size: 0x18, address: 0x807E4AE8
class SchemaRegistrator _OGTriggerOGschemaReg; // size: 0x8, address: 0x807E4B00
static class xBox sUnitBox; // size: 0x18, address: 0x807E4B08
// Range: 0x801C5290 -> 0x801C52A0
void World::_OGTriggerOGEntity::Deactivate() {
}
// Range: 0x801C52A0 -> 0x801C52F0
void World::_OGTriggerOGEntity::Destroy(class _OGTriggerOGEntity * this /* r31 */) {
}
// signature: World::_OGTriggerOGSchema::Fix(World::Asset *, long, int)
// Range: 0x801C5350 -> 0x801C5358
void World::_OGTriggerOGSchema::Fix() {
}
// signature: World::_OGTriggerOGSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801C5360 -> 0x801C53AC
class EntityStub * World::_OGTriggerOGSchema::CreateStub(class _OGTriggerOGSchema * this /* r31 */) {
}
// signature: World::_OGTriggerOGSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801C53B0 -> 0x801C53C8
void World::_OGTriggerOGSchema::DestroyStub() {
}
// signature: World::_OGTriggerOGSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801C53D0 -> 0x801C5434
class Entity * World::_OGTriggerOGSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World18_OGTriggerOGEntity;
}
// signature: zTriggerInit(void *, void *)
// Range: 0x801C5480 -> 0x801C5484
void zTriggerInit() {
}
// signature: @unnamed@WAD03_cpp@::zTriggerSetFrameFromTransform(zTrigger *)
// Range: 0x801C5490 -> 0x801C55B4
static void @unnamed@WAD03_cpp@::zTriggerSetFrameFromTransform() {
    {
        // Range: 0x801C54A0 -> 0x801C5544
        // Local variables
        class Vector4 row_3; // r1+0x8
        class Vector4 row_2; // r1+0x18
        class Vector4 row_1; // r1+0x28
    }
}
// signature: zTriggerInit(zTrigger *, xEntAsset *)
// Range: 0x801C55C0 -> 0x801C56AC
void zTriggerInit(class zTrigger * ent /* r30 */) {
    {
        // Range: 0x801C565C -> 0x801C5694
        // Local variables
        class xMat3x3 mat; // r1+0x8
    }
}
// signature: zTriggerUpdate(zTrigger *, xScene *, float)
// Range: 0x801C56B0 -> 0x801C56F4
void zTriggerUpdate(class zTrigger * trig /* r31 */) {
}
// signature: zTrigger::PointIntersects(const xVec3 &) const
// Range: 0x801C5700 -> 0x801C5944
bool zTrigger::PointIntersects() const {
    {
        // Range: 0x801C573C -> 0x801C5828
        // Local variables
        class xIsect isect; // r1+0xCC
        class xVec3 xformVec; // r1+0x28
    }
    {
        // Range: 0x801C5828 -> 0x801C587C
        // Local variables
        class xIsect isect; // r1+0xA0
        class xSphere sphere; // r1+0x18
    }
    {
        // Range: 0x801C587C -> 0x801C58D4
        // Local variables
        class xIsect isect; // r1+0x74
        class xCylinder cylinder; // r1+0x34
    }
    {
        // Range: 0x801C58D4 -> 0x801C5924
        // Local variables
        class xIsect isect; // r1+0x48
        class xSphere sphere; // r1+0x8
    }

    // References
    // -> static class xBox sUnitBox;
}
// signature: zTriggerEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801C5950 -> 0x801C5BEC
void zTriggerEventCB(class EventAny * genericParams /* r30 */) {
    // Local variables
    class zTrigger * trig; // r31

    {
        // Range: 0x801C5A0C -> 0x801C5AE4
        // Local variables
        class xBase * toParamWidgetPtr; // r11
        class EventActionMount * params; // r0

        {
            // Range: 0x801C5AA8 -> 0x801C5AE4
            // Local variables
            float mt; // f1
        }
    }
    {
        // Range: 0x801C5AE8 -> 0x801C5BB8
        // Local variables
        class xBase * toParamWidgetPtr; // r9
        class EventActionMount * params; // r0

        {
            // Range: 0x801C5B88 -> 0x801C5BB8
            // Local variables
            float mt; // f1
        }
    }
    {
        // Range: 0x801C5BBC -> 0x801C5BD4
        // Local variables
        float fadeTime; // f0
        class EventActionSetGlobalReverb * params; // r0
    }

    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// signature: xRayHitsTrigger(const xVec3 &, const xVec3 &, const xMat4x3 &, bool &)
// Range: 0x801C5BF0 -> 0x801C63CC
bool xRayHitsTrigger() {
    // Local variables
    class xBox * b; // r8
    class xVec3 start; // r1+0x14
    class xVec3 end; // r1+0x8
    float hit_x; // f0
    float hit_y; // f1
    float hit_z; // f2

    // References
    // -> static class xBox sUnitBox;
}
