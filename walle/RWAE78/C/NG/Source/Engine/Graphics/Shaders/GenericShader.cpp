/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Shaders\GenericShader.cpp
*/
// signature: Graphics::GenericShader::Create(unsigned long long, int, void *, int, void *, int, void *, int, void *, int, unsigned short *, int, void *, unsigned int)
// Range: 0x8027C268 -> 0x8027C304
void Graphics::GenericShader::Create(int materialStateSize /* r25 */, void * geomStates /* r26 */, int geomStateSize /* r27 */, void * rendStates /* r28 */, int rendStateSize /* r29 */, unsigned short * shaderParamOffsets /* r30 */, int shaderParamCount /* r31 */, void * shaderParams /* r12 */, unsigned int flags /* r11 */) {
    // Local variables
    class Wii_ShaderStateOp * wsop; // r0
}
// Range: 0x8027C304 -> 0x8027C308
void Graphics::GenericShader::Destroy() {
}
// Range: 0x8027C308 -> 0x8027C30C
void Graphics::GenericShader::RenderAttach() {
}
// Range: 0x8027C30C -> 0x8027C310
void Graphics::GenericShader::RenderDetach() {
}
// signature: Graphics::GenericShader::GetGeometrySize(int &)
// Range: 0x8027C310 -> 0x8027C328
int Graphics::GenericShader::GetGeometrySize() {
}
// signature: Graphics::GenericShader::CreateGeometryContext(const unsigned char *, void *, int)
// Range: 0x8027C328 -> 0x8027C338
class GeometryContext * Graphics::GenericShader::CreateGeometryContext() {
}
// Range: 0x8027C338 -> 0x8027C52C
void Graphics::GenericShader::BeginRender() {
    // References
    // -> static class _GXColor tmpZero;
    // -> static class _GXColor tmpBlack;
    // -> static class _GXColor tmpWhite;
    // -> class WiiPipeState wiiPipeState;
    // -> unsigned char lastOddLight;
    // -> unsigned char lastIncludeAmbient;
    // -> unsigned short lastKitScale;
    // -> unsigned char lastDynLight[8];
    // -> class LightKitData * lastKit[2];
}
// Range: 0x8027C52C -> 0x8027CD14
void Graphics::GenericShader::Render(class GenericShader * this /* r24 */, class Effect * effect /* r16 */, unsigned char shaderHandle /* r14 */, class Renderable * * renderList /* r25 */, int renderListSize /* r15 */, class Viewport * viewp /* r26 */) {
    // Local variables
    class Geometry * lastGeom; // r31
    class Material * lastMaterial; // r30
    class RenderMode * lastRenderMode; // r29

    {
        // Range: 0x8027C6E4 -> 0x8027CBA0
        // Local variables
        class Renderable * * end; // r28
        class Renderable * * it; // r0

        {
            // Range: 0x8027C6E4 -> 0x8027CBA0
            // Local variables
            int vertLOD; // r27
            class Renderable * rend; // r15
        }
    }

    // References
    // -> class StateNode stateNodes[92];
    // -> class StateDelta stateDeltas[92];
    // -> int stateDeltaSize;
    // -> class StateDelta stateStack[372];
    // -> int stateStackSize;
}
// Range: 0x8027CD14 -> 0x8027CD18
void Graphics::GenericShader::EndRender() {
}
