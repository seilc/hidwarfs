/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCarryableObject.cpp
*/
static float RESPAWN_PENDING_DIST; // size: 0x4, address: 0x80704A64
static float RESPAWN_DISTY; // size: 0x4, address: 0x80704A68
static float RESPAWN_PENDING_YDIST; // size: 0x4, address: 0x80704A6C
static class xOGSchema CarryableObjectSchema; // size: 0x18, address: 0x807F8DC0
static class SchemaRegistrator CarryableObjectSchemaReg; // size: 0x8, address: 0x807F8DD8
static float ringRadius; // size: 0x4, address: 0x80704A70
static float ringSpeed; // size: 0x4, address: 0x80704A74
static unsigned int ringSegments; // size: 0x4, address: 0x80704A78
static class zSoundFX * arSoundFX; // size: 0x4, address: 0x807F8DE0
class curve_node default_curve[2]; // size: 0x18, address: 0x80704A80
static class xAnimTable * animTables; // size: 0x4, address: 0x807F8DE4
static int triggerTypeIndex; // size: 0x4, address: 0x80704A98
class zFXScript * fxChiliRespawnScript; // size: 0x4, address: 0x807F8DE8
class zFXScript * fxRespawnScript; // size: 0x4, address: 0x807F8DEC
class zFXScript * fxDestroyScript; // size: 0x4, address: 0x807F8DF0
class zSoundFX * fxChiliRespawnSound; // size: 0x4, address: 0x807F8DF4
class _Timing Timing[8]; // size: 0x40, address: 0x80704AB8
static class Vector3 On; // size: 0xC, address: 0x807F8DF8
static class Vector3 Off; // size: 0xC, address: 0x807F8E04
// signature: @unnamed@WAD04_cpp@::UpdateWrapper(xEnt *, xScene *, float)
// Range: 0x801F2C00 -> 0x801F2C10
static void @unnamed@WAD04_cpp@::UpdateWrapper() {
}
// signature: zCarryableObjectNS::EventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801F2C10 -> 0x801F2C2C
void zCarryableObjectNS::EventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x801F2C30 -> 0x801F2E6C
void * zCarryableObject::zCarryableObject(class zCarryableObject * this /* r30 */, class zCarryableObjectAsset * asset /* r31 */) {
    {
        // Range: 0x801F2D38 -> 0x801F2DBC
        // Local variables
        class xAnimTable * table; // r5
    }
    {
        // Range: 0x801F2DCC -> 0x801F2E14
        // Local variables
        class xAnimSingle * single; // r0
        class xAnimState * state; // r0
    }

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animTables;
    // -> struct {} __vt__16zCarryableObject;
    // -> static int triggerTypeIndex;
    // -> struct {} __vt__4zEnt;
}
// signature: zCarryableObject::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x801F2E70 -> 0x801F2F30
void zCarryableObject::Init(class xBase * data /* r30 */, class xDynAsset * asset /* r31 */) {
    // Local variables
    class zCarryableProperty * property; // r0

    // References
    // -> struct {} __vt__12zGlideObject;
    // -> struct {} __vt__11zBombObject;
}
// Range: 0x801F2F70 -> 0x801F2F74
void zCarryableObject::SceneInit() {
}
// Range: 0x801F2F80 -> 0x801F3018
void zCarryableObject::SetupFX() {
    // References
    // -> static class zSoundFX * arSoundFX;
    // -> class zFXScript * fxDestroyScript;
    // -> class zFXScript * fxRespawnScript;
    // -> class zSoundFX * fxChiliRespawnSound;
    // -> class zFXScript * fxChiliRespawnScript;
}
// Range: 0x801F3020 -> 0x801F30D8
void zCarryableObject::SceneExit() {
    // Local variables
    int tidx; // r0
    int count; // r31
    unsigned char * obj; // r30

    {
        // Range: 0x801F3050 -> 0x801F30B0
        // Local variables
        int i; // r29
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x801F30F0 -> 0x801F32BC
void zCarryableObject::Setup(class zCarryableObject * this /* r29 */) {
    // References
    // -> static float RESPAWN_PENDING_YDIST;
    // -> static float RESPAWN_DISTY;
    // -> static float RESPAWN_PENDING_DIST;
    // -> class zGlobals globals;
    // -> unsigned int model_id;
}
// signature: zCarryableObject::SetupDrive(xEnt *)
// Range: 0x801F32C0 -> 0x801F33B4
void zCarryableObject::SetupDrive(class zCarryableObject * this /* r31 */) {
}
// Range: 0x801F33C0 -> 0x801F36AC
void zCarryableObject::Reset(class zCarryableObject * this /* r30 */) {
    // Local variables
    class xBound * pbound; // r29
    float lower_bound_extent; // f0
    class xVec3 start; // r1+0x2C
    class xVec3 sweepDir; // r1+0x20

    {
        // Range: 0x801F3550 -> 0x801F35A8
        // Local variables
        class xAnimState * state; // r0
    }

    // References
    // -> bool gInSceneSetup;
    // -> bool gInSceneResetOrInit;
    // -> class zGlobals globals;
}
// Range: 0x801F36B0 -> 0x801F38F8
void zCarryableObject::RespawnFX(class zCarryableObject * this /* r28 */) {
    {
        // Range: 0x801F36DC -> 0x801F38C8
        // Local variables
        class zFXScriptSpawnPt * spawnPt; // r30

        {
            // Range: 0x801F3708 -> 0x801F38C8
            // Local variables
            class xMat4x3 mat; // r1+0x18
        }
    }

    // References
    // -> class zViewport viewports[4];
    // -> class zFXScript * fxRespawnScript;
}
// Range: 0x801F3900 -> 0x801F395C
void zCarryableObject::RespawnFXSound() {
    // References
    // -> class zSoundFX * fxChiliRespawnSound;
}
// Range: 0x801F3960 -> 0x801F3BA8
void zCarryableObject::DestroyFX(class zCarryableObject * this /* r28 */) {
    {
        // Range: 0x801F398C -> 0x801F3B78
        // Local variables
        class zFXScriptSpawnPt * spawnPt; // r30

        {
            // Range: 0x801F39B8 -> 0x801F3B78
            // Local variables
            class xMat4x3 mat; // r1+0x18
        }
    }

    // References
    // -> class zViewport viewports[4];
    // -> class zFXScript * fxDestroyScript;
}
// Range: 0x801F3BB0 -> 0x801F3E64
class xAnimTable * zCarryableObject::CreateAnimTable(unsigned long long animSetID /* r29:r28 */, enum eAnimSetType animSetType /* r26 */) {
    // Local variables
    class xAnimTable * table; // r27

    // References
    // -> static class xAnimTable * animTables;
}
// signature: zCarryableObject::RemoveAnimTable(unsigned long long)
// Range: 0x801F3E70 -> 0x801F3F24
void zCarryableObject::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animTables;
}
// signature: zCarryableObject::LaunchSweptSphereTest(xVec3 &, xVec3 &)
// Range: 0x801F3F30 -> 0x801F3F38
bool zCarryableObject::LaunchSweptSphereTest() {
}
// Range: 0x801F3F40 -> 0x801F4234
void zCarryableObject::SetupSpringboardLaunch(class zCarryableObject * this /* r29 */, class xEnt * board /* r30 */) {
    // Local variables
    class xMat4x3 * boardMat; // r0
    class xVec3 start; // r1+0x2C
    class xBound * pbound; // r0
    class xVec3 dir; // r1+0x20
    class xVec3 toBoard; // r1+0x14
    class xVec3 target; // r1+0x8
    class xBound * bbound; // r0
    float length; // f3
}
// signature: zCarryableObject::UpdateSpringboardLaunch(float)
// Range: 0x801F4250 -> 0x801F4364
void zCarryableObject::UpdateSpringboardLaunch() {
    // Local variables
    float t; // f0
    class xVec3 pos; // r1+0x14
    class xVec3 disp; // r1+0x8
}
// signature: zCarryableObject::UpdatePhysics(float)
// Range: 0x801F4370 -> 0x801F43A8
void zCarryableObject::UpdatePhysics() {
    // References
    // -> class zGlobals globals;
}
// signature: zCarryableObject::UpdateCollision(float)
// Range: 0x801F43B0 -> 0x801F43B4
void zCarryableObject::UpdateCollision() {
}
// signature: zCarryableObject::UpdateDrive(float)
// Range: 0x801F43C0 -> 0x801F44AC
void zCarryableObject::UpdateDrive() {
    // Local variables
    class xVec3 offset; // r1+0x20
    class xVec3 position; // r1+0x14
    class xVec3 dpos; // r1+0x8
}
// signature: zCarryableObject::UpdateCheatFly(float)
// Range: 0x801F44B0 -> 0x801F45A4
void zCarryableObject::UpdateCheatFly(class zCarryableObject * this /* r31 */) {
}
// signature: zCarryableObject::Move(float)
// Range: 0x801F45B0 -> 0x801F4688
void zCarryableObject::Move() {
}
// Range: 0x801F4690 -> 0x801F47AC
void zCarryableObject::CheckTrigger(class zCarryableObject * this /* r27 */) {
    // Local variables
    int count; // r31
    class zTrigger * triggers; // r30

    {
        // Range: 0x801F46B0 -> 0x801F4788
        // Local variables
        int i; // r29

        {
            // Range: 0x801F46FC -> 0x801F4770
            // Local variables
            unsigned int j; // r28

            {
                // Range: 0x801F46FC -> 0x801F4770
                {
                    // Range: 0x801F471C -> 0x801F4770
                    // Local variables
                    class xBase * target; // r0
                }
            }
        }
    }

    // References
    // -> static int triggerTypeIndex;
    // -> class zGlobals globals;
}
// Range: 0x801F47B0 -> 0x801F49C4
int zCarryableObject::IsRespawnAreaClear() {
    // Local variables
    int respawnAreaClear; // r0
    class xBound areaBound; // r1+0x40
    class zScene * s; // r4

    {
        // Range: 0x801F47C8 -> 0x801F4878
        // Local variables
        int i; // r31

        {
            // Range: 0x801F47C8 -> 0x801F4878
            // Local variables
            class xVec3 position; // r1+0x8
        }
    }
    {
        // Range: 0x801F48B8 -> 0x801F4994
        // Local variables
        unsigned short i; // r5

        {
            // Range: 0x801F48BC -> 0x801F4994
            // Local variables
            class zCarryableObject * ball; // r0

            {
                // Range: 0x801F48BC -> 0x801F4994
                // Local variables
                class xBound ballBound; // r1+0x14
            }
        }
    }

    // References
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
}
// Range: 0x801F49D0 -> 0x801F523C
void zCarryableObject::Update(class zCarryableObject * this /* r29 */, float dt /* f30 */) {
    // Local variables
    class xVec3 spawnPos; // r1+0x70

    {
        // Range: 0x801F4BC4 -> 0x801F4E90
        // Local variables
        class xVec3 * center; // r0

        {
            // Range: 0x801F4BFC -> 0x801F4E38
            // Local variables
            float modifier; // f0
        }
    }
    {
        // Range: 0x801F4F50 -> 0x801F4FD4
        // Local variables
        class xQuat quat; // r1+0x80
        class xMat4x3 * pMat; // r28
    }
    {
        // Range: 0x801F5150 -> 0x801F51DC
        // Local variables
        float distanceToSpawnPos; // f0
    }

    // References
    // -> static float RESPAWN_DISTY;
    // -> class xGlobals * xglobals;
    // -> static float RESPAWN_PENDING_YDIST;
    // -> static float RESPAWN_PENDING_DIST;
    // -> static float ringRadius;
    // -> static float ringSpeed;
    // -> static unsigned int ringSegments;
    // -> static class zSoundFX * arSoundFX;
    // -> class curve_node default_curve[2];
    // -> class zGlobals globals;
}
// Range: 0x801F5240 -> 0x801F54D0
void zCarryableObject::Drop(class zCarryableObject * this /* r30 */) {
    {
        // Range: 0x801F52E8 -> 0x801F544C
        // Local variables
        class xVec3 newAt; // r1+0x8
    }
    {
        // Range: 0x801F544C -> 0x801F5480
        // Local variables
        class xAnimState * state; // r0
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x801F54F0 -> 0x801F5530
void zCarryableObject::DropCheat() {
}
// signature: zCarryableObject::CombatDamage(const zCombatDamageInfo &)
// Range: 0x801F5530 -> 0x801F55B4
void zCarryableObject::CombatDamage() {
}
// Range: 0x801F55C0 -> 0x801F5704
void zCarryableObject::DoKill(class zCarryableObject * this /* r31 */) {
    {
        // Range: 0x801F562C -> 0x801F5670
        // Local variables
        class xAnimState * state; // r0
    }
}
// Range: 0x801F5710 -> 0x801F595C
void zCarryableObject::HandleEvent(class zCarryableObject * this /* r28 */, class xBase * from /* r29 */, unsigned int toEvent /* r30 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x801F5804 -> 0x801F585C
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        class EventActionDrivenBy * params; // r0
    }
    {
        // Range: 0x801F58E8 -> 0x801F5928
        // Local variables
        class EventActionOneFloat updateDistanceToParams; // r1+0x8
    }
}
// Range: 0x801F5960 -> 0x801F5B58
void zBombObject::Setup(class zBombObject * this /* r29 */) {
    // Local variables
    class zCarryableBombUseProperty * prop; // r0

    // References
    // -> static float RESPAWN_PENDING_YDIST;
    // -> static float RESPAWN_DISTY;
    // -> static float RESPAWN_PENDING_DIST;
    // -> class zGlobals globals;
    // -> unsigned int model_id;
}
// Range: 0x801F5B60 -> 0x801F5DA8
void zBombObject::Update(class zBombObject * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x801F5B90 -> 0x801F5CBC
        // Local variables
        float t; // f1
        bool light_on; // r7

        {
            // Range: 0x801F5BC4 -> 0x801F5C64
            // Local variables
            int i; // r5
        }
    }
    {
        // Range: 0x801F5CBC -> 0x801F5D88
        // Local variables
        class xVec3 pos; // r1+0x20
        char timerText[32]; // r1+0x30
    }

    // References
    // -> static class Vector3 On;
    // -> static class Vector3 Off;
    // -> class _Timing Timing[8];
}
// Range: 0x801F5DE0 -> 0x801F6028
void zBombObject::RespawnFX(class zBombObject * this /* r28 */) {
    {
        // Range: 0x801F5E0C -> 0x801F5FF8
        // Local variables
        class zFXScriptSpawnPt * spawnPt; // r30

        {
            // Range: 0x801F5E38 -> 0x801F5FF8
            // Local variables
            class xMat4x3 mat; // r1+0x18
        }
    }

    // References
    // -> class zViewport viewports[4];
    // -> class zFXScript * fxChiliRespawnScript;
}
// Range: 0x801F6030 -> 0x801F6034
void zBombObject::DestroyFX() {
}
// Range: 0x801F6040 -> 0x801F617C
void zBombObject::Reset(class zBombObject * this /* r31 */) {
    // References
    // -> static class Vector3 Off;
}
// Range: 0x801F6180 -> 0x801F6268
void zBombObject::Ignite(class zBombObject * this /* r31 */) {
}
// Range: 0x801F6270 -> 0x801F6274
void zBombObject::Kill() {
}
// Range: 0x801F6280 -> 0x801F62F0
void zBombObject::DoKill(class zBombObject * this /* r31 */) {
}
// signature: zBombObject::CombatDamage(const zCombatDamageInfo &)
// Range: 0x801F62F0 -> 0x801F6324
void zBombObject::CombatDamage() {
}
// Range: 0x801F6330 -> 0x801F6388
void zBombObject::Explode(class zBombObject * this /* r31 */) {
}
// signature: zBombObject::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801F6390 -> 0x801F6400
void zBombObject::HandleEvent() {
    {
        // Range: 0x801F63C8 -> 0x801F63F4
        // Local variables
        class EventActionLegacy * params; // r0
    }
}
// Range: 0x801F6400 -> 0x801F65E0
void zGlideObject::Setup(class zGlideObject * this /* r29 */) {
    // Local variables
    class zCarryableGlideUseProperty * prop; // r0

    // References
    // -> static float RESPAWN_PENDING_YDIST;
    // -> static float RESPAWN_DISTY;
    // -> static float RESPAWN_PENDING_DIST;
    // -> class zGlobals globals;
    // -> unsigned int model_id;
}
// signature: zGlideObject::Update(float)
// Range: 0x801F65E0 -> 0x801F65E4
void zGlideObject::Update() {
}
// signature: zGlideObject::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801F65F0 -> 0x801F66C0
void zGlideObject::HandleEvent(class zGlideObject * this /* r30 */) {
}
