/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSoundsNamed.cpp
*/
// signature: zSoundNamed::Init(Sext::SoundNamed &)
// Range: 0x8016F530 -> 0x8016F554
void zSoundNamed::Init() {
}
// Range: 0x8016F560 -> 0x8016F590
void zSoundNamed::Setup() {
}
// signature: zSoundsNamed::zSoundsNamed(World::EntityHandleBase *, Sext::zSoundsNamedAsset &)
// Range: 0x8016F590 -> 0x8016F5F4
void * zSoundsNamed::zSoundsNamed(class zSoundsNamed * this /* r30 */, class zSoundsNamedAsset & asset /* r31 */) {
    // References
    // -> struct {} __vt__12zSoundsNamed;
}
// Range: 0x8016F600 -> 0x8016F704
void zSoundsNamed::Setup(class zSoundsNamed * this /* r31 */) {
    {
        // Range: 0x8016F684 -> 0x8016F6C4
        // Local variables
        unsigned int iSound; // r25
    }
    {
        // Range: 0x8016F6C4 -> 0x8016F6F0
        // Local variables
        unsigned int iSound; // r25
    }
}
// Range: 0x8016F710 -> 0x8016F798
void zSoundsNamed::DeInit(class zSoundsNamed * this /* r29 */) {
    {
        // Range: 0x8016F724 -> 0x8016F760
        // Local variables
        unsigned int iSound; // r30

        {
            // Range: 0x8016F724 -> 0x8016F760
            // Local variables
            class zSoundNamed & sound; // r3
        }
    }
}
// Range: 0x8016F7A0 -> 0x8016F800
class Entity * Sext::zSoundsNamedAsset::Create(class EntityHandleBase * handle /* r30 */, class zSoundsNamedAsset * pAsset /* r31 */) {
}
// Range: 0x8016F800 -> 0x8016F84C
void zSoundsNamed::SceneSetup() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8016F850 -> 0x8016F89C
void zSoundsNamed::SceneExit() {
    // References
    // -> class zGlobals globals;
}
// signature: zSoundsNamed::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8016F8A0 -> 0x8016F8D0
void zSoundsNamed::HandleEvent() {
}
// Range: 0x8016F8D0 -> 0x8016FA0C
void zSoundsNamed::Play(class zSoundsNamed * this /* r26 */, char * pName /* r27 */) {
    {
        // Range: 0x8016F900 -> 0x8016F9F8
        // Local variables
        unsigned int iSound; // r29

        {
            // Range: 0x8016F900 -> 0x8016F9F8
            // Local variables
            class zSoundNamed & sound; // r28

            {
                // Range: 0x8016F910 -> 0x8016F9F8
                // Local variables
                class zPlayer * sbPlayer; // r3
            }
        }
    }

    // References
    // -> class Module * trcModule;
    // -> class zGlobals globals;
}
// Range: 0x8016FA10 -> 0x8016FA9C
void zSoundsNamed::Stop(class zSoundsNamed * this /* r26 */, char * pName /* r27 */) {
    {
        // Range: 0x8016FA40 -> 0x8016FA88
        // Local variables
        unsigned int iSound; // r29

        {
            // Range: 0x8016FA40 -> 0x8016FA88
            // Local variables
            class zSoundNamed & sound; // r28
        }
    }

    // References
    // -> class zGlobals globals;
}
