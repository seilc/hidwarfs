/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCheckpoint.cpp
*/
class _OGCheckpointSchema _OGCheckpointschema; // size: 0x18, address: 0x8076C078
class SchemaRegistrator _OGCheckpointschemaReg; // size: 0x8, address: 0x8076C090
class zCheckpoint * currentActivePtr; // size: 0x4, address: 0x8076C098
// Range: 0x800ADF30 -> 0x800ADF40
void World::_OGCheckpointEntity::Deactivate() {
}
// Range: 0x800ADF40 -> 0x800ADF90
void World::_OGCheckpointEntity::Destroy(class _OGCheckpointEntity * this /* r31 */) {
}
// signature: World::_OGCheckpointSchema::Fix(World::Asset *, long, int)
// Range: 0x800ADFF0 -> 0x800ADFF8
void World::_OGCheckpointSchema::Fix() {
}
// signature: World::_OGCheckpointSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800AE000 -> 0x800AE04C
class EntityStub * World::_OGCheckpointSchema::CreateStub(class _OGCheckpointSchema * this /* r31 */) {
}
// signature: World::_OGCheckpointSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800AE050 -> 0x800AE068
void World::_OGCheckpointSchema::DestroyStub() {
}
// signature: World::_OGCheckpointSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800AE070 -> 0x800AE0D8
class Entity * World::_OGCheckpointSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World19_OGCheckpointEntity;
}
// Range: 0x800AE120 -> 0x800AE314
void zCheckpoint::SceneInit(class zScene * scene /* r31 */) {
    // Local variables
    int tidx; // r0
    int count; // r0
    class zCheckpoint * missionStart; // r8
    class zCheckpoint * savedCheckpoint; // r9

    {
        // Range: 0x800AE188 -> 0x800AE1CC
        // Local variables
        int i; // r0
    }

    // References
    // -> class zGlobals globals;
    // -> class zCheckpoint * currentActivePtr;
}
// signature: zCheckpoint::SceneReset(zScene *)
// Range: 0x800AE320 -> 0x800AE338
void zCheckpoint::SceneReset() {
    // References
    // -> class zCheckpoint * currentActivePtr;
}
// signature: zCheckpoint::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x800AE340 -> 0x800AE344
void zCheckpoint::Init() {
}
// Range: 0x800AE350 -> 0x800AE4B8
void zCheckpoint::Init(class zCheckpoint * this /* r31 */, class zCheckpointAsset * asset /* r27 */) {
    {
        // Range: 0x800AE3CC -> 0x800AE3DC
        // Local variables
        unsigned int i; // r28
    }
}
// Range: 0x800AE4C0 -> 0x800AE60C
void zCheckpoint::Reset(class zCheckpoint * this /* r29 */) {
    {
        // Range: 0x800AE4D8 -> 0x800AE590
        // Local variables
        int i; // r30

        {
            // Range: 0x800AE4E0 -> 0x800AE590
            // Local variables
            float yaw; // f1
            class Rotation3 * dir; // r0
            class vec3 * loc; // r0
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zCheckpoint::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800AE630 -> 0x800AE764
void zCheckpoint::EventCB() {
    // Local variables
    class zCheckpoint * checkpoint; // r0

    {
        // Range: 0x800AE6F8 -> 0x800AE748
        // Local variables
        float fadeTime; // f0
        class EventActionSetGlobalReverb * params; // r0
    }

    // References
    // -> float REVERB_FADETIME_DEFAULT;
    // -> unsigned int REVERB_NONE;
    // -> class zGlobals globals;
    // -> class zCheckpoint * currentActivePtr;
}
// Range: 0x800AE770 -> 0x800AE824
void zCheckpoint::Activate() {
    // References
    // -> class zGlobals globals;
    // -> class zCheckpoint * currentActivePtr;
}
// signature: zCheckpoint::Save(xSerial *)
// Range: 0x800AE830 -> 0x800AE85C
void zCheckpoint::Save() {
    // References
    // -> class zCheckpoint * currentActivePtr;
}
