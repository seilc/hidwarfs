/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPlayerConstrainer.cpp
*/
float sNearWall; // size: 0x4, address: 0x80700074
float sFarWall; // size: 0x4, address: 0x80700078
bool sEnabled; // size: 0x1, address: 0x8070007C
bool sDebugRender; // size: 0x1, address: 0x80798528
bool sPlayerDisable; // size: 0x1, address: 0x80798529
bool sCameraDisable; // size: 0x1, address: 0x8079852A
unsigned int sDrawnFrame; // size: 0x4, address: 0x8079852C
// Range: 0x80175820 -> 0x80175848
void * zPlayerConstrainer::zPlayerConstrainer() {
    // References
    // -> unsigned int sDrawnFrame;
    // -> bool sDebugRender;
    // -> bool sEnabled;
}
// signature: zPlayerConstrainer::SetConstraints(float, float)
// Range: 0x80175850 -> 0x80175864
void zPlayerConstrainer::SetConstraints() {
    // References
    // -> float sFarWall;
    // -> float sNearWall;
}
// signature: zPlayerConstrainer::GetDefaults(float &, float &)
// Range: 0x80175870 -> 0x8017588C
void zPlayerConstrainer::GetDefaults() {
}
// Range: 0x80175890 -> 0x80175A7C
unsigned int zPlayerConstrainer::PlayersOOB(class OOBExtent * extent /* r25 */, class xCam * cam /* r26 */, class xVec3 * depenAxis /* r27 */, unsigned int calcFlags /* r28 */) {
    // Local variables
    unsigned int flags; // r30

    {
        // Range: 0x801758C8 -> 0x80175A34
        // Local variables
        int i; // r29

        {
            // Range: 0x801758C8 -> 0x80175A34
            // Local variables
            class OOBExtent localExtent; // r1+0x8
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zPlayerConstrainer::PositionOOB(zPlayerConstrainer::OOBExtent &, const xMat4x3 &, const float, const xVec3 &, const xVec3 &, unsigned int)
// Range: 0x80175A80 -> 0x80175EC8
unsigned int zPlayerConstrainer::PositionOOB(class OOBExtent * extent /* r27 */, class xMat4x3 * camMat /* r28 */, float fov /* f31 */, class xVec3 * position /* r29 */, unsigned int calcFlags /* r30 */) {
    // Local variables
    class xVec3 to; // r1+0x2C
    unsigned int flags; // r31
    class xVec3 atNormalizedXZ; // r1+0x20

    {
        // Range: 0x80175BB0 -> 0x80175CA4
        // Local variables
        float perpDistance; // f1
        float dist2; // f0
        float adjustedFarWall; // f27
    }
    {
        // Range: 0x80175CA4 -> 0x80175E60
        // Local variables
        class xVec3 nRightPlane; // r1+0x8
        class xVec3 nLeftPlane; // r1+0x14
    }

    // References
    // -> float sNearWall;
    // -> float sFarWall;
    // -> bool sCameraDisable;
}
