/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xSaveLoad.cpp
*/
static bool sceneLoad; // size: 0x1, address: 0x80811400
static bool refreshSlotInfo; // size: 0x1, address: 0x80811401
static bool reportSuccess; // size: 0x1, address: 0x80811402
static unsigned int lastEvent; // size: 0x4, address: 0x80811404
static class xBase * requestor; // size: 0x4, address: 0x80811408
// Range: 0x8007A1E0 -> 0x8007A540
void zSaveDataResultCB(int result /* r30 */) {
    // References
    // -> class xGlobals * xglobals;
    // -> static bool reportSuccess;
    // -> static class xBase * requestor;
    // -> class Module * trcModule;
    // -> long long startupTicks;
    // -> static bool refreshSlotInfo;
    // -> static bool sceneLoad;
    // -> static bool g_bufferLock;
    // -> class zGlobals globals;
}
// signature: zSaveLoadEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8007A540 -> 0x8007AB74
void zSaveLoadEventCB(class xBase * from /* r27 */, unsigned int toEvent /* r29 */, class EventAny * genericParams /* r31 */) {
    // Local variables
    int bufferSize; // r31

    {
        // Range: 0x8007A654 -> 0x8007A760
        // Local variables
        class SaveDataHeader header; // r1+0xCC
    }
    {
        // Range: 0x8007A770 -> 0x8007A844
        // Local variables
        class EventActionOneWidget * params; // r0
    }
    {
        // Range: 0x8007A8E8 -> 0x8007AA44
        // Local variables
        class SaveDataHeader header; // r1+0xC0
        class xSerial xser; // r1+0xD8
    }

    // References
    // -> static bool refreshSlotInfo;
    // -> static bool sceneLoad;
    // -> class zGlobals globals;
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
    // -> static bool g_bufferLock;
    // -> class xGlobals * xglobals;
    // -> long long startupTicks;
    // -> static bool reportSuccess;
    // -> static unsigned int lastEvent;
    // -> static class xBase * requestor;
    // -> class Module * trcModule;
}
// Range: 0x8007AB80 -> 0x8007AC60
class Entity * Sext::zSaveLoadAsset::Create(class EntityHandleBase * handle /* r30 */, class zSaveLoadAsset * sasset /* r31 */) {
    // References
    // -> struct {} __vt__9zSaveLoad;
    // -> struct {} __vt__Q25World9xOGEntity;
}
