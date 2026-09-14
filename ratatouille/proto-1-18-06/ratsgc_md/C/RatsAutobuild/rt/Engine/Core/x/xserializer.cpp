/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xserializer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006497C -> 0x80065808
*/
static int g_serinit; // size: 0x4, address: 0x803C1400
// total size: 0x10
struct st_SERIAL_CLIENTINFO {
    // Members
    unsigned int idtag; // offset 0x0, size 0x4
    int * membuf; // offset 0x4, size 0x4
    int trueoff; // offset 0x8, size 0x4
    int actsize; // offset 0xC, size 0x4
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
static struct st_XSERIAL_DATA_PRIV g_xserdata; // size: 0x24, address: 0x803BD9B0
static int g_tbl_onbit[32]; // size: 0x80, address: 0x802D0F68
static int g_tbl_clear[32]; // size: 0x80, address: 0x802D0FE8
// total size: 0x8
struct st_SERIAL_PERCID_SIZE {
    // Members
    unsigned int idtag; // offset 0x0, size 0x4
    int needsize; // offset 0x4, size 0x4
};
// Range: 0x8006497C -> 0x800649E0
int xSerialStartup(int count /* r30 */, struct st_SERIAL_PERCID_SIZE * sizeinfo /* r31 */) {
    // References
    // -> static int g_serinit;
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x800649E0 -> 0x800649F0
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
// Range: 0x800649F0 -> 0x80064A78
void xSerialTraverse(int (* func)(unsigned int, struct xSerial *) /* r27 */) {
    // Local variables
    int i; // r30
    struct st_XSERIAL_DATA_PRIV * xsd; // r29
    struct st_SERIAL_CLIENTINFO * clt; // r28
    struct xSerial xser; // r1+0x8
    int rc; // r0

    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x80064A78 -> 0x80064AB4
// this: r31
xSerial::~xSerial() {}

// Range: 0x80064AB4 -> 0x80064AD4
// this: r0
void xSerial::setClient(unsigned int idtag /* r0 */) {}

// Range: 0x80064AD4 -> 0x80064BD4
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

// Range: 0x80064BD4 -> 0x80064C04
// this: r0
int xSerial::Write_b1(int bits /* r1+0x8 */) {}

// Range: 0x80064C04 -> 0x80064C34
// this: r0
int xSerial::Write_b2(unsigned int bits /* r1+0x8 */) {}

// Range: 0x80064C34 -> 0x80064C64
// this: r0
int xSerial::Write(unsigned char data /* r1+0x8 */) {}

// Range: 0x80064C64 -> 0x80064C94
// this: r0
int xSerial::Write(signed short data /* r1+0x8 */) {}

// Range: 0x80064C94 -> 0x80064CC4
// this: r0
int xSerial::Write(int data /* r1+0x8 */) {}

// Range: 0x80064CC4 -> 0x80064CF4
// this: r0
int xSerial::Write(unsigned int data /* r1+0x8 */) {}

// Range: 0x80064CF4 -> 0x80064D24
// this: r0
int xSerial::Write(float data /* r1+0x8 */) {}

// Range: 0x80064D24 -> 0x80064E74
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

// Range: 0x80064E74 -> 0x80064E9C
// this: r0
int xSerial::Read_b1(int * bits /* r0 */) {}

// Range: 0x80064E9C -> 0x80064EC4
// this: r0
int xSerial::Read_b1(unsigned int * bits /* r0 */) {}

// Range: 0x80064EC4 -> 0x80064EEC
// this: r0
int xSerial::Read_b2(unsigned int * bits /* r0 */) {}

// Range: 0x80064EEC -> 0x80064F14
// this: r0
int xSerial::Read(unsigned char * buf /* r0 */) {}

// Range: 0x80064F14 -> 0x80064F3C
// this: r0
int xSerial::Read(signed short * buf /* r0 */) {}

// Range: 0x80064F3C -> 0x80064F64
// this: r0
int xSerial::Read(int * buf /* r0 */) {}

// Range: 0x80064F64 -> 0x80064F8C
// this: r0
int xSerial::Read(unsigned int * buf /* r0 */) {}

// Range: 0x80064F8C -> 0x80064FB4
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
// Range: 0x80064FB4 -> 0x80065078
// this: r0
void xSerial::wrbit(int is_on /* r0 */) {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r8

    // References
    // -> static int g_tbl_onbit[32];
    // -> static int g_tbl_clear[32];
}

// Range: 0x80065078 -> 0x80065110
// this: r0
int xSerial::rdbit() {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r7

    // References
    // -> static int g_tbl_onbit[32];
}

// Range: 0x80065110 -> 0x80065168
// this: r31
void xSerial::prepare(unsigned int idtag /* r4 */) {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r0
}

// Range: 0x80065168 -> 0x80065198
void xSerialWipeMainBuffer() {
    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x80065198 -> 0x800651DC
static void xSER_init_tables() {
    // Local variables
    int i; // r8

    // References
    // -> static int g_tbl_clear[32];
    // -> static int g_tbl_onbit[32];
}

unsigned int gActiveHeap; // size: 0x4, address: 0x803C1074
// Range: 0x800651DC -> 0x80065380
static void xSER_init_buffers(int count /* r27 */, struct st_SERIAL_PERCID_SIZE * sizeinfo /* r31 */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r30
    int i; // r0
    int tally; // r26
    int sicnt; // r29
    struct st_SERIAL_PERCID_SIZE * sitmp; // r4
    struct st_SERIAL_CLIENTINFO * tmp_clt; // r28

    // References
    // -> unsigned int gActiveHeap;
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x80065380 -> 0x800653AC
static int xSER_ord_compare(void * e1 /* r0 */, void * e2 /* r0 */) {
    // Local variables
    int rc; // r3
}

// Range: 0x800653AC -> 0x800653D4
static int xSER_ord_test(void * key /* r0 */, void * elt /* r0 */) {
    // Local variables
    int rc; // r3
    unsigned int idtag; // r0
}

// Range: 0x800653D4 -> 0x80065458
static struct st_SERIAL_CLIENTINFO * XSER_get_client(unsigned int idtag /* r29 */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r31
    struct st_SERIAL_CLIENTINFO * clt; // r30
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
// Range: 0x80065458 -> 0x80065584
int xSerial_svgame_register(struct st_XSAVEGAME_DATA * sgctxt /* r31 */, enum en_SAVEGAME_MODE mode /* r0 */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r27
    struct st_SERIAL_CLIENTINFO * clt; // r5
    int i; // r26

    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x80065584 -> 0x80065598
static int xSER_xsgclt_svinfo_ver(int * cur_space /* r0 */, int * max_fullgame /* r0 */) {}

// total size: 0x0
struct st_XSAVEGAME_WRITECONTEXT {};
// Range: 0x80065598 -> 0x800655D8
static int xSER_xsgclt_svproc_ver(struct st_XSAVEGAME_DATA * xsg /* r4 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r6 */) {
    // Local variables
    int ver; // r1+0x8
}

// total size: 0x0
struct st_XSAVEGAME_READCONTEXT {};
// Range: 0x800655D8 -> 0x8006563C
static int xSER_xsgclt_ldproc_ver(struct st_XSAVEGAME_DATA * xsg /* r4 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r6 */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r31
    int ver; // r1+0x8

    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x8006563C -> 0x80065654
static int xSER_xsgclt_svinfo_clt(void * cltdata /* r0 */, int * cur_space /* r0 */, int * max_fullgame /* r0 */) {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r0
}

// Range: 0x80065654 -> 0x800656A4
static int xSER_xsgclt_svproc_clt(void * cltdata /* r3 */, struct st_XSAVEGAME_DATA * xsg /* r30 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r31 */) {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r0
}

// Range: 0x800656A4 -> 0x80065708
static int xSER_xsgclt_ldproc_clt(struct st_XSAVEGAME_DATA * xsg /* r30 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r31 */, unsigned int idtag /* r6 */) {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r0

    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x80065708 -> 0x8006575C
static int xSER_xsgclt_svinfo_fill(int * cur_space /* r0 */, int * max_fullgame /* r0 */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r8
    int i; // r0
    int tally; // r9
    int size; // r4

    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x8006575C -> 0x800657A8
static int xSER_xsgclt_svproc_fill(struct st_XSAVEGAME_DATA * xsg /* r4 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r5 */) {
    // Local variables
    char filbuf[9]; // r1+0x8
}

// Range: 0x800657A8 -> 0x80065808
static int xSER_xsgclt_ldproc_fill(struct st_XSAVEGAME_DATA * xsg /* r4 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r5 */) {
    // Local variables
    char filbuf[9]; // r1+0x8

    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}


