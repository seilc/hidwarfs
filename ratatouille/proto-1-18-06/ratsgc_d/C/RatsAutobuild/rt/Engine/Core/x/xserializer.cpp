/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xserializer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DD384 -> 0x800DF8A4
*/
static int g_serinit; // size: 0x4, address: 0x80D69778
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
static struct st_XSERIAL_DATA_PRIV g_xserdata; // size: 0x24, address: 0x80513AD8
static int g_tbl_onbit[32]; // size: 0x80, address: 0x80513AFC
static int g_tbl_clear[32]; // size: 0x80, address: 0x80513B7C
// total size: 0x8
struct st_SERIAL_PERCID_SIZE {
    // Members
    unsigned int idtag; // offset 0x0, size 0x4
    int needsize; // offset 0x4, size 0x4
};
// Range: 0x800DD384 -> 0x800DD404
int xSerialStartup(int count /* r31 */, struct st_SERIAL_PERCID_SIZE * sizeinfo /* r1+0x8 */) {
    // References
    // -> static int g_serinit;
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

static int been_here; // size: 0x4, address: 0x80D6977C
static char __FUNCTION__[16]; // size: 0x10, address: 0x80D60D70
// Range: 0x800DD404 -> 0x800DD49C
int xSerialShutdown() {
    // References
    // -> static int g_serinit;
    // -> static int been_here;
    // -> static char __FUNCTION__[16];
}

static int been_here; // size: 0x4, address: 0x80D69780
static int been_here; // size: 0x4, address: 0x80D69784
static char __FUNCTION__[16]; // size: 0x10, address: 0x80D60D80
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

    void DBBitDump(int ashex) const;

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
// Range: 0x800DD49C -> 0x800DD5C4
void xSerialTraverse(int (* func)(unsigned int, struct xSerial *) /* r27 */) {
    // Local variables
    int i; // r30
    struct st_XSERIAL_DATA_PRIV * xsd; // r29
    struct st_SERIAL_CLIENTINFO * clt; // r31
    struct xSerial xser; // r1+0x8
    int rc; // r28

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[16];
    // -> static int been_here;
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

static int been_here; // size: 0x4, address: 0x80D69788
static char __FUNCTION__[5]; // size: 0x5, address: 0x80D60D90
// Range: 0x800DD5C4 -> 0x800DD6A8
// this: r31
xSerial::~xSerial() {
    // Local variables
    float pct; // f31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[5];
}

// Range: 0x800DD6A8 -> 0x800DD6D8
// this: r1+0x8
void xSerial::setClient(unsigned int idtag /* r1+0xC */) {}

static int been_here; // size: 0x4, address: 0x80D6978C
static int been_here; // size: 0x4, address: 0x80D69790
static int been_here; // size: 0x4, address: 0x80D69794
static int been_here; // size: 0x4, address: 0x80D69798
static int been_here; // size: 0x4, address: 0x80D6979C
static int been_here; // size: 0x4, address: 0x80D697A0
static int been_here; // size: 0x4, address: 0x80D697A4
static char __FUNCTION__[6]; // size: 0x6, address: 0x80D60D95
// Range: 0x800DD6D8 -> 0x800DDA60
// this: r30
int xSerial::Write(char * data /* r17 */, int elesize /* r23 */, int n /* r26 */) {
    // Local variables
    int nbit; // r29
    int numbytes; // r31
    int bidx; // r28
    int * iptr; // r25
    int i; // r22
    int bitval; // r19
    int bidx; // r27
    char * cptr; // r24
    int i; // r21
    int bitval; // r18

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[6];
    // -> static int g_tbl_onbit[32];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

// Range: 0x800DDA60 -> 0x800DDA98
// this: r1+0x8
int xSerial::Write_b1(int bits /* r1+0xC */) {}

// Range: 0x800DDA98 -> 0x800DDAD0
// this: r1+0x8
int xSerial::Write_b2(unsigned int bits /* r1+0xC */) {}

// Range: 0x800DDAD0 -> 0x800DDB08
// this: r1+0x8
int xSerial::Write(unsigned char data /* r1+0xC */) {}

// Range: 0x800DDB08 -> 0x800DDB40
// this: r1+0x8
int xSerial::Write(signed short data /* r1+0xC */) {}

// Range: 0x800DDB40 -> 0x800DDB78
// this: r1+0x8
int xSerial::Write(int data /* r1+0xC */) {}

// Range: 0x800DDB78 -> 0x800DDBB0
// this: r1+0x8
int xSerial::Write(unsigned int data /* r1+0xC */) {}

// Range: 0x800DDBB0 -> 0x800DDBE8
// this: r1+0x8
int xSerial::Write(float data /* r1+0xC */) {}

static int been_here; // size: 0x4, address: 0x80D697A8
static int been_here; // size: 0x4, address: 0x80D697AC
static int been_here; // size: 0x4, address: 0x80D697B0
static int been_here; // size: 0x4, address: 0x80D697B4
static char __FUNCTION__[5]; // size: 0x5, address: 0x80D60D9B
// Range: 0x800DDBE8 -> 0x800DDEE0
// this: r29
int xSerial::Read(char * buf /* r20 */, int elesize /* r1+0x8 */, int n /* r24 */) {
    // Local variables
    int nbit; // r27
    int numbytes; // r30
    int * iptr; // r26
    int bidx; // r31
    int i; // r28
    int bitval; // r22
    char * cptr; // r25
    int bitval; // r21

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[5];
    // -> static int g_tbl_clear[32];
    // -> static int g_tbl_onbit[32];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

// Range: 0x800DDEE0 -> 0x800DDF18
// this: r1+0x8
int xSerial::Read_b1(int * bits /* r1+0xC */) {}

// Range: 0x800DDF18 -> 0x800DDF50
// this: r1+0x8
int xSerial::Read_b1(unsigned int * bits /* r1+0xC */) {}

// Range: 0x800DDF50 -> 0x800DDF88
// this: r1+0x8
int xSerial::Read_b2(unsigned int * bits /* r1+0xC */) {}

// Range: 0x800DDF88 -> 0x800DDFC0
// this: r1+0x8
int xSerial::Read(unsigned char * buf /* r1+0xC */) {}

// Range: 0x800DDFC0 -> 0x800DDFF8
// this: r1+0x8
int xSerial::Read(signed short * buf /* r1+0xC */) {}

// Range: 0x800DDFF8 -> 0x800DE030
// this: r1+0x8
int xSerial::Read(int * buf /* r1+0xC */) {}

// Range: 0x800DE030 -> 0x800DE068
// this: r1+0x8
int xSerial::Read(unsigned int * buf /* r1+0xC */) {}

// Range: 0x800DE068 -> 0x800DE0A0
// this: r1+0x8
int xSerial::Read(float * buf /* r1+0xC */) {}

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
static int been_here; // size: 0x4, address: 0x80D697B8
static int been_here; // size: 0x4, address: 0x80D697BC
static char __FUNCTION__[6]; // size: 0x6, address: 0x80D60DA0
// Range: 0x800DE0A0 -> 0x800DE2AC
// this: r31
void xSerial::wrbit(int is_on /* r1+0x8 */) {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r30

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[6];
    // -> static int g_tbl_onbit[32];
    // -> static int g_tbl_clear[32];
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D697C0
static int been_here; // size: 0x4, address: 0x80D697C4
static char __FUNCTION__[6]; // size: 0x6, address: 0x80D60DA6
// Range: 0x800DE2AC -> 0x800DE470
// this: r31
int xSerial::rdbit() {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r30
    int is_on; // r29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[6];
    // -> static int g_tbl_onbit[32];
    // -> static int been_here;
}

// Range: 0x800DE470 -> 0x800DE4E8
// this: r31
void xSerial::prepare(unsigned int idtag /* r1+0x8 */) {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r30
}

static int been_here; // size: 0x4, address: 0x80D697C8
static char __FUNCTION__[22]; // size: 0x16, address: 0x80513BFC
// Range: 0x800DE4E8 -> 0x800DE584
void xSerialWipeMainBuffer() {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xser; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[22];
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x800DE584 -> 0x800DE5EC
static void xSER_init_tables() {
    // Local variables
    int i; // r31

    // References
    // -> static int g_tbl_clear[32];
    // -> static int g_tbl_onbit[32];
}

static int been_here; // size: 0x4, address: 0x80D697CC
static int been_here; // size: 0x4, address: 0x80D697D0
static int been_here; // size: 0x4, address: 0x80D697D4
static int been_here; // size: 0x4, address: 0x80D697D8
static int been_here; // size: 0x4, address: 0x80D697DC
static char __FUNCTION__[18]; // size: 0x12, address: 0x80D60DAC
unsigned int gActiveHeap; // size: 0x4, address: 0x80D692A8
// Range: 0x800DE5EC -> 0x800DE9B8
static void xSER_init_buffers(int count /* r27 */, struct st_SERIAL_PERCID_SIZE * sizeinfo /* r24 */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r31
    int i; // r26
    int tally; // r29
    int sicnt; // r25
    struct st_SERIAL_PERCID_SIZE * sitmp; // r28
    struct st_SERIAL_CLIENTINFO * tmp_clt; // r30
    unsigned long s; // r1+0x8

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[18];
    // -> static int been_here;
    // -> unsigned int gActiveHeap;
    // -> static int been_here;
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
    // -> static int been_here;
    // -> static int been_here;
}

// Range: 0x800DE9B8 -> 0x800DEA20
static int xSER_ord_compare(void * e1 /* r3 */, void * e2 /* r4 */) {
    // Local variables
    int rc; // r31
    struct st_SERIAL_CLIENTINFO * clt_a; // r30
    struct st_SERIAL_CLIENTINFO * clt_b; // r29
}

// Range: 0x800DEA20 -> 0x800DEA80
static int xSER_ord_test(void * key /* r3 */, void * elt /* r4 */) {
    // Local variables
    int rc; // r31
    unsigned int idtag; // r29
    struct st_SERIAL_CLIENTINFO * clt; // r30
}

static int been_here; // size: 0x4, address: 0x80D697E0
static int been_here; // size: 0x4, address: 0x80D697E4
static int been_here; // size: 0x4, address: 0x80D697E8
static int been_here; // size: 0x4, address: 0x80D697EC
static int been_here; // size: 0x4, address: 0x80D697F0
static int been_here; // size: 0x4, address: 0x80D697F4
static int been_here; // size: 0x4, address: 0x80D697F8
static char __FUNCTION__[16]; // size: 0x10, address: 0x80D60DBE
// Range: 0x800DEA80 -> 0x800DEDB4
static struct st_SERIAL_CLIENTINFO * XSER_get_client(unsigned int idtag /* r29 */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r30
    struct st_SERIAL_CLIENTINFO * clt; // r31
    int idx; // r28

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[16];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// total size: 0x0
struct st_XSAVEGAME_DATA {};
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};
// Range: 0x800DEDB4 -> 0x800DEF24
int xSerial_svgame_register(struct st_XSAVEGAME_DATA * sgctxt /* r29 */, enum en_SAVEGAME_MODE mode /* r27 */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r31
    struct st_SERIAL_CLIENTINFO * clt; // r28
    int i; // r30

    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x800DEF24 -> 0x800DEF3C
static int xSER_xsgclt_svinfo_ver(int * cur_space /* r5 */, int * max_fullgame /* r6 */) {}

// total size: 0x0
struct st_XSAVEGAME_WRITECONTEXT {};
// Range: 0x800DEF3C -> 0x800DEF80
static int xSER_xsgclt_svproc_ver(struct st_XSAVEGAME_DATA * xsg /* r1+0x8 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r1+0xC */) {
    // Local variables
    int ver; // r1+0x10
}

// total size: 0x0
struct st_XSAVEGAME_READCONTEXT {};
// Range: 0x800DEF80 -> 0x800DEFEC
static int xSER_xsgclt_ldproc_ver(struct st_XSAVEGAME_DATA * xsg /* r1+0x8 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r1+0xC */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r31
    int ver; // r1+0x10

    // References
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

static int been_here; // size: 0x4, address: 0x80D697FC
static char __FUNCTION__[23]; // size: 0x17, address: 0x80513C12
// Range: 0x800DEFEC -> 0x800DF094
static int xSER_xsgclt_svinfo_clt(void * cltdata /* r1+0x8 */, int * cur_space /* r29 */, int * max_fullgame /* r30 */) {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[23];
}

static int been_here; // size: 0x4, address: 0x80D69800
static char __FUNCTION__[23]; // size: 0x17, address: 0x80513C29
// Range: 0x800DF094 -> 0x800DF13C
static int xSER_xsgclt_svproc_clt(void * cltdata /* r1+0x8 */, struct st_XSAVEGAME_DATA * xsg /* r1+0xC */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r1+0x10 */) {
    // Local variables
    struct st_SERIAL_CLIENTINFO * clt; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[23];
}

static int been_here; // size: 0x4, address: 0x80D69804
static int been_here; // size: 0x4, address: 0x80D69808
static char __FUNCTION__[23]; // size: 0x17, address: 0x80513C40
// Range: 0x800DF13C -> 0x800DF268
static int xSER_xsgclt_ldproc_clt(struct st_XSAVEGAME_DATA * xsg /* r1+0x8 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r1+0xC */, unsigned int idtag /* r29 */, int maxsize /* r1+0x10 */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r30
    struct st_SERIAL_CLIENTINFO * clt; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[23];
    // -> static int been_here;
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

static int been_here; // size: 0x4, address: 0x80D6980C
static int been_here; // size: 0x4, address: 0x80D69810
static char __FUNCTION__[24]; // size: 0x18, address: 0x80513C57
// Range: 0x800DF268 -> 0x800DF3B0
static int xSER_xsgclt_svinfo_fill(int * cur_space /* r25 */, int * max_fullgame /* r26 */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r31
    struct st_SERIAL_CLIENTINFO * clt; // r27
    int i; // r29
    int tally; // r28
    int size; // r30

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[24];
    // -> static int been_here;
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

// Range: 0x800DF3B0 -> 0x800DF440
static int xSER_xsgclt_svproc_fill(struct st_XSAVEGAME_DATA * xsg /* r1+0x8 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r1+0xC */) {
    // Local variables
    char filbuf[9]; // r1+0x10
}

static int been_here; // size: 0x4, address: 0x80D69814
static char __FUNCTION__[24]; // size: 0x18, address: 0x80513C6F
// Range: 0x800DF440 -> 0x800DF55C
static int xSER_xsgclt_ldproc_fill(struct st_XSAVEGAME_DATA * xsg /* r1+0x8 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r1+0xC */) {
    // Local variables
    struct st_XSERIAL_DATA_PRIV * xsd; // r31
    char filbuf[9]; // r1+0x10

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[24];
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}

static int been_here; // size: 0x4, address: 0x80D69818
static int been_here; // size: 0x4, address: 0x80D6981C
static char __FUNCTION__[10]; // size: 0xA, address: 0x80D60DCE
// Range: 0x800DF55C -> 0x800DF788
// this: r31
void xSerial::DBBitDump(int ashex /* r1+0x8 */) const {
    // Local variables
    float pct; // f31
    int start_ele; // r30
    int stop_ele; // r29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[10];
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69820
static char __FUNCTION__[26]; // size: 0x1A, address: 0x80513C87
// Range: 0x800DF788 -> 0x800DF8A4
void xSerial_DB_dumpWatermarks() {
    // Local variables
    int i; // r30
    struct st_XSERIAL_DATA_PRIV * xsd; // r29
    struct st_SERIAL_CLIENTINFO * clt; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[26];
    // -> static struct st_XSERIAL_DATA_PRIV g_xserdata;
}


