/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00462260 -> 0x00462708
*/
// Range: 0x462260 -> 0x462708
void xScrFxLensFlare_Render(class RwCamera * cam /* r22 */) {
    /* anonymous block */ {
        // Range: 0x462260 -> 0x462708
        signed int sNumFlares'146; // r3
        class iScrFxLensFlare * flare; // r4
        class RwMatrixTag * cammat; // r2
        class xVec3 * campos; // r2
        class xVec3 * cam_at; // r2
        signed int i; // r3
        signed int i; // r20
        class xScrFxLensFlareSource * source; // r2
        float intensity; // r20
        class xVec3 v1; // r29+0xC0
        class xVec3 v2; // r29+0xB0
        float inner; // r23
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00462710 -> 0x00462730
*/
// Range: 0x462710 -> 0x462730
static signed int lfcmp(void * a /* r2 */, void * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x462710 -> 0x462730
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00462730 -> 0x00462F94
*/
// Range: 0x462730 -> 0x462F94
static void xScrFxLensFlare_RenderElements(class RwFrame * frame /* r17 */, unsigned char vCol /* r18 */, void * flr /* r19 */) {
    /* anonymous block */ {
        // Range: 0x462730 -> 0x462F94
        class RxObjSpace3DVertex verts[4]; // r29+0x300
        unsigned short indices[4]; // r29+0x3D8
        class RxObjSpace3DVertex qverts[9]; // r29+0x1B0
        unsigned short qindices[10]; // r29+0x190
        class RwCamera * camera; // r2
        class RwV2d * vw; // r2
        class RwMatrixTag invMtx; // r29+0x150
        class RwMatrixTag transform; // r29+0x110
        class RwMatrixTag tmp; // r29+0xD0
        class RwMatrixTag * matrix; // r20
        class RwV3d v; // r29+0x3C8
        float length; // r20
        class RwV3d position; // r29+0x3B8
        class xScrFxLensFlareElement * ep; // r2
        class iScrFxLensFlare * flare; // r2
        class xScrFxLensFlareSource * source; // r2
        signed int i; // r19
        unsigned char r; // r2
        unsigned char g; // r2
        unsigned char b; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwV3d flareSize; // r29+0x3A8
        float uadj; // r29+0x3E0
        float vadj; // r29+0x3E0
        unsigned char r; // r2
        unsigned char g; // r2
        unsigned char b; // r2
        signed int j; // r3
        class RwRGBA * _col; // r2
        class RwV3d flareSize; // r29+0x398
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00462FA0 -> 0x00462FDC
*/
// Range: 0x462FA0 -> 0x462FDC
void xScrFxLensFlare_SceneExit() {
    /* anonymous block */ {
        // Range: 0x462FA0 -> 0x462FDC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00462FE0 -> 0x004632A4
*/
// Range: 0x462FE0 -> 0x4632A4
void xScrFxLensFlare_SceneEnter() {
    /* anonymous block */ {
        // Range: 0x462FE0 -> 0x4632A4
        signed int sNumFlares'122; // r3
        signed int numDyns; // r2
        signed int i; // r17
        class xDynAsset * dyn; // r2
        signed int numSources; // r18
        signed int i; // r17
        class xDynAsset * dyn; // r2
        signed int i; // r17
        class xDynAsset * dyn; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004632B0 -> 0x004635A4
*/
// Range: 0x4632B0 -> 0x4635A4
static void LensFlareSourceCB(void * obj /* r19 */, unsigned int type /* r18 */, void * data /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4632B0 -> 0x4635A4
        class xScrFxLensFlareSource * source; // r16
        unsigned int elementID; // r2
        signed int numElements; // r2
        unsigned int texID; // r8
        signed int i; // r7
        class xScrFxLensFlareElement * element; // r2
        signed int i; // r21
        class xScrFxLensFlareElement * element; // r2
        class RwTexture * tex; // r23
        class RwRaster * raster; // r20
        signed int width; // r2
        signed int height; // r2
        class RwRaster * newRaster; // r17
        class RwImage * image; // r19
        signed int format; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004635B0 -> 0x004635D8
*/
// Range: 0x4635B0 -> 0x4635D8
static void LensFlareElementCB(void * obj /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4635B0 -> 0x4635D8
        class xScrFxLensFlareSourceAsset * asset; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004635E0 -> 0x00463888
*/
// Range: 0x4635E0 -> 0x463888
static signed int ObjRecurse(unsigned int assetID /* r16 */, void (* callback)(void *, unsigned int, void *) /* r19 */, void * data /* r18 */) {
    /* anonymous block */ {
        // Range: 0x4635E0 -> 0x463888
        signed int count; // r17
        class xBase * base; // r2
        class xGroup * group; // r16
        unsigned int numItems; // r2
        unsigned int i; // r21
        unsigned int memberID; // r2
        unsigned int size; // r29+0x7C
        void * obj; // r16
        class xDynAsset * da; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00463890 -> 0x004638C4
*/
// Range: 0x463890 -> 0x4638C4
void xCameraFXEnd(class xMat4x3 & mat /* r2 */, class RwCamera * icam /* r2 */) {
    /* anonymous block */ {
        // Range: 0x463890 -> 0x4638C4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004638D0 -> 0x00463A40
*/
// Range: 0x4638D0 -> 0x463A40
void xCameraFXUpdate(class xMat4x3 & mat /* r19 */, class RwCamera * icam /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x4638D0 -> 0x463A40
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00463A40 -> 0x00463DD0
*/
// Range: 0x463A40 -> 0x463DD0
void xCameraFXShakeUpdate(class cameraFX * f /* r18 */, float dt /* r29+0x60 */, class xMat4x3 * m /* r17 */) {
    /* anonymous block */ {
        // Range: 0x463A40 -> 0x463DD0
        float x; // r20
        float y; // r20
        float scale; // r21
        float noise; // r20
        float s; // r29+0x60
        class xVec3 e; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00463DD0 -> 0x00463EA8
*/
// Range: 0x463DD0 -> 0x463EA8
class cameraFX * xCameraFXShake(float maxTime /* r29 */, float magnitude /* r29 */, float cycleMax /* r29 */, float rotate_magnitude /* r29 */, float radius /* r29 */, class xVec3 * epicenter /* r2 */, class xVec3 * player /* r2 */, unsigned char shakeY /* r2 */) {
    /* anonymous block */ {
        // Range: 0x463DD0 -> 0x463EA8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00463EB0 -> 0x00463ED0
*/
// Range: 0x463EB0 -> 0x463ED0
void xCameraFXShakeEnd(class cameraFX * fx /* r2 */, float fadeOutTime /* r29 */) {
    /* anonymous block */ {
        // Range: 0x463EB0 -> 0x463ED0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00463ED0 -> 0x00463EF8
*/
// Range: 0x463ED0 -> 0x463EF8
class cameraFX * xCameraFXShakeForever(float magnitude /* r12 */, float cycleMax /* r1 */, float rotate_magnitude /* r29 */, float radius /* r29 */, class xVec3 * epicenter /* r2 */, class xVec3 * player /* r2 */, unsigned char shakeY /* r2 */) {
    /* anonymous block */ {
        // Range: 0x463ED0 -> 0x463EF8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00463F00 -> 0x00464044
*/
// Range: 0x463F00 -> 0x464044
void xCameraFXZoomUpdate(class cameraFX * f /* r7 */, float dt /* r29+0x10 */, class xMat4x3 * m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x463F00 -> 0x464044
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00464050 -> 0x00464098
*/
// Range: 0x464050 -> 0x464098
void xCameraFXKill() {
    /* anonymous block */ {
        // Range: 0x464050 -> 0x464098
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004640A0 -> 0x004640F8
*/
// Range: 0x4640A0 -> 0x4640F8
void xCameraFXBegin(class xMat4x3 & mat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4640A0 -> 0x4640F8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00464100 -> 0x0046453C
*/
// Range: 0x464100 -> 0x46453C
void xScrFxDrawBox(float x1 /* r29+0x10 */, float y1 /* r29+0x10 */, float x2 /* r29+0x10 */, float y2 /* r29+0x10 */, unsigned char red /* r2 */, unsigned char green /* r2 */, unsigned char blue /* r2 */, unsigned char alpha /* r2 */, float ushift /* r29+0x10 */, float vshift /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x464100 -> 0x46453C
        float oocameraNearClipPlane; // r29+0x10
        unsigned short indices[4]; // @ 0x00636ED8
        class RwSky2DVertex v[4]; // @ 0x0078A8C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00464540 -> 0x00465084
*/
// Range: 0x464540 -> 0x465084
void xScrFXGlareRender(class xMat4x3 & mat /* r20 */) {
    /* anonymous block */ {
        // Range: 0x464540 -> 0x465084
        signed int i; // r23
        class xVec3 w; // r29+0x160
        class xVec3 h; // r29+0x150
        class xVec3 v; // r29+0x140
        class xVec3 glareDir; // r29+0x130
        float val; // r1
        class xVec3 toCam; // r29+0x120
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RxObjSpace3DVertex sStripVert[4]; // @ 0x0078A830
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00465090 -> 0x00465330
*/
// Range: 0x465090 -> 0x465330
void xScrFXFullScreenGlareRender() {
    /* anonymous block */ {
        // Range: 0x465090 -> 0x465330
        class xMat4x3 mat; // r29+0x70
        class xVec3 v; // r29+0xC0
        class xVec3 glareDir; // r29+0xB0
        float d; // r1
        float alpha; // r1
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00465330 -> 0x0046535C
*/
// Range: 0x465330 -> 0x46535C
unsigned char xScrFXGlareActive(signed int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x465330 -> 0x46535C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00465360 -> 0x004653EC
*/
// Range: 0x465360 -> 0x4653EC
void xScrFXGlareChange(signed int id /* r2 */, class xVec3 * pos /* r2 */, float life /* r29 */, float intensity /* r29 */) {
    /* anonymous block */ {
        // Range: 0x465360 -> 0x4653EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004653F0 -> 0x004655C8
*/
// Range: 0x4653F0 -> 0x4655C8
signed int xScrFXGlareAdd(class xVec3 * pos /* r2 */, float life /* r29+0x30 */, float intensity /* r29+0x30 */, float size /* r29+0x30 */, float r /* r29+0x30 */, float g /* r29+0x30 */, float b /* r29+0x30 */, float a /* r29+0x30 */, class RwRaster * raster /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4653F0 -> 0x4655C8
        signed int i; // r17
        class RwTexture * texturePtr; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004655D0 -> 0x004655F8
*/
// Range: 0x4655D0 -> 0x4655F8
void xScrFXGlareDisable(signed int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4655D0 -> 0x4655F8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00465600 -> 0x00465874
*/
// Range: 0x465600 -> 0x465874
void xScrFxDrawSafeArea() {
    /* anonymous block */ {
        // Range: 0x465600 -> 0x465874
        class RwVideoMode videoMode; // r29+0x60
        unsigned char bHiDef; // r3
        float fSafeArea; // r2
        unsigned int screenWidth; // r2
        unsigned int screenHeight; // r2
        unsigned int xMargin; // r16
        unsigned int yMargin; // r2
        signed int top; // r2
        signed int bottom; // r2
        signed int left; // r2
        signed int right; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00465880 -> 0x004659C4
*/
// Range: 0x465880 -> 0x4659C4
void xScrFxRenderLetterBox() {
    /* anonymous block */ {
        // Range: 0x465880 -> 0x4659C4
        class RwVideoMode video_mode; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004659D0 -> 0x00465A18
*/
// Range: 0x4659D0 -> 0x465A18
void xScrFxLetterbox(signed int enable /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4659D0 -> 0x465A18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00465A20 -> 0x00465A28
*/
// Range: 0x465A20 -> 0x465A28
void xScrFxLetterBoxSetAlpha(unsigned char alpha /* r2 */) {
    /* anonymous block */ {
        // Range: 0x465A20 -> 0x465A28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00465A30 -> 0x00465A88
*/
// Range: 0x465A30 -> 0x465A88
void xScrFxLetterBoxSetSize(float size /* r29 */) {
    /* anonymous block */ {
        // Range: 0x465A30 -> 0x465A88
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00465A90 -> 0x00465A9C
*/
// Range: 0x465A90 -> 0x465A9C
void xScrFxLetterboxReset() {
    /* anonymous block */ {
        // Range: 0x465A90 -> 0x465A9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00465AA0 -> 0x00465DDC
*/
// Range: 0x465AA0 -> 0x465DDC
static void xScrFxFadeUpdate(float seconds /* r20 */) {
    /* anonymous block */ {
        // Range: 0x465AA0 -> 0x465DDC
        float percent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00465DE0 -> 0x00465DEC
*/
// Range: 0x465DE0 -> 0x465DEC
unsigned char xScrFxIsFading() {
    /* anonymous block */ {
        // Range: 0x465DE0 -> 0x465DEC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00465DF0 -> 0x00465DFC
*/
// Range: 0x465DF0 -> 0x465DFC
void xScrFxStopFade() {
    /* anonymous block */ {
        // Range: 0x465DF0 -> 0x465DFC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00465E00 -> 0x00465EA4
*/
// Range: 0x465E00 -> 0x465EA4
void xScrFxFade(class xColor_tag * base /* r2 */, class xColor_tag * dest /* r2 */, float seconds /* r29 */, signed int hold /* r2 */) {
    /* anonymous block */ {
        // Range: 0x465E00 -> 0x465EA4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00465EB0 -> 0x00465F08
*/
// Range: 0x465EB0 -> 0x465F08
void xScrFxDrawScreenSizeRectangle() {
    /* anonymous block */ {
        // Range: 0x465EB0 -> 0x465F08
        class RwVideoMode video_mode; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00465F10 -> 0x00466074
*/
// Range: 0x465F10 -> 0x466074
void xScrFxRender() {
    /* anonymous block */ {
        // Range: 0x465F10 -> 0x466074
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00466080 -> 0x00466250
*/
// Range: 0x466080 -> 0x466250
void xScrFxUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x466080 -> 0x466250
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00466250 -> 0x00466288
*/
// Range: 0x466250 -> 0x466288
void xScrFxReset() {
    /* anonymous block */ {
        // Range: 0x466250 -> 0x466288
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScrFx.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00466290 -> 0x00466334
*/
// Range: 0x466290 -> 0x466334
void xScrFxInit() {
    /* anonymous block */ {
        // Range: 0x466290 -> 0x466334
    }
}


