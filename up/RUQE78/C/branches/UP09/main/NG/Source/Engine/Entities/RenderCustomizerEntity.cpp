/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Entities\RenderCustomizerEntity.cpp
*/
class DTRMovieEntity * DTR_MOVIES[8]; // size: 0x20, address: 0x80846208
int nDTR_MOVIES; // size: 0x4, address: 0x80846228
bool enableDTRMovies; // size: 0x1, address: 0x8084622C
int noDTRMovies; // size: 0x4, address: 0x80846230
class DTRFrontBufferEntity * DTR_FRONTBUFFER[8]; // size: 0x20, address: 0x80846238
int nDTR_FRONTBUFFER; // size: 0x4, address: 0x80846258
// Range: 0x802E0CC0 -> 0x802E0D44
class Entity * Sext::UVMovementSettings::Create(class EntityHandleBase * handle /* r30 */, class UVMovementSettings * asset /* r31 */) {
    // References
    // -> struct {} __vt__Q25World24UVMovementSettingsEntity;
}
// Range: 0x802E0D48 -> 0x802E0DCC
class Entity * Sext::TextureAnimationSettings::Create(class EntityHandleBase * handle /* r30 */, class TextureAnimationSettings * asset /* r31 */) {
    // References
    // -> struct {} __vt__Q25World30TextureAnimationSettingsEntity;
}
// Range: 0x802E0DCC -> 0x802E0E50
class Entity * Sext::DTRMovieSettings::Create(class EntityHandleBase * handle /* r30 */, class DTRMovieSettings * asset /* r31 */) {
    // References
    // -> struct {} __vt__Q25World14DTRMovieEntity;
}
// Range: 0x802E0E50 -> 0x802E0EF4
class Entity * Sext::DTRFrontBufferSettings::Create(class EntityHandleBase * handle /* r30 */, class DTRFrontBufferSettings * asset /* r31 */) {
    // References
    // -> class DTRFrontBufferEntity * DTR_FRONTBUFFER[8];
    // -> int nDTR_FRONTBUFFER;
    // -> struct {} __vt__Q25World20DTRFrontBufferEntity;
}
// signature: World::RenderCustomizerBaseEntity::RTUDebugReset(unsigned long long, World::Asset &)
// Range: 0x802E0EF4 -> 0x802E0EF8
void World::RenderCustomizerBaseEntity::RTUDebugReset() {
}
// signature: World::UVMovementSettingsEntity::CreateInstanceData(Memory::StackAllocator &, World::ModelInstanceArticle &, const World::ModelInstanceAsset::PackCustomizerInfo &, const World::ModelInstanceParamData &)
// Range: 0x802E0EF8 -> 0x802E0FE4
class RenderCustomizerData * World::UVMovementSettingsEntity::CreateInstanceData(class ModelInstanceParamData & paramData /* r29 */) {
    // References
    // -> struct {} __vt__Q25World22UVMovementInstanceData;
}
// Range: 0x802E0FE4 -> 0x802E1028
void World::UVMovementSettingsEntity::Deactivate() {
}
// Range: 0x802E1028 -> 0x802E103C
void World::UVMovementSettingsEntity::Destroy() {
}
// Range: 0x802E103C -> 0x802E1044
unsigned int World::UVMovementSettingsEntity::GetInstanceDataSize() {
}
// Range: 0x802E1044 -> 0x802E1310
void World::UVMovementSettingsEntity::RefreshInstanceData(void * existingData /* r26 */) {
    // Local variables
    class UVMovementInstanceData * instanceData; // r0
    class UVMovementSettings * asset; // r27

    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
    // -> class Vector4 vec4Zero;
    // -> static class Matrix43 _matIdentity;
}
// Range: 0x802E1310 -> 0x802E1748
void World::UVMovementSettingsEntity::Apply(class RenderCustomizerData * userData /* r31 */) {
    // Local variables
    class UVMovementInstanceData * instanceData; // r0
    float dt; // f0

    {
        // Range: 0x802E1324 -> 0x802E1730
        // Local variables
        class Vector pos; // r1+0x98
        class Matrix43 tempMat; // r1+0xA8
        class Matrix43 scaleMat; // r1+0xD8
        class Matrix43 translateMat; // r1+0x108
        class Matrix43 rotateMat; // r1+0x138
        class Matrix43 resultMat; // r1+0x168
    }

    // References
    // -> class Vector4 vec4Zero;
    // -> static class Matrix43 _matIdentity;
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
    // -> float dt;
}
// Range: 0x802E1748 -> 0x802E174C
void World::UVMovementSettingsEntity::DestroyInstanceData() {
}
// signature: World::TextureAnimationSettingsEntity::CreateInstanceData(Memory::StackAllocator &, World::ModelInstanceArticle &, const World::ModelInstanceAsset::PackCustomizerInfo &, const World::ModelInstanceParamData &)
// Range: 0x802E174C -> 0x802E17F4
class RenderCustomizerData * World::TextureAnimationSettingsEntity::CreateInstanceData() {
    // References
    // -> struct {} __vt__Q25World28TextureAnimationInstanceData;
}
// Range: 0x802E17F4 -> 0x802E1838
void World::TextureAnimationSettingsEntity::Deactivate() {
}
// signature: World::TextureAnimationSettingsEntity::RefreshInstanceData(void *)
// Range: 0x802E1840 -> 0x802E18AC
void World::TextureAnimationSettingsEntity::RefreshInstanceData() {
    // Local variables
    class TextureAnimationInstanceData * instanceData; // r0
    class TextureAnimationSettings * asset; // r7
}
// signature: World::TextureAnimationSettingsEntity::Apply(World::RenderCustomizerData *)
// Range: 0x802E18AC -> 0x802E1A88
void World::TextureAnimationSettingsEntity::Apply() {
    // Local variables
    class TextureAnimationInstanceData * instanceData; // r0
    float dt; // f0

    {
        // Range: 0x802E18BC -> 0x802E1A7C
        // Local variables
        class TextureAnimationSettings * asset; // r3

        {
            // Range: 0x802E18E0 -> 0x802E1A7C
            // Local variables
            int row; // r5
        }
    }

    // References
    // -> float dt;
}
// Range: 0x802E1A88 -> 0x802E1A8C
void World::TextureAnimationSettingsEntity::DestroyInstanceData() {
}
// Range: 0x802E1A90 -> 0x802E1AD4
void World::DTRMovieEntity::Deactivate() {
}
// signature: World::DTRMovieEntity::Apply(World::RenderCustomizerData *)
// Range: 0x802E1ADC -> 0x802E1AE0
void World::DTRMovieEntity::Apply() {
}
// Range: 0x802E1AE0 -> 0x802E1AE4
void World::DTRMovieEntity::DestroyInstanceData() {
}
// Range: 0x802E1AE8 -> 0x802E1BA4
void World::DTRFrontBufferEntity::Deactivate() {
    // References
    // -> int nDTR_FRONTBUFFER;
    // -> class DTRFrontBufferEntity * DTR_FRONTBUFFER[8];
}
// signature: World::DTRFrontBufferEntity::Apply(World::RenderCustomizerData *)
// Range: 0x802E1BAC -> 0x802E1BB0
void World::DTRFrontBufferEntity::Apply() {
}
// Range: 0x802E1BB0 -> 0x802E1BB4
void World::DTRFrontBufferEntity::DestroyInstanceData() {
}
