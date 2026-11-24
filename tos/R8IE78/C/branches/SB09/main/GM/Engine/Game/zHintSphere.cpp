/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zHintSphere.cpp
*/
bool AllowHintspherePlay; // size: 0x1, address: 0x806BD6C4
// Range: 0x800C67C0 -> 0x800C68DC
int zHintSoundAsset::GetSpeakingPlayerIndex() {
    {
        // Range: 0x800C67E8 -> 0x800C68C0
        // Local variables
        enum FMOD_RESULT result; // r0
        int userProperty; // r1+0x8

        {
            // Range: 0x800C6808 -> 0x800C68B8
            // Local variables
            class zPlayer * player; // r0
        }
    }

    // References
    // -> bool gSoundReadyToExit;
}
// signature: zHintSoundSourceManager::Init(Sext::zHintSphereAsset *)
// Range: 0x800C68E0 -> 0x800C6B24
void zHintSoundSourceManager::Init(class zHintSoundSourceManager * this /* r26 */) {
    // Local variables
    int cnt; // r28

    {
        // Range: 0x800C6908 -> 0x800C695C
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x800C6920 -> 0x800C695C
            // Local variables
            unsigned int j; // r9
        }
    }
    {
        // Range: 0x800C69C0 -> 0x800C6AF0
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x800C69CC -> 0x800C6AF0
            // Local variables
            unsigned int j; // r29

            {
                // Range: 0x800C69D8 -> 0x800C6AF0
                // Local variables
                unsigned int k; // r28

                {
                    // Range: 0x800C69D8 -> 0x800C6AF0
                    {
                        // Range: 0x800C69D8 -> 0x800C6A88
                        // Local variables
                        int playeridx; // r0
                        class zHintSoundAsset * current; // r27
                    }
                }
            }
        }
    }
    {
        // Range: 0x800C6AF0 -> 0x800C6B0C
        // Local variables
        int i; // r0
    }

    // References
    // -> struct {} __vt__15zHintSoundAsset;
}
// Range: 0x800C6B30 -> 0x800C6B84
void zHintSoundSourceManager::SceneExit(class zHintSoundSourceManager * this /* r29 */) {
    {
        // Range: 0x800C6B44 -> 0x800C6B70
        // Local variables
        int i; // r30
    }
}
// signature: zHintSoundSourceManager::Play(int, int)
// Range: 0x800C6B90 -> 0x800C6C40
void zHintSoundSourceManager::Play() {
    {
        // Range: 0x800C6BA8 -> 0x800C6BD8
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x800C6BD8 -> 0x800C6C30
        // Local variables
        int i; // r8

        {
            // Range: 0x800C6BD8 -> 0x800C6C30
            // Local variables
            class zHintSoundAsset * current; // r9
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800C6C70 -> 0x800C6D24
void zHintSoundSourceManager::Stop(class zHintSoundSourceManager * this /* r26 */) {
    {
        // Range: 0x800C6CBC -> 0x800C6D0C
        // Local variables
        int i; // r27
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zHintSoundSourceManager::HintIsPlaying(zHintSoundAsset *)
// Range: 0x800C6D30 -> 0x800C6D80
bool zHintSoundSourceManager::HintIsPlaying() {
    // Local variables
    unsigned int state; // r1+0x8

    // References
    // -> bool gSoundReadyToExit;
}
// Range: 0x800C6D80 -> 0x800C6F80
bool zHintSoundSourceManager::Update(class zHintSoundSourceManager * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x800C6DD4 -> 0x800C6E30
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x800C6E30 -> 0x800C6E94
        // Local variables
        bool duringPlay; // r0
    }
    {
        // Range: 0x800C6E94 -> 0x800C6F60
        // Local variables
        class zHintSoundAsset * current; // r26

        {
            // Range: 0x800C6EB8 -> 0x800C6F5C
            // Local variables
            int spid; // r0
        }
    }

    // References
    // -> bool gSoundReadyToExit;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// signature: zHintSoundSourceManager::getPlayerIndex(unsigned char)
// Range: 0x800C6F80 -> 0x800C7014
int zHintSoundSourceManager::getPlayerIndex() {
    // Local variables
    class zCommonPlayer * p; // r3
}
// Range: 0x800C7020 -> 0x800C7070
void zHintSphere::Init(class zHintSphere * this /* r30 */, class zHintSphereAsset * inAsset /* r31 */) {
}
// Range: 0x800C7070 -> 0x800C70BC
void zHintSphere::Setup(class zHintSphere * this /* r31 */) {
}
// Range: 0x800C70C0 -> 0x800C712C
void zHintSphere::Reset(class zHintSphere * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x800C7130 -> 0x800C7188
void zHintSphere::DebugReset(class zHintSphere * this /* r29 */) {
}
// signature: zHintSphere::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C7190 -> 0x800C7260
void zHintSphere::HandleEvent(class zHintSphere * this /* r31 */) {
}
// Range: 0x800C7260 -> 0x800C72EC
void zHintSphere::Rewind(class zHintSphere * this /* r31 */) {
    // References
    // -> bool AllowHintspherePlay;
    // -> class zGlobals globals;
}
// signature: zHintSphere::UpdateParseOne(float)
// Range: 0x800C72F0 -> 0x800C7420
void zHintSphere::UpdateParseOne(class zHintSphere * this /* r31 */) {
    // Local variables
    float nearestDist; // f31
    float Dist; // r1+0x8

    {
        // Range: 0x800C7380 -> 0x800C7400
        // Local variables
        int i; // r28
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// signature: zHintSphere::UpdateParseTwo(float)
// Range: 0x800C7420 -> 0x800C7634
void zHintSphere::UpdateParseTwo(class zHintSphere * this /* r31 */) {
    // Local variables
    int maxLevel; // r0

    {
        // Range: 0x800C74D0 -> 0x800C761C
        {
            // Range: 0x800C74D8 -> 0x800C761C
            // Local variables
            float timeLimit; // f1
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x800C7640 -> 0x800C7648
void zHintSphere::SceneExit() {
}
// Range: 0x800C7650 -> 0x800C7708
void zHintSphere::Play(class zHintSphere * this /* r31 */) {
    {
        // Range: 0x800C7678 -> 0x800C76F4
        // Local variables
        class zPlayer * pPlankton; // r0
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x800C7710 -> 0x800C7738
void zHintSphere::ResetTimer() {
}
// Range: 0x800C7740 -> 0x800C79D0
bool zHintSphere::inRange(class zHintSphere * this /* r28 */, class xVec3 * chkPos /* r29 */, float * distance2 /* r30 */) {
    {
        // Range: 0x800C77B4 -> 0x800C7808
        // Local variables
        float d2; // f1
        float dz; // f2
        float dy; // f5
        float dx; // f4
    }
    {
        // Range: 0x800C7808 -> 0x800C78E4
        // Local variables
        class xVec3 local; // r1+0x14
        class xMat4x3 boxMat; // r1+0x20
    }
    {
        // Range: 0x800C78EC -> 0x800C7998
        // Local variables
        float d2; // f1
        float dz; // f2
        float dy; // f5
        float dx; // f4
        class xVec3 pos; // r1+0x8
        float r; // f31
        class xBase * obj; // r3
    }
}
// Range: 0x800C79D0 -> 0x800C7A4C
class Entity * Sext::zHintSphereAsset::Create(class EntityHandleBase * handle /* r29 */, class zHintSphereAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__11zHintSphere;
}
// Range: 0x800C7A50 -> 0x800C7BF8
void zHintSphere_Update(float dt /* f31 */) {
    // References
    // -> bool AllowHintspherePlay;
    // -> class zGlobals globals;
}
