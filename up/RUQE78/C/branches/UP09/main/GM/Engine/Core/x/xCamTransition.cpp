/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xCamTransition.cpp
*/
// Range: 0x80043840 -> 0x80043970
class Entity * Sext::transition_time::Create(class EntityHandleBase * handle /* r29 */, class transition_time * asset /* r30 */) {
    // References
    // -> struct {} __vt__14xCamTransition;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80043970 -> 0x80043D28
void xCamTransition::Start(class xCamTransition * this /* r28 */, int viewportIndex /* r29 */) {
    // Local variables
    class zCam * zcam; // r30
    class xBase * destCamera; // r3
    class xCamTransitionParams params; // r1+0xC

    {
        // Range: 0x800439E8 -> 0x80043AE0
        // Local variables
        bool forward; // r4
        class xBase * cameraB; // r27
    }
    {
        // Range: 0x80043BAC -> 0x80043D10
        // Local variables
        class xCam * newCam; // r29

        {
            // Range: 0x80043BBC -> 0x80043CF8
            // Local variables
            class xMat4x3 frame; // r1+0x18
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zCamTransition_EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80043D30 -> 0x80043D5C
void zCamTransition_EventCB() {
    {
        // Range: 0x80043D3C -> 0x80043D58
        // Local variables
        int viewportIndex; // r0
    }
}
// signature: xCamPathBias::CurveIntersectPlane(const xVec3 &, float &, float)
// Range: 0x80043D60 -> 0x800441FC
float xCamPathBias::CurveIntersectPlane(class xCamPathBias * this /* r29 */, float & u /* r30 */, float guess /* f22 */) {
    // Local variables
    class xPlane plane; // r1+0x60
    float distLo; // f0
    float distHi; // f0
    class xVec3 loPt; // r1+0x50
    class xVec3 hiPt; // r1+0x44
    float loU; // f25
    float hiU; // f24
    class xVec3 segmentV; // r1+0x38
    float segmentLen2; // f0
    float t; // f1

    {
        // Range: 0x80044040 -> 0x80044068
        // Local variables
        float guessDist; // f0
        class xVec3 guessPt; // r1+0x2C
    }
}
