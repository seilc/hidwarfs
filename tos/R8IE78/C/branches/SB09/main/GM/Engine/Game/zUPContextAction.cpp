/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zUPContextAction.cpp
*/
class GestureData WiiGestureMap[40]; // size: 0x280, address: 0x80771780
static enum Action miscactionMap[16]; // size: 0x40, address: 0x80691DF8
// signature: GestureData::GetButton(Sext::ePadButton &, Sext::ePadButtonType &)
// Range: 0x801A0610 -> 0x801A0644
void GestureData::GetButton() {
}
// signature: GestureData::GetTilt(Sext::ePad &, Sext::ePadTilt &, float &)
// Range: 0x801A0650 -> 0x801A0694
void GestureData::GetTilt() {
}
// signature: GestureData::GetSwing(Sext::ePad &, Sext::ePadSwing &, float &)
// Range: 0x801A06A0 -> 0x801A06E4
void GestureData::GetSwing() {
}
// signature: GestureData::GetShakeSpeed(Sext::ePad &, Sext::ePadShake &, float &)
// Range: 0x801A06F0 -> 0x801A0734
void GestureData::GetShakeSpeed() {
}
// signature: GestureData::GetShakeCount(Sext::ePad &, unsigned int &)
// Range: 0x801A0740 -> 0x801A0770
void GestureData::GetShakeCount() {
}
// signature: GestureData::SetButton(Sext::ePadButton, Sext::ePadButtonType)
// Range: 0x801A0770 -> 0x801A0784
void GestureData::SetButton() {
}
// signature: GestureData::SetTilt(Sext::ePad, Sext::ePadTilt, float)
// Range: 0x801A0790 -> 0x801A07A8
void GestureData::SetTilt() {
}
// signature: GestureData::SetSwing(Sext::ePad, Sext::ePadSwing, float)
// Range: 0x801A07B0 -> 0x801A07C8
void GestureData::SetSwing() {
}
// signature: GestureData::SetShakeSpeed(Sext::ePad, Sext::ePadShake, float)
// Range: 0x801A07D0 -> 0x801A07E8
void GestureData::SetShakeSpeed() {
}
// signature: GestureData::SetShakeCount(Sext::ePad, unsigned int)
// Range: 0x801A07F0 -> 0x801A0804
void GestureData::SetShakeCount() {
}
// signature: GestureData::EvaluateWiiGestureMap(zPlayer *, Sext::eContextActionID)
// Range: 0x801A0810 -> 0x801A0A74
bool GestureData::EvaluateWiiGestureMap(class zPlayer * player /* r31 */) {
    {
        // Range: 0x801A0864 -> 0x801A094C
        // Local variables
        enum ePadButtonType buttonType; // r1+0x34
        enum ePadButton button; // r1+0x38
    }
    {
        // Range: 0x801A094C -> 0x801A0990
        // Local variables
        float angle; // r1+0x28
        enum ePadTilt direction; // r1+0x2C
        enum ePad pad; // r1+0x30
    }
    {
        // Range: 0x801A0990 -> 0x801A09D4
        // Local variables
        float magnitude; // r1+0x1C
        enum ePadSwing direction; // r1+0x20
        enum ePad pad; // r1+0x24
    }
    {
        // Range: 0x801A09D4 -> 0x801A0A24
        // Local variables
        float speed; // r1+0x10
        enum ePadShake direction; // r1+0x14
        enum ePad pad; // r1+0x18
    }
    {
        // Range: 0x801A0A24 -> 0x801A0A5C
        // Local variables
        unsigned int count; // r1+0x8
        enum ePad pad; // r1+0xC
    }

    // References
    // -> static enum Action miscactionMap[16];
    // -> class GestureData WiiGestureMap[40];
}
// Range: 0x801A0A80 -> 0x801A0AA0
void zUpContextAction::Clean() {
}
// Range: 0x801A0AA0 -> 0x801A0AF0
void zUpContextActionManager::SceneExit(class zUpContextActionManager * this /* r31 */) {
}
// Range: 0x801A0AF0 -> 0x801A0E14
void zUpContextActionManager::SceneSetup(class zUpContextActionManager * this /* r26 */) {
    // Local variables
    class xEntAsset * asset; // r0
    int overrideCount; // r0

    {
        // Range: 0x801A0C20 -> 0x801A0DDC
        // Local variables
        int i; // r27

        {
            // Range: 0x801A0C20 -> 0x801A0DDC
            // Local variables
            int actionsLen; // r0
            class InputMappingAsset inputAsset; // r1+0x30

            {
                // Range: 0x801A0C20 -> 0x801A0DDC
                // Local variables
                int i; // r26

                {
                    // Range: 0x801A0C20 -> 0x801A0DDC
                    // Local variables
                    unsigned char action; // r6

                    {
                        // Range: 0x801A0C20 -> 0x801A0C20
                        // Local variables
                        class Button buttonStruct; // r1+0x8
                    }
                    {
                        // Range: 0x801A0C20 -> 0x801A0C24
                        // Local variables
                        float angle; // f1
                        class Tilt tiltStruct; // r1+0x28
                    }
                    {
                        // Range: 0x801A0C24 -> 0x801A0D70
                        // Local variables
                        float magnitude; // f1
                        enum ePadSwing direction; // r5
                        enum ePad pad; // r4
                        class Swing swingStruct; // r1+0x20
                    }
                    {
                        // Range: 0x801A0D74 -> 0x801A0D9C
                        // Local variables
                        float speed; // f1
                        class ShakeSpeed shakeStruct; // r1+0x18
                    }
                    {
                        // Range: 0x801A0DA0 -> 0x801A0DDC
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
// Range: 0x801A0E20 -> 0x801A0E50
void zUpContextActionManager::SceneReset() {
    {
        // Range: 0x801A0E2C -> 0x801A0E44
        // Local variables
        int i; // r0
    }
}
// Range: 0x801A0E50 -> 0x801A0E78
void zUpContextActionManager::CollectionBegin() {
    {
        // Range: 0x801A0E5C -> 0x801A0E74
        // Local variables
        int i; // r0
    }
}
// Range: 0x801A0E80 -> 0x801A0ED8
class zUpContextAction * zUpContextActionManager::GetNextActionContext() {
    // Local variables
    class zUpContextAction * ca; // r31
}
// Range: 0x801A0EE0 -> 0x801A0F70
class zUpContextAction * zUpContextActionManager::GetFreeActivity(class zUpContextActionManager * this /* r29 */, class zPlayer * player /* r30 */, unsigned char clientID /* r31 */) {
    // Local variables
    class zUpContextAction * ca; // r3
}
// signature: zUpContextActionManager::GetFreePresence(zPlayer *)
// Range: 0x801A0F70 -> 0x801A0FA0
class zUpContextAction * zUpContextActionManager::GetFreePresence() {
    // Local variables
    class zUpContextAction * ca; // r3
}
// signature: zUpContextActionManager::CollectionEnd(zPlayer *)
// Range: 0x801A0FA0 -> 0x801A10A0
void zUpContextActionManager::CollectionEnd(class zUpContextActionManager * this /* r31 */) {
    // Local variables
    int highestPriority[3]; // r1+0x20
    class xVec3 srcPos; // r1+0x14

    {
        // Range: 0x801A1000 -> 0x801A1088
        // Local variables
        int actionIdx; // r28

        {
            // Range: 0x801A1000 -> 0x801A1088
            // Local variables
            int currentActionType; // r0

            {
                // Range: 0x801A1014 -> 0x801A1050
                // Local variables
                float radius2; // f0
                float dist2; // f0
            }
        }
    }
}
// Range: 0x801A10A0 -> 0x801A10C8
class zInteractionUP * zUpContextActionManager::IsInteractionNavigation() {
    // Local variables
    int actionIdx; // r0
}
// Range: 0x801A10D0 -> 0x801A10F8
class zInteractionUP * zUpContextActionManager::IsInteractionActivity() {
    // Local variables
    int actionIdx; // r0
}
// Range: 0x801A1100 -> 0x801A1128
class zInteractionUP * zUpContextActionManager::IsInteractionPresence() {
    // Local variables
    int actionIdx; // r0
}
// signature: zUpContextActionManager::EndContextCheck(zPlayer *)
// Range: 0x801A1130 -> 0x801A114C
void zUpContextActionManager::EndContextCheck() {
}
// Range: 0x801A1150 -> 0x801A11E0
void zUpContextActionManager::DisplayContextActionText(class zUpContextActionManager * this /* r29 */, enum eContextActionID actionID /* r30 */, class zPlayer * player /* r31 */) {
    {
        // Range: 0x801A1188 -> 0x801A11CC
        // Local variables
        class EventActionHudContextAction params; // r1+0x8
    }
}
