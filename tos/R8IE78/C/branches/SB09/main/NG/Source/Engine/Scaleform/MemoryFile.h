/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Scaleform\MemoryFile.h
*/
// Range: 0x801F25C0 -> 0x801F2684
void * Scaleform::GSFMemoryFile::GSFMemoryFile(class GSFMemoryFile * this /* r28 */, class GSFMemoryFile * mf /* r29 */) {
    // References
    // -> struct {} __vt__Q29Scaleform13GSFMemoryFile;
}
// Range: 0x801F2770 -> 0x801F27FC
void * Scaleform::GSFMemoryFile::~GSFMemoryFile(class GSFMemoryFile * this /* r29 */) {
    // References
    // -> struct {} __vt__Q29Scaleform13GSFMemoryFile;
}
// Range: 0x8020A3E0 -> 0x8020A3EC
bool Scaleform::GSFMemoryFile::IsValid() {
}
// Range: 0x8020A3D0 -> 0x8020A3DC
long long Scaleform::GSFMemoryFile::LTell() {
}
// Range: 0x8020A3C0 -> 0x8020A3CC
long long Scaleform::GSFMemoryFile::LGetLength() {
}
// signature: Scaleform::GSFMemoryFile::Read(unsigned char *, int)
// Range: 0x8020A550 -> 0x8020A5BC
int Scaleform::GSFMemoryFile::Read(class GSFMemoryFile * this /* r30 */) {
    // Local variables
    unsigned int actualSize; // r31
}
// signature: Scaleform::GSFMemoryFile::SkipBytes(int)
// Range: 0x8020A390 -> 0x8020A3BC
int Scaleform::GSFMemoryFile::SkipBytes(class GSFMemoryFile * this /* r6 */) {
}
// Range: 0x8020A380 -> 0x8020A390
int Scaleform::GSFMemoryFile::BytesAvailable() {
}
// signature: Scaleform::GSFMemoryFile::Seek(int, int)
// Range: 0x8020A300 -> 0x8020A37C
int Scaleform::GSFMemoryFile::Seek() {
}
// signature: Scaleform::GSFMemoryFile::LSeek(long long, int)
// Range: 0x8020A2C0 -> 0x8020A2FC
long long Scaleform::GSFMemoryFile::LSeek() {
}
// signature: Scaleform::GSFMemoryFile::ChangeSize(int)
// Range: 0x8020A520 -> 0x8020A54C
bool Scaleform::GSFMemoryFile::ChangeSize() {
}
// signature: Scaleform::GSFMemoryFile::setValid(bool)
// Range: 0x801F2730 -> 0x801F276C
void Scaleform::GSFMemoryFile::setValid() {
}
// Range: 0x8020A2A0 -> 0x8020A2B4
bool Scaleform::GSFMemoryFile::Close() {
}
// Range: 0x8020A4D0 -> 0x8020A520
void * Scaleform::GTextureMemoryFile::~GTextureMemoryFile(class GTextureMemoryFile * this /* r30 */) {
}
// signature: Scaleform::GTextureMemoryFile::Read(unsigned char *, int)
// Range: 0x8020A420 -> 0x8020A4C8
int Scaleform::GTextureMemoryFile::Read() {
    // Local variables
    int actualSize; // r8
    int curIndex; // r0

    {
        // Range: 0x8020A480 -> 0x8020A4B4
        // Local variables
        int i; // r9
    }
}
// signature: Scaleform::GTextureMemoryFile::ChangeSize(int)
// Range: 0x8020A3F0 -> 0x8020A420
bool Scaleform::GTextureMemoryFile::ChangeSize() {
}
// signature: Scaleform::FileOpener::GetFileModifyTime(const char *)
// Range: 0x8020A290 -> 0x8020A29C
long long Scaleform::FileOpener::GetFileModifyTime() {
}
