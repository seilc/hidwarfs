/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCheckpoint.cpp
*/
class zCheckpoint * currentActivePtr; // size: 0x4, address: 0x8081C308
// signature: zCheckpoint::SceneInit(zScene *)
// Range: 0x80133640 -> 0x801336EC
void zCheckpoint::SceneInit() {
    // References
    // -> class zGlobals globals;
    // -> class zCheckpoint * currentActivePtr;
}
// Range: 0x801336F0 -> 0x80134104
void zCheckpoint::SceneReset(class zScene * scene /* r23 */) {
    // Local variables
    unsigned int curSceneID; // r16
    class xScreenFade * fade; // r0

    {
        // Range: 0x8013370C -> 0x80133A44
        // Local variables
        int x; // r22
    }
    {
        // Range: 0x80133A7C -> 0x80134070
        // Local variables
        int y; // r15

        {
            // Range: 0x80133A7C -> 0x80134070
            // Local variables
            class xVec3 plyrpos; // r1+0x20
            class xEntPlayerAsset * passet; // r7

            {
                // Range: 0x80133A8C -> 0x80134070
                // Local variables
                int counter; // r0
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> class zCheckpoint * currentActivePtr;
    // -> class zBalloonGenerator * pInstance;
    // -> class xGlobals * xglobals;
}
// Range: 0x80134120 -> 0x801341E8
class Entity * Sext::zCheckpointAsset::Create(class EntityHandleBase * handle /* r29 */, class zCheckpointAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__11zCheckpoint;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x801341F0 -> 0x80134358
void zCheckpoint::Init(class zCheckpoint * this /* r31 */, class zCheckpointAsset * asset /* r27 */) {
    {
        // Range: 0x8013426C -> 0x8013427C
        // Local variables
        unsigned int i; // r28
    }
}
// Range: 0x80134360 -> 0x80134ED0
void zCheckpoint::Reset(class zCheckpoint * this /* r15 */, class zScene * scene /* r16 */) {
    // Local variables
    unsigned int curSceneID; // r19
    unsigned int testTag; // r18
    unsigned int testTag2; // r1+0xA8
    class zDirection * hDir; // r14
    class zHouse * theHouse; // r17

    {
        // Range: 0x801343D8 -> 0x80134934
        // Local variables
        class xVec3 hPos; // r1+0x88
        class EventActionMoveToLoc param; // r1+0x94
    }
    {
        // Range: 0x80134950 -> 0x80134DF0
        // Local variables
        int i; // r17

        {
            // Range: 0x80134950 -> 0x80134950
            // Local variables
            float yaw; // f1
            class xVec3 pos; // r1+0x7C
            class Rotation3 & dir; // r0
            class vec3 & loc; // r0

            {
                // Range: 0x80134950 -> 0x80134950
                // Local variables
                int counter; // r0
            }
        }
        {
            // Range: 0x80134950 -> 0x80134950
            // Local variables
            class zBalloonGenerator * balGenerator; // r0
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> class zBalloonGenerator * pInstance;
    // -> class xGlobals * xglobals;
}
// signature: zCheckpoint::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80134EF0 -> 0x80134FA0
void zCheckpoint::EventCB() {
    // Local variables
    class zCheckpoint * checkpoint; // r4

    {
        // Range: 0x80134F34 -> 0x80134F84
        // Local variables
        float fadeTime; // f0
        class EventActionSetGlobalReverb * params; // r0
    }

    // References
    // -> float REVERB_FADETIME_DEFAULT;
    // -> unsigned int REVERB_NONE;
}
// signature: zCheckpoint::Activate(bool)
// Range: 0x80134FA0 -> 0x80135190
void zCheckpoint::Activate(class zCheckpoint * this /* r31 */) {
    // Local variables
    unsigned int curSceneID; // r4

    {
        // Range: 0x8013509C -> 0x80135110
        // Local variables
        int i; // r28

        {
            // Range: 0x801350A4 -> 0x80135110
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
// Range: 0x801351A0 -> 0x801351B8
int zCheckpoint::IsMissionStart() {
}
// signature: zCheckpoint::Save(xSerial *)
// Range: 0x801351C0 -> 0x801351EC
void zCheckpoint::Save() {
    // References
    // -> class zCheckpoint * currentActivePtr;
}
