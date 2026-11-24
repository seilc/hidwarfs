/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\IO\File\MediaCommands.cpp
*/
int sizeNeed; // size: 0x4, address: 0x806936AC
// Range: 0x801E1030 -> 0x801E10BC
void IO::CmdQueue::Init(class CmdQueue * this /* r29 */, int channelSize /* r30 */) {
}
// Range: 0x801E10C0 -> 0x801E1110
void IO::CmdQueue::Done(class CmdQueue * this /* r31 */) {
}
// Range: 0x801E1110 -> 0x801E1154
class MediaCmd * IO::CmdQueue::CmdAcquire(enum enMediaCmdType cmdType /* r30 */, class MediaObject * owner /* r31 */) {
    // Local variables
    char * data; // r0
    class MediaCmd * entry; // r0
}
// signature: IO::CmdQueue::CmdCommit(IO::MediaCmd *)
// Range: 0x801E1160 -> 0x801E11B8
void IO::CmdQueue::CmdCommit(class CmdQueue * this /* r30 */) {
}
// signature: IO::CmdQueue::CmdReceive(bool)
// Range: 0x801E11C0 -> 0x801E11EC
class MediaCmd * IO::CmdQueue::CmdReceive() {
    // Local variables
    int amt; // r1+0x8
    char * msg; // r0
}
// signature: IO::MediaCmdOpen::FullyQualify(char *, int, const char *)
// Range: 0x801E11F0 -> 0x801E12C4
void IO::MediaCmdOpen::FullyQualify(char * fullName /* r29 */, int maxLen /* r30 */) {
    // Local variables
    class StartupConfig * cfg; // r31
    char delim; // r4
    char * strPtr; // reg65535

    // References
    // -> class StartupConfig * config;
}
