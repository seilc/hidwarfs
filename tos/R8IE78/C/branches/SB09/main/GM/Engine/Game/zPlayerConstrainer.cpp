/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPlayerConstrainer.cpp
*/
float sNearWall; // size: 0x4, address: 0x806C1CD8
float sFarWall; // size: 0x4, address: 0x806C1CDC
bool sEnabled; // size: 0x1, address: 0x806C1CE0
bool sDebugRender; // size: 0x1, address: 0x80754080
bool sPlayerDisable; // size: 0x1, address: 0x80754081
bool sCameraDisable; // size: 0x1, address: 0x80754082
unsigned int sDrawnFrame; // size: 0x4, address: 0x80754084
class xVec3 lastGoodPlayerCenter; // size: 0xC, address: 0x80754088
float sTetherRatio; // size: 0x4, address: 0x806C1CE4
float fov_wscale; // size: 0x4, address: 0x8075AFA0
float fov_wscale; // size: 0x4, address: 0x8075AFA8
// Range: 0x80119CE0 -> 0x80119D08
void * zPlayerConstrainer::zPlayerConstrainer() {
    // References
    // -> unsigned int sDrawnFrame;
    // -> bool sDebugRender;
    // -> bool sEnabled;
}
// signature: zPlayerConstrainer::SetConstraintsNear(float)
// Range: 0x80119D10 -> 0x80119D1C
void zPlayerConstrainer::SetConstraintsNear() {
    // References
    // -> float sNearWall;
}
// signature: zPlayerConstrainer::SetConstraintsFar(float)
// Range: 0x80119D20 -> 0x80119D2C
void zPlayerConstrainer::SetConstraintsFar() {
    // References
    // -> float sFarWall;
}
// signature: zPlayerConstrainer::SetConstraints(float, float)
// Range: 0x80119D30 -> 0x80119D44
void zPlayerConstrainer::SetConstraints() {
    // References
    // -> float sFarWall;
    // -> float sNearWall;
}
// signature: zPlayerConstrainer::SetTether(float)
// Range: 0x80119D50 -> 0x80119D5C
void zPlayerConstrainer::SetTether() {
    // References
    // -> float sTetherRatio;
}
// signature: zPlayerConstrainer::GetDefaults(float &, float &)
// Range: 0x80119D60 -> 0x80119D7C
void zPlayerConstrainer::GetDefaults() {
}
// signature: zPlayerConstrainer::OOBExtent::CalcDepen(float &, const xMat4x3 &, const xVec3 &, const xVec3 &, unsigned int)
// Range: 0x80119E10 -> 0x80119EC4
bool zPlayerConstrainer::OOBExtent::CalcDepen(float & sideMargin /* r27 */, class xMat4x3 & camMat /* r28 */, class xVec3 & nPlane /* r29 */, unsigned int calcFlags /* r30 */) {
    // Local variables
    float perpDistance; // f31

    {
        // Range: 0x80119E68 -> 0x80119E94
        // Local variables
        float margin; // f1
    }
}
// Range: 0x80119ED0 -> 0x8011A03C
unsigned int zPlayerConstrainer::PlayersOOB(class OOBExtent & extent /* r25 */, class xCam & cam /* r26 */, class xVec3 & depenAxis /* r27 */, unsigned int calcFlags /* r28 */) {
    // Local variables
    unsigned int flags; // r30

    {
        // Range: 0x80119F04 -> 0x8011A018
        // Local variables
        int i; // r29

        {
            // Range: 0x80119F04 -> 0x8011A018
            // Local variables
            class OOBExtent localExtent; // r1+0x8
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zPlayerConstrainer::PositionOOB(zPlayerConstrainer::OOBExtent &, const xMat4x3 &, const float, const xVec3 &, const xVec3 &, unsigned int)
// Range: 0x8011A070 -> 0x8011A260
unsigned int zPlayerConstrainer::PositionOOB(class OOBExtent & extent /* r26 */, class xMat4x3 & camMat /* r27 */, float fov /* f31 */, class xVec3 & position /* r28 */, unsigned int calcFlags /* r29 */) {
    // Local variables
    class xVec3 to; // r1+0x2C
    unsigned int flags; // r30
    class xVec3 atNormalizedXZ; // r1+0x20

    {
        // Range: 0x8011A124 -> 0x8011A198
        // Local variables
        float perpDistance; // f1
        float dist2; // f0
        float adjustedFarWall; // f30
    }
    {
        // Range: 0x8011A198 -> 0x8011A21C
        // Local variables
        class xVec3 nRightPlane; // r1+0x8
        class xVec3 nLeftPlane; // r1+0x14
    }

    // References
    // -> float sNearWall;
    // -> float sFarWall;
    // -> bool sCameraDisable;
}
// Range: 0x8011A260 -> 0x8011AB98
void zPlayerConstrainer::AddCharacterProxyConstrains(class zPlayer * player /* r26 */, class hkpSimplexSolverInput & input /* r27 */) {
    // Local variables
    class zCam * cam; // r25
    class xMat4x3 & mat; // r30
    class xVec3 pos; // r1+0x104
    class xVec3 playerVec; // r1+0xF8
    class hkpSurfaceConstraintInfo * pConstraints; // r29
    float fov; // f0
    int constrainAdded; // r28
    class xVec3 norm; // r1+0xEC
    class xVec3 playerCenter; // r1+0xE0
    class xVec3 centerVec; // r1+0xD4
    float centerLength; // f0
    float cos0; // f29
    float tan0; // f1
    class xVec3 pFar; // r1+0x80

    {
        // Range: 0x8011A478 -> 0x8011A478
        // Local variables
        class xVec3 n; // r1+0xC8
    }
    {
        // Range: 0x8011A584 -> 0x8011A584
        // Local variables
        class xVec3 n; // r1+0xBC
    }
    {
        // Range: 0x8011A67C -> 0x8011A67C
        // Local variables
        class xVec3 n; // r1+0xB0
    }
    {
        // Range: 0x8011A780 -> 0x8011A780
        // Local variables
        class xVec3 n; // r1+0xA4
    }
    {
        // Range: 0x8011A878 -> 0x8011A878
        // Local variables
        class xVec3 n; // r1+0x98
    }
    {
        // Range: 0x8011A950 -> 0x8011A950
        // Local variables
        class xVec3 n; // r1+0x8C
    }
    {
        // Range: 0x8011AAAC -> 0x8011AAAC
        // Local variables
        class xVec3 n; // r1+0x74
    }

    // References
    // -> float sFarWall;
    // -> float sNearWall;
    // -> float sTetherRatio;
    // -> float fov_wscale;
}
// Range: 0x8011ABA0 -> 0x8011B12C
class xVec3 zPlayerConstrainer::GetPlayerCenter() {
    // Local variables
    int visibleCount; // r27
    int visible; // r28
    class xVec3 camPos; // r1+0xB0
    int side1; // r30
    int side2; // r29
    float dotValue; // f31
    class xVec3 ans; // r1+0x8C
    class xVec3 v2; // r1+0x80
    float nearDist; // f29
    float farDist; // f28
    float maxY; // f27
    float minY; // f26

    {
        // Range: 0x8011ABF0 -> 0x8011AC4C
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x8011AC74 -> 0x8011ACD4
        // Local variables
        class xVec3 ret; // r1+0xBC
    }
    {
        // Range: 0x8011ACE8 -> 0x8011AE70
        // Local variables
        int i; // r28

        {
            // Range: 0x8011ACE8 -> 0x8011AE70
            // Local variables
            int j; // r27

            {
                // Range: 0x8011ACE8 -> 0x8011AE70
                // Local variables
                class xVec3 v2; // r1+0x98
                class xVec3 v1; // r1+0xA4
            }
        }
    }
    {
        // Range: 0x8011AF34 -> 0x8011B070
        // Local variables
        int i; // r27

        {
            // Range: 0x8011AF44 -> 0x8011B070
            // Local variables
            float d; // f0
            class xVec3 unitV; // r1+0x68
            class xVec3 v; // r1+0x74
        }
    }

    // References
    // -> class xVec3 lastGoodPlayerCenter;
    // -> class xGlobals * xglobals;
}
// Range: 0x8011B130 -> 0x8011B488
void zPlayerConstrainer::AdjustCameraPosition(class xMat4x3 & mat /* r28 */) {
    // Local variables
    class xVec3 normFar; // r1+0x8C
    class xVec3 pFar; // r1+0x80
    class xVec3 playerPos; // r1+0x74
    class xVec3 playerVec; // r1+0x68
    class zPlayer * farPlayer; // r31
    class zPlayer * nearPlayer; // r30
    float farValue; // f30
    float nearValue; // f31

    {
        // Range: 0x8011B1F0 -> 0x8011B2E0
        // Local variables
        int i; // r29

        {
            // Range: 0x8011B1F8 -> 0x8011B2E0
            // Local variables
            float tmp; // f1
        }
    }
    {
        // Range: 0x8011B2E0 -> 0x8011B450
        // Local variables
        float b; // f29
        float a2; // f0
        class xVec3 camAt; // r1+0x5C

        {
            // Range: 0x8011B3FC -> 0x8011B450
            // Local variables
            float x; // f0
            float cos; // f28
            float a; // f0
        }
    }

    // References
    // -> float sNearWall;
    // -> class xGlobals * xglobals;
    // -> float sFarWall;
}
// Range: 0x8011B490 -> 0x8011B864
void zPlayerConstrainer::AdjustCameraMatrix(class xMat4x3 & mat /* r31 */) {
    // Local variables
    class xVec3 playerPos; // r1+0x5C
    class xVec3 playerVec; // r1+0x50
    float fov; // f31
    class xVec3 normLeft; // r1+0x44
    class xVec3 normDown; // r1+0x38
    float leftMost; // f28
    float rightMost; // f27
    float topMost; // f30
    float downMost; // f29
    float tmpA; // f1
    float finalRotateAngel; // f26
    class xVec3 finalRight; // r1+0x2C
    class xVec3 finalUp; // r1+0x20
    class xVec3 finalAt; // r1+0x14

    {
        // Range: 0x8011B594 -> 0x8011B6A4
        // Local variables
        int i; // r28
    }

    // References
    // -> class xGlobals * xglobals;
    // -> float fov_wscale;
}
