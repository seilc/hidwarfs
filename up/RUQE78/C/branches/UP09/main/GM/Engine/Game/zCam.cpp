/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCam.cpp
*/
static unsigned int transitionUIDtable[4]; // size: 0x10, address: 0x807A3370
class zCamFollow defaultCam[4]; // size: 0x1160, address: 0x8081ABC8
// Range: 0x80100010 -> 0x8010020C
class xVec3 & zTargetBlender::Update(class zTargetBlender * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80100134 -> 0x801001EC
        // Local variables
        float s; // f0
        float t; // f7
    }
}
// Range: 0x80100210 -> 0x80100230
void * zCam::zCam() {
}
// signature: zCam::SceneEnter(zScene &)
// Range: 0x80100230 -> 0x80100590
void zCam::SceneEnter(class zCam * this /* r30 */) {
    // References
    // -> static float sCamTweakDirRigidityCur;
    // -> static float sCamTweakDirPitchRangeCur;
    // -> static float sCamTweakDirPitchCur;
    // -> static float sCamTweakDirYawRangeCur;
    // -> static float sCamTweakDirYawCur;
    // -> static float sCamTweakDirRigidity[2];
    // -> static float sCamTweakDirPitchRange[2];
    // -> static float sCamTweakDirPitch[2];
    // -> static float sCamTweakDirYawRange[2];
    // -> static float sCamTweakDistMultCur;
    // -> static float sCamTweakFOVCur;
    // -> static float sCamTweakPivotHeightCur;
    // -> static float sCamTweakPitchCur;
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakDirYaw[2];
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakPitch[2];
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakTime;
    // -> class xVec3 m_Null;
    // -> class zCamFollow defaultCam[4];
}
// Range: 0x80100590 -> 0x801006E4
void zCam::SceneExit() {
    // References
    // -> static class zCamPool FixedCamPool;
    // -> class xCam * sLastAddedCam;
    // -> static class zCamPool POICamPool;
    // -> static class zCamPool sCamCurvePOIPool;
    // -> static class zCamPool sCamCurveRailPool;
}
// Range: 0x801006F0 -> 0x80100C70
void zCam::zCamReset(class zCam * this /* r30 */, bool refreshCameraTarget /* r26 */) {
    // References
    // -> static float sCamTweakDirRigidityCur;
    // -> static float sCamTweakDirPitchRangeCur;
    // -> static float sCamTweakDirPitchCur;
    // -> static float sCamTweakDirYawRangeCur;
    // -> static float sCamTweakDirYawCur;
    // -> static float sCamTweakDirRigidity[2];
    // -> static float sCamTweakDirPitchRange[2];
    // -> static float sCamTweakDirPitch[2];
    // -> static float sCamTweakDirYawRange[2];
    // -> static float sCamTweakDistMultCur;
    // -> static float sCamTweakFOVCur;
    // -> static float sCamTweakPivotHeightCur;
    // -> static float sCamTweakPitchCur;
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakDirYaw[2];
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakPitch[2];
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakTime;
    // -> class xGlobals * xglobals;
}
// Range: 0x80100C70 -> 0x801011E0
void zCam::zCamSetCamera(class zCam * this /* r28 */, unsigned long long cameraID /* r30:r29 */, bool forceRestart /* r31 */) {
    {
        // Range: 0x80100DC8 -> 0x80100FF4
        // Local variables
        class EventActionSwitch params; // r1+0x20
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801011E0 -> 0x801014AC
void zCam::zCamSceneSetup(class zCam * this /* r30 */) {
    // References
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
}
// signature: zCam::UpdateBlendedTargets(xVec3, xVec3, float)
// Range: 0x801014B0 -> 0x80101768
void zCam::UpdateBlendedTargets(class zCam * this /* r30 */, class xVec3 & Pos0 /* r31 */, float dt /* f31 */) {
    // Local variables
    int playerIndex; // r0

    {
        // Range: 0x80101520 -> 0x80101698
        // Local variables
        class xVec3 pos; // r1+0x8
        class xVec3 floorMount; // r1+0x14
        bool floorMountOff; // r3
        int railLookCurve; // r28
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80101770 -> 0x80101B10
void zCam::DoAnalogInput(class zCam * this /* r29 */) {
    // Local variables
    class xVec2 input_data_off; // r1+0x40
    class xVec2 input_data_dir; // r1+0x38
    float input_data_ang; // f0
    float input_data_mag; // f0

    {
        // Range: 0x801017F0 -> 0x80101AD0
        // Local variables
        int playerIndex; // r0

        {
            // Range: 0x80101824 -> 0x80101AD0
            {
                // Range: 0x801018A8 -> 0x80101AD0
                // Local variables
                float input_data_y; // f30
                float input_data_x; // f31
                class xVec2 analog2; // r1+0x30

                {
                    // Range: 0x80101908 -> 0x80101A64
                    // Local variables
                    bool targetingHold; // r4
                }
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// signature: zCam::AddPlayerTarget(int)
// Range: 0x80101B20 -> 0x80101B84
void zCam::AddPlayerTarget() {
    // References
    // -> class xGlobals * xglobals;
}
// signature: zCam::RemovePlayerTarget(int)
// Range: 0x80101B90 -> 0x80101BF4
void zCam::RemovePlayerTarget() {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80101C00 -> 0x80101F10
void zCam::zCamUpdate(class zCam * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 Pos0; // r1+0x2C
    class xVec3 Pos1; // r1+0x20

    // References
    // -> static float sCamTweakDirRigidityCur;
    // -> static float sCamTweakDirPitchRangeCur;
    // -> static float sCamTweakDirPitchCur;
    // -> static float sCamTweakDirYawRangeCur;
    // -> static float sCamTweakDirYawCur;
    // -> static float sCamTweakDirRigidity[2];
    // -> static float sCamTweakDirPitchRange[2];
    // -> static float sCamTweakDirPitch[2];
    // -> static float sCamTweakDirYawRange[2];
    // -> static float sCamTweakDistMultCur;
    // -> static float sCamTweakFOVCur;
    // -> static float sCamTweakPivotHeightCur;
    // -> static float sCamTweakPitchCur;
    // -> static float sCamTweakDistMult[2];
    // -> static float sCamTweakDirYaw[2];
    // -> static float sCamTweakFOV[2];
    // -> static float sCamTweakPivotHeight[2];
    // -> static float sCamTweakPitch[2];
    // -> static float sCamTweakLerp;
    // -> static float sCamTweakTime;
    // -> class zGlobals globals;
}
// Range: 0x80101F10 -> 0x80101F84
void zCam::zCamSetStartOrientation(class zCam * this /* r29 */, unsigned long long pointer_id /* r31:r30 */) {
    // Local variables
    void * a; // r0
    class pointer_asset & pa; // r0
}
// Range: 0x80101F90 -> 0x80102048
class xCam * zCam::zCamGetDefault(class zCam * this /* r28 */) {
    // Local variables
    int playerIndex; // r29

    // References
    // -> class xGlobals * xglobals;
}
// signature: zCam::EnableFirstPersonCamera(bool)
// Range: 0x80102070 -> 0x8010210C
void zCam::EnableFirstPersonCamera(class zCam * this /* r31 */) {
    {
        // Range: 0x8010207C -> 0x801020F8
        // Local variables
        int playerIndex; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80102110 -> 0x801021F0
void zCamEnableFirstPersonCamera(int viewportIndex /* r30 */, bool enabled /* r31 */) {
    // Local variables
    class zCam * zCam; // r31

    // References
    // -> class xGlobals * xglobals;
}
