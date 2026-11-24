/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBTAction.cpp
*/
class zBTActionAlwaysComplete gActionAlwaysComplete; // size: 0x10, address: 0x8081A4F0
class zBTActionAlwaysFail gActionAlwaysFail; // size: 0x10, address: 0x8081A500
// signature: zBTActionSendEvent::Update(float)
// Range: 0x800B6160 -> 0x800B6790
enum eTaskState zBTActionSendEvent::Update(class zBTActionSendEvent * this /* r29 */) {
    // Local variables
    class Action_SendEvent * asset; // r31
    class xBase * sendFrom; // r30
    class xBase * sendTo; // r5

    {
        // Range: 0x800B61E4 -> 0x800B6590
        // Local variables
        enum eVarType type; // r9

        {
            // Range: 0x800B6280 -> 0x800B6314
            // Local variables
            class xBase * ptr; // r6
        }
        {
            // Range: 0x800B6314 -> 0x800B63AC
            // Local variables
            class xMovePoint * ptr; // r6
        }
        {
            // Range: 0x800B6464 -> 0x800B64FC
            // Local variables
            class zInteractionUP * ptr; // r6
        }
        {
            // Range: 0x800B64FC -> 0x800B6590
            // Local variables
            class zPlayer * ptr; // r6
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800B6790 -> 0x800B67FC
void zBTActionHandleEvent::Begin() {
}
// signature: zBTActionHandleEvent::Update(float)
// Range: 0x800B6830 -> 0x800B6838
enum eTaskState zBTActionHandleEvent::Update() {
}
// Range: 0x800B6840 -> 0x800B68B8
void zBTActionHandleEvent::Cleanup() {
}
// signature: zBTActionHandleEvent::ReceiveEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800B68C0 -> 0x800B6C10
bool zBTActionHandleEvent::ReceiveEvent(class zBTActionHandleEvent * this /* r28 */, unsigned int toEvent /* r29 */, class EventAny * params /* r30 */) {
    // Local variables
    class Action_HandleEvent * asset; // r31

    {
        // Range: 0x800B68E0 -> 0x800B6BF8
        // Local variables
        enum eVarType varType; // r3
        unsigned int varID; // r0

        {
            // Range: 0x800B6A2C -> 0x800B6AE8
            // Local variables
            class zPlayer * player; // r0
        }
    }
}
// signature: zBTActionWriteVariable::Update(float)
// Range: 0x800B6C10 -> 0x800B7148
enum eTaskState zBTActionWriteVariable::Update() {
    // Local variables
    unsigned int toVar; // r4

    {
        // Range: 0x800B6C88 -> 0x800B6D64
        // Local variables
        int val; // r11
    }
    {
        // Range: 0x800B6D64 -> 0x800B6E44
        // Local variables
        float val; // f0
    }
    {
        // Range: 0x800B6F20 -> 0x800B702C
        // Local variables
        int playerIndex; // r5
        class zPlayer * val; // r11
    }
    {
        // Range: 0x800B702C -> 0x800B712C
        // Local variables
        class xVec3 val; // r1+0x8
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zBTActionWriteVariable::WriteVariable(unsigned int, unsigned int)
// Range: 0x800B7150 -> 0x800B76FC
enum eTaskState zBTActionWriteVariable::WriteVariable() {
    {
        // Range: 0x800B72C0 -> 0x800B7420
        // Local variables
        int val; // r5
    }
    {
        // Range: 0x800B7420 -> 0x800B7580
        // Local variables
        float val; // f0
    }
    {
        // Range: 0x800B7580 -> 0x800B76E0
        // Local variables
        class zPlayer * val; // r5
    }
}
// signature: zBTActionWriteToBlackboard::Update(float)
// Range: 0x800B7700 -> 0x800B773C
enum eTaskState zBTActionWriteToBlackboard::Update() {
    // Local variables
    bool success; // r0
}
