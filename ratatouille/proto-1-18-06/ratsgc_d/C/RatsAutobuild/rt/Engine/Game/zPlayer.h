/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006314C -> 0x80063154
*/
// Range: 0x8006314C -> 0x80063154
// this: r3
struct xEntDrive * zPlayer::GetDrive() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CB0E8 -> 0x800CB18C
*/
// Range: 0x800CB0E8 -> 0x800CB0F4
// this: r3
unsigned char zPlayer::Get_humanPlayer() const {}

// Range: 0x800CB0F4 -> 0x800CB14C
// this: r30
unsigned char zPlayer::IsFloorColliding() const {}

// Range: 0x800CB14C -> 0x800CB174
// this: r1+0x8
unsigned char zPlayer::CollisionOn() const {}

// Range: 0x800CB174 -> 0x800CB180
// this: r3
unsigned char zPlayer::Get_collisionOn() const {}

// Range: 0x800CB180 -> 0x800CB18C
// this: r3
unsigned char zPlayer::Get_floor_collision() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010122C -> 0x80101234
*/
// Range: 0x8010122C -> 0x80101234
// this: r3
class zPad * zPlayer::GetPad() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80133118 -> 0x80133140
*/
// Range: 0x80133118 -> 0x80133140
// this: r1+0x8
struct zCombat * zPlayer::GetCombat() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013EEC4 -> 0x8013F158
*/
// Range: 0x8013EEC4 -> 0x8013EED4
// this: r3
void zPlayer::Clear_gravityDisabled() {}

// Range: 0x8013EED4 -> 0x8013EF0C
// this: r3
void zPlayer::Set_nearEnemy(unsigned char bSet /* r4 */) {}

// Range: 0x8013EF0C -> 0x8013EF14
// this: r3
struct xEnt * zPlayer::GetFloorEntity() const {}

// Range: 0x8013EF14 -> 0x8013EF3C
// this: r1+0x8
struct zCombat * zPlayer::GetCombat() const {}

// Range: 0x8013EF3C -> 0x8013EF44
// this: r3
unsigned int zPlayer::GetControlOff() const {}

// Range: 0x8013EF44 -> 0x8013EF90
// this: r31
unsigned char zPlayer::IsNearLedge() const {}

// Range: 0x8013EF90 -> 0x8013EF9C
// this: r3
unsigned char zPlayer::Get_gravityDisabled() const {}

// Range: 0x8013EF9C -> 0x8013EFE0
// this: r1+0x8
int zPlayer::GetMaximumHitPoints() const {
    // Local variables
    const struct zCombat * combat; // r31
}

// Range: 0x8013EFE0 -> 0x8013EFE8
// this: r3
struct xSurface * zPlayer::GetFloorSurface() const {}

// Range: 0x8013EFE8 -> 0x8013EFF4
// this: r3
unsigned char zPlayer::Get_defeated() const {}

// Range: 0x8013EFF4 -> 0x8013F004
// this: r3
void zPlayer::TurnControlOff(enum zControlOwner owner /* r4 */) {}

// Range: 0x8013F004 -> 0x8013F014
// this: r3
void zPlayer::TurnControlOn(enum zControlOwner owner /* r4 */) {}

// Range: 0x8013F014 -> 0x8013F020
// this: r3
unsigned char zPlayer::Get_nearEnemy() const {}

// Range: 0x8013F020 -> 0x8013F028
// this: r3
unsigned int * zPlayer::GetHitSoundsMap() const {}

// Range: 0x8013F028 -> 0x8013F06C
// this: r1+0x8
int zPlayer::GetCurrentHitPoints() const {
    // Local variables
    const struct zCombat * combat; // r31
}

// Range: 0x8013F06C -> 0x8013F074
// this: r3
struct xVec3 * zPlayer::GetFloorPosition() const {}

// Range: 0x8013F074 -> 0x8013F07C
char * * zPlayer::GetBoneNames() {}

// Range: 0x8013F07C -> 0x8013F088
// this: r3
unsigned char zPlayer::Get_useBaseSphere() const {}

// Range: 0x8013F088 -> 0x8013F090
unsigned char zPlayer::IsSwimming() {}

// Range: 0x8013F090 -> 0x8013F0A0
// this: r3
unsigned char zPlayer::IsControlOn() const {}

// Range: 0x8013F0A0 -> 0x8013F0A8
// this: r3
struct xVec3 & zPlayer::GetFloorNormal() const {}

// Range: 0x8013F0A8 -> 0x8013F0D0
// this: r1+0x8
unsigned char zPlayer::WasRendered() const {}

// Range: 0x8013F0D0 -> 0x8013F0DC
// this: r3
unsigned char zPlayer::Get_wasRendered() const {}

// Range: 0x8013F0DC -> 0x8013F0E4
struct xEnt * zPlayer::GetCarriedEntity() {}

// Range: 0x8013F0E4 -> 0x8013F0EC
int * zPlayer::GetHeadBones() {}

// Range: 0x8013F0EC -> 0x8013F0F0
void zPlayer::SetCamera() {}

// Range: 0x8013F0F0 -> 0x8013F0F8
unsigned char zPlayer::NeedsIncrediPower() {}

// Range: 0x8013F0F8 -> 0x8013F0FC
void zPlayer::GiveIncrediPower() {}

// Range: 0x8013F0FC -> 0x8013F100
void zPlayer::TakeIncrediPower() {}

// Range: 0x8013F100 -> 0x8013F108
float zPlayer::GetScreenFadeTime() {}

// Range: 0x8013F108 -> 0x8013F110
float zPlayer::StartScreenFadeAt() {}

// Range: 0x8013F110 -> 0x8013F118
unsigned char zPlayer::CollideWithNPC() {}

// Range: 0x8013F118 -> 0x8013F11C
void zPlayer::ReactiveAnimationCollided() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80146914 -> 0x8014691C
*/
// Range: 0x80146914 -> 0x8014691C
// this: r3
class zPlayerInput & zPlayer::GetPlayerInput() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80171F84 -> 0x80172070
*/
// Range: 0x80171F84 -> 0x8017201C
// this: r1+0x8
void zPlayer::ResetStats() {}

// Range: 0x80172068 -> 0x80172070
// this: r3
void zPlayer::SetLorezModelID(unsigned int id /* r4 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80184D74 -> 0x80184D84
*/
// Range: 0x80184D74 -> 0x80184D84
// this: r3
void zPlayer::Set_gravityDisabled() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80193B44 -> 0x80193B44
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019E250 -> 0x8019E6A0
*/
// Range: 0x8019E250 -> 0x8019E260
// this: r3
void zPlayer::Clear_switch_to_slide() {}

// Range: 0x8019E260 -> 0x8019E298
// this: r3
void zPlayer::Set_visible(unsigned char bSet /* r4 */) {}

// Range: 0x8019E298 -> 0x8019E2A8
// this: r3
void zPlayer::Set_collisionOn() {}

// Range: 0x8019E2A8 -> 0x8019E2E0
// this: r3
void zPlayer::Set_reflect(unsigned char bSet /* r4 */) {}

// Range: 0x8019E2E0 -> 0x8019E318
// this: r3
void zPlayer::Set_refract(unsigned char bSet /* r4 */) {}

// Range: 0x8019E318 -> 0x8019E328
// this: r3
void zPlayer::Clear_cutsceneReady() {}

// Range: 0x8019E328 -> 0x8019E360
// this: r3
void zPlayer::Set_wasUpdated(unsigned char bSet /* r4 */) {}

// Range: 0x8019E360 -> 0x8019E398
// this: r3
void zPlayer::Set_wasRendered(unsigned char bSet /* r4 */) {}

// Range: 0x8019E398 -> 0x8019E3D0
// this: r3
void zPlayer::Set_humanPlayer(unsigned char bSet /* r4 */) {}

// Range: 0x8019E3D0 -> 0x8019E408
// this: r3
void zPlayer::Set_cameraFocus(unsigned char bSet /* r4 */) {}

// Range: 0x8019E408 -> 0x8019E414
// this: r3
unsigned char zPlayer::Get_walkingOn() const {}

// Range: 0x8019E414 -> 0x8019E424
// this: r3
void zPlayer::Set_floor_collision() {}

// Range: 0x8019E424 -> 0x8019E430
// this: r3
unsigned char zPlayer::Get_visible() const {}

// Range: 0x8019E430 -> 0x8019E434
void zPlayer::ResetHealth() {}

// Range: 0x8019E434 -> 0x8019E444
// this: r3
void zPlayer::Clear_floor_collision() {}

// Range: 0x8019E444 -> 0x8019E47C
// this: r3
void zPlayer::Set_navMeshCollision(unsigned char bSet /* r4 */) {}

// Range: 0x8019E47C -> 0x8019E4B4
// this: r3
void zPlayer::Set_useBaseSphere(unsigned char bSet /* r4 */) {}

// Range: 0x8019E4B4 -> 0x8019E4EC
// this: r3
void zPlayer::Set_defeated(unsigned char bSet /* r4 */) {}

// Range: 0x8019E4EC -> 0x8019E524
// this: r3
void zPlayer::Set_settlePass(unsigned char bSet /* r4 */) {}

// Range: 0x8019E524 -> 0x8019E55C
// this: r3
void zPlayer::Set_cameraOverrideFocus(unsigned char bSet /* r4 */) {}

// Range: 0x8019E55C -> 0x8019E594
// this: r3
void zPlayer::Set_nearEnemyPrevious(unsigned char bSet /* r4 */) {}

// Range: 0x8019E594 -> 0x8019E5A0
// this: r3
unsigned char zPlayer::Get_nearEnemyPrevious() const {}

// Range: 0x8019E5A0 -> 0x8019E5A8
unsigned char zPlayer::CanTakeDamage() {}

// Range: 0x8019E5A8 -> 0x8019E5B4
// this: r3
unsigned char zPlayer::Get_settlePass() const {}

// Range: 0x8019E5B4 -> 0x8019E5BC
// this: r3
unsigned char zPlayer::IsCheating() const {}

// Range: 0x8019E5BC -> 0x8019E5CC
// this: r3
void zPlayer::Set_floor_interior() {}

// Range: 0x8019E5CC -> 0x8019E5DC
// this: r3
void zPlayer::Clear_collision_underneath() {}

// Range: 0x8019E5DC -> 0x8019E5EC
// this: r3
void zPlayer::Set_collision_underneath() {}

// Range: 0x8019E5EC -> 0x8019E5FC
// this: r3
void zPlayer::Clear_floor_is_npc() {}

// Range: 0x8019E5FC -> 0x8019E60C
// this: r3
void zPlayer::Set_floor_is_npc() {}

// Range: 0x8019E60C -> 0x8019E61C
// this: r3
void zPlayer::Clear_floor_interior() {}

// Range: 0x8019E61C -> 0x8019E628
// this: r3
unsigned char zPlayer::Get_collision_underneath() const {}

// Range: 0x8019E628 -> 0x8019E634
// this: r3
unsigned char zPlayer::Get_navMeshCollision() const {}

// Range: 0x8019E634 -> 0x8019E638
void zPlayer::RegisterCollision() {}

// Range: 0x8019E638 -> 0x8019E640
// this: r3
struct xModelInstance * zPlayer::GetHirezModel() const {}

// Range: 0x8019E640 -> 0x8019E648
// this: r3
struct xModelInstance * zPlayer::GetLorezModel() const {}

// Range: 0x8019E648 -> 0x8019E654
// this: r3
unsigned char zPlayer::Get_cameraOverrideFocus() const {}

// Range: 0x8019E654 -> 0x8019E660
// this: r3
unsigned char zPlayer::Get_cameraFocus() const {}

// Range: 0x8019E660 -> 0x8019E668
unsigned char zPlayer::AllowInteraction() {}

// Range: 0x8019E668 -> 0x8019E66C
void zPlayer::AttackHit() {}

// Range: 0x8019E66C -> 0x8019E670
void zPlayer::DefaultMove() {}

// Range: 0x8019E670 -> 0x8019E674
void zPlayer::Save() {}

// Range: 0x8019E674 -> 0x8019E678
void zPlayer::Load() {}

// Range: 0x8019E678 -> 0x8019E67C
void zPlayer::PostRenderCleanup() {}

// Range: 0x8019E67C -> 0x8019E680
void zPlayer::RenderCustomUI() {}

// Range: 0x8019E680 -> 0x8019E684
void zPlayer::GiveHealth() {}

// Range: 0x8019E684 -> 0x8019E68C
unsigned char zPlayer::NeedsHealth() {}

// Range: 0x8019E68C -> 0x8019E694
unsigned char zPlayer::IsVisible() {}

// Range: 0x8019E694 -> 0x8019E69C
unsigned char zPlayer::IsInteractioning() {}

// Range: 0x8019E69C -> 0x8019E6A0
void zPlayer::AddTransitions() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019F224 -> 0x8019F240
*/
// Range: 0x8019F224 -> 0x8019F234
// this: r3
void zPlayer::Set_cutsceneReady() {}

// Range: 0x8019F234 -> 0x8019F240
// this: r3
unsigned char zPlayer::Get_cutsceneReady() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B33F8 -> 0x801B33F8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D15C8 -> 0x801D15C8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E64C4 -> 0x801E64C4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80205A68 -> 0x80205A68
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021ADEC -> 0x8021ADEC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021D154 -> 0x8021D154
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026541C -> 0x8026541C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026EFD8 -> 0x8026EFFC
*/
// Range: 0x8026EFD8 -> 0x8026EFE4
// this: r3
unsigned char zPlayer::Get_floor_is_npc() const {}

// Range: 0x8026EFE4 -> 0x8026EFEC
// this: r3
float zPlayer::GetFallingTime() {}

// Range: 0x8026EFEC -> 0x8026EFFC
// this: r3
void zPlayer::Clear_collisionOn() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80271A1C -> 0x80271A1C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80297060 -> 0x80297060
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029CFCC -> 0x8029CFCC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A4564 -> 0x802A4564
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A6B80 -> 0x802A6B80
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A9D40 -> 0x802A9D40
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B22D4 -> 0x802B22D4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B33FC -> 0x802B3404
*/
// Range: 0x802B33FC -> 0x802B3404
// this: r3
struct zPlayerCheckPoint & zPlayer::GetCheckPoint() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BE158 -> 0x802BE158
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C9220 -> 0x802C9220
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CA8E8 -> 0x802CA8E8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CDA84 -> 0x802CDA84
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D18C8 -> 0x802D18C8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D5B80 -> 0x802D5B80
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D6C78 -> 0x802D6C80
*/
// Range: 0x802D6C78 -> 0x802D6C80
// this: r3
float zPlayer::GetPredictedVelocityMag() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802DE614 -> 0x802DE614
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E27A4 -> 0x802E27A4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E7EB8 -> 0x802E7EB8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E97BC -> 0x802E97BC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F4078 -> 0x802F4078
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F7C18 -> 0x802F7C18
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FBEA0 -> 0x802FBEA0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80304CD0 -> 0x80304CD0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030A7EC -> 0x8030A7EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030D5FC -> 0x8030D5FC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031C420 -> 0x8031C420
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031EE40 -> 0x8031EE7C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031FB84 -> 0x8031FBB4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80328BE8 -> 0x80328DA8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032B9B4 -> 0x8032B9F8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80335228 -> 0x80335228
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80335D84 -> 0x80335D84
*/

