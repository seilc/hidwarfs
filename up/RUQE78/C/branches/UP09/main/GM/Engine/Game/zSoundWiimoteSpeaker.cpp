/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zSoundWiimoteSpeaker.cpp
*/
static class zWiimoteSpeakerController Instance; // size: 0xE0, address: 0x8082BEF0
class zSoundWiimoteSpeaker * SoundList[18]; // size: 0x48, address: 0x8082BFD0
static class zUpWiimoteSoundHelper Instance; // size: 0x1, address: 0x8082C028
// signature: UpdateControllerSpeaker(OSAlarm *, OSContext *)
// Range: 0x802597A0 -> 0x80259A40
static void UpdateControllerSpeaker() {
    // Local variables
    bool intr; // r20
    short pcmBuffer[40]; // r1+0x20
    unsigned char adpcmBuffer[20]; // r1+0x8

    {
        // Range: 0x802597B4 -> 0x80259A1C
        // Local variables
        int i; // r19
    }

    // References
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static class zWiimoteSpeakerController Instance;
}
// signature: zSoundWiimoteSpeaker::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80259A60 -> 0x80259C6C
void zSoundWiimoteSpeaker::HandleEvent(class zSoundWiimoteSpeaker * this /* r31 */) {
    // References
    // -> class zGlobals globals;
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static class zWiimoteSpeakerController Instance;
}
// Range: 0x80259C70 -> 0x80259D04
class zWiimoteSpeakerController & zWiimoteSpeakerController::GetInstance() {
    // References
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static class zWiimoteSpeakerController Instance;
}
// Range: 0x80259D10 -> 0x80259D14
void zWiimoteSpeakerController::SceneSetup() {
}
// Range: 0x80259D20 -> 0x80259DC8
void WiimoteSpeakerSetEnable(bool val /* r30 */) {
    // References
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static class zWiimoteSpeakerController Instance;
}
// signature: zWiimoteSpeakerController::SetEnable(bool)
// Range: 0x80259DD0 -> 0x80259F1C
void zWiimoteSpeakerController::SetEnable(class zWiimoteSpeakerController * this /* r30 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80259F20 -> 0x80259F6C
void * zWiimoteSpeakerController::~zWiimoteSpeakerController(class zWiimoteSpeakerController * this /* r31 */) {
    // References
    // -> void (* WiimoteSpeakerCB)(bool);
}
// Range: 0x80259F70 -> 0x8025A048
class Entity * Sext::zSoundWiimoteSpeakerAsset::Create(class EntityHandleBase * handle /* r29 */, class zSoundWiimoteSpeakerAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__20zSoundWiimoteSpeaker;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: SpeakerOnCallback(long, long)
// Range: 0x8025A050 -> 0x8025A06C
void SpeakerOnCallback() {
}
// signature: SpeakerPlayCallback(long, long)
// Range: 0x8025A070 -> 0x8025A074
void SpeakerPlayCallback() {
}
// signature: SpeakerOffCallback(long, long)
// Range: 0x8025A080 -> 0x8025A084
void SpeakerOffCallback() {
}
// Range: 0x8025A090 -> 0x8025A0F0
class zUpWiimoteSoundHelper & zUpWiimoteSoundHelper::GetInstance() {
    // References
    // -> static class zUpWiimoteSoundHelper Instance;
}
// signature: zUpWiimoteSoundHelper::Play(eUpWiimoteSoundName, int)
// Range: 0x8025A100 -> 0x8025A200
void zUpWiimoteSoundHelper::Play(int idx /* r29 */) {
    // References
    // -> class zGlobals globals;
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static class zWiimoteSpeakerController Instance;
    // -> class zSoundWiimoteSpeaker * SoundList[18];
}
// signature: zUpWiimoteSoundHelper::Play(eUpWiimoteSoundName, zPlayer *)
// Range: 0x8025A200 -> 0x8025A318
void zUpWiimoteSoundHelper::Play(enum eUpWiimoteSoundName sound /* r29 */) {
    // References
    // -> class zGlobals globals;
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static class zWiimoteSpeakerController Instance;
    // -> class zSoundWiimoteSpeaker * SoundList[18];
}
// Range: 0x8025A320 -> 0x8025A728
void zUpWiimoteSoundHelper::SceneSetup() {
    // References
    // -> class zSoundWiimoteSpeaker * SoundList[18];
}
