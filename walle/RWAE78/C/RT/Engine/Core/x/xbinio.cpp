/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xbinio.cpp
*/
static unsigned int g_loadlock; // size: 0x4, address: 0x806F22B0
static class st_FILELOADINFO g_loadinst[8]; // size: 0x340, address: 0x80752AD8
static class tag_xFile g_xfload[8]; // size: 0x8A0, address: 0x80752E18
static class st_BINIO_XTRADATA g_xtraload[8]; // size: 0x1E0, address: 0x807536B8
static class st_BINIO_XTRADATA * g_async_context; // size: 0x4, address: 0x80753898
// Range: 0x80017680 -> 0x800178E0
class st_FILELOADINFO * xBinioLoadCreate(char * filename /* r28 */, int fileflags /* r29 */) {
    // Local variables
    class st_FILELOADINFO * fli; // r31
    class tag_xFile * tmp_fp; // r0
    int i; // r7
    int uselock; // r30

    // References
    // -> static class st_BINIO_XTRADATA g_xtraload[8];
    // -> static class st_FILELOADINFO g_loadinst[8];
    // -> static unsigned int g_loadlock;
}
// signature: LoadDestroy(st_FILELOADINFO *)
// Range: 0x800178E0 -> 0x80017958
static void LoadDestroy() {
    // Local variables
    unsigned int lockid; // r31

    // References
    // -> static unsigned int g_loadlock;
}
// signature: SkipBytes(st_FILELOADINFO *, int)
// Range: 0x80017960 -> 0x800179D0
static int SkipBytes() {
}
// signature: ReadSeek(st_FILELOADINFO *, int)
// Range: 0x800179D0 -> 0x80017A28
static int ReadSeek() {
}
// signature: SetBuffer(st_FILELOADINFO *, char *, int)
// Range: 0x80017A30 -> 0x80017A58
static void SetBuffer() {
    // Local variables
    class st_BINIO_XTRADATA * xtra; // r3
}
// signature: DiscardBuffer(st_FILELOADINFO *)
// Range: 0x80017A60 -> 0x80017A88
static void DiscardBuffer() {
}
// signature: ReadRaw(st_FILELOADINFO *, void *, int, int)
// Range: 0x80017A90 -> 0x80017B50
static int ReadRaw(class st_FILELOADINFO * fli /* r29 */, int size /* r30 */) {
    // Local variables
    class tag_xFile * file; // r8
    int amt; // r31
    int n; // r0
}
// signature: ReadBytes(st_FILELOADINFO *, char *, int)
// Range: 0x80017B50 -> 0x80017B5C
static int ReadBytes() {
    // Local variables
    int act; // r0
}
// signature: ReadMShorts(st_FILELOADINFO *, short *, int)
// Range: 0x80017B60 -> 0x80017B6C
static int ReadMShorts() {
    // Local variables
    int act; // r0
}
// signature: ReadMLongs(st_FILELOADINFO *, int *, int)
// Range: 0x80017B70 -> 0x80017B7C
static int ReadMLongs() {
    // Local variables
    int act; // r0
}
// signature: ReadMFloats(st_FILELOADINFO *, float *, int)
// Range: 0x80017B80 -> 0x80017B8C
static int ReadMFloats() {
    // Local variables
    int act; // r0
}
// signature: ReadMDoubles(st_FILELOADINFO *, double *, int)
// Range: 0x80017B90 -> 0x80017B9C
static int ReadMDoubles() {
    // Local variables
    int act; // r0
}
// signature: ReadIShorts(st_FILELOADINFO *, short *, int)
// Range: 0x80017BA0 -> 0x80017C9C
static int ReadIShorts(short * data /* r31 */) {
    // Local variables
    int act; // r3
}
// signature: ReadILongs(st_FILELOADINFO *, int *, int)
// Range: 0x80017CA0 -> 0x80017DA8
static int ReadILongs(int * data /* r31 */) {
    // Local variables
    int act; // r3
}
// signature: ReadIFloats(st_FILELOADINFO *, float *, int)
// Range: 0x80017DB0 -> 0x80017EB8
static int ReadIFloats(float * data /* r31 */) {
    // Local variables
    int act; // r3
}
// signature: ReadIDoubles(st_FILELOADINFO *, double *, int)
// Range: 0x80017EC0 -> 0x80017F10
static int ReadIDoubles(double * data /* r30 */) {
    // Local variables
    int act; // r31
}
// signature: AsyncMRead(st_FILELOADINFO *, int, char *, int, int)
// Range: 0x80017F10 -> 0x80017F18
static int AsyncMRead() {
}
// signature: AsyncIRead(st_FILELOADINFO *, int, char *, int, int)
// Range: 0x80017F20 -> 0x80017F28
static int AsyncIRead() {
}
// signature: AsyncReadStatus(st_FILELOADINFO *)
// Range: 0x80017F30 -> 0x80017F34
static enum en_BIO_ASYNC_ERRCODES AsyncReadStatus() {
}
// signature: Swap8(char *, int)
// Range: 0x80017F40 -> 0x80018034
static void Swap8() {
    // Local variables
    char t; // r5
}
// signature: BFD_open(const char *, const char *, unsigned int, int, void *, int)
// Range: 0x80018040 -> 0x800180F0
static class tag_xFile * BFD_open(char * filename /* r27 */, char * mode /* r28 */, unsigned int lockid /* r29 */, void * xtradata /* r30 */) {
    // Local variables
    class tag_xFile * bffp; // r31
    class st_BINIO_XTRADATA * xtra; // r0

    // References
    // -> static class tag_xFile g_xfload[8];
}
// signature: BFD_read(void *, int, int, tag_xFile *, void *)
// Range: 0x800180F0 -> 0x8001825C
static int BFD_read(void * data /* r24 */, int elesize /* r25 */, void * xtradata /* r26 */) {
    // Local variables
    class st_BINIO_XTRADATA * xtra; // r0
    char * dest; // r0
    int readbeg; // r6
    int refill; // r31
    int remain; // r30
    int actual; // r29
    unsigned int safety; // r28
    unsigned int numBytes; // r27
}
// signature: BFD_AsyncRead(st_FILELOADINFO *, int, void *, int, int, int)
// Range: 0x80018260 -> 0x80018334
static int BFD_AsyncRead() {
    // Local variables
    class tag_xFile * file; // r8
    class st_BINIO_XTRADATA * xtra; // r29
    unsigned int rdsec; // r3
    int amt; // r0

    // References
    // -> static class st_BINIO_XTRADATA * g_async_context;
}
// signature: BFD_AsyncReadStatus(st_FILELOADINFO *)
// Range: 0x80018340 -> 0x800183CC
static enum en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus() {
    // Local variables
    enum en_BIO_ASYNC_ERRCODES status; // r3
    class st_BINIO_XTRADATA * xtra; // r5
    enum XFILE_READSECTOR_STATUS xrdstat; // r0

    // References
    // -> static class st_BINIO_XTRADATA * g_async_context;
}
