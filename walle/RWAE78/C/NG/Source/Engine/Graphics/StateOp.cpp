/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\StateOp.cpp
*/
float myPos[4]; // size: 0x10, address: 0x80709778
float myAt[4]; // size: 0x10, address: 0x80709788
float myAttnA; // size: 0x4, address: 0x80709798
float myAttnK; // size: 0x4, address: 0x8070979C
unsigned int g_kitLookup; // size: 0x4, address: 0x807097A0
unsigned short lastKitScale; // size: 0x2, address: 0x80801860
unsigned char lastIncludeAmbient; // size: 0x1, address: 0x80801862
unsigned char lastOddLight; // size: 0x1, address: 0x80801863
class LightKitData * lastKit[2]; // size: 0x8, address: 0x80801868
unsigned char lastDynLight[8]; // size: 0x8, address: 0x80801870
float DualParabolidFrontFace[3][4]; // size: 0x30, address: 0x807097A8
float DualParabolidBackFace[3][4]; // size: 0x30, address: 0x807097D8
class WiiPipeState wiiPipeState; // size: 0x24, address: 0x80801878
float CLR_def[4]; // size: 0x10, address: 0x806D5FA8
float LMS_def[1]; // size: 0x4, address: 0x806D5FB8
float EMS_def[2]; // size: 0x8, address: 0x806D5FC0
static unsigned char s_unitLookupPixels[1024]; // size: 0x400, address: 0x80709820
static unsigned char s_stepLookupPixels[512]; // size: 0x200, address: 0x80709C20
static class _GXTexObj s_unitLookupTexObj; // size: 0x20, address: 0x808018A0
static class _GXTexObj s_stepLookupTexObj; // size: 0x20, address: 0x808018C0
static class _GXColor tmpWhite; // size: 0x4, address: 0x80709E20
static class _GXColor tmpBlack; // size: 0x4, address: 0x80709E24
static class _GXColor tmpZero; // size: 0x4, address: 0x808018E0
// Range: 0x80271830 -> 0x802718A8
void Graphics::StateOpTable::MutableInit() {
    {
        // Range: 0x80271830 -> 0x8027189C
        // Local variables
        unsigned char * end; // r5
        unsigned char * it; // r6

        {
            // Range: 0x80271830 -> 0x8027189C
            // Local variables
            enum StateOpTypeEnum type; // r8
            class StateOp * ss; // r7
        }
    }
}
// Range: 0x802718A8 -> 0x80271988
void Graphics::StateOpTable::WiiPipeState::ApplyShader(class WiiPipeState * this /* r29 */, unsigned int flg /* r30 */) {
    {
        // Range: 0x802718B8 -> 0x80271958
        // Local variables
        float m2[3][4]; // r1+0x8
        float m1[3][4]; // r1+0x38
        float m0[3][4]; // r1+0x68
    }

    // References
    // -> float EMS_def[2];
    // -> float LMS_def[1];
    // -> float CLR_def[4];
}
// Range: 0x80271988 -> 0x8027287C
void Graphics::StateOpTable::WiiPipeState::Configure(class WiiPipeState * this /* r23 */) {
    // Local variables
    unsigned int maps; // r31
    unsigned int sphereMapPass; // r30
    unsigned int perspAlphaPass; // r29
    unsigned int lightMapUV; // reg65535
    unsigned int lightKitPass; // reg65535
    enum _GXTevStageID TEV_Diffuse0; // r28
    enum _GXTevStageID TEV_Diffuse1; // r20
    enum _GXTevStageID TEV_Light; // r0
    enum _GXTevStageID TEV_Sphere; // r0
    enum _GXTevStageID TEV_PerspAlpha; // r20
    enum _GXTexCoordID TXC_Diffuse; // r0
    enum _GXTexCoordID TXC_Light; // r27
    enum _GXTexCoordID TXC_PerspAlpha; // r26
    enum _GXTexCoordID TXC_KitLookup; // r20
    enum _GXTexCoordID TXC_Sphere; // r25
    enum _GXTevColorArg RAS_Color; // r24

    // References
    // -> unsigned int g_kitLookup;
}
// signature: Graphics::StateOpTable::ApplyMaterialOverrides(const World::Wii_MaterialSettings &, const void *, const unsigned short *, int)
// Range: 0x8027287C -> 0x80272AC4
void Graphics::StateOpTable::ApplyMaterialOverrides(class Wii_MaterialSettings * mat /* r29 */, void * params /* r30 */, unsigned short * paramOffsets /* r31 */) {
    // References
    // -> class WiiPipeState wiiPipeState;
}
// signature: Graphics::StateOpTable::ApplyGeometry(const void *, const unsigned short *, int, const Graphics::Geometry *)
// Range: 0x80272AC4 -> 0x80272E08
void Graphics::StateOpTable::ApplyGeometry(class Geometry * geom /* r31 */) {
    // Local variables
    class Wii_GeometryStateOp * wgop; // r3
}
// signature: Graphics::StateOpTable::ApplyRenderable(const void *, const unsigned short *, int, const Graphics::Renderable *, const Graphics::Viewport *, const Graphics::StateOpTable &)
// Range: 0x80272E08 -> 0x802735BC
void Graphics::StateOpTable::ApplyRenderable(class Renderable * rend /* r29 */, class Viewport * viewp /* r30 */, class StateOpTable * shaderOps /* r31 */) {
    // Local variables
    class Wii_ShaderStateOp * wsop; // r10
    class Wii_MaterialStateOp * wmop; // r26
    unsigned int perspAlphaPass; // r28
    unsigned int lightKitLookup; // r25
    bool hasColorMulAlpha; // r24
    class Renderable3D * renderable; // r23
    bool alphaMulCalc; // r24
    enum _GXColorSrc amb_src; // r22
    enum _GXColorSrc amb_srcA; // r21
    enum _GXColorSrc mat_srcA; // r20
    unsigned int light_mask; // r19
    unsigned int cur_light; // r18
    class LightingState * lightState; // r0
    class ViewMatrix objectToViewMat; // r1+0xC8

    {
        // Range: 0x80272E44 -> 0x80272E98
        // Local variables
        class ViewMatrix objectToViewMat; // r1+0x108
        class Renderable3D * renderable; // r16
    }
    {
        // Range: 0x80272EC4 -> 0x80273108
        // Local variables
        class _GXColor tmpMatColor; // r1+0x24
        float matA; // f4
        float matB; // f2
        float matG; // f1
        float matR; // f5
    }
    {
        // Range: 0x80273184 -> 0x802732A4
        // Local variables
        class LightKitData * kit; // r17

        {
            // Range: 0x802731B8 -> 0x802732A4
            // Local variables
            int baseIndex; // r15
            int i; // r16
            class _GXColor ambient; // r1+0x20
        }
    }
    {
        // Range: 0x802732A4 -> 0x802732F0
        {
            // Range: 0x802732C4 -> 0x802732E4
            // Local variables
            int i; // r15
        }
    }
    {
        // Range: 0x80273344 -> 0x8027341C
        // Local variables
        class _GXColor tmpMatColor; // r1+0x1C
        class Bucket * bucket; // r0
        class Renderable3D * rend3D; // r15
    }
    {
        // Range: 0x8027341C -> 0x8027358C
        // Local variables
        float invViewMat[3][4]; // r1+0x98

        {
            // Range: 0x80273484 -> 0x8027358C
            // Local variables
            float texMtx[2][4]; // r1+0x48
            class Matrix43 objectMat; // r1+0x68
            class Vector * recipScale; // r15
            class Vector dir1; // r1+0x28
            class Vector dir0; // r1+0x38
        }
    }

    // References
    // -> unsigned int g_kitLookup;
    // -> class WiiPipeState wiiPipeState;
}
