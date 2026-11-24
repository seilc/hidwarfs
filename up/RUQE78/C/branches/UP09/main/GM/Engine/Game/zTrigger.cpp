/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zTrigger.cpp
*/
static class xBox sUnitBox; // size: 0x18, address: 0x8082C148
// Range: 0x80267140 -> 0x802672D0
class Entity * Sext::zTriggerAsset::Create(class EntityHandleBase * handle /* r29 */, class zTriggerAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__8zTrigger;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: @unnamed@WAD03_cpp@::zTriggerSetFrameFromTransform(zTrigger *)
// Range: 0x802672D0 -> 0x802673F4
static void @unnamed@WAD03_cpp@::zTriggerSetFrameFromTransform() {
    {
        // Range: 0x802672E0 -> 0x80267384
        // Local variables
        class Vector4 row_3; // r1+0x8
        class Vector4 row_2; // r1+0x18
        class Vector4 row_1; // r1+0x28
    }
}
// Range: 0x80267400 -> 0x802674DC
void zSceneSetupTriggers() {
    // References
    // -> class zGlobals globals;
}
// signature: zTriggerUpdate(zTrigger *, xScene *, float)
// Range: 0x802674E0 -> 0x802674E4
void zTriggerUpdate() {
}
// signature: zTrigger::AddObserver(zDelegateP2<void, unsigned int, xBase *> *)
// Range: 0x802674F0 -> 0x802675D4
void zTrigger::AddObserver() {
    // Local variables
    int firstEmpty; // r7

    {
        // Range: 0x802674F8 -> 0x80267534
        // Local variables
        int i; // r8
    }
}
// signature: zTrigger::PointIntersects(const xVec3 &) const
// Range: 0x802675E0 -> 0x80267824
bool zTrigger::PointIntersects() const {
    {
        // Range: 0x8026761C -> 0x80267708
        // Local variables
        class xIsect isect; // r1+0xCC
        class xVec3 xformVec; // r1+0x28
    }
    {
        // Range: 0x80267708 -> 0x8026775C
        // Local variables
        class xIsect isect; // r1+0xA0
        class xSphere sphere; // r1+0x18
    }
    {
        // Range: 0x8026775C -> 0x802677B4
        // Local variables
        class xIsect isect; // r1+0x74
        class xCylinder cylinder; // r1+0x34
    }
    {
        // Range: 0x802677B4 -> 0x80267804
        // Local variables
        class xIsect isect; // r1+0x48
        class xSphere sphere; // r1+0x8
    }

    // References
    // -> static class xBox sUnitBox;
}
// Range: 0x80267830 -> 0x80267970
float zTrigger::GetUpdateDistance() {
}
// signature: zTriggerEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80267970 -> 0x80267CF4
void zTriggerEventCB(class xBase * from /* r30 */, unsigned int toEvent /* r27 */, class EventAny * genericParams /* r29 */) {
    // Local variables
    class zTrigger * trig; // r31

    {
        // Range: 0x80267B68 -> 0x80267C30
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r28
        class EventActionDrivenBy * params; // r0
    }
    {
        // Range: 0x80267C7C -> 0x80267C98
        // Local variables
        float fadeTime; // f0
        class EventActionSetGlobalReverb * params; // r0
    }
    {
        // Range: 0x80267C9C -> 0x80267CCC
        // Local variables
        int i; // r28
    }
}
// signature: xRayHitsTrigger(const xVec3 &, const xVec3 &, const xMat4x3 &, bool &)
// Range: 0x80267D00 -> 0x80268604
bool xRayHitsTrigger() {
    // Local variables
    class xBox & b; // r7
    class xVec3 start; // r1+0x38
    class xVec3 end; // r1+0x2C
    class xVec3 startToEnd; // r1+0x20
    float t; // f4
    class xVec3 closestPoint; // r1+0x14
    float hit_x; // f0
    float hit_y; // f1
    float hit_z; // f2

    // References
    // -> static class xBox sUnitBox;
}
