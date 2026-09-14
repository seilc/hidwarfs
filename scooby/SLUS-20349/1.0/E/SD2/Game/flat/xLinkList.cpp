/*
    Compile unit: E:\SD2\Game\flat\xLinkList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0xC
class st_ELIST {
    // Members
public:
    class st_ENODE * head; // offset 0x0, size 0x4
    class st_ENODE * tail; // offset 0x4, size 0x4
    class st_ENODE * tailprev; // offset 0x8, size 0x4
};
// total size: 0x8
class st_ENODE {
    // Members
public:
    class st_ENODE * next; // offset 0x0, size 0x4
    class st_ENODE * prev; // offset 0x4, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\xLinkList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A7F70 -> 0x001A7FD0
*/
// Range: 0x1A7F70 -> 0x1A7FD0
void MoveList(class st_ELIST * to /* r2 */, class st_ELIST * from /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A7F70 -> 0x1A7FD0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xLinkList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A7FD0 -> 0x001A8004
*/
// Range: 0x1A7FD0 -> 0x1A8004
class st_ENODE * RemHead(class st_ELIST * list /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A7FD0 -> 0x1A8004
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xLinkList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8010 -> 0x001A803C
*/
// Range: 0x1A8010 -> 0x1A803C
void AddTail(class st_ELIST * list /* r2 */, class st_ENODE * node /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8010 -> 0x1A803C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xLinkList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8040 -> 0x001A805C
*/
// Range: 0x1A8040 -> 0x1A805C
void AddHead(class st_ELIST * list /* r2 */, class st_ENODE * node /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8040 -> 0x1A805C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xLinkList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8060 -> 0x001A8074
*/
// Range: 0x1A8060 -> 0x1A8074
void NewList(class st_ELIST * list /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8060 -> 0x1A8074
    }
}


