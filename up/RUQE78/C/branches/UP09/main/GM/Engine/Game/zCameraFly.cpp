/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCameraFly.cpp
*/
static unsigned long long gCamFlySkipTable[16]; // size: 0x80, address: 0x8081BDC0
static bool hasMusic; // size: 0x1, address: 0x8081BE40
// signature: zCameraFlyEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8010AEE0 -> 0x8010AEFC
void zCameraFlyEventCB(class xBase * from /* r0 */) {
}
// Range: 0x8010AF00 -> 0x8010AF0C
bool CameraFlyHasMusic() {
    // References
    // -> static bool hasMusic;
}
// signature: zCameraFly::SyncPointCallBack(FMOD::Event *, FMOD_EVENT_CALLBACKTYPE, void *, void *, void *)
// Range: 0x8010AF10 -> 0x8010AF80
enum FMOD_RESULT zCameraFly::SyncPointCallBack(void * userData /* r31 */) {
    {
        // Range: 0x8010AF18 -> 0x8010AF68
        // Local variables
        class zCameraFly * cameraFly; // reg65535
        float soundTime; // f0
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x8010AF80 -> 0x8010AFEC
void zCameraFly::Init(class zCameraFly * this /* r30 */, class Flythrough * inAsset /* r31 */) {
}
// Range: 0x8010AFF0 -> 0x8010B034
void zCameraFly::Reset(class zCameraFly * this /* r31 */) {
}
// Range: 0x8010B040 -> 0x8010B0AC
void zCameraFly::Setup(class zCameraFly * this /* r31 */) {
    // Local variables
    class EntityHandleBase * goodie; // r0
}
// signature: zCameraFly::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8010B0B0 -> 0x8010B180
void zCameraFly::HandleEvent(class zCameraFly * this /* r31 */) {
}
// Range: 0x8010B180 -> 0x8010B2FC
void zCameraFly::Play(class zCameraFly * this /* r31 */) {
    {
        // Range: 0x8010B19C -> 0x8010B204
        // Local variables
        int i; // r10
    }

    // References
    // -> bool bAllowInput;
    // -> class zGlobals globals;
    // -> static unsigned long long gCamFlySkipTable[16];
}
// signature: zCameraFly::Timestep(float)
// Range: 0x8010B300 -> 0x8010B35C
void zCameraFly::Timestep(class zCameraFly * this /* r31 */) {
    // Local variables
    class xVec3 camPos; // r1+0x8
}
// Range: 0x8010B360 -> 0x8010B458
void zCameraFly::Stopped(class zCameraFly * this /* r30 */) {
    // References
    // -> bool bAllowInput;
    // -> class zGlobals globals;
}
// Range: 0x8010B460 -> 0x8010B548
void * zCameraFly::~zCameraFly(class zCameraFly * this /* r30 */) {
    // References
    // -> class zGlobals globals;
    // -> struct {} __vt__10zCameraFly;
}
// Range: 0x8010B560 -> 0x8010B684
class Entity * Sext::Flythrough::Create(class EntityHandleBase * handle /* r29 */, class Flythrough * asset /* r30 */) {
    // References
    // -> struct {} __vt__10zCameraFly;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x8010B690 -> 0x8010B6A4
void zCameraFly_SceneInit() {
    // References
    // -> static unsigned long long gCamFlySkipTable[16];
}
// signature: zCameraFly_Save(xSerial *)
// Range: 0x8010B6B0 -> 0x8010B6C0
void zCameraFly_Save() {
    // References
    // -> static unsigned long long gCamFlySkipTable[16];
}
// signature: zCameraFly_Load(xSerial *)
// Range: 0x8010B6C0 -> 0x8010B6D0
void zCameraFly_Load() {
    // References
    // -> static unsigned long long gCamFlySkipTable[16];
}
