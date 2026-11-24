/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Scaleform\MemoryFile.cpp
*/
char PLACEHOLDER_URL[1]; // size: 0x1, address: 0x8069470C
// Range: 0x801F2070 -> 0x801F2130
void * Scaleform::FileOpener::FileOpener(class FileOpener * this /* r29 */) {
    // References
    // -> struct {} __vt__Q29Scaleform10FileOpener;
}
// Range: 0x801F21D0 -> 0x801F2290
void * Scaleform::FileOpener::~FileOpener(class FileOpener * this /* r26 */) {
    // Local variables
    class NodeType * filePool; // r0
    int size; // r28

    // References
    // -> struct {} __vt__Q29Scaleform10FileOpener;
}
// signature: Scaleform::FileOpener::AddMemFile(Scaleform::GSFMemoryFile *)
// Range: 0x801F2290 -> 0x801F22F8
void Scaleform::FileOpener::AddMemFile(class FileOpener * this /* r31 */) {
}
// Range: 0x801F2380 -> 0x801F245C
void Scaleform::FileOpener::RemoveFile(class FileOpener * this /* r27 */, char * purl /* r28 */) {
    // Local variables
    class GPtr curFile; // r1+0x8
    char * filename; // r0
}
// signature: Scaleform::FileOpener::OpenFile(const char *, int, int)
// Range: 0x801F2460 -> 0x801F25C0
class GFile * Scaleform::FileOpener::OpenFile(char * purl /* r27 */) {
    // Local variables
    class GSFMemoryFile * curFile; // r28
    class GSFMemoryFile * curFilePtr; // r0
    char * filename; // r0
    int urlLen; // r0

    // References
    // -> struct {} __vt__Q29Scaleform18GTextureMemoryFile;
    // -> class GMemoryHeap * pGlobalHeap;
}
