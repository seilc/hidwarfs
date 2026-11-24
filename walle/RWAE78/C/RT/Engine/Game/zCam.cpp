/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCam.cpp
*/
static unsigned int transitionUIDtable[4]; // size: 0x10, address: 0x806F40D0
class zCamFollow defaultCam[4]; // size: 0x1120, address: 0x8076A618
// Range: 0x8008AA70 -> 0x8008AC68
class xVec3 * zTargetBlender::Update(class zTargetBlender * this /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x8008AB98 -> 0x8008AC44
        // Local variables
        float s; // f0
        float t; // f7
    }
}
// Range: 0x8008AC70 -> 0x8008AC9C
void * zCam::zCam() {
}
// signature: zCam::SceneEnter(zScene &)
// Range: 0x8008ACA0 -> 0x8008AEA4
void zCam::SceneEnter(class zCam * this /* r30 */) {
    // References
    // -> static float sCamTweakDistMultCur;
    // -> static float sCamTweakFOVCur;
    // -> static float sCamTweakPivotHeightCur;
    // -> static float sCamTweakPitchCur;
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakPitch[2];
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakTime;
    // -> class xVec3 m_Null;
    // -> class zCamFollow defaultCam[4];
}
// Range: 0x8008AEB0 -> 0x8008B004
void zCam::SceneExit() {
    // References
    // -> static class zCamPool FixedCamPool;
    // -> class xCam * sLastAddedCam;
    // -> static class zCamPool POICamPool;
    // -> static class zCamPool sCamCurvePOIPool;
    // -> static class zCamPool sCamCurveRailPool;
}
// Range: 0x8008B020 -> 0x8008B41C
void zCam::zCamReset(class zCam * this /* r29 */, bool refreshCameraTarget /* r25 */) {
    // References
    // -> static float sCamTweakPivotHeightCur;
    // -> static float sCamTweakDistMultCur;
    // -> static float sCamTweakFOVCur;
    // -> static float sCamTweakPitchCur;
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakPitch[2];
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakTime;
    // -> class xGlobals * xglobals;
}
// Range: 0x8008B420 -> 0x8008B99C
void zCam::zCamSetCamera(class zCam * this /* r27 */, unsigned long long cameraID /* r29:r28 */, bool forceRestart /* r30 */) {
    {
        // Range: 0x8008B594 -> 0x8008B7A8
        // Local variables
        class EventActionSwitch params; // r1+0x20
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8008B9A0 -> 0x8008BC64
void zCam::zCamSceneSetup(class zCam * this /* r29 */) {
    // References
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
}
// signature: zCam::UpdateBlendedTargets(xVec3, xVec3, float)
// Range: 0x8008BC80 -> 0x8008BEE0
void zCam::UpdateBlendedTargets(class zCam * this /* r30 */, class xVec3 * Pos0 /* r31 */, float dt /* f31 */) {
    // Local variables
    int playerIndex; // r0

    {
        // Range: 0x8008BCEC -> 0x8008BE14
        // Local variables
        class xVec3 pos; // r1+0x8
        class xVec3 floorMount; // r1+0x14
        int railLookCurve; // r4
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8008BEE0 -> 0x8008CEA4
void zCam::DoAnalogInput(class zCam * this /* r25 */) {
    // Local variables
    class xVec2 input_data_off; // r1+0x40
    class xVec2 input_data_dir; // r1+0x38
    float input_data_ang; // f0
    float input_data_mag; // f0

    {
        // Range: 0x8008BF50 -> 0x8008CE6C
        // Local variables
        int playerIndex; // r0

        {
            // Range: 0x8008BF84 -> 0x8008CE6C
            {
                // Range: 0x8008C1BC -> 0x8008CE6C
                // Local variables
                float input_data_y; // f30
                float input_data_x; // f31
                class xVec2 analog2; // r1+0x30

                {
                    // Range: 0x8008CB44 -> 0x8008CDAC
                    // Local variables
                    class xMat4x3 frame; // r1+0x78
                    class zCamFollow * followCam; // r26
                }
            }
        }
    }

    // References
    // -> static unsigned int transitionUIDtable[4];
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// signature: zCam::AddPlayerTarget(int)
// Range: 0x8008CEB0 -> 0x8008CEF4
void zCam::AddPlayerTarget() {
}
// Range: 0x8008CF00 -> 0x8008D0B4
void zCam::zCamUpdate(class zCam * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 Pos0; // r1+0x2C
    class xVec3 Pos1; // r1+0x20

    // References
    // -> static float sCamTweakDistMultCur;
    // -> static float sCamTweakFOVCur;
    // -> static float sCamTweakPivotHeightCur;
    // -> static float sCamTweakPitchCur;
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakPitch[2];
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakTime;
    // -> class zGlobals globals;
}
// signature: zCam::zCamSetStartOrientation(unsigned long long)
// Range: 0x8008D0C0 -> 0x8008D11C
void zCam::zCamSetStartOrientation(class zCam * this /* r31 */) {
    // Local variables
    unsigned int size; // r1+0x8
    void * a; // r0
    class pointer_asset * pa; // r0
}
// Range: 0x8008D120 -> 0x8008D1D8
class xCam * zCam::zCamGetDefault(class zCam * this /* r28 */) {
    // Local variables
    int playerIndex; // r29

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8008D1F0 -> 0x8008D4CC
void zCam::StartAimingCamera(class zCam * this /* r29 */, class zPlayer * player /* r31 */) {
    // Local variables
    class xCamTransitionParams transitionParams; // r1+0x8
    class zCamAiming * camAim; // r30

    // References
    // -> static unsigned int transitionUIDtable[4];
    // -> class xGlobals * xglobals;
}
// signature: zCam::StopAimingCamera(zPlayer *, bool)
// Range: 0x8008D4D0 -> 0x8008D6B4
void zCam::StopAimingCamera(class zCam * this /* r31 */, bool smoothTransition /* r28 */) {
    // Local variables
    class xCamTransitionParams transitionParams; // r1+0x8

    // References
    // -> static unsigned int transitionUIDtable[4];
    // -> class xGlobals * xglobals;
}
// signature: zCam::StopFirstPersonCamera(zPlayer *)
// Range: 0x8008D6D0 -> 0x8008D710
void zCam::StopFirstPersonCamera(class zCam * this /* r31 */) {
}
// signature: zCam::EnableAimingCamera(bool)
// Range: 0x8008D710 -> 0x8008D940
void zCam::EnableAimingCamera(class zCam * this /* r31 */) {
    {
        // Range: 0x8008D71C -> 0x8008D920
        // Local variables
        int playerIndex; // r0
    }

    // References
    // -> static unsigned int transitionUIDtable[4];
    // -> class xGlobals * xglobals;
}
// signature: zCam::EnableFirstPersonCamera(bool)
// Range: 0x8008D940 -> 0x8008D9E8
void zCam::EnableFirstPersonCamera(class zCam * this /* r31 */) {
    {
        // Range: 0x8008D94C -> 0x8008D9D4
        // Local variables
        int playerIndex; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8008D9F0 -> 0x8008DADC
void zCamEnableFirstPersonCamera(int viewportIndex /* r30 */, bool enabled /* r31 */) {
    // Local variables
    class zCam * zCam; // r31

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8008DAE0 -> 0x8008DD4C
void zCamEnableAimingCamera(int viewportIndex /* r29 */, bool enabled /* r28 */) {
    // Local variables
    class zCam * zCam; // r31

    // References
    // -> static unsigned int transitionUIDtable[4];
    // -> class xGlobals * xglobals;
}
