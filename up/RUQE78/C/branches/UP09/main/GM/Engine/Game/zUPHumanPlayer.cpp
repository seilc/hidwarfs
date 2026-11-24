/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUPHumanPlayer.cpp
*/
// signature: zUPHumanPlayer::Init(Sext::xEntAsset *)
// Range: 0x800F27A0 -> 0x800F27F4
void zUPHumanPlayer::Init(class zUPHumanPlayer * this /* r31 */) {
}
// Range: 0x800F2800 -> 0x800F2958
void zUPHumanPlayer::InitActions(class zUPHumanPlayer * this /* r30 */) {
    // References
    // -> struct {} __vt__28zUPHumanPlayerSpiderAttached;
    // -> struct {} __vt__25zUPHumanPlayerCombatTaunt;
    // -> struct {} __vt__25zUPHumanPlayerCombatBlock;
    // -> struct {} __vt__24zUPHumanPlayer_VineSwing;
}
// Range: 0x800F2960 -> 0x800F29AC
void zUPHumanPlayer::Reset(class zUPHumanPlayer * this /* r30 */) {
}
// Range: 0x800F29B0 -> 0x800F3000
void zUPHumanPlayer::HandleEvent(class zUPHumanPlayer * this /* r28 */, class xBase * from /* r29 */, unsigned int toEvent /* r30 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x800F2B44 -> 0x800F2B64
        // Local variables
        class zDirection * direction; // r28
        class EventActionSummonToLoc * local_params; // r0
    }
    {
        // Range: 0x800F2B68 -> 0x800F2B90
        // Local variables
        class zRussellPlayer * rPlayer; // r28

        {
            // Range: 0x800F2B6C -> 0x800F2B90
            // Local variables
            class zDirection * direction; // r0
        }
    }
    {
        // Range: 0x800F2B94 -> 0x800F2C44
        // Local variables
        class zDirection * direction; // r5
        class EventActionSummonToLoc * local_params; // r0
    }
    {
        // Range: 0x800F2CD0 -> 0x800F2D68
        {
            // Range: 0x800F2D20 -> 0x800F2D68
            // Local variables
            class zDirection * direction; // r5
        }
    }
    {
        // Range: 0x800F2DEC -> 0x800F2F54
        // Local variables
        class xVec3 knockback; // r1+0x14
        class xVec3 npcPos; // r1+0x20
    }
    {
        // Range: 0x800F2F94 -> 0x800F2FB0
        // Local variables
        class zUPHumanPlayerAIFakeFightDog * action; // r0
    }
    {
        // Range: 0x800F2FB4 -> 0x800F2FCC
        // Local variables
        class zUPHumanPlayerAIFakeFightDog * action; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800F3000 -> 0x800F3090
void zUPHumanPlayer::TurnedOffCheatMode(class zUPHumanPlayer * this /* r30 */) {
}
// Range: 0x800F3090 -> 0x800F339C
bool zUPHumanPlayer::Damage(class zUPHumanPlayer * this /* r30 */, class zCombatDamageInfo & damageInfo /* r31 */) {
    {
        // Range: 0x800F30C4 -> 0x800F3308
        // Local variables
        class zEnt * enemy; // r31
    }

    // References
    // -> bool friendlyFire;
}
// Range: 0x800F33A0 -> 0x800F363C
void zUPHumanPlayer::AbsControl(class zUPHumanPlayer * this /* r30 */, float x /* f29 */, float z /* f30 */, float dt /* f31 */) {
    // Local variables
    void (zUPHumanPlayer::* pRelControl)(void * this, void * this, float stickMag, class xVec3 & camRelativeInput, float dt); // r1+0x20
    void (zUPHumanPlayer::* pAbsControl)(void * this, void * this, float x, float y, float stickMag, float dt); // r1+0x14

    {
        // Range: 0x800F3440 -> 0x800F35C8
        // Local variables
        float stickMag; // f28
        class xVec3 camRelativeInput; // r1+0x8
    }

    // References
    // -> void (zUPHumanPlayer::* __ptmf_null)(void * this, void * this, float x, float y, float stickMag, float dt);
}
// Range: 0x800F3640 -> 0x800F36BC
void zUPHumanPlayer::PlayCanteenFX(class zUPHumanPlayer * this /* r31 */) {
    {
        // Range: 0x800F3654 -> 0x800F36A8
        // Local variables
        class zFXSpawn * spawnPtCanteen; // r0
    }
}
// Range: 0x800F36C0 -> 0x800F38F4
void zUPHumanPlayer::DefaultUpdate(class zUPHumanPlayer * this /* r31 */, float dt /* f31 */) {
    // References
    // -> static class IconCache cache[16];
    // -> static int total;
}
// signature: zUPHumanPlayer::CheckForBugs(float)
// Range: 0x800F3910 -> 0x800F3CF0
bool zUPHumanPlayer::CheckForBugs(class zUPHumanPlayer * this /* r29 */) {
    // Local variables
    class zUPHumanPlayer_CollectibleNPCWithinDistance_CB npcDistanceCB; // r1+0x2C
    class zUPHumanPlayer_BugWithinDistance_CB distanceCB; // r1+0x20
    bool nearBugs; // r3

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class zGlobals globals;
}
