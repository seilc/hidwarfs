/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\StateOp.cpp
*/
unsigned char lastOddLight; // size: 0x1, address: 0x80848DD0
class LightKitData * lastKit; // size: 0x4, address: 0x80848DD4
unsigned char lastDynLight[8]; // size: 0x8, address: 0x80848DD8
float DualParabolidFrontFace[3][4]; // size: 0x30, address: 0x807BF338
float DualParabolidBackFace[3][4]; // size: 0x30, address: 0x807BF368
static unsigned char s_unitLookupPixels[1024]; // size: 0x400, address: 0x807BF3A0
static unsigned char s_stepLookupPixels[512]; // size: 0x200, address: 0x807BF7A0
static class _GXTexObj s_unitLookupTexObj; // size: 0x20, address: 0x80848DE0
static class _GXTexObj s_stepLookupTexObj; // size: 0x20, address: 0x80848E00
static class WiiPipeTexCoord s_wiiPipeTexCoord[11]; // size: 0x2C, address: 0x807BF9A0
static class WiiPipeOp s_wiiPipeOp[6]; // size: 0x18, address: 0x807BF9D0
static class WiiPipeAlpha s_wiiPipeAlpha[13]; // size: 0x68, address: 0x807BF9E8
static class WiiPipeTEVStage s_wiiPipeTevStage[57]; // size: 0x2AC, address: 0x807BFA50
class WiiPipeState wiiPipeState; // size: 0x38, address: 0x80848E20
float CLR_def[4]; // size: 0x10, address: 0x80787C98
float ALM_def[4]; // size: 0x10, address: 0x80787CA8
float EMS_def[2]; // size: 0x8, address: 0x80787CB8
float AMB_def[3]; // size: 0xC, address: 0x80787CC0
float TBF_DEFAULT; // size: 0x4, address: 0x80787CCC
class WiiPipeConfig s_curConfig; // size: 0x1C, address: 0x80848E58
static class _GXColor tmpWhite; // size: 0x4, address: 0x807BFCFC
static class _GXColor tmpBlack; // size: 0x4, address: 0x807BFD00
static class _GXColor tmpZero; // size: 0x4, address: 0x80848E74
// Range: 0x8030271C -> 0x80302784
void Graphics::StateOpTable::MutableInit() {
    {
        // Range: 0x8030271C -> 0x80302778
        // Local variables
        unsigned char * end; // r5
        unsigned char * it; // r6

        {
            // Range: 0x8030271C -> 0x80302778
            // Local variables
            enum StateOpTypeEnum type; // r8
            class StateOp * ss; // r7
        }
    }
}
// signature: Graphics::StateOpTable::WiiPipeState::ApplyShader(unsigned int, unsigned int)
// Range: 0x80302784 -> 0x80302844
void Graphics::StateOpTable::WiiPipeState::ApplyShader() {
    // References
    // -> float AMB_def[3];
    // -> float EMS_def[2];
    // -> float ALM_def[4];
    // -> float CLR_def[4];
}
// Range: 0x80302844 -> 0x80302BAC
void Graphics::StateOpTable::WiiPipeState::Configure(class WiiPipeState * this /* r25 */, class Viewport * viewp /* r26 */, class Geometry * geom /* r21 */) {
    {
        // Range: 0x80302AEC -> 0x80302B94
        // Local variables
        float sphMat[3][4]; // r1+0x8
        float (& invCamMat)[3][4]; // r0
    }

    // References
    // -> float DualParabolidBackFace[3][4];
    // -> float DualParabolidFrontFace[3][4];
    // -> static class WiiPipeAlpha s_wiiPipeAlpha[13];
    // -> static class WiiPipeOp s_wiiPipeOp[6];
    // -> static class WiiPipeTEVStage s_wiiPipeTevStage[57];
    // -> static class WiiPipeTexCoord s_wiiPipeTexCoord[11];
    // -> class WiiPipeConfig s_curConfig;
}
// signature: Graphics::StateOpTable::ApplyMaterialOverrides(const World::Wii_MaterialSettings &, const void *, const unsigned short *, int)
// Range: 0x80302BAC -> 0x80302FD8
void Graphics::StateOpTable::ApplyMaterialOverrides(class Wii_MaterialSettings & mat /* r29 */, void * params /* r30 */, unsigned short * paramOffsets /* r31 */) {
    {
        // Range: 0x80302DF8 -> 0x80302E80
        // Local variables
        float uvMtx[3][4]; // r1+0x38
        float * srcMtx; // r6
    }
    {
        // Range: 0x80302E80 -> 0x80302F08
        // Local variables
        float uvMtx[3][4]; // r1+0x8
        float * srcMtx; // r6
    }

    // References
    // -> class WiiPipeState wiiPipeState;
}
// Range: 0x80302FD8 -> 0x80303440
void Graphics::StateOpTable::WiiPipeState::UpdateGeom(class WiiPipeState * this /* r28 */, class Geometry * geom /* r27 */) {
    // Local variables
    class Wii_GeometryStateOp * wgop; // r30

    {
        // Range: 0x8030312C -> 0x8030342C
        // Local variables
        int texMtxCount; // r29

        {
            // Range: 0x80303230 -> 0x8030324C
            // Local variables
            int i; // r27
        }
    }

    // References
    // -> class WiiPipeState wiiPipeState;
    // -> class WiiPipeConfig s_curConfig;
}
// signature: Graphics::WiiClampRGBA(_GXColor &, float, float, float, float)
// Range: 0x80304358 -> 0x8030436C
void Graphics::WiiClampRGBA() {
    // Local variables
    float rr; // f0
    float gg; // f0
    float bb; // f0
    float aa; // f0
    float tmpRG; // f0
    float tmpBA; // f1
}
// signature: Graphics::WiiClampIA(_GXColor &, float, float)
// Range: 0x8030436C -> 0x8030437C
void Graphics::WiiClampIA() {
    // Local variables
    float ii; // f0
    float aa; // f0
    float tmpIA; // f0
}
// signature: Graphics::StateOpTable::ApplyRenderable(const void *, const unsigned short *, int, const Graphics::Renderable *, const Graphics::Viewport *, const Graphics::StateOpTable &)
// Range: 0x80303440 -> 0x80303BC8
void Graphics::StateOpTable::ApplyRenderable(class Renderable * rend /* r18 */, class Viewport * viewp /* r19 */, class StateOpTable & shaderOps /* r20 */) {
    // Local variables
    class Wii_ShaderStateOp * wsop; // r29
    unsigned int perspAlphaPass; // r31
    int colorMulAlpha; // r28
    class Renderable3D * renderable; // r27
    bool alphaMulCalc; // r28
    enum _GXColorSrc amb_src; // r26
    enum _GXColorSrc amb_srcA; // r25
    enum _GXColorSrc mat_srcA; // r24
    unsigned int cur_light; // r23
    class LightingState & lightState; // r0
    unsigned int kit_light_mask; // r22
    unsigned int dyn_light_mask; // r21
    class ViewMatrix objectToViewMat; // r1+0x190

    {
        // Range: 0x8030347C -> 0x803034E8
        // Local variables
        class ViewMatrix objectToViewMat; // r1+0x1D0
        class Renderable3D * renderable; // r17
    }
    {
        // Range: 0x80303510 -> 0x80303694
        // Local variables
        float litMul; // f3
        float matB; // f29
        float matG; // f31
        float matR; // f30
        float alphaMul[4]; // r1+0x70
        class _GXColor tmpColors[4]; // r1+0x80
    }
    {
        // Range: 0x80303714 -> 0x803037A4
        // Local variables
        class LightKitData * kit; // r21

        {
            // Range: 0x80303748 -> 0x803037A4
            // Local variables
            int baseIndex; // r16
            int lightIndex; // r17
        }
    }
    {
        // Range: 0x803037A4 -> 0x803037F4
        {
            // Range: 0x803037C8 -> 0x803037E8
            // Local variables
            int i; // r16
        }
    }
    {
        // Range: 0x803038A0 -> 0x80303974
        // Local variables
        class _GXColor tmpMatColor; // r1+0x28
        class Bucket * bucket; // r0
        class Renderable3D * rend3D; // r16
    }
    {
        // Range: 0x80303978 -> 0x80303B98
        // Local variables
        float invObjMat[3][4]; // r1+0x100
        class Matrix43 objectMat; // r1+0x130
        float invViewMat[3][4]; // r1+0x160

        {
            // Range: 0x803039F8 -> 0x80303A98
            // Local variables
            float texMtx[3][4]; // r1+0xD0
            class Vector dir1; // r1+0x50
            class Vector dir0; // r1+0x60
        }
        {
            // Range: 0x80303A98 -> 0x80303B98
            // Local variables
            class _GXLightObj ClipLight; // r1+0x90
            class Vector envDir; // r1+0x30
            class Vector xformEnvDir; // r1+0x40
            class _GXColor color; // r1+0x24
        }
    }

    // References
    // -> class WiiPipeState wiiPipeState;
}
// signature: Graphics::WiiPipeConfig::InitTexCoords(unsigned int, unsigned char, signed char)
// Range: 0x80304384 -> 0x803044EC
void Graphics::WiiPipeConfig::InitTexCoords() {
    // Local variables
    int uvCount; // r10
}
// signature: Graphics::WiiPipeConfig::InitShader(unsigned int, signed char, signed char, signed char)
// Range: 0x803044EC -> 0x80304A74
void Graphics::WiiPipeConfig::InitShader() {
    // Local variables
    int overBright; // r8
}
