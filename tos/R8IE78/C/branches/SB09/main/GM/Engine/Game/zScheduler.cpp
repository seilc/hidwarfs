/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zScheduler.cpp
*/
// Range: 0x801A85C0 -> 0x801A85CC
void * zScheduler::zScheduler() {
}
// Range: 0x801A85D0 -> 0x801A8630
class Entry * zScheduler::GetFreeEntry() {
    // References
    // -> class Factory factory;
}
// Range: 0x801A8630 -> 0x801A86B8
void zScheduler::ReleaseAllEntries(class zScheduler * this /* r30 */) {
    {
        // Range: 0x801A8648 -> 0x801A8678
        // Local variables
        class Entry * entry; // r31
    }
    {
        // Range: 0x801A8678 -> 0x801A86A4
        // Local variables
        class Entry * entry; // r31
    }
}
// Range: 0x801A86F0 -> 0x801A87C0
class Entry * zScheduler::FindInActive(class zScheduler * this /* r29 */, class zSchedulerTask * task /* r30 */) const {
    // Local variables
    class Entry * entry; // r31
    class ConstIterator iter; // r1+0x38
}
// Range: 0x801A8880 -> 0x801A894C
class Entry * zScheduler::FindInEntries(class zScheduler * this /* r29 */, class zSchedulerTask * task /* r30 */) const {
    // Local variables
    class Entry * entry; // r31
    class ConstIterator iter; // r1+0x2C
}
// Range: 0x801A8950 -> 0x801A89B0
class Entry * zScheduler::FindEntry(class zScheduler * this /* r30 */, class zSchedulerTask * task /* r31 */) const {
    // Local variables
    class Entry * entry; // r5
}
// signature: zScheduler::Setup(unsigned int, float, unsigned int)
// Range: 0x801A89B0 -> 0x801A8A58
void zScheduler::Setup(class zScheduler * this /* r28 */, unsigned int maxTasks /* r29 */) {
    {
        // Range: 0x801A89C8 -> 0x801A8A30
        // Local variables
        class Entry * * queuePool; // r0
    }
}
// Range: 0x801A8A80 -> 0x801A8AC4
void zScheduler::Exit(class zScheduler * this /* r31 */) {
}
// Range: 0x801A8AD0 -> 0x801A8AE4
void zScheduler::Reset() {
}
// Range: 0x801A8AF0 -> 0x801A8B1C
void zScheduler::Notify(class Entry * entry /* r5 */) {
}
// Range: 0x801A8B20 -> 0x801A8C14
void zScheduler::Prepare(class zScheduler * this /* r30 */) {
    {
        // Range: 0x801A8B48 -> 0x801A8C00
        // Local variables
        class Entry * entry; // r1+0x8
    }
}
// Range: 0x801A8CA0 -> 0x801A8D90
bool zScheduler::Step(class zScheduler * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class Entry * entry; // r1+0x8
}
// Range: 0x801A8D90 -> 0x801A8F04
void zScheduler::Update(class zScheduler * this /* r30 */, float dt /* f29 */) {
    // Local variables
    float startTime; // f0

    {
        // Range: 0x801A8DEC -> 0x801A8ECC
        // Local variables
        float currTime; // f0

        {
            // Range: 0x801A8DEC -> 0x801A8ECC
            // Local variables
            class Iterator iter; // r1+0x40
        }
    }

    // References
    // -> double secondsPerTick;
}
// Range: 0x801A8F50 -> 0x801A9048
bool zScheduler::Run(class zScheduler * this /* r28 */, class zSchedulerTask * task /* r29 */, class DelegateP2 * changeObserver /* r30 */, class DelegateP2 * releaseObserver /* r31 */) {
    // Local variables
    class Entry * entry; // r1+0x8
}
// Range: 0x801A9050 -> 0x801A914C
bool zScheduler::Resume(class zScheduler * this /* r28 */, class zSchedulerTask * task /* r29 */) {
    // Local variables
    bool createDup; // r31
    class Entry * entry; // r30

    {
        // Range: 0x801A90E4 -> 0x801A9118
        // Local variables
        class Entry * newEntry; // r1+0x8
    }
}
// Range: 0x801A9190 -> 0x801A9294
bool zScheduler::Abort(class zScheduler * this /* r28 */, class zSchedulerTask * task /* r29 */) {
    // Local variables
    bool createDup; // r31
    class Entry * entry; // r30

    {
        // Range: 0x801A9224 -> 0x801A9258
        // Local variables
        class Entry * newEntry; // r1+0x8
    }
}
