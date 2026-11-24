/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xCamTransition.cpp
*/
// Range: 0x80021550 -> 0x800215C8
void xCamTransition::Init(class xCamTransition * this /* r30 */, class transition_time & asset /* r31 */) {
}
// Range: 0x800215D0 -> 0x8002164C
class Entity * Sext::transition_time::Create(class EntityHandleBase * handle /* r29 */, class transition_time * asset /* r30 */) {
    // References
    // -> struct {} __vt__14xCamTransition;
}
// Range: 0x80021650 -> 0x80021688
bool xCamTransition::IsCut() {
}
// signature: xCamTransition::GetParams(xCamTransitionParams &)
// Range: 0x80021690 -> 0x800216D4
void xCamTransition::GetParams() {
}
// Range: 0x800216E0 -> 0x80021A00
void xCamTransition::Start(class xCamTransition * this /* r28 */, int viewportIndex /* r29 */) {
    // Local variables
    class zCam * zcam; // r31
    class xBase * destCamera; // reg65535
    class xCamTransitionParams params; // r1+0x8

    {
        // Range: 0x80021754 -> 0x8002182C
        // Local variables
        bool forward; // r4
        class xBase * cameraB; // r30
    }
    {
        // Range: 0x800218FC -> 0x800219E8
        // Local variables
        class xCam * newCam; // r30

        {
            // Range: 0x8002190C -> 0x800219D0
            // Local variables
            class xMat4x3 frame; // r1+0x18
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: xCamTransition::Completed(bool)
// Range: 0x80021A00 -> 0x80021A90
void xCamTransition::Completed() {
    {
        // Range: 0x80021A14 -> 0x80021A8C
        // Local variables
        float bias; // f0
    }
}
// signature: zCamTransition_EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80021A90 -> 0x80021ABC
void zCamTransition_EventCB() {
    {
        // Range: 0x80021A9C -> 0x80021AB8
        // Local variables
        int viewportIndex; // r0
    }
}
// Range: 0x80021B10 -> 0x80021B60
float xCamPathBias::GetInitialRawBias(class xCamPathBias * this /* r31 */) {
    // Local variables
    float rawBias; // r1+0x8
}
// Range: 0x80021B60 -> 0x80021EF8
float xCamPathBias::CurveIntersectPlane(class xCamPathBias * this /* r30 */, class xVec3 & planePoint /* r29 */, float & u /* r31 */, float guess /* f26 */) {
    // Local variables
    class xPlane plane; // r1+0x60
    float distLo; // f0
    float distHi; // f0
    class xVec3 loPt; // r1+0x50
    class xVec3 hiPt; // r1+0x44
    float loU; // f31
    float hiU; // f27
    class xVec3 segmentV; // r1+0x38
    float segmentLen2; // f1
    float t; // f1

    {
        // Range: 0x80021DC0 -> 0x80021E78
        // Local variables
        float guessDist; // f0
        class xVec3 guessPt; // r1+0x2C
    }
}
