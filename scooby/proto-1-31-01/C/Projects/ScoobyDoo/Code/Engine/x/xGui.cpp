/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed short gFX1Color; // size: 0x2, address: 0x4A4DE4
unsigned char gFX1Dir; // size: 0x1, address: 0x4A4DE8
float gZOffset; // size: 0x4, address: 0x4A4DEC
float gZOffsetDelta; // size: 0x4, address: 0x4A4638
class _xGuiItem gGuiItem[180]; // size: 0x4380, address: 0xAA1800
class _xGuiSys gGuiSys[52]; // size: 0xC30, address: 0xAA5B80
class _xGuiSys * gActiveGuiSys; // size: 0x4, address: 0x4A4DF0
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
void iGuiItemRenderFunc_Image(class _xGuiItem *, class _xGuiSys *); // size: 0x0, address: 0x386530
// total size: 0x3C
class _xGuiSys {
    // Members
public:
    unsigned char m_idx; // offset 0x0, size 0x1
    unsigned char m_scriptCreateCount; // offset 0x1, size 0x1
    unsigned char m_pad[2]; // offset 0x2, size 0x2
    unsigned int m_flag; // offset 0x4, size 0x4
    signed short m_off[2]; // offset 0x8, size 0x4
    void * m_data; // offset 0xC, size 0x4
    class _xGuiItem * m_item; // offset 0x10, size 0x4
    class _xGuiItem * m_select; // offset 0x14, size 0x4
    class _xGuiSys * m_dir[6]; // offset 0x18, size 0x18
    void * m_edobjPad; // offset 0x30, size 0x4
    void * m_func[2]; // offset 0x34, size 0x8
};
// total size: 0x60
class _xGuiItem {
    // Members
public:
    unsigned char m_idx; // offset 0x0, size 0x1
    unsigned char m_scriptCreateIndex; // offset 0x1, size 0x1
    signed short m_textOffset; // offset 0x2, size 0x2
    unsigned int m_flag; // offset 0x4, size 0x4
    unsigned int m_rgba; // offset 0x8, size 0x4
    unsigned int m_dataID; // offset 0xC, size 0x4
    class _xGuiMaya m_img; // offset 0x10, size 0x18
    void * m_edobjPad; // offset 0x28, size 0x4
    void * m_func[5]; // offset 0x2C, size 0x14
    class _xGuiItem * m_dir[6]; // offset 0x40, size 0x18
    class _xGuiItem * m_next; // offset 0x58, size 0x4
    class _xGuiItem * m_prev; // offset 0x5C, size 0x4
};
// total size: 0x4698
class XStreamHeader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int versionID; // offset 0x4, size 0x4
    unsigned char month; // offset 0x8, size 0x1
    unsigned char day; // offset 0x9, size 0x1
    unsigned char hour; // offset 0xA, size 0x1
    unsigned char minute; // offset 0xB, size 0x1
    unsigned int mdsOffset; // offset 0xC, size 0x4
    unsigned int mdsLength; // offset 0x10, size 0x4
    class tagXStreamMDSDirectory directory; // offset 0x14, size 0x3E84
    char safety[2048]; // offset 0x3E98, size 0x800
};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
// total size: 0x18
class _xGuiMaya {
    // Members
public:
    unsigned int m_modelID; // offset 0x0, size 0x4
    unsigned int m_texID; // offset 0x4, size 0x4
    signed char m_partID; // offset 0x8, size 0x1
    signed char m_val[3]; // offset 0x9, size 0x3
    signed short m_off[2]; // offset 0xC, size 0x4
    signed short m_bbox[4]; // offset 0x10, size 0x8
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035A2A0 -> 0x0035A368
*/
// Range: 0x35A2A0 -> 0x35A368
signed int xGuiSysGetFlag(class _xGuiSys * sys /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35A2A0 -> 0x35A368
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035A370 -> 0x0035A444
*/
// Range: 0x35A370 -> 0x35A444
void xGuiSysSetFlag(class _xGuiSys * sys /* r17 */, signed int flag /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35A370 -> 0x35A444
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035A450 -> 0x0035A52C
*/
// Range: 0x35A450 -> 0x35A52C
void xGuiSysAddFlag(class _xGuiSys * sys /* r17 */, signed int flag /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35A450 -> 0x35A52C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035A530 -> 0x0035A61C
*/
// Range: 0x35A530 -> 0x35A61C
void xGuiSysRemoveFlag(class _xGuiSys * sys /* r17 */, signed int flag /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35A530 -> 0x35A61C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035A620 -> 0x0035A6E8
*/
// Range: 0x35A620 -> 0x35A6E8
signed int xGuiItemGetFlag(class _xGuiItem * item /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35A620 -> 0x35A6E8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035A6F0 -> 0x0035A7C4
*/
// Range: 0x35A6F0 -> 0x35A7C4
void xGuiItemSetFlag(class _xGuiItem * item /* r17 */, signed int flag /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35A6F0 -> 0x35A7C4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035A7D0 -> 0x0035A8AC
*/
// Range: 0x35A7D0 -> 0x35A8AC
void xGuiItemAddFlag(class _xGuiItem * item /* r17 */, signed int flag /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35A7D0 -> 0x35A8AC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035A8B0 -> 0x0035A99C
*/
// Range: 0x35A8B0 -> 0x35A99C
void xGuiItemRemoveFlag(class _xGuiItem * item /* r17 */, signed int flag /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35A8B0 -> 0x35A99C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035A9A0 -> 0x0035AA78
*/
// Range: 0x35A9A0 -> 0x35AA78
void xGuiItemSetDataID(class _xGuiItem * item /* r17 */, signed int id /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35A9A0 -> 0x35AA78
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035AA80 -> 0x0035AC20
*/
// Range: 0x35AA80 -> 0x35AC20
void xGuiItemLink(class _xGuiItem * a /* r19 */, signed int dira /* r18 */, class _xGuiItem * b /* r17 */, signed int dirb /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35AA80 -> 0x35AC20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035AC20 -> 0x0035AEF4
*/
// Range: 0x35AC20 -> 0x35AEF4
class _xGuiItem * xGuiItemCreate(unsigned int flag /* r18 */, class _xGuiSys * sys /* r17 */) {
    /* anonymous block */ {
        // Range: 0x35AC20 -> 0x35AEF4
        class _xGuiItem * t; // r3
        class _xGuiItem * g; // r16
        signed int j; // r3
        signed int i; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035AF00 -> 0x0035AFD4
*/
// Range: 0x35AF00 -> 0x35AFD4
void xGuiItemSetRenderFunc(class _xGuiItem * i /* r17 */, void * func /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35AF00 -> 0x35AFD4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035AFE0 -> 0x0035B180
*/
// Range: 0x35AFE0 -> 0x35B180
void xGuiSysLink(class _xGuiSys * a /* r19 */, signed int dira /* r18 */, class _xGuiSys * b /* r17 */, signed int dirb /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35AFE0 -> 0x35B180
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035B180 -> 0x0035B254
*/
// Range: 0x35B180 -> 0x35B254
void xGuiSysSetRenderFunc(class _xGuiSys * s /* r17 */, void * func /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35B180 -> 0x35B254
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035B260 -> 0x0035B318
*/
// Range: 0x35B260 -> 0x35B318
class _xGuiSys * xGuiSysCreate(unsigned int flag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x35B260 -> 0x35B318
        class _xGuiSys * s; // r2
        signed int j; // r4
        signed int i; // r5
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035B320 -> 0x0035B490
*/
// Range: 0x35B320 -> 0x35B490
void xGuiSysSet(class _xGuiSys * sys /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35B320 -> 0x35B490
        class _xGuiItem * item; // r2
        class _xGuiSys * oldSys; // r17
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035B490 -> 0x0035B498
*/
// Range: 0x35B490 -> 0x35B498
void xGuiSysSetDim() {
    /* anonymous block */ {
        // Range: 0x35B490 -> 0x35B498
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035B4A0 -> 0x0035B4A8
*/
// Range: 0x35B4A0 -> 0x35B4A8
void xGuiSysAdjustPos() {
    /* anonymous block */ {
        // Range: 0x35B4A0 -> 0x35B4A8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035B4B0 -> 0x0035B4B8
*/
// Range: 0x35B4B0 -> 0x35B4B8
void xGuiSysSetPos() {
    /* anonymous block */ {
        // Range: 0x35B4B0 -> 0x35B4B8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035B4C0 -> 0x0035B758
*/
// Range: 0x35B4C0 -> 0x35B758
void xGuiSysFuncCall(class _xGuiSys * sys /* r17 */, signed int func /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35B4C0 -> 0x35B758
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035B760 -> 0x0035BB3C
*/
// Range: 0x35B760 -> 0x35BB3C
void xGuiItemFuncCall(class _xGuiSys * sys /* r18 */, class _xGuiItem * item /* r17 */, signed int func /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35B760 -> 0x35BB3C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035BB40 -> 0x0035BCB0
*/
// Range: 0x35BB40 -> 0x35BCB0
void xGuiItemAdvanceText(class _xGuiItem * item /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35BB40 -> 0x35BCB0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035BCB0 -> 0x0035C010
*/
// Range: 0x35BCB0 -> 0x35C010
void xGuiItemSelect(class _xGuiSys * sys /* r18 */, class _xGuiItem * item /* r17 */) {
    /* anonymous block */ {
        // Range: 0x35BCB0 -> 0x35C010
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035C010 -> 0x0035C2F0
*/
// Range: 0x35C010 -> 0x35C2F0
void xGuiSelectItemDir(class _xGuiSys * sys /* r17 */, signed int dir /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35C010 -> 0x35C2F0
        class _xGuiItem * tmp; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035C2F0 -> 0x0035C2F8
*/
// Range: 0x35C2F0 -> 0x35C2F8
void xGuiItemAdjustPos() {
    /* anonymous block */ {
        // Range: 0x35C2F0 -> 0x35C2F8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035C300 -> 0x0035C410
*/
// Range: 0x35C300 -> 0x35C410
void xGuiItemSetColor(class _xGuiItem * item /* r20 */, signed int r /* r19 */, signed int g /* r18 */, signed int b /* r17 */, signed int a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35C300 -> 0x35C410
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035C410 -> 0x0035C418
*/
// Range: 0x35C410 -> 0x35C418
void xGuiItemSetPos() {
    /* anonymous block */ {
        // Range: 0x35C410 -> 0x35C418
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035C420 -> 0x0035C428
*/
// Range: 0x35C420 -> 0x35C428
void xGuiIdle() {
    /* anonymous block */ {
        // Range: 0x35C420 -> 0x35C428
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035C430 -> 0x0035C710
*/
// Range: 0x35C430 -> 0x35C710
void xGuiDebug(signed int mode /* r18 */) {
    /* anonymous block */ {
        // Range: 0x35C430 -> 0x35C710
        class _xGuiSys * s; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035C710 -> 0x0035C818
*/
// Range: 0x35C710 -> 0x35C818
void xGuiDraw() {
    /* anonymous block */ {
        // Range: 0x35C710 -> 0x35C818
        class _xGuiSys * s; // r2
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035C820 -> 0x0035C828
*/
// Range: 0x35C820 -> 0x35C828
void xGuiSetLevelReset() {
    /* anonymous block */ {
        // Range: 0x35C820 -> 0x35C828
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035C830 -> 0x0035CC80
*/
// Range: 0x35C830 -> 0x35CC80
void xGuiInit() {
    /* anonymous block */ {
        // Range: 0x35C830 -> 0x35CC80
        signed int j; // r3
        signed int i; // r2
    }
}


