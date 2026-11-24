/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCameraTweak.cpp
*/
class zCamTweak forcedDefault; // size: 0x40, address: 0x806B4FC0
bool tweakChanged; // size: 0x1, address: 0x807325A4
unsigned int forcedDefaultCount; // size: 0x4, address: 0x807325A8
static int sCamTweakCount; // size: 0x4, address: 0x807325AC
static class zCamTweak sCamTweakList[8]; // size: 0x200, address: 0x807325B0
static class xVec3 sCamTweakPos; // size: 0xC, address: 0x807327B0
static float sCamTweakLerp; // size: 0x4, address: 0x807327BC
static float sCamTweakTime; // size: 0x4, address: 0x807327C0
static float sCamTweakPitch[2]; // size: 0x8, address: 0x807327C8
static float sCamTweakDistAdj[2]; // size: 0x8, address: 0x807327D0
static float sCamTweakPivotHeight[2]; // size: 0x8, address: 0x807327D8
static float sCamTweakFOV[2]; // size: 0x8, address: 0x807327E0
static float sCamTweakDirYaw[2]; // size: 0x8, address: 0x807327E8
static float sCamTweakDirYawRange[2]; // size: 0x8, address: 0x807327F0
static float sCamTweakDirPitch[2]; // size: 0x8, address: 0x807327F8
static float sCamTweakDirPitchRange[2]; // size: 0x8, address: 0x80732800
static float sCamTweakDirRigidity[2]; // size: 0x8, address: 0x80732808
static float sCamTweakPitchCur; // size: 0x4, address: 0x80732810
static float sCamTweakDistAdjCur; // size: 0x4, address: 0x80732814
static float sCamTweakPivotHeightCur; // size: 0x4, address: 0x80732818
static float sCamTweakFOVCur; // size: 0x4, address: 0x8073281C
static float sCamTweakDirYawCur; // size: 0x4, address: 0x80732820
static float sCamTweakDirYawRangeCur; // size: 0x4, address: 0x80732824
static float sCamTweakDirPitchCur; // size: 0x4, address: 0x80732828
static float sCamTweakDirPitchRangeCur; // size: 0x4, address: 0x8073282C
static float sCamTweakDirRigidityCur; // size: 0x4, address: 0x80732830
// signature: zCameraTweakNS::isDirYawActive(float)
// Range: 0x8008F850 -> 0x8008F894
bool zCameraTweakNS::isDirYawActive() {
}
// signature: zCameraTweakNS::isDirPitchActive(float)
// Range: 0x8008F8A0 -> 0x8008F8E4
bool zCameraTweakNS::isDirPitchActive() {
}
// Range: 0x8008EDC0 -> 0x8008F018
void zCameraTweakNS::zCamTweak::UpdateFromCurve(class zCamTweak * this /* r29 */) {
    // Local variables
    float dist; // r1+0xC
    float u; // r1+0x8
    class Vector3 playerPos; // r1+0x34
    class xVec3 tmp; // r1+0x28

    {
        // Range: 0x8008EE64 -> 0x8008EFF0
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x8008EE64 -> 0x8008EFF0
            // Local variables
            float fraction; // f30
        }
    }
}
// signature: zCameraTweakNS::zCamTweak::GetTargetPosition(xBase *, xVec3 &)
// Range: 0x8008F290 -> 0x8008F2FC
void zCameraTweakNS::zCamTweak::GetTargetPosition() {
}
// Range: 0x8008F030 -> 0x8008F284
bool zCameraTweakNS::zCamTweak::UpdateOrientationFromTarget(class zCamTweak * this /* r30 */, int beadIdx /* r31 */, float fraction /* f31 */) {
    {
        // Range: 0x8008F038 -> 0x8008F1F0
        // Local variables
        class xVec3 euler2; // r1+0xA4
        class xVec3 euler1; // r1+0xB0

        {
            // Range: 0x8008F070 -> 0x8008F0C8
            // Local variables
            class xVec3 targetPos; // r1+0x98
        }
        {
            // Range: 0x8008F118 -> 0x8008F174
            // Local variables
            class xVec3 targetPos; // r1+0x8C
        }
    }
    {
        // Range: 0x8008F1F0 -> 0x8008F260
        // Local variables
        class xVec3 euler; // r1+0x74
        class xVec3 targetPos; // r1+0x80
    }
}
// Range: 0x8008F3B0 -> 0x8008F3B4
void zCameraTweakGlobal_Init() {
}
// Range: 0x8008F3C0 -> 0x8008F84C
void zCameraTweakGlobal_Add(unsigned long long owner /* r27:r26 */, class zCamTweak * tweakValue /* r28 */) {
    // Local variables
    float priority; // f28
    float time; // f27
    float pitch; // f26
    float distAdjust; // f25
    float pivotHeight; // f24
    float fov; // f23
    float dirYaw; // f22
    float dirYawRange; // f21
    float dirPitch; // f31
    float dirPitchRange; // f30
    float rigidity; // f29
    int i; // r0
    int j; // r29

    // References
    // -> static float sCamTweakTime;
    // -> static float sCamTweakDirRigidity[2];
    // -> static float sCamTweakDirPitch[2];
    // -> static float sCamTweakDirPitchRange[2];
    // -> static float sCamTweakDirYaw[2];
    // -> static float sCamTweakDirYawRange[2];
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakDistAdj[2];
    // -> static float sCamTweakLerp;
    // -> bool tweakChanged;
    // -> static float sCamTweakPitch[2];
    // -> static class zCamTweak sCamTweakList[8];
    // -> static int sCamTweakCount;
}
// signature: zCameraTweakGlobal_Remove(unsigned long long)
// Range: 0x8008F980 -> 0x8008FCDC
bool zCameraTweakGlobal_Remove() {
    // Local variables
    int i; // reg65535
    int j; // r30

    // References
    // -> static float sCamTweakTime;
    // -> static float sCamTweakDirRigidity[2];
    // -> static float sCamTweakDirPitch[2];
    // -> static float sCamTweakDirPitchRange[2];
    // -> static float sCamTweakDirYaw[2];
    // -> static float sCamTweakDirYawRange[2];
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakDistAdj[2];
    // -> static float sCamTweakLerp;
    // -> bool tweakChanged;
    // -> static float sCamTweakPitch[2];
    // -> static class zCamTweak sCamTweakList[8];
    // -> static int sCamTweakCount;
}
// Range: 0x8008FCE0 -> 0x8008FE38
void zCameraTweakGlobal_Reset() {
    {
        // Range: 0x8008FD38 -> 0x8008FD68
        // Local variables
        int i; // r0
    }

    // References
    // -> static float sCamTweakDirRigidityCur;
    // -> static float sCamTweakDirPitchRangeCur;
    // -> static float sCamTweakDirPitchCur;
    // -> static float sCamTweakDirYawRangeCur;
    // -> static float sCamTweakDirYawCur;
    // -> static float sCamTweakFOVCur;
    // -> static float sCamTweakPivotHeightCur;
    // -> static float sCamTweakDistAdjCur;
    // -> static float sCamTweakPitchCur;
    // -> static float sCamTweakDirRigidity[2];
    // -> static float sCamTweakDirPitchRange[2];
    // -> static float sCamTweakDirPitch[2];
    // -> static float sCamTweakDirYawRange[2];
    // -> static float sCamTweakDirYaw[2];
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakDistAdj[2];
    // -> static float sCamTweakPitch[2];
    // -> static class xVec3 sCamTweakPos;
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakTime;
    // -> static class zCamTweak sCamTweakList[8];
    // -> static int sCamTweakCount;
    // -> unsigned int forcedDefaultCount;
    // -> bool tweakChanged;
}
// signature: zCameraTweakGlobal_ForceDefault(bool)
// Range: 0x8008FE40 -> 0x8008FEF0
void zCameraTweakGlobal_ForceDefault() {
    // References
    // -> class zCamTweak forcedDefault;
    // -> unsigned int forcedDefaultCount;
}
// signature: zCameraTweakGlobal_Update(float)
// Range: 0x8008FEF0 -> 0x80090114
void zCameraTweakGlobal_Update() {
    // References
    // -> static float sCamTweakDirRigidityCur;
    // -> static float sCamTweakDirPitchRangeCur;
    // -> static float sCamTweakDirPitchCur;
    // -> static float sCamTweakDirYawRangeCur;
    // -> static float sCamTweakDirYawCur;
    // -> static float sCamTweakDistAdjCur;
    // -> static float sCamTweakFOVCur;
    // -> static float sCamTweakPivotHeightCur;
    // -> static float sCamTweakPitchCur;
    // -> bool tweakChanged;
    // -> static float sCamTweakDirRigidity[2];
    // -> static float sCamTweakDirPitchRange[2];
    // -> static float sCamTweakDirPitch[2];
    // -> static float sCamTweakDirYawRange[2];
    // -> static float sCamTweakDirYaw[2];
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakDistAdj[2];
    // -> static float sCamTweakPitch[2];
    // -> static class zCamTweak sCamTweakList[8];
    // -> static float sCamTweakLerp;
    // -> static int sCamTweakCount;
    // -> static float sCamTweakTime;
}
// signature: zCameraTweakGlobal_GetFirstTargetPosition(xVec3 &)
// Range: 0x80090120 -> 0x80090188
bool zCameraTweakGlobal_GetFirstTargetPosition() {
    // References
    // -> static class zCamTweak sCamTweakList[8];
    // -> static int sCamTweakCount;
}
// Range: 0x80090190 -> 0x8009020C
class Entity * Sext::Camera_Tweak::Create(class EntityHandleBase * handle /* r29 */, class Camera_Tweak * asset /* r30 */) {
    // References
    // -> struct {} __vt__12zCameraTweak;
}
// Range: 0x80090210 -> 0x80090258
void zCameraTweak_Init(class zCameraTweak * tweak /* r30 */, class Camera_Tweak * asset /* r31 */) {
}
// Range: 0x80090260 -> 0x80090398
void zCameraTweak::DebugReset(class zCameraTweak * this /* r31 */) {
    {
        // Range: 0x80090274 -> 0x80090384
        // Local variables
        class zCamTweak tweakValue; // r1+0x8
    }
}
// signature: zCameraTweak_EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800903A0 -> 0x8009055C
void zCameraTweak_EventCB() {
    // Local variables
    class zCameraTweak * tweak; // r31

    {
        // Range: 0x80090444 -> 0x8009052C
        // Local variables
        class zCamTweak tweakValue; // r1+0x8
    }
}
// signature: zCamTweakCurveEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80090560 -> 0x8009057C
static void zCamTweakCurveEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x80090580 -> 0x800905C8
void zCamTweakCurve::Init(class zCamTweakCurve * this /* r30 */, class zCamTweakCurveAsset * inAsset /* r31 */) {
}
// Range: 0x800905D0 -> 0x80090688
void zCamTweakCurve::Setup(class zCamTweakCurve * this /* r27 */) {
    // Local variables
    class EntityHandleBase * handle; // r0
    int count; // r29

    {
        // Range: 0x80090630 -> 0x80090674
        // Local variables
        int i; // r28
    }
}
// Range: 0x80090690 -> 0x800906E8
void zCamTweakCurve::DebugReset(class zCamTweakCurve * this /* r29 */) {
}
// signature: zCamTweakCurve::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800906F0 -> 0x8009081C
void zCamTweakCurve::HandleEvent(class zCamTweakCurve * this /* r31 */) {
    {
        // Range: 0x8009076C -> 0x800907E0
        // Local variables
        class zCamTweak tweakValue; // r1+0x8
    }
}
// Range: 0x80090820 -> 0x8009089C
class Entity * Sext::zCamTweakCurveAsset::Create(class EntityHandleBase * handle /* r29 */, class zCamTweakCurveAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__14zCamTweakCurve;
}
