/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPlayer.h
*/
// signature: zPlayer::AllowInteraction(zInteraction *)
// Range: 0x801DA480 -> 0x801DA488
bool zPlayer::AllowInteraction() {
}
// signature: zPlayer::AttackHit(const xVec3 &, bool)
// Range: 0x800B03A0 -> 0x800B03A4
void zPlayer::AttackHit() {
}
// signature: zPlayer::DefaultMove(xScene *, float, xEntFrame *)
// Range: 0x800BA960 -> 0x800BA964
void zPlayer::DefaultMove() {
}
// Range: 0x800CCF20 -> 0x800CCF2C
bool zPlayer::WasRendered() const {
}
// signature: zPlayer::Save(xSerial *)
// Range: 0x801B61A0 -> 0x801B61A4
void zPlayer::Save() {
}
// signature: zPlayer::Load(xSerial *)
// Range: 0x801B7190 -> 0x801B7194
void zPlayer::Load() {
}
// Range: 0x800CCF10 -> 0x800CCF18
bool zPlayer::HasOwnEntDrive() const {
}
// Range: 0x800CCF00 -> 0x800CCF08
class xEnt * zPlayer::GetCarriedEntity() {
}
// signature: zPlayer::ShouldDepenObject(xBase *)
// Range: 0x801DA470 -> 0x801DA478
bool zPlayer::ShouldDepenObject() {
}
// Range: 0x800CCEF0 -> 0x800CCEF8
int * zPlayer::GetHeadBones() {
}
// Range: 0x801DA460 -> 0x801DA464
void zPlayer::PostRenderCleanup() {
}
// Range: 0x801DA450 -> 0x801DA454
void zPlayer::RenderCustomUI() {
}
// Range: 0x801DA440 -> 0x801DA448
bool zPlayer::CanTakeDamage() const {
}
// Range: 0x8008D1E0 -> 0x8008D1E8
class xCam * zPlayer::GetDefaultCamera() {
}
// Range: 0x8008D6C0 -> 0x8008D6C4
void zPlayer::SetupFirstPersonCam() {
}
// Range: 0x800A13D0 -> 0x800A13D8
bool zPlayer::FirstPersonCamZoomAllowed() {
}
// signature: zPlayer::GiveHealth(float, bool)
// Range: 0x801DA430 -> 0x801DA434
void zPlayer::GiveHealth() {
}
// Range: 0x8016F5A0 -> 0x8016F5A4
void zPlayer::ResetHealth() {
}
// Range: 0x800C6120 -> 0x800C6128
bool zPlayer::NeedsHealth() const {
}
// Range: 0x800C93E0 -> 0x800C93E8
class xVec3 * zPlayer::GetFloorNormal() const {
}
// Range: 0x800CCEE0 -> 0x800CCEE8
class xVec3 * zPlayer::GetFloorNormalPtr() {
}
// Range: 0x80057520 -> 0x80057540
bool zPlayer::IsFloorColliding() const {
}
// signature: zPlayer::SetFloorEntity(xEnt *)
// Range: 0x80174580 -> 0x80174588
void zPlayer::SetFloorEntity() {
}
// Range: 0x800B3C20 -> 0x800B3C28
class xVec3 * zPlayer::GetFloorPosition() const {
}
// Range: 0x801EE410 -> 0x801EE418
class hkpRigidBody * zPlayer::GetRigidBody() {
}
// Range: 0x8018D910 -> 0x8018D918
class hkpCharacterProxy * zPlayer::GetCharacterProxy() {
}
// Range: 0x801EE4E0 -> 0x801EE4E8
class hkpShapePhantom * zPlayer::GetPhantomObject() {
}
// Range: 0x800CCED0 -> 0x800CCED8
class zNPCBase * zPlayer::GetSlaveNPC() {
}
// Range: 0x800E5190 -> 0x800E51A0
bool zPlayer::IsWallePlayer() {
}
// Range: 0x800B44A0 -> 0x800B44A8
char * * zPlayer::GetBoneNames() const {
}
// Range: 0x801DA420 -> 0x801DA428
bool zPlayer::IsVisible() const {
}
// Range: 0x801F7C30 -> 0x801F7C38
class zPlayerInput * zPlayer::GetPlayerInput() {
}
// Range: 0x800CCEC0 -> 0x800CCECC
float zPlayer::GetScreenFadeTime() {
}
// Range: 0x800CCEB0 -> 0x800CCEBC
float zPlayer::StartScreenFadeAt() {
}
// Range: 0x801DA410 -> 0x801DA418
bool zPlayer::IsInteractioning() {
}
// Range: 0x8016ED70 -> 0x8016ED80
void zPlayer::Set_floor_collision() {
}
// signature: zPlayer::Set_context_state(bool)
// Range: 0x801940B0 -> 0x801940D8
void zPlayer::Set_context_state() {
}
// Range: 0x80174590 -> 0x8017459C
bool zPlayer::Get_context_state() const {
}
// Range: 0x800AAFF0 -> 0x800AAFFC
bool zPlayer::Get_defeated() const {
}
// Range: 0x8016F590 -> 0x8016F5A0
void zPlayer::Clear_floor_collision() {
}
// Range: 0x80170680 -> 0x8017068C
bool zPlayer::Get_floor_collision() const {
}
// Range: 0x8008BC70 -> 0x8008BC78
bool zPlayer::IsCheating() const {
}
// Range: 0x8009D1C0 -> 0x8009D1C8
bool zPlayer::IsUnmounted() const {
}
// Range: 0x80197530 -> 0x80197538
enum zMGAwardState zPlayer::GetAwardState() {
}
// signature: zPlayer::AddTransitions(xAnimTable *)
// Range: 0x801DA400 -> 0x801DA404
void zPlayer::AddTransitions() {
}
// signature: zPlayer::RegisterCollision(const SphereCollisionResults &)
// Range: 0x801DA3F0 -> 0x801DA3F4
void zPlayer::RegisterCollision() {
}
// Range: 0x800CCEA0 -> 0x800CCEA8
bool zPlayer::CollideWithNPC() {
}
// Range: 0x800CCE90 -> 0x800CCE94
void zPlayer::ReactiveAnimationCollided() {
}
// signature: zPlayer::NotifyExitedPhantomTrig(TriggerPhantom *)
// Range: 0x800CCE80 -> 0x800CCE84
void zPlayer::NotifyExitedPhantomTrig() {
}
// signature: zPlayer::ImpartVelocity(xVec3)
// Range: 0x800B38E0 -> 0x800B3914
void zPlayer::ImpartVelocity() {
}
// signature: zPlayer::ImpartCharacterVelocity(xVec3)
// Range: 0x800CCE20 -> 0x800CCE78
void zPlayer::ImpartCharacterVelocity() {
}
// signature: zPlayer::ImpartImpulse(xVec3)
// Range: 0x800CCDE0 -> 0x800CCE14
void zPlayer::ImpartImpulse() {
}
// signature: zPlayer::ImpartForce(xVec3)
// Range: 0x800CCDA0 -> 0x800CCDD4
void zPlayer::ImpartForce() {
}
// Range: 0x801EC6C0 -> 0x801EC6E4
void zPlayer::ClearImpartedForce() {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80198640 -> 0x8019865C
class xVec3 zPlayer::GetImpartedVelocity() {
}
// Range: 0x80197550 -> 0x80197558
float zPlayer::GetMomentum() {
}
