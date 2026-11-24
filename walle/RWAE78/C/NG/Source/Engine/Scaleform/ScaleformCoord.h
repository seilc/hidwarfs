/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Scaleform\ScaleformCoord.h
*/
static char * PLATFORM_NAME; // size: 0x4, address: 0x806D666C
// Range: 0x802C4504 -> 0x802C450C
unsigned int Scaleform::CustomTranslator::GetCaps() const {
}
// Range: 0x8029B3D4 -> 0x8029B7AC
void * Scaleform::GSFMemoryFile::~GSFMemoryFile(class GSFMemoryFile * this /* r28 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> struct {} __vt__Q29Scaleform13GSFMemoryFile;
}
// Range: 0x8029B01C -> 0x8029B024
char * Scaleform::GSFMemoryFile::GetFilePath() {
}
// Range: 0x802C3E18 -> 0x802C3E24
bool Scaleform::GSFMemoryFile::IsValid() {
}
// Range: 0x802C3E10 -> 0x802C3E18
bool Scaleform::GSFMemoryFile::IsWritable() {
}
// Range: 0x802C3E08 -> 0x802C3E10
int Scaleform::GSFMemoryFile::Tell() {
}
// Range: 0x802C3DFC -> 0x802C3E08
long long Scaleform::GSFMemoryFile::LTell() {
}
// Range: 0x802C3DF4 -> 0x802C3DFC
int Scaleform::GSFMemoryFile::GetLength() {
}
// Range: 0x802C3DE8 -> 0x802C3DF4
long long Scaleform::GSFMemoryFile::LGetLength() {
}
// Range: 0x802C3DE0 -> 0x802C3DE8
int Scaleform::GSFMemoryFile::GetErrorCode() {
}
// signature: Scaleform::GSFMemoryFile::Write(const unsigned char *, int)
// Range: 0x802C3DD8 -> 0x802C3DE0
int Scaleform::GSFMemoryFile::Write() {
}
// signature: Scaleform::GSFMemoryFile::Read(unsigned char *, int)
// Range: 0x802C4490 -> 0x802C4504
int Scaleform::GSFMemoryFile::Read(class GSFMemoryFile * this /* r30 */) {
    // Local variables
    unsigned int actualSize; // r31
}
// signature: Scaleform::GSFMemoryFile::SkipBytes(int)
// Range: 0x802C3DAC -> 0x802C3DD8
int Scaleform::GSFMemoryFile::SkipBytes(class GSFMemoryFile * this /* r5 */) {
}
// Range: 0x802C3D9C -> 0x802C3DAC
int Scaleform::GSFMemoryFile::BytesAvailable() {
}
// Range: 0x802C3D94 -> 0x802C3D9C
bool Scaleform::GSFMemoryFile::Flush() {
}
// signature: Scaleform::GSFMemoryFile::Seek(int, int)
// Range: 0x802C3D18 -> 0x802C3D94
int Scaleform::GSFMemoryFile::Seek() {
}
// signature: Scaleform::GSFMemoryFile::LSeek(long long, int)
// Range: 0x802C3CDC -> 0x802C3D18
long long Scaleform::GSFMemoryFile::LSeek() {
}
// signature: Scaleform::GSFMemoryFile::ChangeSize(int)
// Range: 0x802C4464 -> 0x802C4490
bool Scaleform::GSFMemoryFile::ChangeSize() {
}
// signature: Scaleform::GSFMemoryFile::CopyFromStream(GFile *, int)
// Range: 0x802C3CD4 -> 0x802C3CDC
int Scaleform::GSFMemoryFile::CopyFromStream() {
}
// signature: Scaleform::GSFMemoryFile::setValid(bool)
// Range: 0x8029B398 -> 0x8029B3D4
void Scaleform::GSFMemoryFile::setValid() {
}
// Range: 0x802C3CC0 -> 0x802C3CD4
bool Scaleform::GSFMemoryFile::Close() {
}
// Range: 0x802C4088 -> 0x802C4464
void * Scaleform::GTextureMemoryFile::~GTextureMemoryFile(class GTextureMemoryFile * this /* r28 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> struct {} __vt__Q29Scaleform13GSFMemoryFile;
}
// signature: Scaleform::GTextureMemoryFile::Read(unsigned char *, int)
// Range: 0x802C3E54 -> 0x802C4088
int Scaleform::GTextureMemoryFile::Read() {
    // Local variables
    int actualSize; // r6
    int curIndex; // r0

    {
        // Range: 0x802C3EC0 -> 0x802C3EC4
        // Local variables
        int i; // r5
    }
}
// signature: Scaleform::GTextureMemoryFile::ChangeSize(int)
// Range: 0x802C3E24 -> 0x802C3E54
bool Scaleform::GTextureMemoryFile::ChangeSize() {
}
