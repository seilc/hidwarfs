/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPortal.cpp
*/
static class zPortal * fadeDownTo; // size: 0x4, address: 0x80754A2C
static bool fadeDownForceSameScene; // size: 0x1, address: 0x80754A30
static bool fadeDownSameScene; // size: 0x1, address: 0x80754A31
// Range: 0x80123F90 -> 0x8012400C
class Entity * Sext::xPortalAsset::Create(class EntityHandleBase * handle /* r29 */, class xPortalAsset * passet /* r30 */) {
    // References
    // -> struct {} __vt__7zPortal;
}
// Range: 0x80124010 -> 0x80124058
void zPortalInit(class zPortal * portal /* r30 */, class xPortalAsset * passet /* r31 */) {
}
// Range: 0x80124060 -> 0x801240C8
static void _PortallingToNextSceneCB() {
    // References
    // -> static bool fadeDownSameScene;
    // -> static bool fadeDownForceSameScene;
    // -> class zGlobals globals;
    // -> static class zPortal * fadeDownTo;
    // -> class SaveData g_saveData;
}
// signature: zPortalEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801240D0 -> 0x80124328
void zPortalEventCB(class xBase * to /* r30 */, unsigned int toEvent /* r26 */, class EventAny * genericParams /* r31 */) {
    // Local variables
    class EventActionTeleportPlayer * params; // r0
    class xSerial xser; // r1+0xC
    class xSerial * s; // r28
    int next_scene; // r1+0x8
    unsigned int allowPortal; // r27

    {
        // Range: 0x80124248 -> 0x8012429C
        // Local variables
        char * dst_string; // r27
    }

    // References
    // -> class SaveData g_saveData;
    // -> char * STR_ER01;
    // -> static bool fadeDownSameScene;
    // -> static bool fadeDownForceSameScene;
    // -> static class zPortal * fadeDownTo;
    // -> class zGlobals globals;
    // -> bool returningToTitle;
}
// Range: 0x80124330 -> 0x8012433C
unsigned int zPortal::GetSceneID() {
}
// signature: zPortalGetSceneID(Sext::xPortalAsset *)
// Range: 0x80124340 -> 0x80124348
unsigned int zPortalGetSceneID() {
}
// signature: zPortalPending::Set(zPortal *)
// Range: 0x80124350 -> 0x8012438C
void zPortalPending::Set() {
    // References
    // -> class zNGLoadingScreen gNGLoadingScreen;
}
// signature: zPortalPending::Set(const char *)
// Range: 0x80124390 -> 0x801243A4
void zPortalPending::Set() {
}
// Range: 0x801243B0 -> 0x801243C8
void zPortalPending::Clear() {
}
// Range: 0x801243D0 -> 0x801243F0
unsigned int zPortalPending::GetSceneID() {
}
// Range: 0x801243F0 -> 0x80124410
char * zPortalPending::GetScenePath() {
}
// Range: 0x80124410 -> 0x80124438
unsigned long long zPortalPending::GetCameraID() {
}
// signature: zPortalPending::GetDirectionID(int)
// Range: 0x80124440 -> 0x80124474
unsigned long long zPortalPending::GetDirectionID() {
}
// Range: 0x80124480 -> 0x801244A0
int zPortalPending::GetDirectionIDCount() {
}
