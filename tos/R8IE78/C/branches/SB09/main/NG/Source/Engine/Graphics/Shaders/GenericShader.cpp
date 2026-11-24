/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Shaders\GenericShader.cpp
*/
int * device; // size: 0x4, address: 0x806932D4
// signature: Graphics::GenericShader::Create(unsigned long long, int, void *, int, void *, int, void *, int, void *, int, unsigned short *, int, void *, unsigned int)
// Range: 0x801DCE90 -> 0x801DCF4C
void Graphics::GenericShader::Create(class GenericShader * this /* r23 */, void * shaderStates /* r24 */, int shaderStateSize /* r25 */, void * materialStates /* r26 */, int materialStateSize /* r27 */, void * geomStates /* r28 */, int geomStateSize /* r29 */, void * rendStates /* r30 */, int rendStateSize /* r31 */, unsigned short * shaderParamOffsets /* r12 */, int shaderParamCount /* r11 */, void * shaderParams /* r8 */, unsigned int flags /* r0 */) {
    // Local variables
    class Wii_ShaderStateOp * wsop; // r0
}
// signature: Graphics::GenericShader::GetGeometrySize(int &)
// Range: 0x801DCF70 -> 0x801DCF88
int Graphics::GenericShader::GetGeometrySize() {
}
// signature: Graphics::GenericShader::CreateGeometryContext(const unsigned char *, void *, int)
// Range: 0x801DCF90 -> 0x801DCFA0
class GeometryContext * Graphics::GenericShader::CreateGeometryContext() {
}
// Range: 0x801DCFA0 -> 0x801DD01C
void Graphics::GenericShader::BeginRender() {
    // References
    // -> class LightKitData * lastKit;
    // -> unsigned char lastOddLight;
    // -> unsigned char lastDynLight[8];
}
// Range: 0x801DD020 -> 0x801DD204
void Graphics::GenericShader::Render(class GenericShader * this /* r30 */, class Effect * effect /* r18 */, unsigned char shaderHandle /* r17 */, class Renderable * * renderList /* r31 */, int renderListSize /* r16 */, class Viewport * viewp /* r15 */) {
    // Local variables
    class Geometry * lastGeom; // r27
    int materialParamCount; // r26
    unsigned short * materialParamOffsets; // r25
    int geomParamCount; // r24
    unsigned short * geomParamOffsets; // r23
    int rendParamCount; // r22
    unsigned short * rendParamOffsets; // r21
    class Material * lastMaterial; // r20
    class RenderMode * lastRenderMode; // r19

    {
        // Range: 0x801DD0A8 -> 0x801DD1E0
        // Local variables
        class Renderable * * end; // r18
        class Renderable * * it; // reg65535

        {
            // Range: 0x801DD0A8 -> 0x801DD1E0
            // Local variables
            int vertLOD; // r16
            class Renderable * rend; // r17
        }
    }
}
// Range: 0x801DD280 -> 0x801DD29C
void Graphics::GenericShader::EndRender() {
}
