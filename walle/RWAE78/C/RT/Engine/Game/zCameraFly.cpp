/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCameraFly.cpp
*/
class _OGFlythroughSchema _OGFlythroughschema; // size: 0x18, address: 0x8076BA30
class SchemaRegistrator _OGFlythroughschemaReg; // size: 0x8, address: 0x8076BA48
static unsigned long long gCamFlySkipTable[16]; // size: 0x80, address: 0x8076BA50
static bool hasMusic; // size: 0x1, address: 0x8076BAD0
// Range: 0x8009AD80 -> 0x8009AD90
void World::_OGFlythroughEntity::Deactivate() {
}
// Range: 0x8009AD90 -> 0x8009ADE0
void World::_OGFlythroughEntity::Destroy(class _OGFlythroughEntity * this /* r31 */) {
}
// signature: World::_OGFlythroughSchema::Fix(World::Asset *, long, int)
// Range: 0x8009AE40 -> 0x8009AE48
void World::_OGFlythroughSchema::Fix() {
}
// signature: World::_OGFlythroughSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8009AE50 -> 0x8009AE9C
class EntityStub * World::_OGFlythroughSchema::CreateStub(class _OGFlythroughSchema * this /* r31 */) {
}
// signature: World::_OGFlythroughSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8009AEA0 -> 0x8009AEB8
void World::_OGFlythroughSchema::DestroyStub() {
}
// signature: World::_OGFlythroughSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8009AEC0 -> 0x8009AF28
class Entity * World::_OGFlythroughSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World19_OGFlythroughEntity;
}
// signature: zCameraFlyEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8009AF70 -> 0x8009AF8C
void zCameraFlyEventCB(class xBase * from /* r0 */) {
}
// Range: 0x8009AF90 -> 0x8009AF9C
bool CameraFlyHasMusic() {
    // References
    // -> static bool hasMusic;
}
// signature: zCameraFly::SyncPointCallBack(FMOD::Event *, FMOD_EVENT_CALLBACKTYPE, void *, void *, void *)
// Range: 0x8009AFA0 -> 0x8009B010
enum FMOD_RESULT zCameraFly::SyncPointCallBack(void * userData /* r31 */) {
    {
        // Range: 0x8009AFA8 -> 0x8009AFF8
        // Local variables
        class zCameraFly * cameraFly; // reg65535
        float soundTime; // f0
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x8009B010 -> 0x8009B07C
void zCameraFly::Init(class zCameraFly * this /* r30 */, class Flythrough * inAsset /* r31 */) {
}
// Range: 0x8009B080 -> 0x8009B0C4
void zCameraFly::Reset(class zCameraFly * this /* r31 */) {
}
// Range: 0x8009B0D0 -> 0x8009B144
void zCameraFly::Setup(class zCameraFly * this /* r31 */) {
    // Local variables
    class Goodie * goodie; // r0
}
// signature: zCameraFly::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8009B150 -> 0x8009B220
void zCameraFly::HandleEvent(class zCameraFly * this /* r31 */) {
}
// Range: 0x8009B220 -> 0x8009B39C
void zCameraFly::Play(class zCameraFly * this /* r31 */) {
    {
        // Range: 0x8009B23C -> 0x8009B2A4
        // Local variables
        int i; // r10
    }

    // References
    // -> bool bAllowInput;
    // -> class zGlobals globals;
    // -> static unsigned long long gCamFlySkipTable[16];
}
// signature: zCameraFly::Timestep(float)
// Range: 0x8009B3A0 -> 0x8009B3FC
void zCameraFly::Timestep(class zCameraFly * this /* r31 */) {
    // Local variables
    class xVec3 camPos; // r1+0x8
}
// Range: 0x8009B400 -> 0x8009B4F8
void zCameraFly::Stopped(class zCameraFly * this /* r30 */) {
    // References
    // -> bool bAllowInput;
    // -> class zGlobals globals;
}
// signature: zCameraFly_Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x8009B500 -> 0x8009B56C
void zCameraFly_Init() {
    // References
    // -> struct {} __vt__10zCameraFly;
}
// Range: 0x8009B5B0 -> 0x8009B5C4
void zCameraFly_SceneInit() {
    // References
    // -> static unsigned long long gCamFlySkipTable[16];
}
// Range: 0x8009B5D0 -> 0x8009B6A0
void zCameraFly_SceneExit() {
    // Local variables
    int cameraFlyTID; // r0
    class zCameraFly * current; // r29
    class zCameraFly * last; // r28

    // References
    // -> class zGlobals globals;
}
// signature: zCameraFly_Save(xSerial *)
// Range: 0x8009B6A0 -> 0x8009B6B0
void zCameraFly_Save() {
    // References
    // -> static unsigned long long gCamFlySkipTable[16];
}
// signature: zCameraFly_Load(xSerial *)
// Range: 0x8009B6B0 -> 0x8009B6C0
void zCameraFly_Load() {
    // References
    // -> static unsigned long long gCamFlySkipTable[16];
}
