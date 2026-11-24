/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\RenderCustomizerEntity.cpp
*/
class DTRMovieEntity * DTR_MOVIES[8]; // size: 0x20, address: 0x807FEA80
int nDTR_MOVIES; // size: 0x4, address: 0x807FEAA0
bool enableDTRMovies; // size: 0x1, address: 0x807FEAA4
int noDTRMovies; // size: 0x4, address: 0x807FEAA8
class DTRFrontBufferEntity * DTR_FRONTBUFFER[8]; // size: 0x20, address: 0x807FEAB0
int nDTR_FRONTBUFFER; // size: 0x4, address: 0x807FEAD0
// signature: World::UVMovementSettingsEntity::CreateInstanceData(Memory::StackAllocator &, World::ModelInstanceArticle &, const World::ModelInstanceAsset::PackCustomizerInfo &, const World::ModelInstanceParamData &)
// Range: 0x802457B8 -> 0x80245B4C
class RenderCustomizerData * World::UVMovementSettingsEntity::CreateInstanceData(class UVMovementSettingsEntity * this /* r24 */, class ModelInstanceParamData * paramData /* r25 */) {
    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
    // -> class Vector4 vec4Zero;
    // -> static class Matrix43 _matIdentity;
    // -> struct {} __vt__Q25World22UVMovementInstanceData;
}
// Range: 0x80245B4C -> 0x80245B90
void World::UVMovementSettingsEntity::Deactivate() {
}
// Range: 0x80245B90 -> 0x80245BA4
void World::UVMovementSettingsEntity::Destroy() {
}
// Range: 0x80245BA4 -> 0x80245BAC
unsigned int World::UVMovementSettingsEntity::GetInstanceDataSize() {
}
// Range: 0x80245BAC -> 0x8024600C
void World::UVMovementSettingsEntity::Apply(class RenderCustomizerData * userData /* r31 */) {
    // Local variables
    class UVMovementInstanceData * instanceData; // r0
    float dt; // f0

    {
        // Range: 0x80245BC0 -> 0x80245FF4
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
    // -> class Vector4 vec4OneX;
    // -> class Vector4 vec4OneY;
    // -> float dt;
}
// Range: 0x8024600C -> 0x80246010
void World::UVMovementSettingsEntity::DestroyInstanceData() {
}
// signature: World::TextureAnimationSettingsEntity::CreateInstanceData(Memory::StackAllocator &, World::ModelInstanceArticle &, const World::ModelInstanceAsset::PackCustomizerInfo &, const World::ModelInstanceParamData &)
// Range: 0x80246010 -> 0x80246104
class RenderCustomizerData * World::TextureAnimationSettingsEntity::CreateInstanceData() {
    // References
    // -> struct {} __vt__Q25World28TextureAnimationInstanceData;
}
// Range: 0x80246104 -> 0x80246148
void World::TextureAnimationSettingsEntity::Deactivate() {
}
// Range: 0x80246148 -> 0x8024615C
void World::TextureAnimationSettingsEntity::Destroy() {
}
// Range: 0x8024615C -> 0x80246164
unsigned int World::TextureAnimationSettingsEntity::GetInstanceDataSize() {
}
// signature: World::TextureAnimationSettingsEntity::Apply(World::RenderCustomizerData *)
// Range: 0x80246164 -> 0x80246370
void World::TextureAnimationSettingsEntity::Apply() {
    // Local variables
    class TextureAnimationInstanceData * instanceData; // r0
    float dt; // f0

    {
        // Range: 0x80246194 -> 0x80246368
        // Local variables
        int row; // r5
    }

    // References
    // -> float dt;
}
// Range: 0x80246370 -> 0x80246374
void World::TextureAnimationSettingsEntity::DestroyInstanceData() {
}
// signature: World::DTRMovieEntity::CreateInstanceData(Memory::StackAllocator &, World::ModelInstanceArticle &, const World::ModelInstanceAsset::PackCustomizerInfo &, const World::ModelInstanceParamData &)
// Range: 0x80246374 -> 0x8024637C
class RenderCustomizerData * World::DTRMovieEntity::CreateInstanceData() {
}
// Range: 0x8024637C -> 0x802463C0
void World::DTRMovieEntity::Deactivate() {
}
// Range: 0x802463C0 -> 0x802463D4
void World::DTRMovieEntity::Destroy() {
}
// Range: 0x802463D4 -> 0x802463DC
unsigned int World::DTRMovieEntity::GetInstanceDataSize() {
}
// signature: World::DTRMovieEntity::Apply(World::RenderCustomizerData *)
// Range: 0x802463DC -> 0x802463E0
void World::DTRMovieEntity::Apply() {
}
// Range: 0x802463E0 -> 0x802463E4
void World::DTRMovieEntity::DestroyInstanceData() {
}
// signature: World::DTRFrontBufferEntity::CreateInstanceData(Memory::StackAllocator &, World::ModelInstanceArticle &, const World::ModelInstanceAsset::PackCustomizerInfo &, const World::ModelInstanceParamData &)
// Range: 0x802463E4 -> 0x802463EC
class RenderCustomizerData * World::DTRFrontBufferEntity::CreateInstanceData() {
}
// Range: 0x802463EC -> 0x802464A8
void World::DTRFrontBufferEntity::Deactivate() {
    // References
    // -> int nDTR_FRONTBUFFER;
    // -> class DTRFrontBufferEntity * DTR_FRONTBUFFER[8];
}
// Range: 0x802464A8 -> 0x802464BC
void World::DTRFrontBufferEntity::Destroy() {
}
// Range: 0x802464BC -> 0x802464C4
unsigned int World::DTRFrontBufferEntity::GetInstanceDataSize() {
}
// signature: World::DTRFrontBufferEntity::Apply(World::RenderCustomizerData *)
// Range: 0x802464C4 -> 0x802464C8
void World::DTRFrontBufferEntity::Apply() {
}
// Range: 0x802464C8 -> 0x802464CC
void World::DTRFrontBufferEntity::DestroyInstanceData() {
}
