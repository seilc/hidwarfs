/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zViewport.cpp
*/
class Viewport ViewportFullUI; // size: 0x2DC, address: 0x80771A0C
class zViewport viewports[4]; // size: 0x2040, address: 0x80771CF8
static int splitscreenCount; // size: 0x4, address: 0x80773D38
static enum eSplitScreenOrientation splitscreenOrientation; // size: 0x4, address: 0x80773D3C
static bool splitscreenDisabled; // size: 0x1, address: 0x80773D40
// Range: 0x801A1250 -> 0x801A12A8
void * zViewport::zViewport(class zViewport * this /* r31 */) {
}
// Range: 0x801A13F0 -> 0x801A1854
void zViewportInit(class ScreenView & screenView /* r31 */) {
    // Local variables
    class Matrix43 uiMat; // r1+0x70
    class Vector eyePos; // r1+0x30
    class Vector targetPos; // r1+0x20
    class Vector lookDir; // r1+0x10
    class Matrix43 cameraMat; // r1+0x40
    float fovy; // f30
    float aspect; // f31
    float znear; // f29
    float zfar; // f28
    float pixelAspect; // f0

    {
        // Range: 0x801A14E0 -> 0x801A1560
        // Local variables
        int i; // r22
    }
    {
        // Range: 0x801A1648 -> 0x801A16AC
        // Local variables
        int i; // r22
    }
    {
        // Range: 0x801A16D0 -> 0x801A1700
        // Local variables
        int i; // r22
    }
    {
        // Range: 0x801A1700 -> 0x801A1734
        // Local variables
        int i; // r22
    }
    {
        // Range: 0x801A17A0 -> 0x801A17BC
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801A17C0 -> 0x801A181C
        // Local variables
        int i; // r22
    }

    // References
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4Zero;
    // -> class zViewport viewports[4];
    // -> class Viewport ViewportFullUI;
}
// Range: 0x801A1A60 -> 0x801A1AE0
void zViewportAttach() {
    {
        // Range: 0x801A1A80 -> 0x801A1ACC
        // Local variables
        int i; // r28
    }

    // References
    // -> class zViewport viewports[4];
    // -> class Viewport ViewportFullUI;
}
// signature: zViewportAdd3DSceneCollider(Graphics::RenderSceneCollider &, int)
// Range: 0x801A1AE0 -> 0x801A1AF4
void zViewportAdd3DSceneCollider() {
    // References
    // -> class zViewport viewports[4];
}
// Range: 0x801A1B00 -> 0x801A1B80
void zViewportDisableSplitScreens() {
    {
        // Range: 0x801A1B10 -> 0x801A1B60
        // Local variables
        int ii; // r26
    }

    // References
    // -> static bool splitscreenDisabled;
    // -> static int splitscreenCount;
    // -> class zViewport viewports[4];
}
// Range: 0x801A1B80 -> 0x801A1C00
void zViewportEnableSplitScreens() {
    {
        // Range: 0x801A1B94 -> 0x801A1BE0
        // Local variables
        int ii; // r26
    }

    // References
    // -> static bool splitscreenDisabled;
    // -> static int splitscreenCount;
    // -> class zViewport viewports[4];
}
// Range: 0x801A1C00 -> 0x801A1F40
void zViewportSetSplitScreenMode(int count /* r30 */, enum eSplitScreenOrientation orientation /* r31 */) {
    {
        // Range: 0x801A1C44 -> 0x801A1C8C
        // Local variables
        int ii; // r24
    }
    {
        // Range: 0x801A1EC8 -> 0x801A1F14
        // Local variables
        int ii; // r24
    }

    // References
    // -> static bool splitscreenDisabled;
    // -> class zViewport viewports[4];
    // -> static enum eSplitScreenOrientation splitscreenOrientation;
    // -> static int splitscreenCount;
}
// Range: 0x801A1F40 -> 0x801A1F4C
int zViewportGetActiveCount() {
    // References
    // -> static int splitscreenCount;
}
// signature: zViewportGetCamera(int)
// Range: 0x801A1F50 -> 0x801A1F68
class zCam * zViewportGetCamera() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportAddPlayer(int, int)
// Range: 0x801A1F70 -> 0x801A1F88
void zViewportAddPlayer() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportRemovePlayer(int, int)
// Range: 0x801A1F90 -> 0x801A1FA8
void zViewportRemovePlayer() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportGetNextPlayer(int, int)
// Range: 0x801A1FB0 -> 0x801A201C
int zViewportGetNextPlayer(int playerIndex /* r7 */) {
    // References
    // -> class xGlobals * xglobals;
}
// signature: zViewportGet3DViewport(int)
// Range: 0x801A2020 -> 0x801A2034
class Viewport * zViewportGet3DViewport() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportGetUIViewport(int)
// Range: 0x801A2040 -> 0x801A2058
class Viewport * zViewportGetUIViewport() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportGetIsActive(int)
// Range: 0x801A2060 -> 0x801A2078
bool zViewportGetIsActive() {
    // References
    // -> class zViewport viewports[4];
}
// Range: 0x801A2080 -> 0x801A20D4
void zViewportSceneSetup() {
    {
        // Range: 0x801A2090 -> 0x801A20BC
        // Local variables
        int ii; // r29
    }

    // References
    // -> class zViewport viewports[4];
}
// Range: 0x801A20E0 -> 0x801A2150
bool zViewportIsAnyCheating(int index /* r30 */) {
    // Local variables
    int playerIndex; // r4

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801A2150 -> 0x801A21A8
void zViewportSceneEnter(class zScene & scene /* r28 */) {
    {
        // Range: 0x801A2160 -> 0x801A2194
        // Local variables
        int ii; // r29
    }

    // References
    // -> class zViewport viewports[4];
}
// Range: 0x801A21B0 -> 0x801A2200
void zViewportSceneExit() {
    {
        // Range: 0x801A21C0 -> 0x801A21EC
        // Local variables
        int ii; // r29
    }

    // References
    // -> class zViewport viewports[4];
}
// Range: 0x801A2200 -> 0x801A2278
void zViewportUpdate(float dt /* f31 */) {
    {
        // Range: 0x801A2220 -> 0x801A2260
        // Local variables
        int ii; // r28
    }

    // References
    // -> static int splitscreenCount;
    // -> class zViewport viewports[4];
}
// Range: 0x801A2280 -> 0x801A22D4
void zViewportReset() {
    {
        // Range: 0x801A2290 -> 0x801A22C0
        // Local variables
        int ii; // r29
    }

    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportGetInvertCameraControlVertical(int)
// Range: 0x801A22E0 -> 0x801A22F8
bool zViewportGetInvertCameraControlVertical() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportSetInvertCameraControlVertical(int, bool)
// Range: 0x801A2300 -> 0x801A2348
void zViewportSetInvertCameraControlVertical() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportGetInvertCameraControlHorizontal(int)
// Range: 0x801A2350 -> 0x801A2368
bool zViewportGetInvertCameraControlHorizontal() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportSetInvertCameraControlHorizontal(int, bool)
// Range: 0x801A2370 -> 0x801A23B8
void zViewportSetInvertCameraControlHorizontal() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportWorldToScreen(int, const xVec3 &, xVec2 &, float &, bool)
// Range: 0x801A23C0 -> 0x801A2664
bool zViewportWorldToScreen(int index /* r31 */, class xVec3 & worldPoint /* r28 */, class xVec2 & screenPoint /* r29 */, float & invW /* r30 */) {
    // Local variables
    class Matrix43 cameraMat; // r1+0x98
    class Matrix43 invCameraMat; // r1+0x68
    class ViewMatrix viewProj; // r1+0x28
    class Vector4 v; // r1+0x18
    class Vector4 o; // r1+0x8
    float screenPointZ; // f1

    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportScreenToWorldDir(int, const xVec2 &, xVec3 &)
// Range: 0x801A26D0 -> 0x801A2800
void zViewportScreenToWorldDir(class xVec2 & screenPoint /* r29 */, class xVec3 & direction /* r30 */) {
    // Local variables
    class ViewMatrix projMat; // r1+0xB0
    class xMat4x3 viewOG; // r1+0x70
    class Matrix33 viewMat; // r1+0x40
    class Vector screenPointInCameraSpace; // r1+0x30
    class Vector rayOrigin; // r1+0x20
    class Vector rayDir; // r1+0x10

    // References
    // -> class zViewport viewports[4];
}
// Range: 0x801A2800 -> 0x801A2878
bool zViewportIsWidescreen() {
    // Local variables
    unsigned int w; // r31
    unsigned int h; // r3
}
