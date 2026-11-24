/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCam.cpp
*/
unsigned int transitionUIDtable[4]; // size: 0x10, address: 0x806B4FB0
class zCamFollow defaultCam[4]; // size: 0x1280, address: 0x80731290
// signature: @unnamed@WAD01_cpp@::blend(float &, float, float, float)
// Range: 0x80088330 -> 0x8008834C
static void @unnamed@WAD01_cpp@::blend() {
}
// Range: 0x80088120 -> 0x80088164
void zTargetBlender::Reset(class zTargetBlender * this /* r31 */) {
}
// Range: 0x80088170 -> 0x80088324
class xVec3 & zTargetBlender::Update(class zTargetBlender * this /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x80088260 -> 0x80088300
        // Local variables
        float s; // f0
        float t; // f31
    }
}
// Range: 0x80088350 -> 0x80088368
void * zCam::zCam() {
}
// signature: zCam::SceneEnter(zScene &)
// Range: 0x80088370 -> 0x80088414
void zCam::SceneEnter(class zCam * this /* r30 */) {
    // References
    // -> class xVec3 m_Null;
    // -> class zCamFollow defaultCam[4];
}
// Range: 0x80088420 -> 0x8008848C
void zCam::SceneExit() {
    // References
    // -> static class zCamPool DrivableCamPool;
    // -> static class zCamPool FixedCamPool;
    // -> static class zCamPool POICamPool;
    // -> class xCam * sLastAddedCam;
    // -> static class zCamPool sCamCurvePOIPool;
    // -> static class zCamPool sCamCurveRailPool;
}
// Range: 0x80088490 -> 0x8008857C
void zCam::StartDefaultCamera(class zCam * this /* r29 */) {
    // Local variables
    class xCam & cam; // r30

    {
        // Range: 0x800884B4 -> 0x8008854C
        // Local variables
        int playerIndex; // r4

        {
            // Range: 0x800884E0 -> 0x8008854C
            // Local variables
            class xMat4x3 frame; // r1+0x8
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800885A0 -> 0x80088644
void zCam::zCamReset(class zCam * this /* r30 */, bool refreshCameraTarget /* r31 */) {
}
// Range: 0x80088650 -> 0x80088738
void zCam::zCamSetCamera(class zCam * this /* r28 */, unsigned long long cameraID /* r30:r29 */, bool forceRestart /* r31 */) {
    {
        // Range: 0x800886A4 -> 0x80088714
        // Local variables
        class EventActionSwitch params; // r1+0x10
    }
}
// Range: 0x80088740 -> 0x800887C8
void zCam::zCamSceneSetup(class zCam * this /* r31 */) {
    // Local variables
    class xCam & cam; // r0

    // References
    // -> class zGlobals globals;
}
// signature: zCam::GetTargetFloorHeight(int)
// Range: 0x800887D0 -> 0x800888B0
float zCam::GetTargetFloorHeight(class zCam * this /* r30 */) {
    // Local variables
    class zCommonPlayer * player; // r31
    float mountY; // f1

    {
        // Range: 0x80088824 -> 0x80088898
        // Local variables
        float dyFromMount; // f2
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800888B0 -> 0x80088940
int zCam::GetRailStatus(class zCam * this /* r27 */, int & railLookCurve /* r28 */, bool & floorMountOff /* r29 */) {
    // Local variables
    int isRail; // r30
}
// Range: 0x80088940 -> 0x80088A34
void zCam::UpdateBlendedTargets(class zCam * this /* r30 */, float dt /* f31 */) {
    // Local variables
    int target0; // r31

    {
        // Range: 0x80088968 -> 0x80088A1C
        // Local variables
        int target1; // r3
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zCam::UpdateBlendedTargets(xVec3, xVec3, float)
// Range: 0x80088A40 -> 0x80088BBC
void zCam::UpdateBlendedTargets(class zCam * this /* r29 */, class xVec3 & Pos0 /* r30 */, float dt /* f31 */) {
    // Local variables
    int playerIndex; // r0

    {
        // Range: 0x80088AA4 -> 0x80088B5C
        // Local variables
        class xVec3 pos; // r1+0x10
        class xVec3 floorMount; // r1+0x1C
        int isRail; // r0
        bool floorMountOff; // r1+0x8
        int railLookCurve; // r1+0xC
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80088BC0 -> 0x80088ED0
void zCam::DoAnalogInput(class zCam * this /* r31 */) {
    // Local variables
    class xVec2 input_data_off; // r1+0x48
    class xVec2 input_data_dir; // r1+0x40
    float input_data_ang; // f0
    float input_data_mag; // f0

    {
        // Range: 0x80088C50 -> 0x80088E9C
        // Local variables
        int playerIndex; // r0

        {
            // Range: 0x80088C84 -> 0x80088E9C
            {
                // Range: 0x80088CD8 -> 0x80088E9C
                // Local variables
                float input_data_y; // f30
                float input_data_x; // f31
                class xVec2 analog2; // r1+0x38

                {
                    // Range: 0x80088CE0 -> 0x80088E30
                    // Local variables
                    enum TapHoldStatus status; // r1+0x8
                    bool doNPCLock; // r30
                    bool doCenter; // r29
                }
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x80088EF0 -> 0x80088F6C
void zCam::AddPlayerTarget(class zCam * this /* r30 */, int playerIndex /* r31 */) {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80088F70 -> 0x80088FEC
void zCam::RemovePlayerTarget(class zCam * this /* r30 */, int playerIndex /* r31 */) {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80088FF0 -> 0x800890BC
void zCam::zCamUpdate(class zCam * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 Pos0; // r1+0x2C
    class xVec3 Pos1; // r1+0x20

    // References
    // -> class zGlobals globals;
}
// Range: 0x80089140 -> 0x800891A0
void zCam::zCamSetStartOrientation(class zCam * this /* r29 */, unsigned long long pointer_id /* r31:r30 */) {
    // Local variables
    void * a; // r4
    class pointer_asset & pa; // r0
}
// signature: zCam::zCamSetStartOrientation(float, float, float)
// Range: 0x800891A0 -> 0x800891C4
void zCam::zCamSetStartOrientation() {
}
// Range: 0x800891D0 -> 0x80089270
class xCam * zCam::zCamGetDefault(class zCam * this /* r28 */) {
    // Local variables
    int playerIndex; // r29

    // References
    // -> class xGlobals * xglobals;
}
