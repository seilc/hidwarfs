/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\RenderCustomizerEntity.cpp
*/
class DTRMovieEntity * DTR_MOVIES[8]; // size: 0x20, address: 0x80774978
int nDTR_MOVIES; // size: 0x4, address: 0x80774998
bool enableDTRMovies; // size: 0x1, address: 0x8077499C
int noDTRMovies; // size: 0x4, address: 0x807749A0
class DTRFrontBufferEntity * DTR_FRONTBUFFER[8]; // size: 0x20, address: 0x807749A8
int nDTR_FRONTBUFFER; // size: 0x4, address: 0x807749C8
// Range: 0x801BBE30 -> 0x801BBEC4
class Entity * Sext::UVMovementSettings::Create(class EntityHandleBase * handle /* r29 */, class UVMovementSettings * asset /* r30 */) {
    // References
    // -> struct {} __vt__Q25World24UVMovementSettingsEntity;
}
// Range: 0x801BBF10 -> 0x801BBFA4
class Entity * Sext::TextureAnimationSettings::Create(class EntityHandleBase * handle /* r29 */, class TextureAnimationSettings * asset /* r30 */) {
    // References
    // -> struct {} __vt__Q25World30TextureAnimationSettingsEntity;
}
// Range: 0x801BBFB0 -> 0x801BC044
class Entity * Sext::DTRMovieSettings::Create(class EntityHandleBase * handle /* r29 */, class DTRMovieSettings * asset /* r30 */) {
    // References
    // -> struct {} __vt__Q25World14DTRMovieEntity;
}
// Range: 0x801BC050 -> 0x801BC104
class Entity * Sext::DTRFrontBufferSettings::Create(class EntityHandleBase * handle /* r29 */, class DTRFrontBufferSettings * asset /* r30 */) {
    // References
    // -> class DTRFrontBufferEntity * DTR_FRONTBUFFER[8];
    // -> int nDTR_FRONTBUFFER;
    // -> struct {} __vt__Q25World20DTRFrontBufferEntity;
}
// signature: World::UVMovementSettingsEntity::CreateInstanceData(Memory::StackAllocator &, World::ModelInstanceArticle &, const World::ModelInstanceAsset::PackCustomizerInfo &, const World::ModelInstanceParamData &)
// Range: 0x801BC110 -> 0x801BC1D8
class RenderCustomizerData * World::UVMovementSettingsEntity::CreateInstanceData(class UVMovementSettingsEntity * this /* r28 */, class ModelInstanceArticle & modelInstanceArt /* r30 */, class ModelInstanceParamData & paramData /* r29 */) {
    {
        // Range: 0x801BC184 -> 0x801BC1C0
        // Local variables
        unsigned short uvMatrixParamHandle; // r0
    }

    // References
    // -> struct {} __vt__Q25World22UVMovementInstanceData;
}
// Range: 0x801BC1E0 -> 0x801BC224
void World::UVMovementSettingsEntity::Deactivate() {
}
// Range: 0x801BC230 -> 0x801BC244
void World::UVMovementSettingsEntity::Destroy() {
}
// Range: 0x801BC250 -> 0x801BC258
unsigned int World::UVMovementSettingsEntity::GetInstanceDataSize() {
}
// Range: 0x801BC260 -> 0x801BC360
void World::UVMovementSettingsEntity::RefreshInstanceData(void * existingData /* r28 */) {
    // Local variables
    class UVMovementInstanceData * instanceData; // r0
    class UVMovementSettings * asset; // r29

    // References
    // -> class Vector4 vec4Zero;
    // -> static class Matrix43 _matIdentity;
}
// Range: 0x801BC3C0 -> 0x801BC620
void World::UVMovementSettingsEntity::Apply(class RenderCustomizerData * userData /* r30 */) {
    // Local variables
    class UVMovementInstanceData * instanceData; // r0
    float dt; // f31

    {
        // Range: 0x801BC3E4 -> 0x801BC600
        // Local variables
        class Vector pos; // r1+0x58
        class Matrix43 tempMat; // r1+0x68
        class Matrix43 scaleMat; // r1+0x98
        class Matrix43 translateMat; // r1+0xC8
        class Matrix43 rotateMat; // r1+0xF8
        class Matrix43 resultMat; // r1+0x128
    }

    // References
    // -> class Vector4 vec4Zero;
    // -> float dt;
}
// signature: World::TextureAnimationSettingsEntity::CreateInstanceData(Memory::StackAllocator &, World::ModelInstanceArticle &, const World::ModelInstanceAsset::PackCustomizerInfo &, const World::ModelInstanceParamData &)
// Range: 0x801BC650 -> 0x801BC6F4
class RenderCustomizerData * World::TextureAnimationSettingsEntity::CreateInstanceData() {
    {
        // Range: 0x801BC6A0 -> 0x801BC6DC
        // Local variables
        unsigned short uvMatrixParamHandle; // r0
    }

    // References
    // -> struct {} __vt__Q25World28TextureAnimationInstanceData;
}
// Range: 0x801BC700 -> 0x801BC744
void World::TextureAnimationSettingsEntity::Deactivate() {
}
// Range: 0x801BC750 -> 0x801BC764
void World::TextureAnimationSettingsEntity::Destroy() {
}
// signature: World::TextureAnimationSettingsEntity::RefreshInstanceData(void *)
// Range: 0x801BC770 -> 0x801BC7DC
void World::TextureAnimationSettingsEntity::RefreshInstanceData() {
    // Local variables
    class TextureAnimationInstanceData * instanceData; // r0
    class TextureAnimationSettings * asset; // r7
}
// Range: 0x801BC7E0 -> 0x801BC998
void World::TextureAnimationSettingsEntity::Apply(class RenderCustomizerData * userData /* r31 */) {
    // Local variables
    class TextureAnimationInstanceData * instanceData; // r0
    float dt; // f0

    {
        // Range: 0x801BC7FC -> 0x801BC984
        // Local variables
        class TextureAnimationSettings * asset; // r9
    }

    // References
    // -> float dt;
}
// Range: 0x801BC9A0 -> 0x801BC9E4
void World::DTRMovieEntity::Deactivate() {
}
// Range: 0x801BC9F0 -> 0x801BCA04
void World::DTRMovieEntity::Destroy() {
}
// Range: 0x801BCA10 -> 0x801BCA14
void World::DTRFrontBufferEntity::Deactivate() {
}
// Range: 0x801BCA20 -> 0x801BCA34
void World::DTRFrontBufferEntity::Destroy() {
}
// Range: 0x801BCA40 -> 0x801BCAEC
void World::DTRFrontBufferEntity::DeferDestroy() {
    {
        // Range: 0x801BCA5C -> 0x801BCAB4
        // Local variables
        int i; // r0
    }

    // References
    // -> int nDTR_FRONTBUFFER;
    // -> class DTRFrontBufferEntity * DTR_FRONTBUFFER[8];
}
