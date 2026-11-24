/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\Blobs\ScaleformBlobEntity.cpp
*/
class ScaleformBlobSchema schema; // size: 0x18, address: 0x807FEC18
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FEC30
class Schema * scaleformBlobSchema; // size: 0x4, address: 0x80707DDC
// signature: World::ScaleformBlobSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024C650 -> 0x8024C694
class EntityStub * World::ScaleformBlobSchema::CreateStub() {
}
// signature: World::ScaleformBlobSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8024C694 -> 0x8024C6AC
void World::ScaleformBlobSchema::DestroyStub() {
}
// signature: World::ScaleformBlobSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024C6AC -> 0x8024C760
class Entity * World::ScaleformBlobSchema::ActivateEntity(class EntityHandleBase * handle /* r28 */, class Asset * baseAsset /* r29 */, int size /* r30 */) {
    // References
    // -> struct {} __vt__Q25World19ScaleformBlobEntity;
}
// Range: 0x8024C760 -> 0x8024C7B8
void * World::ScaleformBlobEntity::~ScaleformBlobEntity(class ScaleformBlobEntity * this /* r31 */) {
    // References
    // -> struct {} __vt__Q25World6Entity;
}
// Range: 0x8024C7B8 -> 0x8024C89C
void World::ScaleformBlobEntity::Deactivate(class ScaleformBlobEntity * this /* r30 */) {
}
// Range: 0x8024C89C -> 0x8024C8EC
void World::ScaleformBlobEntity::Destroy(class ScaleformBlobEntity * this /* r31 */) {
}
// signature: World::ScaleformBlobEntity::ReplaceAsset(const World::Asset *, const World::Asset *)
// Range: 0x8024C8EC -> 0x8024C8F8
bool World::ScaleformBlobEntity::ReplaceAsset() {
}
// Range: 0x8024C8F8 -> 0x8024C900
bool World::ScaleformBlobEntity::ReplaceAssetCompleted() {
}
// Range: 0x8024C900 -> 0x8024C98C
void World::ScaleformBlobEntity::Play(class ScaleformBlobEntity * this /* r24 */, class ScaleformOGAsset * oga /* r25 */, char * langCode /* r26 */, unsigned int viewnum /* r27 */, class Rect2D * dispRect /* r28 */, bool checkHealth /* r29 */, bool checkStick /* r30 */, bool persist /* r31 */) {
    // Local variables
    class Coordinator * coord; // r0
}
// Range: 0x8024C98C -> 0x8024C9C0
void World::ScaleformBlobEntity::Stop(class ScaleformOGAsset * oga /* r31 */) {
}
// Range: 0x8024C9C0 -> 0x8024C9F4
void World::ScaleformBlobEntity::Pause(class ScaleformOGAsset * oga /* r31 */) {
}
// Range: 0x8024C9F4 -> 0x8024CA28
void World::ScaleformBlobEntity::Unpause(class ScaleformOGAsset * oga /* r31 */) {
}
// Range: 0x8024CA28 -> 0x8024CA5C
void World::ScaleformBlobEntity::Clear(class ScaleformOGAsset * oga /* r31 */) {
}
// Range: 0x8024CA5C -> 0x8024CA90
void World::ScaleformBlobEntity::Unclear(class ScaleformOGAsset * oga /* r31 */) {
}
// Range: 0x8024CA90 -> 0x8024CAF4
void World::ScaleformBlobEntity::InvokeASFunc(class ScaleformOGAsset * oga /* r28 */, char * funcName /* r29 */, unsigned int numArgs /* r30 */, float * args /* r31 */) {
}
// Range: 0x8024CAF4 -> 0x8024CB58
void World::ScaleformBlobEntity::InvokeASFunc(class ScaleformOGAsset * oga /* r28 */, char * funcName /* r29 */, unsigned int numArgs /* r30 */, bool * args /* r31 */) {
}
// Range: 0x8024CB58 -> 0x8024CBBC
void World::ScaleformBlobEntity::InvokeASFunc(class ScaleformOGAsset * oga /* r28 */, enum eSFEventType toEvent /* r29 */, unsigned int numArgs /* r30 */, float * args /* r31 */) {
}
// Range: 0x8024CBBC -> 0x8024CC10
void World::ScaleformBlobEntity::SetASVariable(class ScaleformOGAsset * oga /* r30 */, char * varName /* r31 */, float varValue /* f31 */) {
}
// Range: 0x8024CC10 -> 0x8024CC74
void World::ScaleformBlobEntity::SetASArray(class ScaleformOGAsset * oga /* r28 */, char * varName /* r29 */, unsigned int numArgs /* r30 */, float * args /* r31 */) {
}
// Range: 0x8024CC74 -> 0x8024CCD8
void World::ScaleformBlobEntity::SetASArray(class ScaleformOGAsset * oga /* r28 */, char * varName /* r29 */, unsigned int numArgs /* r30 */, bool * args /* r31 */) {
}
// Range: 0x8024CCD8 -> 0x8024CD1C
void World::ScaleformBlobEntity::SetHealth(class ScaleformOGAsset * oga /* r30 */, unsigned int health /* r31 */) {
}
// Range: 0x8024CD1C -> 0x8024CD80
void World::ScaleformBlobEntity::SetStickPos(class ScaleformOGAsset * oga /* r30 */, unsigned int portNum /* r31 */, float x /* f30 */, float y /* f31 */) {
}
// Range: 0x8024CD80 -> 0x8024CDD4
void World::ScaleformBlobEntity::SetIRMousePos(class ScaleformOGAsset * oga /* r31 */, float x /* f30 */, float y /* f31 */) {
}
// Range: 0x8024CDD4 -> 0x8024CE38
void World::ScaleformBlobEntity::SetMultiplayerIRMousePos(class ScaleformOGAsset * oga /* r30 */, unsigned int portNum /* r31 */, float x /* f30 */, float y /* f31 */) {
}
// Range: 0x8024CE38 -> 0x8024CE9C
void World::ScaleformBlobEntity::IRMouseButtonPress(class ScaleformOGAsset * oga /* r30 */, unsigned int button /* r31 */, float x /* f30 */, float y /* f31 */) {
}
// Range: 0x8024CE9C -> 0x8024CF00
void World::ScaleformBlobEntity::IRMouseButtonRelease(class ScaleformOGAsset * oga /* r30 */, unsigned int button /* r31 */, float x /* f30 */, float y /* f31 */) {
}
// Range: 0x8024CF00 -> 0x8024CF24
void World::ScaleformBlobEntity::LoadTextures() {
}
// Range: 0x8024CF24 -> 0x8024CF48
void World::ScaleformBlobEntity::RefreshViewports() {
}
// Range: 0x8024CF48 -> 0x8024CF6C
void World::ScaleformBlobEntity::StopAllMovies() {
}
// signature: World::ScaleformBlobEntity::SetIsFirstScene(bool)
// Range: 0x8024CF6C -> 0x8024CF78
void World::ScaleformBlobEntity::SetIsFirstScene() {
    // References
    // -> bool isFirstScene;
}
// Range: 0x8024CF78 -> 0x8024CFAC
void World::ScaleformBlobEntity::BroadcastEvent(enum eSFEventType toEvent /* r31 */) {
}
// Range: 0x8024CFAC -> 0x8024CFF0
void World::ScaleformBlobEntity::BroadcastEvent(enum eSFEventType toEvent /* r30 */, char * str /* r31 */) {
}
// Range: 0x8024CFF0 -> 0x8024D034
void World::ScaleformBlobEntity::BroadcastEvent(enum eSFEventType toEvent /* r31 */, float num /* f31 */) {
}
// Range: 0x8024D034 -> 0x8024D078
void World::ScaleformBlobEntity::SwitchFPCam(unsigned int viewportIndex /* r30 */, bool fpv /* r31 */) {
}
// Range: 0x8024D078 -> 0x8024D0BC
void World::ScaleformBlobEntity::SwitchAimingCam(unsigned int viewportIndex /* r30 */, bool aiming /* r31 */) {
}
// Range: 0x8024D0BC -> 0x8024D0E4
void World::ScaleformBlobEntity::EnableExtendedMemAllocator() {
}
// Range: 0x8024D0E4 -> 0x8024D10C
void World::ScaleformBlobEntity::DisableExtendedMemAllocator() {
}
