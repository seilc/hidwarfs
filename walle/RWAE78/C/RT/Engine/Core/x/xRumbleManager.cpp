/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xRumbleManager.cpp
*/
static class Manager rumbleManager; // size: 0x428, address: 0x8075DAD8
// signature: xRumble::Manager::Add(unsigned int, int, xRumble::emitterBase *)
// Range: 0x80057750 -> 0x80057C1C
bool xRumble::Manager::Add(class emitterBase * pEmitter /* r29 */) {
    // Local variables
    class padInfo * pInfo; // r31
    float timeToLive; // f27
    bool rumbleForever; // r30
    class emitterBase * pCurrentEmitter; // r3
    unsigned int effectPriority; // r7
    class effectInternal * freeEffect; // r9

    {
        // Range: 0x800579E8 -> 0x80057B14
        // Local variables
        unsigned int i; // r28
    }

    // References
    // -> bool activePlayers[4];
}
// Range: 0x80057C20 -> 0x80057DAC
bool xRumble::Manager::Add(class Manager * this /* r23 */, unsigned int viewportIdx /* r24 */, class zPlayerInput * pad /* r25 */, class emitterBase * pEmitter /* r26 */) {
    // Local variables
    int counter; // r28
    int gamePort; // r0

    {
        // Range: 0x80057C74 -> 0x80057D58
        // Local variables
        int i; // r27
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80057DB0 -> 0x800582DC
void xRumble::Manager::Update(class Manager * this /* r25 */, class zPlayerInput * pad /* r26 */, class xVec3 * playerPos /* r27 */, float timeElapsed /* f29 */, bool bPauseState /* r28 */) {
    // Local variables
    unsigned int gamePort; // r0
    class padInfo * pInfo; // r29
    float intensity; // f29

    {
        // Range: 0x80057E20 -> 0x80057F2C
        // Local variables
        unsigned int i; // r5
    }
    {
        // Range: 0x80057F3C -> 0x80058184
        // Local variables
        float timeToLive; // f0
    }
    {
        // Range: 0x80058188 -> 0x80058230
        // Local variables
        unsigned int i; // r23
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x800582E0 -> 0x80058360
class Manager * xRumble::Manager::Get() {
    // References
    // -> static class Manager rumbleManager;
}
// Range: 0x80058360 -> 0x800583CC
void xRumble::Manager::Reset(class Manager * this /* r30 */) {
}
// Range: 0x800583D0 -> 0x80058418
void xRumble::Manager::StopRumbling() {
    {
        // Range: 0x800583E0 -> 0x800583F8
        // Local variables
        int i; // r31

        {
            // Range: 0x800583E0 -> 0x800583F8
            // Local variables
            class zPlayerInput * pad; // r0
        }
    }
}
// Range: 0x80058420 -> 0x800584A8
void xRumble::Manager::ClearRumbling(class Manager * this /* r28 */) {
    {
        // Range: 0x80058434 -> 0x8005847C
        // Local variables
        int i; // r30

        {
            // Range: 0x80058434 -> 0x8005847C
            // Local variables
            class zPlayerInput * pad; // r29
        }
    }
}
// signature: xRumble::Manager::EnableRumbling(bool)
// Range: 0x800584B0 -> 0x800584B8
void xRumble::Manager::EnableRumbling() {
}
// signature: xRumble::Manager::ClearRumbling(int)
// Range: 0x800584C0 -> 0x800584D4
void xRumble::Manager::ClearRumbling() {
}
// signature: xRumble::Manager::RumbleSave(xSerial *)
// Range: 0x800584E0 -> 0x8005852C
void xRumble::Manager::RumbleSave(class Manager * this /* r7 */) {
    // References
    // -> class zGlobals globals;
}
// signature: xRumble::Manager::RumbleLoad(xSerial *)
// Range: 0x80058530 -> 0x80058558
void xRumble::Manager::RumbleLoad(class Manager * this /* r7 */) {
    // References
    // -> class zGlobals globals;
}
