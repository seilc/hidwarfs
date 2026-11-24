/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPortal.cpp
*/
static class zPortal * fadeDownTo; // size: 0x4, address: 0x8082556C
static bool fadeDownForceSameScene; // size: 0x1, address: 0x80825570
static bool fadeDownSameScene; // size: 0x1, address: 0x80825571
// Range: 0x80214C00 -> 0x80214CE0
class Entity * Sext::xPortalAsset::Create(class EntityHandleBase * handle /* r29 */, class xPortalAsset * passet /* r30 */) {
    // References
    // -> struct {} __vt__7zPortal;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80214CE0 -> 0x80214E1C
static void _PortallingToNextSceneCB() {
    // References
    // -> static bool fadeDownSameScene;
    // -> static bool fadeDownForceSameScene;
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> class Module * trcModule;
    // -> static class zPortal * fadeDownTo;
    // -> class zGlobals globals;
}
// signature: zPortalEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80214E20 -> 0x802152C8
void zPortalEventCB(class xBase * to /* r28 */, unsigned int toEvent /* r25 */, class EventAny * genericParams /* r29 */) {
    // Local variables
    class EventActionTeleportPlayer * params; // r0
    class xSerial xser; // r1+0x14
    class xSerial * s; // r26
    int next_scene; // r1+0x8
    unsigned int allowPortal; // r30

    {
        // Range: 0x80215114 -> 0x8021516C
        // Local variables
        char * dst_string; // r26
    }

    // References
    // -> char * STR_ER01;
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> class Module * trcModule;
    // -> static bool fadeDownSameScene;
    // -> static bool fadeDownForceSameScene;
    // -> static class zPortal * fadeDownTo;
    // -> class zGlobals globals;
    // -> bool returningToTitle;
}
// signature: zPortalGetSceneID(Sext::xPortalAsset *)
// Range: 0x802152D0 -> 0x8021539C
unsigned int zPortalGetSceneID() {
}
// signature: zPortalPending::Set(zPortal *)
// Range: 0x802153A0 -> 0x802153D4
void zPortalPending::Set() {
    // References
    // -> class zNGLoadingScreen gNGLoadingScreen;
}
// signature: zPortalPending::Set(const char *)
// Range: 0x802153E0 -> 0x802153F0
void zPortalPending::Set() {
}
// Range: 0x802153F0 -> 0x80215574
unsigned int zPortalPending::GetSceneID() {
}
// Range: 0x80215580 -> 0x802155A0
char * zPortalPending::GetScenePath() {
}
// signature: zPortalPending::GetDirectionID(int)
// Range: 0x802155A0 -> 0x802155D4
unsigned long long zPortalPending::GetDirectionID() {
}
// Range: 0x802155E0 -> 0x80215600
int zPortalPending::GetDirectionIDCount() {
}
