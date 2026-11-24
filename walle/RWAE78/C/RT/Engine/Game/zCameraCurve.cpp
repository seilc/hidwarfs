/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCameraCurve.cpp
*/
static class zCamPool sCamCurvePOIPool; // size: 0x20, address: 0x8076B9B8
static class zCamPool sCamCurveRailPool; // size: 0x20, address: 0x8076B9E8
class xCam * sLastAddedCam; // size: 0x4, address: 0x8076BA08
// Range: 0x80099C60 -> 0x80099FA0
void zCameraCurve::Follower::UpdatePosition(class Follower * this /* r31 */, float playerU /* f31 */) {
    // Local variables
    class CameraBeadProperty * b0; // r3
    class CameraBeadProperty * b1; // r4
}
// signature: zCameraCurve::Follower::InterpBeadInfo(bool)
// Range: 0x80099FB0 -> 0x8009A00C
class BeadInfo * zCameraCurve::Follower::InterpBeadInfo(class Follower * this /* r31 */) {
}
// signature: zCameraCurve_Init(void *, void *)
// Range: 0x8009A020 -> 0x8009A024
void zCameraCurve_Init() {
}
// Range: 0x8009A030 -> 0x8009A1B4
void zCameraCurve::Init(class zCameraCurve * this /* r29 */, class zCameraCurveAsset * asset /* r30 */) {
    // References
    // -> static class zCamPool sCamCurveRailPool;
    // -> static class zCamPool sCamCurvePOIPool;
}
// Range: 0x8009A6A0 -> 0x8009A758
void zCameraCurve::InitOneCurve(class zCameraCurve * this /* r27 */, enum eCamCurve whichCurve /* r28 */) {
    // Local variables
    class Curve * pCurve; // r29
}
// signature: zCameraCurve::FindBeadPlayerU(float) const
// Range: 0x8009A760 -> 0x8009A828
int zCameraCurve::FindBeadPlayerU() const {
    // Local variables
    int lo; // r5
    int hi; // r6
    int test; // r7

    {
        // Range: 0x8009A7BC -> 0x8009A7F8
        // Local variables
        float testU; // f0
    }
}
// Range: 0x8009A830 -> 0x8009A990
bool zCameraCurve::Activate(class zCameraCurve * this /* r27 */, int viewportIndex /* r28 */, class xCamTransitionParams * transition /* r30 */, bool forceRestart /* r31 */) {
    {
        // Range: 0x8009A8A8 -> 0x8009A978
        // Local variables
        class zCamSplineCommonMix * splineHelper; // r0
    }

    // References
    // -> class xCam * sLastAddedCam;
}
// signature: zCameraCurve_EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8009A990 -> 0x8009AB6C
void zCameraCurve_EventCB(class xBase * to /* r28 */) {
    {
        // Range: 0x8009A9CC -> 0x8009AB40
        // Local variables
        int viewportIndex; // r29
        class EventActionSwitch * params; // r0
    }

    // References
    // -> class xCam * sLastAddedCam;
}
