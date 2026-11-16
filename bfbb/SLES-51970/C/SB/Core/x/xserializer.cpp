/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_serinit; // size: 0x4, address: 0x50EFFC
static class st_XSERIAL_DATA_PRIV g_xserdata; // size: 0x24, address: 0x5A45A0
static signed int g_tbl_onbit[32]; // size: 0x80, address: 0x5A45D0
static signed int g_tbl_clear[32]; // size: 0x80, address: 0x5A4650
signed int xSER_xsgclt_ldproc_fill(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x202740
signed int xSER_xsgclt_ldproc_clt(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x202910
signed int xSER_xsgclt_ldproc_ver(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x2029F0
signed int xSER_xsgclt_svproc_fill(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x2027B0
signed int xSER_xsgclt_svinfo_fill(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x202800
signed int xSER_xsgclt_svproc_clt(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x202980
signed int xSER_xsgclt_svinfo_clt(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x2029D0
signed int xSER_xsgclt_svproc_ver(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x202A50
signed int xSER_xsgclt_svinfo_ver(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x202A80
signed int xSER_ord_compare(void *, void *); // size: 0x0, address: 0x202CE0
signed int xSER_ord_test(void *, void *); // size: 0x0, address: 0x202CA0
unsigned int gActiveHeap; // size: 0x4, address: 0x50EF44
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
// total size: 0x0
class st_XSAVEGAME_DATA {};
// total size: 0x0
class st_XSAVEGAME_READCONTEXT {};
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};
// total size: 0xC
class xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x0
class st_XSAVEGAME_WRITECONTEXT {};
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

/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202740 -> 0x002027AC
*/
// Range: 0x202740 -> 0x2027AC
static signed int xSER_xsgclt_ldproc_fill(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x202740 -> 0x2027AC
        char filbuf[9]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002027B0 -> 0x002027F8
*/
// Range: 0x2027B0 -> 0x2027F8
static signed int xSER_xsgclt_svproc_fill(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2027B0 -> 0x2027F8
        char filbuf[9]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202800 -> 0x0020290C
*/
// Range: 0x202800 -> 0x20290C
static signed int xSER_xsgclt_svinfo_fill(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x202800 -> 0x20290C
        class st_XSERIAL_DATA_PRIV * xsd; // r9
        signed int i; // r8
        signed int tally; // r5
        signed int size; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202910 -> 0x00202974
*/
// Range: 0x202910 -> 0x202974
static signed int xSER_xsgclt_ldproc_clt(class st_XSAVEGAME_DATA * xsg /* r17 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */, unsigned int idtag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x202910 -> 0x202974
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202980 -> 0x002029CC
*/
// Range: 0x202980 -> 0x2029CC
static signed int xSER_xsgclt_svproc_clt(void * cltdata /* r2 */, class st_XSAVEGAME_DATA * xsg /* r17 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x202980 -> 0x2029CC
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002029D0 -> 0x002029E8
*/
// Range: 0x2029D0 -> 0x2029E8
static signed int xSER_xsgclt_svinfo_clt(void * cltdata /* r2 */, signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2029D0 -> 0x2029E8
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002029F0 -> 0x00202A4C
*/
// Range: 0x2029F0 -> 0x202A4C
static signed int xSER_xsgclt_ldproc_ver(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2029F0 -> 0x202A4C
        class st_XSERIAL_DATA_PRIV * xsd; // r16
        signed int ver; // r29+0x2C
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202A50 -> 0x00202A80
*/
// Range: 0x202A50 -> 0x202A80
static signed int xSER_xsgclt_svproc_ver(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x202A50 -> 0x202A80
        signed int ver; // r29+0x1C
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202A80 -> 0x00202A94
*/
// Range: 0x202A80 -> 0x202A94
static signed int xSER_xsgclt_svinfo_ver(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x202A80 -> 0x202A94
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202AA0 -> 0x00202C00
*/
// Range: 0x202AA0 -> 0x202C00
signed int xSerial_svgame_register(class st_XSAVEGAME_DATA * sgctxt /* r19 */, enum en_SAVEGAME_MODE mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x202AA0 -> 0x202C00
        class st_XSERIAL_DATA_PRIV * xsd; // r18
        class st_SERIAL_CLIENTINFO * clt; // r2
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202C00 -> 0x00202C9C
*/
// Range: 0x202C00 -> 0x202C9C
static class st_SERIAL_CLIENTINFO * XSER_get_client(unsigned int idtag /* r18 */) {
    /* anonymous block */ {
        // Range: 0x202C00 -> 0x202C9C
        class st_XSERIAL_DATA_PRIV * xsd; // r17
        class st_SERIAL_CLIENTINFO * clt; // r16
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202CA0 -> 0x00202CE0
*/
// Range: 0x202CA0 -> 0x202CE0
static signed int xSER_ord_test(void * key /* r2 */, void * elt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x202CA0 -> 0x202CE0
        signed int rc; // r2
        unsigned int idtag; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202CE0 -> 0x00202D28
*/
// Range: 0x202CE0 -> 0x202D28
static signed int xSER_ord_compare(void * e1 /* r2 */, void * e2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x202CE0 -> 0x202D28
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202D30 -> 0x00202F34
*/
// Range: 0x202D30 -> 0x202F34
static void xSER_init_buffers(signed int count /* r19 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r18 */) {
    /* anonymous block */ {
        // Range: 0x202D30 -> 0x202F34
        class st_XSERIAL_DATA_PRIV * xsd; // r17
        signed int i; // r16
        signed int tally; // r20
        signed int sicnt; // r2
        class st_SERIAL_PERCID_SIZE * sitmp; // r5
        class st_SERIAL_CLIENTINFO * tmp_clt; // r21
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202F40 -> 0x00202F58
*/
// Range: 0x202F40 -> 0x202F58
void xSerialWipeMainBuffer() {
    /* anonymous block */ {
        // Range: 0x202F40 -> 0x202F58
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202F60 -> 0x00203008
*/
// Range: 0x202F60 -> 0x203008
// this: r2
signed int xSerial::rdbit() {
    /* anonymous block */ {
        // Range: 0x202F60 -> 0x203008
        class st_SERIAL_CLIENTINFO * clt; // r5
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203010 -> 0x002030F0
*/
// Range: 0x203010 -> 0x2030F0
// this: r2
void xSerial::wrbit(signed int is_on /* r2 */) {
    /* anonymous block */ {
        // Range: 0x203010 -> 0x2030F0
        class st_SERIAL_CLIENTINFO * clt; // r9
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002030F0 -> 0x002030FC
*/
// Range: 0x2030F0 -> 0x2030FC
// this: r2
signed int xSerial::Read(float * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2030F0 -> 0x2030FC
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203100 -> 0x0020310C
*/
// Range: 0x203100 -> 0x20310C
// this: r2
signed int xSerial::Read(unsigned int * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x203100 -> 0x20310C
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203110 -> 0x0020311C
*/
// Range: 0x203110 -> 0x20311C
// this: r2
signed int xSerial::Read(signed int * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x203110 -> 0x20311C
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203120 -> 0x0020312C
*/
// Range: 0x203120 -> 0x20312C
// this: r2
signed int xSerial::Read(signed short * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x203120 -> 0x20312C
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203130 -> 0x0020313C
*/
// Range: 0x203130 -> 0x20313C
// this: r2
signed int xSerial::Read(unsigned char * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x203130 -> 0x20313C
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203140 -> 0x0020314C
*/
// Range: 0x203140 -> 0x20314C
// this: r2
signed int xSerial::Read_b7(unsigned int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x203140 -> 0x20314C
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203150 -> 0x0020315C
*/
// Range: 0x203150 -> 0x20315C
// this: r2
signed int xSerial::Read_b1(signed int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x203150 -> 0x20315C
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203160 -> 0x002032F4
*/
// Range: 0x203160 -> 0x2032F4
// this: r17
signed int xSerial::Read(char * buf /* r2 */, signed int elesize /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x203160 -> 0x2032F4
        signed int nbit; // r16
        char * cptr; // r20
        signed int * iptr; // r20
        signed int bitval; // r2
        signed int bidx; // r19
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203300 -> 0x00203328
*/
// Range: 0x203300 -> 0x203328
// this: r2
signed int xSerial::Write(float data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x203300 -> 0x203328
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203330 -> 0x00203358
*/
// Range: 0x203330 -> 0x203358
// this: r2
signed int xSerial::Write(unsigned int data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x203330 -> 0x203358
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203360 -> 0x00203388
*/
// Range: 0x203360 -> 0x203388
// this: r2
signed int xSerial::Write(signed int data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x203360 -> 0x203388
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203390 -> 0x002033B8
*/
// Range: 0x203390 -> 0x2033B8
// this: r2
signed int xSerial::Write(signed short data /* r29+0x1E */) {
    /* anonymous block */ {
        // Range: 0x203390 -> 0x2033B8
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002033C0 -> 0x002033E8
*/
// Range: 0x2033C0 -> 0x2033E8
// this: r2
signed int xSerial::Write(unsigned char data /* r29+0x1F */) {
    /* anonymous block */ {
        // Range: 0x2033C0 -> 0x2033E8
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002033F0 -> 0x00203418
*/
// Range: 0x2033F0 -> 0x203418
// this: r2
signed int xSerial::Write_b7(unsigned int bits /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x2033F0 -> 0x203418
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203420 -> 0x00203448
*/
// Range: 0x203420 -> 0x203448
// this: r2
signed int xSerial::Write_b1(signed int bits /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x203420 -> 0x203448
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203450 -> 0x00203590
*/
// Range: 0x203450 -> 0x203590
// this: r17
signed int xSerial::Write(char * data /* r2 */, signed int elesize /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x203450 -> 0x203590
        signed int nbit; // r16
        char * cptr; // r20
        signed int * iptr; // r20
        signed int bidx; // r19
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203590 -> 0x002035DC
*/
// Range: 0x203590 -> 0x2035DC
// this: r16
void xSerial::setClient(unsigned int idtag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x203590 -> 0x2035DC
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002035E0 -> 0x00203624
*/
// Range: 0x2035E0 -> 0x203624
// this: r16
xSerial::~xSerial() {
    /* anonymous block */ {
        // Range: 0x2035E0 -> 0x203624
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203630 -> 0x00203638
*/
// Range: 0x203630 -> 0x203638
// this: r2
xSerial::xSerial() {
    /* anonymous block */ {
        // Range: 0x203630 -> 0x203638
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203640 -> 0x00203750
*/
// Range: 0x203640 -> 0x203750
void xSerialTraverse(signed int (* func)(unsigned int, class xSerial *) /* r21 */) {
    /* anonymous block */ {
        // Range: 0x203640 -> 0x203750
        signed int i; // r20
        class st_XSERIAL_DATA_PRIV * xsd; // r19
        class st_SERIAL_CLIENTINFO * clt; // r18
        class xSerial xser; // r29+0xA0
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203750 -> 0x00203764
*/
// Range: 0x203750 -> 0x203764
signed int xSerialShutdown() {
    /* anonymous block */ {
        // Range: 0x203750 -> 0x203764
    }
}


/*
    Compile unit: C:\SB\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203770 -> 0x00203898
*/
// Range: 0x203770 -> 0x203898
signed int xSerialStartup(signed int count /* r17 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r16 */) {
    /* anonymous block */ {
        // Range: 0x203770 -> 0x203898
    }
}


