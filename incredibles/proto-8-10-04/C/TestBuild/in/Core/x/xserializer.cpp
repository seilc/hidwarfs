/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
static signed int g_serinit; // size: 0x4, address: 0x611F38
static class st_XSERIAL_DATA_PRIV g_xserdata; // size: 0x24, address: 0x661260
static signed int g_tbl_onbit[32]; // size: 0x80, address: 0x661290
static signed int g_tbl_clear[32]; // size: 0x80, address: 0x661310
signed int xSER_xsgclt_svproc_fill(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x1B5510
signed int xSER_xsgclt_svinfo_fill(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x1B5570
signed int xSER_xsgclt_svproc_clt(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x1B5700
signed int xSER_xsgclt_svinfo_clt(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x1B5750
signed int xSER_xsgclt_svproc_ver(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x1B57E0
signed int xSER_xsgclt_svinfo_ver(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x1B5810
signed int xSER_xsgclt_ldproc_fill(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x1B54A0
signed int xSER_xsgclt_ldproc_clt(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x1B5690
signed int xSER_xsgclt_ldproc_ver(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x1B5770
signed int xSER_ord_compare(void *, void *); // size: 0x0, address: 0x1B5A70
signed int xSER_ord_test(void *, void *); // size: 0x0, address: 0x1B5A30
unsigned int gActiveHeap; // size: 0x4, address: 0x611E6C
// total size: 0x1C
class xSerial {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int baseoff; // offset 0x4, size 0x4
    class st_SERIAL_CLIENTINFO * ctxtdata; // offset 0x8, size 0x4
    signed int warned; // offset 0xC, size 0x4
    signed int curele; // offset 0x10, size 0x4
    signed int bitidx; // offset 0x14, size 0x4
    signed int bittally; // offset 0x18, size 0x4
};
// total size: 0x8
class st_SERIAL_PERCID_SIZE {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int needsize; // offset 0x4, size 0x4
};
// total size: 0x24
class st_XSERIAL_DATA_PRIV {
    // Members
public:
    signed int flg_info; // offset 0x0, size 0x4
    signed int * bitbuf; // offset 0x4, size 0x4
    signed int buf_bytcnt; // offset 0x8, size 0x4
    class st_SERIAL_CLIENTINFO * cltbuf; // offset 0xC, size 0x4
    class st_SERIAL_CLIENTINFO * cltnext; // offset 0x10, size 0x4
    class st_XORDEREDARRAY cltlist; // offset 0x14, size 0x10
};
// total size: 0x0
class st_XSAVEGAME_DATA {};
// total size: 0x0
class st_XSAVEGAME_READCONTEXT {};
// total size: 0x10
class st_SERIAL_CLIENTINFO {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int * membuf; // offset 0x4, size 0x4
    signed int trueoff; // offset 0x8, size 0x4
    signed int actsize; // offset 0xC, size 0x4
};
// total size: 0x0
class st_XSAVEGAME_WRITECONTEXT {};
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10
class st_XORDEREDARRAY {
    // Members
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B54A0 -> 0x001B550C
*/
// Range: 0x1B54A0 -> 0x1B550C
static signed int xSER_xsgclt_ldproc_fill(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B54A0 -> 0x1B550C
        char filbuf[9]; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5510 -> 0x001B5568
*/
// Range: 0x1B5510 -> 0x1B5568
static signed int xSER_xsgclt_svproc_fill(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5510 -> 0x1B5568
        char filbuf[9]; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5570 -> 0x001B568C
*/
// Range: 0x1B5570 -> 0x1B568C
static signed int xSER_xsgclt_svinfo_fill(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5570 -> 0x1B568C
        class st_XSERIAL_DATA_PRIV * xsd; // r2
        signed int i; // r8
        signed int tally; // r5
        signed int size; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5690 -> 0x001B56F4
*/
// Range: 0x1B5690 -> 0x1B56F4
static signed int xSER_xsgclt_ldproc_clt(class st_XSAVEGAME_DATA * xsg /* r17 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */, unsigned int idtag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5690 -> 0x1B56F4
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5700 -> 0x001B574C
*/
// Range: 0x1B5700 -> 0x1B574C
static signed int xSER_xsgclt_svproc_clt(void * cltdata /* r2 */, class st_XSAVEGAME_DATA * xsg /* r17 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1B5700 -> 0x1B574C
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5750 -> 0x001B5768
*/
// Range: 0x1B5750 -> 0x1B5768
static signed int xSER_xsgclt_svinfo_clt(void * cltdata /* r2 */, signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5750 -> 0x1B5768
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5770 -> 0x001B57D4
*/
// Range: 0x1B5770 -> 0x1B57D4
static signed int xSER_xsgclt_ldproc_ver(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5770 -> 0x1B57D4
        class st_XSERIAL_DATA_PRIV * xsd; // r2
        signed int ver; // r29+0x2C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B57E0 -> 0x001B5810
*/
// Range: 0x1B57E0 -> 0x1B5810
static signed int xSER_xsgclt_svproc_ver(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B57E0 -> 0x1B5810
        signed int ver; // r29+0x1C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5810 -> 0x001B5824
*/
// Range: 0x1B5810 -> 0x1B5824
static signed int xSER_xsgclt_svinfo_ver(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5810 -> 0x1B5824
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5830 -> 0x001B5990
*/
// Range: 0x1B5830 -> 0x1B5990
signed int xSerial_svgame_register(class st_XSAVEGAME_DATA * sgctxt /* r19 */, enum en_SAVEGAME_MODE mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5830 -> 0x1B5990
        class st_XSERIAL_DATA_PRIV * xsd; // r2
        class st_SERIAL_CLIENTINFO * clt; // r2
        signed int i; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5990 -> 0x001B5A28
*/
// Range: 0x1B5990 -> 0x1B5A28
static class st_SERIAL_CLIENTINFO * XSER_get_client(unsigned int idtag /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1B5990 -> 0x1B5A28
        class st_XSERIAL_DATA_PRIV * xsd; // r2
        class st_SERIAL_CLIENTINFO * clt; // r17
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5A30 -> 0x001B5A68
*/
// Range: 0x1B5A30 -> 0x1B5A68
static signed int xSER_ord_test(void * key /* r2 */, void * elt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5A30 -> 0x1B5A68
        signed int rc; // r2
        unsigned int idtag; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5A70 -> 0x001B5AAC
*/
// Range: 0x1B5A70 -> 0x1B5AAC
static signed int xSER_ord_compare(void * e1 /* r2 */, void * e2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5A70 -> 0x1B5AAC
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5AB0 -> 0x001B5ECC
*/
// Range: 0x1B5AB0 -> 0x1B5ECC
static void xSER_init_buffers(signed int count /* r18 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1B5AB0 -> 0x1B5ECC
        class st_XSERIAL_DATA_PRIV * xsd; // r2
        signed int i; // r16
        signed int tally; // r20
        signed int sicnt; // r2
        class st_SERIAL_PERCID_SIZE * sitmp; // r5
        class st_SERIAL_CLIENTINFO * tmp_clt; // r21
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5ED0 -> 0x001B5EE8
*/
// Range: 0x1B5ED0 -> 0x1B5EE8
void xSerialWipeMainBuffer() {
    /* anonymous block */ {
        // Range: 0x1B5ED0 -> 0x1B5EE8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5EF0 -> 0x001B5F94
*/
// Range: 0x1B5EF0 -> 0x1B5F94
// this: r2
signed int xSerial::rdbit() {
    /* anonymous block */ {
        // Range: 0x1B5EF0 -> 0x1B5F94
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5FA0 -> 0x001B6080
*/
// Range: 0x1B5FA0 -> 0x1B6080
// this: r2
void xSerial::wrbit(signed int is_on /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5FA0 -> 0x1B6080
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B6080 -> 0x001B608C
*/
// Range: 0x1B6080 -> 0x1B608C
// this: r2
signed int xSerial::Read(float * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B6080 -> 0x1B608C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B6090 -> 0x001B609C
*/
// Range: 0x1B6090 -> 0x1B609C
// this: r2
signed int xSerial::Read(unsigned int * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B6090 -> 0x1B609C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B60A0 -> 0x001B60AC
*/
// Range: 0x1B60A0 -> 0x1B60AC
// this: r2
signed int xSerial::Read(signed int * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B60A0 -> 0x1B60AC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B60B0 -> 0x001B60BC
*/
// Range: 0x1B60B0 -> 0x1B60BC
// this: r2
signed int xSerial::Read(signed short * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B60B0 -> 0x1B60BC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B60C0 -> 0x001B60CC
*/
// Range: 0x1B60C0 -> 0x1B60CC
// this: r2
signed int xSerial::Read(unsigned char * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B60C0 -> 0x1B60CC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B60D0 -> 0x001B60DC
*/
// Range: 0x1B60D0 -> 0x1B60DC
// this: r2
signed int xSerial::Read_b1(unsigned int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B60D0 -> 0x1B60DC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B60E0 -> 0x001B60EC
*/
// Range: 0x1B60E0 -> 0x1B60EC
// this: r2
signed int xSerial::Read_b1(signed int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B60E0 -> 0x1B60EC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B60F0 -> 0x001B6280
*/
// Range: 0x1B60F0 -> 0x1B6280
// this: r17
signed int xSerial::Read(char * buf /* r2 */, signed int elesize /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B60F0 -> 0x1B6280
        signed int nbit; // r16
        signed int * iptr; // r20
        signed int bidx; // r19
        signed int i; // r18
        signed int bitval; // r2
        char * cptr; // r20
        signed int bitval; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B6280 -> 0x001B62A8
*/
// Range: 0x1B6280 -> 0x1B62A8
// this: r2
signed int xSerial::Write(float data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x1B6280 -> 0x1B62A8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B62B0 -> 0x001B62D8
*/
// Range: 0x1B62B0 -> 0x1B62D8
// this: r2
signed int xSerial::Write(unsigned int data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x1B62B0 -> 0x1B62D8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B62E0 -> 0x001B6308
*/
// Range: 0x1B62E0 -> 0x1B6308
// this: r2
signed int xSerial::Write(signed int data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x1B62E0 -> 0x1B6308
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B6310 -> 0x001B6338
*/
// Range: 0x1B6310 -> 0x1B6338
// this: r2
signed int xSerial::Write(signed short data /* r29+0x1E */) {
    /* anonymous block */ {
        // Range: 0x1B6310 -> 0x1B6338
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B6340 -> 0x001B6368
*/
// Range: 0x1B6340 -> 0x1B6368
// this: r2
signed int xSerial::Write(unsigned char data /* r29+0x1F */) {
    /* anonymous block */ {
        // Range: 0x1B6340 -> 0x1B6368
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B6370 -> 0x001B6398
*/
// Range: 0x1B6370 -> 0x1B6398
// this: r2
signed int xSerial::Write_b1(unsigned int bits /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x1B6370 -> 0x1B6398
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B63A0 -> 0x001B63C8
*/
// Range: 0x1B63A0 -> 0x1B63C8
// this: r2
signed int xSerial::Write_b1(signed int bits /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x1B63A0 -> 0x1B63C8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B63D0 -> 0x001B6508
*/
// Range: 0x1B63D0 -> 0x1B6508
// this: r17
signed int xSerial::Write(char * data /* r2 */, signed int elesize /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B63D0 -> 0x1B6508
        signed int nbit; // r16
        signed int bidx; // r20
        signed int * iptr; // r19
        signed int i; // r18
        signed int bidx; // r20
        char * cptr; // r19
        signed int i; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B6510 -> 0x001B655C
*/
// Range: 0x1B6510 -> 0x1B655C
// this: r16
void xSerial::setClient(unsigned int idtag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B6510 -> 0x1B655C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B6560 -> 0x001B65A4
*/
// Range: 0x1B6560 -> 0x1B65A4
// this: r16
xSerial::~xSerial() {
    /* anonymous block */ {
        // Range: 0x1B6560 -> 0x1B65A4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B65B0 -> 0x001B66B8
*/
// Range: 0x1B65B0 -> 0x1B66B8
void xSerialTraverse(signed int (* func)(unsigned int, class xSerial *) /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1B65B0 -> 0x1B66B8
        signed int i; // r20
        class st_XSERIAL_DATA_PRIV * xsd; // r2
        class st_SERIAL_CLIENTINFO * clt; // r2
        class xSerial xser; // r29+0xA0
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B66C0 -> 0x001B66D0
*/
// Range: 0x1B66C0 -> 0x1B66D0
signed int xSerialShutdown() {
    /* anonymous block */ {
        // Range: 0x1B66C0 -> 0x1B66D0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B66D0 -> 0x001B6804
*/
// Range: 0x1B66D0 -> 0x1B6804
signed int xSerialStartup(signed int count /* r17 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1B66D0 -> 0x1B6804
    }
}


