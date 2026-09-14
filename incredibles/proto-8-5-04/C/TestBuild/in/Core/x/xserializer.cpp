/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
static signed int g_serinit; // size: 0x4, address: 0x608B28
static class st_XSERIAL_DATA_PRIV g_xserdata; // size: 0x24, address: 0x657DB0
static signed int g_tbl_onbit[32]; // size: 0x80, address: 0x657DE0
static signed int g_tbl_clear[32]; // size: 0x80, address: 0x657E60
signed int xSER_xsgclt_svproc_fill(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x1B4B50
signed int xSER_xsgclt_svinfo_fill(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x1B4BB0
signed int xSER_xsgclt_svproc_clt(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x1B4D40
signed int xSER_xsgclt_svinfo_clt(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x1B4D90
signed int xSER_xsgclt_svproc_ver(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x1B4E20
signed int xSER_xsgclt_svinfo_ver(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x1B4E50
signed int xSER_xsgclt_ldproc_fill(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x1B4AE0
signed int xSER_xsgclt_ldproc_clt(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x1B4CD0
signed int xSER_xsgclt_ldproc_ver(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x1B4DB0
signed int xSER_ord_compare(void *, void *); // size: 0x0, address: 0x1B50B0
signed int xSER_ord_test(void *, void *); // size: 0x0, address: 0x1B5070
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
// total size: 0x8
class st_SERIAL_PERCID_SIZE {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int needsize; // offset 0x4, size 0x4
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
// total size: 0x0
class st_XSAVEGAME_DATA {};
// total size: 0x10
class st_SERIAL_CLIENTINFO {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int * membuf; // offset 0x4, size 0x4
    signed int trueoff; // offset 0x8, size 0x4
    signed int actsize; // offset 0xC, size 0x4
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
class st_XSAVEGAME_WRITECONTEXT {};
// total size: 0x0
class st_XSAVEGAME_READCONTEXT {};
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
// total size: 0x10
class st_XORDEREDARRAY {
    // Members
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B4AE0 -> 0x001B4B4C
*/
// Range: 0x1B4AE0 -> 0x1B4B4C
static signed int xSER_xsgclt_ldproc_fill(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B4AE0 -> 0x1B4B4C
        char filbuf[9]; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B4B50 -> 0x001B4BA8
*/
// Range: 0x1B4B50 -> 0x1B4BA8
static signed int xSER_xsgclt_svproc_fill(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B4B50 -> 0x1B4BA8
        char filbuf[9]; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B4BB0 -> 0x001B4CCC
*/
// Range: 0x1B4BB0 -> 0x1B4CCC
static signed int xSER_xsgclt_svinfo_fill(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B4BB0 -> 0x1B4CCC
        class st_XSERIAL_DATA_PRIV * xsd; // r8
        signed int i; // r5
        signed int tally; // r4
        signed int size; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B4CD0 -> 0x001B4D34
*/
// Range: 0x1B4CD0 -> 0x1B4D34
static signed int xSER_xsgclt_ldproc_clt(class st_XSAVEGAME_DATA * xsg /* r17 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */, unsigned int idtag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B4CD0 -> 0x1B4D34
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B4D40 -> 0x001B4D8C
*/
// Range: 0x1B4D40 -> 0x1B4D8C
static signed int xSER_xsgclt_svproc_clt(void * cltdata /* r2 */, class st_XSAVEGAME_DATA * xsg /* r17 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1B4D40 -> 0x1B4D8C
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B4D90 -> 0x001B4DA8
*/
// Range: 0x1B4D90 -> 0x1B4DA8
static signed int xSER_xsgclt_svinfo_clt(void * cltdata /* r2 */, signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B4D90 -> 0x1B4DA8
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B4DB0 -> 0x001B4E14
*/
// Range: 0x1B4DB0 -> 0x1B4E14
static signed int xSER_xsgclt_ldproc_ver(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B4DB0 -> 0x1B4E14
        class st_XSERIAL_DATA_PRIV * xsd; // r16
        signed int ver; // r29+0x2C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B4E20 -> 0x001B4E50
*/
// Range: 0x1B4E20 -> 0x1B4E50
static signed int xSER_xsgclt_svproc_ver(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B4E20 -> 0x1B4E50
        signed int ver; // r29+0x1C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B4E50 -> 0x001B4E64
*/
// Range: 0x1B4E50 -> 0x1B4E64
static signed int xSER_xsgclt_svinfo_ver(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B4E50 -> 0x1B4E64
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B4E70 -> 0x001B4FD0
*/
// Range: 0x1B4E70 -> 0x1B4FD0
signed int xSerial_svgame_register(class st_XSAVEGAME_DATA * sgctxt /* r19 */, enum en_SAVEGAME_MODE mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B4E70 -> 0x1B4FD0
        class st_XSERIAL_DATA_PRIV * xsd; // r18
        class st_SERIAL_CLIENTINFO * clt; // r2
        signed int i; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B4FD0 -> 0x001B5068
*/
// Range: 0x1B4FD0 -> 0x1B5068
static class st_SERIAL_CLIENTINFO * XSER_get_client(unsigned int idtag /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1B4FD0 -> 0x1B5068
        class st_XSERIAL_DATA_PRIV * xsd; // r17
        class st_SERIAL_CLIENTINFO * clt; // r16
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5070 -> 0x001B50A8
*/
// Range: 0x1B5070 -> 0x1B50A8
static signed int xSER_ord_test(void * key /* r2 */, void * elt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5070 -> 0x1B50A8
        signed int rc; // r2
        unsigned int idtag; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B50B0 -> 0x001B50EC
*/
// Range: 0x1B50B0 -> 0x1B50EC
static signed int xSER_ord_compare(void * e1 /* r2 */, void * e2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B50B0 -> 0x1B50EC
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B50F0 -> 0x001B550C
*/
// Range: 0x1B50F0 -> 0x1B550C
static void xSER_init_buffers(signed int count /* r19 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1B50F0 -> 0x1B550C
        class st_XSERIAL_DATA_PRIV * xsd; // r17
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
    Code range: 0x001B5510 -> 0x001B5528
*/
// Range: 0x1B5510 -> 0x1B5528
void xSerialWipeMainBuffer() {
    /* anonymous block */ {
        // Range: 0x1B5510 -> 0x1B5528
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5530 -> 0x001B55D4
*/
// Range: 0x1B5530 -> 0x1B55D4
// this: r2
signed int xSerial::rdbit() {
    /* anonymous block */ {
        // Range: 0x1B5530 -> 0x1B55D4
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B55E0 -> 0x001B56C0
*/
// Range: 0x1B55E0 -> 0x1B56C0
// this: r2
void xSerial::wrbit(signed int is_on /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B55E0 -> 0x1B56C0
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B56C0 -> 0x001B56CC
*/
// Range: 0x1B56C0 -> 0x1B56CC
// this: r2
signed int xSerial::Read(float * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B56C0 -> 0x1B56CC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B56D0 -> 0x001B56DC
*/
// Range: 0x1B56D0 -> 0x1B56DC
// this: r2
signed int xSerial::Read(unsigned int * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B56D0 -> 0x1B56DC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B56E0 -> 0x001B56EC
*/
// Range: 0x1B56E0 -> 0x1B56EC
// this: r2
signed int xSerial::Read(signed int * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B56E0 -> 0x1B56EC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B56F0 -> 0x001B56FC
*/
// Range: 0x1B56F0 -> 0x1B56FC
// this: r2
signed int xSerial::Read(signed short * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B56F0 -> 0x1B56FC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5700 -> 0x001B570C
*/
// Range: 0x1B5700 -> 0x1B570C
// this: r2
signed int xSerial::Read(unsigned char * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5700 -> 0x1B570C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5710 -> 0x001B571C
*/
// Range: 0x1B5710 -> 0x1B571C
// this: r2
signed int xSerial::Read_b1(unsigned int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5710 -> 0x1B571C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5720 -> 0x001B572C
*/
// Range: 0x1B5720 -> 0x1B572C
// this: r2
signed int xSerial::Read_b1(signed int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5720 -> 0x1B572C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5730 -> 0x001B58C0
*/
// Range: 0x1B5730 -> 0x1B58C0
// this: r17
signed int xSerial::Read(char * buf /* r2 */, signed int elesize /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5730 -> 0x1B58C0
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
    Code range: 0x001B58C0 -> 0x001B58E8
*/
// Range: 0x1B58C0 -> 0x1B58E8
// this: r2
signed int xSerial::Write(float data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x1B58C0 -> 0x1B58E8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B58F0 -> 0x001B5918
*/
// Range: 0x1B58F0 -> 0x1B5918
// this: r2
signed int xSerial::Write(unsigned int data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x1B58F0 -> 0x1B5918
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5920 -> 0x001B5948
*/
// Range: 0x1B5920 -> 0x1B5948
// this: r2
signed int xSerial::Write(signed int data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x1B5920 -> 0x1B5948
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5950 -> 0x001B5978
*/
// Range: 0x1B5950 -> 0x1B5978
// this: r2
signed int xSerial::Write(signed short data /* r29+0x1E */) {
    /* anonymous block */ {
        // Range: 0x1B5950 -> 0x1B5978
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5980 -> 0x001B59A8
*/
// Range: 0x1B5980 -> 0x1B59A8
// this: r2
signed int xSerial::Write(unsigned char data /* r29+0x1F */) {
    /* anonymous block */ {
        // Range: 0x1B5980 -> 0x1B59A8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B59B0 -> 0x001B59D8
*/
// Range: 0x1B59B0 -> 0x1B59D8
// this: r2
signed int xSerial::Write_b1(unsigned int bits /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x1B59B0 -> 0x1B59D8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B59E0 -> 0x001B5A08
*/
// Range: 0x1B59E0 -> 0x1B5A08
// this: r2
signed int xSerial::Write_b1(signed int bits /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x1B59E0 -> 0x1B5A08
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5A10 -> 0x001B5B48
*/
// Range: 0x1B5A10 -> 0x1B5B48
// this: r17
signed int xSerial::Write(char * data /* r2 */, signed int elesize /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5A10 -> 0x1B5B48
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
    Code range: 0x001B5B50 -> 0x001B5B9C
*/
// Range: 0x1B5B50 -> 0x1B5B9C
// this: r16
void xSerial::setClient(unsigned int idtag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B5B50 -> 0x1B5B9C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5BA0 -> 0x001B5BE4
*/
// Range: 0x1B5BA0 -> 0x1B5BE4
// this: r16
xSerial::~xSerial() {
    /* anonymous block */ {
        // Range: 0x1B5BA0 -> 0x1B5BE4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5BF0 -> 0x001B5CF8
*/
// Range: 0x1B5BF0 -> 0x1B5CF8
void xSerialTraverse(signed int (* func)(unsigned int, class xSerial *) /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1B5BF0 -> 0x1B5CF8
        signed int i; // r20
        class st_XSERIAL_DATA_PRIV * xsd; // r19
        class st_SERIAL_CLIENTINFO * clt; // r2
        class xSerial xser; // r29+0xA0
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5D00 -> 0x001B5D10
*/
// Range: 0x1B5D00 -> 0x1B5D10
signed int xSerialShutdown() {
    /* anonymous block */ {
        // Range: 0x1B5D00 -> 0x1B5D10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B5D10 -> 0x001B5E44
*/
// Range: 0x1B5D10 -> 0x1B5E44
signed int xSerialStartup(signed int count /* r17 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1B5D10 -> 0x1B5E44
    }
}


