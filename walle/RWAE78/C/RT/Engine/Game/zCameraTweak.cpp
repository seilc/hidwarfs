/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCameraTweak.cpp
*/
class _OGCamera_TweakSchema _OGCamera_Tweakschema; // size: 0x18, address: 0x8076BAD8
class SchemaRegistrator _OGCamera_TweakschemaReg; // size: 0x8, address: 0x8076BAF0
float zcam_near_d; // size: 0x4, address: 0x806F4110
float zcam_near_h; // size: 0x4, address: 0x806F4114
float zcam_near_pitch; // size: 0x4, address: 0x806F4118
float zcam_far_d; // size: 0x4, address: 0x806F411C
float zcam_far_h; // size: 0x4, address: 0x806F4120
float zcam_far_pitch; // size: 0x4, address: 0x806F4124
int zcam_near; // size: 0x4, address: 0x8076BAF8
static int sCamTweakCount; // size: 0x4, address: 0x8076BAFC
static class zCamTweak sCamTweakList[8]; // size: 0x100, address: 0x8076BB00
static float sCamTweakLerp; // size: 0x4, address: 0x8076BC00
static float sCamTweakTime; // size: 0x4, address: 0x8076BC04
static float sCamTweakPitch[2]; // size: 0x8, address: 0x8076BC08
static float sCamTweakDistMult[2]; // size: 0x8, address: 0x8076BC10
static float sCamTweakPivotHeight[2]; // size: 0x8, address: 0x8076BC18
static float sCamTweakFOV[2]; // size: 0x8, address: 0x8076BC20
static float sCamTweakPitchCur; // size: 0x4, address: 0x8076BC28
static float sCamTweakDistMultCur; // size: 0x4, address: 0x8076BC2C
static float sCamTweakPivotHeightCur; // size: 0x4, address: 0x8076BC30
static float sCamTweakFOVCur; // size: 0x4, address: 0x8076BC34
// Range: 0x8009B6C0 -> 0x8009B6D0
void World::_OGCamera_TweakEntity::Deactivate() {
}
// Range: 0x8009B6D0 -> 0x8009B720
void World::_OGCamera_TweakEntity::Destroy(class _OGCamera_TweakEntity * this /* r31 */) {
}
// signature: World::_OGCamera_TweakSchema::Fix(World::Asset *, long, int)
// Range: 0x8009B780 -> 0x8009B788
void World::_OGCamera_TweakSchema::Fix() {
}
// signature: World::_OGCamera_TweakSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8009B790 -> 0x8009B7DC
class EntityStub * World::_OGCamera_TweakSchema::CreateStub(class _OGCamera_TweakSchema * this /* r31 */) {
}
// signature: World::_OGCamera_TweakSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8009B7E0 -> 0x8009B7F8
void World::_OGCamera_TweakSchema::DestroyStub() {
}
// signature: World::_OGCamera_TweakSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8009B800 -> 0x8009B868
class Entity * World::_OGCamera_TweakSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World21_OGCamera_TweakEntity;
}
// Range: 0x8009B8B0 -> 0x8009B8B4
void zCameraTweakGlobal_Init() {
}
// signature: zCameraTweakGlobal_Add(unsigned long long, float, float, float, float, float, float)
// Range: 0x8009B8C0 -> 0x8009BB48
void zCameraTweakGlobal_Add() {
    // Local variables
    int i; // r0
    int j; // r0

    // References
    // -> static float sCamTweakTime;
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakPitch[2];
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakDistMult[2];
    // -> static class zCamTweak sCamTweakList[8];
    // -> static int sCamTweakCount;
}
// signature: zCameraTweakGlobal_Remove(unsigned long long)
// Range: 0x8009BB50 -> 0x8009BD78
void zCameraTweakGlobal_Remove() {
    // Local variables
    int i; // r10
    int j; // r0

    // References
    // -> static float sCamTweakTime;
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakPitch[2];
    // -> static class zCamTweak sCamTweakList[8];
    // -> static int sCamTweakCount;
}
// Range: 0x8009BD80 -> 0x8009BDEC
void zCameraTweakGlobal_Reset() {
    // References
    // -> static float sCamTweakFOVCur;
    // -> static float sCamTweakPivotHeightCur;
    // -> static float sCamTweakDistMultCur;
    // -> static float sCamTweakPitchCur;
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakTime;
    // -> static int sCamTweakCount;
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakPitch[2];
}
// Range: 0x8009BDF0 -> 0x8009BDFC
float zCameraTweakGlobal_GetPivotHeight() {
    // References
    // -> static float sCamTweakPivotHeightCur;
}
// signature: zCameraTweak_Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x8009BE00 -> 0x8009BE50
void zCameraTweak_Init(class xBase * data /* r30 */, class xDynAsset * asset /* r31 */) {
}
// signature: zCameraTweak_Save(zCameraTweak *, xSerial *)
// Range: 0x8009BE50 -> 0x8009BE54
void zCameraTweak_Save() {
}
// signature: zCameraTweak_Load(zCameraTweak *, xSerial *)
// Range: 0x8009BE60 -> 0x8009BE64
void zCameraTweak_Load() {
}
// signature: zCameraTweak_EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8009BE70 -> 0x8009BF50
void zCameraTweak_EventCB() {
    // Local variables
    class zCameraTweak * tweak; // r0
}
