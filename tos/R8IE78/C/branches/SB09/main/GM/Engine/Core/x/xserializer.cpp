/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xserializer.cpp
*/
static int g_serinit; // size: 0x4, address: 0x8072ADBC
static class st_XSERIAL_DATA_PRIV g_xserdata; // size: 0x24, address: 0x8072ADC0
static int * g_initbitbuf; // size: 0x4, address: 0x8072ADE4
static int g_tbl_onbit[32]; // size: 0x80, address: 0x8072ADE8
static int g_tbl_clear[32]; // size: 0x80, address: 0x8072AE68
class st_SERIAL_PERCID_SIZE * gp_xser_sizeinfo; // size: 0x4, address: 0x8072AEE8
static bool g_bufferLock; // size: 0x1, address: 0x8072AEEC
// Range: 0x80042410 -> 0x80042660
int xSerialStartup(int count /* r25 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r26 */) {
    // References
    // -> static int * g_initbitbuf;
    // -> static class xMemWatermark memWatermark;
    // -> static int g_tbl_clear[32];
    // -> static int g_tbl_onbit[32];
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
    // -> class st_SERIAL_PERCID_SIZE * gp_xser_sizeinfo;
    // -> static int g_serinit;
}
// Range: 0x80042660 -> 0x80042674
int xSerialShutdown() {
    // References
    // -> static int g_serinit;
}
// Range: 0x80042680 -> 0x80042714
void xSerialTraverse(int (* func)(unsigned int clientID, class xSerial * xser) /* r27 */) {
    // Local variables
    int i; // r30
    class st_XSERIAL_DATA_PRIV * xsd; // r29
    class st_SERIAL_CLIENTINFO * clt; // r28
    class xSerial xser; // r1+0x8
    int rc; // r0

    // References
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
}
// Range: 0x80042720 -> 0x80042798
void * xSerial::~xSerial(class xSerial * this /* r31 */) {
    // Local variables
    float pct; // f0
}
// signature: xSerial::setClient(unsigned int)
// Range: 0x800427A0 -> 0x800427A4
void xSerial::setClient() {
}
// signature: xSerial::Write(char *, int, int)
// Range: 0x800427B0 -> 0x800428B0
int xSerial::Write(class xSerial * this /* r31 */) {
    // Local variables
    int nbit; // r29

    {
        // Range: 0x800427E8 -> 0x80042840
        // Local variables
        int * iptr; // r27
        int bidx; // r28

        {
            // Range: 0x800427F0 -> 0x80042840
            // Local variables
            int i; // r26
        }
    }
    {
        // Range: 0x80042840 -> 0x80042898
        // Local variables
        char * cptr; // r27
        int bidx; // r26

        {
            // Range: 0x80042844 -> 0x80042898
            // Local variables
            int i; // r28
        }
    }

    // References
    // -> static int g_tbl_onbit[32];
}
// Range: 0x800428B0 -> 0x800428E0
int xSerial::Write_b1(int bits /* r1+0x8 */) {
}
// Range: 0x800428E0 -> 0x80042910
int xSerial::Write(char data /* r1+0x8 */) {
}
// Range: 0x80042910 -> 0x80042940
int xSerial::Write(unsigned short data /* r1+0x8 */) {
}
// Range: 0x80042940 -> 0x80042970
int xSerial::Write(int data /* r1+0x8 */) {
}
// Range: 0x80042970 -> 0x800429A4
int xSerial::Write(long long data /* r1+0x8 */) {
}
// Range: 0x800429B0 -> 0x800429E0
int xSerial::Write(float data /* r1+0x8 */) {
}
// signature: xSerial::Write(char *, int)
// Range: 0x800429E0 -> 0x800429EC
int xSerial::Write() {
}
// signature: xSerial::Write(unsigned long long *, int)
// Range: 0x800429F0 -> 0x800429FC
int xSerial::Write() {
}
// signature: xSerial::Read(char *, int, int)
// Range: 0x80042A00 -> 0x80042B50
int xSerial::Read(class xSerial * this /* r30 */) {
    // Local variables
    int nbit; // r31
    int * iptr; // r26
    int bidx; // r27
    int i; // r25

    {
        // Range: 0x80042A34 -> 0x80042AB0
        // Local variables
        int bitval; // r0
    }
    {
        // Range: 0x80042AB0 -> 0x80042B38
        // Local variables
        char * cptr; // r25

        {
            // Range: 0x80042AB4 -> 0x80042B38
            // Local variables
            int bitval; // r0
        }
    }

    // References
    // -> static int g_tbl_onbit[32];
    // -> static int g_tbl_clear[32];
}
// signature: xSerial::Read_b1(int *)
// Range: 0x80042B50 -> 0x80042B5C
int xSerial::Read_b1() {
}
// signature: xSerial::Read(char *)
// Range: 0x80042B60 -> 0x80042B6C
int xSerial::Read() {
}
// signature: xSerial::Read(unsigned short *)
// Range: 0x80042B70 -> 0x80042B7C
int xSerial::Read() {
}
// signature: xSerial::Read(int *)
// Range: 0x80042B80 -> 0x80042B8C
int xSerial::Read() {
}
// signature: xSerial::Read(long long *)
// Range: 0x80042B90 -> 0x80042B9C
int xSerial::Read() {
}
// signature: xSerial::Read(char *, int)
// Range: 0x80042BA0 -> 0x80042BAC
int xSerial::Read() {
}
// signature: xSerial::Read(unsigned long long *, int)
// Range: 0x80042BB0 -> 0x80042BBC
int xSerial::Read() {
}
// signature: xSerial::wrbit(int)
// Range: 0x80042BC0 -> 0x80042C80
void xSerial::wrbit() {
    // Local variables
    class st_SERIAL_CLIENTINFO * clt; // r8

    // References
    // -> static int g_tbl_onbit[32];
    // -> static int g_tbl_clear[32];
}
// Range: 0x80042C80 -> 0x80042D10
int xSerial::rdbit() {
    // Local variables
    class st_SERIAL_CLIENTINFO * clt; // r6

    // References
    // -> static int g_tbl_onbit[32];
}
// Range: 0x80042D10 -> 0x80042DB8
void xSerial::prepare(class xSerial * this /* r28 */, unsigned int idtag /* r29 */) {
    // References
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
}
// Range: 0x80042DC0 -> 0x80042DD8
void xSerialWipeMainBuffer() {
    // References
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
}
// signature: xSER_ord_compare(void *, void *)
// Range: 0x80042DE0 -> 0x80042E08
static int xSER_ord_compare() {
    // Local variables
    int rc; // r3
}
// signature: xSER_ord_test(const void *, void *)
// Range: 0x80042E10 -> 0x80042E34
static int xSER_ord_test() {
    // Local variables
    int rc; // r3
    unsigned int idtag; // r0
}
// Range: 0x80042E40 -> 0x80042E5C
void xSerialSetBackUpBuffer() {
    // References
    // -> static int * g_initbitbuf;
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
}
// Range: 0x80042E60 -> 0x80042E7C
void xSerialLoadBackUpBuffer() {
    // References
    // -> static int * g_initbitbuf;
    // -> static class st_XSERIAL_DATA_PRIV g_xserdata;
}
