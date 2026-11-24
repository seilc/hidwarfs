/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zScheduler.cpp
*/
// Range: 0x802C7CE0 -> 0x802C7D98
void zScheduler::Setup(class zScheduler * this /* r27 */, unsigned int maxTasks /* r28 */, float timeLimit /* f31 */, unsigned int entryLimit /* r29 */) {
}
// Range: 0x802C7DA0 -> 0x802C7E08
void zScheduler::Reset() {
    {
        // Range: 0x802C7DA8 -> 0x802C7DC4
        // Local variables
        int i; // r7
    }
}
// Range: 0x802C7E10 -> 0x802C7F58
void zScheduler::Prepare(class zScheduler * this /* r29 */) {
    {
        // Range: 0x802C7E40 -> 0x802C7F30
        // Local variables
        class Entry * entry; // r30
    }
}
// Range: 0x802C7F60 -> 0x802C81E4
void zScheduler::Update(class zScheduler * this /* r30 */, float dt /* f29 */) {
    // Local variables
    float startTime; // f0

    {
        // Range: 0x802C7FC0 -> 0x802C80A0
        // Local variables
        float currTime; // f0
    }

    // References
    // -> double secondsPerTick;
}
// signature: zScheduler::Run(zSchedulerTask *, zDelegateP2<void, zSchedulerTask *, eTaskState> *, zDelegateP2<void, zSchedulerTask *, eTaskState> *)
// Range: 0x802C81F0 -> 0x802C8404
bool zScheduler::Run() {
}
// signature: zScheduler::Resume(zSchedulerTask *)
// Range: 0x802C8410 -> 0x802C86DC
bool zScheduler::Resume() {
    // Local variables
    bool createDup; // r0
    class Entry * entry; // r5
}
// signature: zScheduler::Abort(zSchedulerTask *)
// Range: 0x802C86E0 -> 0x802C8988
bool zScheduler::Abort() {
    // Local variables
    bool createDup; // r0
    class Entry * entry; // r5
}
