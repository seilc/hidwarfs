/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCameraCurve.cpp
*/
static class zCamPool sCamCurvePOIPool; // size: 0x20, address: 0x8081BD68
static class zCamPool sCamCurveRailPool; // size: 0x20, address: 0x8081BD98
class xCam * sLastAddedCam; // size: 0x4, address: 0x8081BDB8
// Range: 0x80109E40 -> 0x8010A300
void zCameraCurve::Follower::UpdatePosition(class Follower * this /* r31 */, float playerU /* f31 */) {
    // Local variables
    class CameraBeadProperty * b0; // r3
    class CameraBeadProperty * b1; // r4
}
// signature: zCameraCurve::Follower::InterpBeadInfo(bool)
// Range: 0x8010A300 -> 0x8010A378
class BeadInfo & zCameraCurve::Follower::InterpBeadInfo(class Follower * this /* r31 */) {
}
// Range: 0x8010A380 -> 0x8010A448
class Entity * Sext::CurveCamera::Create(class EntityHandleBase * handle /* r29 */, class CurveCamera * asset /* r30 */) {
    // References
    // -> struct {} __vt__12zCameraCurve;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x8010A450 -> 0x8010A5C4
void zCameraCurve::Init(class zCameraCurve * this /* r29 */, class zCameraCurveAsset * asset /* r30 */) {
    // References
    // -> static class zCamPool sCamCurveRailPool;
    // -> static class zCamPool sCamCurvePOIPool;
}
// Range: 0x8010AAC0 -> 0x8010AB4C
void zCameraCurve::InitOneCurve(class zCameraCurve * this /* r30 */, enum eCamCurve whichCurve /* r31 */) {
}
// signature: zCameraCurve::FindBeadPlayerU(float) const
// Range: 0x8010AB50 -> 0x8010AC18
int zCameraCurve::FindBeadPlayerU() const {
    // Local variables
    int lo; // r5
    int hi; // r6
    int test; // r7

    {
        // Range: 0x8010ABAC -> 0x8010ABE8
        // Local variables
        float testU; // f0
    }
}
// Range: 0x8010AC20 -> 0x8010AD4C
bool zCameraCurve::Activate(class zCameraCurve * this /* r26 */, int viewportIndex /* r27 */, class xCamTransitionParams * transition /* r28 */, bool forceRestart /* r29 */) {
    {
        // Range: 0x8010ACB4 -> 0x8010AD34
        // Local variables
        class zCamSplineCommonMix * splineHelper; // r0
    }

    // References
    // -> class xCam * sLastAddedCam;
}
// signature: zCameraCurve_EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8010AD50 -> 0x8010AEE0
void zCameraCurve_EventCB(class xBase * to /* r29 */) {
    {
        // Range: 0x8010AD84 -> 0x8010AEBC
        // Local variables
        int viewportIndex; // r30
        class EventActionSwitch * params; // r0
    }

    // References
    // -> class xCam * sLastAddedCam;
}
