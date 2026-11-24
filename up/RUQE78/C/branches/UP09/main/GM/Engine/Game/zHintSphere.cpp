/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zHintSphere.cpp
*/
// Range: 0x801787A0 -> 0x801788BC
int zHintSoundAsset::GetSpeakingPlayerIndex() {
    {
        // Range: 0x801787C8 -> 0x801788A0
        // Local variables
        enum FMOD_RESULT result; // r0
        int userProperty; // r1+0x8

        {
            // Range: 0x801787E8 -> 0x80178898
            // Local variables
            class zPlayer * player; // r0
        }
    }

    // References
    // -> bool gSoundReadyToExit;
}
// signature: zHintSoundSourceManager::Init(Sext::zHintSphereAsset *)
// Range: 0x801788C0 -> 0x80178B44
void zHintSoundSourceManager::Init(class zHintSoundSourceManager * this /* r23 */) {
    // Local variables
    int cnt; // r24

    {
        // Range: 0x801788EC -> 0x801788EC
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x801788EC -> 0x801788EC
            // Local variables
            unsigned int j; // r9
        }
    }
    {
        // Range: 0x801789D4 -> 0x80178B04
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x801789E4 -> 0x80178AE8
            // Local variables
            unsigned int j; // r26

            {
                // Range: 0x801789F0 -> 0x80178AC0
                // Local variables
                unsigned int k; // r25

                {
                    // Range: 0x801789F0 -> 0x80178AC0
                    {
                        // Range: 0x80178A1C -> 0x80178AC0
                        // Local variables
                        int playeridx; // r0
                        class zHintSoundAsset * current; // r24
                    }
                }
            }
        }
    }
}
// signature: zHintSoundSourceManager::Play(int, int)
// Range: 0x80178B50 -> 0x80178BF4
void zHintSoundSourceManager::Play() {
    {
        // Range: 0x80178B6C -> 0x80178BDC
        // Local variables
        int i; // r9

        {
            // Range: 0x80178B6C -> 0x80178BDC
            // Local variables
            class zHintSoundAsset * current; // r8
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80178C00 -> 0x80178EB0
bool zHintSoundSourceManager::Update(class zHintSoundSourceManager * this /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x80178C58 -> 0x80178CCC
        // Local variables
        int i; // r25
    }
    {
        // Range: 0x80178CE4 -> 0x80178D78
        // Local variables
        bool duringPlay; // r0

        {
            // Range: 0x80178CF0 -> 0x80178D3C
            // Local variables
            class zHintSoundAsset * current; // r3
        }
    }
    {
        // Range: 0x80178D78 -> 0x80178E90
        // Local variables
        class zHintSoundAsset * current; // r31

        {
            // Range: 0x80178D9C -> 0x80178E8C
            // Local variables
            int spid; // r0
        }
    }

    // References
    // -> class zGameCheats gGameCheats;
    // -> class xGlobals * xglobals;
    // -> bool gSoundReadyToExit;
    // -> class zGlobals globals;
}
// signature: zHintSoundSourceManager::getPlayerIndex(unsigned char, Sext::uid)
// Range: 0x80178EB0 -> 0x80178FE0
int zHintSoundSourceManager::getPlayerIndex() {
    {
        // Range: 0x80178EB8 -> 0x80178F6C
        // Local variables
        class zCommonPlayer * p; // r3
    }
    {
        // Range: 0x80178F6C -> 0x80178F74
        // Local variables
        int i; // r9
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80178FF0 -> 0x80179054
void zHintSphere::Setup(class zHintSphere * this /* r31 */) {
}
// signature: zHintSphere::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80179060 -> 0x801792EC
void zHintSphere::HandleEvent(class zHintSphere * this /* r31 */) {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801792F0 -> 0x80179340
void zHintSphere::Rewind() {
}
// Range: 0x80179340 -> 0x80179484
void zHintSphere::UpdateParseOne(class zHintSphere * this /* r31 */) {
    {
        // Range: 0x80179374 -> 0x80179464
        {
            // Range: 0x80179380 -> 0x801793E8
            // Local variables
            int i; // r28
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zHintSphere::UpdateParseTwo(float)
// Range: 0x80179490 -> 0x801799C4
void zHintSphere::UpdateParseTwo(class zHintSphere * this /* r31 */) {
    {
        // Range: 0x80179560 -> 0x801799AC
        {
            // Range: 0x801796C4 -> 0x801799AC
            // Local variables
            int maxLevel; // r0
            float timeLimit; // f1
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801799E0 -> 0x80179D34
bool zHintSphere::inRange(class zHintSphere * this /* r30 */, class xVec3 * chkPos /* r31 */) {
    {
        // Range: 0x80179A74 -> 0x80179ABC
        // Local variables
        float dz; // f2
        float dy; // f5
        float dx; // f4
    }
    {
        // Range: 0x80179ABC -> 0x80179BDC
        // Local variables
        class xVec3 local; // r1+0x14
        class xMat4x3 boxMat; // r1+0x20
    }
    {
        // Range: 0x80179BE4 -> 0x80179CD8
        // Local variables
        float dz; // f2
        float dy; // f5
        float dx; // f4
        class xVec3 pos; // r1+0x8
        float r; // f3
        class xBase * obj; // r0
    }
}
// Range: 0x80179D40 -> 0x80179E28
class Entity * Sext::zHintSphereAsset::Create(class EntityHandleBase * handle /* r29 */, class zHintSphereAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__11zHintSphere;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80179E30 -> 0x80179FD4
void zHintSphere_Update(float dt /* f31 */) {
    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x80179FE0 -> 0x8017A068
void zHintSphere_SceneExit() {
    // References
    // -> class zGlobals globals;
}
