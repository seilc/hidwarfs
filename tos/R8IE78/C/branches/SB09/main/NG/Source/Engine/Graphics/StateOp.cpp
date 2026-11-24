/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\StateOp.cpp
*/
unsigned char lastOddLight; // size: 0x1, address: 0x80777620
class LightKitData * lastKit; // size: 0x4, address: 0x80777624
unsigned char lastDynLight[8]; // size: 0x8, address: 0x80777628
float DualParabolidFrontFace[3][4]; // size: 0x30, address: 0x806CD320
float DualParabolidBackFace[3][4]; // size: 0x30, address: 0x806CD350
static unsigned char s_unitLookupPixels[1024]; // size: 0x400, address: 0x806CD380
static unsigned char s_stepLookupPixels[512]; // size: 0x200, address: 0x806CD780
static class _GXTexObj s_unitLookupTexObj; // size: 0x20, address: 0x80777630
static class _GXTexObj s_stepLookupTexObj; // size: 0x20, address: 0x80777650
static class WiiPipeTexCoord s_wiiPipeTexCoord[15]; // size: 0x3C, address: 0x806CD980
static class WiiPipeOp s_wiiPipeOp[10]; // size: 0x28, address: 0x806CD9C0
static class WiiPipeAlpha s_wiiPipeAlpha[19]; // size: 0x98, address: 0x806CD9E8
static class WiiPipeTEVStage s_wiiPipeTevStage[86]; // size: 0x408, address: 0x806CDA80
class WiiPipeState wiiPipeState; // size: 0x3C, address: 0x80777670
float CLR_def[4]; // size: 0x10, address: 0x806931C0
float ALM_def[4]; // size: 0x10, address: 0x806931D0
float EMS_def; // size: 0x4, address: 0x806931E0
float AMB_def[3]; // size: 0xC, address: 0x806931E4
float TBF_DEFAULT; // size: 0x4, address: 0x806931F0
class WiiPipeConfig s_curConfig; // size: 0x20, address: 0x807776B0
class _GXColor tmpWhite; // size: 0x4, address: 0x806CDE88
class _GXColor tmpBlack; // size: 0x4, address: 0x806CDE8C
class _GXColor tmpZero; // size: 0x4, address: 0x80779ED4
float MYBIGNUM; // size: 0x4, address: 0x806931FC
float myAttnK; // size: 0x4, address: 0x80693200
float myAttnA; // size: 0x4, address: 0x80693204
int MAX_DYN_LIGHTS; // size: 0x4, address: 0x80693208
// Range: 0x801D1DC0 -> 0x801D1E28
void Graphics::StateOpTable::MutableInit() {
    {
        // Range: 0x801D1DC0 -> 0x801D1E24
        // Local variables
        unsigned char * end; // r5
        unsigned char * it; // r6

        {
            // Range: 0x801D1DC0 -> 0x801D1E24
            // Local variables
            enum StateOpTypeEnum type; // r8
            class StateOp * ss; // r7
        }
    }
}
// Range: 0x801D1E30 -> 0x801D1F1C
void Graphics::StateOpTable::WiiPipeState::Init(class WiiPipeState * this /* r29 */) {
    // References
    // -> static unsigned char s_stepLookupPixels[512];
    // -> static class _GXTexObj s_stepLookupTexObj;
    // -> static class _GXTexObj s_unitLookupTexObj;
    // -> static unsigned char s_unitLookupPixels[1024];
}
// signature: Graphics::StateOpTable::WiiPipeState::ApplyShader(unsigned int, unsigned int)
// Range: 0x801D1F20 -> 0x801D1FE0
void Graphics::StateOpTable::WiiPipeState::ApplyShader() {
    // References
    // -> float AMB_def[3];
    // -> float ALM_def[4];
    // -> float CLR_def[4];
    // -> float EMS_def;
}
// signature: Graphics::StateOpTable::WiiPipeState::UpdateDiffuse(const Graphics::Texture *)
// Range: 0x801D1FE0 -> 0x801D2008
void Graphics::StateOpTable::WiiPipeState::UpdateDiffuse() {
    // Local variables
    int testDiffuseType; // r4
}
// signature: Graphics::StateOpTable::WiiPipeState::UpdateDiffuse1(const Graphics::Texture *)
// Range: 0x801D2010 -> 0x801D2038
void Graphics::StateOpTable::WiiPipeState::UpdateDiffuse1() {
    // Local variables
    int testDiffuseType; // r4
}
// signature: Graphics::StateOpTable::WiiPipeState::UpdateLightMap(const Graphics::Texture *)
// Range: 0x801D2040 -> 0x801D2064
void Graphics::StateOpTable::WiiPipeState::UpdateLightMap() {
}
// signature: Graphics::StateOpTable::WiiPipeState::UpdateEnv(const Graphics::Texture *)
// Range: 0x801D2070 -> 0x801D20F8
void Graphics::StateOpTable::WiiPipeState::UpdateEnv() {
    // Local variables
    int testEnvCount; // r6
}
// Range: 0x801D2100 -> 0x801D22A8
void Graphics::StateOpTable::WiiPipeState::Configure(class WiiPipeState * this /* r29 */, class Viewport * viewp /* r30 */, class Geometry * geom /* r27 */) {
    {
        // Range: 0x801D21C4 -> 0x801D2290
        // Local variables
        float sphMat[3][4]; // r1+0x8
        float (& invCamMat)[3][4]; // r0
    }

    // References
    // -> float DualParabolidBackFace[3][4];
    // -> float DualParabolidFrontFace[3][4];
    // -> class WiiPipeConfig s_curConfig;
}
// signature: Graphics::StateOpTable::ApplyShader(const void *, const unsigned short *, int)
// Range: 0x801D22B0 -> 0x801D23D4
void Graphics::StateOpTable::ApplyShader() {
    // Local variables
    class Wii_ShaderStateOp * wsop; // r29

    {
        // Range: 0x801D2364 -> 0x801D239C
        // Local variables
        class ViewMatrix orthoMat; // r1+0x20
    }

    // References
    // -> class _GXColor tmpZero;
    // -> class _GXColor tmpBlack;
    // -> class _GXColor tmpWhite;
    // -> class WiiPipeState wiiPipeState;
}
// Range: 0x801D23E0 -> 0x801D2448
void Graphics::StateOpTable::ApplyEndShader() {
    // References
    // -> class WiiPipeConfig s_curConfig;
    // -> class Viewport * activeViewport;
}
// signature: Graphics::StateOpTable::ApplyMaterialOverrides(const World::Wii_MaterialSettings &, const void *, const unsigned short *, int)
// Range: 0x801D2450 -> 0x801D2804
void Graphics::StateOpTable::ApplyMaterialOverrides(class Wii_MaterialSettings & mat /* r29 */, void * params /* r30 */, unsigned short * paramOffsets /* r31 */) {
    {
        // Range: 0x801D2650 -> 0x801D26D8
        // Local variables
        float uvMtx[3][4]; // r1+0x38
        float * srcMtx; // r6
    }
    {
        // Range: 0x801D26D8 -> 0x801D2760
        // Local variables
        float uvMtx[3][4]; // r1+0x8
        float * srcMtx; // r6
    }

    // References
    // -> class WiiPipeState wiiPipeState;
}
// signature: Graphics::StateOpTable::ApplyMaterial(const void *, const unsigned short *, int, const Graphics::Viewport *)
// Range: 0x801D2810 -> 0x801D29CC
void Graphics::StateOpTable::ApplyMaterial(void * params /* r28 */, unsigned short * paramOffsets /* r29 */, int paramCount /* r30 */) {
    // Local variables
    class Wii_MaterialStateOp * wmop; // r31
}
// Range: 0x801D2E00 -> 0x801D2E70
void Graphics::ApplyChannel(enum _GXAttr attr /* r29 */, class ChannelInfo & info /* r30 */, class VertexBuffer * vtxBuf /* r31 */) {
}
// Range: 0x801D2D60 -> 0x801D2DAC
void Graphics::ApplyChannelDirect(enum _GXAttr attr /* r30 */, class ChannelInfo & info /* r31 */) {
}
// signature: Graphics::WiiHasBump(bool &, bool &, unsigned int, signed char)
// Range: 0x801D2DB0 -> 0x801D2DF8
void Graphics::WiiHasBump() {
}
// Range: 0x801D29D0 -> 0x801D2D54
void Graphics::StateOpTable::WiiPipeState::UpdateGeom(class WiiPipeState * this /* r28 */, class Geometry * geom /* r27 */) {
    // Local variables
    class Wii_GeometryStateOp * wgop; // r30

    {
        // Range: 0x801D2AA4 -> 0x801D2D40
        // Local variables
        int texMtxCount; // r29

        {
            // Range: 0x801D2AC8 -> 0x801D2C94
            // Local variables
            bool sphBump; // r1+0x8
            bool kitBump; // r1+0x9

            {
                // Range: 0x801D2C70 -> 0x801D2C94
                // Local variables
                int i; // r27
            }
        }
    }

    // References
    // -> class WiiPipeConfig s_curConfig;
    // -> class WiiPipeState wiiPipeState;
}
// signature: Graphics::WiiClampRGBA(_GXColor &, float, float, float, float)
// Range: 0x801D3E30 -> 0x801D3E44
void Graphics::WiiClampRGBA() {
    // Local variables
    float rr; // f0
    float gg; // f0
    float bb; // f0
    float aa; // f0
    float tmpRG; // f0
    float tmpBA; // f1
}
// signature: Graphics::StateOpTable::ApplyRenderable(const void *, const unsigned short *, int, const Graphics::Renderable *, const Graphics::Viewport *, const Graphics::StateOpTable &)
// Range: 0x801D2E70 -> 0x801D35D4
void Graphics::StateOpTable::ApplyRenderable(class Renderable * rend /* r19 */, class Viewport * viewp /* r20 */, class StateOpTable & shaderOps /* r21 */) {
    // Local variables
    class Wii_ShaderStateOp * wsop; // r29
    class Wii_MaterialStateOp * wmop; // r18
    unsigned int perspAlphaPass; // r30
    int colorMulAlpha; // r28
    bool alphaMulCalc; // r28
    enum _GXColorSrc amb_src; // r27
    enum _GXColorSrc amb_srcA; // r26
    enum _GXColorSrc mat_srcA; // r25
    unsigned int cur_light; // r24
    unsigned int kit_light_mask; // r23
    unsigned int dyn_light_mask; // r22
    class ViewMatrix objectToViewMat; // r1+0x190

    {
        // Range: 0x801D2EAC -> 0x801D2F04
        // Local variables
        class ViewMatrix objectToViewMat; // r1+0x1D0
    }
    {
        // Range: 0x801D2F50 -> 0x801D3124
        // Local variables
        float litMul; // f3
        float matB; // f29
        float matG; // f30
        float matR; // f31
        float alphaMul[4]; // r1+0x70
        class _GXColor tmpColors[4]; // r1+0x80
    }
    {
        // Range: 0x801D3188 -> 0x801D3214
        // Local variables
        class LightKitData * kit; // r22

        {
            // Range: 0x801D31BC -> 0x801D3214
            // Local variables
            int baseIndex; // r17
            int lightIndex; // r18
        }
    }
    {
        // Range: 0x801D3214 -> 0x801D3264
        {
            // Range: 0x801D3238 -> 0x801D3264
            // Local variables
            int i; // r17
        }
    }
    {
        // Range: 0x801D3308 -> 0x801D33C4
        // Local variables
        class _GXColor tmpMatColor; // r1+0x28
        class Bucket * bucket; // r17
    }
    {
        // Range: 0x801D33C8 -> 0x801D35A4
        // Local variables
        float invObjMat[3][4]; // r1+0x100
        class Matrix43 objectMat; // r1+0x130
        float invViewMat[3][4]; // r1+0x160

        {
            // Range: 0x801D3448 -> 0x801D34E0
            // Local variables
            float texMtx[3][4]; // r1+0xD0
            class Vector dir1; // r1+0x50
            class Vector dir0; // r1+0x60
        }
        {
            // Range: 0x801D34E0 -> 0x801D35A4
            // Local variables
            class _GXLightObj ClipLight; // r1+0x90
            class Vector envDir; // r1+0x30
            class Vector xformEnvDir; // r1+0x40
            class _GXColor color; // r1+0x24
        }
    }

    // References
    // -> class WiiPipeConfig s_curConfig;
    // -> class WiiPipeState wiiPipeState;
}
// Range: 0x801D3E90 -> 0x801D40CC
void Graphics::WiiPipeConfig::InitTexCoords(class WiiPipeConfig * this /* r28 */, unsigned int flags /* r29 */, unsigned char uvMapping /* r30 */, signed char envCount /* r31 */) {
    // Local variables
    bool kitBump; // r1+0x9
    bool sphBump; // r1+0x8
    int uvCount; // r6

    {
        // Range: 0x801D3F58 -> 0x801D3F7C
        // Local variables
        int i; // r6
    }
}
// Range: 0x801D40D0 -> 0x801D49DC
void Graphics::WiiPipeConfig::InitShader(class WiiPipeConfig * this /* r26 */, unsigned int flags /* r27 */, signed char diffuseType /* r28 */, signed char diffuseType1 /* r29 */, signed char oldLightMapCount /* r30 */, signed char envCount /* r31 */) {
    // Local variables
    bool kitBump; // r1+0x9
    bool sphBump; // r1+0x8
    int overBright; // r4
    int lmkOverBright; // r5
    int envOverBright; // r6
    bool envPrev; // r7
    bool envRasc; // r8

    // References
    // -> class WiiPipeConfig s_curConfig;
}
// Range: 0x801D49E0 -> 0x801D4AF0
void Graphics::WiiPipeConfig::ApplyTexCoords(class WiiPipeConfig * this /* r29 */) {
    {
        // Range: 0x801D49F4 -> 0x801D4A5C
        // Local variables
        float indMtx[2][3]; // r1+0x8
    }
    {
        // Range: 0x801D4A64 -> 0x801D4ADC
        // Local variables
        int i; // r30
    }

    // References
    // -> static class WiiPipeTexCoord s_wiiPipeTexCoord[15];
}
// Range: 0x801D4AF0 -> 0x801D4C5C
void Graphics::WiiPipeConfig::ApplyShader(class WiiPipeConfig * this /* r30 */) {
    {
        // Range: 0x801D4B3C -> 0x801D4C48
        // Local variables
        int i; // r31
    }

    // References
    // -> static class WiiPipeAlpha s_wiiPipeAlpha[19];
    // -> static class WiiPipeTEVStage s_wiiPipeTevStage[86];
    // -> static class WiiPipeOp s_wiiPipeOp[10];
}
// Range: 0x801D4C60 -> 0x801D4CE4
void Graphics::WiiPipeConfig::ApplyTevOrder(class WiiPipeConfig * this /* r29 */) {
    {
        // Range: 0x801D4C70 -> 0x801D4CD0
        // Local variables
        int i; // r30
    }

    // References
    // -> static class WiiPipeTEVStage s_wiiPipeTevStage[86];
}
// Range: 0x801D4CF0 -> 0x801D4D54
void Graphics::WiiPipeConfig::ResetIndirect(class WiiPipeConfig * this /* r30 */) {
    {
        // Range: 0x801D4D18 -> 0x801D4D38
        // Local variables
        int i; // r31
    }
}
