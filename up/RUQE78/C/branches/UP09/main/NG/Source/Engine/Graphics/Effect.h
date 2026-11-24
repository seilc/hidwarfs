/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Effect.h
*/
// signature: Graphics::Effect::ParamData::Get<Graphics::Sampler>(unsigned short) const
// Range: 0x80299F20 -> 0x80299F28
class Sampler & Graphics::Effect::ParamData::Get<Graphics::Sampler>() const {
}
// signature: Graphics::Effect::GetParamFormatTable(Graphics::Effect::ExposureEnum) const
// Range: 0x802DB4E4 -> 0x802DB4F4
class ParamFormatTable & Graphics::Effect::GetParamFormatTable() const {
}
// signature: Graphics::Effect::GetParamDataSize(Graphics::Effect::ExposureEnum) const
// Range: 0x802DB108 -> 0x802DB120
int Graphics::Effect::GetParamDataSize() const {
}
// signature: Graphics::Effect::GetShader(int, Graphics::Shader::RenderStage, int, int, int) const
// Range: 0x802ED210 -> 0x802ED29C
unsigned char Graphics::Effect::GetShader() const {
}
// signature: Graphics::Effect::GetShaderObject(unsigned char) const
// Range: 0x802E9EF4 -> 0x802E9F04
class Shader * Graphics::Effect::GetShaderObject() const {
}
// signature: Graphics::Effect::FindParam(Graphics::Effect::ExposureEnum, const char *) const
// Range: 0x80299DD0 -> 0x80299E50
unsigned short Graphics::Effect::FindParam(char * paramName /* r27 */) const {
    // Local variables
    class ParamFormat * formats; // r30

    {
        // Range: 0x80299DEC -> 0x80299E28
        // Local variables
        int end; // r28
        int i; // r29
    }
}
// signature: Graphics::Effect::FindParam(Graphics::Effect::ExposureEnum, int) const
// Range: 0x802DE54C -> 0x802DE588
unsigned short Graphics::Effect::FindParam() const {
    // Local variables
    class ParamFormat * formats; // r4
}
// Range: 0x802E78D8 -> 0x802E7948
int Graphics::Effect::FindTechnique(class Effect * this /* r27 */, char * name /* r28 */) const {
    {
        // Range: 0x802E78EC -> 0x802E7924
        // Local variables
        int end; // r29
        int i; // r30
    }
}
// signature: Graphics::Effect::GetStandardTechniqueHandle(Graphics::Effect::StandardTechniqueEnum) const
// Range: 0x802EF72C -> 0x802EF738
unsigned char Graphics::Effect::GetStandardTechniqueHandle() const {
}
