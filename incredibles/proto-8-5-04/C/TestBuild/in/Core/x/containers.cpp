/*
    Compile unit: C:\TestBuild\in\Core\x\containers.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
// total size: 0x20
class pool_list_base {
    // Members
public:
    signed int _size; // offset 0x0, size 0x4
    signed int _max_size; // offset 0x4, size 0x4
    class node_base head; // offset 0x8, size 0x8
    class node_base tail; // offset 0x10, size 0x8
    class node_base * stack; // offset 0x18, size 0x4
    void * buffer; // offset 0x1C, size 0x4
};
// total size: 0x8
class node_base {
    // Members
public:
    class node_base * prev; // offset 0x0, size 0x4
    class node_base * next; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\containers.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00481C40 -> 0x00481C6C
*/
// Range: 0x481C40 -> 0x481C6C
// this: r2
class node_base * pool_list_base::erase(class node_base * it /* r2 */) {
    /* anonymous block */ {
        // Range: 0x481C40 -> 0x481C6C
        class node_base * next; // r2
        class node_base * prev; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\containers.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00481C70 -> 0x00481CD8
*/
// Range: 0x481C70 -> 0x481CD8
// this: r2
void pool_list_base::reset(signed int node_size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x481C70 -> 0x481CD8
        unsigned char * mem; // r6
        unsigned char * end_mem; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\containers.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00481CE0 -> 0x00481D4C
*/
// Range: 0x481CE0 -> 0x481D4C
// this: r18
void pool_list_base::create(signed int node_size /* r17 */, signed int max_size /* r16 */, void * buffer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x481CE0 -> 0x481D4C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\containers.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00481D50 -> 0x00481D8C
*/
// Range: 0x481D50 -> 0x481D8C
// this: r2
void pool_list_base::push_back() {
    /* anonymous block */ {
        // Range: 0x481D50 -> 0x481D8C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\containers.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00481D90 -> 0x00481DCC
*/
// Range: 0x481D90 -> 0x481DCC
// this: r2
void pool_list_base::push_front() {
    /* anonymous block */ {
        // Range: 0x481D90 -> 0x481DCC
    }
}


