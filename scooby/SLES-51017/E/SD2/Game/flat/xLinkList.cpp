/*
    Compile unit: E:\SD2\Game\flat\xLinkList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x8
class st_ENODE {
    // Members
public:
    class st_ENODE * next; // offset 0x0, size 0x4
    class st_ENODE * prev; // offset 0x4, size 0x4
};
// total size: 0xC
class st_ELIST {
    // Members
public:
    class st_ENODE * head; // offset 0x0, size 0x4
    class st_ENODE * tail; // offset 0x4, size 0x4
    class st_ENODE * tailprev; // offset 0x8, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\xLinkList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A86D0 -> 0x001A8730
*/
// Range: 0x1A86D0 -> 0x1A8730
void MoveList(class st_ELIST * to /* r2 */, class st_ELIST * from /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A86D0 -> 0x1A8730
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xLinkList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8730 -> 0x001A8764
*/
// Range: 0x1A8730 -> 0x1A8764
class st_ENODE * RemHead(class st_ELIST * list /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8730 -> 0x1A8764
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xLinkList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8770 -> 0x001A879C
*/
// Range: 0x1A8770 -> 0x1A879C
void AddTail(class st_ELIST * list /* r2 */, class st_ENODE * node /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8770 -> 0x1A879C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xLinkList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A87A0 -> 0x001A87BC
*/
// Range: 0x1A87A0 -> 0x1A87BC
void AddHead(class st_ELIST * list /* r2 */, class st_ENODE * node /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A87A0 -> 0x1A87BC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xLinkList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A87C0 -> 0x001A87D4
*/
// Range: 0x1A87C0 -> 0x1A87D4
void NewList(class st_ELIST * list /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A87C0 -> 0x1A87D4
    }
}


