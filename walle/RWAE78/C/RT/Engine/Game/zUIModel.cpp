/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zUIModel.cpp
*/
static class xOGSchema _UI_ModelSchema; // size: 0x18, address: 0x807E5468
static class SchemaRegistrator _UI_ModelSchemaReg; // size: 0x8, address: 0x807E5480
// Range: 0x801D00C0 -> 0x801D0170
void zUIModel::DoInit(class zUIModel * this /* r31 */) {
}
// Range: 0x801D0170 -> 0x801D02B0
void zUIModel::InitModel(class zUIModel * this /* r30 */) {
    // Local variables
    class UI_Model * asset; // r0
    class xOGEntityModelContext context; // r1+0xC

    {
        // Range: 0x801D0208 -> 0x801D0298
        // Local variables
        class xAnimState * state; // r3
        int idx; // r1+0x8
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x801D02B0 -> 0x801D031C
void zUIModel::DoReset(class zUIModel * this /* r31 */) {
}
// Range: 0x801D0320 -> 0x801D0684
void zUIModel::DoRender(class zUIModel * this /* r31 */) const {
    // Local variables
    class Matrix43 transform; // r1+0x158

    // References
    // -> class Vector4 vec4Zero;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
    // -> class Vector4 vec4OneZ;
}
// Range: 0x801D0690 -> 0x801D06E4
void zUIModel::DoUpdate(class zUIModel * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x801D06F0 -> 0x801D0750
void zUIModel::DoExit(class zUIModel * this /* r31 */) {
}
// signature: zUIModel::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801D0750 -> 0x801D087C
void zUIModel::DoHandleEvent(class zUIModel * this /* r31 */) {
}
// signature: zUIModel_Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x801D0880 -> 0x801D090C
void zUIModel_Init(class xBase * data /* r30 */, class xDynAsset * asset /* r31 */) {
    // References
    // -> struct {} __vt__8zUIModel;
}
// Range: 0x801D0910 -> 0x801D099C
void zUIModel_Init(class zUIModel * model /* r30 */, class UI_Model * asset /* r31 */) {
    // References
    // -> struct {} __vt__8zUIModel;
}
