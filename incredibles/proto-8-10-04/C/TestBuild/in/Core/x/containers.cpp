/*
    Compile unit: C:\TestBuild\in\Core\x\containers.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int gActiveHeap; // size: 0x4, address: 0x611E6C
// total size: 0x8
class node_base {
    // Members
public:
    class node_base * prev; // offset 0x0, size 0x4
    class node_base * next; // offset 0x4, size 0x4
};
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

/*
    Compile unit: C:\TestBuild\in\Core\x\containers.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00488ED0 -> 0x00488EFC
*/
// Range: 0x488ED0 -> 0x488EFC
// this: r2
class node_base * pool_list_base::erase(class node_base * it /* r2 */) {
    /* anonymous block */ {
        // Range: 0x488ED0 -> 0x488EFC
        class node_base * next; // r2
        class node_base * prev; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\containers.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00488F00 -> 0x00488F38
*/
// Range: 0x488F00 -> 0x488F38
// this: r2
class node_base * pool_list_base::insert(class node_base * it /* r2 */) {
    /* anonymous block */ {
        // Range: 0x488F00 -> 0x488F38
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\containers.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00488F40 -> 0x00488FA8
*/
// Range: 0x488F40 -> 0x488FA8
// this: r2
void pool_list_base::reset(signed int node_size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x488F40 -> 0x488FA8
        unsigned char * mem; // r6
        unsigned char * end_mem; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\containers.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00488FB0 -> 0x0048901C
*/
// Range: 0x488FB0 -> 0x48901C
// this: r18
void pool_list_base::create(signed int node_size /* r17 */, signed int max_size /* r16 */, void * buffer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x488FB0 -> 0x48901C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\containers.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00489020 -> 0x0048905C
*/
// Range: 0x489020 -> 0x48905C
// this: r2
void pool_list_base::push_back() {
    /* anonymous block */ {
        // Range: 0x489020 -> 0x48905C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\containers.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00489060 -> 0x0048909C
*/
// Range: 0x489060 -> 0x48909C
// this: r2
void pool_list_base::push_front() {
    /* anonymous block */ {
        // Range: 0x489060 -> 0x48909C
    }
}


