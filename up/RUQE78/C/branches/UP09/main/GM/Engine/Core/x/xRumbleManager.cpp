/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xRumbleManager.cpp
*/
static class Manager rumbleManager; // size: 0x828, address: 0x80810BD8
// signature: xRumble::Manager::Add(unsigned int, int, xRumble::emitterBase *)
// Range: 0x80075EC0 -> 0x8007637C
bool xRumble::Manager::Add(class emitterBase * pEmitter /* r29 */) {
    // Local variables
    class padInfo * pInfo; // r31
    float timeToLive; // f27
    bool rumbleForever; // r30
    class emitterBase * pCurrentEmitter; // r3
    unsigned int effectPriority; // r7
    class effectInternal * freeEffect; // r9

    {
        // Range: 0x80076148 -> 0x80076274
        // Local variables
        unsigned int i; // r28
    }
}
// Range: 0x80076380 -> 0x80076534
bool xRumble::Manager::Add(class Manager * this /* r22 */, unsigned int viewportIdx /* r23 */, class zPlayerInput * pad /* r24 */, class emitterBase * pEmitter /* r25 */) {
    // Local variables
    int counter; // r27
    int gamePort; // r0

    {
        // Range: 0x800763D4 -> 0x800764E0
        // Local variables
        int i; // r26
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80076540 -> 0x80076A84
void xRumble::Manager::Update(class Manager * this /* r25 */, class zPlayerInput * pad /* r26 */, class xVec3 & playerPos /* r27 */, float timeElapsed /* f29 */, bool bPauseState /* r28 */) {
    // Local variables
    unsigned int gamePort; // r0
    class padInfo * pInfo; // r29
    float intensity; // f29

    {
        // Range: 0x800765B0 -> 0x800766BC
        // Local variables
        unsigned int i; // r5
    }
    {
        // Range: 0x800766CC -> 0x80076914
        // Local variables
        float timeToLive; // f0
    }
    {
        // Range: 0x80076918 -> 0x800769C0
        // Local variables
        unsigned int i; // r23
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80076AB0 -> 0x80076B30
class Manager & xRumble::Manager::Get() {
    // References
    // -> static class Manager rumbleManager;
}
// Range: 0x80076B30 -> 0x80076BA8
void xRumble::Manager::Reset(class Manager * this /* r30 */) {
}
// Range: 0x80076BB0 -> 0x80076C04
void xRumble::Manager::StopRumbling() {
    {
        // Range: 0x80076BC0 -> 0x80076BE4
        // Local variables
        int i; // r31

        {
            // Range: 0x80076BC0 -> 0x80076BE4
            // Local variables
            class zPlayerInput * pad; // r0
        }
    }
}
// Range: 0x80076C10 -> 0x80076CA4
void xRumble::Manager::ClearRumbling(class Manager * this /* r28 */) {
    {
        // Range: 0x80076C24 -> 0x80076C78
        // Local variables
        int i; // r30

        {
            // Range: 0x80076C24 -> 0x80076C78
            // Local variables
            class zPlayerInput * pad; // r29
        }
    }
}
// signature: xRumble::Manager::EnableRumbling(bool)
// Range: 0x80076CB0 -> 0x80076CB8
void xRumble::Manager::EnableRumbling() {
}
// signature: xRumble::Manager::ClearRumbling(int)
// Range: 0x80076CC0 -> 0x80076CD4
void xRumble::Manager::ClearRumbling() {
}
// signature: xRumble::Manager::RumbleSave(xSerial *)
// Range: 0x80076CE0 -> 0x80076D2C
void xRumble::Manager::RumbleSave(class Manager * this /* r7 */) {
    // References
    // -> class zGlobals globals;
}
// signature: xRumble::Manager::RumbleLoad(xSerial *)
// Range: 0x80076D30 -> 0x80076D90
void xRumble::Manager::RumbleLoad(class Manager * this /* r31 */) {
    // Local variables
    char temp; // r1+0x8
    bool enabled; // r0
}
// signature: xRumble::Manager::EnableRumbling(unsigned int, bool)
// Range: 0x80076D90 -> 0x80076D9C
void xRumble::Manager::EnableRumbling() {
}
