/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPlayerConstrainer.cpp
*/
float sNearWall; // size: 0x4, address: 0x807B4DC8
float sFarWall; // size: 0x4, address: 0x807B4DCC
bool sEnabled; // size: 0x1, address: 0x807B4DD0
bool sDebugRender; // size: 0x1, address: 0x80824BB0
bool sPlayerDisable; // size: 0x1, address: 0x80824BB1
bool sCameraDisable; // size: 0x1, address: 0x80824BB2
unsigned int sDrawnFrame; // size: 0x4, address: 0x80824BB4
class xVec3 lastGoodPlayerCenter; // size: 0xC, address: 0x80824BB8
float sTetherRatio; // size: 0x4, address: 0x807B4DD4
static float fov_wscale; // size: 0x4, address: 0x80824BC4
static float fov_wscale; // size: 0x4, address: 0x80824BCC
// Range: 0x80204170 -> 0x80204198
void * zPlayerConstrainer::zPlayerConstrainer() {
    // References
    // -> unsigned int sDrawnFrame;
    // -> bool sDebugRender;
    // -> bool sEnabled;
}
// signature: zPlayerConstrainer::SetConstraintsNear(float)
// Range: 0x802041A0 -> 0x802041AC
void zPlayerConstrainer::SetConstraintsNear() {
    // References
    // -> float sNearWall;
}
// signature: zPlayerConstrainer::SetConstraintsFar(float)
// Range: 0x802041B0 -> 0x802041BC
void zPlayerConstrainer::SetConstraintsFar() {
    // References
    // -> float sFarWall;
}
// signature: zPlayerConstrainer::SetConstraints(float, float)
// Range: 0x802041C0 -> 0x802041D4
void zPlayerConstrainer::SetConstraints() {
    // References
    // -> float sFarWall;
    // -> float sNearWall;
}
// signature: zPlayerConstrainer::SetTether(float)
// Range: 0x802041E0 -> 0x802041EC
void zPlayerConstrainer::SetTether() {
    // References
    // -> float sTetherRatio;
}
// signature: zPlayerConstrainer::GetDefaults(float &, float &)
// Range: 0x802041F0 -> 0x8020420C
void zPlayerConstrainer::GetDefaults() {
}
// signature: ReflectVector(xVec3 &, const xVec3 &)
// Range: 0x80205210 -> 0x80205294
static void ReflectVector() {
    // Local variables
    class xVec3 tmp; // r1+0x8
}
// Range: 0x80204210 -> 0x802043FC
unsigned int zPlayerConstrainer::PlayersOOB(class OOBExtent & extent /* r25 */, class xCam & cam /* r26 */, class xVec3 & depenAxis /* r27 */, unsigned int calcFlags /* r28 */) {
    // Local variables
    unsigned int flags; // r30

    {
        // Range: 0x80204248 -> 0x802043B4
        // Local variables
        int i; // r29

        {
            // Range: 0x80204248 -> 0x802043B4
            // Local variables
            class OOBExtent localExtent; // r1+0x8
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zPlayerConstrainer::PositionOOB(zPlayerConstrainer::OOBExtent &, const xMat4x3 &, const float, const xVec3 &, const xVec3 &, unsigned int)
// Range: 0x80204400 -> 0x80204824
unsigned int zPlayerConstrainer::PositionOOB(class OOBExtent & extent /* r27 */, class xMat4x3 & camMat /* r28 */, class xVec3 & position /* r29 */, unsigned int calcFlags /* r30 */) {
    // Local variables
    class xVec3 to; // r1+0x2C
    unsigned int flags; // r31
    class xVec3 atNormalizedXZ; // r1+0x20

    {
        // Range: 0x8020451C -> 0x80204608
        // Local variables
        float perpDistance; // f2
        float dist2; // f0
        float adjustedFarWall; // f9
    }
    {
        // Range: 0x80204608 -> 0x802047C4
        // Local variables
        class xVec3 nRightPlane; // r1+0x8
        class xVec3 nLeftPlane; // r1+0x14
    }

    // References
    // -> float sNearWall;
    // -> float sFarWall;
    // -> bool sCameraDisable;
}
// Range: 0x80204830 -> 0x802051E8
void zPlayerConstrainer::AddCharacterProxyConstrains(class zPlayer * player /* r26 */, class hkpSimplexSolverInput & input /* r27 */) {
    // Local variables
    class zCam * cam; // r25
    class xMat4x3 & mat; // r30
    class xVec3 pos; // r1+0xEC
    class xVec3 playerVec; // r1+0xE0
    class hkpSurfaceConstraintInfo * pConstraints; // r29
    float fov; // f0
    int constrainAdded; // r28
    class xVec3 norm; // r1+0xD4
    class xVec3 playerCenter; // r1+0xC8
    class xVec3 centerVec; // r1+0xBC
    float centerLength; // f0
    float cos0; // f31
    float tan0; // f1
    class xVec3 pFar; // r1+0x68

    {
        // Range: 0x80204864 -> 0x802048D8
        // Local variables
        unsigned int currentAction; // r0
    }
    {
        // Range: 0x80204AC0 -> 0x80204AC0
        // Local variables
        class xVec3 n; // r1+0xB0
    }
    {
        // Range: 0x80204BCC -> 0x80204BCC
        // Local variables
        class xVec3 n; // r1+0xA4
    }
    {
        // Range: 0x80204CBC -> 0x80204CBC
        // Local variables
        class xVec3 n; // r1+0x98
    }
    {
        // Range: 0x80204DC8 -> 0x80204DC8
        // Local variables
        class xVec3 n; // r1+0x8C
    }
    {
        // Range: 0x80204EB8 -> 0x80204EB8
        // Local variables
        class xVec3 n; // r1+0x80
    }
    {
        // Range: 0x80204F98 -> 0x80204F98
        // Local variables
        class xVec3 n; // r1+0x74
    }
    {
        // Range: 0x802050FC -> 0x802050FC
        // Local variables
        class xVec3 n; // r1+0x5C
    }

    // References
    // -> float sFarWall;
    // -> float sNearWall;
    // -> float sTetherRatio;
    // -> static float fov_wscale;
}
// Range: 0x802052A0 -> 0x80205D74
class xVec3 zPlayerConstrainer::GetPlayerCenter() {
    // Local variables
    int visibleCount; // r27
    int visible; // r28
    class xVec3 camPos; // r1+0xE0
    int side1; // r28
    int side2; // r27
    float dotValue; // f26
    class xVec3 ans; // r1+0xBC
    class xVec3 v2; // r1+0xB0
    float nearDist; // f26
    float farDist; // f25
    float maxY; // f24
    float minY; // f23

    {
        // Range: 0x80205308 -> 0x80205350
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x8020538C -> 0x802053EC
        // Local variables
        class xVec3 ret; // r1+0xEC
    }
    {
        // Range: 0x802053F4 -> 0x802056BC
        // Local variables
        int i; // r26

        {
            // Range: 0x802053F4 -> 0x802056A4
            // Local variables
            int j; // r25

            {
                // Range: 0x802053F4 -> 0x802056A4
                // Local variables
                class xVec3 v2; // r1+0xC8
                class xVec3 v1; // r1+0xD4
            }
        }
    }
    {
        // Range: 0x802059CC -> 0x80205C1C
        // Local variables
        int i; // r25

        {
            // Range: 0x802059CC -> 0x80205C1C
            // Local variables
            float d; // f0
            class xVec3 unitV; // r1+0x98
            class xVec3 v; // r1+0xA4
        }
    }

    // References
    // -> class xVec3 lastGoodPlayerCenter;
    // -> class xGlobals * xglobals;
}
// Range: 0x80205D80 -> 0x802065C8
void zPlayerConstrainer::AdjustCameraPosition(class xMat4x3 & mat /* r26 */) {
    // Local variables
    class xVec3 normFar; // r1+0xD4
    class xVec3 pFar; // r1+0xC8
    class xVec3 playerPos; // r1+0xBC
    class xVec3 playerVec; // r1+0xB0
    class zPlayer * farPlayer; // r29
    class zPlayer * nearPlayer; // r28
    float farValue; // f26
    float nearValue; // f25

    {
        // Range: 0x80205EAC -> 0x80206124
        // Local variables
        int i; // r27

        {
            // Range: 0x80205EAC -> 0x80206124
            // Local variables
            float tmp; // f0
        }
    }
    {
        // Range: 0x80206138 -> 0x80206578
        // Local variables
        float b; // f0
        float a2; // f0
        class xVec3 camAt; // r1+0xA4

        {
            // Range: 0x802063DC -> 0x80206578
            // Local variables
            float x; // f6
            float cos; // f8
            float a; // f0
        }
    }

    // References
    // -> float sNearWall;
    // -> class xGlobals * xglobals;
    // -> float sFarWall;
}
// Range: 0x802065D0 -> 0x80206B94
void zPlayerConstrainer::AdjustCameraMatrix(class xMat4x3 & mat /* r31 */) {
    // Local variables
    class xVec3 playerPos; // r1+0x68
    class xVec3 playerVec; // r1+0x5C
    float fov; // f25
    class xVec3 normLeft; // r1+0x50
    class xVec3 normDown; // r1+0x44
    float leftMost; // f24
    float rightMost; // f23
    float topMost; // f22
    float downMost; // f21
    float tmpA; // f0
    float finalRotateAngel; // f26
    class xVec3 finalRight; // r1+0x38
    class xVec3 finalUp; // r1+0x2C
    class xVec3 finalAt; // r1+0x20

    {
        // Range: 0x80206714 -> 0x80206960
        // Local variables
        int i; // r28
    }

    // References
    // -> class xGlobals * xglobals;
    // -> static float fov_wscale;
}
