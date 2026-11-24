/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCStateMachine.cpp
*/
class zNPCStateTransEvent notHandledEventsFifoPool[4]; // size: 0x40, address: 0x80791F50
static class zNPCStateTransEventFIFO notHandledEventsFifo; // size: 0x14, address: 0x80791F90
// Range: 0x80130AB0 -> 0x80130B6C
void zNPCStateMachine::Update(class zNPCStateMachine * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class zNPCStateOld * state; // r31
}
// signature: zNPCStateMachine::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80130BA0 -> 0x80130BEC
bool zNPCStateMachine::SystemEvent() {
    // Local variables
    bool handled; // r0
}
// Range: 0x80130C00 -> 0x80130C2C
void zNPCStateMachine::Render(class zNPCStateMachine * this /* r4 */) {
}
// Range: 0x80130C40 -> 0x80130D54
void zNPCStateMachine::Attached(class zNPCStateMachine * this /* r31 */, class zNPCStatus * npcStatus /* r28 */) {
    // Local variables
    int initialStateEnum; // r0

    {
        // Range: 0x80130C70 -> 0x80130CA0
        // Local variables
        int i; // r29
    }
}
// Range: 0x80130D70 -> 0x80130E1C
void zNPCStateMachine::AllAttached(class zNPCStateMachine * this /* r31 */) {
}
// signature: zNPCStateMachine::Detached(zNPCStatus *)
// Range: 0x80130E20 -> 0x80130F64
void zNPCStateMachine::Detached(class zNPCStateMachine * this /* r31 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x80130F80 -> 0x80130FF4
void zNPCStateMachine::Reset(class zNPCStateMachine * this /* r30 */, class zNPCStatus * npcStatus /* r31 */) {
}
// Range: 0x80131000 -> 0x80131160
void zNPCStateMachine::AllocExtraData(class zNPCStateMachine * this /* r31 */) {
    {
        // Range: 0x8013107C -> 0x801310A8
        // Local variables
        int i; // r28
    }

    // References
    // -> class zFactory factory;
}
// Range: 0x80131170 -> 0x80131614
void zNPCStateMachine::HandleStateTransitions(class zNPCStateMachine * this /* r25 */) {
    // Local variables
    class zNPCStateTransEvent * curEvent; // r27
    int stateTransitionsNumber; // r26

    // References
    // -> static class zNPCStateTransEventFIFO notHandledEventsFifo;
}
// signature: zNPCStateMachine::HandleSwitch(zNPCStateOld *, zNPCStateOld *)
// Range: 0x80131620 -> 0x80131748
void zNPCStateMachine::HandleSwitch(class zNPCStateMachine * this /* r30 */, class zNPCStateOld * toState /* r31 */) {
    // Local variables
    class zNPCStateOld * oldCurStatePrev; // r4
}
// Range: 0x80131770 -> 0x80131894
void zNPCStateMachine::HandlePop(class zNPCStateMachine * this /* r28 */, class zNPCStateOld * fromState /* r29 */, enum eStatePopMsg popMsg /* r30 */, bool callResume /* r31 */) {
    // Local variables
    class zNPCStateOld * prevState; // r3
}
// Range: 0x801318B0 -> 0x801319D4
bool zNPCStateMachine::HandlePopStack(class zNPCStateMachine * this /* r27 */, class zNPCStateOld * callerState /* r28 */, class zNPCStateOld * toState /* r29 */, enum eStatePopMsg popMsg /* r30 */, bool callResume /* r31 */) {
    // Local variables
    class zNPCStateOld * state; // r8
    bool stateFound; // r0
}
// Range: 0x801319F0 -> 0x80131AE4
bool zNPCStateMachine::HandleSwitchChild(class zNPCStateMachine * this /* r29 */, class zNPCStateOld * parentState /* r30 */, class zNPCStateOld * newChildState /* r31 */) {
    // Local variables
    class zNPCStateOld * state; // r6
    bool stateFound; // r0
}
// signature: zNPCStateMachine::HandlePush(zNPCStateOld *, zNPCStateOld *, bool)
// Range: 0x80131AF0 -> 0x80131CB4
void zNPCStateMachine::HandlePush(class zNPCStateMachine * this /* r29 */, class zNPCStateOld * fromState /* r30 */, class zNPCStateOld * toState /* r31 */) {
    {
        // Range: 0x80131B34 -> 0x80131BEC
        // Local variables
        int fromStatePriority; // r6
        int toStateEnum; // r10
        int fromStateEnum; // r9
    }
}
// signature: zNPCAssertState::Update(zNPCBase *, float)
// Range: 0x80131CD0 -> 0x80131CD4
void zNPCAssertState::Update() {
}
