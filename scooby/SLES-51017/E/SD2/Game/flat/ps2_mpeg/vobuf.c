/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x14
class VoBuf {
    // Members
public:
    class VoData * data; // offset 0x0, size 0x4
    class VoTag * tag; // offset 0x4, size 0x4
    signed int write; // offset 0x8, size 0x4
    signed int count; // offset 0xC, size 0x4
    signed int size; // offset 0x10, size 0x4
};
// total size: 0x195000
class VoData {
    // Members
public:
    unsigned char v[1658880]; // offset 0x0, size 0x195000
};
// total size: 0x4CE40
class VoTag {
    // Members
public:
    signed int status; // offset 0x0, size 0x4
    signed int dummy[15]; // offset 0x4, size 0x3C
    unsigned int v[2][39360]; // offset 0x40, size 0x4CE00
};

/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260930 -> 0x00260950
*/
// Range: 0x260930 -> 0x260950
void voBufDecCount(class VoBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x260930 -> 0x260950
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260950 -> 0x002609C4
*/
// Range: 0x260950 -> 0x2609C4
class VoTag * voBufGetTag(class VoBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x260950 -> 0x2609C4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002609D0 -> 0x00260A20
*/
// Range: 0x2609D0 -> 0x260A20
class VoData * voBufGetData(class VoBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2609D0 -> 0x260A20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260A20 -> 0x00260AAC
*/
// Range: 0x260A20 -> 0x260AAC
void voBufIncCount(class VoBuf * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x260A20 -> 0x260AAC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260AB0 -> 0x00260AC4
*/
// Range: 0x260AB0 -> 0x260AC4
signed int voBufIsFull(class VoBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x260AB0 -> 0x260AC4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260AD0 -> 0x00260ADC
*/
// Range: 0x260AD0 -> 0x260ADC
void voBufReset(class VoBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x260AD0 -> 0x260ADC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260AE0 -> 0x00260AE8
*/
// Range: 0x260AE0 -> 0x260AE8
void voBufDelete() {
    /* anonymous block */ {
        // Range: 0x260AE0 -> 0x260AE8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260AF0 -> 0x00260C08
*/
// Range: 0x260AF0 -> 0x260C08
void voBufCreate(class VoBuf * f /* r2 */, class VoData * data /* r2 */, class VoTag * tag /* r2 */, signed int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x260AF0 -> 0x260C08
        signed int i; // r3
    }
}


