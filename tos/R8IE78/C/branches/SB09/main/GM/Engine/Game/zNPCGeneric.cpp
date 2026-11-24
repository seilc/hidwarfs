/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCGeneric.cpp
*/
class zNPCEntityParams sEntParams; // size: 0x14, address: 0x80753248
static class zNPCHitReactionTable sNPCGenericHitReactionTable[2]; // size: 0x10, address: 0x806BDB10
// Range: 0x800F0640 -> 0x800F12E4
void zNPCGeneric::Type::CreateAnimTable(class xAnimTable * table /* r27 */) {
}
// Range: 0x800F12F0 -> 0x800F13B8
void zNPCGeneric::Type::InitTypeParameters(class Type * this /* r30 */) {
    // References
    // -> class zNPCEntityParams sEntParams;
    // -> class Creator _inst;
    // -> struct {} __vt__Q26Memory26Creator<3,6zNPCFX,6zNPCFX>;
    // -> class Creator _inst;
    // -> struct {} __vt__Q26Memory44Creator<5,14zNPCPerception,14zNPCPerception>;
}
// signature: zNPCGeneric::AfterAnimMatrices(zNPCBase *, xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x800F14C0 -> 0x800F1500
void zNPCGeneric::AfterAnimMatrices(class zNPCBase * npcBase /* r30 */, class Matrix43 * skinMat /* r31 */) {
}
// signature: zNPCGeneric::Activate(const zNPCStatus *)
// Range: 0x800F1500 -> 0x800F1720
bool zNPCGeneric::Activate(class zNPCGeneric * this /* r31 */) {
    {
        // Range: 0x800F1540 -> 0x800F1580
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x800F15C8 -> 0x800F15F8
        // Local variables
        class zNPCCombatParams defaultParams; // r1+0x8
    }
    {
        // Range: 0x800F1634 -> 0x800F169C
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
// Range: 0x800F1790 -> 0x800F17F4
void KillEm(class xBase * owner /* r29 */) {
    // Local variables
    enum eProjectileType projType; // r0
    class zProjectileManager & projManager; // r0

    {
        // Range: 0x800F17A8 -> 0x800F17E0
        {
            // Range: 0x800F17A8 -> 0x800F17E0
            // Local variables
            class zProjectileSBPuck & proj; // r0
        }
    }
}
// signature: zNPCGeneric::DeactivateNPC(zNPCStatus *)
// Range: 0x800F1800 -> 0x800F185C
void zNPCGeneric::DeactivateNPC(class zNPCGeneric * this /* r31 */) {
}
// signature: zNPCGeneric::Initialize(const zNPCStatus *)
// Range: 0x800F1860 -> 0x800F191C
void zNPCGeneric::Initialize(class zNPCGeneric * this /* r29 */) {
    // Local variables
    class NPCGeneric * assetNPCGeneric; // r0
    class NPCTemplate * npcTemplateAsset; // r30

    // References
    // -> static class zNPCHitReactionTable sNPCGenericHitReactionTable[2];
    // -> class Factory factory;
    // -> class zNPCEntityParams sEntParams;
}
// signature: zNPCGeneric::Uninitialize(zNPCStatus *)
// Range: 0x800F19B0 -> 0x800F19F8
void zNPCGeneric::Uninitialize(class zNPCGeneric * this /* r31 */) {
    // References
    // -> class Factory factory;
}
// Range: 0x800F1A00 -> 0x800F1AF0
void zNPCGeneric::SceneSetup(class zNPCGeneric * this /* r29 */) {
}
// Range: 0x800F1BA0 -> 0x800F1C40
void zNPCGeneric::Update(class zNPCGeneric * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800F1C40 -> 0x800F1EBC
void zNPCGeneric::SystemEvent(class zNPCGeneric * this /* r30 */, class xBase * from /* r27 */, class xBase * to /* r28 */, unsigned int to_event /* r29 */, class EventAny * params /* r31 */) {
    {
        // Range: 0x800F1CA8 -> 0x800F1D88
        // Local variables
        class xBase * targetBase; // r29
        class EventActionEntOrGroup * entParams; // r0

        {
            // Range: 0x800F1CF8 -> 0x800F1D54
            // Local variables
            class xGroup * group; // r0
        }
    }
    {
        // Range: 0x800F1D9C -> 0x800F1DC8
        // Local variables
        class BlackboardWritePayload * blackboardPayload; // reg65535
    }
    {
        // Range: 0x800F1DC8 -> 0x800F1E84
        // Local variables
        class EventActionJawboneAnimateOnNPC * jawParams; // r0

        {
            // Range: 0x800F1DC8 -> 0x800F1E80
            // Local variables
            short initFirstBone; // r0

            {
                // Range: 0x800F1E5C -> 0x800F1E78
                // Local variables
                class zFXSpawn * fxSpawnAsset; // r0
            }
        }
    }
}
// signature: zNPCGeneric::HeadTrackingUpdate(float)
// Range: 0x800F1EC0 -> 0x800F1F50
void zNPCGeneric::HeadTrackingUpdate(class zNPCGeneric * this /* r31 */) {
    // Local variables
    class xVec3 targetPos; // r1+0x8
}
// signature: zNPCGeneric::HeadTrackingSetFocusVec(xVec3 *, bool)
// Range: 0x800F1F50 -> 0x800F1FA8
void zNPCGeneric::HeadTrackingSetFocusVec(class zNPCGeneric * this /* r30 */, bool initiateBlend /* r31 */) {
}
// Range: 0x800F1FB0 -> 0x800F1FFC
void zNPCGeneric::InitLean() {
}
// Range: 0x800F2000 -> 0x800F215C
void zNPCGeneric::UpdateLean(class zNPCGeneric * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float curTurnRate; // f0
    float lean; // f3
}
