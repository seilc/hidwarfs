/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GKernel\GFile_sys.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805CC590 -> 0x805CE9F0
*/
extern int errno; // size: 0x4
// total size: 0x28
class GFILEFile : public GFile {
    // Members
    char * pFileName; // offset 0x10, size 0x4
    bool Opened; // offset 0x14, size 0x1
    class _FILE * fs; // offset 0x18, size 0x4
    int OpenFlags; // offset 0x1C, size 0x4
    int ErrorCode; // offset 0x20, size 0x4
    int LastOp; // offset 0x24, size 0x4
};
// total size: 0x50
class _FILE {
    // Members
    unsigned long handle; // offset 0x0, size 0x4
    class __file_modes mode; // offset 0x4, size 0x4
    class __file_state state; // offset 0x8, size 0x4
    unsigned char is_dynamically_allocated; // offset 0xC, size 0x1
    unsigned char char_buffer; // offset 0xD, size 0x1
    unsigned char char_buffer_overflow; // offset 0xE, size 0x1
    unsigned char ungetc_buffer[2]; // offset 0xF, size 0x2
    wchar_t ungetwc_buffer[2]; // offset 0x12, size 0x4
    unsigned long position; // offset 0x18, size 0x4
    unsigned char * buffer; // offset 0x1C, size 0x4
    unsigned long buffer_size; // offset 0x20, size 0x4
    unsigned char * buffer_ptr; // offset 0x24, size 0x4
    unsigned long buffer_len; // offset 0x28, size 0x4
    unsigned long buffer_alignment; // offset 0x2C, size 0x4
    unsigned long saved_buffer_len; // offset 0x30, size 0x4
    unsigned long buffer_pos; // offset 0x34, size 0x4
    int (* position_proc)(unsigned long file, unsigned long * position, int mode, void * ref_con); // offset 0x38, size 0x4
    int (* read_proc)(unsigned long file, unsigned char * buff, unsigned long * count, void * ref_con); // offset 0x3C, size 0x4
    int (* write_proc)(unsigned long file, unsigned char * buff, unsigned long * count, void * ref_con); // offset 0x40, size 0x4
    int (* close_proc)(unsigned long file); // offset 0x44, size 0x4
    void * ref_con; // offset 0x48, size 0x4
    class _FILE * next_file_struct; // offset 0x4C, size 0x4
};
// total size: 0x4
class __file_modes {
    // Members
    unsigned int open_mode : 2; // offset 0x0, size 0x4, bit offset 0
    unsigned int io_mode : 3; // offset 0x0, size 0x4, bit offset 2
    unsigned int buffer_mode : 2; // offset 0x0, size 0x4, bit offset 5
    unsigned int file_kind : 3; // offset 0x0, size 0x4, bit offset 7
    unsigned int file_orientation : 2; // offset 0x0, size 0x4, bit offset 10
    unsigned int binary_io : 1; // offset 0x0, size 0x4, bit offset 12
};
// total size: 0x4
class __file_state {
    // Members
    unsigned int io_state : 3; // offset 0x0, size 0x4, bit offset 0
    unsigned int free_buffer : 1; // offset 0x0, size 0x4, bit offset 3
    unsigned char eof; // offset 0x1, size 0x1
    unsigned char error; // offset 0x2, size 0x1
};
// total size: 0x30
class GBufferedFile : public GDelegatedFile {
    // Members
    unsigned char * pBuffer; // offset 0x14, size 0x4
    enum BufferModeType BufferMode; // offset 0x18, size 0x4
    unsigned int Pos; // offset 0x1C, size 0x4
    unsigned int DataSize; // offset 0x20, size 0x4
    unsigned long long FilePos; // offset 0x28, size 0x8
};
enum BufferModeType {
    NoBuffer = 0,
    ReadBuffer = 1,
    WriteBuffer = 2,
};
// total size: 0x10
class GUnopenedFile : public GFile {};
struct {} __vt__9GFILEFile; // size: 0x54, address: 0x8073F8B8
struct {} __vt__13GUnopenedFile; // size: 0x58, address: 0x8073F910
struct {} __vt__8GSysFile; // size: 0x54, address: 0x8073F968
struct {} __vt__13GBufferedFile; // size: 0x54, address: 0x8073F9BC
struct {} __vt__14GDelegatedFile; // size: 0x54, address: 0x8073FA10
// Range: 0x805CE7C0 -> 0x805CE820
void * GUnopenedFile::~GUnopenedFile(class GUnopenedFile * this /* r30 */) {
}
// Range: 0x805CE820 -> 0x805CE828
char * GUnopenedFile::GetFilePath() {
}
// Range: 0x805CE830 -> 0x805CE838
bool GUnopenedFile::IsValid() {
}
// Range: 0x805CE840 -> 0x805CE848
bool GUnopenedFile::IsWritable() {
}
// Range: 0x805CE850 -> 0x805CE858
int GUnopenedFile::Tell() {
}
// Range: 0x805CE860 -> 0x805CE86C
long long GUnopenedFile::LTell() {
}
// Range: 0x805CE870 -> 0x805CE878
int GUnopenedFile::GetLength() {
}
// Range: 0x805CE880 -> 0x805CE88C
long long GUnopenedFile::LGetLength() {
}
// Range: 0x805CE890 -> 0x805CE898
int GUnopenedFile::GetErrorCode() {
}
// signature: GUnopenedFile::Write(const unsigned char *, int)
// Range: 0x805CE8A0 -> 0x805CE8A8
int GUnopenedFile::Write() {
}
// signature: GUnopenedFile::Read(unsigned char *, int)
// Range: 0x805CE8B0 -> 0x805CE8B8
int GUnopenedFile::Read() {
}
// signature: GUnopenedFile::SkipBytes(int)
// Range: 0x805CE8C0 -> 0x805CE8C8
int GUnopenedFile::SkipBytes() {
}
// Range: 0x805CE8D0 -> 0x805CE8D8
int GUnopenedFile::BytesAvailable() {
}
// Range: 0x805CE8E0 -> 0x805CE8E8
bool GUnopenedFile::Flush() {
}
// signature: GUnopenedFile::Seek(int, int)
// Range: 0x805CE8F0 -> 0x805CE8F8
int GUnopenedFile::Seek() {
}
// signature: GUnopenedFile::LSeek(long long, int)
// Range: 0x805CE900 -> 0x805CE90C
long long GUnopenedFile::LSeek() {
}
// signature: GUnopenedFile::ChangeSize(int)
// Range: 0x805CE910 -> 0x805CE918
bool GUnopenedFile::ChangeSize() {
}
// signature: GUnopenedFile::CopyFromStream(GFile *, int)
// Range: 0x805CE920 -> 0x805CE928
int GUnopenedFile::CopyFromStream() {
}
// Range: 0x805CE930 -> 0x805CE938
bool GUnopenedFile::Close() {
}
// Range: 0x805CE940 -> 0x805CE948
bool GUnopenedFile::CloseCancel() {
}
// Range: 0x805CE950 -> 0x805CE9F0
void * GFILEFile::~GFILEFile(class GFILEFile * this /* r30 */) {
    // References
    // -> struct {} __vt__9GFILEFile;
}
// signature: GFILEFile::GFILEFile(const char *, int, int)
// Range: 0x805CC590 -> 0x805CC6E8
void * GFILEFile::GFILEFile(class GFILEFile * this /* r31 */, char * pfileName /* r28 */, int flags /* r29 */) {
    // Local variables
    int nameLength; // r0
    char * omode; // r4

    // References
    // -> int errno;
    // -> struct {} __vt__9GFILEFile;
}
// Range: 0x805CC6F0 -> 0x805CC6F8
char * GFILEFile::GetFilePath() {
}
// Range: 0x805CC700 -> 0x805CC708
bool GFILEFile::IsValid() {
}
// Range: 0x805CC710 -> 0x805CC770
bool GFILEFile::IsWritable(class GFILEFile * this /* r30 */) {
}
// Range: 0x805CC770 -> 0x805CC7E8
int GFILEFile::Tell(class GFILEFile * this /* r31 */) {
    // Local variables
    int pos; // r3

    // References
    // -> int errno;
}
// Range: 0x805CC7F0 -> 0x805CC870
long long GFILEFile::LTell(class GFILEFile * this /* r31 */) {
    // Local variables
    int pos; // r4

    // References
    // -> int errno;
}
// Range: 0x805CC870 -> 0x805CC920
int GFILEFile::GetLength(class GFILEFile * this /* r29 */) {
    // Local variables
    int pos; // r31

    {
        // Range: 0x805CC89C -> 0x805CC900
        // Local variables
        int size; // r30
    }
}
// Range: 0x805CC920 -> 0x805CC954
long long GFILEFile::LGetLength() {
}
// Range: 0x805CC960 -> 0x805CC968
int GFILEFile::GetErrorCode() {
}
// Range: 0x805CC970 -> 0x805CCA30
int GFILEFile::Write(class GFILEFile * this /* r29 */, unsigned char * pbuffer /* r30 */, int numBytes /* r31 */) {
    // Local variables
    int written; // r3

    // References
    // -> int errno;
}
// Range: 0x805CCA30 -> 0x805CCAF0
int GFILEFile::Read(class GFILEFile * this /* r29 */, unsigned char * pbuffer /* r30 */, int numBytes /* r31 */) {
    // Local variables
    int read; // r3

    // References
    // -> int errno;
}
// Range: 0x805CCAF0 -> 0x805CCB98
int GFILEFile::SkipBytes(class GFILEFile * this /* r30 */, int numBytes /* r29 */) {
    // Local variables
    long long pos; // r0:r0
    long long newPos; // r0:r0
}
// Range: 0x805CCBA0 -> 0x805CCC80
int GFILEFile::BytesAvailable(class GFILEFile * this /* r29 */) {
    // Local variables
    long long pos; // r0:r0
    long long endPos; // r0:r0

    // References
    // -> int errno;
}
// Range: 0x805CCC80 -> 0x805CCCAC
bool GFILEFile::Flush() {
}
// signature: GFILEFile::Seek(int, int)
// Range: 0x805CCCB0 -> 0x805CCD90
int GFILEFile::Seek(class GFILEFile * this /* r29 */, int offset /* r30 */) {
    // Local variables
    int newOrigin; // r31
}
// signature: GFILEFile::LSeek(long long, int)
// Range: 0x805CCD90 -> 0x805CCDCC
long long GFILEFile::LSeek() {
}
// signature: GFILEFile::ChangeSize(int)
// Range: 0x805CCDD0 -> 0x805CCDE0
bool GFILEFile::ChangeSize() {
}
// Range: 0x805CCDE0 -> 0x805CCEA4
int GFILEFile::CopyFromStream(class GFILEFile * this /* r27 */, class GFile * pstream /* r28 */, int byteSize /* r29 */) {
    // Local variables
    unsigned char buff[16384]; // r1+0x8
    int count; // r30
    int szRead; // r5
    int szWritten; // r3
}
// Range: 0x805CCEB0 -> 0x805CCF48
bool GFILEFile::Close(class GFILEFile * this /* r31 */) {
    // Local variables
    bool closeRet; // r0

    // References
    // -> int errno;
}
// Range: 0x805CCFE0 -> 0x805CD08C
void * GBufferedFile::GBufferedFile(class GBufferedFile * this /* r30 */, class GFile * pfile /* r31 */) {
    // References
    // -> struct {} __vt__13GBufferedFile;
    // -> struct {} __vt__14GDelegatedFile;
}
// Range: 0x805CD090 -> 0x805CD154
void * GBufferedFile::~GBufferedFile(class GBufferedFile * this /* r30 */) {
    // References
    // -> struct {} __vt__13GBufferedFile;
}
// Range: 0x805CD160 -> 0x805CD228
void GBufferedFile::FlushBuffer(class GBufferedFile * this /* r31 */) {
}
// Range: 0x805CD230 -> 0x805CD2D8
int GBufferedFile::Tell(class GBufferedFile * this /* r31 */) {
    // Local variables
    int pos; // r3
}
// Range: 0x805CD2E0 -> 0x805CD3A8
long long GBufferedFile::LTell(class GBufferedFile * this /* r31 */) {
    // Local variables
    long long pos; // r3:r4
}
// Range: 0x805CD3B0 -> 0x805CD438
int GBufferedFile::GetLength(class GBufferedFile * this /* r30 */) {
    // Local variables
    int len; // r31

    {
        // Range: 0x805CD3DC -> 0x805CD41C
        // Local variables
        int currPos; // r0
    }
}
// Range: 0x805CD440 -> 0x805CD504
long long GBufferedFile::LGetLength(class GBufferedFile * this /* r29 */) {
    // Local variables
    long long len; // r31:r30

    {
        // Range: 0x805CD470 -> 0x805CD4E0
        // Local variables
        long long currPos; // r5:r6
    }
}
// Range: 0x805CD510 -> 0x805CD768
int GBufferedFile::Write(class GBufferedFile * this /* r29 */, unsigned char * psourceBuffer /* r30 */, int numBytes /* r31 */) {
    // Local variables
    int sz; // r3

    {
        // Range: 0x805CD694 -> 0x805CD6E0
        // Local variables
        int sz; // r3
    }
}
// Range: 0x805CD770 -> 0x805CD988
int GBufferedFile::Read(class GBufferedFile * this /* r28 */, unsigned char * pdestBuffer /* r29 */, int numBytes /* r30 */) {
    // Local variables
    int sz; // r3

    {
        // Range: 0x805CD794 -> 0x805CD930
        // Local variables
        int totalRead; // r31

        {
            // Range: 0x805CD818 -> 0x805CD920
            // Local variables
            int readBytes; // r0
        }
    }
}
// signature: GBufferedFile::SkipBytes(int)
// Range: 0x805CD990 -> 0x805CDA50
int GBufferedFile::SkipBytes(class GBufferedFile * this /* r30 */) {
    // Local variables
    int skippedBytes; // r31
}
// Range: 0x805CDA50 -> 0x805CDAC8
int GBufferedFile::BytesAvailable(class GBufferedFile * this /* r31 */) {
    // Local variables
    int available; // r3
}
// Range: 0x805CDAD0 -> 0x805CDBAC
bool GBufferedFile::Flush(class GBufferedFile * this /* r31 */) {
}
// Range: 0x805CDBB0 -> 0x805CDD64
int GBufferedFile::Seek(class GBufferedFile * this /* r29 */, int offset /* r30 */, int origin /* r31 */) {
}
// Range: 0x805CDD70 -> 0x805CDF5C
long long GBufferedFile::LSeek(class GBufferedFile * this /* r28 */, long long offset /* r30:r29 */, int origin /* r31 */) {
}
// Range: 0x805CDF60 -> 0x805CE04C
bool GBufferedFile::ChangeSize(class GBufferedFile * this /* r30 */, int newSize /* r31 */) {
}
// Range: 0x805CE050 -> 0x805CE114
int GBufferedFile::CopyFromStream(class GBufferedFile * this /* r27 */, class GFile * pstream /* r28 */, int byteSize /* r29 */) {
    // Local variables
    unsigned char buff[16384]; // r1+0x8
    int count; // r30
    int szRead; // r5
    int szWritten; // r3
}
// Range: 0x805CE120 -> 0x805CE1BC
bool GBufferedFile::Close(class GBufferedFile * this /* r31 */) {
}
// Range: 0x805CE1C0 -> 0x805CE314
void * GSysFile::GSysFile(class GSysFile * this /* r31 */, char * ppath /* r27 */, int flags /* r28 */, int mode /* r29 */) {
    // References
    // -> struct {} __vt__13GUnopenedFile;
    // -> struct {} __vt__8GSysFile;
}
// signature: GSysFile::GetFileStat(GFileStat *, const char *)
// Range: 0x805CE320 -> 0x805CE328
bool GSysFile::GetFileStat() {
}
// Range: 0x805CE330 -> 0x805CE354
int GSysFile::GetErrorCode() {
}
// Range: 0x805CE360 -> 0x805CE3B4
bool GSysFile::IsValid() {
}
// Range: 0x805CE3C0 -> 0x805CE494
bool GSysFile::Close(class GSysFile * this /* r30 */) {
    // References
    // -> struct {} __vt__13GUnopenedFile;
}
