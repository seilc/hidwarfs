/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zUIModel.cpp
*/
// Range: 0x80183E70 -> 0x80183F24
void zUIModel::DoInit(class zUIModel * this /* r26 */) {
    // Local variables
    class Model & currentModel; // r0
    unsigned int count; // r28

    {
        // Range: 0x80183E98 -> 0x80183EF4
        // Local variables
        unsigned int i; // r27
    }
}
// Range: 0x80183F30 -> 0x80184014
void zUIModel::InitModel(class zUIModel * this /* r31 */) {
    // Local variables
    class UI_Model * asset; // r0
    class zAnimList * animList; // r0

    {
        // Range: 0x80183F90 -> 0x80184000
        // Local variables
        class xAnimState * state; // r3
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80184020 -> 0x80184024
void zUIModel::DoReset() {
}
// Range: 0x80184030 -> 0x801840B0
void zUIModel::DoUpdate(class zUIModel * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80184050 -> 0x80184098
        // Local variables
        class Matrix43 transform; // r1+0x8
    }
}
// signature: zUIModel::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801840B0 -> 0x801841DC
void zUIModel::DoHandleEvent(class zUIModel * this /* r31 */) {
}
// Range: 0x801841E0 -> 0x8018425C
class Entity * Sext::UI_Model::Create(class EntityHandleBase * handle /* r29 */, class UI_Model * asset /* r30 */) {
    // References
    // -> struct {} __vt__8zUIModel;
}
