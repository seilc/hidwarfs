/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zInteractiveMusic.cpp
*/
// Range: 0x8025A820 -> 0x8025A9BC
void zInteractiveMusic::Init(class zInteractiveMusic * this /* r30 */, class zInteractiveMusicAsset * inAsset /* r29 */) {
}
// Range: 0x8025A9C0 -> 0x8025AA4C
void * zInteractiveMusic::~zInteractiveMusic(class zInteractiveMusic * this /* r30 */) {
    // References
    // -> struct {} __vt__17zInteractiveMusic;
}
// Range: 0x8025AA50 -> 0x8025AE60
void zInteractiveMusic::Update(class zInteractiveMusic * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float step; // f1
    float min; // f24
    float max; // f25

    {
        // Range: 0x8025AAA4 -> 0x8025ACF4
        // Local variables
        int j; // r6

        {
            // Range: 0x8025AAA4 -> 0x8025ACDC
            // Local variables
            int i; // r7

            {
                // Range: 0x8025AAA4 -> 0x8025AC2C
                // Local variables
                class xVec3 local; // r1+0x30
                class xMat4x3 boxMat; // r1+0x40
            }
            {
                // Range: 0x8025AC2C -> 0x8025ACDC
                // Local variables
                class xVec3 playerVec; // r1+0x18
                float r; // f0
                class xVec3 pos; // r1+0x24
            }
        }
    }
    {
        // Range: 0x8025AD10 -> 0x8025ADF0
        // Local variables
        int i; // r26
    }

    // References
    // -> bool gSoundReadyToExit;
    // -> class xGlobals * xglobals;
}
// Range: 0x8025AE60 -> 0x8025AF14
bool zInteractiveMusic::ConditionBase() {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8025AF20 -> 0x8025B014
bool zInteractiveMusic::ConditionDamage() {
    // Local variables
    bool damage; // r0

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8025B020 -> 0x8025B164
bool zInteractiveMusic::ConditionDug() {
    // Local variables
    bool dugPlayer; // r28

    {
        // Range: 0x8025B0D4 -> 0x8025B124
        // Local variables
        int i; // r27
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8025B170 -> 0x8025B2B4
bool zInteractiveMusic::ConditionKevin() {
    // Local variables
    bool kevinPlayer; // r28

    {
        // Range: 0x8025B224 -> 0x8025B274
        // Local variables
        int i; // r27
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8025B2C0 -> 0x8025B3A8
bool zInteractiveMusic::ConditionEnemy() {
    // Local variables
    bool nearEnemy; // r5

    {
        // Range: 0x8025B370 -> 0x8025B38C
        // Local variables
        int i; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8025B3B0 -> 0x8025B460
bool zInteractiveMusic::ConditionDanger() {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8025B460 -> 0x8025B510
bool zInteractiveMusic::ConditionSetup() {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8025B510 -> 0x8025B5C0
bool zInteractiveMusic::ConditionMemory() {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8025B5C0 -> 0x8025B670
bool zInteractiveMusic::ConditionWow() {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8025B670 -> 0x8025B720
bool zInteractiveMusic::ConditionHappy() {
    // References
    // -> class xGlobals * xglobals;
}
// signature: zInteractiveMusic::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8025B720 -> 0x8025B968
void zInteractiveMusic::HandleEvent(class zInteractiveMusic * this /* r31 */) {
    // References
    // -> bool gSysForceExit;
    // -> bool gSoundReadyToExit;
    // -> static class zSoundModule * sMod;
}
// Range: 0x8025B970 -> 0x8025BA80
class Entity * Sext::zInteractiveMusicAsset::Create(class EntityHandleBase * handle /* r29 */, class zInteractiveMusicAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__17zInteractiveMusic;
    // -> struct {} __vt__Q25World9xOGEntity;
}
