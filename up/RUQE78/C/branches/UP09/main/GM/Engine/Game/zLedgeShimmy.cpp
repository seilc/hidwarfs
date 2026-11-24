/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zLedgeShimmy.cpp
*/
// Range: 0x80190180 -> 0x801901D0
void zLedgeShimmy::Init(class zLedgeShimmy * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x801901D0 -> 0x80190248
void zLedgeShimmy::Setup(class zLedgeShimmy * this /* r31 */) {
}
// Range: 0x80190250 -> 0x801903D8
void zLedgeShimmy::SetupIcon(class zLedgeShimmy * this /* r31 */) {
    // Local variables
    class xVec3 iconPos; // r1+0x14
}
// Range: 0x801903E0 -> 0x801904D0
void zLedgeShimmy::LoadValuesFromAsset(class zLedgeShimmy * this /* r28 */) {
    {
        // Range: 0x80190414 -> 0x80190440
        // Local variables
        unsigned int i; // r29
    }
}
// Range: 0x801904D0 -> 0x80190528
void zLedgeShimmy::Reset(class zLedgeShimmy * this /* r31 */) {
}
// signature: zLedgeShimmy::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80190530 -> 0x80190658
void zLedgeShimmy::HandleEvent(class zLedgeShimmy * this /* r31 */, unsigned int toEvent /* r28 */) {
}
// Range: 0x80190660 -> 0x8019073C
class Entity * Sext::zLedgeShimmyAsset::Create(class EntityHandleBase * handle /* r29 */, class zLedgeShimmyAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__12zLedgeShimmy;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zLedgeShimmy::TimeStep(float)
// Range: 0x80190740 -> 0x80190750
void zLedgeShimmy::TimeStep() {
}
// signature: zLedgeShimmy::ContextCheckForNavigation(zCommonPlayer *)
// Range: 0x80190750 -> 0x801907A0
void zLedgeShimmy::ContextCheckForNavigation() {
    {
        // Range: 0x8019075C -> 0x80190790
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// Range: 0x801907A0 -> 0x8019086C
void zLedgeShimmy::ContextCheckForPresence(class zLedgeShimmy * this /* r28 */, class zCommonPlayer * player /* r29 */) {
    {
        // Range: 0x801907D4 -> 0x80190834
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// Range: 0x80190880 -> 0x80190A04
bool zLedgeShimmy::CanStart(class zLedgeShimmy * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    // Local variables
    unsigned int playerAction; // r0
}
// Range: 0x80190A10 -> 0x80190AC8
bool zLedgeShimmy::InBox(class zLedgeShimmy * this /* r28 */, class xVec3 * chkPos /* r29 */) {
    {
        // Range: 0x80190A58 -> 0x80190A90
        // Local variables
        unsigned int i; // r30
    }
}
// signature: zLedgeShimmy::GetAnimPackage(ePlayerName)
// Range: 0x80190AD0 -> 0x80190AE8
class zAnimPackage * zLedgeShimmy::GetAnimPackage() {
}
