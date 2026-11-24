/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zTrigger.cpp
*/
static class xBox sUnitBox; // size: 0x18, address: 0x8075A6F0
static struct {} __vt__Q219@unnamed@WAD03_cpp@26zSoundAssetPreloadRunnable; // size: 0x10, address: 0x806C6C58
struct {} __vt__Q36System6Thread8Runnable; // size: 0x10, address: 0x806C6C68
class zTriggerListEntry * gTriggerList; // size: 0x4, address: 0x8075A708
int gTriggerListSize; // size: 0x4, address: 0x8075A70C
// Range: 0x8017C260 -> 0x8017C2B0
void zTriggerSceneExit() {
    // References
    // -> int gTriggerListSize;
    // -> class zTriggerListEntry * gTriggerList;
}
// Range: 0x8017C2B0 -> 0x8017C324
class Entity * Sext::zTriggerAsset::Create(class EntityHandleBase * handle /* r29 */, class zTriggerAsset * asset /* r30 */) {
}
// Range: 0x8017C380 -> 0x8017C480
static void @unnamed@WAD03_cpp@::zTriggerSetFrameFromTransform(class zTrigger * trig /* r30 */) {
    {
        // Range: 0x8017C3A0 -> 0x8017C41C
        // Local variables
        class Vector4 row_3; // r1+0x8
        class Vector4 row_2; // r1+0x18
        class Vector4 row_1; // r1+0x28
    }
}
// Range: 0x8017C480 -> 0x8017C5A8
void zTriggerInit(class zTrigger * trig /* r30 */, class TriggerOGBase * baseAsset /* r31 */) {
    {
        // Range: 0x8017C4C8 -> 0x8017C500
        // Local variables
        class xMat3x3 mat; // r1+0x8
    }
    {
        // Range: 0x8017C528 -> 0x8017C56C
        // Local variables
        unsigned int i; // r0
    }
}
// Range: 0x8017C5B0 -> 0x8017C69C
void zSceneSetupTriggers() {
    // Local variables
    int numTriggers; // r0

    {
        // Range: 0x8017C5B8 -> 0x8017C5B8
        // Local variables
        class zTriggerSetup_CB _tempCB; // r1+0xC
    }
    {
        // Range: 0x8017C5D8 -> 0x8017C5D8
        // Local variables
        class zTriggerSetup_CB _tempCB; // r1+0x8
    }

    // References
    // -> int gTriggerListSize;
    // -> class zTriggerListEntry * gTriggerList;
    // -> class zGlobals globals;
}
// Range: 0x8017C700 -> 0x8017C8A8
bool zTrigger::PointIntersects(class zTrigger * this /* r5 */, class xVec3 & chkPos /* r30 */) const {
    {
        // Range: 0x8017C74C -> 0x8017C7A0
        // Local variables
        class xIsect isect; // r1+0xCC
        class xVec3 xformVec; // r1+0x28
    }
    {
        // Range: 0x8017C7A0 -> 0x8017C7E8
        // Local variables
        class xIsect isect; // r1+0xA0
        class xSphere sphere; // r1+0x18
    }
    {
        // Range: 0x8017C7E8 -> 0x8017C838
        // Local variables
        class xIsect isect; // r1+0x74
        class xCylinder cylinder; // r1+0x34
    }
    {
        // Range: 0x8017C838 -> 0x8017C880
        // Local variables
        class xIsect isect; // r1+0x48
        class xSphere sphere; // r1+0x8
    }

    // References
    // -> static class xBox sUnitBox;
}
// Range: 0x8017C8B0 -> 0x8017C938
void zTrigger::DebugReset(class zTrigger * this /* r31 */) {
}
// Range: 0x8017C940 -> 0x8017C9C0
void zTrigger::GetCenter(class zTrigger * this /* r5 */, class xVec3 * center /* r31 */) {
}
// Range: 0x8017C9C0 -> 0x8017CAC4
float zTrigger::GetUpdateDistance(class zTrigger * this /* r31 */) {
}
// Range: 0x8017CAD0 -> 0x8017CB30
void zTrigger::UpdateTriggerEntry(class zTrigger * this /* r31 */) {
}
// signature: zTriggerEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017CB30 -> 0x8017CDA4
void zTriggerEventCB(class xBase * from /* r30 */, unsigned int toEvent /* r26 */, class EventAny * genericParams /* r27 */) {
    // Local variables
    class zTrigger * trig; // r31

    {
        // Range: 0x8017CC20 -> 0x8017CCE0
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r28
        class EventActionDrivenBy * params; // r0
    }
    {
        // Range: 0x8017CD2C -> 0x8017CD48
        // Local variables
        float fadeTime; // f0
        class EventActionSetGlobalReverb * params; // r0
    }
    {
        // Range: 0x8017CD4C -> 0x8017CD8C
        // Local variables
        int i; // r28
    }
}
// Range: 0x8017CDB0 -> 0x8017CE58
void zTriggerReset(class zTrigger * trig /* r31 */) {
}
// signature: xRayHitsPlaneX(const xVec3 &, const xVec3 &, float, float &, float &)
// Range: 0x8017D560 -> 0x8017D5D0
bool xRayHitsPlaneX() {
    // Local variables
    float x_total; // f5
    float percent; // f4
}
// signature: xRayHitsPlaneY(const xVec3 &, const xVec3 &, float, float &, float &)
// Range: 0x8017D5D0 -> 0x8017D640
bool xRayHitsPlaneY() {
    // Local variables
    float y_total; // f5
    float percent; // f4
}
// signature: xRayHitsPlaneZ(const xVec3 &, const xVec3 &, float, float &, float &)
// Range: 0x8017D640 -> 0x8017D6B0
bool xRayHitsPlaneZ() {
    // Local variables
    float z_total; // f5
    float percent; // f4
}
// signature: xRayHitsTrigger(const xVec3 &, const xVec3 &, const xMat4x3 &, bool &)
// Range: 0x8017CE60 -> 0x8017D560
bool xRayHitsTrigger() {
    // Local variables
    class xBox & b; // r31
    class xVec3 start; // r1+0x44
    class xVec3 end; // r1+0x38
    class xVec3 startToEnd; // r1+0x2C
    float t; // f3
    class xVec3 closestPoint; // r1+0x20
    float hit_x; // r1+0x10
    float hit_y; // r1+0xC
    float hit_z; // r1+0x8

    {
        // Range: 0x8017CE68 -> 0x8017D194
        // Local variables
        float len2; // f13
        float edot; // f1
        float sdot; // f0
        float m2; // f12
        float m1; // f8
        float m0; // f11
        int endInsideCount; // r7
        int startInsideCount; // r4
        float endZ; // f8
        float endY; // f7
        float endX; // f6
        float startZ; // f5
        float startY; // f4
        float startX; // f3
    }

    // References
    // -> static class xBox sUnitBox;
}
// signature: xRayHitsTrigger(const xVec3 &, const xVec3 &, const xVec3 &, float, const xSphere &, bool &)
// Range: 0x8017D6B0 -> 0x8017D7E4
bool xRayHitsTrigger(class xVec3 & start /* r28 */, class xVec3 & end /* r0 */, class xVec3 & dir /* r29 */, class xSphere & s /* r30 */, bool & end_inside /* r31 */) {
    // Local variables
    float radius_squ; // f31
    class xVec3 end_to_sphere; // r1+0x20
    class xVec3 start_to_sphere; // r1+0x14
    class xVec3 out_vec; // r1+0x8
}
// signature: zTrigger::DriveAttach(World::xOGEntity *, unsigned int, int)
// Range: 0x8017D7F0 -> 0x8017D88C
void zTrigger::DriveAttach(class zTrigger * this /* r29 */, class xOGEntity * passenger /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    class xMat4x3 D; // r1+0x48
    class xVec3 euler; // r1+0xC
    class xMat3x3 a_descaled; // r1+0x18
    float dummy; // r1+0x8
}
// signature: zTrigger::DriveGetCurMat(int)
// Range: 0x8017D890 -> 0x8017D898
class xMat4x3 * zTrigger::DriveGetCurMat() {
}
// signature: zTrigger::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x8017D8A0 -> 0x8017D9DC
void zTrigger::DriveCauseMove(class zTrigger * this /* r27 */, class xMat4x3 * parent /* r28 */, class xMat4x3 * oldMat /* r29 */, bool rotate /* r30 */, bool yaw /* r31 */, float givenYaw /* f31 */) {
    // Local variables
    class xMat4x3 baseMat; // r1+0x78
    class xVec3 newEuler; // r1+0xC

    {
        // Range: 0x8017D8E4 -> 0x8017D928
        // Local variables
        float dummy; // r1+0x8
        class xMat3x3 a_descaled; // r1+0x48
    }
    {
        // Range: 0x8017D928 -> 0x8017D990
        // Local variables
        class xMat3x3 rot; // r1+0x18

        {
            // Range: 0x8017D938 -> 0x8017D950
            // Local variables
            float yawDiff; // f1
        }
    }
}
