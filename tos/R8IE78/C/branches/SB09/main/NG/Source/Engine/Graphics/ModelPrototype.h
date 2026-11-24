/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\ModelPrototype.h
*/
// signature: Graphics::ModelPrototype::ReferenceModelEntry::GetInstanceMatrix(const Graphics::ModelPrototype *, unsigned short, Math::Matrix43 &) const
// Range: 0x8001D460 -> 0x8001D500
void Graphics::ModelPrototype::ReferenceModelEntry::GetInstanceMatrix(class Matrix43 & mat /* r28 */) const {
    // Local variables
    unsigned short * parentTransformIndices; // r0
    class Matrix43 * transforms; // r0
    int rootTransformIndex; // r29

    {
        // Range: 0x8001D4B4 -> 0x8001D4EC
        // Local variables
        int parentIndex; // r29
    }

    // References
    // -> static class Matrix43 _matIdentity;
}
// Range: 0x801BBBE0 -> 0x801BBBF0
int Graphics::ModelPrototype::GetChildTransformCount() const {
}
// signature: Graphics::ModelPrototype::GetBuilder(int)
// Range: 0x80027110 -> 0x80027120
class Builder * Graphics::ModelPrototype::GetBuilder() {
}
// signature: Graphics::ModelPrototype::GetReferenceModelEntry(unsigned short) const
// Range: 0x80011C60 -> 0x80011C8C
class ReferenceModelEntry * Graphics::ModelPrototype::GetReferenceModelEntry() const {
}
// Range: 0x80011BB0 -> 0x80011C54
void Graphics::ModelPrototype::GetReferenceModelInfoFromInstanceNumber(class ModelPrototype * this /* r26 */, unsigned short instanceNum /* r27 */, class ReferenceModelEntry * & entryData /* r28 */, unsigned short & refInstanceNum /* r29 */) const {
    {
        // Range: 0x80011BF0 -> 0x80011C40
        // Local variables
        unsigned short curRefModel; // r30
        unsigned short curRefModelInstance; // r31
        unsigned short lastRefModelInstance; // r4

        {
            // Range: 0x80011BF0 -> 0x80011C40
            // Local variables
            class ReferenceModelEntry * refModelEntry; // r0
        }
    }
}
