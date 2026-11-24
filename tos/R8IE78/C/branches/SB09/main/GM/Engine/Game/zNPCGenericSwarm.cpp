/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCGenericSwarm.cpp
*/
class zDecal * defaultDecalGenerator; // size: 0x4, address: 0x8075325C
class zSoundFX * defaultSplatSound; // size: 0x4, address: 0x80753260
class zNPCEntityParams sEntParams; // size: 0x14, address: 0x80753264
class zNPCCombatParams sCombatParams; // size: 0x24, address: 0x80753278
static class zNPCHitReactionTable sGenericSwarmCombatReactionTable[2]; // size: 0x10, address: 0x806BDB20
// Range: 0x800F2B60 -> 0x800F2BE0
void zNPCGenericSwarm::Type::InitTypeParameters(class Type * this /* r31 */) {
    // References
    // -> static class zNPCHitReactionTable sGenericSwarmCombatReactionTable[2];
    // -> class zNPCCombatParams sCombatParams;
    // -> class Creator _inst;
    // -> struct {} __vt__Q26Memory45Creator<7,17zNPCSwarmSteering,12zNPCSteering>;
}
// signature: zNPCGenericSwarm::zNPCGenericSwarm(World::EntityHandleBase *)
// Range: 0x800F2BE0 -> 0x800F2C24
void * zNPCGenericSwarm::zNPCGenericSwarm(class zNPCGenericSwarm * this /* r31 */) {
    // References
    // -> struct {} __vt__16zNPCGenericSwarm;
}
// signature: zNPCGenericSwarm::Activate(const zNPCStatus *)
// Range: 0x800F2C30 -> 0x800F2D00
bool zNPCGenericSwarm::Activate(class zNPCGenericSwarm * this /* r30 */) {
    // Local variables
    class GenericSwarm * swarmAsset; // r31
    class zDirection * dir; // r0
}
// signature: zNPCGenericSwarm::DeactivateNPC(zNPCStatus *)
// Range: 0x800F2E20 -> 0x800F2E84
void zNPCGenericSwarm::DeactivateNPC(class zNPCGenericSwarm * this /* r27 */) {
    {
        // Range: 0x800F2E30 -> 0x800F2E70
        // Local variables
        int i; // r28
    }
}
// signature: zNPCGenericSwarm::Initialize(const zNPCStatus *)
// Range: 0x800F2E90 -> 0x800F3064
void zNPCGenericSwarm::Initialize(class zNPCGenericSwarm * this /* r31 */) {
    // Local variables
    class GenericSwarm * assetSwarm; // r27
    class NPCTemplate * npcTemplateAsset; // r25

    {
        // Range: 0x800F2EF0 -> 0x800F3034
        // Local variables
        int i; // r24
    }

    // References
    // -> class xVec3 g_O3;
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> class zNPCEntityParams sEntParams;
    // -> class Factory factory;
}
// Range: 0x800F30A0 -> 0x800F3198
void zNPCGenericSwarm::Uninitialize(class zNPCGenericSwarm * this /* r22 */, class zNPCStatus * npcStatus /* r23 */) {
    {
        // Range: 0x800F30DC -> 0x800F3184
        // Local variables
        int i; // r24
    }

    // References
    // -> class Factory factory;
}
// Range: 0x800F31A0 -> 0x800F3274
bool zNPCGenericSwarm::CheckSceneSetupValidity(class zNPCGenericSwarm * this /* r31 */) {
    // Local variables
    bool wallNetValid; // r0
    class NPCAsset * npcAsset; // r0
    class GenericSwarm * swarmAsset; // r0

    {
        // Range: 0x800F31D0 -> 0x800F320C
        // Local variables
        class xBase * b; // r0
    }
}
// Range: 0x800F3280 -> 0x800F33A8
void zNPCGenericSwarm::SceneSetup(class zNPCGenericSwarm * this /* r29 */) {
    // References
    // -> class zSoundFX * defaultSplatSound;
    // -> class zDecal * defaultDecalGenerator;
}
// Range: 0x800F33B0 -> 0x800F35DC
void zNPCGenericSwarm::Update(class zNPCGenericSwarm * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class zNPCLogic * logicComponent; // r3
    float sumx; // f4
    float sumy; // f5
    float sumz; // f6
    int count; // r6

    {
        // Range: 0x800F33D4 -> 0x800F3424
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x800F3470 -> 0x800F34C0
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x800F34E0 -> 0x800F3544
        // Local variables
        int i; // r7

        {
            // Range: 0x800F34F4 -> 0x800F3544
            // Local variables
            class xVec3 * pos; // r0
        }
    }
}
// signature: zNPCGenericSwarm::UpdateSpawns(float)
// Range: 0x800F35E0 -> 0x800F36B0
void zNPCGenericSwarm::UpdateSpawns(class zNPCGenericSwarm * this /* r29 */) {
}
// Range: 0x800F36B0 -> 0x800F37FC
void zNPCGenericSwarm::UpdateContextButtons(class zNPCGenericSwarm * this /* r23 */) {
    {
        // Range: 0x800F36C8 -> 0x800F37E4
        // Local variables
        int playerIdx; // r25

        {
            // Range: 0x800F36C8 -> 0x800F37E4
            // Local variables
            class zCommonPlayer * player; // r24

            {
                // Range: 0x800F36D0 -> 0x800F36D8
                // Local variables
                class zUpContextAction * ca; // r0
            }
            {
                // Range: 0x800F36DC -> 0x800F37A4
                // Local variables
                class zUpContextAction * ca; // r0
            }
            {
                // Range: 0x800F37A8 -> 0x800F37E4
                // Local variables
                class zUpContextAction * ca; // r0
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800F3800 -> 0x800F3860
void zNPCGenericSwarm::Render(class zNPCGenericSwarm * this /* r29 */) {
    {
        // Range: 0x800F3814 -> 0x800F384C
        // Local variables
        int i; // r30
    }
}
// Range: 0x800F3860 -> 0x800F38C0
void zNPCGenericSwarm::Paused(class zNPCGenericSwarm * this /* r29 */) {
    {
        // Range: 0x800F3874 -> 0x800F38AC
        // Local variables
        int i; // r30
    }
}
// Range: 0x800F38C0 -> 0x800F3920
void zNPCGenericSwarm::Resumed(class zNPCGenericSwarm * this /* r29 */) {
    {
        // Range: 0x800F38D4 -> 0x800F390C
        // Local variables
        int i; // r30
    }
}
// signature: zNPCGenericSwarm::NPCGetsDamage(const zNPCGetsDamageInfo &)
// Range: 0x800F3920 -> 0x800F3978
void zNPCGenericSwarm::NPCGetsDamage(class zNPCGenericSwarm * this /* r31 */) {
    // Local variables
    int childNumToKill; // r4
}
// signature: zNPCGenericSwarm::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800F3980 -> 0x800F3A88
void zNPCGenericSwarm::SystemEvent(class zNPCGenericSwarm * this /* r30 */, class xBase * from /* r31 */) {
    {
        // Range: 0x800F39DC -> 0x800F3A30
        // Local variables
        int childNumToKill; // r4
    }
    {
        // Range: 0x800F3A30 -> 0x800F3A68
        // Local variables
        int memberIndex; // r4
        class EventActionOneInt * params; // r0
    }
}
// Range: 0x800F3A90 -> 0x800F3DC0
bool zNPCGenericSwarm::SpawnNewMember(class zNPCGenericSwarm * this /* r31 */) {
    // Local variables
    class GenericSwarm * swarmAsset; // r27
    int availableMember; // r0

    {
        // Range: 0x800F3AF8 -> 0x800F3B28
        // Local variables
        class xMat4x3 npcSpawnMat; // r1+0xE8
    }
    {
        // Range: 0x800F3B28 -> 0x800F3BBC
        // Local variables
        int randomAliveChildNum; // r0

        {
            // Range: 0x800F3B30 -> 0x800F3B8C
            // Local variables
            class xMat4x3 npcSpawnMat; // r1+0xA8
        }
    }
    {
        // Range: 0x800F3BBC -> 0x800F3D50
        // Local variables
        class xMat4x3 npcSpawnMat; // r1+0x68
        class xVec3 spawnLookDir; // r1+0x14
        class xVec3 spawnMoveDir; // r1+0x20
        float horRange; // f2
        class xVec3 assetSpawnDir; // r1+0x2C

        {
            // Range: 0x800F3BDC -> 0x800F3C3C
            // Local variables
            class xMovePoint * destMP; // r0
        }
    }

    // References
    // -> class xVec3 m_UnitAxisX;
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisZ;
}
// signature: zNPCGenericSwarm::KillMember(int, xBase *, bool)
// Range: 0x800F3DC0 -> 0x800F4110
void zNPCGenericSwarm::KillMember(class zNPCGenericSwarm * this /* r31 */, int childNum /* r26 */, class xBase * killedBy /* r27 */) {
    {
        // Range: 0x800F3E48 -> 0x800F40FC
        // Local variables
        int playerIdx; // r5

        {
            // Range: 0x800F3E5C -> 0x800F3E94
            // Local variables
            int i; // r6
        }
        {
            // Range: 0x800F3E94 -> 0x800F40FC
            // Local variables
            class EventActionOneInt params; // r1+0x8
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800F4110 -> 0x800F4118
int zNPCGenericSwarm::GetNumberOfChildren() {
}
// signature: zNPCGenericSwarm::GetChild(int) const
// Range: 0x800F4120 -> 0x800F4130
class xBase * zNPCGenericSwarm::GetChild() const {
}
// signature: zNPCGenericSwarm::FindChildNumFromBase(xBase *)
// Range: 0x800F4130 -> 0x800F4174
int zNPCGenericSwarm::FindChildNumFromBase() {
    // Local variables
    class zNPCEntity * childEnt; // r0

    {
        // Range: 0x800F4134 -> 0x800F416C
        // Local variables
        int i; // r7
    }
}
// signature: zNPCGenericSwarm::GetNPCLODPositions(xVec3 *)
// Range: 0x800F4180 -> 0x800F41B8
unsigned int zNPCGenericSwarm::GetNPCLODPositions() {
    // Local variables
    unsigned int numberOfLODPositions; // r0
}
// Range: 0x800F41C0 -> 0x800F41FC
int zNPCGenericSwarm::GetTotalAliveChildNum() {
    // Local variables
    int aliveChildNum; // r6

    {
        // Range: 0x800F41C8 -> 0x800F41F4
        // Local variables
        int i; // r0
    }
}
// Range: 0x800F4200 -> 0x800F4244
int zNPCGenericSwarm::GetNextDeadChildNum() {
    {
        // Range: 0x800F4204 -> 0x800F423C
        // Local variables
        int i; // r6
    }
}
// Range: 0x800F4250 -> 0x800F4318
int zNPCGenericSwarm::GetRandomAliveChildNum(class zNPCGenericSwarm * this /* r31 */) {
    // Local variables
    int aliveChildNum; // r0
    int randomChildNum; // r3

    {
        // Range: 0x800F4288 -> 0x800F42CC
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x800F42CC -> 0x800F4300
        // Local variables
        int i; // r3
    }
}
// Range: 0x800F4320 -> 0x800F44B4
void zNPCGenericSwarm::CreateRandomPopSpawnMat(class zNPCGenericSwarm * this /* r25 */, class xVec3 & pos /* r26 */, float radius /* f28 */, class xMat4x3 & spawnMat /* r27 */, class zWallNet * wallNet /* r28 */) {
    // Local variables
    class xVec3 & spawnPos; // r30
    unsigned int tries; // r29

    {
        // Range: 0x800F4354 -> 0x800F4448
        // Local variables
        float distFromCenter; // f0
    }

    // References
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x800F44C0 -> 0x800F45AC
bool zNPCGenericSwarm::IsWithinCone(class zNPCGenericSwarm * this /* r27 */, class xVec3 & sourcePos /* r28 */, class xVec3 & sourceDir /* r29 */, float coneAngle /* f30 */, float coneDistance2 /* f31 */) {
    {
        // Range: 0x800F44EC -> 0x800F458C
        // Local variables
        int i; // r30

        {
            // Range: 0x800F44EC -> 0x800F458C
            // Local variables
            float dist2; // f0
            class xVec3 toBugVec; // r1+0x14

            {
                // Range: 0x800F4544 -> 0x800F458C
                // Local variables
                float actualAngle; // f0
            }
        }
    }
}
// Range: 0x800F45B0 -> 0x800F4644
bool zNPCGenericSwarm::IsWithinDistance(class zNPCGenericSwarm * this /* r28 */, class xVec3 & sourcePos /* r29 */, float distance /* f31 */) {
    {
        // Range: 0x800F45D0 -> 0x800F4628
        // Local variables
        int i; // r30

        {
            // Range: 0x800F45D0 -> 0x800F4628
            // Local variables
            float testDist; // f0
        }
    }
}
