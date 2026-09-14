/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class xListItem * m_dead; // size: 0x4, address: 0x4A4DE0
static class xListItem gListArray[2000]; // size: 0x5DC0, address: 0xA9BA40
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0xC
class xListItem {
    // Members
public:
    void * m_item; // offset 0x0, size 0x4
    class xListItem * m_next; // offset 0x4, size 0x4
    class xListItem * m_prev; // offset 0x8, size 0x4
};
// total size: 0x8
class xList {
    // Members
public:
    class xListItem * m_head; // offset 0x0, size 0x4
    class xListItem * m_tail; // offset 0x4, size 0x4
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
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00359260 -> 0x003592A4
*/
// Range: 0x359260 -> 0x3592A4
void * xListFind(class xList * l /* r2 */, void * item /* r2 */) {
    /* anonymous block */ {
        // Range: 0x359260 -> 0x3592A4
        class xListItem * idx; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003592B0 -> 0x00359848
*/
// Range: 0x3592B0 -> 0x359848
void * xListPop(class xList * l /* r18 */, void * item /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3592B0 -> 0x359848
        class xListItem * idx; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00359850 -> 0x00359968
*/
// Range: 0x359850 -> 0x359968
void xListPopAll(class xList * l /* r16 */) {
    /* anonymous block */ {
        // Range: 0x359850 -> 0x359968
        void * item; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00359970 -> 0x00359B20
*/
// Range: 0x359970 -> 0x359B20
void xListAppendList(class xList * a /* r17 */, class xList * b /* r16 */) {
    /* anonymous block */ {
        // Range: 0x359970 -> 0x359B20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00359B20 -> 0x00359E70
*/
// Range: 0x359B20 -> 0x359E70
signed int xListPush(class xList * l /* r18 */, void * item /* r17 */) {
    /* anonymous block */ {
        // Range: 0x359B20 -> 0x359E70
        class xListItem * li; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00359E70 -> 0x00359EAC
*/
// Range: 0x359E70 -> 0x359EAC
signed int xListCountActive(class xList * l /* r2 */) {
    /* anonymous block */ {
        // Range: 0x359E70 -> 0x359EAC
        class xListItem * item; // r3
        signed int count; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00359EB0 -> 0x0035A000
*/
// Range: 0x359EB0 -> 0x35A000
void xListInit(class xList * l /* r2 */) {
    /* anonymous block */ {
        // Range: 0x359EB0 -> 0x35A000
        class xListItem * item; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035A000 -> 0x0035A118
*/
// Range: 0x35A000 -> 0x35A118
void xListDispose(class xList * l /* r16 */) {
    /* anonymous block */ {
        // Range: 0x35A000 -> 0x35A118
    }
}


