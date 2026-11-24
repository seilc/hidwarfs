/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUPContextAction.cpp
*/
class GestureData WiiGestureMap[40]; // size: 0x280, address: 0x80843840
static enum Action miscactionMap[16]; // size: 0x40, address: 0x80786860
// signature: GestureData::EvaluateWiiGestureMap(zPlayer *, Sext::eContextActionID)
// Range: 0x802B31A0 -> 0x802B3440
bool GestureData::EvaluateWiiGestureMap() {
    {
        // Range: 0x802B31F8 -> 0x802B32F0
        // Local variables
        enum ePadButtonType buttonType; // r4
        enum ePadButton button; // r0
    }
    {
        // Range: 0x802B32F0 -> 0x802B333C
        // Local variables
        float angle; // f1
        enum ePadTilt direction; // r5
        enum ePad pad; // r4
    }
    {
        // Range: 0x802B333C -> 0x802B3388
        // Local variables
        float magnitude; // f1
        enum ePadSwing direction; // r5
        enum ePad pad; // r4
    }
    {
        // Range: 0x802B3388 -> 0x802B33E0
        // Local variables
        float speed; // f31
        enum ePadShake direction; // r5
        enum ePad pad; // r4
    }
    {
        // Range: 0x802B33E0 -> 0x802B3420
        // Local variables
        unsigned int count; // r31
        enum ePad pad; // r4
    }

    // References
    // -> static enum Action miscactionMap[16];
    // -> class GestureData WiiGestureMap[40];
}
// Range: 0x802B3440 -> 0x802B3490
void zUpContextActionManager::SceneExit(class zUpContextActionManager * this /* r31 */) {
}
// Range: 0x802B3490 -> 0x802B37D0
void zUpContextActionManager::SceneSetup(class zUpContextActionManager * this /* r25 */) {
    // Local variables
    class xEntAsset * asset; // r0
    int overrideCount; // r0

    {
        // Range: 0x802B35A4 -> 0x802B378C
        // Local variables
        int i; // r25

        {
            // Range: 0x802B35A4 -> 0x802B378C
            // Local variables
            int actionsLen; // r0
            class InputMappingAsset inputAsset; // r1+0x30

            {
                // Range: 0x802B35A4 -> 0x802B3784
                // Local variables
                int i; // r0

                {
                    // Range: 0x802B35A4 -> 0x802B3784
                    // Local variables
                    unsigned char action; // r5

                    {
                        // Range: 0x802B35A4 -> 0x802B35A4
                        // Local variables
                        class Button buttonStruct; // r1+0x8
                    }
                    {
                        // Range: 0x802B35A4 -> 0x802B35A4
                        // Local variables
                        float angle; // f0
                        class Tilt tiltStruct; // r1+0x28
                    }
                    {
                        // Range: 0x802B35A4 -> 0x802B35C8
                        // Local variables
                        float magnitude; // f0
                        enum ePadSwing direction; // r7
                        enum ePad pad; // r6
                        class Swing swingStruct; // r1+0x20
                    }
                    {
                        // Range: 0x802B35C8 -> 0x802B3758
                        // Local variables
                        float speed; // f0
                        class ShakeSpeed shakeStruct; // r1+0x18
                    }
                    {
                        // Range: 0x802B3760 -> 0x802B3784
                        // Local variables
                        class ShakeCount shakeStruct; // r1+0x10
                    }
                }
            }
        }
    }

    // References
    // -> class GestureData WiiGestureMap[40];
}
// Range: 0x802B37D0 -> 0x802B37F0
void zUpContextActionManager::SceneReset() {
}
// Range: 0x802B37F0 -> 0x802B380C
void zUpContextActionManager::CollectionBegin() {
}
// Range: 0x802B3810 -> 0x802B390C
class zUpContextAction * zUpContextActionManager::GetFreeNavigation(class zUpContextActionManager * this /* r29 */, class zPlayer * player /* r30 */, unsigned char clientID /* r31 */) {
}
// Range: 0x802B3910 -> 0x802B3A04
class zUpContextAction * zUpContextActionManager::GetFreeActivity(class zUpContextActionManager * this /* r29 */, class zPlayer * player /* r30 */, unsigned char clientID /* r31 */) {
}
// signature: zUpContextActionManager::GetFreePresence(zPlayer *)
// Range: 0x802B3A10 -> 0x802B3AA4
class zUpContextAction * zUpContextActionManager::GetFreePresence(class zUpContextActionManager * this /* r31 */) {
}
// signature: zUpContextActionManager::CollectionEnd(zPlayer *)
// Range: 0x802B3AB0 -> 0x802B3BB8
void zUpContextActionManager::CollectionEnd() {
    // Local variables
    int highestPriority[3]; // r1+0x20
    class xVec3 srcPos; // r1+0x14

    {
        // Range: 0x802B3B08 -> 0x802B3BA0
        // Local variables
        int actionIdx; // r9

        {
            // Range: 0x802B3B08 -> 0x802B3BA0
            // Local variables
            int currentActionType; // r0

            {
                // Range: 0x802B3B20 -> 0x802B3B78
                // Local variables
                float radius2; // f5
                float dist2; // f0
            }
        }
    }
}
// signature: zUpContextActionManager::IsNavigation(int)
// Range: 0x802B3BC0 -> 0x802B3BF4
int zUpContextActionManager::IsNavigation() {
    // Local variables
    int actionIdx; // r0
}
// signature: zUpContextActionManager::IsActivity(int)
// Range: 0x802B3C00 -> 0x802B3C34
int zUpContextActionManager::IsActivity() {
    // Local variables
    int actionIdx; // r0
}
// signature: zUpContextActionManager::IsPresence(int)
// Range: 0x802B3C40 -> 0x802B3C74
int zUpContextActionManager::IsPresence() {
    // Local variables
    int actionIdx; // r0
}
// Range: 0x802B3C80 -> 0x802B3CA8
class zInteractionUP * zUpContextActionManager::IsInteractionNavigation() {
    // Local variables
    int actionIdx; // r0
}
// Range: 0x802B3CB0 -> 0x802B3CD8
class zInteractionUP * zUpContextActionManager::IsInteractionActivity() {
    // Local variables
    int actionIdx; // r0
}
// Range: 0x802B3CE0 -> 0x802B3D08
class zInteractionUP * zUpContextActionManager::IsInteractionPresence() {
    // Local variables
    int actionIdx; // r0
}
// Range: 0x802B3D10 -> 0x802B3DEC
void zUpContextActionManager::EndContextCheck(class zUpContextActionManager * this /* r28 */, class zPlayer * player /* r27 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x802B3DF0 -> 0x802B3EC0
void zUpContextActionManager::DisplayContextActionText(class zUpContextActionManager * this /* r28 */, enum eContextActionID actionID /* r26 */, class zPlayer * player /* r27 */) {
    {
        // Range: 0x802B3E28 -> 0x802B3EA0
        // Local variables
        class EventActionHudContextAction params; // r1+0x8
    }

    // References
    // -> class zGlobals globals;
}
