/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xserializer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B4D1C -> 0x800B619C
*/
static int g_serinit; // size: 0x4, address: 0x80C07730
// total size: 0x14
struct st_SERIAL_CLIENTINFO {
    // Members
    unsigned int idtag; // offset 0x0, size 0x4
    int * membuf; // offset 0x4, size 0x4
    int trueoff; // offset 0x8, size 0x4
    int actsize; // offset 0xC, size 0x4
    int watermark; // offset 0x10, size 0x4
};
// total size: 0x10
struct st_XORDEREDARRAY {
    // Members
    void * list; // offset 0x0, size 0x4
    int cnt; // offset 0x4, size 0x4
    int max; // offset 0x8, size 0x4
    int warnlvl; // offset 0xC, size 0x4
};
// total size: 0x24
struct st_XSERIAL_DATA_PRIV {
    // Members
    int flg_info; // offset 0x0, size 0x4
    int * bitbuf; // offset 0x4, size 0x4
    int buf_bytcnt; // offset 0x8, size 0x4
    struct st_SERIAL_CLIENTINFO * cltbuf; // offset 0xC, size 0x4
    struct st_SERIAL_CLIENTINFO * cltnext; // offset 0x10, size 0x4
    struct st_XORDEREDARRAY cltlist; // offset 0x14, size 0x10
};
static struct st_XSERIAL_DATA_PRIV g_xserdata; // size: 0x24, address: 0x8042E038
static int g_tbl_onbit[32]; // size: 0x80, address: 0x8042E05C
static int g_tbl_clear[32]; // size: 0x80, address: 0x8042E0DC
// total size: 0x8
struct st_SERIAL_PERCID_SIZE {
    // Members
    unsigned int idtag; // offset 0x0, size 0x4
    int needsize; // offset 0x4, size 0x4
};
// Range: 0x800B4D1C -> 0x800B4DA4
int xSerialStartup(int count /* r30 */, struct st_SERIAL_PERCID_SIZE * sizeinfo /* r31 */) {
    // References
    // -> static int g_serinit;
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x800B4DA4 -> 0x800B4DEC
int xSerialShutdown() {
    // References
    // -> static int g_serinit;
}

// total size: 0x1C
struct xSerial {
    // Functions
    ~xSerial();

    void setClient(unsigned int idtag);

    int Write(char * data, int elesize, int n);

    int Write_b1(int bits);

    int Write_b2(unsigned int bits);

    int Write(unsigned char data);

    int Write(signed short data);

    int Write(int data);

    int Write(unsigned int data);

    int Write(float data);

    int Read(char * buf, int elesize, int n);

    int Read_b1(int * bits);

    int Read_b1(unsigned int * bits);

    int Read_b2(unsigned int * bits);

    int Read(unsigned char * buf);

    int Read(signed short * buf);

    int Read(int * buf);

    int Read(unsigned int * buf);

    int Read(float * buf);

    void wrbit(int is_on);

    int rdbit();

    void prepare(unsigned int idtag);

    void DBBitDump() const;

    // Members
private:
    unsigned int idtag; // offset 0x0, size 0x4
    int baseoff; // offset 0x4, size 0x4
    struct st_SERIAL_CLIENTINFO * ctxtdata; // offset 0x8, size 0x4
    int warned; // offset 0xC, size 0x4
    int curele; // offset 0x10, size 0x4
    int bitidx; // offset 0x14, size 0x4
    int bittally; // offset 0x18, size 0x4
};
// Range: 0x800B4DEC -> 0x800B4E78
void xSerialTraverse(int (* func)(unsigned int, struct xSerial *) /* r27 */) {
    // Local variables
    int i; // r29
    struct st_XSERIAL_DATA_PRIV * xsd; // r0
    struct st_SERIAL_CLIENTINFO * clt; // r28
    struct xSerial xser; // r1+0x8
    int rc; // r0

    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x800B4E78 -> 0x800B4EB4
// this: r31
xSerial::~xSerial() {}

// Range: 0x800B4EB4 -> 0x800B4ED4
// this: r0
void xSerial::setClient(unsigned int idtag /* r0 */) {}

// Range: 0x800B4ED4 -> 0x800B4FF0
// this: r31
int xSerial::Write(char * data /* r4 */, int elesize /* r0 */, int n /* r0 */) {
    // Local variables
    int nbit; // r29
    int bidx; // r28
    int * iptr; // r27
    int i; // r26
    int bidx; // r26
    char * cptr; // r27
    int i; // r28

    // References
    // -> static int g_tbl_onbit[32];
}

// Range: 0x800B4FF0 -> 0x800B5020
// this: r0
int xSerial::Write_b1(int bits /* r1+0x8 */) {}

// Range: 0x800B5020 -> 0x800B5050
// this: r0
int xSerial::Write_b2(unsigned int bits /* r1+0x8 */) {}

// Range: 0x800B5050 -> 0x800B5080
// this: r0
int xSerial::Write(unsigned char data /* r1+0x8 */) {}

// Range: 0x800B5080 -> 0x800B50B0
// this: r0
int xSerial::Write(signed short data /* r1+0x8 */) {}

// Range: 0x800B50B0 -> 0x800B50E0
// this: r0
int xSerial::Write(int data /* r1+0x8 */) {}

// Range: 0x800B50E0 -> 0x800B5110
// this: r0
int xSerial::Write(unsigned int data /* r1+0x8 */) {}

// Range: 0x800B5110 -> 0x800B5140
// this: r0
int xSerial::Write(float data /* r1+0x8 */) {}

// Range: 0x800B5140 -> 0x800B52AC
// this: r27
int xSerial::Read(char * buf /* r4 */, int elesize /* r0 */, int n /* r0 */) {
    // Local variables
    int nbit; // r29
    int * iptr; // r28
    int bidx; // r30
    int i; // r31
    int bitval; // r0
    char * cptr; // r28
    int bitval; // r0

    // References
    // -> static int g_tbl_clear[32];
    // -> static int g_tbl_onbit[32];
}

// Range: 0x800B52AC -> 0x800B52D4
// this: r0
int xSerial::Read_b1(int * bits /* r0 */) {}

// Range: 0x800B52D4 -> 0x800B52FC
// this: r0
int xSerial::Read_b1(unsigned int * bits /* r0 */) {}

// Range: 0x800B52FC -> 0x800B5324
// this: r0
int xSerial::Read_b2(unsigned int * bits /* r0 */) {}

// Range: 0x800B5324 -> 0x800B534C
// this: r0
int xSerial::Read(unsigned char * buf /* r0 */) {}

// Range: 0x800B534C -> 0x800B5374
// this: r0
int xSerial::Read(signed short * buf /* r0 */) {}

// Range: 0x800B5374 -> 0x800B539C
// this: r0
int xSerial::Read(int * buf /* r0 */) {}

// Range: 0x800B539C -> 0x800B53C4
// this: r0
int xSerial::Read(unsigned int * buf /* r0 */) {}

// Range: 0x800B53C4 -> 0x800B53EC
// this: r0
int xSerial::Read(float * buf /* r0 */) {}

// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
static char __FUNCTION__[6]; // size: 0x6, address: 0x80BFE558
// Range: 0x800B53EC -> 0x800B5534
// this: r31
void xSerial::wrbit(int is_on /* r0 */) {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r7

    // References
    // -> static int g_tbl_onbit[32];
    // -> static int g_tbl_clear[32];
    // -> static char __FUNCTION__[6];
}

// Range: 0x800B5534 -> 0x800B5624
// this: r31
int xSerial::rdbit() {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r6

    // References
    // -> static int g_tbl_onbit[32];
}

// Range: 0x800B5624 -> 0x800B567C
// this: r31
void xSerial::prepare(unsigned int idtag /* r4 */) {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r0
}

// Range: 0x800B567C -> 0x800B56B0
void xSerialWipeMainBuffer() {
    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x800B56B0 -> 0x800B57A0
static void xSER_init_tables() {
    // Local variables
    int i; // r3

    // References
    // -> static int g_tbl_clear[32];
    // -> static int g_tbl_onbit[32];
}

unsigned int gActiveHeap; // size: 0x4, address: 0x80C07448
// Range: 0x800B57A0 -> 0x800B5A64
static void xSER_init_buffers(int count /* r25 */, struct st_SERIAL_PERCID_SIZE * sizeinfo /* r29 */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r0
    int i; // r0
    int tally; // r28
    int sicnt; // r27
    struct st_SERIAL_PERCID_SIZE * sitmp; // r4
    struct st_SERIAL_CLIENTINFO * tmp_clt; // r26

    // References
    // -> unsigned int gActiveHeap;
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x800B5A64 -> 0x800B5A90
static int xSER_ord_compare(void * e1 /* r0 */, void * e2 /* r0 */) {
    // Local variables
    int rc; // r3
}

// Range: 0x800B5A90 -> 0x800B5AB8
static int xSER_ord_test(void * key /* r0 */, void * elt /* r0 */) {
    // Local variables
    int rc; // r3
    unsigned int idtag; // r0
}

// Range: 0x800B5AB8 -> 0x800B5B9C
static struct st_SERIAL_CLIENTINFO * XSER_get_client(unsigned int idtag /* r29 */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r0
    struct st_SERIAL_CLIENTINFO * clt; // r31
    int idx; // r0

    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// total size: 0x0
struct st_XSAVEGAME_DATA {};
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};
// Range: 0x800B5B9C -> 0x800B5CF8
int xSerial_svgame_register(struct st_XSAVEGAME_DATA * sgctxt /* r30 */, enum en_SAVEGAME_MODE mode /* r4 */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r0
    struct st_SERIAL_CLIENTINFO * clt; // r5
    int i; // r26

    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x800B5CF8 -> 0x800B5D0C
static int xSER_xsgclt_svinfo_ver(int * cur_space /* r0 */, int * max_fullgame /* r0 */) {}

// total size: 0x0
struct st_XSAVEGAME_WRITECONTEXT {};
// Range: 0x800B5D0C -> 0x800B5D4C
static int xSER_xsgclt_svproc_ver(struct st_XSAVEGAME_DATA * xsg /* r4 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r6 */) {
    // Local variables
    int ver; // r1+0x8
}

// total size: 0x0
struct st_XSAVEGAME_READCONTEXT {};
// Range: 0x800B5D4C -> 0x800B5DB0
static int xSER_xsgclt_ldproc_ver(struct st_XSAVEGAME_DATA * xsg /* r4 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r5 */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r0
    int ver; // r1+0x8

    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x800B5DB0 -> 0x800B5DC8
static int xSER_xsgclt_svinfo_clt(void * cltdata /* r0 */, int * cur_space /* r0 */, int * max_fullgame /* r0 */) {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r0
}

// Range: 0x800B5DC8 -> 0x800B5E20
static int xSER_xsgclt_svproc_clt(void * cltdata /* r3 */, struct st_XSAVEGAME_DATA * xsg /* r30 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r31 */) {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r0
}

// Range: 0x800B5E20 -> 0x800B5E90
static int xSER_xsgclt_ldproc_clt(struct st_XSAVEGAME_DATA * xsg /* r30 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r31 */, unsigned int idtag /* r6 */) {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r0

    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x800B5E90 -> 0x800B5FEC
static int xSER_xsgclt_svinfo_fill(int * cur_space /* r30 */, int * max_fullgame /* r31 */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r0
    int i; // r5
    int tally; // r0
    int size; // r28

    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x800B5FEC -> 0x800B6038
static int xSER_xsgclt_svproc_fill(struct st_XSAVEGAME_DATA * xsg /* r4 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r5 */) {
    // Local variables
    char filbuf[9]; // r1+0x8
}

// Range: 0x800B6038 -> 0x800B609C
static int xSER_xsgclt_ldproc_fill(struct st_XSAVEGAME_DATA * xsg /* r4 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r5 */) {
    // Local variables
    char filbuf[9]; // r1+0x8

    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x800B609C -> 0x800B619C
// this: r31
void xSerial::DBBitDump() const {
    // Local variables
    float pct; // f1
}


