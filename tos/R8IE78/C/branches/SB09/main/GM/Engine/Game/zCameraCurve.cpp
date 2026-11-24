/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCameraCurve.cpp
*/
static class zCamPool sCamCurvePOIPool; // size: 0x20, address: 0x80732550
static class zCamPool sCamCurveRailPool; // size: 0x20, address: 0x80732580
class xCam * sLastAddedCam; // size: 0x4, address: 0x807325A0
// signature: zCameraCurve::Follower::Init(const zCameraCurve &, const xVec3 &)
// Range: 0x8008E2F0 -> 0x8008E30C
void zCameraCurve::Follower::Init(class zCameraCurve & curveInfo /* r0 */) {
}
// signature: zCameraCurve::Follower::InterpVal(float, float, float, float)
// Range: 0x8008E310 -> 0x8008E354
float zCameraCurve::Follower::InterpVal() {
}
// signature: zCameraCurve::Follower::UpdatePosition(float)
// Range: 0x8008E360 -> 0x8008E54C
void zCameraCurve::Follower::UpdatePosition(class Follower * this /* r27 */) {
    // Local variables
    class CameraBeadProperty * b0; // r0
    class CameraBeadProperty * b1; // r0
}
// signature: zCameraCurve::Follower::UpdatePosition(const xVec3 &)
// Range: 0x8008E570 -> 0x8008E5D0
void zCameraCurve::Follower::UpdatePosition(class Follower * this /* r31 */) {
    // Local variables
    float newPlayerU; // r1+0x8
}
// signature: zCameraCurve::Follower::PlayerProjectPos(const xVec3 &) const
// Range: 0x8008E5D0 -> 0x8008E644
class xVec3 zCameraCurve::Follower::PlayerProjectPos() const {
    // Local variables
    float newPlayerU; // r1+0x8
    class xVec3 retVal; // r1+0x18
}
// Range: 0x8008E650 -> 0x8008E738
float zCameraCurve::Follower::CameraUFromPlayerU(class Follower * this /* r28 */, float playerU /* f31 */, int & outBeadIndex /* r29 */, float & outBeadIndexFrac /* r30 */) const {
    // Local variables
    int index; // r31
    class TwoCurveBeads * result; // r0
    float frac; // f3
    float diffPlayerU; // f1
    float cameraU; // f1
}
// Range: 0x8008E740 -> 0x8008E7BC
class Entity * Sext::CurveCamera::Create(class EntityHandleBase * handle /* r29 */, class CurveCamera * asset /* r30 */) {
    // References
    // -> struct {} __vt__12zCameraCurve;
}
// Range: 0x8008E7C0 -> 0x8008E91C
void zCameraCurve::Init(class zCameraCurve * this /* r29 */, class zCameraCurveAsset * asset /* r30 */) {
    // References
    // -> static class zCamPool sCamCurveRailPool;
    // -> static class zCamPool sCamCurvePOIPool;
}
// Range: 0x8008EA80 -> 0x8008EAF4
void zCameraCurve::InitOneCurve(class zCameraCurve * this /* r30 */, enum eCamCurve whichCurve /* r31 */) {
}
// signature: zCameraCurve::FindBeadPlayerU(float) const
// Range: 0x8008EB00 -> 0x8008EBC8
int zCameraCurve::FindBeadPlayerU() const {
    // Local variables
    int lo; // r5
    int hi; // r6
    int test; // r7

    {
        // Range: 0x8008EB5C -> 0x8008EBA0
        // Local variables
        float testU; // f0
    }
}
// Range: 0x8008EBD0 -> 0x8008EC90
bool zCameraCurve::Activate(class zCameraCurve * this /* r27 */, int viewportIndex /* r28 */, class xCamTransitionParams * transition /* r29 */, bool forceRestart /* r30 */) {
    // Local variables
    class xCam * theCam; // r31

    {
        // Range: 0x8008EBF8 -> 0x8008EC78
        // Local variables
        class zCamSplineCommonMix * splineHelper; // r0
    }

    // References
    // -> class xCam * sLastAddedCam;
}
// signature: zCameraCurve_EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8008EC90 -> 0x8008ED38
void zCameraCurve_EventCB() {
    {
        // Range: 0x8008ECB8 -> 0x8008ED1C
        // Local variables
        int viewportIndex; // r0
        class EventActionSwitch * params; // r0
    }
}
// Range: 0x8008ED40 -> 0x8008ED88
void zCameraCurve::Reset(class zCameraCurve * this /* r31 */) {
}
