/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zViewport.cpp
*/
class Viewport ViewportFullUI; // size: 0x224, address: 0x807FBB5C
class zViewport viewports[4]; // size: 0x1A80, address: 0x807FBD90
static int splitscreenCount; // size: 0x4, address: 0x807FD810
static int splitscreenOrientation; // size: 0x4, address: 0x80704DA8
static bool splitscreenDisabled; // size: 0x1, address: 0x807FD814
// Range: 0x80210F20 -> 0x802111E4
void * zViewport::zViewport(class zViewport * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28Graphics8Viewport;
}
// Range: 0x80211230 -> 0x802119D0
void zViewportInit(class ScreenView * screenView /* r15 */) {
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
        // Range: 0x802113A4 -> 0x802114C8
        // Local variables
        int i; // r16
    }
    {
        // Range: 0x802116F8 -> 0x8021177C
        // Local variables
        int i; // r20
    }
    {
        // Range: 0x802118B4 -> 0x802118C4
        // Local variables
        int i; // r16
    }
    {
        // Range: 0x802118E8 -> 0x802118F0
        // Local variables
        int i; // r16
    }
    {
        // Range: 0x8021193C -> 0x80211944
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
// Range: 0x802119D0 -> 0x80211A98
void zViewportAttach() {
    {
        // Range: 0x80211A10 -> 0x80211A6C
        // Local variables
        int i; // r29
    }

    // References
    // -> class zViewport viewports[4];
    // -> class Viewport ViewportFullUI;
}
// signature: zViewportAdd3DShadowCaster(Graphics::ProjectShadowView &, int)
// Range: 0x80211AA0 -> 0x80211AB4
void zViewportAdd3DShadowCaster() {
    // References
    // -> class zViewport viewports[4];
}
// Range: 0x80211AC0 -> 0x80211B50
void zViewportDisableSplitScreens() {
    {
        // Range: 0x80211AD0 -> 0x80211AD0
        // Local variables
        int ii; // r28
    }

    // References
    // -> static bool splitscreenDisabled;
    // -> class zViewport viewports[4];
    // -> static int splitscreenCount;
}
// Range: 0x80211B50 -> 0x80211BE0
void zViewportEnableSplitScreens() {
    {
        // Range: 0x80211B60 -> 0x80211B60
        // Local variables
        int ii; // r28
    }

    // References
    // -> static bool splitscreenDisabled;
    // -> class zViewport viewports[4];
    // -> static int splitscreenCount;
}
// Range: 0x80211BE0 -> 0x80211EFC
void zViewportSetSplitScreenMode(int count /* r30 */, enum eSplitScreenOrientation orientation /* r31 */) {
    {
        // Range: 0x80211C2C -> 0x80211C3C
        // Local variables
        int ii; // r25
    }
    {
        // Range: 0x80211E94 -> 0x80211EC4
        // Local variables
        int ii; // r25
    }

    // References
    // -> static bool splitscreenDisabled;
    // -> class zViewport viewports[4];
    // -> static int splitscreenOrientation;
    // -> static int splitscreenCount;
}
// Range: 0x80211F00 -> 0x80211F0C
int zViewportGetActiveCount() {
    // References
    // -> static int splitscreenCount;
}
// signature: zViewportGetCamera(int)
// Range: 0x80211F10 -> 0x80211F28
class zCam * zViewportGetCamera() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportAddPlayer(int, int)
// Range: 0x80211F30 -> 0x80211F48
void zViewportAddPlayer() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportGetNextPlayer(int, int)
// Range: 0x80211F50 -> 0x80211FB4
int zViewportGetNextPlayer(int playerIndex /* r6 */) {
    // References
    // -> class xGlobals * xglobals;
}
// signature: zViewportGet3DViewport(int)
// Range: 0x80211FC0 -> 0x80211FD4
class Viewport * zViewportGet3DViewport() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportGetUIViewport(int)
// Range: 0x80211FE0 -> 0x80211FF8
class Viewport * zViewportGetUIViewport() {
    // References
    // -> class zViewport viewports[4];
}
// Range: 0x80212000 -> 0x8021200C
class Viewport * zViewportGetFullscreenUIViewport() {
    // References
    // -> class Viewport ViewportFullUI;
}
// signature: zViewportGetIsActive(int)
// Range: 0x80212010 -> 0x80212028
bool zViewportGetIsActive() {
    // References
    // -> class zViewport viewports[4];
}
// Range: 0x80212030 -> 0x80212084
void zViewportSceneSetup() {
    {
        // Range: 0x8021204C -> 0x80212050
        // Local variables
        int ii; // r30
    }

    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportIsAnyCheating(int)
// Range: 0x80212090 -> 0x80212124
bool zViewportIsAnyCheating() {
    // Local variables
    int playerIndex; // r7

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80212130 -> 0x80212190
void zViewportSceneEnter(class zScene * scene /* r29 */) {
    {
        // Range: 0x8021214C -> 0x80212164
        // Local variables
        int ii; // r30
    }

    // References
    // -> class zViewport viewports[4];
}
// Range: 0x80212190 -> 0x802121E0
void zViewportSceneExit() {
    {
        // Range: 0x802121AC -> 0x802121B0
        // Local variables
        int ii; // r30
    }

    // References
    // -> class zViewport viewports[4];
}
// Range: 0x802121E0 -> 0x80212260
void zViewportUpdate(float dt /* f31 */) {
    {
        // Range: 0x802121F8 -> 0x802121F8
        // Local variables
        int ii; // r29
    }

    // References
    // -> class zViewport viewports[4];
    // -> static int splitscreenCount;
}
// Range: 0x80212260 -> 0x802122B4
void zViewportReset() {
    {
        // Range: 0x8021227C -> 0x80212280
        // Local variables
        int ii; // r30
    }

    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportGetInvertCameraControlVertical(int)
// Range: 0x802122C0 -> 0x802122D8
bool zViewportGetInvertCameraControlVertical() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportSetInvertCameraControlVertical(int, bool)
// Range: 0x802122E0 -> 0x8021231C
void zViewportSetInvertCameraControlVertical() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportGetInvertCameraControlHorizontal(int)
// Range: 0x80212320 -> 0x80212338
bool zViewportGetInvertCameraControlHorizontal() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportSetInvertCameraControlHorizontal(int, bool)
// Range: 0x80212340 -> 0x8021237C
void zViewportSetInvertCameraControlHorizontal() {
    // References
    // -> class zViewport viewports[4];
}
// signature: zViewportWorldToScreen(int, const xVec3 &, xVec2 &)
// Range: 0x80212380 -> 0x802129F0
bool zViewportWorldToScreen() {
    // Local variables
    class ViewMatrix projMat; // r1+0xE8
    class xMat4x3 view; // r1+0xA8
    class ViewMatrix viewMat; // r1+0x68
    class ViewMatrix viewProj; // r1+0x28
    class Vector4 v; // r1+0x18
    class Vector4 o; // r1+0x8

    // References
    // -> class zViewport viewports[4];
}
