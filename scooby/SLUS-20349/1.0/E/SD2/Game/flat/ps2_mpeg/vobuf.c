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
// total size: 0x40440
class VoTag {
    // Members
public:
    signed int status; // offset 0x0, size 0x4
    signed int dummy[15]; // offset 0x4, size 0x3C
    unsigned int v[2][32896]; // offset 0x40, size 0x40400
};
// total size: 0x151800
class VoData {
    // Members
public:
    unsigned char v[1382400]; // offset 0x0, size 0x151800
};

/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260040 -> 0x00260060
*/
// Range: 0x260040 -> 0x260060
void voBufDecCount(class VoBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x260040 -> 0x260060
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260060 -> 0x002600C4
*/
// Range: 0x260060 -> 0x2600C4
class VoTag * voBufGetTag(class VoBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x260060 -> 0x2600C4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002600D0 -> 0x00260120
*/
// Range: 0x2600D0 -> 0x260120
class VoData * voBufGetData(class VoBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2600D0 -> 0x260120
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260120 -> 0x0026019C
*/
// Range: 0x260120 -> 0x26019C
void voBufIncCount(class VoBuf * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x260120 -> 0x26019C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002601A0 -> 0x002601B4
*/
// Range: 0x2601A0 -> 0x2601B4
signed int voBufIsFull(class VoBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2601A0 -> 0x2601B4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002601C0 -> 0x002601CC
*/
// Range: 0x2601C0 -> 0x2601CC
void voBufReset(class VoBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2601C0 -> 0x2601CC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002601D0 -> 0x002601D8
*/
// Range: 0x2601D0 -> 0x2601D8
void voBufDelete() {
    /* anonymous block */ {
        // Range: 0x2601D0 -> 0x2601D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002601E0 -> 0x002602F8
*/
// Range: 0x2601E0 -> 0x2602F8
void voBufCreate(class VoBuf * f /* r2 */, class VoData * data /* r2 */, class VoTag * tag /* r2 */, signed int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2601E0 -> 0x2602F8
        signed int i; // r3
    }
}


