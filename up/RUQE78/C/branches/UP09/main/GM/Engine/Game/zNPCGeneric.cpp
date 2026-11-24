/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCGeneric.cpp
*/
class zNPCEntityParams sEntParams; // size: 0x14, address: 0x80822E20
static class zNPCHitReactionTable sNPCGenericHitReactionTable[2]; // size: 0x10, address: 0x807AF9A8
// Range: 0x801D4B50 -> 0x801D55FC
void zNPCGeneric::Type::CreateAnimTable(class xAnimTable * table /* r27 */) {
}
// Range: 0x801D5600 -> 0x801D5720
void zNPCGeneric::Type::InitTypeParameters() {
    // References
    // -> class zNPCEntityParams sEntParams;
    // -> class zCreator _inst;
    // -> struct {} __vt__56zCreator<16,19zNPCQuickTimeCombat,19zNPCQuickTimeCombat>;
    // -> class zCreator _inst;
    // -> struct {} __vt__45zCreator<5,14zNPCPerception,14zNPCPerception>;
    // -> class zCreator _inst;
    // -> struct {} __vt__37zCreator<6,10zNPCCombat,10zNPCCombat>;
    // -> class zCreator _inst;
    // -> struct {} __vt__38zCreator<1,13zNPCBTManager,9zNPCLogic>;
    // -> class zCreator _inst;
    // -> struct {} __vt__47zCreator<7,18zNPCSingleSteering,12zNPCSteering>;
}
// signature: zNPCGeneric::AfterAnimMatrices(zNPCBase *, xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x801D5720 -> 0x801D5788
void zNPCGeneric::AfterAnimMatrices(class xAnimPlay * play /* r26 */, class Matrix43 * skinMat /* r27 */, class xQuat * quat /* r28 */, class xVec3 * scale /* r29 */, class xVec3 * tran /* r30 */, int boneCount /* r31 */) {
    // References
    // -> class zTailTracker sSingleton;
}
// signature: zNPCGeneric::Activate(const zNPCStatus *)
// Range: 0x801D5790 -> 0x801D5A90
bool zNPCGeneric::Activate(class zNPCGeneric * this /* r31 */) {
    {
        // Range: 0x801D5798 -> 0x801D5798
        // Local variables
        int i; // r4
    }
    {
        // Range: 0x801D5964 -> 0x801D59A4
        // Local variables
        class zNPCCombatParams defaultParams; // r1+0x8
    }
    {
        // Range: 0x801D59E0 -> 0x801D5A44
        // Local variables
        bool stopTrackingWhenClipped; // r28
        float stopTrackingDistance; // f27
        float maxYaw; // f28
        float minYaw; // f29
        float maxPitch; // f30
        float minPitch; // f31
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zNPCGeneric::Initialize(const zNPCStatus *)
// Range: 0x801D5A90 -> 0x801D5C00
void zNPCGeneric::Initialize(class zNPCGeneric * this /* r31 */) {
    // Local variables
    class NPCGeneric * assetNPCGeneric; // r0
    class NPCTemplate * npcTemplateAsset; // r29

    // References
    // -> static class zNPCHitReactionTable sNPCGenericHitReactionTable[2];
    // -> class zFactory factory;
    // -> class zNPCEntityParams sEntParams;
}
// signature: zNPCGeneric::Uninitialize(zNPCStatus *)
// Range: 0x801D5C00 -> 0x801D5C48
void zNPCGeneric::Uninitialize(class zNPCGeneric * this /* r31 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x801D5C60 -> 0x801D5E0C
void zNPCGeneric::SceneSetup(class zNPCGeneric * this /* r30 */) {
    {
        // Range: 0x801D5C74 -> 0x801D5DF8
        // Local variables
        class zNPCBTActionBuilder * actionBuilder; // r0
    }

    // References
    // -> struct {} __vt__22zNPCBTConditionBuilder;
    // -> struct {} __vt__19zNPCBTActionBuilder;
    // -> struct {} __vt__12zNPCBTClient;
    // -> struct {} __vt__9zBTClient;
}
// Range: 0x801D5E10 -> 0x801D609C
void zNPCGeneric::Update(class zNPCGeneric * this /* r31 */, float dt /* f31 */) {
}
// signature: zNPCGeneric::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801D60B0 -> 0x801D61C4
void zNPCGeneric::SystemEvent(class zNPCGeneric * this /* r29 */, class EventAny * params /* r30 */) {
    {
        // Range: 0x801D60BC -> 0x801D61A4
        // Local variables
        class BlackboardWritePayload * blackboardPayload; // reg65535

        {
            // Range: 0x801D60F8 -> 0x801D6164
            // Local variables
            class xBase * targetBase; // r5
            class EventActionEnt * entParams; // r0
        }
    }
}
