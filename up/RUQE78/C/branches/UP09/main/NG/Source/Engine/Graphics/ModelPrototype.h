/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\ModelPrototype.h
*/
// signature: Graphics::ModelPrototype::ReferenceModelEntry::GetInstanceMatrix(const Graphics::ModelPrototype *, unsigned short, Math::Matrix43 &) const
// Range: 0x8003BC80 -> 0x8003BDE4
void Graphics::ModelPrototype::ReferenceModelEntry::GetInstanceMatrix(class Matrix43 & mat /* r29 */) const {
    // Local variables
    class Matrix43 * transforms; // r30
    int rootTransformIndex; // r0

    {
        // Range: 0x8003BD28 -> 0x8003BD9C
        // Local variables
        int parentIndex; // r28
    }

    // References
    // -> static class Matrix43 _matIdentity;
}
// Range: 0x802DDDA4 -> 0x802DDDAC
int Graphics::ModelPrototype::GetRenderableCount() const {
}
// signature: Graphics::ModelPrototype::GetChildTransform(int) const
// Range: 0x8000BC80 -> 0x8000BC90
class Matrix43 & Graphics::ModelPrototype::GetChildTransform() const {
}
// signature: Graphics::ModelPrototype::GetReferenceModelEntry(unsigned short) const
// Range: 0x8001A970 -> 0x8001A99C
class ReferenceModelEntry * Graphics::ModelPrototype::GetReferenceModelEntry() const {
}
// signature: Graphics::ModelPrototype::GetReferenceModelInfoFromInstanceNumber(unsigned short, const Graphics::ModelPrototype::ReferenceModelEntry *&, unsigned short &) const
// Range: 0x8001A8D0 -> 0x8001A968
void Graphics::ModelPrototype::GetReferenceModelInfoFromInstanceNumber() const {
    {
        // Range: 0x8001A8F0 -> 0x8001A950
        // Local variables
        unsigned short curRefModel; // r10
        unsigned short curRefModelInstance; // r9
        unsigned short lastRefModelInstance; // r8
    }
}
