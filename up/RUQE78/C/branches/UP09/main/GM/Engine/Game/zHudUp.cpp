/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zHudUp.cpp
*/
static class xVec2 radarCenter; // size: 0x8, address: 0x80780A70
static class xVec2 radarOffset2; // size: 0x8, address: 0x80780A78
static class xVec2 radarOffset4; // size: 0x8, address: 0x80780A80
static class xVec2 radarOffset4Wide; // size: 0x8, address: 0x80780A88
class MultiplayerStats mpStats; // size: 0x5C, address: 0x8081FAB8
// Range: 0x8017EA50 -> 0x8017EAB8
class Entity * Sext::HudUp::Create(class EntityHandleBase * handle /* r30 */, class HudUp * tasset /* r31 */) {
}
// signature: zHudUpEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017EAC0 -> 0x8017EAD0
static void zHudUpEventWrapper(class xBase * from /* r0 */) {
}
// signature: zHudUp::zHudUp(World::EntityHandleBase *, Sext::HudUp *)
// Range: 0x8017EAD0 -> 0x8017EDA8
void * zHudUp::zHudUp(class zHudUp * this /* r31 */) {
    {
        // Range: 0x8017ECD4 -> 0x8017ECD4
        // Local variables
        int i; // r0
    }

    // References
    // -> struct {} __vt__6zHudUp;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zHudUp::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017EDB0 -> 0x80180990
void zHudUp::HandleEvent(class zHudUp * this /* r30 */, class EventAny * params /* r31 */) {
    {
        // Range: 0x8017F978 -> 0x8017F9C0
        // Local variables
        bool active[4]; // r1+0x7C
        class EventActionHudSetActivePlayers * eventParams; // r0
    }
    {
        // Range: 0x8017F9C4 -> 0x8017F9D0
        // Local variables
        class EventActionHudSetPlayer * eventParams; // r0
    }
    {
        // Range: 0x8017FE44 -> 0x8017FEA0
        // Local variables
        class EventActionHudContextAction * eventParams; // r0
    }
    {
        // Range: 0x8017FEA4 -> 0x8017FFFC
        // Local variables
        class EventActionHudSpecialAbility * eventParams; // r0
    }
    {
        // Range: 0x80180000 -> 0x801800CC
        // Local variables
        int playerNum; // r6
    }
    {
        // Range: 0x801801B0 -> 0x801804B4
        // Local variables
        class zScaleform * endLevelMenu; // r31

        {
            // Range: 0x801801B0 -> 0x801801D4
            // Local variables
            int i; // r29
        }
        {
            // Range: 0x801801E8 -> 0x8018028C
            // Local variables
            int teamScore[2]; // r1+0x98

            {
                // Range: 0x80180248 -> 0x80180260
                // Local variables
                int i; // r9
            }
        }
        {
            // Range: 0x8018029C -> 0x80180324
            // Local variables
            int i; // r6

            {
                // Range: 0x8018029C -> 0x80180324
                // Local variables
                int numBetterThanMe; // r7

                {
                    // Range: 0x801802AC -> 0x801802C8
                    // Local variables
                    int j; // r3
                }
            }
        }
    }
    {
        // Range: 0x801804B8 -> 0x80180558
        // Local variables
        class EventActionOneInt * eventParams; // r0

        {
            // Range: 0x801804B8 -> 0x80180544
            // Local variables
            int i; // r26

            {
                // Range: 0x801804B8 -> 0x80180544
                // Local variables
                float args[2]; // r1+0x90
            }
        }
    }
    {
        // Range: 0x8018055C -> 0x801805A4
        // Local variables
        float arg; // r1+0x78
    }
    {
        // Range: 0x801805A8 -> 0x801805F0
        // Local variables
        float arg; // r1+0x74
    }
    {
        // Range: 0x801805F4 -> 0x8018063C
        // Local variables
        float arg; // r1+0x70
    }
    {
        // Range: 0x80180640 -> 0x80180688
        // Local variables
        float arg; // r1+0x6C
    }
    {
        // Range: 0x8018068C -> 0x801806D4
        // Local variables
        float arg; // r1+0x68
    }
    {
        // Range: 0x801806D8 -> 0x80180760
        // Local variables
        class EventActionEnt * eventParams; // r0
    }
    {
        // Range: 0x80180764 -> 0x801807EC
        // Local variables
        class EventActionEnt * eventParams; // r0
    }
    {
        // Range: 0x801807F0 -> 0x80180878
        // Local variables
        class EventActionEnt * eventParams; // r0
    }
    {
        // Range: 0x80180888 -> 0x801808C4
        // Local variables
        bool arg; // r1+0xB
    }
    {
        // Range: 0x801808F4 -> 0x8018093C
        // Local variables
        float arg; // r1+0x64
    }
    {
        // Range: 0x80180944 -> 0x80180970
        // Local variables
        class EventActionTwoInts * eventParams; // r0
    }

    // References
    // -> class MultiplayerStats mpStats;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x80180990 -> 0x80180C2C
void zHudUp::Setup(class zHudUp * this /* r31 */) {
    {
        // Range: 0x801809C0 -> 0x80180B08
        // Local variables
        float arg1; // r1+0xC
        float arg0; // r1+0x10
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x80180C30 -> 0x80180E44
void zHudUp::Reset(class zHudUp * this /* r30 */) {
    {
        // Range: 0x80180C38 -> 0x80180C38
        // Local variables
        int i; // r0
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80180E50 -> 0x80181370
void zHudUp::Update(class zHudUp * this /* r25 */, float dt /* f31 */) {
    {
        // Range: 0x80180E84 -> 0x8018107C
        // Local variables
        int i; // r26
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// signature: zHudUp::SetActivePlayers(bool *)
// Range: 0x80181370 -> 0x80181398
void zHudUp::SetActivePlayers() {
}
// Range: 0x801813A0 -> 0x801814BC
void zHudUp::SetPlayerCharacter(class zHudUp * this /* r30 */, int playerIdx /* r31 */, enum ePlayerTypeUp characterID /* r28 */) {
    {
        // Range: 0x801813D8 -> 0x8018149C
        // Local variables
        enum eContextActionID newAct; // r0
        enum eContextActionID oldAct; // r4
        enum ePlayerTypeUp oldChar; // r0
    }
}
// Range: 0x801814C0 -> 0x801816CC
void zHudUp::PauseGame(int playerIdx /* r31 */) {
    {
        // Range: 0x801814D4 -> 0x801816B8
        // Local variables
        class zScaleform * pauseMenu; // r27

        {
            // Range: 0x80181538 -> 0x8018159C
            // Local variables
            int i; // r27
        }
        {
            // Range: 0x801815B4 -> 0x80181618
            // Local variables
            int i; // r27
        }
    }

    // References
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
}
// Range: 0x801816D0 -> 0x80181844
void zHudUp::UpdateContextAction(class zHudUp * this /* r30 */, int playerIdx /* r31 */) {
    // Local variables
    enum eContextActionID action; // r5
    int icon; // r26
    float args[2]; // r1+0x8

    {
        // Range: 0x80181760 -> 0x801817B4
        // Local variables
        int x; // r25
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80181850 -> 0x80181F1C
void zHudUp::RadarInit(class zHudUp * this /* r29 */) {
    {
        // Range: 0x80181884 -> 0x80181E48
        // Local variables
        int plyrIdx; // r30

        {
            // Range: 0x80181884 -> 0x80181E48
            // Local variables
            int yellowObjectRingCount; // r21
            int blueObjectRingCount; // r21
            int redTargetRingCount; // r21
            int grayTargetRingCount; // r21
            int yellowPlayerRingCount; // r21
            int redPlayerRingCount; // r21
            int bluePlayerRingCount; // r21
            int grayPlayerRingCount; // r21
            int radarIconCount; // r22

            {
                // Range: 0x80181884 -> 0x801818DC
                // Local variables
                int i; // r5
            }
            {
                // Range: 0x80181910 -> 0x8018195C
                // Local variables
                int i; // r22
            }
            {
                // Range: 0x80181994 -> 0x801819E0
                // Local variables
                int i; // r21
            }
            {
                // Range: 0x80181A14 -> 0x80181A60
                // Local variables
                int i; // r22
            }
            {
                // Range: 0x80181A94 -> 0x80181AE0
                // Local variables
                int i; // r22
            }
            {
                // Range: 0x80181B14 -> 0x80181B60
                // Local variables
                int i; // r22
            }
            {
                // Range: 0x80181B94 -> 0x80181BE0
                // Local variables
                int i; // r22
            }
            {
                // Range: 0x80181C1C -> 0x80181C68
                // Local variables
                int i; // r22
            }
            {
                // Range: 0x80181CA4 -> 0x80181CF0
                // Local variables
                int i; // r22
            }
            {
                // Range: 0x80181D24 -> 0x80181D70
                // Local variables
                int i; // r22
            }
            {
                // Range: 0x80181DA4 -> 0x80181DF0
                // Local variables
                int i; // r22
            }
        }
    }
    {
        // Range: 0x80181E5C -> 0x80181ECC
        // Local variables
        bool activePlayers[4]; // r1+0x8
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80181F20 -> 0x801820F4
void zHudUp::RadarCleanUp(class zHudUp * this /* r27 */) {
    {
        // Range: 0x80181F40 -> 0x801820AC
        // Local variables
        int plyrIdx; // r28
    }
}
// Range: 0x80182100 -> 0x801831D4
void zHudUp::RadarUpdate(class zHudUp * this /* r30 */, float dt /* f30 */) {
    // Local variables
    int numViewports; // r0
    float radiusRatio; // f0
    int viewportIdx; // r16

    {
        // Range: 0x801821D4 -> 0x80183118
        // Local variables
        int i; // r15

        {
            // Range: 0x801821D4 -> 0x80183118
            // Local variables
            class zUIImage * * curTeamRings; // r17
            unsigned int numObjects; // r18
            class BiplaneTargetTypePosition objectPos[16]; // r1+0x108
            int enemyIndex; // r18
            int numEnemies; // r0
            class BiplaneTargetTypePosition enemyPos[10]; // r1+0x40
            class xVec2 center; // r1+0x38

            {
                // Range: 0x801821D4 -> 0x801821D4
                // Local variables
                int j; // r17
            }
            {
                // Range: 0x801821D4 -> 0x801821D4
                // Local variables
                int k; // r0
            }
            {
                // Range: 0x801821D4 -> 0x801821D4
                // Local variables
                int y; // r5
            }
            {
                // Range: 0x801821D4 -> 0x801821D8
                // Local variables
                class zBiplanePlayer * bPlayer; // r18
            }
            {
                // Range: 0x801821D8 -> 0x801821D8
                // Local variables
                class zBiplanePlayer * bPlayer; // r18
            }
            {
                // Range: 0x801821D8 -> 0x801821D8
                // Local variables
                int j; // r31

                {
                    // Range: 0x801821D8 -> 0x801821D8
                    // Local variables
                    float viewY; // f0
                    float viewX; // f0
                    float viewHeight; // f14
                    float viewWidth; // f1
                    class xColor newColor; // r1+0x2C
                    class zUIImage * curRing; // r18

                    {
                        // Range: 0x801821D8 -> 0x801821D8
                        // Local variables
                        float scale; // f14
                    }
                }
                {
                    // Range: 0x801821D8 -> 0x801821D8
                    // Local variables
                    class xColor newColor; // r1+0x28
                }
                {
                    // Range: 0x801821D8 -> 0x801821D8
                    // Local variables
                    unsigned char colorOffset; // r0
                    class xColor newColor; // r1+0x24
                }
            }
            {
                // Range: 0x801821D8 -> 0x8018310C
                // Local variables
                int j; // r19

                {
                    // Range: 0x801821D8 -> 0x8018310C
                    // Local variables
                    float viewY; // f0
                    float viewX; // f31
                    float viewHeight; // f14
                    float viewWidth; // f1

                    {
                        // Range: 0x801821D8 -> 0x801821D8
                        // Local variables
                        class xColor newColor; // r1+0x20
                    }
                    {
                        // Range: 0x801821D8 -> 0x801821D8
                        // Local variables
                        class xColor newColor; // r1+0x1C
                    }
                    {
                        // Range: 0x801821D8 -> 0x801821E8
                        // Local variables
                        float scale; // f14
                    }
                }
            }
        }
    }

    // References
    // -> static class xVec2 radarOffset4;
    // -> static class xVec2 radarOffset4Wide;
    // -> class zGlobals globals;
    // -> static class xVec2 radarOffset2;
    // -> static class xVec2 radarCenter;
    // -> class xGlobals * xglobals;
}
// signature: zHudUp::CalcArrowScreenPos(zUIImage *, const xVec2 *, const xVec3 *)
// Range: 0x80183620 -> 0x801838F8
void zHudUp::CalcArrowScreenPos(class zHudUp * this /* r30 */, class zUIImage * arrow /* r31 */, class xVec2 * center /* r28 */) {
    // Local variables
    class xVec2 offsetVec; // r1+0x8
    float distance; // f31
    float rotation; // f1
    int size; // r3
}
