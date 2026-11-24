/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCUPGeneric.cpp
*/
class zNPCEntityParams sEntParams; // size: 0x14, address: 0x808239D4
struct {} __vt__23zNPCEntity_ModelUpdater; // size: 0xC, address: 0x807B4A38
struct {} __vt__Q24Util37BlockAllocatorArray<14zNeoDrivenLink>; // size: 0xC, address: 0x807B4A44
static class zNPCHitReactionTable sUPGenericHitReactionTable[1]; // size: 0x8, address: 0x807AFA58
// Range: 0x801E7540 -> 0x801E8664
void zNPCUPGeneric::Type::CreateAnimTable(class xAnimTable * table /* r27 */) {
}
// Range: 0x801E8670 -> 0x801E87A4
void zNPCUPGeneric::Type::InitTypeParameters() {
    {
        // Range: 0x801E873C -> 0x801E873C
        // Local variables
        int i; // r0
    }

    // References
    // -> class zNPCEntityParams sEntParams;
    // -> struct {} __vt__46zCreator<10,14zNPCExtraModel,14zNPCExtraModel>;
    // -> class zCreator _inst;
    // -> class zCreator _inst;
    // -> struct {} __vt__56zCreator<16,19zNPCQuickTimeCombat,19zNPCQuickTimeCombat>;
    // -> class zCreator _inst;
    // -> struct {} __vt__37zCreator<6,10zNPCCombat,10zNPCCombat>;
    // -> class zCreator _inst;
    // -> struct {} __vt__38zCreator<1,13zNPCBTManager,9zNPCLogic>;
    // -> class zCreator _inst;
    // -> struct {} __vt__47zCreator<7,18zNPCSingleSteering,12zNPCSteering>;
}
// signature: zNPCUPGeneric::AfterAnimMatrices(zNPCBase *, xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x801E87B0 -> 0x801E87B8
void zNPCUPGeneric::AfterAnimMatrices() {
}
// signature: zNPCUPGeneric::Activate(const zNPCStatus *)
// Range: 0x801E87C0 -> 0x801E8B50
bool zNPCUPGeneric::Activate(class zNPCUPGeneric * this /* r31 */) {
    {
        // Range: 0x801E884C -> 0x801E888C
        // Local variables
        class zNPCCombatParams defaultParams; // r1+0x20
    }
    {
        // Range: 0x801E88C8 -> 0x801E892C
        // Local variables
        bool stopTrackingWhenClipped; // r30
        float stopTrackingDistance; // f27
        float maxYaw; // f28
        float minYaw; // f29
        float maxPitch; // f30
        float minPitch; // f31
    }

    // References
    // -> class xMat4x3 g_I3;
}
// signature: zNPCUPGeneric::Initialize(const zNPCStatus *)
// Range: 0x801E8B50 -> 0x801E8C78
void zNPCUPGeneric::Initialize(class zNPCUPGeneric * this /* r29 */) {
    // Local variables
    class UPGeneric * assetUpGeneric; // r0
    class NPCTemplate * npcTemplateAsset; // r30

    // References
    // -> static class zNPCHitReactionTable sUPGenericHitReactionTable[1];
    // -> class zFactory factory;
    // -> class zNPCEntityParams sEntParams;
}
// Range: 0x801E8CB0 -> 0x801E8EB4
void zNPCUPGeneric::Update(class zNPCUPGeneric * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x801E8DF4 -> 0x801E8E8C
        // Local variables
        int i; // r0
    }
}
// Range: 0x801E8EC0 -> 0x801E8F40
void zNPCUPGeneric::Render(class zNPCUPGeneric * this /* r30 */) {
    {
        // Range: 0x801E8EF8 -> 0x801E8F18
        // Local variables
        int i; // r31
    }
}
// signature: zNPCUPGeneric::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801E8F40 -> 0x801E9018
void zNPCUPGeneric::SystemEvent(class zNPCUPGeneric * this /* r29 */, class EventAny * params /* r30 */) {
    {
        // Range: 0x801E8F7C -> 0x801E8FE8
        // Local variables
        class xBase * targetBase; // r5
        class EventActionEnt * entParams; // r0
    }
}
// Range: 0x801E9020 -> 0x801E90EC
bool zNPCUPGeneric::GetFleePoint(class xVec3 & fleePoint /* r31 */) {
    // References
    // -> static unsigned int NPC_VAR_FLEE_POS;
}
