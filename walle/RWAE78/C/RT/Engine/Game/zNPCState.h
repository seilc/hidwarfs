/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCState.h
*/
// Range: 0x800F1F50 -> 0x800F1F5C
enum eStateResultMsg zNPCStateResult::DoneMsg() {
}
// signature: zNPCStateResult::operator==(const zNPCStateResult &) const
// Range: 0x800F7810 -> 0x800F7828
bool zNPCStateResult::operator==() const {
}
// signature: zNPCState::Create<zNPCOneShotAnimAction>(const char *)
// Range: 0x800F3540 -> 0x800F3668
class zNPCOneShotAnimAction * zNPCState::Create<zNPCOneShotAnimAction>() {
    // References
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// signature: zNPCState::Create<zNPCSeekAction>(const char *)
// Range: 0x800F8390 -> 0x800F859C
class zNPCSeekAction * zNPCState::Create<zNPCSeekAction>() {
    // References
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__14zNPCSeekAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// signature: zNPCState::Create<zNPCMowbotCleanState>(const char *)
// Range: 0x80123000 -> 0x80123220
class zNPCMowbotCleanState * zNPCState::Create<zNPCMowbotCleanState>() {
    // References
    // -> struct {} __vt__20zNPCMowbotCleanState;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__14zNPCSeekAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x800F19F0 -> 0x800F19F8
class zNPCBase * zNPCState::GetNPCBase() {
}
// Range: 0x800F1BA0 -> 0x800F1BAC
class zNPCEntity * zNPCState::GetNPCEntity() {
}
// Range: 0x800F2F10 -> 0x800F2F1C
class zNPCPerception * zNPCState::GetNPCPerception() {
}
// Range: 0x800FAAF0 -> 0x800FAAFC
class zNPCCombat * zNPCState::GetNPCCombat() {
}
// Range: 0x8012FB60 -> 0x8012FB6C
class zNPCStateResult zNPCState::Enter() {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCState::Update(float)
// Range: 0x8012FC30 -> 0x8012FC3C
class zNPCStateResult zNPCState::Update() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x8012F980 -> 0x8012F984
void zNPCState::Exit() {
}
// Range: 0x800F2630 -> 0x800F2634
void zNPCState::Initialize() {
}
// Range: 0x800FC8F0 -> 0x800FC8F4
void zNPCState::Deinitialize() {
}
// Range: 0x8012FD20 -> 0x8012FD24
void zNPCState::Paused() {
}
// Range: 0x8012FDA0 -> 0x8012FDA4
void zNPCState::Resumed() {
}
// signature: zNPCState::NPCGetsDamage(const zNPCGetsDamageInfo &)
// Range: 0x8012FE40 -> 0x8012FE4C
class zNPCStateResult zNPCState::NPCGetsDamage() {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCState::NPCGivesDamage(const zNPCGivesDamageInfo &)
// Range: 0x8012FEE0 -> 0x8012FEEC
class zNPCStateResult zNPCState::NPCGivesDamage() {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCState::EventProc(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8012FF80 -> 0x8012FF8C
class zNPCStateResult zNPCState::EventProc() {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCControl::ControlUpdate(float)
// Range: 0x80152360 -> 0x8015236C
class zNPCStateResult zNPCControl::ControlUpdate() {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCControl::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x80152350 -> 0x8015235C
class zNPCStateResult zNPCControl::ChildDone() {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCControl::PopCurChild(zNPCStateResult)
// Range: 0x800F1A00 -> 0x800F1A5C
class zNPCStateResult zNPCControl::PopCurChild(class zNPCControl * this /* r31 */) {
}
// Range: 0x800FAB00 -> 0x800FAB0C
class zNPCStateResult zNPCAction::Enter() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x8012F820 -> 0x8012F824
void zNPCAction::Activate() {
}
// Range: 0x801245E0 -> 0x801245E4
void zNPCAction::Deactivate() {
}
// signature: zNPCAction::ActionUpdate(float)
// Range: 0x8012F830 -> 0x8012F83C
class zNPCStateResult zNPCAction::ActionUpdate() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x800F2F40 -> 0x800F2F44
void zNPCAction::Initialize() {
}
// Range: 0x80150670 -> 0x80150674
void zNPCAction::Deinitialize() {
}
// Range: 0x80150660 -> 0x80150664
void zNPCAction::Resumed() {
}
// signature: zNPCAction::NPCGetsDamage(const zNPCGetsDamageInfo &)
// Range: 0x80150650 -> 0x8015065C
class zNPCStateResult zNPCAction::NPCGetsDamage() {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCAction::NPCGivesDamage(const zNPCGivesDamageInfo &)
// Range: 0x80150640 -> 0x8015064C
class zNPCStateResult zNPCAction::NPCGivesDamage() {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCAction::EventProc(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80150630 -> 0x8015063C
class zNPCStateResult zNPCAction::EventProc() {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCFSMControl::ControlUpdate(float)
// Range: 0x8012FC20 -> 0x8012FC2C
class zNPCStateResult zNPCFSMControl::ControlUpdate() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x80152340 -> 0x8015234C
class zNPCStateResult zNPCFSMControl::Enter() {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCFSMControl::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x8012FA80 -> 0x8012FA8C
class zNPCStateResult zNPCFSMControl::ChildDone() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x800F2300 -> 0x800F2304
void zNPCFSMControl::Initialize() {
}
// Range: 0x80150890 -> 0x80150894
void zNPCFSMControl::Deinitialize() {
}
// signature: zNPCPushPopControl::ControlUpdate(float)
// Range: 0x80130060 -> 0x8013006C
class zNPCStateResult zNPCPushPopControl::ControlUpdate() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x80152330 -> 0x8015233C
class zNPCStateResult zNPCPushPopControl::Enter() {
    // References
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCPushPopControl::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x801303B0 -> 0x801303BC
class zNPCStateResult zNPCPushPopControl::ChildDone() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x80150980 -> 0x80150984
void zNPCPushPopControl::Initialize() {
}
// Range: 0x80150970 -> 0x80150974
void zNPCPushPopControl::Deinitialize() {
}
// signature: zNPCStateDecorator::ControlUpdate(float)
// Range: 0x80152320 -> 0x8015232C
class zNPCStateResult zNPCStateDecorator::ControlUpdate() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x80152310 -> 0x80152314
void zNPCStateDecorator::Initialize() {
}
// Range: 0x80152300 -> 0x80152304
void zNPCStateDecorator::Deinitialize() {
}
// signature: zNPCMainStateHandler::RegisterMainStateCreator(zNPCStateCreator *)
// Range: 0x801522F0 -> 0x801522F8
void zNPCMainStateHandler::RegisterMainStateCreator() {
}
// Range: 0x801522E0 -> 0x801522E8
class zNPCControl * zNPCMainStateHandler::GetMainControl() {
}
// signature: zNPCMainStateHandler::Attached(const zNPCStatus *)
// Range: 0x801522D0 -> 0x801522D4
void zNPCMainStateHandler::Attached() {
}
// signature: zNPCMainStateHandler::Reset(const zNPCStatus *)
// Range: 0x801522C0 -> 0x801522C4
void zNPCMainStateHandler::Reset() {
}
// signature: zNPCMainStateHandler::PreUpdate(float)
// Range: 0x801522B0 -> 0x801522B4
void zNPCMainStateHandler::PreUpdate() {
}
// signature: zNPCMainStateHandler::PostUpdate(float)
// Range: 0x801522A0 -> 0x801522A4
void zNPCMainStateHandler::PostUpdate() {
}
// Range: 0x80152290 -> 0x80152294
void zNPCMainStateHandler::Render() {
}
// Range: 0x80152280 -> 0x80152284
void zNPCMainStateHandler::Paused() {
}
// Range: 0x80152270 -> 0x80152274
void zNPCMainStateHandler::Resumed() {
}
