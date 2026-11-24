/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xhipio.cpp
*/
static unsigned int g_loadlock; // size: 0x4, address: 0x80755688
static class st_HIPLOADDATA g_hiploadinst[8]; // size: 0x540, address: 0x80755690
static class st_HIPLOADFUNCS g_map_HIPL_funcmap; // size: 0x34, address: 0x806F2A78
static class st_HIPSAVEFUNCS g_map_HIPS_funcmap; // size: 0x2C, address: 0x80755BD0
// Range: 0x800449D0 -> 0x80044BC0
static class st_HIPLOADDATA * HIPLCreate(char * filename /* r28 */, char * dblbuf /* r29 */, int bufsize /* r30 */, int fileflags /* r31 */) {
    // Local variables
    class st_HIPLOADDATA * lddata; // r27
    class st_FILELOADINFO * fli; // r0
    class st_HIPLOADBLOCK * tmp_blk; // r0
    int i; // r7
    int uselock; // r26

    // References
    // -> static class st_HIPLOADDATA g_hiploadinst[8];
    // -> static unsigned int g_loadlock;
}
// Range: 0x80044BC0 -> 0x80044C3C
static void HIPLDestroy(class st_HIPLOADDATA * lddata /* r30 */) {
    // Local variables
    int lockid; // r31

    // References
    // -> static unsigned int g_loadlock;
}
// signature: HIPLBaseSector(st_HIPLOADDATA *)
// Range: 0x80044C40 -> 0x80044C48
static unsigned int HIPLBaseSector() {
}
// Range: 0x80044C50 -> 0x80044D2C
static int HIPLSetBypass(class st_HIPLOADDATA * lddata /* r29 */, int enable /* r30 */, int use_async /* r31 */) {
}
// signature: HIPLSetSpot(st_HIPLOADDATA *, int)
// Range: 0x80044D30 -> 0x80044D54
static void HIPLSetSpot() {
}
// Range: 0x80044D60 -> 0x80044EBC
static unsigned int HIPLBlockEnter(class st_HIPLOADDATA * lddata /* r31 */) {
    // Local variables
    class st_HIPLOADBLOCK * top; // r0
    unsigned int cid; // r1+0xC
    int size; // r1+0x8
}
// Range: 0x80044EC0 -> 0x80044F38
static void HIPLBlockExit(class st_HIPLOADDATA * lddata /* r30 */) {
    // Local variables
    class st_HIPLOADBLOCK * top; // r0
}
// signature: HIPLBlockRead(st_HIPLOADDATA *, void *, int, int)
// Range: 0x80044F40 -> 0x8004509C
static int HIPLBlockRead(class st_HIPLOADDATA * lddata /* r29 */, int size /* r30 */) {
    // Local variables
    class st_HIPLOADBLOCK * top; // r31
    int got; // r8
    int left; // r7
    int head; // r9
}
// signature: HIPLBypassRead(st_HIPLOADDATA *, void *, int, int)
// Range: 0x800450A0 -> 0x800451A4
static int HIPLBypassRead(class st_HIPLOADDATA * lddata /* r30 */, int cnt /* r8 */, int size /* r31 */) {
    // Local variables
    int got; // r7
}
// Range: 0x800451B0 -> 0x8004526C
static enum en_READ_ASYNC_STATUS HIPLPollRead(class st_HIPLOADDATA * lddata /* r30 */) {
    // Local variables
    enum en_READ_ASYNC_STATUS rdstat; // r31
    enum en_BIO_ASYNC_ERRCODES pollstat; // r0
}
// signature: HIPLReadBytes(st_HIPLOADDATA *, char *, int)
// Range: 0x80045270 -> 0x8004528C
static int HIPLReadBytes() {
}
// signature: HIPLReadShorts(st_HIPLOADDATA *, short *, int)
// Range: 0x80045290 -> 0x800452D8
static int HIPLReadShorts() {
    // Local variables
    int got; // r0
}
// signature: HIPLReadLongs(st_HIPLOADDATA *, int *, int)
// Range: 0x800452E0 -> 0x80045324
static int HIPLReadLongs() {
    // Local variables
    int got; // r0
}
// signature: HIPLReadFloats(st_HIPLOADDATA *, float *, int)
// Range: 0x80045330 -> 0x80045374
static int HIPLReadFloats() {
    // Local variables
    int got; // r0
}
// Range: 0x80045380 -> 0x80045488
static int HIPLReadString(class st_HIPLOADDATA * lddata /* r28 */, char * buf /* r29 */) {
    // Local variables
    int n; // r30
    char pad; // r1+0x8
}
