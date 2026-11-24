/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\System\Multithread.cpp
*/
long priorityMap[7]; // size: 0x1C, address: 0x80694740
// signature: System::CommChannel::Init(int)
// Range: 0x801FC820 -> 0x801FC874
void System::CommChannel::Init(class CommChannel * this /* r31 */) {
}
// signature: System::CommChannel::SetPool(char *, int)
// Range: 0x801FC880 -> 0x801FC898
void System::CommChannel::SetPool() {
}
// signature: System::CommChannel::Acquire(int, int)
// Range: 0x801FC8A0 -> 0x801FC990
char * System::CommChannel::Acquire(class CommChannel * this /* r26 */, int amountUser /* r27 */) {
    // Local variables
    int amtNeedEstMax; // r28
    class BlockHeader * head; // r0
    char * userData; // r28

    {
        // Range: 0x801FC8DC -> 0x801FC960
        // Local variables
        int amtSpaceAvail; // r5
        int idxSpaceAvail; // r4

        {
            // Range: 0x801FC8DC -> 0x801FC8DC
            // Local variables
            int amtPostSpace; // r5
        }
    }
}
// signature: System::CommChannel::WriteDeadSpace(int, int)
// Range: 0x801FC990 -> 0x801FC9FC
void System::CommChannel::WriteDeadSpace(class CommChannel * this /* r30 */, int amtDeadSpace /* r31 */) {
    // Local variables
    char * deadSpace; // r6

    {
        // Range: 0x801FC9C4 -> 0x801FC9DC
        // Local variables
        class BlockHeader * head; // r0
    }
}
// signature: System::CommChannel::CreateEntry(int, int, int)
// Range: 0x801FCA00 -> 0x801FCA38
class BlockHeader * System::CommChannel::CreateEntry() {
    // Local variables
    char * entry; // r3
    class BlockHeader * head; // r0
    long distToUser; // r0
}
// Range: 0x801FCA40 -> 0x801FCAB8
void System::CommChannel::Commit(class CommChannel * this /* r31 */) {
}
// Range: 0x801FCAC0 -> 0x801FCBF0
char * System::CommChannel::Receive(class CommChannel * this /* r29 */, int * amount /* r30 */, bool waitForMessage /* r31 */) {
    // Local variables
    class BlockHeader * head; // r27

    {
        // Range: 0x801FCAEC -> 0x801FCBB4
        // Local variables
        char * msgStart; // r0
        int distToEnd; // r6
    }
    {
        // Range: 0x801FCBBC -> 0x801FCBD8
        // Local variables
        char * msgUser; // r0
    }
}
// Range: 0x801FCBF0 -> 0x801FCC84
void System::CommChannel::Acknowledge(class CommChannel * this /* r31 */) {
    {
        // Range: 0x801FCC18 -> 0x801FCC54
        // Local variables
        class BlockHeader * head; // r6
    }
}
// signature: System::Thread::Create(const char *, int, int, int, int, System::ThreadPriority)
// Range: 0x801FCC90 -> 0x801FCD64
void System::Thread::Create(class Thread * this /* r29 */, int stackSize /* r30 */, enum ThreadPriority priority /* r31 */) {
    // References
    // -> long priorityMap[7];
}
// Range: 0x801FCD70 -> 0x801FCDD4
void System::Thread::Destroy(class Thread * this /* r31 */) {
}
// signature: System::Thread::Start(System::Thread::Runnable *)
// Range: 0x801FCDE0 -> 0x801FCDEC
void System::Thread::Start() {
}
// Range: 0x801FCDF0 -> 0x801FCDF8
void System::Thread::WaitForStop() {
}
// Range: 0x801FCE00 -> 0x801FCE64
void System::Thread::RunningStop(class Thread * this /* r31 */) {
}
// signature: System::Thread::RunCallback(void *)
// Range: 0x801FCE70 -> 0x801FCEEC
void * System::Thread::RunCallback() {
    // Local variables
    class Thread * thread; // r31
}
