/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\Blobs\CameraFlyBlobEntity.cpp
*/
// signature: World::CameraFlyBlobEntity::CameraFlyBlobEntity(World::EntityHandleBase *, const World::CameraFlyAsset *)
// Range: 0x801BE4D0 -> 0x801BE530
void * World::CameraFlyBlobEntity::CameraFlyBlobEntity(class CameraFlyBlobEntity * this /* r30 */, class CameraFlyAsset * inAsset /* r31 */) {
    // References
    // -> struct {} __vt__Q25World19CameraFlyBlobEntity;
}
// Range: 0x801BE570 -> 0x801BE5E4
class Entity * World::CameraFlyAsset::Create(class EntityHandleBase * handle /* r29 */, class CameraFlyAsset * asset /* r30 */) {
}
// Range: 0x801BE5F0 -> 0x801BE65C
void World::CameraFlyBlobEntity::Deactivate(class CameraFlyBlobEntity * this /* r31 */) {
}
// signature: World::CameraFlyBlobEntity::CinematicUpdate(float)
// Range: 0x801BE6B0 -> 0x801BE7AC
void World::CameraFlyBlobEntity::CinematicUpdate(class CameraFlyBlobEntity * this /* r31 */) {
    {
        // Range: 0x801BE6C4 -> 0x801BE798
        // Local variables
        class Matrix43 mat; // r1+0x8
        class UpdateStruct data; // r1+0x38

        {
            // Range: 0x801BE6E4 -> 0x801BE78C
            // Local variables
            class View * view; // r0

            {
                // Range: 0x801BE704 -> 0x801BE74C
                // Local variables
                class Viewport * viewport; // r31
            }
        }
    }

    // References
    // -> class DoFEffectSettings GlobalDoFSettings;
}
// signature: World::CameraFlyBlobEntity::Evaluate(float, World::CameraFlyBlobEntity::UpdateStruct &)
// Range: 0x801BE7F0 -> 0x801BEB24
bool World::CameraFlyBlobEntity::Evaluate(class CameraFlyBlobEntity * this /* r27 */, class UpdateStruct & outData /* r31 */) {
    // Local variables
    float frame; // f31
    unsigned int floorFrame; // r0

    {
        // Range: 0x801BE81C -> 0x801BE898
        // Local variables
        class Key & key0; // r0
    }
    {
        // Range: 0x801BE8B0 -> 0x801BEB00
        // Local variables
        bool isBreak; // r8
        class Key & key0; // r0

        {
            // Range: 0x801BE8C4 -> 0x801BE904
            // Local variables
            unsigned int i; // r9
        }
        {
            // Range: 0x801BE980 -> 0x801BEAF8
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
// Range: 0x801BEB30 -> 0x801BEBA8
bool World::CameraFlyBlobEntity::Evaluate(class Matrix43 & camera /* r30 */, class UpdateStruct & outData /* r31 */) {
}
// signature: World::CameraFlyBlobEntity::GetCurrentXForm(float &, float &, float &)
// Range: 0x801BEBB0 -> 0x801BEBCC
void World::CameraFlyBlobEntity::GetCurrentXForm() {
}
// Range: 0x801BEBD0 -> 0x801BEC08
void World::CameraFlyBlobEntity::Stop() {
}
