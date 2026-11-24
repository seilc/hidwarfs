/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCGenericSwarm.cpp
*/
class zDecal * defaultDecalGenerator; // size: 0x4, address: 0x80822E34
class zSoundFX * defaultSplatSound; // size: 0x4, address: 0x80822E38
class zNPCEntityParams sEntParams; // size: 0x14, address: 0x80822E3C
class zNPCCombatParams sCombatParams; // size: 0x14, address: 0x80822E50
static class zNPCHitReactionTable sGenericSwarmCombatReactionTable[2]; // size: 0x10, address: 0x807AF9B8
// signature: zNPCGenericSwarm::Type::CreateAnimTable(xAnimTable *)
// Range: 0x801D6E80 -> 0x801D6E84
void zNPCGenericSwarm::Type::CreateAnimTable() {
}
// Range: 0x801D6E90 -> 0x801D6F18
void zNPCGenericSwarm::Type::InitTypeParameters() {
    // References
    // -> static class zNPCHitReactionTable sGenericSwarmCombatReactionTable[2];
    // -> class zNPCCombatParams sCombatParams;
    // -> class zCreator _inst;
    // -> struct {} __vt__38zCreator<1,13zNPCBTManager,9zNPCLogic>;
    // -> class zCreator _inst;
    // -> struct {} __vt__46zCreator<7,17zNPCSwarmSteering,12zNPCSteering>;
}
// signature: zNPCGenericSwarm::Activate(const zNPCStatus *)
// Range: 0x801D6F20 -> 0x801D70EC
bool zNPCGenericSwarm::Activate(class zNPCGenericSwarm * this /* r31 */) {
    // Local variables
    class GenericSwarm * swarmAsset; // r29
    class zDirection * dir; // r0
}
// signature: zNPCGenericSwarm::DeactivateNPC(zNPCStatus *)
// Range: 0x801D70F0 -> 0x801D7300
void zNPCGenericSwarm::DeactivateNPC(class zNPCGenericSwarm * this /* r21 */) {
    {
        // Range: 0x801D7104 -> 0x801D72DC
        // Local variables
        int i; // r22
    }

    // References
    // -> class Scene * primaryScene;
}
// signature: zNPCGenericSwarm::Initialize(const zNPCStatus *)
// Range: 0x801D7300 -> 0x801D78CC
void zNPCGenericSwarm::Initialize(class zNPCGenericSwarm * this /* r15 */) {
    // Local variables
    class GenericSwarm * assetSwarm; // r17
    class NPCTemplate * npcTemplateAsset; // r14

    {
        // Range: 0x801D73F4 -> 0x801D7848
        // Local variables
        int i; // r16
    }

    // References
    // -> class xVec3 g_O3;
    // -> class Scene * primaryScene;
    // -> class zNPCEntityParams sEntParams;
    // -> struct {} __vt__6zNPCFX;
    // -> class xMat4x3 g_I3;
    // -> struct {} __vt__10zNPCEntity;
    // -> struct {} __vt__Q25World9xOGEntity;
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> class xVec3 m_Ones;
    // -> class xVec3 m_Null;
    // -> class zFactory factory;
}
// Range: 0x801D78D0 -> 0x801D79B8
void zNPCGenericSwarm::Uninitialize(class zNPCGenericSwarm * this /* r26 */, class zNPCStatus * npcStatus /* r27 */) {
    {
        // Range: 0x801D7910 -> 0x801D7994
        // Local variables
        int i; // r28
    }

    // References
    // -> class zFactory factory;
}
// Range: 0x801D79C0 -> 0x801D7AB8
bool zNPCGenericSwarm::CheckSceneSetupValidity(class zNPCGenericSwarm * this /* r31 */) {
    // Local variables
    bool wallNetValid; // r0
    class NPCAsset * npcAsset; // r0
    class GenericSwarm * swarmAsset; // r0

    {
        // Range: 0x801D79F0 -> 0x801D7A2C
        // Local variables
        class xBase * b; // r0
    }
}
// Range: 0x801D7AC0 -> 0x801D7CA4
void zNPCGenericSwarm::SceneSetup(class zNPCGenericSwarm * this /* r30 */) {
    {
        // Range: 0x801D7AD4 -> 0x801D7C58
        // Local variables
        class zNPCBTActionBuilder * actionBuilder; // r0
    }

    // References
    // -> class zSoundFX * defaultSplatSound;
    // -> class zDecal * defaultDecalGenerator;
    // -> struct {} __vt__22zNPCBTConditionBuilder;
    // -> struct {} __vt__19zNPCBTActionBuilder;
    // -> struct {} __vt__12zNPCBTClient;
    // -> struct {} __vt__9zBTClient;
}
// Range: 0x801D7CB0 -> 0x801D8084
void zNPCGenericSwarm::Update(class zNPCGenericSwarm * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class zNPCLogic * logicComponent; // r3
    float sumx; // f4
    float sumy; // f5
    float sumz; // f6
    int count; // r6

    {
        // Range: 0x801D7D0C -> 0x801D7D4C
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x801D7ED4 -> 0x801D7F10
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x801D7F44 -> 0x801D7F94
        // Local variables
        int i; // r7

        {
            // Range: 0x801D7F58 -> 0x801D7F94
            // Local variables
            class xVec3 * pos; // r0
        }
    }
}
// Range: 0x801D8090 -> 0x801D8478
void zNPCGenericSwarm::UpdateContextButtons(class zNPCGenericSwarm * this /* r28 */) {
    {
        // Range: 0x801D80DC -> 0x801D8414
        // Local variables
        int playerIdx; // r30

        {
            // Range: 0x801D80DC -> 0x801D8414
            // Local variables
            class zCommonPlayer * player; // r29

            {
                // Range: 0x801D80DC -> 0x801D80DC
                // Local variables
                class zUpContextAction * ca; // r0
            }
            {
                // Range: 0x801D8118 -> 0x801D83E8
                // Local variables
                class zUpContextAction * ca; // r0
            }
            {
                // Range: 0x801D83EC -> 0x801D8414
                // Local variables
                class zUpContextAction * ca; // r0
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801D8480 -> 0x801D84EC
void zNPCGenericSwarm::Render(class zNPCGenericSwarm * this /* r29 */) {
    {
        // Range: 0x801D8494 -> 0x801D84C0
        // Local variables
        int i; // r30
    }
}
// Range: 0x801D84F0 -> 0x801D855C
void zNPCGenericSwarm::Paused(class zNPCGenericSwarm * this /* r29 */) {
    {
        // Range: 0x801D8504 -> 0x801D8518
        // Local variables
        int i; // r30
    }
}
// Range: 0x801D8560 -> 0x801D85CC
void zNPCGenericSwarm::Resumed(class zNPCGenericSwarm * this /* r29 */) {
    {
        // Range: 0x801D8574 -> 0x801D8588
        // Local variables
        int i; // r30
    }
}
// signature: zNPCGenericSwarm::NPCGetsDamage(const zNPCGetsDamageInfo &)
// Range: 0x801D85D0 -> 0x801D8630
void zNPCGenericSwarm::NPCGetsDamage() {
}
// signature: zNPCGenericSwarm::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801D8630 -> 0x801D8758
void zNPCGenericSwarm::SystemEvent(class zNPCGenericSwarm * this /* r31 */, class xBase * from /* r30 */) {
    {
        // Range: 0x801D8680 -> 0x801D86FC
        // Local variables
        int childNumToKill; // r4
    }
    {
        // Range: 0x801D86FC -> 0x801D8734
        // Local variables
        int memberIndex; // r4
        class EventActionOneInt * params; // r0
    }
}
// Range: 0x801D8760 -> 0x801D941C
bool zNPCGenericSwarm::SpawnNewMember(class zNPCGenericSwarm * this /* r29 */) {
    // Local variables
    class GenericSwarm * swarmAsset; // r30

    {
        // Range: 0x801D87FC -> 0x801D8980
        // Local variables
        class xMat4x3 npcSpawnMat; // r1+0xE8
    }
    {
        // Range: 0x801D8980 -> 0x801D8E40
        // Local variables
        int randomAliveChildNum; // r0

        {
            // Range: 0x801D8988 -> 0x801D8B44
            // Local variables
            class xMat4x3 npcSpawnMat; // r1+0xA8
        }
    }
    {
        // Range: 0x801D8E40 -> 0x801D9308
        // Local variables
        class xMat4x3 npcSpawnMat; // r1+0x68
        class xVec3 spawnLookDir; // r1+0x14
        class xVec3 spawnMoveDir; // r1+0x20
        float horRange; // f28
        class xVec3 assetSpawnDir; // r1+0x2C

        {
            // Range: 0x801D8E70 -> 0x801D8F98
            // Local variables
            class xMovePoint * destMP; // r0
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> class xVec3 m_UnitAxisX;
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_Null;
}
// Range: 0x801D9420 -> 0x801D9964
void zNPCGenericSwarm::KillMember(class zNPCGenericSwarm * this /* r20 */, int childNum /* r21 */, class xBase * killedBy /* r22 */, bool showDecal /* r23 */) {
    {
        // Range: 0x801D9650 -> 0x801D97A4
        // Local variables
        class xMat4x3 mat; // r1+0x18
        class zDecal * decalGenerator; // r25
    }
    {
        // Range: 0x801D9844 -> 0x801D994C
        // Local variables
        int playerIdx; // r4

        {
            // Range: 0x801D9858 -> 0x801D985C
            // Local variables
            int i; // r5
        }
        {
            // Range: 0x801D9890 -> 0x801D994C
            // Local variables
            class EventActionOneInt params; // r1+0x8
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zSoundFX * defaultSplatSound;
    // -> class zDecal * defaultDecalGenerator;
    // -> class Scene * primaryScene;
}
// Range: 0x801D9970 -> 0x801D9978
int zNPCGenericSwarm::GetNumberOfChildren() {
}
// signature: zNPCGenericSwarm::GetChild(int) const
// Range: 0x801D9980 -> 0x801D9990
class xBase * zNPCGenericSwarm::GetChild() const {
}
// signature: zNPCGenericSwarm::GetNPCLODPositions(xVec3 *)
// Range: 0x801D9990 -> 0x801D99BC
unsigned int zNPCGenericSwarm::GetNPCLODPositions() {
    // Local variables
    class xVec3 * spawnPos; // r0
    unsigned int numberOfLODPositions; // r0
}
// Range: 0x801D99C0 -> 0x801D9AE4
int zNPCGenericSwarm::GetRandomAliveChildNum(class zNPCGenericSwarm * this /* r31 */) {
    // Local variables
    int randomChildNum; // r6

    {
        // Range: 0x801D9A50 -> 0x801D9A90
        // Local variables
        int i; // r3
    }
    {
        // Range: 0x801D9A98 -> 0x801D9ABC
        // Local variables
        int i; // r3
    }
}
// Range: 0x801D9AF0 -> 0x801D9FFC
void zNPCGenericSwarm::CreateRandomPopSpawnMat(class zNPCGenericSwarm * this /* r27 */, class xVec3 & pos /* r28 */, float radius /* f22 */, class xMat4x3 & spawnMat /* r29 */, class zWallNet * wallNet /* r30 */) {
    // Local variables
    class xVec3 & spawnPos; // r0
    unsigned int tries; // r31

    {
        // Range: 0x801D9B5C -> 0x801D9F58
        // Local variables
        float distFromCenter; // f0
    }

    // References
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x801DA000 -> 0x801DA164
bool zNPCGenericSwarm::KillWithinDistance(class zNPCGenericSwarm * this /* r26 */, class xVec3 & sourcePos /* r27 */, float distance /* f31 */, class xBase * from /* r28 */, bool showDecal /* r29 */) {
    // Local variables
    bool killedAtLeastOne; // r3

    {
        // Range: 0x801DA034 -> 0x801DA11C
        // Local variables
        int i; // r30

        {
            // Range: 0x801DA034 -> 0x801DA11C
            // Local variables
            float testDist; // f0
        }
    }
}
// signature: zNPCGenericSwarm::IsWithinDistance(xVec3 &, float)
// Range: 0x801DA170 -> 0x801DA24C
bool zNPCGenericSwarm::IsWithinDistance() {
    {
        // Range: 0x801DA174 -> 0x801DA240
        // Local variables
        int i; // r0

        {
            // Range: 0x801DA174 -> 0x801DA240
            // Local variables
            float testDist; // f0
        }
    }
}
// Range: 0x801DA250 -> 0x801DA4F4
class zNPCEntity * zNPCGenericSwarm::GetClosestChildWithinCone(class zNPCGenericSwarm * this /* r31 */, class xVec3 & sourcePos /* r26 */, class xVec3 & sourceDir /* r27 */, float coneAngle /* f22 */, float coneDistance2 /* f23 */, float detectionDistance /* f24 */) {
    // Local variables
    int bugIndex; // r29
    float closestDistance2; // f25

    {
        // Range: 0x801DA2C0 -> 0x801DA458
        // Local variables
        int i; // r28

        {
            // Range: 0x801DA2C0 -> 0x801DA458
            // Local variables
            float dist2; // f0
            class xVec3 toBugVec; // r1+0x14

            {
                // Range: 0x801DA2C0 -> 0x801DA458
                // Local variables
                float cosAngle; // f0

                {
                    // Range: 0x801DA3E0 -> 0x801DA458
                    // Local variables
                    float normalizedDistance2; // f2
                }
            }
        }
    }
}
