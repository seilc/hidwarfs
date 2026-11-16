/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
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
// total size: 0x30E40
class VoTag {
    // Members
public:
    signed int status; // offset 0x0, size 0x4
    signed int dummy[15]; // offset 0x4, size 0x3C
    unsigned int v[2][25024]; // offset 0x40, size 0x30E00
};
// total size: 0x100000
class VoData {
    // Members
public:
    unsigned char v[1048576]; // offset 0x0, size 0x100000
};

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEB80 -> 0x001BEBA0
*/
// Range: 0x1BEB80 -> 0x1BEBA0
void voBufDecCount(class VoBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BEB80 -> 0x1BEBA0
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEBA0 -> 0x001BEC10
*/
// Range: 0x1BEBA0 -> 0x1BEC10
class VoTag * voBufGetTag(class VoBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BEBA0 -> 0x1BEC10
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEC10 -> 0x001BEC48
*/
// Range: 0x1BEC10 -> 0x1BEC48
class VoData * voBufGetData(class VoBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BEC10 -> 0x1BEC48
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEC50 -> 0x001BECD4
*/
// Range: 0x1BEC50 -> 0x1BECD4
void voBufIncCount(class VoBuf * f /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BEC50 -> 0x1BECD4
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BECE0 -> 0x001BECF4
*/
// Range: 0x1BECE0 -> 0x1BECF4
signed int voBufIsFull(class VoBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BECE0 -> 0x1BECF4
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BED00 -> 0x001BED0C
*/
// Range: 0x1BED00 -> 0x1BED0C
void voBufReset(class VoBuf * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BED00 -> 0x1BED0C
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BED10 -> 0x001BED18
*/
// Range: 0x1BED10 -> 0x1BED18
void voBufDelete() {
    /* anonymous block */ {
        // Range: 0x1BED10 -> 0x1BED18
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vobuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BED20 -> 0x001BEE58
*/
// Range: 0x1BED20 -> 0x1BEE58
void voBufCreate(class VoBuf * f /* r2 */, class VoData * data /* r2 */, class VoTag * tag /* r2 */, signed int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BED20 -> 0x1BEE58
        signed int i; // r6
    }
}


