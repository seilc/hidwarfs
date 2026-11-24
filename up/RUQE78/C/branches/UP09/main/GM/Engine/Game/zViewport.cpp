/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zViewport.cpp
*/
class Viewport ViewportFullUI; // size: 0x24C, address: 0x80843ACC
class zViewport viewports[4]; // size: 0x1BC0, address: 0x80843D28
static int splitscreenCount; // size: 0x4, address: 0x808458E8
static enum eSplitScreenOrientation splitscreenOrientation; // size: 0x4, address: 0x808458EC
static bool splitscreenDisabled; // size: 0x1, address: 0x808458F0
// Range: 0x802B51D0 -> 0x802B5464
void * zViewport::zViewport(class zViewport * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28Graphics8Viewport;
}
// Range: 0x802B5480 -> 0x802B5C24
void zViewportInit(class ScreenView & screenView /* r15 */) {
    // Local variables
    class Matrix43 uiMat; // r1+0x88
    class Vector eyePos; // r1+0x48
    class Vector targetPos; // r1+0x38
    class Vector lookDir; // r1+0x28
    class Matrix43 cameraMat; // r1+0x58
    float fovy; // f26
    float aspect; // f27
    float znear; // f28
    float zfar; // f29

    {
        // Range: 0x802B5580 -> 0x802B56B4
        // Local variables
        int i; // r16
    }
    {
        // Range: 0x802B58D4 -> 0x802B5974
        // Local variables
        int i; // r21
    }
    {
        // Range: 0x802B5AB4 -> 0x802B5AC4
        // Local variables
        int i; // r16
    }
    {
        // Range: 0x802B5AE8 -> 0x802B5AF0
        // Local variables
        int i; // r16
    }
    {
        // Range: 0x802B5B94 -> 0x802B5B98
        // Local variables
        int i; // r16
    }

    // References
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4Zero;
    // -> class zViewport viewports[4];
    // -> static class Matrix43 _matIdentity;
    // -> class Viewport ViewportFullUI;
}
// Range: 0x802B5C30 -> 0x802B5CF8
void zViewportAttach() {
    {
        // Range: 0x802B5C70 -> 0x802B5CCC
        // Local variables
        int i; // r29
    }

    // References
    // -> class zViewport viewports[4];
    // -> class Viewport ViewportFullUI;
}
// signature: zViewportAdd3DShadowCaster(Graphics::ProjectShadowView *, int)
// Range: 0x802B5D00 -> 0x802B5D14
void zViewportAdd3DShadowCaster() {
    // References
    // -> class zViewport viewports[4];
}
// Range: 0x802B5D20 -> 0x802B5DB0
void zViewportDisableSplitScreens() {
    {
        // Range: 0x802B5D30 -> 0x802B5D30
        // Local variables
        int ii; // r28
    }

    // References
    // -> static bool splitscreenDisabled;
    // -> class zViewport viewports[4];
    // -> static int splitscreenCount;
}
// Range: 0x802B5DB0 -> 0x802B5E40
void zViewportEnableSplitScreens() {
    {
        // Range: 0x802B5DC0 -> 0x802B5DC0
        // Local variables
        int ii; // r28
    }

    // References
    // -> static bool splitscreenDisabled;
    // -> class zViewport viewports[4];
    // -> static int splitscreenCount;
}
// Range: 0x802B5E40 -> 0x802B6180
void zViewportSetSplitScreenMode(int count /* r30 */, enum eSplitScreenOrientation orientation /* r31 */) {
    {
        // Range: 0x802B5E84 -> 0x802B5E94
        // Local variables
        int ii; // r29
    }
    {
        // Range: 0x802B6118 -> 0x802B6148
        // Local variables
        int ii; // r27
    }

    // References
    // -> static bool splitscreenDisabled;
    // -> class zViewport viewports[4];
    // -> static enum eSplitScreenOrientation splitscreenOrientation;
    // -> static int splitscreenCount;
}
// Range: 0x802B6180 -> 0x802B618C
int zViewportGetActiveCount() {
    // References
    // -> static int splitscreenCount;
}
// signature: zViewportGetCamera(int)
// Range: 0x802B6190 -> 0x802B61A8
class zCam * zViewportGetCamera() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportAddPlayer(int, int)
// Range: 0x802B61B0 -> 0x802B61C8
void zViewportAddPlayer() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportRemovePlayer(int, int)
// Range: 0x802B61D0 -> 0x802B61E8
void zViewportRemovePlayer() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportGetNextPlayer(int, int)
// Range: 0x802B61F0 -> 0x802B6260
int zViewportGetNextPlayer(int playerIndex /* r6 */) {
    // References
    // -> class xGlobals * xglobals;
}
// signature: zViewportGet3DViewport(int)
// Range: 0x802B6260 -> 0x802B6274
class Viewport * zViewportGet3DViewport() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportGetUIViewport(int)
// Range: 0x802B6280 -> 0x802B6298
class Viewport * zViewportGetUIViewport() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportGetIsActive(int)
// Range: 0x802B62A0 -> 0x802B62B8
bool zViewportGetIsActive() {
    // References
    // -> class zViewport viewports[4];
}
// Range: 0x802B62C0 -> 0x802B6314
void zViewportSceneSetup() {
    {
        // Range: 0x802B62DC -> 0x802B62E0
        // Local variables
        int ii; // r30
    }

    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportIsAnyCheating(int)
// Range: 0x802B6320 -> 0x802B63C0
bool zViewportIsAnyCheating() {
    // Local variables
    int playerIndex; // r7

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x802B63C0 -> 0x802B6420
void zViewportSceneEnter(class zScene & scene /* r29 */) {
    {
        // Range: 0x802B63DC -> 0x802B63F4
        // Local variables
        int ii; // r30
    }

    // References
    // -> class zViewport viewports[4];
}
// Range: 0x802B6420 -> 0x802B6470
void zViewportSceneExit() {
    {
        // Range: 0x802B643C -> 0x802B6440
        // Local variables
        int ii; // r30
    }

    // References
    // -> class zViewport viewports[4];
}
// Range: 0x802B6470 -> 0x802B64F0
void zViewportUpdate(float dt /* f31 */) {
    {
        // Range: 0x802B6488 -> 0x802B6488
        // Local variables
        int ii; // r29
    }

    // References
    // -> class zViewport viewports[4];
    // -> static int splitscreenCount;
}
// Range: 0x802B64F0 -> 0x802B6544
void zViewportReset() {
    {
        // Range: 0x802B650C -> 0x802B6510
        // Local variables
        int ii; // r30
    }

    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportGetInvertCameraControlVertical(int)
// Range: 0x802B6550 -> 0x802B6568
bool zViewportGetInvertCameraControlVertical() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportSetInvertCameraControlVertical(int, bool)
// Range: 0x802B6570 -> 0x802B65AC
void zViewportSetInvertCameraControlVertical() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportGetInvertCameraControlHorizontal(int)
// Range: 0x802B65B0 -> 0x802B65C8
bool zViewportGetInvertCameraControlHorizontal() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportSetInvertCameraControlHorizontal(int, bool)
// Range: 0x802B65D0 -> 0x802B660C
void zViewportSetInvertCameraControlHorizontal() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportWorldToScreen(int, const xVec3 &, xVec2 &)
// Range: 0x802B6610 -> 0x802B6824
bool zViewportWorldToScreen(class xVec3 & worldPoint /* r30 */, class xVec2 & screenPoint /* r31 */) {
    // Local variables
    class Matrix43 cameraMat; // r1+0x98
    class Matrix43 invCameraMat; // r1+0x68
    class ViewMatrix viewProj; // r1+0x28
    class Vector4 v; // r1+0x18
    class Vector4 o; // r1+0x8
    float invW; // f2
    float screenPointZ; // f4

    // References
    // -> class zViewport viewports[4];
}
// Range: 0x802B6830 -> 0x802B68A8
bool zViewportIsWidescreen() {
    // Local variables
    unsigned int w; // r31
    unsigned int h; // r3
}
