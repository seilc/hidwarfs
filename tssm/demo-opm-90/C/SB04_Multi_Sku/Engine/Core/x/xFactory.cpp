/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EB5D0 -> 0x003EB60C
*/
// Range: 0x3EB5D0 -> 0x3EB60C
static signed int OrdComp_infotype(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3EB5D0 -> 0x3EB60C
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EB610 -> 0x003EB64C
*/
// Range: 0x3EB610 -> 0x3EB64C
static signed int OrdTest_infotype(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3EB610 -> 0x3EB64C
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EB650 -> 0x003EB740
*/
// Range: 0x3EB650 -> 0x3EB740
// this: r17
void xFactory::DestroyItem(class xFactoryInst * item /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3EB650 -> 0x3EB740
        signed int idx; // r2
        class XGOFTypeInfo pattern; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EB740 -> 0x003EB788
*/
// Range: 0x3EB740 -> 0x3EB788
// this: r16
void xFactory::DestroyAll() {
    /* anonymous block */ {
        // Range: 0x3EB740 -> 0x3EB788
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EB790 -> 0x003EB8B8
*/
// Range: 0x3EB790 -> 0x3EB8B8
// this: r19
class xFactoryInst * xFactory::CreateItem(signed int typeID /* r2 */, void * userdata /* r18 */, class RyzMemGrow * callerzgrow /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3EB790 -> 0x3EB8B8
        signed int idx; // r2
        class xFactoryInst * item; // r2
        class XGOFTypeInfo pattern; // r29+0x50
        class XGOFTypeInfo * darec; // r16
        class RyzMemGrow * grow; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EB8C0 -> 0x003EB8C8
*/
// Range: 0x3EB8C0 -> 0x3EB8C8
// this: r2
void xFactory::GrowDataDisable() {
    /* anonymous block */ {
        // Range: 0x3EB8C0 -> 0x3EB8C8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EB8D0 -> 0x003EB900
*/
// Range: 0x3EB8D0 -> 0x3EB900
// this: r2
void xFactory::GrowDataEnable(class xBase * user /* r2 */, signed int isResume /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3EB8D0 -> 0x3EB900
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EB900 -> 0x003EB950
*/
// Range: 0x3EB900 -> 0x3EB950
// this: r2
signed int xFactory::RegItemType(signed int tid /* r2 */, class xFactoryInst * (* create)(signed int, class RyzMemGrow *, void *) /* r2 */, void (* destroy)(class xFactoryInst *) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3EB900 -> 0x3EB950
        class XGOFTypeInfo typerec[2]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EB950 -> 0x003EBA4C
*/
// Range: 0x3EB950 -> 0x3EBA4C
// this: r18
signed int xFactory::RegItemType(class XGOFTypeInfo * info /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3EB950 -> 0x3EBA4C
        signed int rc; // r17
        class XGOFTypeInfo * tptr; // r16
        class XGOFTypeInfo * nextrec; // r2
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EBA50 -> 0x003EBAAC
*/
// Range: 0x3EBA50 -> 0x3EBAAC
// this: r17
xFactory::~xFactory() {
    /* anonymous block */ {
        // Range: 0x3EBA50 -> 0x3EBAAC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EBAB0 -> 0x003EBB28
*/
// Range: 0x3EBAB0 -> 0x3EBB28
// this: r18
xFactory::xFactory(signed int maxTypes /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3EBAB0 -> 0x3EBB28
        unsigned int amt; // r16
    }
}


