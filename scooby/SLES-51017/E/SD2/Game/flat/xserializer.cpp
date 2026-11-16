/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_serinit; // size: 0x4, address: 0x358A68
static class st_XSERIAL_DATA_PRIV g_xserdata; // size: 0x24, address: 0x2B3BA0
static signed int g_tbl_onbit[32]; // size: 0x80, address: 0x2B3BD0
static signed int g_tbl_clear[32]; // size: 0x80, address: 0x2B3C50
signed int xSER_xsgclt_ldproc_fill(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x197D40
signed int xSER_xsgclt_ldproc_clt(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x197EF0
signed int xSER_xsgclt_ldproc_ver(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x197FD0
signed int xSER_xsgclt_svproc_fill(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x197DA0
signed int xSER_xsgclt_svinfo_fill(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x197DF0
signed int xSER_xsgclt_svproc_clt(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x197F60
signed int xSER_xsgclt_svinfo_clt(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x197FB0
signed int xSER_xsgclt_svproc_ver(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x198030
signed int xSER_xsgclt_svinfo_ver(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x198060
signed int xSER_ord_compare(void *, void *); // size: 0x0, address: 0x1982A0
signed int xSER_ord_test(void *, void *); // size: 0x0, address: 0x198270
unsigned int gActiveHeap; // size: 0x4, address: 0x358634
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
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
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
// total size: 0x0
class st_XSAVEGAME_DATA {};
// total size: 0x0
class st_XSAVEGAME_READCONTEXT {};
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x0
class st_XSAVEGAME_WRITECONTEXT {};
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
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197D40 -> 0x00197DA0
*/
// Range: 0x197D40 -> 0x197DA0
static signed int xSER_xsgclt_ldproc_fill(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197D40 -> 0x197DA0
        char filbuf[9]; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197DA0 -> 0x00197DE8
*/
// Range: 0x197DA0 -> 0x197DE8
static signed int xSER_xsgclt_svproc_fill(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197DA0 -> 0x197DE8
        char filbuf[9]; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197DF0 -> 0x00197EE4
*/
// Range: 0x197DF0 -> 0x197EE4
static signed int xSER_xsgclt_svinfo_fill(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197DF0 -> 0x197EE4
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
    Code range: 0x00197EF0 -> 0x00197F54
*/
// Range: 0x197EF0 -> 0x197F54
static signed int xSER_xsgclt_ldproc_clt(class st_XSAVEGAME_DATA * xsg /* r17 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */, unsigned int idtag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197EF0 -> 0x197F54
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197F60 -> 0x00197FAC
*/
// Range: 0x197F60 -> 0x197FAC
static signed int xSER_xsgclt_svproc_clt(void * cltdata /* r2 */, class st_XSAVEGAME_DATA * xsg /* r17 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x197F60 -> 0x197FAC
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197FB0 -> 0x00197FC8
*/
// Range: 0x197FB0 -> 0x197FC8
static signed int xSER_xsgclt_svinfo_clt(void * cltdata /* r2 */, signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197FB0 -> 0x197FC8
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00197FD0 -> 0x0019802C
*/
// Range: 0x197FD0 -> 0x19802C
static signed int xSER_xsgclt_ldproc_ver(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x197FD0 -> 0x19802C
        signed int ver; // r29+0x2C
        class st_XSERIAL_DATA_PRIV * xsd; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198030 -> 0x00198060
*/
// Range: 0x198030 -> 0x198060
static signed int xSER_xsgclt_svproc_ver(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198030 -> 0x198060
        signed int ver; // r29+0x1C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198060 -> 0x00198074
*/
// Range: 0x198060 -> 0x198074
static signed int xSER_xsgclt_svinfo_ver(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198060 -> 0x198074
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198080 -> 0x001981C4
*/
// Range: 0x198080 -> 0x1981C4
signed int xSerial_svgame_register(class st_XSAVEGAME_DATA * sgctxt /* r19 */, enum en_SAVEGAME_MODE mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198080 -> 0x1981C4
        signed int i; // r16
        class st_SERIAL_CLIENTINFO * clt; // r2
        class st_XSERIAL_DATA_PRIV * xsd; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001981D0 -> 0x00198264
*/
// Range: 0x1981D0 -> 0x198264
static class st_SERIAL_CLIENTINFO * XSER_get_client(unsigned int idtag /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1981D0 -> 0x198264
        signed int idx; // r2
        class st_SERIAL_CLIENTINFO * clt; // r16
        class st_XSERIAL_DATA_PRIV * xsd; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198270 -> 0x0019829C
*/
// Range: 0x198270 -> 0x19829C
static signed int xSER_ord_test(void * key /* r2 */, void * elt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198270 -> 0x19829C
        unsigned int idtag; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001982A0 -> 0x001982D0
*/
// Range: 0x1982A0 -> 0x1982D0
static signed int xSER_ord_compare(void * e1 /* r2 */, void * e2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1982A0 -> 0x1982D0
        signed int rc; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001982D0 -> 0x001984B8
*/
// Range: 0x1982D0 -> 0x1984B8
static void xSER_init_buffers(signed int count /* r17 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1982D0 -> 0x1984B8
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
    Code range: 0x001984C0 -> 0x001984D8
*/
// Range: 0x1984C0 -> 0x1984D8
void xSerialWipeMainBuffer() {
    /* anonymous block */ {
        // Range: 0x1984C0 -> 0x1984D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001984E0 -> 0x001985B4
*/
// Range: 0x1984E0 -> 0x1985B4
// this: r2
void xSerial::wrbit(signed int is_on /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1984E0 -> 0x1985B4
        class st_SERIAL_CLIENTINFO * clt; // r9
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001985C0 -> 0x001985CC
*/
// Range: 0x1985C0 -> 0x1985CC
// this: r2
signed int xSerial::Read(float * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1985C0 -> 0x1985CC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001985D0 -> 0x001985DC
*/
// Range: 0x1985D0 -> 0x1985DC
// this: r2
signed int xSerial::Read(unsigned int * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1985D0 -> 0x1985DC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001985E0 -> 0x001985EC
*/
// Range: 0x1985E0 -> 0x1985EC
// this: r2
signed int xSerial::Read(signed int * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1985E0 -> 0x1985EC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001985F0 -> 0x001985FC
*/
// Range: 0x1985F0 -> 0x1985FC
// this: r2
signed int xSerial::Read(signed short * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1985F0 -> 0x1985FC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198600 -> 0x0019860C
*/
// Range: 0x198600 -> 0x19860C
// this: r2
signed int xSerial::Read(unsigned char * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198600 -> 0x19860C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198610 -> 0x0019861C
*/
// Range: 0x198610 -> 0x19861C
// this: r2
signed int xSerial::Read_b7(unsigned int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198610 -> 0x19861C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198620 -> 0x0019862C
*/
// Range: 0x198620 -> 0x19862C
// this: r2
signed int xSerial::Read_b2(signed int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198620 -> 0x19862C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198630 -> 0x0019863C
*/
// Range: 0x198630 -> 0x19863C
// this: r2
signed int xSerial::Read_b1(unsigned int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198630 -> 0x19863C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198640 -> 0x0019864C
*/
// Range: 0x198640 -> 0x19864C
// this: r2
signed int xSerial::Read_b1(signed int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198640 -> 0x19864C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198650 -> 0x00198780
*/
// Range: 0x198650 -> 0x198780
// this: r2
signed int xSerial::Read(char * buf /* r2 */, signed int elesize /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198650 -> 0x198780
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
    Code range: 0x00198780 -> 0x001987A8
*/
// Range: 0x198780 -> 0x1987A8
// this: r2
signed int xSerial::Write(float data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x198780 -> 0x1987A8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001987B0 -> 0x001987D8
*/
// Range: 0x1987B0 -> 0x1987D8
// this: r2
signed int xSerial::Write(unsigned int data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x1987B0 -> 0x1987D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001987E0 -> 0x00198808
*/
// Range: 0x1987E0 -> 0x198808
// this: r2
signed int xSerial::Write(signed int data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x1987E0 -> 0x198808
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198810 -> 0x00198838
*/
// Range: 0x198810 -> 0x198838
// this: r2
signed int xSerial::Write(signed short data /* r29+0x1E */) {
    /* anonymous block */ {
        // Range: 0x198810 -> 0x198838
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198840 -> 0x00198868
*/
// Range: 0x198840 -> 0x198868
// this: r2
signed int xSerial::Write(unsigned char data /* r29+0x1F */) {
    /* anonymous block */ {
        // Range: 0x198840 -> 0x198868
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198870 -> 0x00198898
*/
// Range: 0x198870 -> 0x198898
// this: r2
signed int xSerial::Write_b7(unsigned int bits /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x198870 -> 0x198898
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001988A0 -> 0x001988C8
*/
// Range: 0x1988A0 -> 0x1988C8
// this: r2
signed int xSerial::Write_b2(signed int bits /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x1988A0 -> 0x1988C8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001988D0 -> 0x001988F8
*/
// Range: 0x1988D0 -> 0x1988F8
// this: r2
signed int xSerial::Write_b1(signed int bits /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x1988D0 -> 0x1988F8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198900 -> 0x001989C8
*/
// Range: 0x198900 -> 0x1989C8
// this: r21
signed int xSerial::Write(char * data /* r2 */, signed int elesize /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198900 -> 0x1989C8
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
    Code range: 0x001989D0 -> 0x00198A1C
*/
// Range: 0x1989D0 -> 0x198A1C
// this: r16
void xSerial::setClient(unsigned int idtag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1989D0 -> 0x198A1C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198A20 -> 0x00198A64
*/
// Range: 0x198A20 -> 0x198A64
// this: r16
xSerial::~xSerial() {
    /* anonymous block */ {
        // Range: 0x198A20 -> 0x198A64
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198A70 -> 0x00198A78
*/
// Range: 0x198A70 -> 0x198A78
// this: r2
xSerial::xSerial() {
    /* anonymous block */ {
        // Range: 0x198A70 -> 0x198A78
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198A80 -> 0x00198B50
*/
// Range: 0x198A80 -> 0x198B50
void xSerialTraverse(signed int (* func)(unsigned int, class xSerial *) /* r20 */) {
    /* anonymous block */ {
        // Range: 0x198A80 -> 0x198B50
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
    Code range: 0x00198B50 -> 0x00198B68
*/
// Range: 0x198B50 -> 0x198B68
signed int xSerialShutdown() {
    /* anonymous block */ {
        // Range: 0x198B50 -> 0x198B68
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198B70 -> 0x00198CA4
*/
// Range: 0x198B70 -> 0x198CA4
signed int xSerialStartup(signed int count /* r18 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r17 */) {
    /* anonymous block */ {
        // Range: 0x198B70 -> 0x198CA4
    }
}


