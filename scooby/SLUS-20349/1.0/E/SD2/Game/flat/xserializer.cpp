/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_serinit; // size: 0x4, address: 0x3580D8
static class st_XSERIAL_DATA_PRIV g_xserdata; // size: 0x24, address: 0x2B32A0
static signed int g_tbl_onbit[32]; // size: 0x80, address: 0x2B32D0
static signed int g_tbl_clear[32]; // size: 0x80, address: 0x2B3350
signed int xSER_xsgclt_ldproc_fill(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x1975A0
signed int xSER_xsgclt_ldproc_clt(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x197750
signed int xSER_xsgclt_ldproc_ver(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x197830
signed int xSER_xsgclt_svproc_fill(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x197600
signed int xSER_xsgclt_svinfo_fill(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x197650
signed int xSER_xsgclt_svproc_clt(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x1977C0
signed int xSER_xsgclt_svinfo_clt(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x197810
signed int xSER_xsgclt_svproc_ver(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x197890
signed int xSER_xsgclt_svinfo_ver(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x1978C0
signed int xSER_ord_compare(void *, void *); // size: 0x0, address: 0x197B00
signed int xSER_ord_test(void *, void *); // size: 0x0, address: 0x197AD0
unsigned int gActiveHeap; // size: 0x4, address: 0x357CAC
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
// total size: 0x10
class st_SERIAL_CLIENTINFO {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int * membuf; // offset 0x4, size 0x4
    signed int trueoff; // offset 0x8, size 0x4
    signed int actsize; // offset 0xC, size 0x4
};
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x0
class st_XSAVEGAME_DATA {};
// total size: 0x0
class st_XSAVEGAME_WRITECONTEXT {};
// total size: 0x0
class st_XSAVEGAME_READCONTEXT {};
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
// total size: 0x10
class st_XORDEREDARRAY {
    // Members
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};

/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001975A0 -> 0x00197600
*/
// Range: 0x1975A0 -> 0x197600
static signed int xSER_xsgclt_ldproc_fill(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1975A0 -> 0x197600
        char filbuf[9]; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197600 -> 0x00197648
*/
// Range: 0x197600 -> 0x197648
static signed int xSER_xsgclt_svproc_fill(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197600 -> 0x197648
        char filbuf[9]; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197650 -> 0x00197744
*/
// Range: 0x197650 -> 0x197744
static signed int xSER_xsgclt_svinfo_fill(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197650 -> 0x197744
        signed int size; // r4
        signed int tally; // r3
        signed int i; // r2
        class st_XSERIAL_DATA_PRIV * xsd; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197750 -> 0x001977B4
*/
// Range: 0x197750 -> 0x1977B4
static signed int xSER_xsgclt_ldproc_clt(class st_XSAVEGAME_DATA * xsg /* r17 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */, unsigned int idtag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197750 -> 0x1977B4
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001977C0 -> 0x0019780C
*/
// Range: 0x1977C0 -> 0x19780C
static signed int xSER_xsgclt_svproc_clt(void * cltdata /* r2 */, class st_XSAVEGAME_DATA * xsg /* r17 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1977C0 -> 0x19780C
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197810 -> 0x00197828
*/
// Range: 0x197810 -> 0x197828
static signed int xSER_xsgclt_svinfo_clt(void * cltdata /* r2 */, signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197810 -> 0x197828
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197830 -> 0x0019788C
*/
// Range: 0x197830 -> 0x19788C
static signed int xSER_xsgclt_ldproc_ver(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197830 -> 0x19788C
        signed int ver; // r29+0x2C
        class st_XSERIAL_DATA_PRIV * xsd; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197890 -> 0x001978C0
*/
// Range: 0x197890 -> 0x1978C0
static signed int xSER_xsgclt_svproc_ver(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197890 -> 0x1978C0
        signed int ver; // r29+0x1C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001978C0 -> 0x001978D4
*/
// Range: 0x1978C0 -> 0x1978D4
static signed int xSER_xsgclt_svinfo_ver(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1978C0 -> 0x1978D4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001978E0 -> 0x00197A24
*/
// Range: 0x1978E0 -> 0x197A24
signed int xSerial_svgame_register(class st_XSAVEGAME_DATA * sgctxt /* r19 */, enum en_SAVEGAME_MODE mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1978E0 -> 0x197A24
        signed int i; // r16
        class st_SERIAL_CLIENTINFO * clt; // r2
        class st_XSERIAL_DATA_PRIV * xsd; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197A30 -> 0x00197AC4
*/
// Range: 0x197A30 -> 0x197AC4
static class st_SERIAL_CLIENTINFO * XSER_get_client(unsigned int idtag /* r18 */) {
    /* anonymous block */ {
        // Range: 0x197A30 -> 0x197AC4
        signed int idx; // r2
        class st_SERIAL_CLIENTINFO * clt; // r16
        class st_XSERIAL_DATA_PRIV * xsd; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197AD0 -> 0x00197AFC
*/
// Range: 0x197AD0 -> 0x197AFC
static signed int xSER_ord_test(void * key /* r2 */, void * elt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197AD0 -> 0x197AFC
        unsigned int idtag; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197B00 -> 0x00197B30
*/
// Range: 0x197B00 -> 0x197B30
static signed int xSER_ord_compare(void * e1 /* r2 */, void * e2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197B00 -> 0x197B30
        signed int rc; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197B30 -> 0x00197D18
*/
// Range: 0x197B30 -> 0x197D18
static void xSER_init_buffers(signed int count /* r17 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r16 */) {
    /* anonymous block */ {
        // Range: 0x197B30 -> 0x197D18
        class st_SERIAL_CLIENTINFO * tmp_clt; // r19
        class st_SERIAL_PERCID_SIZE * sitmp; // r4
        signed int sicnt; // r18
        signed int tally; // r2
        signed int i; // r2
        class st_XSERIAL_DATA_PRIV * xsd; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197D20 -> 0x00197D38
*/
// Range: 0x197D20 -> 0x197D38
void xSerialWipeMainBuffer() {
    /* anonymous block */ {
        // Range: 0x197D20 -> 0x197D38
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197D40 -> 0x00197E14
*/
// Range: 0x197D40 -> 0x197E14
// this: r2
void xSerial::wrbit(signed int is_on /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197D40 -> 0x197E14
        class st_SERIAL_CLIENTINFO * clt; // r9
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197E20 -> 0x00197E2C
*/
// Range: 0x197E20 -> 0x197E2C
// this: r2
signed int xSerial::Read(float * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197E20 -> 0x197E2C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197E30 -> 0x00197E3C
*/
// Range: 0x197E30 -> 0x197E3C
// this: r2
signed int xSerial::Read(unsigned int * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197E30 -> 0x197E3C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197E40 -> 0x00197E4C
*/
// Range: 0x197E40 -> 0x197E4C
// this: r2
signed int xSerial::Read(signed int * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197E40 -> 0x197E4C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197E50 -> 0x00197E5C
*/
// Range: 0x197E50 -> 0x197E5C
// this: r2
signed int xSerial::Read(signed short * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197E50 -> 0x197E5C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197E60 -> 0x00197E6C
*/
// Range: 0x197E60 -> 0x197E6C
// this: r2
signed int xSerial::Read(unsigned char * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197E60 -> 0x197E6C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197E70 -> 0x00197E7C
*/
// Range: 0x197E70 -> 0x197E7C
// this: r2
signed int xSerial::Read_b7(unsigned int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197E70 -> 0x197E7C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197E80 -> 0x00197E8C
*/
// Range: 0x197E80 -> 0x197E8C
// this: r2
signed int xSerial::Read_b2(signed int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197E80 -> 0x197E8C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197E90 -> 0x00197E9C
*/
// Range: 0x197E90 -> 0x197E9C
// this: r2
signed int xSerial::Read_b1(unsigned int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197E90 -> 0x197E9C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197EA0 -> 0x00197EAC
*/
// Range: 0x197EA0 -> 0x197EAC
// this: r2
signed int xSerial::Read_b1(signed int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197EA0 -> 0x197EAC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197EB0 -> 0x00197FE0
*/
// Range: 0x197EB0 -> 0x197FE0
// this: r2
signed int xSerial::Read(char * buf /* r2 */, signed int elesize /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197EB0 -> 0x197FE0
        signed int i; // r6
        signed int bidx; // r3
        char * cptr; // r2
        signed int nbit; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197FE0 -> 0x00198008
*/
// Range: 0x197FE0 -> 0x198008
// this: r2
signed int xSerial::Write(float data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x197FE0 -> 0x198008
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198010 -> 0x00198038
*/
// Range: 0x198010 -> 0x198038
// this: r2
signed int xSerial::Write(unsigned int data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x198010 -> 0x198038
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198040 -> 0x00198068
*/
// Range: 0x198040 -> 0x198068
// this: r2
signed int xSerial::Write(signed int data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x198040 -> 0x198068
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198070 -> 0x00198098
*/
// Range: 0x198070 -> 0x198098
// this: r2
signed int xSerial::Write(signed short data /* r29+0x1E */) {
    /* anonymous block */ {
        // Range: 0x198070 -> 0x198098
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001980A0 -> 0x001980C8
*/
// Range: 0x1980A0 -> 0x1980C8
// this: r2
signed int xSerial::Write(unsigned char data /* r29+0x1F */) {
    /* anonymous block */ {
        // Range: 0x1980A0 -> 0x1980C8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001980D0 -> 0x001980F8
*/
// Range: 0x1980D0 -> 0x1980F8
// this: r2
signed int xSerial::Write_b7(unsigned int bits /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x1980D0 -> 0x1980F8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198100 -> 0x00198128
*/
// Range: 0x198100 -> 0x198128
// this: r2
signed int xSerial::Write_b2(signed int bits /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x198100 -> 0x198128
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198130 -> 0x00198158
*/
// Range: 0x198130 -> 0x198158
// this: r2
signed int xSerial::Write_b1(signed int bits /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x198130 -> 0x198158
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198160 -> 0x00198228
*/
// Range: 0x198160 -> 0x198228
// this: r21
signed int xSerial::Write(char * data /* r2 */, signed int elesize /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198160 -> 0x198228
        signed int i; // r19
        signed int bidx; // r18
        char * cptr; // r17
        signed int nbit; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198230 -> 0x0019827C
*/
// Range: 0x198230 -> 0x19827C
// this: r16
void xSerial::setClient(unsigned int idtag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198230 -> 0x19827C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198280 -> 0x001982C4
*/
// Range: 0x198280 -> 0x1982C4
// this: r16
xSerial::~xSerial() {
    /* anonymous block */ {
        // Range: 0x198280 -> 0x1982C4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001982D0 -> 0x001982D8
*/
// Range: 0x1982D0 -> 0x1982D8
// this: r2
xSerial::xSerial() {
    /* anonymous block */ {
        // Range: 0x1982D0 -> 0x1982D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001982E0 -> 0x001983B0
*/
// Range: 0x1982E0 -> 0x1983B0
void xSerialTraverse(signed int (* func)(unsigned int, class xSerial *) /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1982E0 -> 0x1983B0
        signed int rc; // r2
        class xSerial xser; // r29+0x60
        class st_SERIAL_CLIENTINFO * clt; // r18
        class st_XSERIAL_DATA_PRIV * xsd; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001983B0 -> 0x001983C8
*/
// Range: 0x1983B0 -> 0x1983C8
signed int xSerialShutdown() {
    /* anonymous block */ {
        // Range: 0x1983B0 -> 0x1983C8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001983D0 -> 0x00198504
*/
// Range: 0x1983D0 -> 0x198504
signed int xSerialStartup(signed int count /* r18 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1983D0 -> 0x198504
    }
}


