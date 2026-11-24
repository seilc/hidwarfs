/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUIModel.cpp
*/
// Range: 0x80270970 -> 0x80270E08
void zUIModel::DoInit(class zUIModel * this /* r27 */) {
    // Local variables
    class Model & currentModel; // r0
    unsigned int count; // r0

    {
        // Range: 0x80270C30 -> 0x80270C30
        // Local variables
        unsigned int i; // r26
    }

    // References
    // -> class zGlobals globals;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x80270E20 -> 0x80270E24
void zUIModel::DoRender() const {
}
// Range: 0x80270E30 -> 0x802711F4
void zUIModel::DoUpdate(class zUIModel * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80270E64 -> 0x802711CC
        // Local variables
        class Matrix43 transform; // r1+0x158
    }

    // References
    // -> class Scene * primaryScene;
    // -> class Vector4 vec4Zero;
    // -> class Vector4 vec4OneX;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneZ;
}
// signature: zUIModel::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80271210 -> 0x8027133C
void zUIModel::DoHandleEvent(class zUIModel * this /* r31 */) {
}
// Range: 0x80271340 -> 0x80271440
class Entity * Sext::UI_Model::Create(class EntityHandleBase * handle /* r29 */, class UI_Model * asset /* r30 */) {
    // References
    // -> struct {} __vt__8zUIModel;
    // -> struct {} __vt__Q25World9xOGEntity;
}
