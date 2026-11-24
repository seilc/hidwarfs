/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xserializer.cpp
*/
static int g_serinit; // size: 0x4, address: 0x8075F8C4
static class st_XSERIAL_DATA_PRIV g_xserdata; // size: 0x24, address: 0x8075F8C8
static int * g_initbitbuf; // size: 0x4, address: 0x8075F8EC
static int g_tbl_onbit[32]; // size: 0x80, address: 0x8075F8F0
static int g_tbl_clear[32]; // size: 0x80, address: 0x8075F970
class st_SERIAL_PERCID_SIZE * gp_xser_sizeinfo; // size: 0x4, address: 0x8075F9F0
static bool g_bufferLock; // size: 0x1, address: 0x8075F9F4
// Range: 0x8005C340 -> 0x8005C474
int xSerialStartup(int count /* r29 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r30 */) {
    // References
    // -> static int g_tbl_clear[32];
    // -> static int g_tbl_onbit[32];
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
    // -> class st_SERIAL_PERCID_SIZE * gp_xser_sizeinfo;
    // -> static int g_serinit;
}
// Range: 0x8005C480 -> 0x8005C494
int xSerialShutdown() {
    // References
    // -> static int g_serinit;
}
// Range: 0x8005C4A0 -> 0x8005C59C
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
// Range: 0x8005C5A0 -> 0x8005C618
void * xSerial::~xSerial(class xSerial * this /* r31 */) {
    // Local variables
    float pct; // f0
}
// signature: xSerial::setClient(unsigned int)
// Range: 0x8005C620 -> 0x8005C678
void xSerial::setClient(class xSerial * this /* r31 */) {
}
// signature: xSerial::Write(char *, int, int)
// Range: 0x8005C680 -> 0x8005C780
int xSerial::Write(class xSerial * this /* r31 */) {
    // Local variables
    int nbit; // r29

    {
        // Range: 0x8005C6B8 -> 0x8005C710
        // Local variables
        int * iptr; // r27
        int bidx; // r28

        {
            // Range: 0x8005C6C0 -> 0x8005C704
            // Local variables
            int i; // r26
        }
    }
    {
        // Range: 0x8005C710 -> 0x8005C768
        // Local variables
        char * cptr; // r27
        int bidx; // r26

        {
            // Range: 0x8005C714 -> 0x8005C75C
            // Local variables
            int i; // r28
        }
    }

    // References
    // -> static int g_tbl_onbit[32];
}
// Range: 0x8005C780 -> 0x8005C7B0
int xSerial::Write_b1(int bits /* r1+0x8 */) {
}
// Range: 0x8005C7B0 -> 0x8005C7E0
int xSerial::Write_b2(int bits /* r1+0x8 */) {
}
// Range: 0x8005C7E0 -> 0x8005C810
int xSerial::Write_b2(unsigned int bits /* r1+0x8 */) {
}
// Range: 0x8005C810 -> 0x8005C840
int xSerial::Write(char data /* r1+0x8 */) {
}
// Range: 0x8005C840 -> 0x8005C870
int xSerial::Write(unsigned char data /* r1+0x8 */) {
}
// Range: 0x8005C870 -> 0x8005C8A0
int xSerial::Write(int data /* r1+0x8 */) {
}
// Range: 0x8005C8A0 -> 0x8005C8D0
int xSerial::Write(unsigned int data /* r1+0x8 */) {
}
// Range: 0x8005C8D0 -> 0x8005C904
int xSerial::Write(long long data /* r1+0x8 */) {
}
// Range: 0x8005C910 -> 0x8005C944
int xSerial::Write(unsigned long long data /* r1+0x8 */) {
}
// Range: 0x8005C950 -> 0x8005C980
int xSerial::Write(float data /* r1+0x8 */) {
}
// signature: xSerial::Write(char *, int)
// Range: 0x8005C980 -> 0x8005C98C
int xSerial::Write() {
}
// signature: xSerial::Write(unsigned long long *, int)
// Range: 0x8005C990 -> 0x8005C99C
int xSerial::Write() {
}
// signature: xSerial::Read(char *, int, int)
// Range: 0x8005C9A0 -> 0x8005CAF0
int xSerial::Read(class xSerial * this /* r30 */) {
    // Local variables
    int nbit; // r31
    int * iptr; // r26
    int bidx; // r27
    int i; // r25

    {
        // Range: 0x8005C9D4 -> 0x8005CA44
        // Local variables
        int bitval; // r0
    }
    {
        // Range: 0x8005CA50 -> 0x8005CAD8
        // Local variables
        char * cptr; // r25

        {
            // Range: 0x8005CA54 -> 0x8005CACC
            // Local variables
            int bitval; // r0
        }
    }

    // References
    // -> static int g_tbl_onbit[32];
    // -> static int g_tbl_clear[32];
}
// signature: xSerial::Read_b1(int *)
// Range: 0x8005CAF0 -> 0x8005CAFC
int xSerial::Read_b1() {
}
// signature: xSerial::Read_b1(unsigned int *)
// Range: 0x8005CB00 -> 0x8005CB0C
int xSerial::Read_b1() {
}
// signature: xSerial::Read_b2(unsigned int *)
// Range: 0x8005CB10 -> 0x8005CB1C
int xSerial::Read_b2() {
}
// signature: xSerial::Read(char *)
// Range: 0x8005CB20 -> 0x8005CB2C
int xSerial::Read() {
}
// signature: xSerial::Read(unsigned char *)
// Range: 0x8005CB30 -> 0x8005CB3C
int xSerial::Read() {
}
// signature: xSerial::Read(int *)
// Range: 0x8005CB40 -> 0x8005CB4C
int xSerial::Read() {
}
// signature: xSerial::Read(unsigned int *)
// Range: 0x8005CB50 -> 0x8005CB5C
int xSerial::Read() {
}
// signature: xSerial::Read(long long *)
// Range: 0x8005CB60 -> 0x8005CB6C
int xSerial::Read() {
}
// signature: xSerial::Read(unsigned long long *)
// Range: 0x8005CB70 -> 0x8005CB7C
int xSerial::Read() {
}
// signature: xSerial::Read(float *)
// Range: 0x8005CB80 -> 0x8005CB8C
int xSerial::Read() {
}
// signature: xSerial::Read(char *, int)
// Range: 0x8005CB90 -> 0x8005CB9C
int xSerial::Read() {
}
// signature: xSerial::Read(unsigned long long *, int)
// Range: 0x8005CBA0 -> 0x8005CBAC
int xSerial::Read() {
}
// signature: xSerial::wrbit(int)
// Range: 0x8005CBB0 -> 0x8005CC70
void xSerial::wrbit() {
    // Local variables
    class st_SERIAL_CLIENTINFO * clt; // r8

    // References
    // -> static int g_tbl_onbit[32];
    // -> static int g_tbl_clear[32];
}
// Range: 0x8005CC70 -> 0x8005CD04
int xSerial::rdbit() {
    // Local variables
    class st_SERIAL_CLIENTINFO * clt; // r6

    // References
    // -> static int g_tbl_onbit[32];
}
// Range: 0x8005CD10 -> 0x8005CD28
void xSerialWipeMainBuffer() {
    // References
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
}
// Range: 0x8005CD30 -> 0x8005D7C0
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
// Range: 0x8005D7C0 -> 0x8005D7EC
static int xSER_ord_compare() {
    // Local variables
    int rc; // r3
}
// signature: xSER_ord_test(const void *, void *)
// Range: 0x8005D7F0 -> 0x8005D818
static int xSER_ord_test() {
    // Local variables
    int rc; // r3
    unsigned int idtag; // r0
}
// Range: 0x8005D820 -> 0x8005D8B4
static class st_SERIAL_CLIENTINFO * XSER_get_client(unsigned int idtag /* r29 */) {
    // Local variables
    class st_XSERIAL_DATA_PRIV * xsd; // r31
    class st_SERIAL_CLIENTINFO * clt; // r30
    int idx; // r0

    // References
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
}
// Range: 0x8005D8C0 -> 0x8005D8DC
void xSerialSetBackUpBuffer() {
    // References
    // -> static int * g_initbitbuf;
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
}
// Range: 0x8005D8E0 -> 0x8005D8FC
void xSerialLoadBackUpBuffer() {
    // References
    // -> static int * g_initbitbuf;
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
}
