/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBTAction.cpp
*/
class zBTActionAlwaysComplete gActionAlwaysComplete; // size: 0x10, address: 0x807311D0
class zBTActionAlwaysFail gActionAlwaysFail; // size: 0x10, address: 0x807311E0
// Range: 0x800780E0 -> 0x800780FC
void * zBTAction::zBTAction() {
    // References
    // -> struct {} __vt__9zBTAction;
}
// signature: zBTActionSendEvent::Update(float)
// Range: 0x80078100 -> 0x80078404
enum eTaskState zBTActionSendEvent::Update(class zBTActionSendEvent * this /* r28 */) {
    // Local variables
    class Action_SendEvent * asset; // r31
    class xBase * sendFrom; // r30
    class xBase * sendTo; // r29

    {
        // Range: 0x80078178 -> 0x80078334
        // Local variables
        enum eVarType type; // r0

        {
            // Range: 0x800781C8 -> 0x8007821C
            // Local variables
            class xBase * ptr; // r28
        }
        {
            // Range: 0x8007821C -> 0x80078278
            // Local variables
            class xMovePoint * ptr; // r28
        }
        {
            // Range: 0x80078278 -> 0x800782B8
            // Local variables
            class uid suid; // r1+0x10
        }
        {
            // Range: 0x800782B8 -> 0x80078314
            // Local variables
            class zInteractionUP * ptr; // r28
        }
        {
            // Range: 0x80078314 -> 0x80078334
            // Local variables
            class zPlayer * ptr; // r1+0xC
        }
    }
}
// Range: 0x80078430 -> 0x8007847C
void zBTActionHandleEvent::Begin(class zBTActionHandleEvent * this /* r31 */) {
}
// signature: zBTActionHandleEvent::Update(float)
// Range: 0x800784B0 -> 0x800784B8
enum eTaskState zBTActionHandleEvent::Update() {
}
// Range: 0x800784C0 -> 0x800784D0
void zBTActionHandleEvent::Cleanup(class zBTActionHandleEvent * this /* r4 */) {
}
// Range: 0x800784D0 -> 0x80078694
bool zBTActionHandleEvent::ReceiveEvent(class zBTActionHandleEvent * this /* r30 */, class xBase * from /* r28 */, unsigned int toEvent /* r25 */, class EventAny * params /* r26 */) {
    // Local variables
    class Action_HandleEvent * asset; // r31

    {
        // Range: 0x800784F4 -> 0x8007867C
        // Local variables
        class zVariableEventData toWrite; // r1+0x10
        enum eVarType varType; // r0
        unsigned int varID; // r27

        {
            // Range: 0x800785A8 -> 0x800785CC
            // Local variables
            class zPlayer * player; // r1+0xC
        }
    }
}
// signature: zBTActionWriteVariable::Update(float)
// Range: 0x80078710 -> 0x8007889C
enum eTaskState zBTActionWriteVariable::Update() {
    // Local variables
    unsigned int toVar; // r4

    {
        // Range: 0x80078780 -> 0x800787A8
        // Local variables
        int val; // r1+0x14
    }
    {
        // Range: 0x800787A8 -> 0x800787D0
        // Local variables
        float val; // r1+0x10
    }
    {
        // Range: 0x800787D0 -> 0x800787F8
        // Local variables
        int val; // r1+0xC
    }
    {
        // Range: 0x800787F8 -> 0x80078850
        // Local variables
        int playerIndex; // r6
        class zPlayer * val; // r1+0x8
    }
    {
        // Range: 0x80078850 -> 0x80078888
        // Local variables
        class xVec3 val; // r1+0x18
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800788A0 -> 0x80078A30
enum eTaskState zBTActionWriteVariable::WriteVariable(unsigned int toVar /* r28 */, unsigned int fromVar /* r29 */) {
    {
        // Range: 0x8007894C -> 0x80078990
        // Local variables
        int val; // r1+0x10
    }
    {
        // Range: 0x80078990 -> 0x800789D4
        // Local variables
        float val; // r1+0xC
    }
    {
        // Range: 0x800789D4 -> 0x80078A18
        // Local variables
        class zPlayer * val; // r1+0x8
    }
}
// signature: zBTActionWriteToBlackboard::Update(float)
// Range: 0x80078A30 -> 0x80078A6C
enum eTaskState zBTActionWriteToBlackboard::Update() {
    // Local variables
    bool success; // r0
}
