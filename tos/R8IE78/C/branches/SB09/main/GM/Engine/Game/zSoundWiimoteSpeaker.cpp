/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSoundWiimoteSpeaker.cpp
*/
class zSoundWiimoteSpeakerList * SoundList; // size: 0x4, address: 0x8075A6D8
// Range: 0x8016FAA0 -> 0x8016FBB0
void zSoundWiimoteSpeakerList::Init(class zSoundWiimoteSpeakerList * this /* r31 */, class zSoundWiimoteSpeakerListAsset * inAsset /* r27 */) {
    {
        // Range: 0x8016FB44 -> 0x8016FB9C
        // Local variables
        int i; // r27
    }

    // References
    // -> class zSoundWiimoteSpeakerList * SoundList;
}
// Range: 0x8016FBB0 -> 0x8016FC04
void zSoundWiimoteSpeakerList::SceneExit(class zSoundWiimoteSpeakerList * this /* r29 */) {
    {
        // Range: 0x8016FBC4 -> 0x8016FBF0
        // Local variables
        int i; // r30
    }
}
// signature: zSoundWiimoteSpeakerList::_Play(int, int)
// Range: 0x8016FC10 -> 0x8016FC68
bool zSoundWiimoteSpeakerList::_Play() {
}
// signature: zSoundWiimoteSpeakerList::_Stop(int)
// Range: 0x8016FC70 -> 0x8016FC9C
void zSoundWiimoteSpeakerList::_Stop() {
}
// signature: zSoundWiimoteSpeakerList::Play(int, int)
// Range: 0x8016FCA0 -> 0x8016FCE8
bool zSoundWiimoteSpeakerList::Play(int idx /* r0 */) {
    // References
    // -> class zSoundWiimoteSpeakerList * SoundList;
}
// Range: 0x8016FCF0 -> 0x8016FDA0
bool zSoundWiimoteSpeakerList::Play(int idx /* r30 */, class zPlayer * player /* r31 */) {
}
// signature: zSoundWiimoteSpeakerList::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8016FDA0 -> 0x8016FDFC
void zSoundWiimoteSpeakerList::HandleEvent() {
}
// Range: 0x8016FE00 -> 0x8016FE7C
class Entity * Sext::zSoundWiimoteSpeakerListAsset::Create(class EntityHandleBase * handle /* r29 */, class zSoundWiimoteSpeakerListAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__24zSoundWiimoteSpeakerList;
}
// Range: 0x8016FE80 -> 0x8016FECC
void zSoundWiimoteSpeakerList_SceneExit() {
    // References
    // -> class zGlobals globals;
}
