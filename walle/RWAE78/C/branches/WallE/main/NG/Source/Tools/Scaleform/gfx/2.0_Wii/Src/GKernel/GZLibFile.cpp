/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GKernel\GZLibFile.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805D5590 -> 0x805D6458
*/
// total size: 0x14
class GZLibFile : public GFile {
    // Members
    class GZLibFileImpl * pImpl; // offset 0x10, size 0x4
};
// total size: 0x1458
class GZLibFileImpl : public GNewOverrideBase {
    // Members
    class GPtr pIn; // offset 0x0, size 0x4
    class z_stream_s ZStream; // offset 0x4, size 0x38
    int InitialStreamPos; // offset 0x3C, size 0x4
    int LogicalStreamPos; // offset 0x40, size 0x4
    bool AtEofFlag; // offset 0x44, size 0x1
    int ErrorCode; // offset 0x48, size 0x4
    int UserPos; // offset 0x4C, size 0x4
    int BacktrackTail; // offset 0x50, size 0x4
    int BacktrackSize; // offset 0x54, size 0x4
    unsigned char BacktrackBuffer[1024]; // offset 0x58, size 0x400
    unsigned char DataBuffer[4096]; // offset 0x458, size 0x1000
};
struct {} __vt__9GZLibFile; // size: 0x54, address: 0x8073FBD0
// Range: 0x805D5590 -> 0x805D56E4
void * GZLibFile::GZLibFile(class GZLibFile * this /* r28 */, class GFile * psourceFile /* r29 */) {
    // References
    // -> struct {} __vt__9GZLibFile;
}
// Range: 0x805D56F0 -> 0x805D5800
void * GZLibFile::~GZLibFile(class GZLibFile * this /* r29 */) {
    // References
    // -> struct {} __vt__9GZLibFile;
}
// Range: 0x805D5800 -> 0x805D5828
char * GZLibFile::GetFilePath() {
}
// Range: 0x805D5830 -> 0x805D5844
bool GZLibFile::IsValid() {
}
// Range: 0x805D5850 -> 0x805D586C
int GZLibFile::Tell() {
}
// Range: 0x805D5870 -> 0x805D58A4
long long GZLibFile::LTell() {
}
// Range: 0x805D58B0 -> 0x805D5950
int GZLibFile::GetLength(class GZLibFile * this /* r29 */) {
    // Local variables
    int oldPos; // r30
}
// Range: 0x805D5950 -> 0x805D5984
long long GZLibFile::LGetLength() {
}
// Range: 0x805D5990 -> 0x805D59AC
int GZLibFile::GetErrorCode() {
}
// signature: GZLibFile::Write(const unsigned char *, int)
// Range: 0x805D59B0 -> 0x805D59B8
int GZLibFile::Write() {
}
// Range: 0x805D59C0 -> 0x805D5C30
int GZLibFile::Read(unsigned char * pbuffer /* r28 */, int numBytes /* r29 */) {
}
// signature: GZLibFile::SkipBytes(int)
// Range: 0x805D5C30 -> 0x805D5C44
int GZLibFile::SkipBytes() {
}
// Range: 0x805D5C50 -> 0x805D5CF0
int GZLibFile::BytesAvailable(class GZLibFile * this /* r29 */) {
    // Local variables
    int oldPos; // r30
}
// Range: 0x805D5CF0 -> 0x805D5CF8
bool GZLibFile::Flush() {
}
// signature: GZLibFile::Seek(int, int)
// Range: 0x805D5D00 -> 0x805D62E8
int GZLibFile::Seek(class GZLibFile * this /* r23 */, int offset /* r24 */) {
}
// signature: GZLibFile::LSeek(long long, int)
// Range: 0x805D62F0 -> 0x805D632C
long long GZLibFile::LSeek() {
}
// signature: GZLibFile::ChangeSize(int)
// Range: 0x805D6330 -> 0x805D6338
bool GZLibFile::ChangeSize() {
}
// signature: GZLibFile::CopyFromStream(GFile *, int)
// Range: 0x805D6340 -> 0x805D6348
int GZLibFile::CopyFromStream() {
}
// Range: 0x805D6350 -> 0x805D6450
bool GZLibFile::Close(class GZLibFile * this /* r29 */) {
    // Local variables
    int err; // r0
}
