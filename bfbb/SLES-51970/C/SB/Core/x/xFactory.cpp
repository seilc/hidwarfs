/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int OrdTest_infotype(void *, void *); // size: 0x0, address: 0x2F1620
signed int OrdComp_infotype(void *, void *); // size: 0x0, address: 0x2F15D0
unsigned int gActiveHeap; // size: 0x4, address: 0x50EF44
// total size: 0x34
class xFactory : public RyzMemData {
    // Members
public:
    class XGOFTypeInfo * infopool; // offset 0x0, size 0x4
    class st_XORDEREDARRAY infolist; // offset 0x4, size 0x10
    class xFactoryInst * products; // offset 0x14, size 0x4
    class RyzMemGrow growContextData; // offset 0x18, size 0x1C
};
// total size: 0xC
class XGOFTypeInfo {
    // Members
public:
    signed int tid; // offset 0x0, size 0x4
    class xFactoryInst * (* creator)(signed int, class RyzMemGrow *, void *); // offset 0x4, size 0x4
    void (* destroyer)(class xFactoryInst *); // offset 0x8, size 0x4
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
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
// total size: 0x0
class xBase {};
// total size: 0x1
class RyzMemData {};
// total size: 0x1C
class RyzMemGrow {
    // Members
public:
    signed int flg_grow; // offset 0x0, size 0x4
    signed int amt; // offset 0x4, size 0x4
    char * ptr; // offset 0x8, size 0x4
    class xBase * user; // offset 0xC, size 0x4
    signed int amt_last; // offset 0x10, size 0x4
    char * ptr_last; // offset 0x14, size 0x4
    class xBase * user_last; // offset 0x18, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F15D0 -> 0x002F1618
*/
// Range: 0x2F15D0 -> 0x2F1618
static signed int OrdComp_infotype(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F15D0 -> 0x2F1618
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1620 -> 0x002F1668
*/
// Range: 0x2F1620 -> 0x2F1668
static signed int OrdTest_infotype(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F1620 -> 0x2F1668
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1670 -> 0x002F175C
*/
// Range: 0x2F1670 -> 0x2F175C
// this: r17
void xFactory::DestroyItem(class xFactoryInst * item /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2F1670 -> 0x2F175C
        signed int idx; // r2
        class XGOFTypeInfo pattern; // r29+0x30
    }
}


/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1760 -> 0x002F17A0
*/
// Range: 0x2F1760 -> 0x2F17A0
// this: r16
void xFactory::DestroyAll() {
    /* anonymous block */ {
        // Range: 0x2F1760 -> 0x2F17A0
    }
}


/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F17A0 -> 0x002F18EC
*/
// Range: 0x2F17A0 -> 0x2F18EC
// this: r19
class xFactoryInst * xFactory::CreateItem(signed int typeID /* r2 */, void * userdata /* r18 */, class RyzMemGrow * callerzgrow /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2F17A0 -> 0x2F18EC
        signed int idx; // r2
        class xFactoryInst * item; // r2
        class XGOFTypeInfo pattern; // r29+0x50
        class XGOFTypeInfo * darec; // r16
        class RyzMemGrow * grow; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F18F0 -> 0x002F18F8
*/
// Range: 0x2F18F0 -> 0x2F18F8
// this: r2
void xFactory::GrowDataDisable() {
    /* anonymous block */ {
        // Range: 0x2F18F0 -> 0x2F18F8
    }
}


/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1900 -> 0x002F1934
*/
// Range: 0x2F1900 -> 0x2F1934
// this: r2
void xFactory::GrowDataEnable(class xBase * user /* r2 */, signed int isResume /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F1900 -> 0x2F1934
    }
}


/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1940 -> 0x002F198C
*/
// Range: 0x2F1940 -> 0x2F198C
// this: r2
signed int xFactory::RegItemType(signed int tid /* r2 */, class xFactoryInst * (* create)(signed int, class RyzMemGrow *, void *) /* r2 */, void (* destroy)(class xFactoryInst *) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F1940 -> 0x2F198C
        class XGOFTypeInfo typerec[2]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1990 -> 0x002F1A9C
*/
// Range: 0x2F1990 -> 0x2F1A9C
// this: r18
signed int xFactory::RegItemType(class XGOFTypeInfo * info /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F1990 -> 0x2F1A9C
        signed int rc; // r17
        class XGOFTypeInfo * tptr; // r16
        class XGOFTypeInfo * nextrec; // r2
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1AA0 -> 0x002F1B00
*/
// Range: 0x2F1AA0 -> 0x2F1B00
// this: r17
xFactory::~xFactory() {
    /* anonymous block */ {
        // Range: 0x2F1AA0 -> 0x2F1B00
    }
}


/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1B00 -> 0x002F1B78
*/
// Range: 0x2F1B00 -> 0x2F1B78
// this: r18
xFactory::xFactory(signed int maxTypes /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2F1B00 -> 0x2F1B78
        unsigned int amt; // r16
    }
}


