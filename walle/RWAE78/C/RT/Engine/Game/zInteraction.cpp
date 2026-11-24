/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zInteraction.cpp
*/
class _OGSwitchLeverSchema _OGSwitchLeverschema; // size: 0x18, address: 0x8076E0F8
class SchemaRegistrator _OGSwitchLeverschemaReg; // size: 0x8, address: 0x8076E110
class _OGLaunchSchema _OGLaunchschema; // size: 0x18, address: 0x8076E118
class SchemaRegistrator _OGLaunchschemaReg; // size: 0x8, address: 0x8076E130
static float sAlphaUpRate; // size: 0x4, address: 0x806FB408
static float sAlphaDownRate; // size: 0x4, address: 0x806FB40C
static float sMaxDrawDist2; // size: 0x4, address: 0x806FB410
static float sMinDrawAlpha; // size: 0x4, address: 0x806FB414
static float sMaxDrawAlpha; // size: 0x4, address: 0x806FB418
static float sLaunchMaxDist2; // size: 0x4, address: 0x806FB41C
static float sLaunchHalfYawRange; // size: 0x4, address: 0x806FB420
static float sLaunchFlipLength; // size: 0x4, address: 0x806FB424
static float sLaunchReelInBeginPull; // size: 0x4, address: 0x806FB428
static float sLaunchReelInBeginBounce; // size: 0x4, address: 0x8076E138
static int sSwitchLeverTypeIndex; // size: 0x4, address: 0x806FB42C
static int sLaunchTypeIndex; // size: 0x4, address: 0x806FB430
static class xEntAsset fakeAsset; // size: 0xF0, address: 0x8076E140
class xAnimTable * animTables; // size: 0x4, address: 0x8076E230
static unsigned int modelID; // size: 0x4, address: 0x806CDBF8
static class ModelInstanceAsset * modelInstanceAsset; // size: 0x4, address: 0x8076E234
static class HelperInfo * modelInstanceAssetInfo; // size: 0x4, address: 0x8076E238
static float outlineOffTime; // size: 0x4, address: 0x806FB440
// Range: 0x800DFF30 -> 0x800DFF40
void World::_OGSwitchLeverEntity::Deactivate() {
}
// Range: 0x800DFF40 -> 0x800DFF90
void World::_OGSwitchLeverEntity::Destroy(class _OGSwitchLeverEntity * this /* r31 */) {
}
// signature: World::_OGSwitchLeverSchema::Fix(World::Asset *, long, int)
// Range: 0x800DFFF0 -> 0x800DFFF8
void World::_OGSwitchLeverSchema::Fix() {
}
// signature: World::_OGSwitchLeverSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800E0000 -> 0x800E004C
class EntityStub * World::_OGSwitchLeverSchema::CreateStub(class _OGSwitchLeverSchema * this /* r31 */) {
}
// signature: World::_OGSwitchLeverSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800E0050 -> 0x800E0068
void World::_OGSwitchLeverSchema::DestroyStub() {
}
// signature: World::_OGSwitchLeverSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800E0070 -> 0x800E00D8
class Entity * World::_OGSwitchLeverSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World20_OGSwitchLeverEntity;
}
// Range: 0x800E0120 -> 0x800E0130
void World::_OGLaunchEntity::Deactivate() {
}
// Range: 0x800E0130 -> 0x800E0180
void World::_OGLaunchEntity::Destroy(class _OGLaunchEntity * this /* r31 */) {
}
// signature: World::_OGLaunchSchema::Fix(World::Asset *, long, int)
// Range: 0x800E01E0 -> 0x800E01E8
void World::_OGLaunchSchema::Fix() {
}
// signature: World::_OGLaunchSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800E01F0 -> 0x800E023C
class EntityStub * World::_OGLaunchSchema::CreateStub(class _OGLaunchSchema * this /* r31 */) {
}
// signature: World::_OGLaunchSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800E0240 -> 0x800E0258
void World::_OGLaunchSchema::DestroyStub() {
}
// signature: World::_OGLaunchSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800E0260 -> 0x800E02C8
class Entity * World::_OGLaunchSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World15_OGLaunchEntity;
}
// Range: 0x800E0310 -> 0x800E03E0
void zInteraction_SceneInit(class zScene * zsc /* r29 */) {
    // References
    // -> static class HelperInfo * modelInstanceAssetInfo;
    // -> static class ModelInstanceAsset * modelInstanceAsset;
    // -> static unsigned int modelID;
    // -> static int sLaunchTypeIndex;
    // -> static int sSwitchLeverTypeIndex;
}
// Range: 0x800E03E0 -> 0x800E0738
void zInteraction_SceneReset(class zScene * zsc /* r24 */) {
    // References
    // -> static int sLaunchTypeIndex;
    // -> static int sSwitchLeverTypeIndex;
}
// Range: 0x800E0740 -> 0x800E09C4
void zInteraction_Update(float dt /* f30 */) {
    // Local variables
    int count; // r27
    class zScene * zsc; // r26

    {
        // Range: 0x800E0778 -> 0x800E0954
        // Local variables
        int i; // r25
    }
    {
        // Range: 0x800E0964 -> 0x800E0990
        // Local variables
        int i; // r24
    }

    // References
    // -> static int sLaunchTypeIndex;
    // -> class xGlobals * xglobals;
    // -> static int sSwitchLeverTypeIndex;
    // -> class zGlobals globals;
}
// Range: 0x800E09D0 -> 0x800E0A1C
void zInteraction_SceneExit() {
    // References
    // -> static class HelperInfo * modelInstanceAssetInfo;
}
// Range: 0x800E0A20 -> 0x800E0A68
void zInteraction::Stop(class zInteraction * this /* r31 */) {
}
// Range: 0x800E0AC0 -> 0x800E0BF4
static void @unnamed@WAD02_cpp@::SetupEnt(class xEnt * ent /* r31 */, class zSwitchLeverAsset * asset /* r30 */) {
    // References
    // -> static class xEntAsset fakeAsset;
}
// signature: @unnamed@WAD02_cpp@::SwitchingOnCheck(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x800E0C00 -> 0x800E0C18
static unsigned int @unnamed@WAD02_cpp@::SwitchingOnCheck() {
}
// signature: @unnamed@WAD02_cpp@::SwitchingOffCheck(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x800E0C20 -> 0x800E0C38
static unsigned int @unnamed@WAD02_cpp@::SwitchingOffCheck() {
}
// signature: @unnamed@WAD02_cpp@::SwitchedOffCB(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x800E0C40 -> 0x800E0CA0
static unsigned int @unnamed@WAD02_cpp@::SwitchedOffCB() {
}
// signature: @unnamed@WAD02_cpp@::SwitchedOnCB(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x800E0CA0 -> 0x800E0CFC
static unsigned int @unnamed@WAD02_cpp@::SwitchedOnCB() {
}
// signature: @unnamed@WAD02_cpp@::SwitchChangeCB(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x800E0D00 -> 0x800E0D30
static unsigned int @unnamed@WAD02_cpp@::SwitchChangeCB() {
}
// Range: 0x800E0D30 -> 0x800E1114
static void @unnamed@WAD02_cpp@::SetupAnimTable(class xEnt * ent /* r22 */, class zSwitchLeverAsset * asset /* r23 */) {
    // Local variables
    class xAnimTable * table; // r24

    // References
    // -> class zGlobals globals;
}
// signature: zSwitchLever::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x800E1120 -> 0x800E1130
void zSwitchLever::Init() {
}
// Range: 0x800E1130 -> 0x800E1384
void * zSwitchLever::zSwitchLever(class zSwitchLever * this /* r31 */, class zSwitchLeverAsset * theAsset /* r30 */) {
    // Local variables
    class SwitchObject * switchObject; // r0

    // References
    // -> struct {} __vt__12zSwitchLever;
    // -> struct {} __vt__19zTriggerInteraction;
    // -> struct {} __vt__12zInteraction;
}
// signature: zSwitchLever::EventCB(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800E13D0 -> 0x800E187C
void zSwitchLever::EventCB(class zSwitchLever * this /* r31 */) {
}
// signature: zSwitchLever::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800E1880 -> 0x800E1890
void zSwitchLever::EventCB(class xBase * from /* r0 */) {
}
// Range: 0x800E1890 -> 0x800E18E0
void zSwitchLever::Start(class zSwitchLever * this /* r30 */, class zCommonPlayer * thePlayer /* r31 */) {
}
// Range: 0x800E18E0 -> 0x800E1998
void zSwitchLever::Stop(class zSwitchLever * this /* r31 */) {
    {
        // Range: 0x800E18EC -> 0x800E196C
        // Local variables
        class xAnimSingle * single; // r5
    }
}
// Range: 0x800E19A0 -> 0x800E19C4
void zSwitchLever::Ready() {
}
// Range: 0x800E19D0 -> 0x800E1CDC
void zLaunch::SceneInit(class zLaunch * this /* r29 */) {
    // Local variables
    class xAnimTable * table; // r5

    {
        // Range: 0x800E1A10 -> 0x800E1A38
        // Local variables
        class zEntSimpleObj * simp; // r0
    }
    {
        // Range: 0x800E1AC4 -> 0x800E1CA8
        // Local variables
        class xVec3 disp; // r1+0x8
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> class zGlobals globals;
    // -> class xAnimTable * animTables;
}
// signature: zLaunch::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x800E1CE0 -> 0x800E1CF0
void zLaunch::Init() {
}
// Range: 0x800E1CF0 -> 0x800E1E68
void * zLaunch::zLaunch(class zLaunch * this /* r31 */, class zLaunchAsset * theAsset /* r26 */) {
    // Local variables
    unsigned int size; // r1+0x8

    {
        // Range: 0x800E1D68 -> 0x800E1DA4
        // Local variables
        void * obj; // r0
    }

    // References
    // -> class Scene * primaryScene;
    // -> static class HelperInfo * modelInstanceAssetInfo;
    // -> struct {} __vt__7zLaunch;
    // -> struct {} __vt__12zInteraction;
}
// Range: 0x800E1E70 -> 0x800E1EDC
void * zLaunch::~zLaunch(class zLaunch * this /* r30 */) {
    // References
    // -> static class HelperInfo * modelInstanceAssetInfo;
    // -> struct {} __vt__7zLaunch;
}
// Range: 0x800E1EE0 -> 0x800E209C
bool zLaunch::CheckPlayer(class zLaunch * this /* r25 */, class zCommonPlayer * player /* r26 */, float * maxAlpha /* r27 */, float * yaw /* r28 */, float * yawDiff /* r29 */) {
    // Local variables
    float newAlpha; // f0
    class xVec3 disp; // r1+0x8
    float len2; // f0
    bool inRange; // r0

    // References
    // -> static float sMaxDrawDist2;
    // -> static float sMinDrawAlpha;
    // -> static float sMaxDrawAlpha;
    // -> static float sLaunchHalfYawRange;
    // -> static float sLaunchMaxDist2;
}
// Range: 0x800E20A0 -> 0x800E20FC
void zLaunch::WindupGrab(class zLaunch * this /* r31 */) {
}
// Range: 0x800E2100 -> 0x800E2848
void zLaunch::Update(class zLaunch * this /* r28 */, float dt /* f31 */) {
    // Local variables
    float newAlpha; // r1+0x10
    bool renderMarker; // r29
    float alphaDiff; // f2
    float maxUp; // f3
    float maxDown; // f0

    {
        // Range: 0x800E21E8 -> 0x800E2378
        // Local variables
        int i; // r25

        {
            // Range: 0x800E21E8 -> 0x800E2378
            // Local variables
            float yawDiff; // r1+0x8
            float yaw; // r1+0xC
        }
    }
    {
        // Range: 0x800E2390 -> 0x800E2410
        // Local variables
        float currYaw; // f1
        float factor; // f6
    }
    {
        // Range: 0x800E2414 -> 0x800E24DC
        // Local variables
        float reelInBegin; // f1
    }

    // References
    // -> static class HelperInfo * modelInstanceAssetInfo;
    // -> static float sAlphaDownRate;
    // -> static float sAlphaUpRate;
    // -> static float outlineOffTime;
    // -> static float sLaunchReelInBeginBounce;
    // -> static float sLaunchReelInBeginPull;
    // -> class xGlobals * xglobals;
}
// Range: 0x800E2850 -> 0x800E2A98
void zLaunch::GotoLiftState(class zLaunch * this /* r29 */) {
    // Local variables
    float peak; // f30
    float peakTime; // f0
    float fallTime; // f0
    float airTime; // f5

    // References
    // -> class zGlobals globals;
    // -> static float sLaunchFlipLength;
}
// signature: zLaunch::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800E2AA0 -> 0x800E2C60
void zLaunch::EventCB() {
    // Local variables
    class zLaunch * launch; // r0
}
// signature: @unnamed@WAD02_cpp@::zLaunch_PlayGrab(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x800E2C60 -> 0x800E2D00
static unsigned int @unnamed@WAD02_cpp@::zLaunch_PlayGrab(void * object /* r26 */) {
    {
        // Range: 0x800E2C74 -> 0x800E2C88
        // Local variables
        int i; // r28

        {
            // Range: 0x800E2C74 -> 0x800E2C88
            // Local variables
            class zCommonPlayer * commonPlayer; // r27
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: @unnamed@WAD02_cpp@::zLaunch_PlayLaunch(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x800E2D00 -> 0x800E2D6C
static unsigned int @unnamed@WAD02_cpp@::zLaunch_PlayLaunch() {
    {
        // Range: 0x800E2D08 -> 0x800E2D08
        // Local variables
        int i; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: @unnamed@WAD02_cpp@::MatchPlayerSpeed(xAnimSingle *, void *, const char *)
// Range: 0x800E2D70 -> 0x800E2E38
static void @unnamed@WAD02_cpp@::MatchPlayerSpeed(class xAnimSingle * anim /* r30 */) {
    {
        // Range: 0x800E2D90 -> 0x800E2D90
        // Local variables
        int i; // r0

        {
            // Range: 0x800E2D90 -> 0x800E2D90
            {
                // Range: 0x800E2D90 -> 0x800E2D90
                // Local variables
                class xAnimSingle * playerSingle; // r31
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: @unnamed@WAD02_cpp@::zLaunch_MatchGrabCB(xAnimState *, xAnimSingle *, void *)
// Range: 0x800E2E40 -> 0x800E2E58
static void @unnamed@WAD02_cpp@::zLaunch_MatchGrabCB() {
}
// signature: @unnamed@WAD02_cpp@::zLaunch_MatchGrabIdleCB(xAnimState *, xAnimSingle *, void *)
// Range: 0x800E2E60 -> 0x800E2E78
static void @unnamed@WAD02_cpp@::zLaunch_MatchGrabIdleCB() {
}
// signature: @unnamed@WAD02_cpp@::zLaunch_LaunchStateCB(xAnimState *, xAnimSingle *, void *)
// Range: 0x800E2E80 -> 0x800E2E98
static void @unnamed@WAD02_cpp@::zLaunch_LaunchStateCB() {
}
// signature: @unnamed@WAD02_cpp@::zLaunch_AbortLaunch(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x800E2EA0 -> 0x800E2EF4
static unsigned int @unnamed@WAD02_cpp@::zLaunch_AbortLaunch() {
    {
        // Range: 0x800E2EA8 -> 0x800E2EA8
        // Local variables
        int i; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: @unnamed@WAD02_cpp@::zLaunch_StartCB(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x800E2F00 -> 0x800E2F14
static unsigned int @unnamed@WAD02_cpp@::zLaunch_StartCB() {
}
// signature: @unnamed@WAD02_cpp@::zLaunch_StopCB(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x800E2F20 -> 0x800E2F34
static unsigned int @unnamed@WAD02_cpp@::zLaunch_StopCB() {
}
// Range: 0x800E2F40 -> 0x800E32F4
class xAnimTable * zLaunch::CreateAnimTable(unsigned long long animSetID /* r29:r28 */) {
    // Local variables
    class xAnimTable * table; // r26

    // References
    // -> class xAnimTable * animTables;
}
// signature: zLaunch::RemoveAnimTable(unsigned long long)
// Range: 0x800E3300 -> 0x800E33B4
void zLaunch::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> class xAnimTable * animTables;
}
// Range: 0x800E33C0 -> 0x800E3404
unsigned int zLaunch::GetLaunchHash() {
}
