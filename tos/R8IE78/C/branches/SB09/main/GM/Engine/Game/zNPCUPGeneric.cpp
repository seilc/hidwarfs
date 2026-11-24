/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCUPGeneric.cpp
*/
class zNPCEntityParams sEntParams; // size: 0x14, address: 0x80753E18
struct {} __vt__23zNPCEntity_ModelUpdater; // size: 0xC, address: 0x806C1A88
struct {} __vt__Q24Util37BlockAllocatorArray<14zNeoDrivenLink>; // size: 0xC, address: 0x806C1A94
static class zNPCHitReactionTable sUPGenericHitReactionTable[1]; // size: 0x8, address: 0x806BDBC0
// Range: 0x800FEA70 -> 0x800FFB94
void zNPCUPGeneric::Type::CreateAnimTable(class xAnimTable * table /* r27 */) {
}
// Range: 0x800FFBA0 -> 0x800FFC48
void zNPCUPGeneric::Type::InitTypeParameters(class Type * this /* r30 */) {
    {
        // Range: 0x800FFBD8 -> 0x800FFC20
        // Local variables
        int i; // r0
    }

    // References
    // -> class zNPCEntityParams sEntParams;
    // -> struct {} __vt__Q26Memory45Creator<10,14zNPCExtraModel,14zNPCExtraModel>;
    // -> class Creator _inst;
}
// signature: zNPCUPGeneric::AfterAnimMatrices(zNPCBase *, xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x800FFC50 -> 0x800FFC58
void zNPCUPGeneric::AfterAnimMatrices() {
}
// signature: zNPCUPGeneric::Activate(const zNPCStatus *)
// Range: 0x800FFC60 -> 0x800FFE78
bool zNPCUPGeneric::Activate(class zNPCUPGeneric * this /* r31 */) {
    {
        // Range: 0x800FFCEC -> 0x800FFD1C
        // Local variables
        class zNPCCombatParams defaultParams; // r1+0x20
    }
    {
        // Range: 0x800FFD58 -> 0x800FFDBC
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
// Range: 0x800FFE80 -> 0x800FFF34
void zNPCUPGeneric::Initialize(class zNPCUPGeneric * this /* r29 */) {
    // Local variables
    class UPGeneric * assetUpGeneric; // r0
    class NPCTemplate * npcTemplateAsset; // r30

    // References
    // -> static class zNPCHitReactionTable sUPGenericHitReactionTable[1];
    // -> class Factory factory;
    // -> class zNPCEntityParams sEntParams;
}
// Range: 0x800FFF40 -> 0x800FFFF4
void zNPCUPGeneric::Update(class zNPCUPGeneric * this /* r29 */, float dt /* f31 */) {
    {
        // Range: 0x800FFF98 -> 0x800FFFD0
        // Local variables
        int i; // r30
    }
}
// Range: 0x80100000 -> 0x80100080
void zNPCUPGeneric::Render(class zNPCUPGeneric * this /* r29 */) {
    {
        // Range: 0x80100034 -> 0x8010006C
        // Local variables
        int i; // r30
    }
}
// signature: zNPCUPGeneric::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80100080 -> 0x80100148
void zNPCUPGeneric::SystemEvent(class zNPCUPGeneric * this /* r29 */, class EventAny * params /* r30 */) {
    {
        // Range: 0x801000B4 -> 0x80100120
        // Local variables
        class xBase * targetBase; // r5
        class EventActionEnt * entParams; // r0
    }
}
// signature: zNPCUPGeneric::HeadTrackingUpdate(float)
// Range: 0x80100150 -> 0x80100200
void zNPCUPGeneric::HeadTrackingUpdate(class zNPCUPGeneric * this /* r31 */) {
    // Local variables
    class xVec3 targetPos; // r1+0x8
}
// signature: zNPCUPGeneric::GetPositionFromBase(xBase *, xVec3 &)
// Range: 0x80100200 -> 0x80100244
bool zNPCUPGeneric::GetPositionFromBase() {
}
