/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xCamTransition.cpp
*/
class _OGtransition_timeSchema _OGtransition_timeschema; // size: 0x18, address: 0x80753A80
class SchemaRegistrator _OGtransition_timeschemaReg; // size: 0x8, address: 0x80753A98
// Range: 0x80023B90 -> 0x80023BA0
void World::_OGtransition_timeEntity::Deactivate() {
}
// Range: 0x80023BA0 -> 0x80023BF0
void World::_OGtransition_timeEntity::Destroy(class _OGtransition_timeEntity * this /* r31 */) {
}
// signature: World::_OGtransition_timeSchema::Fix(World::Asset *, long, int)
// Range: 0x80023C50 -> 0x80023C58
void World::_OGtransition_timeSchema::Fix() {
}
// signature: World::_OGtransition_timeSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80023C60 -> 0x80023CAC
class EntityStub * World::_OGtransition_timeSchema::CreateStub(class _OGtransition_timeSchema * this /* r31 */) {
}
// signature: World::_OGtransition_timeSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80023CB0 -> 0x80023CC8
void World::_OGtransition_timeSchema::DestroyStub() {
}
// signature: World::_OGtransition_timeSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80023CD0 -> 0x80023D38
class Entity * World::_OGtransition_timeSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World24_OGtransition_timeEntity;
}
// signature: xCamTransition::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x80023D80 -> 0x80023E18
void xCamTransition::Init(class xBase * data /* r31 */) {
}
// Range: 0x80023E20 -> 0x800242A4
void xCamTransition::Start(class xCamTransition * this /* r28 */, int viewportIndex /* r29 */) {
    // Local variables
    class zCam * zcam; // r30
    class xBase * destCamera; // r3
    class xCamTransitionParams params; // r1+0xC

    {
        // Range: 0x80023E98 -> 0x80023F90
        // Local variables
        bool forward; // r4
        class xBase * cameraB; // r27
    }
    {
        // Range: 0x8002406C -> 0x8002428C
        // Local variables
        class xCam * newCam; // r29

        {
            // Range: 0x8002407C -> 0x800241BC
            // Local variables
            class xMat4x3 frame; // r1+0x18
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zCamTransition_EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800242E0 -> 0x8002430C
void zCamTransition_EventCB() {
    {
        // Range: 0x800242EC -> 0x80024308
        // Local variables
        int viewportIndex; // r0
    }
}
// signature: xCamPathBias::Start(int)
// Range: 0x80024310 -> 0x80024390
void xCamPathBias::Start(class xCamPathBias * this /* r31 */) {
}
// Range: 0x80024390 -> 0x80024518
void xCamPathBias::Update(class xCamPathBias * this /* r30 */, float dt /* f31 */) {
}
// Range: 0x80024520 -> 0x80024530
void xCamPathBias::Reverse() {
}
// Range: 0x80024530 -> 0x8002455C
float xCamPathBias::GetBias() {
}
// Range: 0x80024560 -> 0x80024568
bool xCamPathBias::IsActive() {
}
// Range: 0x80024570 -> 0x80024598
bool xCamPathBias::DidComplete() {
}
// signature: xCamPathBias::CurveIntersectPlane(const xVec3 &, float &, float)
// Range: 0x800245A0 -> 0x80024A00
float xCamPathBias::CurveIntersectPlane(class xCamPathBias * this /* r29 */, float * u /* r30 */, float guess /* f22 */) {
    // Local variables
    class xPlane plane; // r1+0x38
    float distLo; // f0
    float distHi; // f0
    class xVec3 loPt; // r1+0x2C
    class xVec3 hiPt; // r1+0x20
    float loU; // f25
    float hiU; // f24
    class xVec3 segmentV; // r1+0x14
    float segmentLen2; // f0
    float t; // f1

    {
        // Range: 0x80024854 -> 0x8002487C
        // Local variables
        float guessDist; // f0
        class xVec3 guessPt; // r1+0x8
    }
}
