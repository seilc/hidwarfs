/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\RenderCustomizerEntity.h
*/
static unsigned int DEFAULT_PROJECT_SHADOW_CACHE; // size: 0x4, address: 0x806D53B4
// Range: 0x801DA230 -> 0x801DA238
int World::UVMovementInstanceData::GetSize() {
}
// Range: 0x801DA220 -> 0x801DA228
float * World::UVMovementInstanceData::GetRows() {
}
// signature: World::UVMovementInstanceData::SetRows(float *)
// Range: 0x801DA210 -> 0x801DA218
void World::UVMovementInstanceData::SetRows() {
}
// Range: 0x8024E48C -> 0x8024E494
int World::TextureAnimationInstanceData::GetSize() {
}
// Range: 0x8024E484 -> 0x8024E48C
float * World::TextureAnimationInstanceData::GetRows() {
}
// signature: World::TextureAnimationInstanceData::SetRows(float *)
// Range: 0x8024E47C -> 0x8024E484
void World::TextureAnimationInstanceData::SetRows() {
}
// signature: World::RenderCustomizerSchema<World::DTRFrontBufferEntity>::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024F5BC -> 0x8024F608
class EntityStub * World::RenderCustomizerSchema<World::DTRFrontBufferEntity>::CreateStub(class RenderCustomizerSchema * this /* r31 */) {
}
// signature: World::RenderCustomizerSchema<World::DTRMovieEntity>::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024F6C8 -> 0x8024F714
class EntityStub * World::RenderCustomizerSchema<World::DTRMovieEntity>::CreateStub(class RenderCustomizerSchema * this /* r31 */) {
}
// signature: World::RenderCustomizerSchema<World::TextureAnimationSettingsEntity>::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024F7B4 -> 0x8024F800
class EntityStub * World::RenderCustomizerSchema<World::TextureAnimationSettingsEntity>::CreateStub(class RenderCustomizerSchema * this /* r31 */) {
}
// signature: World::RenderCustomizerSchema<World::UVMovementSettingsEntity>::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024F8A0 -> 0x8024F8EC
class EntityStub * World::RenderCustomizerSchema<World::UVMovementSettingsEntity>::CreateStub(class RenderCustomizerSchema * this /* r31 */) {
}
// signature: World::RenderCustomizerSchema<World::DTRFrontBufferEntity>::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8024F608 -> 0x8024F620
void World::RenderCustomizerSchema<World::DTRFrontBufferEntity>::DestroyStub() {
}
// signature: World::RenderCustomizerSchema<World::DTRMovieEntity>::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8024F714 -> 0x8024F72C
void World::RenderCustomizerSchema<World::DTRMovieEntity>::DestroyStub() {
}
// signature: World::RenderCustomizerSchema<World::TextureAnimationSettingsEntity>::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8024F800 -> 0x8024F818
void World::RenderCustomizerSchema<World::TextureAnimationSettingsEntity>::DestroyStub() {
}
// signature: World::RenderCustomizerSchema<World::UVMovementSettingsEntity>::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8024F8EC -> 0x8024F904
void World::RenderCustomizerSchema<World::UVMovementSettingsEntity>::DestroyStub() {
}
// signature: World::RenderCustomizerSchema<World::DTRFrontBufferEntity>::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024F620 -> 0x8024F6C8
class Entity * World::RenderCustomizerSchema<World::DTRFrontBufferEntity>::ActivateEntity(class EntityHandleBase * handle /* r30 */, class Asset * baseAsset /* r31 */) {
    // References
    // -> class DTRFrontBufferEntity * DTR_FRONTBUFFER[8];
    // -> int nDTR_FRONTBUFFER;
    // -> struct {} __vt__Q25World20DTRFrontBufferEntity;
}
// signature: World::RenderCustomizerSchema<World::DTRMovieEntity>::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024F72C -> 0x8024F7B4
class Entity * World::RenderCustomizerSchema<World::DTRMovieEntity>::ActivateEntity(class EntityHandleBase * handle /* r30 */, class Asset * baseAsset /* r31 */) {
    // References
    // -> struct {} __vt__Q25World14DTRMovieEntity;
}
// signature: World::RenderCustomizerSchema<World::TextureAnimationSettingsEntity>::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024F818 -> 0x8024F8A0
class Entity * World::RenderCustomizerSchema<World::TextureAnimationSettingsEntity>::ActivateEntity(class EntityHandleBase * handle /* r30 */, class Asset * baseAsset /* r31 */) {
    // References
    // -> struct {} __vt__Q25World30TextureAnimationSettingsEntity;
}
// signature: World::RenderCustomizerSchema<World::UVMovementSettingsEntity>::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024F904 -> 0x8024F98C
class Entity * World::RenderCustomizerSchema<World::UVMovementSettingsEntity>::ActivateEntity(class EntityHandleBase * handle /* r30 */, class Asset * baseAsset /* r31 */) {
    // References
    // -> struct {} __vt__Q25World24UVMovementSettingsEntity;
}
// signature: World::UVMovementSettingsSchema::Fix(World::Asset *, long, int)
// Range: 0x8024F554 -> 0x8024F558
void World::UVMovementSettingsSchema::Fix() {
}
// signature: World::TextureAnimationSettingsSchema::Fix(World::Asset *, long, int)
// Range: 0x8024F544 -> 0x8024F554
void World::TextureAnimationSettingsSchema::Fix() {
    // Local variables
    class TextureAnimationSettings * textureAnimAsset; // r0
}
// signature: World::DTRMovieSchema::Fix(World::Asset *, long, int)
// Range: 0x8024F534 -> 0x8024F544
void World::DTRMovieSchema::Fix() {
    // Local variables
    class DTRMovieSettings * dtrMovie; // r0
}
