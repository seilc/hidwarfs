/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004600B0 -> 0x0046011C
*/
// Range: 0x4600B0 -> 0x46011C
static signed int xSER_xsgclt_ldproc_fill(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4600B0 -> 0x46011C
        char filbuf[9]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460120 -> 0x00460178
*/
// Range: 0x460120 -> 0x460178
static signed int xSER_xsgclt_svproc_fill(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460120 -> 0x460178
        char filbuf[9]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460180 -> 0x0046029C
*/
// Range: 0x460180 -> 0x46029C
static signed int xSER_xsgclt_svinfo_fill(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460180 -> 0x46029C
        class st_XSERIAL_DATA_PRIV * xsd; // r2
        signed int i; // r8
        signed int tally; // r5
        signed int size; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004602A0 -> 0x00460304
*/
// Range: 0x4602A0 -> 0x460304
static signed int xSER_xsgclt_ldproc_clt(class st_XSAVEGAME_DATA * xsg /* r17 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */, unsigned int idtag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4602A0 -> 0x460304
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460310 -> 0x0046035C
*/
// Range: 0x460310 -> 0x46035C
static signed int xSER_xsgclt_svproc_clt(void * cltdata /* r2 */, class st_XSAVEGAME_DATA * xsg /* r17 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x460310 -> 0x46035C
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460360 -> 0x00460378
*/
// Range: 0x460360 -> 0x460378
static signed int xSER_xsgclt_svinfo_clt(void * cltdata /* r2 */, signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460360 -> 0x460378
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460380 -> 0x004603E4
*/
// Range: 0x460380 -> 0x4603E4
static signed int xSER_xsgclt_ldproc_ver(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460380 -> 0x4603E4
        class st_XSERIAL_DATA_PRIV * xsd; // r16
        signed int ver; // r29+0x2C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004603F0 -> 0x00460420
*/
// Range: 0x4603F0 -> 0x460420
static signed int xSER_xsgclt_svproc_ver(class st_XSAVEGAME_DATA * xsg /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4603F0 -> 0x460420
        signed int ver; // r29+0x1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460420 -> 0x00460434
*/
// Range: 0x460420 -> 0x460434
static signed int xSER_xsgclt_svinfo_ver(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460420 -> 0x460434
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460440 -> 0x004605A0
*/
// Range: 0x460440 -> 0x4605A0
signed int xSerial_svgame_register(class st_XSAVEGAME_DATA * sgctxt /* r19 */, enum en_SAVEGAME_MODE mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460440 -> 0x4605A0
        class st_XSERIAL_DATA_PRIV * xsd; // r2
        class st_SERIAL_CLIENTINFO * clt; // r2
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004605A0 -> 0x00460638
*/
// Range: 0x4605A0 -> 0x460638
static class st_SERIAL_CLIENTINFO * XSER_get_client(unsigned int idtag /* r18 */) {
    /* anonymous block */ {
        // Range: 0x4605A0 -> 0x460638
        class st_XSERIAL_DATA_PRIV * xsd; // r2
        class st_SERIAL_CLIENTINFO * clt; // r17
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460640 -> 0x00460678
*/
// Range: 0x460640 -> 0x460678
static signed int xSER_ord_test(void * key /* r2 */, void * elt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460640 -> 0x460678
        signed int rc; // r2
        unsigned int idtag; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460680 -> 0x004606BC
*/
// Range: 0x460680 -> 0x4606BC
static signed int xSER_ord_compare(void * e1 /* r2 */, void * e2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460680 -> 0x4606BC
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004606C0 -> 0x00460ADC
*/
// Range: 0x4606C0 -> 0x460ADC
static void xSER_init_buffers(signed int count /* r18 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4606C0 -> 0x460ADC
        class st_XSERIAL_DATA_PRIV * xsd; // r2
        signed int i; // r16
        signed int tally; // r20
        signed int sicnt; // r2
        class st_SERIAL_PERCID_SIZE * sitmp; // r5
        class st_SERIAL_CLIENTINFO * tmp_clt; // r21
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460AE0 -> 0x00460AF8
*/
// Range: 0x460AE0 -> 0x460AF8
void xSerialWipeMainBuffer() {
    /* anonymous block */ {
        // Range: 0x460AE0 -> 0x460AF8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460B00 -> 0x00460BA4
*/
// Range: 0x460B00 -> 0x460BA4
// this: r2
signed int xSerial::rdbit() {
    /* anonymous block */ {
        // Range: 0x460B00 -> 0x460BA4
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460BB0 -> 0x00460C90
*/
// Range: 0x460BB0 -> 0x460C90
// this: r2
void xSerial::wrbit(signed int is_on /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460BB0 -> 0x460C90
        class st_SERIAL_CLIENTINFO * clt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460C90 -> 0x00460C9C
*/
// Range: 0x460C90 -> 0x460C9C
// this: r2
signed int xSerial::Read(float * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460C90 -> 0x460C9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460CA0 -> 0x00460CAC
*/
// Range: 0x460CA0 -> 0x460CAC
// this: r2
signed int xSerial::Read(unsigned int * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460CA0 -> 0x460CAC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460CB0 -> 0x00460CBC
*/
// Range: 0x460CB0 -> 0x460CBC
// this: r2
signed int xSerial::Read(signed int * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460CB0 -> 0x460CBC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460CC0 -> 0x00460CCC
*/
// Range: 0x460CC0 -> 0x460CCC
// this: r2
signed int xSerial::Read(signed short * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460CC0 -> 0x460CCC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460CD0 -> 0x00460CDC
*/
// Range: 0x460CD0 -> 0x460CDC
// this: r2
signed int xSerial::Read(unsigned char * buf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460CD0 -> 0x460CDC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460CE0 -> 0x00460CEC
*/
// Range: 0x460CE0 -> 0x460CEC
// this: r2
signed int xSerial::Read_b1(unsigned int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460CE0 -> 0x460CEC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460CF0 -> 0x00460CFC
*/
// Range: 0x460CF0 -> 0x460CFC
// this: r2
signed int xSerial::Read_b1(signed int * bits /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460CF0 -> 0x460CFC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460D00 -> 0x00460D0C
*/
// Range: 0x460D00 -> 0x460D0C
// this: r2
signed int xSerial::Read_bn(unsigned int * bits /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460D00 -> 0x460D0C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460D10 -> 0x00460EA0
*/
// Range: 0x460D10 -> 0x460EA0
// this: r17
signed int xSerial::Read(char * buf /* r2 */, signed int elesize /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460D10 -> 0x460EA0
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460EA0 -> 0x00460EC8
*/
// Range: 0x460EA0 -> 0x460EC8
// this: r2
signed int xSerial::Write(float data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x460EA0 -> 0x460EC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460ED0 -> 0x00460EF8
*/
// Range: 0x460ED0 -> 0x460EF8
// this: r2
signed int xSerial::Write(unsigned int data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x460ED0 -> 0x460EF8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460F00 -> 0x00460F28
*/
// Range: 0x460F00 -> 0x460F28
// this: r2
signed int xSerial::Write(signed int data /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x460F00 -> 0x460F28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460F30 -> 0x00460F58
*/
// Range: 0x460F30 -> 0x460F58
// this: r2
signed int xSerial::Write(signed short data /* r29+0x1E */) {
    /* anonymous block */ {
        // Range: 0x460F30 -> 0x460F58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460F60 -> 0x00460F88
*/
// Range: 0x460F60 -> 0x460F88
// this: r2
signed int xSerial::Write(unsigned char data /* r29+0x1F */) {
    /* anonymous block */ {
        // Range: 0x460F60 -> 0x460F88
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460F90 -> 0x00460FB8
*/
// Range: 0x460F90 -> 0x460FB8
// this: r2
signed int xSerial::Write_b1(signed int bits /* r29+0x1C */) {
    /* anonymous block */ {
        // Range: 0x460F90 -> 0x460FB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460FC0 -> 0x00460FE8
*/
// Range: 0x460FC0 -> 0x460FE8
// this: r2
signed int xSerial::Write_bn(unsigned int bits /* r29+0x1C */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460FC0 -> 0x460FE8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460FF0 -> 0x00461128
*/
// Range: 0x460FF0 -> 0x461128
// this: r17
signed int xSerial::Write(char * data /* r2 */, signed int elesize /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x460FF0 -> 0x461128
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00461130 -> 0x0046117C
*/
// Range: 0x461130 -> 0x46117C
// this: r16
void xSerial::setClient(unsigned int idtag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x461130 -> 0x46117C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00461180 -> 0x004611C4
*/
// Range: 0x461180 -> 0x4611C4
// this: r16
xSerial::~xSerial() {
    /* anonymous block */ {
        // Range: 0x461180 -> 0x4611C4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004611D0 -> 0x004612D8
*/
// Range: 0x4611D0 -> 0x4612D8
void xSerialTraverse(signed int (* func)(unsigned int, class xSerial *) /* r21 */) {
    /* anonymous block */ {
        // Range: 0x4611D0 -> 0x4612D8
        signed int i; // r20
        class st_XSERIAL_DATA_PRIV * xsd; // r2
        class st_SERIAL_CLIENTINFO * clt; // r2
        class xSerial xser; // r29+0xA0
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004612E0 -> 0x004612F0
*/
// Range: 0x4612E0 -> 0x4612F0
signed int xSerialShutdown() {
    /* anonymous block */ {
        // Range: 0x4612E0 -> 0x4612F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xserializer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004612F0 -> 0x00461424
*/
// Range: 0x4612F0 -> 0x461424
signed int xSerialStartup(signed int count /* r17 */, class st_SERIAL_PERCID_SIZE * sizeinfo /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4612F0 -> 0x461424
    }
}


