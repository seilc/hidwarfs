/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Scaleform\MemoryFile.cpp
*/
char PLACEHOLDER_URL[1]; // size: 0x1, address: 0x80789100
// Range: 0x803357C4 -> 0x80335DD4
void * Scaleform::FileOpener::FileOpener(class FileOpener * this /* r29 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> struct {} __vt__Q29Scaleform10FileOpener;
    // -> int GFx_Compile_with_GFC_BUILD_DEBUG;
    // -> struct {} __vt__8GFxState;
}
// Range: 0x80335EA4 -> 0x8033647C
void * Scaleform::FileOpener::~FileOpener(class FileOpener * this /* r27 */) {
    // Local variables
    int size; // r25

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> struct {} __vt__Q29Scaleform10FileOpener;
}
// Range: 0x8033647C -> 0x80336594
void Scaleform::FileOpener::AddMemFile(class FileOpener * this /* r30 */, class GSFMemoryFile * mf /* r31 */) {
}
// Range: 0x80336594 -> 0x803366D0
void Scaleform::FileOpener::RemoveFile(class FileOpener * this /* r27 */, char * purl /* r28 */) {
    // Local variables
    char * filename; // r0
}
// Range: 0x803366F0 -> 0x8033686C
class GFile * Scaleform::FileOpener::OpenFile(class FileOpener * this /* r30 */, char * purl /* r29 */) {
    // Local variables
    class Iterator iter; // r1+0x14
    class Iterator tailNode; // r1+0x10
    class GSFMemoryFile * curFile; // r30
    class GSFMemoryFile * curFilePtr; // r0
    char * filename; // r0
    int urlLen; // r0
}
// signature: Scaleform::FileOpener::SetSpam(bool)
// Range: 0x80338154 -> 0x8033815C
void Scaleform::FileOpener::SetSpam() {
}
