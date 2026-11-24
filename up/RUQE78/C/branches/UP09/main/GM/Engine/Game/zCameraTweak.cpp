/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCameraTweak.cpp
*/
static int sCamTweakCount; // size: 0x4, address: 0x8081BE44
static class zCamTweak sCamTweakList[8]; // size: 0x1C0, address: 0x8081BE48
static float sCamTweakLerp; // size: 0x4, address: 0x8081C008
static float sCamTweakTime; // size: 0x4, address: 0x8081C00C
static float sCamTweakPitch[2]; // size: 0x8, address: 0x8081C010
static float sCamTweakDistMult[2]; // size: 0x8, address: 0x8081C018
static float sCamTweakPivotHeight[2]; // size: 0x8, address: 0x8081C020
static float sCamTweakFOV[2]; // size: 0x8, address: 0x8081C028
static float sCamTweakDirYaw[2]; // size: 0x8, address: 0x8081C030
static float sCamTweakDirYawRange[2]; // size: 0x8, address: 0x8081C038
static float sCamTweakDirPitch[2]; // size: 0x8, address: 0x8081C040
static float sCamTweakDirPitchRange[2]; // size: 0x8, address: 0x8081C048
static float sCamTweakDirRigidity[2]; // size: 0x8, address: 0x8081C050
static float sCamTweakPitchCur; // size: 0x4, address: 0x8081C058
static float sCamTweakDistMultCur; // size: 0x4, address: 0x8081C05C
static float sCamTweakPivotHeightCur; // size: 0x4, address: 0x8081C060
static float sCamTweakFOVCur; // size: 0x4, address: 0x8081C064
static float sCamTweakDirYawCur; // size: 0x4, address: 0x8081C068
static float sCamTweakDirYawRangeCur; // size: 0x4, address: 0x8081C06C
static float sCamTweakDirPitchCur; // size: 0x4, address: 0x8081C070
static float sCamTweakDirPitchRangeCur; // size: 0x4, address: 0x8081C074
static float sCamTweakDirRigidityCur; // size: 0x4, address: 0x8081C078
// Range: 0x8010B6D0 -> 0x8010B7AC
void zCameraTweakGlobal_Init() {
    // References
    // -> static float sCamTweakDirRigidityCur;
    // -> static float sCamTweakDirPitchRangeCur;
    // -> static float sCamTweakDirPitchCur;
    // -> static float sCamTweakDirYawRangeCur;
    // -> static float sCamTweakDirYawCur;
    // -> static float sCamTweakFOVCur;
    // -> static float sCamTweakPivotHeightCur;
    // -> static float sCamTweakDistMultCur;
    // -> static float sCamTweakPitchCur;
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakTime;
    // -> static int sCamTweakCount;
    // -> static float sCamTweakDirRigidity[2];
    // -> static float sCamTweakDirPitchRange[2];
    // -> static float sCamTweakDirPitch[2];
    // -> static float sCamTweakDirYawRange[2];
    // -> static float sCamTweakDirYaw[2];
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakPitch[2];
}
// signature: zCameraTweakGlobal_Add(unsigned long long, float, float, float, float, float, float, float, float, float, float, float)
// Range: 0x8010B7B0 -> 0x8010BEB4
void zCameraTweakGlobal_Add(float dirPitch /* f13 */, float dirPitchRange /* f12 */, float rigidity /* f11 */) {
    // Local variables
    int i; // r0
    int j; // r0

    // References
    // -> static float sCamTweakTime;
    // -> static float sCamTweakDirRigidity[2];
    // -> static float sCamTweakDirPitch[2];
    // -> static float sCamTweakDirPitchRange[2];
    // -> static float sCamTweakDirYaw[2];
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakPitch[2];
    // -> static float sCamTweakDirYawRange[2];
    // -> static class zCamTweak sCamTweakList[8];
    // -> static int sCamTweakCount;
}
// signature: zCameraTweakGlobal_Remove(unsigned long long)
// Range: 0x8010BEC0 -> 0x8010C568
bool zCameraTweakGlobal_Remove() {
    // Local variables
    int i; // r29
    int j; // r0

    // References
    // -> static float sCamTweakTime;
    // -> static float sCamTweakDirRigidity[2];
    // -> static float sCamTweakDirPitch[2];
    // -> static float sCamTweakDirPitchRange[2];
    // -> static float sCamTweakDirYaw[2];
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakDirYawRange[2];
    // -> static float sCamTweakPitch[2];
    // -> static int sCamTweakCount;
    // -> static class zCamTweak sCamTweakList[8];
}
// Range: 0x8010C570 -> 0x8010C650
class Entity * Sext::Camera_Tweak::Create(class EntityHandleBase * handle /* r29 */, class Camera_Tweak * asset /* r30 */) {
    // References
    // -> struct {} __vt__12zCameraTweak;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zCameraTweak_Save(zCameraTweak *, xSerial *)
// Range: 0x8010C650 -> 0x8010C654
void zCameraTweak_Save() {
}
// signature: zCameraTweak_Load(zCameraTweak *, xSerial *)
// Range: 0x8010C660 -> 0x8010C664
void zCameraTweak_Load() {
}
// signature: zCameraTweak_EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8010C670 -> 0x8010C814
void zCameraTweak_EventCB(class xBase * to /* r31 */) {
    // Local variables
    class zCameraTweak * tweak; // r0
}
