/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80053A20 -> 0x80053A28
*/
// Range: 0x80053A20 -> 0x80053A28
// this: r3
struct xEntDrive * zPlayer::GetDrive() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A5E6C -> 0x800A5F08
*/
// Range: 0x800A5E6C -> 0x800A5E78
// this: r0
unsigned char zPlayer::Get_humanPlayer() const {}

// Range: 0x800A5E78 -> 0x800A5ED0
// this: r30
unsigned char zPlayer::IsFloorColliding() const {}

// Range: 0x800A5ED0 -> 0x800A5EF0
// this: r0
unsigned char zPlayer::CollisionOn() const {}

// Range: 0x800A5EF0 -> 0x800A5EFC
// this: r0
unsigned char zPlayer::Get_collisionOn() const {}

// Range: 0x800A5EFC -> 0x800A5F08
// this: r0
unsigned char zPlayer::Get_floor_collision() const {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D1998 -> 0x800D19A0
*/
// Range: 0x800D1998 -> 0x800D19A0
// this: r3
class zPad * zPlayer::GetPad() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F80F8 -> 0x800F8118
*/
// Range: 0x800F80F8 -> 0x800F8118
// this: r0
struct zCombat * zPlayer::GetCombat() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801027DC -> 0x80102A2C
*/
// Range: 0x801027DC -> 0x801027EC
// this: r0
void zPlayer::Clear_gravityDisabled() {}

// Range: 0x801027EC -> 0x80102814
// this: r0
void zPlayer::Set_nearEnemy(unsigned char bSet /* r0 */) {}

// Range: 0x80102814 -> 0x8010281C
// this: r3
struct xEnt * zPlayer::GetFloorEntity() const {}

// Range: 0x8010281C -> 0x8010283C
// this: r0
struct zCombat * zPlayer::GetCombat() const {}

// Range: 0x8010283C -> 0x80102844
// this: r3
unsigned int zPlayer::GetControlOff() const {}

// Range: 0x80102844 -> 0x8010288C
// this: r31
unsigned char zPlayer::IsNearLedge() const {}

// Range: 0x8010288C -> 0x80102898
// this: r0
unsigned char zPlayer::Get_gravityDisabled() const {}

// Range: 0x80102898 -> 0x801028CC
// this: r0
int zPlayer::GetMaximumHitPoints() const {
    // Local variables
    const struct zCombat * combat; // r0
}

// Range: 0x801028CC -> 0x801028D4
// this: r3
struct xSurface * zPlayer::GetFloorSurface() const {}

// Range: 0x801028D4 -> 0x801028E0
// this: r0
unsigned char zPlayer::Get_defeated() const {}

// Range: 0x801028E0 -> 0x801028F0
// this: r0
void zPlayer::TurnControlOff(enum zControlOwner owner /* r0 */) {}

// Range: 0x801028F0 -> 0x80102900
// this: r0
void zPlayer::TurnControlOn(enum zControlOwner owner /* r0 */) {}

// Range: 0x80102900 -> 0x8010290C
// this: r0
unsigned char zPlayer::Get_nearEnemy() const {}

// Range: 0x8010290C -> 0x80102914
// this: r3
unsigned int * zPlayer::GetHitSoundsMap() const {}

// Range: 0x80102914 -> 0x80102948
// this: r0
int zPlayer::GetCurrentHitPoints() const {
    // Local variables
    const struct zCombat * combat; // r0
}

// Range: 0x80102948 -> 0x80102950
// this: r3
struct xVec3 * zPlayer::GetFloorPosition() const {}

// Range: 0x80102950 -> 0x80102958
char * * zPlayer::GetBoneNames() {}

// Range: 0x80102958 -> 0x80102964
// this: r0
unsigned char zPlayer::Get_useBaseSphere() const {}

// Range: 0x80102964 -> 0x8010296C
unsigned char zPlayer::IsSwimming() {}

// Range: 0x8010296C -> 0x8010297C
// this: r0
unsigned char zPlayer::IsControlOn() const {}

// Range: 0x8010297C -> 0x80102984
// this: r3
struct xVec3 & zPlayer::GetFloorNormal() const {}

// Range: 0x80102984 -> 0x801029A4
// this: r0
unsigned char zPlayer::WasRendered() const {}

// Range: 0x801029A4 -> 0x801029B0
// this: r0
unsigned char zPlayer::Get_wasRendered() const {}

// Range: 0x801029B0 -> 0x801029B8
struct xEnt * zPlayer::GetCarriedEntity() {}

// Range: 0x801029B8 -> 0x801029C0
int * zPlayer::GetHeadBones() {}

// Range: 0x801029C0 -> 0x801029C4
void zPlayer::SetCamera() {}

// Range: 0x801029C4 -> 0x801029CC
unsigned char zPlayer::NeedsIncrediPower() {}

// Range: 0x801029CC -> 0x801029D0
void zPlayer::GiveIncrediPower() {}

// Range: 0x801029D0 -> 0x801029D4
void zPlayer::TakeIncrediPower() {}

// Range: 0x801029D4 -> 0x801029DC
float zPlayer::GetScreenFadeTime() {}

// Range: 0x801029DC -> 0x801029E4
float zPlayer::StartScreenFadeAt() {}

// Range: 0x801029E4 -> 0x801029EC
unsigned char zPlayer::CollideWithNPC() {}

// Range: 0x801029EC -> 0x801029F0
void zPlayer::ReactiveAnimationCollided() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010922C -> 0x80109234
*/
// Range: 0x8010922C -> 0x80109234
// this: r3
class zPlayerInput & zPlayer::GetPlayerInput() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012DEC0 -> 0x8012DF94
*/
// Range: 0x8012DEC0 -> 0x8012DF40
// this: r3
void zPlayer::ResetStats() {}

// Range: 0x8012DF8C -> 0x8012DF94
// this: r0
void zPlayer::SetLorezModelID(unsigned int id /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013E5C4 -> 0x8013E5D4
*/
// Range: 0x8013E5C4 -> 0x8013E5D4
// this: r0
void zPlayer::Set_gravityDisabled() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014B02C -> 0x8014B02C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80154280 -> 0x80154600
*/
// Range: 0x80154280 -> 0x80154290
// this: r0
void zPlayer::Clear_switch_to_slide() {}

// Range: 0x80154290 -> 0x801542B8
// this: r0
void zPlayer::Set_visible(unsigned char bSet /* r0 */) {}

// Range: 0x801542B8 -> 0x801542C8
// this: r0
void zPlayer::Set_collisionOn() {}

// Range: 0x801542C8 -> 0x801542F0
// this: r0
void zPlayer::Set_reflect(unsigned char bSet /* r0 */) {}

// Range: 0x801542F0 -> 0x80154318
// this: r0
void zPlayer::Set_refract(unsigned char bSet /* r0 */) {}

// Range: 0x80154318 -> 0x80154328
// this: r0
void zPlayer::Clear_cutsceneReady() {}

// Range: 0x80154328 -> 0x80154350
// this: r0
void zPlayer::Set_wasUpdated(unsigned char bSet /* r0 */) {}

// Range: 0x80154350 -> 0x80154378
// this: r0
void zPlayer::Set_wasRendered(unsigned char bSet /* r0 */) {}

// Range: 0x80154378 -> 0x801543A0
// this: r0
void zPlayer::Set_humanPlayer(unsigned char bSet /* r0 */) {}

// Range: 0x801543A0 -> 0x801543C8
// this: r0
void zPlayer::Set_cameraFocus(unsigned char bSet /* r0 */) {}

// Range: 0x801543C8 -> 0x801543D4
// this: r0
unsigned char zPlayer::Get_walkingOn() const {}

// Range: 0x801543D4 -> 0x801543E4
// this: r0
void zPlayer::Set_floor_collision() {}

// Range: 0x801543E4 -> 0x801543F0
// this: r0
unsigned char zPlayer::Get_visible() const {}

// Range: 0x801543F0 -> 0x801543F4
void zPlayer::ResetHealth() {}

// Range: 0x801543F4 -> 0x80154404
// this: r0
void zPlayer::Clear_floor_collision() {}

// Range: 0x80154404 -> 0x8015442C
// this: r0
void zPlayer::Set_navMeshCollision(unsigned char bSet /* r0 */) {}

// Range: 0x8015442C -> 0x80154454
// this: r0
void zPlayer::Set_useBaseSphere(unsigned char bSet /* r0 */) {}

// Range: 0x80154454 -> 0x8015447C
// this: r0
void zPlayer::Set_defeated(unsigned char bSet /* r0 */) {}

// Range: 0x8015447C -> 0x801544A4
// this: r0
void zPlayer::Set_settlePass(unsigned char bSet /* r0 */) {}

// Range: 0x801544A4 -> 0x801544CC
// this: r0
void zPlayer::Set_cameraOverrideFocus(unsigned char bSet /* r0 */) {}

// Range: 0x801544CC -> 0x801544F4
// this: r0
void zPlayer::Set_nearEnemyPrevious(unsigned char bSet /* r0 */) {}

// Range: 0x801544F4 -> 0x80154500
// this: r0
unsigned char zPlayer::Get_nearEnemyPrevious() const {}

// Range: 0x80154500 -> 0x80154508
unsigned char zPlayer::CanTakeDamage() {}

// Range: 0x80154508 -> 0x80154514
// this: r0
unsigned char zPlayer::Get_settlePass() const {}

// Range: 0x80154514 -> 0x8015451C
// this: r3
unsigned char zPlayer::IsCheating() const {}

// Range: 0x8015451C -> 0x8015452C
// this: r0
void zPlayer::Set_floor_interior() {}

// Range: 0x8015452C -> 0x8015453C
// this: r0
void zPlayer::Clear_collision_underneath() {}

// Range: 0x8015453C -> 0x8015454C
// this: r0
void zPlayer::Set_collision_underneath() {}

// Range: 0x8015454C -> 0x8015455C
// this: r0
void zPlayer::Clear_floor_is_npc() {}

// Range: 0x8015455C -> 0x8015456C
// this: r0
void zPlayer::Set_floor_is_npc() {}

// Range: 0x8015456C -> 0x8015457C
// this: r0
void zPlayer::Clear_floor_interior() {}

// Range: 0x8015457C -> 0x80154588
// this: r0
unsigned char zPlayer::Get_collision_underneath() const {}

// Range: 0x80154588 -> 0x80154594
// this: r0
unsigned char zPlayer::Get_navMeshCollision() const {}

// Range: 0x80154594 -> 0x80154598
void zPlayer::RegisterCollision() {}

// Range: 0x80154598 -> 0x801545A0
// this: r3
struct xModelInstance * zPlayer::GetHirezModel() const {}

// Range: 0x801545A0 -> 0x801545A8
// this: r3
struct xModelInstance * zPlayer::GetLorezModel() const {}

// Range: 0x801545A8 -> 0x801545B4
// this: r0
unsigned char zPlayer::Get_cameraOverrideFocus() const {}

// Range: 0x801545B4 -> 0x801545C0
// this: r0
unsigned char zPlayer::Get_cameraFocus() const {}

// Range: 0x801545C0 -> 0x801545C8
unsigned char zPlayer::AllowInteraction() {}

// Range: 0x801545C8 -> 0x801545CC
void zPlayer::AttackHit() {}

// Range: 0x801545CC -> 0x801545D0
void zPlayer::DefaultMove() {}

// Range: 0x801545D0 -> 0x801545D4
void zPlayer::Save() {}

// Range: 0x801545D4 -> 0x801545D8
void zPlayer::Load() {}

// Range: 0x801545D8 -> 0x801545DC
void zPlayer::PostRenderCleanup() {}

// Range: 0x801545DC -> 0x801545E0
void zPlayer::RenderCustomUI() {}

// Range: 0x801545E0 -> 0x801545E4
void zPlayer::GiveHealth() {}

// Range: 0x801545E4 -> 0x801545EC
unsigned char zPlayer::NeedsHealth() {}

// Range: 0x801545EC -> 0x801545F4
unsigned char zPlayer::IsVisible() {}

// Range: 0x801545F4 -> 0x801545FC
unsigned char zPlayer::IsInteractioning() {}

// Range: 0x801545FC -> 0x80154600
void zPlayer::AddTransitions() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80154EEC -> 0x80154F08
*/
// Range: 0x80154EEC -> 0x80154EFC
// this: r0
void zPlayer::Set_cutsceneReady() {}

// Range: 0x80154EFC -> 0x80154F08
// this: r0
unsigned char zPlayer::Get_cutsceneReady() const {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016522C -> 0x8016522C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017E8C8 -> 0x8017E8C8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801911A0 -> 0x801911A0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801AC008 -> 0x801AC008
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BDE20 -> 0x801BDE20
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BFE0C -> 0x801BFE0C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FE6D0 -> 0x801FE6D0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802076A4 -> 0x802076C8
*/
// Range: 0x802076A4 -> 0x802076B0
// this: r0
unsigned char zPlayer::Get_floor_is_npc() const {}

// Range: 0x802076B0 -> 0x802076B8
// this: r0
float zPlayer::GetFallingTime() {}

// Range: 0x802076B8 -> 0x802076C8
// this: r0
void zPlayer::Clear_collisionOn() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80209A94 -> 0x80209A94
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022B8AC -> 0x8022B8AC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80230F74 -> 0x80230F74
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023787C -> 0x8023787C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80239A30 -> 0x80239A30
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023C650 -> 0x8023C650
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80243B50 -> 0x80243B50
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80244B28 -> 0x80244B30
*/
// Range: 0x80244B28 -> 0x80244B30
// this: r3
struct zPlayerCheckPoint & zPlayer::GetCheckPoint() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024E76C -> 0x8024E76C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802581FC -> 0x802581FC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80259714 -> 0x80259714
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025C090 -> 0x8025C090
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025F840 -> 0x8025F840
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802631B0 -> 0x802631B0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80263D98 -> 0x80263DA0
*/
// Range: 0x80263D98 -> 0x80263DA0
// this: r0
float zPlayer::GetPredictedVelocityMag() const {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026A96C -> 0x8026A96C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026E1A8 -> 0x8026E1A8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80272FDC -> 0x80272FDC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802745C4 -> 0x802745C4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027DEB4 -> 0x8027DEB4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80280FDC -> 0x80280FDC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80284C98 -> 0x80284C98
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8028C550 -> 0x8028C550
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80291668 -> 0x80291668
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80293D54 -> 0x80293D54
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A3954 -> 0x802A3990
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A4494 -> 0x802A44C4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802AB890 -> 0x802ABA38
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802AE2DC -> 0x802AE320
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B6A54 -> 0x802B6A54
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B73B0 -> 0x802B73B0
*/

