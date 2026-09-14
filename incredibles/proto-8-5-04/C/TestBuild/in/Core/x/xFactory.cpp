/*
    Compile unit: C:\TestBuild\in\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
signed int OrdTest_infotype(void *, void *); // size: 0x0, address: 0x1D0BF0
signed int OrdComp_infotype(void *, void *); // size: 0x0, address: 0x1D0BB0
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
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
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
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
// total size: 0xC
class XGOFTypeInfo {
    // Members
public:
    signed int tid; // offset 0x0, size 0x4
    class xFactoryInst * (* creator)(signed int, class RyzMemGrow *, void *); // offset 0x4, size 0x4
    void (* destroyer)(class xFactoryInst *); // offset 0x8, size 0x4
};
// total size: 0x0
class xBase {};
// total size: 0x1
class RyzMemData {};

/*
    Compile unit: C:\TestBuild\in\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0BB0 -> 0x001D0BEC
*/
// Range: 0x1D0BB0 -> 0x1D0BEC
static signed int OrdComp_infotype(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D0BB0 -> 0x1D0BEC
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0BF0 -> 0x001D0C2C
*/
// Range: 0x1D0BF0 -> 0x1D0C2C
static signed int OrdTest_infotype(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D0BF0 -> 0x1D0C2C
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0C30 -> 0x001D0D20
*/
// Range: 0x1D0C30 -> 0x1D0D20
// this: r17
void xFactory::DestroyItem(class xFactoryInst * item /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1D0C30 -> 0x1D0D20
        signed int idx; // r2
        class XGOFTypeInfo pattern; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0D20 -> 0x001D0D68
*/
// Range: 0x1D0D20 -> 0x1D0D68
// this: r16
void xFactory::DestroyAll() {
    /* anonymous block */ {
        // Range: 0x1D0D20 -> 0x1D0D68
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0D70 -> 0x001D0E98
*/
// Range: 0x1D0D70 -> 0x1D0E98
// this: r19
class xFactoryInst * xFactory::CreateItem(signed int typeID /* r2 */, void * userdata /* r18 */, class RyzMemGrow * callerzgrow /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1D0D70 -> 0x1D0E98
        signed int idx; // r2
        class xFactoryInst * item; // r2
        class XGOFTypeInfo pattern; // r29+0x50
        class XGOFTypeInfo * darec; // r16
        class RyzMemGrow * grow; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0EA0 -> 0x001D0F9C
*/
// Range: 0x1D0EA0 -> 0x1D0F9C
// this: r18
signed int xFactory::RegItemType(class XGOFTypeInfo * info /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D0EA0 -> 0x1D0F9C
        signed int rc; // r17
        class XGOFTypeInfo * tptr; // r16
        class XGOFTypeInfo * nextrec; // r2
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D0FA0 -> 0x001D0FFC
*/
// Range: 0x1D0FA0 -> 0x1D0FFC
// this: r17
xFactory::~xFactory() {
    /* anonymous block */ {
        // Range: 0x1D0FA0 -> 0x1D0FFC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1000 -> 0x001D1078
*/
// Range: 0x1D1000 -> 0x1D1078
// this: r18
xFactory::xFactory(signed int maxTypes /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1D1000 -> 0x1D1078
        unsigned int amt; // r16
    }
}


