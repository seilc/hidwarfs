/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Effect.h
*/
// signature: Graphics::Effect::ParamData::Get<Graphics::Sampler>(unsigned short) const
// Range: 0x801E8930 -> 0x801E8938
class Sampler * Graphics::Effect::ParamData::Get<Graphics::Sampler>() const {
}
// signature: Graphics::Effect::ParamData::Get<float>(unsigned short)
// Range: 0x802429E0 -> 0x802429E8
float * Graphics::Effect::ParamData::Get<float>() {
}
// signature: Graphics::Effect::ParamData::Get<Graphics::Sampler>(unsigned short)
// Range: 0x802429E8 -> 0x802429F0
class Sampler * Graphics::Effect::ParamData::Get<Graphics::Sampler>() {
}
// signature: Graphics::Effect::ParamData::GetArray<float>(unsigned short) const
// Range: 0x8025AAB4 -> 0x8025AABC
float * Graphics::Effect::ParamData::GetArray<float>() const {
}
// signature: Graphics::Effect::ParamData::GetTotalSize(int)
// Range: 0x8023A954 -> 0x8023A958
int Graphics::Effect::ParamData::GetTotalSize() {
}
// signature: Graphics::Effect::GetParamFormatTable(Graphics::Effect::ExposureEnum) const
// Range: 0x8023B4AC -> 0x8023B4BC
class ParamFormatTable * Graphics::Effect::GetParamFormatTable() const {
}
// signature: Graphics::Effect::GetParamDataSize(Graphics::Effect::ExposureEnum) const
// Range: 0x8023A93C -> 0x8023A954
int Graphics::Effect::GetParamDataSize() const {
}
// signature: Graphics::Effect::CreateParamData(Graphics::Effect::ExposureEnum, void *, int) const
// Range: 0x8023B4BC -> 0x8023B4C4
class ParamData * Graphics::Effect::CreateParamData() const {
}
// signature: Graphics::Effect::GetShader(int, Graphics::Shader::RenderStage, int, int, int) const
// Range: 0x80255E84 -> 0x80255F10
unsigned char Graphics::Effect::GetShader() const {
}
// signature: Graphics::Effect::GetShaderObject(unsigned char) const
// Range: 0x80252EC4 -> 0x80252ED4
class Shader * Graphics::Effect::GetShaderObject() const {
}
// signature: Graphics::Effect::FindParam(Graphics::Effect::ExposureEnum, const char *) const
// Range: 0x801E87D0 -> 0x801E8850
unsigned short Graphics::Effect::FindParam(char * paramName /* r27 */) const {
    // Local variables
    class ParamFormat * formats; // r30

    {
        // Range: 0x801E87EC -> 0x801E8828
        // Local variables
        int end; // r28
        int i; // r29
    }
}
// signature: Graphics::Effect::FindParam(Graphics::Effect::ExposureEnum, int) const
// Range: 0x80242524 -> 0x80242560
unsigned short Graphics::Effect::FindParam() const {
    // Local variables
    class ParamFormat * formats; // r4
}
// Range: 0x80250C80 -> 0x80250CF0
int Graphics::Effect::FindTechnique(class Effect * this /* r27 */, char * name /* r28 */) const {
    {
        // Range: 0x80250C94 -> 0x80250CCC
        // Local variables
        int end; // r29
        int i; // r30
    }
}
