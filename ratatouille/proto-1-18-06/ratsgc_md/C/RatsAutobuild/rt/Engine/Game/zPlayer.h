/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002B73C -> 0x8002B744
*/
// Range: 0x8002B73C -> 0x8002B744
// this: r3
struct xEntDrive * zPlayer::GetDrive() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005B1E8 -> 0x8005B27C
*/
// Range: 0x8005B1E8 -> 0x8005B1F4
// this: r0
unsigned char zPlayer::Get_humanPlayer() const {}

// Range: 0x8005B1F4 -> 0x8005B244
// this: r30
unsigned char zPlayer::IsFloorColliding() const {}

// Range: 0x8005B244 -> 0x8005B264
// this: r0
unsigned char zPlayer::CollisionOn() const {}

// Range: 0x8005B264 -> 0x8005B270
// this: r0
unsigned char zPlayer::Get_collisionOn() const {}

// Range: 0x8005B270 -> 0x8005B27C
// this: r0
unsigned char zPlayer::Get_floor_collision() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80076CB8 -> 0x80076CC0
*/
// Range: 0x80076CB8 -> 0x80076CC0
// this: r3
class zPad * zPlayer::GetPad() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008FA38 -> 0x8008FA58
*/
// Range: 0x8008FA38 -> 0x8008FA58
// this: r0
struct zCombat * zPlayer::GetCombat() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009704C -> 0x80097290
*/
// Range: 0x8009704C -> 0x8009705C
// this: r0
void zPlayer::Clear_gravityDisabled() {}

// Range: 0x8009705C -> 0x80097084
// this: r0
void zPlayer::Set_nearEnemy(unsigned char bSet /* r0 */) {}

// Range: 0x80097084 -> 0x8009708C
// this: r3
struct xEnt * zPlayer::GetFloorEntity() const {}

// Range: 0x8009708C -> 0x800970AC
// this: r0
struct zCombat * zPlayer::GetCombat() const {}

// Range: 0x800970AC -> 0x800970B4
// this: r3
unsigned int zPlayer::GetControlOff() const {}

// Range: 0x800970B4 -> 0x800970FC
// this: r31
unsigned char zPlayer::IsNearLedge() const {}

// Range: 0x800970FC -> 0x80097108
// this: r0
unsigned char zPlayer::Get_gravityDisabled() const {}

// Range: 0x80097108 -> 0x8009713C
// this: r0
int zPlayer::GetMaximumHitPoints() const {
    // Local variables
    const struct zCombat * combat; // r0
}

// Range: 0x8009713C -> 0x80097144
// this: r3
struct xSurface * zPlayer::GetFloorSurface() const {}

// Range: 0x80097144 -> 0x80097150
// this: r0
unsigned char zPlayer::Get_defeated() const {}

// Range: 0x80097150 -> 0x80097160
// this: r0
void zPlayer::TurnControlOff(enum zControlOwner owner /* r0 */) {}

// Range: 0x80097160 -> 0x80097170
// this: r0
void zPlayer::TurnControlOn(enum zControlOwner owner /* r0 */) {}

// Range: 0x80097170 -> 0x8009717C
// this: r0
unsigned char zPlayer::Get_nearEnemy() const {}

// Range: 0x8009717C -> 0x80097184
// this: r3
unsigned int * zPlayer::GetHitSoundsMap() const {}

// Range: 0x80097184 -> 0x800971B8
// this: r0
int zPlayer::GetCurrentHitPoints() const {
    // Local variables
    const struct zCombat * combat; // r0
}

// Range: 0x800971B8 -> 0x800971C0
// this: r3
struct xVec3 * zPlayer::GetFloorPosition() const {}

// Range: 0x800971C0 -> 0x800971C8
char * * zPlayer::GetBoneNames() {}

// Range: 0x800971C8 -> 0x800971D0
unsigned char zPlayer::IsSwimming() {}

// Range: 0x800971D0 -> 0x800971E0
// this: r0
unsigned char zPlayer::IsControlOn() const {}

// Range: 0x800971E0 -> 0x800971E8
// this: r3
struct xVec3 & zPlayer::GetFloorNormal() const {}

// Range: 0x800971E8 -> 0x80097208
// this: r0
unsigned char zPlayer::WasRendered() const {}

// Range: 0x80097208 -> 0x80097214
// this: r0
unsigned char zPlayer::Get_wasRendered() const {}

// Range: 0x80097214 -> 0x8009721C
struct xEnt * zPlayer::GetCarriedEntity() {}

// Range: 0x8009721C -> 0x80097224
int * zPlayer::GetHeadBones() {}

// Range: 0x80097224 -> 0x80097228
void zPlayer::SetCamera() {}

// Range: 0x80097228 -> 0x80097230
unsigned char zPlayer::NeedsIncrediPower() {}

// Range: 0x80097230 -> 0x80097234
void zPlayer::GiveIncrediPower() {}

// Range: 0x80097234 -> 0x80097238
void zPlayer::TakeIncrediPower() {}

// Range: 0x80097238 -> 0x80097240
float zPlayer::GetScreenFadeTime() {}

// Range: 0x80097240 -> 0x80097248
float zPlayer::StartScreenFadeAt() {}

// Range: 0x80097248 -> 0x80097250
unsigned char zPlayer::CollideWithNPC() {}

// Range: 0x80097250 -> 0x80097254
void zPlayer::ReactiveAnimationCollided() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009AEE4 -> 0x8009AEEC
*/
// Range: 0x8009AEE4 -> 0x8009AEEC
// this: r3
class zPlayerInput & zPlayer::GetPlayerInput() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B3178 -> 0x800B3220
*/
// Range: 0x800B3178 -> 0x800B31CC
// this: r3
void zPlayer::ResetStats() {}

// Range: 0x800B3218 -> 0x800B3220
// this: r0
void zPlayer::SetLorezModelID(unsigned int id /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BEE10 -> 0x800BEE20
*/
// Range: 0x800BEE10 -> 0x800BEE20
// this: r0
void zPlayer::Set_gravityDisabled() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C8370 -> 0x800C8370
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CE044 -> 0x800CE3D0
*/
// Range: 0x800CE044 -> 0x800CE054
// this: r0
void zPlayer::Clear_switch_to_slide() {}

// Range: 0x800CE054 -> 0x800CE07C
// this: r0
void zPlayer::Set_visible(unsigned char bSet /* r0 */) {}

// Range: 0x800CE07C -> 0x800CE08C
// this: r0
void zPlayer::Set_collisionOn() {}

// Range: 0x800CE08C -> 0x800CE0B4
// this: r0
void zPlayer::Set_reflect(unsigned char bSet /* r0 */) {}

// Range: 0x800CE0B4 -> 0x800CE0DC
// this: r0
void zPlayer::Set_refract(unsigned char bSet /* r0 */) {}

// Range: 0x800CE0DC -> 0x800CE0EC
// this: r0
void zPlayer::Clear_cutsceneReady() {}

// Range: 0x800CE0EC -> 0x800CE114
// this: r0
void zPlayer::Set_wasUpdated(unsigned char bSet /* r0 */) {}

// Range: 0x800CE114 -> 0x800CE13C
// this: r0
void zPlayer::Set_wasRendered(unsigned char bSet /* r0 */) {}

// Range: 0x800CE13C -> 0x800CE164
// this: r0
void zPlayer::Set_humanPlayer(unsigned char bSet /* r0 */) {}

// Range: 0x800CE164 -> 0x800CE18C
// this: r0
void zPlayer::Set_cameraFocus(unsigned char bSet /* r0 */) {}

// Range: 0x800CE18C -> 0x800CE198
// this: r0
unsigned char zPlayer::Get_walkingOn() const {}

// Range: 0x800CE198 -> 0x800CE1A8
// this: r0
void zPlayer::Set_floor_collision() {}

// Range: 0x800CE1A8 -> 0x800CE1B4
// this: r0
unsigned char zPlayer::Get_visible() const {}

// Range: 0x800CE1B4 -> 0x800CE1B8
void zPlayer::ResetHealth() {}

// Range: 0x800CE1B8 -> 0x800CE1C8
// this: r0
void zPlayer::Clear_floor_collision() {}

// Range: 0x800CE1C8 -> 0x800CE1F0
// this: r0
void zPlayer::Set_navMeshCollision(unsigned char bSet /* r0 */) {}

// Range: 0x800CE1F0 -> 0x800CE218
// this: r0
void zPlayer::Set_useBaseSphere(unsigned char bSet /* r0 */) {}

// Range: 0x800CE218 -> 0x800CE240
// this: r0
void zPlayer::Set_defeated(unsigned char bSet /* r0 */) {}

// Range: 0x800CE240 -> 0x800CE268
// this: r0
void zPlayer::Set_settlePass(unsigned char bSet /* r0 */) {}

// Range: 0x800CE268 -> 0x800CE290
// this: r0
void zPlayer::Set_cameraOverrideFocus(unsigned char bSet /* r0 */) {}

// Range: 0x800CE290 -> 0x800CE2B8
// this: r0
void zPlayer::Set_nearEnemyPrevious(unsigned char bSet /* r0 */) {}

// Range: 0x800CE2B8 -> 0x800CE2C4
// this: r0
unsigned char zPlayer::Get_nearEnemyPrevious() const {}

// Range: 0x800CE2C4 -> 0x800CE2CC
unsigned char zPlayer::CanTakeDamage() {}

// Range: 0x800CE2CC -> 0x800CE2D8
// this: r0
unsigned char zPlayer::Get_useBaseSphere() const {}

// Range: 0x800CE2D8 -> 0x800CE2E4
// this: r0
unsigned char zPlayer::Get_settlePass() const {}

// Range: 0x800CE2E4 -> 0x800CE2EC
// this: r3
unsigned char zPlayer::IsCheating() const {}

// Range: 0x800CE2EC -> 0x800CE2FC
// this: r0
void zPlayer::Set_floor_interior() {}

// Range: 0x800CE2FC -> 0x800CE30C
// this: r0
void zPlayer::Clear_collision_underneath() {}

// Range: 0x800CE30C -> 0x800CE31C
// this: r0
void zPlayer::Set_collision_underneath() {}

// Range: 0x800CE31C -> 0x800CE32C
// this: r0
void zPlayer::Clear_floor_is_npc() {}

// Range: 0x800CE32C -> 0x800CE33C
// this: r0
void zPlayer::Set_floor_is_npc() {}

// Range: 0x800CE33C -> 0x800CE34C
// this: r0
void zPlayer::Clear_floor_interior() {}

// Range: 0x800CE34C -> 0x800CE358
// this: r0
unsigned char zPlayer::Get_collision_underneath() const {}

// Range: 0x800CE358 -> 0x800CE364
// this: r0
unsigned char zPlayer::Get_navMeshCollision() const {}

// Range: 0x800CE364 -> 0x800CE368
void zPlayer::RegisterCollision() {}

// Range: 0x800CE368 -> 0x800CE370
// this: r3
struct xModelInstance * zPlayer::GetHirezModel() const {}

// Range: 0x800CE370 -> 0x800CE378
// this: r3
struct xModelInstance * zPlayer::GetLorezModel() const {}

// Range: 0x800CE378 -> 0x800CE384
// this: r0
unsigned char zPlayer::Get_cameraOverrideFocus() const {}

// Range: 0x800CE384 -> 0x800CE390
// this: r0
unsigned char zPlayer::Get_cameraFocus() const {}

// Range: 0x800CE390 -> 0x800CE398
unsigned char zPlayer::AllowInteraction() {}

// Range: 0x800CE398 -> 0x800CE39C
void zPlayer::AttackHit() {}

// Range: 0x800CE39C -> 0x800CE3A0
void zPlayer::DefaultMove() {}

// Range: 0x800CE3A0 -> 0x800CE3A4
void zPlayer::Save() {}

// Range: 0x800CE3A4 -> 0x800CE3A8
void zPlayer::Load() {}

// Range: 0x800CE3A8 -> 0x800CE3AC
void zPlayer::PostRenderCleanup() {}

// Range: 0x800CE3AC -> 0x800CE3B0
void zPlayer::RenderCustomUI() {}

// Range: 0x800CE3B0 -> 0x800CE3B4
void zPlayer::GiveHealth() {}

// Range: 0x800CE3B4 -> 0x800CE3BC
unsigned char zPlayer::NeedsHealth() {}

// Range: 0x800CE3BC -> 0x800CE3C4
unsigned char zPlayer::IsVisible() {}

// Range: 0x800CE3C4 -> 0x800CE3CC
unsigned char zPlayer::IsInteractioning() {}

// Range: 0x800CE3CC -> 0x800CE3D0
void zPlayer::AddTransitions() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CEBDC -> 0x800CEBF8
*/
// Range: 0x800CEBDC -> 0x800CEBEC
// this: r0
void zPlayer::Set_cutsceneReady() {}

// Range: 0x800CEBEC -> 0x800CEBF8
// this: r0
unsigned char zPlayer::Get_cutsceneReady() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D8F0C -> 0x800D8F0C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800EABD8 -> 0x800EABD8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F6F90 -> 0x800F6F90
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80109F60 -> 0x80109F60
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801150DC -> 0x801150DC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80116778 -> 0x80116778
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013D034 -> 0x8013D034
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801449D0 -> 0x801449F4
*/
// Range: 0x801449D0 -> 0x801449DC
// this: r0
unsigned char zPlayer::Get_floor_is_npc() const {}

// Range: 0x801449DC -> 0x801449E4
// this: r0
float zPlayer::GetFallingTime() {}

// Range: 0x801449E4 -> 0x801449F4
// this: r0
void zPlayer::Clear_collisionOn() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80145EF8 -> 0x80145EF8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015BC58 -> 0x8015BC58
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015FC64 -> 0x8015FC64
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80165810 -> 0x80165810
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80167108 -> 0x80167108
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016857C -> 0x8016857C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016CDD4 -> 0x8016CDD4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016D554 -> 0x8016D55C
*/
// Range: 0x8016D554 -> 0x8016D55C
// this: r3
struct zPlayerCheckPoint & zPlayer::GetCheckPoint() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801747A0 -> 0x801747A0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017B42C -> 0x8017B42C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017C4EC -> 0x8017C4EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017E078 -> 0x8017E078
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80180AD8 -> 0x80180AD8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80182AC4 -> 0x80182AC4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80183128 -> 0x80183130
*/
// Range: 0x80183128 -> 0x80183130
// this: r0
float zPlayer::GetPredictedVelocityMag() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80187C38 -> 0x80187C38
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018A8C4 -> 0x8018A8C4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018E15C -> 0x8018E15C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018F384 -> 0x8018F384
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801957F8 -> 0x801957F8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80197D00 -> 0x80197D00
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019ACEC -> 0x8019ACEC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A0A28 -> 0x801A0A28
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A4324 -> 0x801A4324
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A621C -> 0x801A621C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B1148 -> 0x801B1184
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B1AD4 -> 0x801B1B00
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B7A10 -> 0x801B7B88
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B9CA4 -> 0x801B9CE8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C0018 -> 0x801C0018
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C0620 -> 0x801C0620
*/

