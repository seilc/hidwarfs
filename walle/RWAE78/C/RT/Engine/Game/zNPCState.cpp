/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCState.cpp
*/
class zNPCStateResult NotDone; // size: 0x4, address: 0x80791F04
class zNPCStateResult Done; // size: 0x4, address: 0x80791F08
class zNPCStateResult Success; // size: 0x4, address: 0x80791F0C
class zNPCStateResult Fail; // size: 0x4, address: 0x80791F10
class zNPCStateResult ControlForced; // size: 0x4, address: 0x80791F14
class zNPCStateResult Perceived; // size: 0x4, address: 0x80791F18
class zNPCStateResult Arrived; // size: 0x4, address: 0x80791F1C
class zNPCStateResult Reachable; // size: 0x4, address: 0x80791F20
class zNPCStateResult NotReachable; // size: 0x4, address: 0x80791F24
class zNPCStateResult Chargable; // size: 0x4, address: 0x80791F28
class zNPCStateResult NotChargable; // size: 0x4, address: 0x80791F2C
class zNPCStateResult Visible; // size: 0x4, address: 0x80791F30
class zNPCStateResult NotVisible; // size: 0x4, address: 0x80791F34
class zNPCStateResult Attackable; // size: 0x4, address: 0x80791F38
class zNPCStateResult NotAttackable; // size: 0x4, address: 0x80791F3C
class zNPCStateResult TimerDone; // size: 0x4, address: 0x80791F40
class zNPCStateResult AnimDone; // size: 0x4, address: 0x80791F44
class zNPCStateResult Damaged; // size: 0x4, address: 0x80791F48
class zNPCStateResult Killed; // size: 0x4, address: 0x80791F4C
// signature: zNPCState::LeakCB(void *, int)
// Range: 0x8012F7A0 -> 0x8012F7A4
void zNPCState::LeakCB() {
}
// Range: 0x8012F7B0 -> 0x8012F820
class zNPCStateResult zNPCAction::Update(class zNPCAction * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x8012F840 -> 0x8012F88C
void zNPCAction::Exit(class zNPCAction * this /* r31 */) {
}
// Range: 0x8012F890 -> 0x8012F8DC
void zNPCAction::Paused(class zNPCAction * this /* r31 */) {
}
// Range: 0x8012F8E0 -> 0x8012F980
void zNPCFSMControl::Exit(class zNPCFSMControl * this /* r30 */) {
    // References
    // -> class zFactory factory;
}
// signature: zNPCFSMControl::PopChild(zNPCState *, zNPCStateResult)
// Range: 0x8012F990 -> 0x8012FA78
class zNPCStateResult zNPCFSMControl::PopChild(class zNPCFSMControl * this /* r27 */, class zNPCStateResult * childStateResult /* r28 */) {
    // Local variables
    int oldChildID; // r29

    // References
    // -> class zFactory factory;
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCFSMControl::PushChild(zNPCState *, int)
// Range: 0x8012FA90 -> 0x8012FB54
class zNPCStateResult zNPCFSMControl::PushChild(class zNPCFSMControl * this /* r31 */) {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x8012FB70 -> 0x8012FC20
class zNPCStateResult zNPCFSMControl::Update(class zNPCFSMControl * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCFSMControl::GetChildState(int)
// Range: 0x8012FC40 -> 0x8012FC5C
class zNPCState * zNPCFSMControl::GetChildState() {
}
// signature: zNPCFSMControl::GetChildID(zNPCState *)
// Range: 0x8012FC60 -> 0x8012FC7C
int zNPCFSMControl::GetChildID() {
}
// Range: 0x8012FC80 -> 0x8012FC88
class zNPCState * zNPCFSMControl::GetCurChildState() {
}
// Range: 0x8012FC90 -> 0x8012FCAC
int zNPCFSMControl::GetCurChildID() {
}
// Range: 0x8012FCB0 -> 0x8012FD14
void zNPCFSMControl::Paused(class zNPCFSMControl * this /* r31 */) {
}
// Range: 0x8012FD30 -> 0x8012FD94
void zNPCFSMControl::Resumed(class zNPCFSMControl * this /* r31 */) {
}
// signature: zNPCFSMControl::NPCGetsDamage(const zNPCGetsDamageInfo &)
// Range: 0x8012FDB0 -> 0x8012FE38
class zNPCStateResult zNPCFSMControl::NPCGetsDamage(class zNPCFSMControl * this /* r31 */) {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCFSMControl::NPCGivesDamage(const zNPCGivesDamageInfo &)
// Range: 0x8012FE50 -> 0x8012FED8
class zNPCStateResult zNPCFSMControl::NPCGivesDamage(class zNPCFSMControl * this /* r31 */) {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCFSMControl::EventProc(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8012FEF0 -> 0x8012FF78
class zNPCStateResult zNPCFSMControl::EventProc(class zNPCFSMControl * this /* r31 */) {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x8012FF90 -> 0x8013005C
class zNPCStateResult zNPCPushPopControl::Update(class zNPCPushPopControl * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class zNPCState * curChild; // r31

    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x80130070 -> 0x80130130
void zNPCPushPopControl::Exit(class zNPCPushPopControl * this /* r27 */) {
    {
        // Range: 0x80130084 -> 0x80130110
        // Local variables
        class zNPCState * curChild; // r28
    }

    // References
    // -> class zFactory factory;
}
// Range: 0x80130130 -> 0x801303A4
class zNPCStateResult zNPCPushPopControl::PopChild(class zNPCPushPopControl * this /* r29 */, class zNPCState * childState /* r30 */, class zNPCStateResult * childStateResult /* r31 */) {
    {
        // Range: 0x8013017C -> 0x801302A4
        // Local variables
        int childStateID; // r28
    }
    {
        // Range: 0x801302A4 -> 0x801302A8
        {
            // Range: 0x801302A4 -> 0x801302A8
            {
                // Range: 0x801302A8 -> 0x801302A8
                // Local variables
                int curChildID; // r28
            }
        }
    }

    // References
    // -> class zFactory factory;
    // -> class zNPCStateResult NotDone;
}
// Range: 0x801303C0 -> 0x8013050C
class zNPCStateResult zNPCPushPopControl::PushChild(class zNPCPushPopControl * this /* r29 */, class zNPCState * childState /* r30 */, int childStateID /* r31 */) {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCPushPopControl::GetChildState(int)
// Range: 0x80130510 -> 0x80130548
class zNPCState * zNPCPushPopControl::GetChildState() {
}
// signature: zNPCPushPopControl::GetChildID(zNPCState *)
// Range: 0x80130550 -> 0x80130588
int zNPCPushPopControl::GetChildID() {
}
// Range: 0x80130590 -> 0x801305B0
class zNPCState * zNPCPushPopControl::GetCurChildState() {
}
// Range: 0x801305B0 -> 0x801305D0
int zNPCPushPopControl::GetCurChildID() {
}
// Range: 0x801305D0 -> 0x80130634
void zNPCPushPopControl::Paused(class zNPCPushPopControl * this /* r31 */) {
}
// Range: 0x80130640 -> 0x801306A4
void zNPCPushPopControl::Resumed(class zNPCPushPopControl * this /* r31 */) {
}
// Range: 0x801306B0 -> 0x80130760
class zNPCStateResult zNPCPushPopControl::NPCGetsDamage(class zNPCPushPopControl * this /* r28 */, class zNPCGetsDamageInfo * npcDamageInfo /* r29 */) {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x80130760 -> 0x80130810
class zNPCStateResult zNPCPushPopControl::NPCGivesDamage(class zNPCPushPopControl * this /* r28 */, class zNPCGivesDamageInfo * npcDamageInfo /* r29 */) {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x80130810 -> 0x801308C0
class zNPCStateResult zNPCPushPopControl::EventProc(class zNPCPushPopControl * this /* r25 */, class xBase * from /* r26 */, class xBase * to /* r27 */, unsigned int to_event /* r28 */, class EventAny * params /* r29 */) {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x801308C0 -> 0x801308D8
class zNPCStateResult zNPCStateDecorator::Enter() {
}
// signature: zNPCStateDecorator::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x801308E0 -> 0x801308E8
class zNPCStateResult zNPCStateDecorator::ChildDone() {
}
// signature: zNPCMainStateHandler::Update(float)
// Range: 0x801308F0 -> 0x80130904
void zNPCMainStateHandler::Update() {
}
// signature: zNPCMainStateHandler::NPCGetsDamage(const zNPCGetsDamageInfo &)
// Range: 0x80130910 -> 0x80130924
void zNPCMainStateHandler::NPCGetsDamage() {
}
// signature: zNPCMainStateHandler::NPCGivesDamage(const zNPCGivesDamageInfo &)
// Range: 0x80130930 -> 0x80130944
void zNPCMainStateHandler::NPCGivesDamage() {
}
// signature: zNPCMainStateHandler::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80130950 -> 0x80130984
bool zNPCMainStateHandler::SystemEvent() {
}
// Range: 0x80130990 -> 0x80130A04
void zNPCMainStateHandler::AllAttached(class zNPCMainStateHandler * this /* r31 */) {
}
// signature: zNPCMainStateHandler::Detached(zNPCStatus *)
// Range: 0x80130A10 -> 0x80130AA4
void zNPCMainStateHandler::Detached(class zNPCMainStateHandler * this /* r30 */) {
    // References
    // -> class zFactory factory;
}
