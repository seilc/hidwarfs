/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\Blobs\CameraFlyBlobEntity.cpp
*/
class CameraFlyBlobSchema schema; // size: 0x18, address: 0x807FEB98
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FEBB0
class Schema * cameraFlyBlobSchema; // size: 0x4, address: 0x80707D08
// signature: World::CameraFlyBlobSchema::Fix(World::Asset *, long, int)
// Range: 0x80249AA8 -> 0x80249AB8
void World::CameraFlyBlobSchema::Fix() {
    // Local variables
    class CameraFlyAsset * cameraFly; // r0
}
// signature: World::CameraFlyBlobSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80249AB8 -> 0x80249AFC
class EntityStub * World::CameraFlyBlobSchema::CreateStub() {
}
// signature: World::CameraFlyBlobSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80249AFC -> 0x80249B14
void World::CameraFlyBlobSchema::DestroyStub() {
}
// signature: World::CameraFlyBlobSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80249B14 -> 0x80249BD0
class Entity * World::CameraFlyBlobSchema::ActivateEntity(class EntityHandleBase * handle /* r28 */, class Asset * baseAsset /* r29 */, int size /* r30 */) {
    // References
    // -> struct {} __vt__Q25World19CameraFlyBlobEntity;
}
// Range: 0x80249C64 -> 0x80249CD0
void World::CameraFlyBlobEntity::Deactivate(class CameraFlyBlobEntity * this /* r31 */) {
}
// signature: World::CameraFlyBlobEntity::ReplaceAsset(const World::Asset *, const World::Asset *)
// Range: 0x80249D28 -> 0x80249D30
bool World::CameraFlyBlobEntity::ReplaceAsset() {
}
// Range: 0x80249D30 -> 0x80249D38
bool World::CameraFlyBlobEntity::ReplaceAssetCompleted() {
}
// signature: World::CameraFlyBlobEntity::CinematicUpdate(float)
// Range: 0x80249D38 -> 0x80249F90
void World::CameraFlyBlobEntity::CinematicUpdate(class CameraFlyBlobEntity * this /* r31 */) {
    {
        // Range: 0x80249D5C -> 0x80249F6C
        // Local variables
        class Matrix43 mat; // r1+0x18
        class UpdateStruct data; // r1+0x48

        {
            // Range: 0x80249D6C -> 0x80249F38
            // Local variables
            class View * view; // r0
        }
    }

    // References
    // -> class DoFEffectSettings GlobalDoFSettings;
    // -> class Vector4 vec4Zero;
}
// signature: World::CameraFlyBlobEntity::Evaluate(float, World::CameraFlyBlobEntity::UpdateStruct &)
// Range: 0x80249FCC -> 0x8024A35C
bool World::CameraFlyBlobEntity::Evaluate(class CameraFlyBlobEntity * this /* r29 */, class UpdateStruct * outData /* r30 */) {
    // Local variables
    float frame; // f31

    {
        // Range: 0x80249FF8 -> 0x8024A084
        // Local variables
        class Key * key0; // r0
    }
    {
        // Range: 0x8024A088 -> 0x8024A338
        // Local variables
        bool isBreak; // r7
        class Key * key0; // r0
        unsigned int floorFrame; // r0

        {
            // Range: 0x8024A0E4 -> 0x8024A10C
            // Local variables
            unsigned int i; // r8
        }
        {
            // Range: 0x8024A1B4 -> 0x8024A330
            // Local variables
            class Vector3 key1_xform; // r1+0x8
            class Quaternion key1_quat; // r1+0x18
            class Key * key1; // r0
            class Vector3 key0_xform; // r1+0x28
            class Quaternion key0_quat; // r1+0x38
            float t; // f31
        }
    }
}
// signature: World::CameraFlyBlobEntity::Evaluate(float, Math::Matrix43 &, World::CameraFlyBlobEntity::UpdateStruct &)
// Range: 0x8024A35C -> 0x8024A4A0
bool World::CameraFlyBlobEntity::Evaluate(class Matrix43 * camera /* r30 */, class UpdateStruct * outData /* r31 */) {
    // References
    // -> class Vector4 vec4Zero;
}
// signature: World::CameraFlyBlobEntity::GetCurrentXForm(float &, float &, float &)
// Range: 0x8024A4A0 -> 0x8024A4BC
void World::CameraFlyBlobEntity::GetCurrentXForm() {
}
// Range: 0x8024A4BC -> 0x8024A4F0
void World::CameraFlyBlobEntity::Play() {
}
// Range: 0x8024A4F0 -> 0x8024A528
void World::CameraFlyBlobEntity::Stop() {
}
// signature: World::CameraFlyBlobEntity::RegisterCallback(World::IHackCameraFlyCallbackSink *)
// Range: 0x8024A528 -> 0x8024A530
void World::CameraFlyBlobEntity::RegisterCallback() {
}
