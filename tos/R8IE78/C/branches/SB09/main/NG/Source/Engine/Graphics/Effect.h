/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Effect.h
*/
// signature: Graphics::Effect::ParamData::GetArray<float>(unsigned short) const
// Range: 0x80210740 -> 0x80210748
float * Graphics::Effect::ParamData::GetArray<float>() const {
}
// signature: Graphics::Effect::GetShader(const Graphics::Effect::Feature *, int) const
// Range: 0x801C6B60 -> 0x801C6B84
unsigned char Graphics::Effect::GetShader() const {
}
// signature: Graphics::Effect::GetShader(int, Graphics::Shader::RenderStage, int, int, int) const
// Range: 0x801C8710 -> 0x801C8770
unsigned char Graphics::Effect::GetShader() const {
}
// signature: Graphics::Effect::GetShaderObject(unsigned char) const
// Range: 0x8020CF70 -> 0x8020CF80
class Shader * Graphics::Effect::GetShaderObject() const {
}
// signature: Graphics::Effect::GetRenderMode(unsigned char) const
// Range: 0x801C6B40 -> 0x801C6B54
class RenderMode * Graphics::Effect::GetRenderMode() const {
}
// signature: Graphics::Effect::FindParam(Graphics::Effect::ExposureEnum, const char *) const
// Range: 0x80012F10 -> 0x80012F8C
unsigned short Graphics::Effect::FindParam(char * paramName /* r27 */) const {
    // Local variables
    class ParamFormat * formats; // r30

    {
        // Range: 0x80012F2C -> 0x80012F70
        // Local variables
        int end; // r28
        int i; // r29
    }
}
// signature: Graphics::Effect::FindParam(Graphics::Effect::ExposureEnum, int) const
// Range: 0x801BA640 -> 0x801BA67C
unsigned short Graphics::Effect::FindParam() const {
    // Local variables
    class ParamFormat * formats; // r4
}
// Range: 0x801C45B0 -> 0x801C4620
int Graphics::Effect::FindTechnique(class Effect * this /* r27 */, char * name /* r28 */) const {
    {
        // Range: 0x801C45C4 -> 0x801C4608
        // Local variables
        int end; // r29
        int i; // r30
    }
}
// signature: Graphics::Effect::GetStandardTechniqueHandle(Graphics::Effect::StandardTechniqueEnum) const
// Range: 0x8020CF60 -> 0x8020CF6C
unsigned char Graphics::Effect::GetStandardTechniqueHandle() const {
}
// signature: Graphics::Effect::FindFeature(const Graphics::Effect::LOD *, int) const
// Range: 0x801C6810 -> 0x801C6870
class Feature * Graphics::Effect::FindFeature(int featureSet /* r5 */) const {
    // Local variables
    unsigned int featureMask; // r6

    {
        // Range: 0x801C6820 -> 0x801C6840
        // Local variables
        class Feature * end; // r8
        class Feature * it; // r7
    }
    {
        // Range: 0x801C6844 -> 0x801C6868
        // Local variables
        class Feature * end; // r4
        class Feature * it; // r3
    }
}
