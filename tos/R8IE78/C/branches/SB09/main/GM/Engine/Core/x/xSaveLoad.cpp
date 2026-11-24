/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xSaveLoad.cpp
*/
static bool sceneLoad; // size: 0x1, address: 0x80729444
static bool refreshSlotInfo; // size: 0x1, address: 0x80729445
static bool reportSuccess; // size: 0x1, address: 0x80729446
static unsigned int lastEvent; // size: 0x4, address: 0x80729448
static class xBase * requestor; // size: 0x4, address: 0x8072944C
// Range: 0x80041130 -> 0x80041448
void zSaveDataResultCB(int result /* r30 */) {
    // References
    // -> class xGlobals * xglobals;
    // -> static bool reportSuccess;
    // -> static class xBase * requestor;
    // -> class Module * trcModule;
    // -> static bool refreshSlotInfo;
    // -> static bool sceneLoad;
    // -> static bool g_bufferLock;
    // -> class zGlobals globals;
}
// signature: zSaveLoadEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80041450 -> 0x80041928
void zSaveLoadEventCB(class xBase * from /* r27 */, unsigned int toEvent /* r29 */, class EventAny * genericParams /* r30 */) {
    // Local variables
    int bufferSize; // r27

    {
        // Range: 0x80041564 -> 0x8004162C
        // Local variables
        class SaveDataHeader header; // r1+0x88
    }
    {
        // Range: 0x80041640 -> 0x800416DC
        // Local variables
        class EventActionOneWidget * params; // r0
    }
    {
        // Range: 0x80041748 -> 0x80041848
        // Local variables
        class SaveDataHeader header; // r1+0x58
        class xSerial xser; // r1+0x6C
    }

    // References
    // -> static bool refreshSlotInfo;
    // -> static bool sceneLoad;
    // -> class zGlobals globals;
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
    // -> static bool g_bufferLock;
    // -> class xGlobals * xglobals;
    // -> static bool reportSuccess;
    // -> static unsigned int lastEvent;
    // -> static class xBase * requestor;
    // -> class Module * trcModule;
}
// Range: 0x800419A0 -> 0x80041A30
class Entity * Sext::zSaveLoadAsset::Create(class EntityHandleBase * handle /* r29 */, class zSaveLoadAsset * sasset /* r30 */) {
    // References
    // -> struct {} __vt__9zSaveLoad;
}
