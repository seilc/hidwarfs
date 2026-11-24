/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCheckpoint.cpp
*/
class zCheckpoint * currentActivePtr; // size: 0x4, address: 0x80732A50
// signature: zCheckpoint::SceneInit(zScene *)
// Range: 0x80098810 -> 0x800988B8
void zCheckpoint::SceneInit() {
    // References
    // -> class zGlobals globals;
    // -> class zCheckpoint * currentActivePtr;
}
// Range: 0x800988C0 -> 0x80098A5C
void zCheckpoint::SceneReset(class zScene * scene /* r28 */) {
    {
        // Range: 0x800988DC -> 0x80098964
        // Local variables
        int x; // r29
    }
    {
        // Range: 0x80098978 -> 0x80098A3C
        // Local variables
        int y; // r29

        {
            // Range: 0x80098978 -> 0x80098A3C
            // Local variables
            class xVec3 plyrpos; // r1+0x2C
            class xEntPlayerAsset * passet; // r28
        }
    }

    // References
    // -> class zCheckpoint * currentActivePtr;
    // -> class xGlobals * xglobals;
}
// Range: 0x80098AE0 -> 0x80098B5C
class Entity * Sext::zCheckpointAsset::Create(class EntityHandleBase * handle /* r29 */, class zCheckpointAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__11zCheckpoint;
}
// Range: 0x80098B60 -> 0x80098CCC
void zCheckpoint::Init(class zCheckpoint * this /* r31 */, class zCheckpointAsset * asset /* r27 */) {
    // Local variables
    class EntityHandleBase * handle; // r0

    {
        // Range: 0x80098BE0 -> 0x80098C24
        // Local variables
        unsigned int i; // r28
    }
}
// signature: zCheckpoint::Reset(zScene *)
// Range: 0x80098CD0 -> 0x80098E2C
void zCheckpoint::Reset(class zCheckpoint * this /* r30 */) {
    {
        // Range: 0x80098CE8 -> 0x80098DFC
        // Local variables
        int i; // r31

        {
            // Range: 0x80098CF0 -> 0x80098DAC
            // Local variables
            float yaw; // f1
            class Rotation3 & dir; // r0
            class vec3 & loc; // r0
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zCheckpoint::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80098E50 -> 0x80098F00
void zCheckpoint::EventCB() {
    // Local variables
    class zCheckpoint * checkpoint; // r4

    {
        // Range: 0x80098E94 -> 0x80098EE4
        // Local variables
        float fadeTime; // f0
        class EventActionSetGlobalReverb * params; // r0
    }

    // References
    // -> float REVERB_FADETIME_DEFAULT;
    // -> unsigned int REVERB_NONE;
}
// signature: zCheckpoint::Activate(bool)
// Range: 0x80098F00 -> 0x80099098
void zCheckpoint::Activate(class zCheckpoint * this /* r31 */) {
    {
        // Range: 0x80098FF8 -> 0x80099080
        // Local variables
        int i; // r28

        {
            // Range: 0x80099000 -> 0x80099080
            // Local variables
            class xVec3 pos; // r1+0x28
            class vec3 & loc; // r0
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
    // -> class zCheckpoint * currentActivePtr;
}
// Range: 0x800990A0 -> 0x800990B8
int zCheckpoint::IsMissionStart() {
}
// signature: zCheckpoint::Save(xSerial *)
// Range: 0x800990C0 -> 0x800990EC
void zCheckpoint::Save() {
    // References
    // -> class zCheckpoint * currentActivePtr;
}
