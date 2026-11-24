/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCSwarmMean.cpp
*/
class zNPCSteeringFlockingParams sGroundFlockingParams; // size: 0x8C, address: 0x8079206C
class zNPCSteeringFlockingParams sGroundFlockingParamsMiniGame; // size: 0x8C, address: 0x807920F8
class zNPCSteeringFlockingParams sFlyingFlockingParams; // size: 0x8C, address: 0x80792184
class zNPCEntityParams sStinkBugEntParams; // size: 0x44, address: 0x80792210
class zNPCEntityParams sMothEntParams; // size: 0x44, address: 0x80792254
class zNPCEntityParams sAntEntParams; // size: 0x44, address: 0x80792298
class zNPCCombatParams sCombatParams; // size: 0xC, address: 0x807922DC
static class zNPCHitReactionTable sSwarmCombatReactionTable[3]; // size: 0x18, address: 0x806FBB50
// Range: 0x8013EFF0 -> 0x8013F0BC
void zNPCSwarmMean::Type::CreateAnimTable(class xAnimTable * table /* r27 */) {
}
// Range: 0x8013F0C0 -> 0x8013F21C
void zNPCSwarmMean::Type::InitTypeParameters() {
    // References
    // -> class zNPCCombatParams sCombatParams;
    // -> class zNPCSteeringFlockingParams sGroundFlockingParamsMiniGame;
    // -> class zNPCSteeringFlockingParams sGroundFlockingParams;
    // -> class zNPCSteeringFlockingParams sFlyingFlockingParams;
    // -> class zNPCEntityParams sAntEntParams;
    // -> class zNPCEntityParams sMothEntParams;
    // -> class zNPCEntityParams sStinkBugEntParams;
    // -> static class zNPCHitReactionTable sSwarmCombatReactionTable[3];
}
// Range: 0x8013F220 -> 0x8013F228
int zNPCSwarmMean::GetNumberOfChildren() {
}
// signature: zNPCSwarmMean::GetChild(int)
// Range: 0x8013F230 -> 0x8013F240
class xBase * zNPCSwarmMean::GetChild() {
}
// signature: zNPCSwarmMean::NPCGetsDamage(const zNPCGetsDamageInfo &)
// Range: 0x8013F240 -> 0x8013F29C
void zNPCSwarmMean::NPCGetsDamage() {
}
// signature: zNPCSwarmMean::NPCGivesDamage(const zNPCGivesDamageInfo &)
// Range: 0x8013F2A0 -> 0x8013F2A4
void zNPCSwarmMean::NPCGivesDamage() {
}
// signature: zNPCSwarmMean::Initialize(const zNPCStatus *)
// Range: 0x8013F2B0 -> 0x8013FC90
void zNPCSwarmMean::Initialize(class zNPCSwarmMean * this /* r15 */) {
    // Local variables
    class SwarmMean * npcassSwarm; // r1+0x38
    class zNPCEntityParams * entParams; // r17

    {
        // Range: 0x8013F328 -> 0x8013F354
        // Local variables
        class xBase * b; // r0
    }
    {
        // Range: 0x8013F354 -> 0x8013F434
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8013F468 -> 0x8013FA54
        // Local variables
        int i; // r16
    }
    {
        // Range: 0x8013FAC0 -> 0x8013FC28
        // Local variables
        int i; // r20
    }

    // References
    // -> class Scene * primaryScene;
    // -> class zFactory factory;
    // -> struct {} __vt__6zNPCFX;
    // -> struct {} __vt__10zNPCEntity;
    // -> struct {} __vt__14zNPCExtraModel;
    // -> class xMat4x3 g_I3;
    // -> class xVec3 m_Ones;
    // -> class xVec3 m_Null;
    // -> class zNPCEntityParams sMothEntParams;
    // -> class zNPCEntityParams sStinkBugEntParams;
    // -> class zNPCEntityParams sAntEntParams;
}
// Range: 0x8013FC90 -> 0x8013FE28
void zNPCSwarmMean::Uninitialize(class zNPCSwarmMean * this /* r30 */, class zNPCStatus * npcStatus /* r31 */) {
    {
        // Range: 0x8013FCA8 -> 0x8013FCF4
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x8013FD08 -> 0x8013FDFC
        // Local variables
        int i; // r26
    }
}
// signature: zNPCSwarmMean::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8013FE30 -> 0x80140074
void zNPCSwarmMean::SystemEvent(class zNPCSwarmMean * this /* r31 */) {
    {
        // Range: 0x8013FEEC -> 0x8013FF64
        // Local variables
        int childNumToKill; // r4
    }
    {
        // Range: 0x8013FF68 -> 0x8013FF94
        // Local variables
        class zNPCSteeringFlocking * compSteering; // r3
        int to_param_widget_id; // r6
        class EventActionEnt * params; // r0
    }
    {
        // Range: 0x8013FF98 -> 0x8013FFC4
        // Local variables
        class zNPCSteeringFlocking * compSteering; // r3
        int to_param_widget_id; // r6
        class EventActionEnt * params; // r0
    }
    {
        // Range: 0x8013FFC8 -> 0x8013FFF4
        // Local variables
        class zNPCSteeringFlocking * compSteering; // r3
        int to_param_widget_id; // r6
        class EventActionEnt * params; // r0
    }
    {
        // Range: 0x8013FFF8 -> 0x80140024
        // Local variables
        class zNPCSteeringFlocking * compSteering; // r3
        int to_param_widget_id; // r6
        class EventActionEnt * params; // r0
    }
    {
        // Range: 0x80140028 -> 0x8014003C
        // Local variables
        class zNPCSteeringFlocking * compSteering; // r3
    }
    {
        // Range: 0x80140040 -> 0x80140054
        // Local variables
        class zNPCSteeringFlocking * compSteering; // r3
    }
}
// Range: 0x80140080 -> 0x8014051C
bool zNPCSwarmMean::Activate(class zNPCSwarmMean * this /* r29 */, class zNPCStatus * npcStatus /* r26 */) {
    // Local variables
    class SwarmMean * swarmAsset; // r0
    class zNPCSteeringFlocking * compSteering; // r28

    {
        // Range: 0x801402BC -> 0x801402F8
        // Local variables
        float maxHeight; // f0
        float minHeight; // f1
    }
    {
        // Range: 0x80140360 -> 0x801404E8
        // Local variables
        int i; // r30

        {
            // Range: 0x80140478 -> 0x801404B4
            // Local variables
            int swarmerToSwap; // r0

            {
                // Range: 0x801404AC -> 0x801404AC
                // Local variables
                int temp; // r5
            }
        }
    }

    // References
    // -> class zNPCSteeringFlockingParams sGroundFlockingParamsMiniGame;
    // -> class zNPCSteeringFlockingParams sGroundFlockingParams;
    // -> class zNPCSteeringFlockingParams sFlyingFlockingParams;
    // -> class zNPCCombatParams sCombatParams;
    // -> struct {} __vt__27zNPCCombatCollisionListener;
    // -> struct {} __vt__10zNPCCombat;
    // -> class zFactory factory;
}
// Range: 0x80140560 -> 0x80140610
bool zNPCSwarmMean::CheckSceneSetupValidity(class zNPCSwarmMean * this /* r31 */) {
    // Local variables
    bool wallNetValid; // r0
    class SwarmMean * swarmAsset; // r0
}
// Range: 0x80140610 -> 0x80140894
void zNPCSwarmMean::Deactivate(class zNPCSwarmMean * this /* r21 */, class zNPCStatus * npcStatus /* r22 */) {
    {
        // Range: 0x80140634 -> 0x80140818
        // Local variables
        int i; // r23
    }

    // References
    // -> class zFactory factory;
    // -> class Scene * primaryScene;
}
// Range: 0x801408A0 -> 0x80140CB0
void zNPCSwarmMean::UpdateAllChildren(class zNPCSwarmMean * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class SwarmMean * swarmAsset; // r28
    class zPlayerContainer * players; // r26

    {
        // Range: 0x80140918 -> 0x80140948
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x80140AA8 -> 0x80140AD4
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x80140AE8 -> 0x80140B30
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x80140B44 -> 0x80140C48
        // Local variables
        int i; // r25

        {
            // Range: 0x80140B44 -> 0x80140C48
            // Local variables
            float playerDist2; // f0
            float minPlayerDist2; // f5
            class xVec3 * playerPos; // r0
            class zCommonPlayer * player; // r3

            {
                // Range: 0x80140B44 -> 0x80140B44
                // Local variables
                int i; // r0
            }
            {
                // Range: 0x80140B44 -> 0x80140C48
                // Local variables
                class zCombatDamageInfo combatDamageInfo; // r1+0x18
            }
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xGlobals * xglobals;
}
// signature: zNPCSwarmMean::UpdateExtraModels(unsigned int, int, float)
// Range: 0x80140CC0 -> 0x801415EC
void zNPCSwarmMean::UpdateExtraModels(class zNPCSwarmMean * this /* r28 */, unsigned int swarmType /* r26 */, float dt /* f30 */) {
    // Local variables
    float entYaw; // f0
    float * moveAcc; // r0
    class xVec3 dPos; // r1+0x38
    float dPosLength; // f0

    {
        // Range: 0x80140DDC -> 0x80141020
        // Local variables
        float yawDiff; // f27
    }
    {
        // Range: 0x80141024 -> 0x80141268
        // Local variables
        float yawDiff; // f27
    }
    {
        // Range: 0x8014126C -> 0x801415AC
        // Local variables
        class xMat3x3 rotateMat; // r1+0xA8
        class xMat4x3 modelMat2; // r1+0xD8
        class xMat4x3 modelMat1; // r1+0x118
        float yawDiff; // f27
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zNPCSwarmMean::Update(float)
// Range: 0x801415F0 -> 0x80141884
void zNPCSwarmMean::Update(class zNPCSwarmMean * this /* r29 */) {
    {
        // Range: 0x8014161C -> 0x8014184C
        // Local variables
        int i; // r30
    }
}
// Range: 0x80141890 -> 0x801418FC
void zNPCSwarmMean::Paused(class zNPCSwarmMean * this /* r29 */) {
    {
        // Range: 0x801418A4 -> 0x801418B8
        // Local variables
        int i; // r30
    }
}
// Range: 0x80141900 -> 0x8014196C
void zNPCSwarmMean::Resumed(class zNPCSwarmMean * this /* r29 */) {
    {
        // Range: 0x80141914 -> 0x80141928
        // Local variables
        int i; // r30
    }
}
// signature: zNPCSwarmMean::GetNPCLODPositions(xVec3 *)
// Range: 0x80141970 -> 0x801419F0
unsigned int zNPCSwarmMean::GetNPCLODPositions() {
    // Local variables
    class xVec3 * spawnPos; // r0
    class xVec3 * flockCenter; // r7
    unsigned int numberOfLODPositions; // r3

    {
        // Range: 0x8014197C -> 0x8014199C
        // Local variables
        class zNPCSteeringFlocking * steering; // r0
    }
}
// Range: 0x801419F0 -> 0x80141A6C
void zNPCSwarmMean::Render(class zNPCSwarmMean * this /* r29 */) {
    {
        // Range: 0x80141A04 -> 0x80141A40
        // Local variables
        int i; // r30
    }
}
// Range: 0x80141A70 -> 0x80141B94
int zNPCSwarmMean::GetRandomAliveChildNum(class zNPCSwarmMean * this /* r31 */) {
    // Local variables
    int randomChildNum; // r6

    {
        // Range: 0x80141B00 -> 0x80141B40
        // Local variables
        int i; // r3
    }
    {
        // Range: 0x80141B48 -> 0x80141B6C
        // Local variables
        int i; // r3
    }
}
// Range: 0x80141BA0 -> 0x80142A00
bool zNPCSwarmMean::SpawnNewMember(class zNPCSwarmMean * this /* r28 */) {
    // Local variables
    class SwarmMean * swarmAsset; // r26

    {
        // Range: 0x80141C3C -> 0x80141DBC
        // Local variables
        class xMat4x3 npcSpawnMat; // r1+0x140
    }
    {
        // Range: 0x80141DC0 -> 0x80142268
        // Local variables
        int randomAliveChildNum; // r0

        {
            // Range: 0x80141DC8 -> 0x80141F78
            // Local variables
            class xMat4x3 npcSpawnMat; // r1+0x100
        }
    }
    {
        // Range: 0x80142274 -> 0x80142884
        // Local variables
        class xVec3 initialVel; // r1+0x2C
        class xMat4x3 npcSpawnMat; // r1+0xC0
        class xVec3 spawnLookDir; // r1+0x38
        class xVec3 spawnMoveDir; // r1+0x44
        float horRange; // f28
        class xVec3 assetSpawnDir; // r1+0x50

        {
            // Range: 0x801422A0 -> 0x801423B4
            // Local variables
            class xMovePoint * destMP; // r0
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> class zNPCSteeringFlockingParams sGroundFlockingParams;
    // -> class xVec3 m_UnitAxisX;
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_Null;
}
// signature: zNPCSwarmMean::KillMember(int, xBase *)
// Range: 0x80142A00 -> 0x80142EB0
void zNPCSwarmMean::KillMember(class zNPCSwarmMean * this /* r24 */, class xBase * killedBy /* r25 */) {
    {
        // Range: 0x80142C4C -> 0x80142E98
        // Local variables
        int playerIdx; // r4

        {
            // Range: 0x80142C60 -> 0x80142C64
            // Local variables
            int i; // r5
        }
    }

    // References
    // -> class zGlobals globals;
    // -> class zSoundFX * pEventSfx;
    // -> class zOneLinerSystem gOneLinerSystem;
    // -> class xGlobals * xglobals;
    // -> class Scene * primaryScene;
}
// Range: 0x80142EB0 -> 0x801433CC
void zNPCSwarmMean::CreateRandomPopSpawnMat(class xVec3 * pos /* r26 */, float radius /* f22 */, class xMat4x3 * spawnMat /* r27 */, class zWallNet * wallNet /* r28 */) {
    // Local variables
    class SwarmMean * swarmAsset; // r30
    class xVec3 * spawnPos; // r0
    unsigned int tries; // r29

    {
        // Range: 0x80142F28 -> 0x8014332C
        // Local variables
        float distFromCenter; // f0
    }

    // References
    // -> class xVec3 m_UnitAxisX;
}
