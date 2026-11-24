/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Entities\Blobs\CameraFlyBlobEntity.cpp
*/
// Range: 0x802E3454 -> 0x802E34FC
class Entity * World::CameraFlyAsset::Create(class EntityHandleBase * handle /* r29 */, class CameraFlyAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__Q25World19CameraFlyBlobEntity;
}
// Range: 0x802E34FC -> 0x802E3568
void World::CameraFlyBlobEntity::Deactivate(class CameraFlyBlobEntity * this /* r31 */) {
}
// signature: World::CameraFlyBlobEntity::CinematicUpdate(float)
// Range: 0x802E3574 -> 0x802E3794
void World::CameraFlyBlobEntity::CinematicUpdate(class CameraFlyBlobEntity * this /* r31 */) {
    {
        // Range: 0x802E3588 -> 0x802E3780
        // Local variables
        class Matrix43 mat; // r1+0x18
        class UpdateStruct data; // r1+0x48

        {
            // Range: 0x802E3598 -> 0x802E374C
            // Local variables
            class View * view; // r0
        }
    }

    // References
    // -> class DoFEffectSettings GlobalDoFSettings;
}
// signature: World::CameraFlyBlobEntity::Evaluate(float, World::CameraFlyBlobEntity::UpdateStruct &)
// Range: 0x802E37C4 -> 0x802E3B30
bool World::CameraFlyBlobEntity::Evaluate(class CameraFlyBlobEntity * this /* r29 */, class UpdateStruct & outData /* r30 */) {
    // Local variables
    float frame; // f31
    unsigned int floorFrame; // r0

    {
        // Range: 0x802E37F8 -> 0x802E3884
        // Local variables
        class Key & key0; // r0
    }
    {
        // Range: 0x802E3898 -> 0x802E3B04
        // Local variables
        bool isBreak; // r8
        class Key & key0; // r0

        {
            // Range: 0x802E38B0 -> 0x802E38D8
            // Local variables
            unsigned int i; // r9
        }
        {
            // Range: 0x802E3980 -> 0x802E3AFC
            // Local variables
            class Vector3 key1_xform; // r1+0x8
            class Quaternion key1_quat; // r1+0x18
            class Key & key1; // r0
            class Vector3 key0_xform; // r1+0x28
            class Quaternion key0_quat; // r1+0x38
            float t; // f31
        }
    }
}
// signature: World::CameraFlyBlobEntity::Evaluate(float, Math::Matrix43 &, World::CameraFlyBlobEntity::UpdateStruct &)
// Range: 0x802E3B30 -> 0x802E3C74
bool World::CameraFlyBlobEntity::Evaluate(class Matrix43 & camera /* r30 */, class UpdateStruct & outData /* r31 */) {
    // References
    // -> class Vector4 vec4Zero;
}
// signature: World::CameraFlyBlobEntity::GetCurrentXForm(float &, float &, float &)
// Range: 0x802E3C74 -> 0x802E3C90
void World::CameraFlyBlobEntity::GetCurrentXForm() {
}
// Range: 0x802E3C90 -> 0x802E3CC4
void World::CameraFlyBlobEntity::Play() {
}
// Range: 0x802E3CC4 -> 0x802E3CFC
void World::CameraFlyBlobEntity::Stop() {
}
