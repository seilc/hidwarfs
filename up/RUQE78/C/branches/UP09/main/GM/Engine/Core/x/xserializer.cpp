/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xserializer.cpp
*/
static int g_serinit; // size: 0x4, address: 0x80812D7C
static class st_XSERIAL_DATA_PRIV g_xserdata; // size: 0x24, address: 0x80812D80
static int * g_initbitbuf; // size: 0x4, address: 0x80812DA4
static int g_tbl_onbit[32]; // size: 0x80, address: 0x80812DA8
static int g_tbl_clear[32]; // size: 0x80, address: 0x80812E28
class st_SERIAL_PERCID_SIZE * gp_xser_sizeinfo; // size: 0x4, address: 0x80812EA8
static bool g_bufferLock; // size: 0x1, address: 0x80812EAC
// Range: 0x8007C100 -> 0x8007C234
int xSerialStartup(int count /* r29 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r30 */) {
    // References
    // -> static int g_tbl_clear[32];
    // -> static int g_tbl_onbit[32];
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
    // -> class st_SERIAL_PERCID_SIZE * gp_xser_sizeinfo;
    // -> static int g_serinit;
}
// Range: 0x8007C240 -> 0x8007C254
int xSerialShutdown() {
    // References
    // -> static int g_serinit;
}
// Range: 0x8007C260 -> 0x8007C35C
void xSerialTraverse(int (* func)(unsigned int clientID, class xSerial * xser) /* r26 */) {
    // Local variables
    int i; // r29
    class st_XSERIAL_DATA_PRIV * xsd; // r28
    class st_SERIAL_CLIENTINFO * clt; // r27
    class xSerial xser; // r1+0x8
    int rc; // r0

    // References
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
}
// Range: 0x8007C360 -> 0x8007C3D8
void * xSerial::~xSerial(class xSerial * this /* r31 */) {
    // Local variables
    float pct; // f0
}
// signature: xSerial::setClient(unsigned int)
// Range: 0x8007C3E0 -> 0x8007C438
void xSerial::setClient(class xSerial * this /* r31 */) {
}
// signature: xSerial::Write(char *, int, int)
// Range: 0x8007C440 -> 0x8007C540
int xSerial::Write(class xSerial * this /* r31 */) {
    // Local variables
    int nbit; // r29

    {
        // Range: 0x8007C478 -> 0x8007C4D0
        // Local variables
        int * iptr; // r27
        int bidx; // r28

        {
            // Range: 0x8007C480 -> 0x8007C4C4
            // Local variables
            int i; // r26
        }
    }
    {
        // Range: 0x8007C4D0 -> 0x8007C528
        // Local variables
        char * cptr; // r27
        int bidx; // r26

        {
            // Range: 0x8007C4D4 -> 0x8007C51C
            // Local variables
            int i; // r28
        }
    }

    // References
    // -> static int g_tbl_onbit[32];
}
// Range: 0x8007C540 -> 0x8007C570
int xSerial::Write_b1(int bits /* r1+0x8 */) {
}
// Range: 0x8007C570 -> 0x8007C5A0
int xSerial::Write(char data /* r1+0x8 */) {
}
// Range: 0x8007C5A0 -> 0x8007C5D0
int xSerial::Write(short data /* r1+0x8 */) {
}
// Range: 0x8007C5D0 -> 0x8007C600
int xSerial::Write(int data /* r1+0x8 */) {
}
// Range: 0x8007C600 -> 0x8007C634
int xSerial::Write(long long data /* r1+0x8 */) {
}
// Range: 0x8007C640 -> 0x8007C670
int xSerial::Write(float data /* r1+0x8 */) {
}
// signature: xSerial::Write(char *, int)
// Range: 0x8007C670 -> 0x8007C67C
int xSerial::Write() {
}
// signature: xSerial::Write(unsigned long long *, int)
// Range: 0x8007C680 -> 0x8007C68C
int xSerial::Write() {
}
// signature: xSerial::Read(char *, int, int)
// Range: 0x8007C690 -> 0x8007C7E0
int xSerial::Read(class xSerial * this /* r30 */) {
    // Local variables
    int nbit; // r31
    int * iptr; // r26
    int bidx; // r27
    int i; // r25

    {
        // Range: 0x8007C6C4 -> 0x8007C734
        // Local variables
        int bitval; // r0
    }
    {
        // Range: 0x8007C740 -> 0x8007C7C8
        // Local variables
        char * cptr; // r25

        {
            // Range: 0x8007C744 -> 0x8007C7BC
            // Local variables
            int bitval; // r0
        }
    }

    // References
    // -> static int g_tbl_onbit[32];
    // -> static int g_tbl_clear[32];
}
// signature: xSerial::Read_b1(int *)
// Range: 0x8007C7E0 -> 0x8007C7EC
int xSerial::Read_b1() {
}
// signature: xSerial::Read(char *)
// Range: 0x8007C7F0 -> 0x8007C7FC
int xSerial::Read() {
}
// signature: xSerial::Read(short *)
// Range: 0x8007C800 -> 0x8007C80C
int xSerial::Read() {
}
// signature: xSerial::Read(int *)
// Range: 0x8007C810 -> 0x8007C81C
int xSerial::Read() {
}
// signature: xSerial::Read(long long *)
// Range: 0x8007C820 -> 0x8007C82C
int xSerial::Read() {
}
// signature: xSerial::Read(char *, int)
// Range: 0x8007C830 -> 0x8007C83C
int xSerial::Read() {
}
// signature: xSerial::Read(unsigned long long *, int)
// Range: 0x8007C840 -> 0x8007C84C
int xSerial::Read() {
}
// signature: xSerial::wrbit(int)
// Range: 0x8007C850 -> 0x8007C910
void xSerial::wrbit() {
    // Local variables
    class st_SERIAL_CLIENTINFO * clt; // r8

    // References
    // -> static int g_tbl_onbit[32];
    // -> static int g_tbl_clear[32];
}
// Range: 0x8007C910 -> 0x8007C9A4
int xSerial::rdbit() {
    // Local variables
    class st_SERIAL_CLIENTINFO * clt; // r6

    // References
    // -> static int g_tbl_onbit[32];
}
// Range: 0x8007C9B0 -> 0x8007C9C8
void xSerialWipeMainBuffer() {
    // References
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
}
// Range: 0x8007C9D0 -> 0x8007D460
static void xSER_init_buffers(int count /* r31 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r24 */) {
    // Local variables
    class st_XSERIAL_DATA_PRIV * xsd; // r27
    int i; // reg65535
    int tally; // r26
    int sicnt; // r25
    class st_SERIAL_PERCID_SIZE * sitmp; // r4
    class st_SERIAL_CLIENTINFO * tmp_clt; // r26

    // References
    // -> static int * g_initbitbuf;
    // -> static class xMemWatermark memWatermark;
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
}
// signature: xSER_ord_compare(void *, void *)
// Range: 0x8007D460 -> 0x8007D48C
static int xSER_ord_compare() {
    // Local variables
    int rc; // r3
}
// signature: xSER_ord_test(const void *, void *)
// Range: 0x8007D490 -> 0x8007D4B8
static int xSER_ord_test() {
    // Local variables
    int rc; // r3
    unsigned int idtag; // r0
}
// Range: 0x8007D4C0 -> 0x8007D554
static class st_SERIAL_CLIENTINFO * XSER_get_client(unsigned int idtag /* r29 */) {
    // Local variables
    class st_XSERIAL_DATA_PRIV * xsd; // r31
    class st_SERIAL_CLIENTINFO * clt; // r30
    int idx; // r0

    // References
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
}
// Range: 0x8007D560 -> 0x8007D57C
void xSerialSetBackUpBuffer() {
    // References
    // -> static int * g_initbitbuf;
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
}
// Range: 0x8007D580 -> 0x8007D59C
void xSerialLoadBackUpBuffer() {
    // References
    // -> static int * g_initbitbuf;
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
}
