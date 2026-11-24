/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zSoundPhysics.cpp
*/
static class zQueue sPhysQueue; // size: 0x108, address: 0x8082BDD0
class zSoundSourcesPhysics * ms_slotsPhysStorage; // size: 0x4, address: 0x8082BED8
// Range: 0x802583D0 -> 0x8025846C
void zSoundSourcesPhysics::Init(class zSoundSourcesPhysics * this /* r30 */, class SoundSourcesPhysics & asset /* r31 */) {
}
// Range: 0x80258470 -> 0x802584AC
void zSoundSourcesPhysics::DeInit(class zSoundSourcesPhysics * this /* r31 */) {
}
// Range: 0x802584B0 -> 0x802585A4
void zSoundSourcesPhysics::Stop(class zSoundSourcesPhysics * this /* r31 */) {
    // References
    // -> bool gSysForceExit;
    // -> bool gSoundReadyToExit;
}
// Range: 0x802585B0 -> 0x80258634
class zSoundSourcesPhysics * zSoundSourcesPhysics::GetInstance() {
    // References
    // -> static class zQueue sPhysQueue;
}
// Range: 0x80258640 -> 0x802586F8
void zSoundSourcesPhysics::ScheduleForDelete(class zSoundSourcesPhysics * this /* r31 */) {
    // References
    // -> bool gSysForceExit;
    // -> bool gSoundReadyToExit;
}
// Range: 0x80258700 -> 0x8025895C
void zSoundSourcesPhysics::DeInitInstances() {
    {
        // Range: 0x8025871C -> 0x80258930
        {
            // Range: 0x8025871C -> 0x80258930
            // Local variables
            class zSoundSourcesPhysics * pFromQueue; // r26
        }
    }

    // References
    // -> bool gSoundReadyToExit;
    // -> bool gSysForceExit;
    // -> static class zQueue sPhysQueue;
}
// signature: zSoundSourcesPhysics::ValidateAssets(const Sext::SoundSourcesPhysics &)
// Range: 0x80258960 -> 0x80258A40
bool zSoundSourcesPhysics::ValidateAssets() {
}
