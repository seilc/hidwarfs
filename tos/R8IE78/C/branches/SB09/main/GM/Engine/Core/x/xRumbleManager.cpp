/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xRumbleManager.cpp
*/
class Manager rumbleManager; // size: 0x828, address: 0x8072E408
// signature: xRumble::effectInternal::GetIntensity(const xVec3 &)
// Range: 0x8003FEC0 -> 0x8003FF58
float xRumble::effectInternal::GetIntensity(class effectInternal * this /* r30 */) {
    // Local variables
    float intensity; // r1+0x8
    class effectAsset * pAsset; // r31

    {
        // Range: 0x8003FED4 -> 0x8003FF3C
        // Local variables
        float magFraction; // f0
    }
}
// Range: 0x8003FF80 -> 0x8003FFE8
void xRumble::padInfo::FindNewExclusive() {
    // Local variables
    unsigned int maxPriority; // r7

    {
        // Range: 0x8003FF80 -> 0x8003FFE4
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x8003FF80 -> 0x8003FFE4
            // Local variables
            unsigned int currentPriority; // r0
        }
    }
}
// signature: xRumble::Manager::store(xRumble::padInfo *, const xRumble::emitterBase *, xRumble::effectInternal *, float, bool)
// Range: 0x8003FFF0 -> 0x80040020
void xRumble::Manager::store() {
}
// signature: xRumble::Manager::Add(unsigned int, int, xRumble::emitterBase *)
// Range: 0x80040020 -> 0x800402DC
bool xRumble::Manager::Add(class Manager * this /* r26 */, unsigned int viewportIdx /* r27 */, class emitterBase * pEmitter /* r28 */) {
    // Local variables
    class padInfo * pInfo; // r30
    float timeToLive; // f31
    bool rumbleForever; // r29
    class emitterBase * pCurrentEmitter; // r3
    unsigned int effectPriority; // r4
    class effectInternal * freeEffect; // r6

    {
        // Range: 0x80040158 -> 0x80040244
        // Local variables
        unsigned int i; // r0
    }
}
// Range: 0x80040310 -> 0x80040434
bool xRumble::Manager::Add(class Manager * this /* r25 */, unsigned int viewportIdx /* r26 */, class zPlayerInput * pad /* r27 */, class emitterBase * pEmitter /* r28 */) {
    // Local variables
    int counter; // r30
    int gamePort; // r0

    {
        // Range: 0x80040364 -> 0x800403F4
        // Local variables
        int i; // r29
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: xRumble::Manager::Stop(unsigned int, zPlayerInput *, xRumble::emitterBase *)
// Range: 0x80040440 -> 0x80040508
bool xRumble::Manager::Stop(class Manager * this /* r29 */, unsigned int viewportIdx /* r30 */, class emitterBase * pEmitter /* r31 */) {
    // Local variables
    class padInfo * pInfo; // r6

    {
        // Range: 0x80040470 -> 0x800404EC
        // Local variables
        unsigned int i; // r0
    }
}
// Range: 0x80040510 -> 0x800407B4
void xRumble::Manager::Update(class Manager * this /* r26 */, class zPlayerInput * pad /* r27 */, class xVec3 & playerPos /* r28 */, float timeElapsed /* f30 */, bool bPauseState /* r29 */) {
    // Local variables
    unsigned int gamePort; // r0
    class padInfo * pInfo; // r30
    float intensity; // f30

    {
        // Range: 0x8004056C -> 0x800405D0
        // Local variables
        unsigned int i; // r0
    }
    {
        // Range: 0x800405D8 -> 0x80040658
        // Local variables
        float timeToLive; // f0
    }
    {
        // Range: 0x8004065C -> 0x800406BC
        // Local variables
        unsigned int i; // r24
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x800407C0 -> 0x80040810
class Manager & xRumble::Manager::Get() {
    // References
    // -> class Manager rumbleManager;
}
// Range: 0x80040810 -> 0x80040854
void xRumble::Manager::Reset(class Manager * this /* r31 */) {
}
// Range: 0x80040860 -> 0x800408BC
void * xRumble::Manager::Manager(class Manager * this /* r30 */) {
    {
        // Range: 0x8004088C -> 0x800408A4
        // Local variables
        int i; // r4
    }
}
// Range: 0x800408C0 -> 0x80040914
void xRumble::Manager::StopRumbling() {
    {
        // Range: 0x800408D0 -> 0x80040900
        // Local variables
        int i; // r31

        {
            // Range: 0x800408D0 -> 0x80040900
            // Local variables
            class zPlayerInput * pad; // r0
        }
    }
}
// Range: 0x80040920 -> 0x8004099C
void xRumble::Manager::ClearRumbling(class Manager * this /* r28 */) {
    {
        // Range: 0x80040934 -> 0x80040988
        // Local variables
        int i; // r30

        {
            // Range: 0x80040934 -> 0x80040988
            // Local variables
            class zPlayerInput * pad; // r29
        }
    }
}
// signature: xRumble::Manager::EnableRumbling(bool)
// Range: 0x800409A0 -> 0x800409A8
void xRumble::Manager::EnableRumbling() {
}
// signature: xRumble::Manager::ClearRumbling(int)
// Range: 0x800409B0 -> 0x800409C4
void xRumble::Manager::ClearRumbling() {
}
// signature: xRumble::Manager::RumbleSave(xSerial *)
// Range: 0x800409D0 -> 0x80040A1C
void xRumble::Manager::RumbleSave(class Manager * this /* r7 */) {
    // References
    // -> class zGlobals globals;
}
// signature: xRumble::Manager::RumbleLoad(xSerial *)
// Range: 0x80040A20 -> 0x80040A88
void xRumble::Manager::RumbleLoad(class Manager * this /* r31 */) {
    // Local variables
    char temp; // r1+0x8
    bool enabled; // r4

    {
        // Range: 0x80040A50 -> 0x80040A74
        // Local variables
        int i; // r5
    }
}
// signature: xRumble::Manager::EnableRumbling(unsigned int, bool)
// Range: 0x80040A90 -> 0x80040A9C
void xRumble::Manager::EnableRumbling() {
}
