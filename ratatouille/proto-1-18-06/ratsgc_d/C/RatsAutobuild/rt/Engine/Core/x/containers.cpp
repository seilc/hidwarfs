/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80240248 -> 0x80240A28
*/
// total size: 0x8
struct node_base {
    // Members
    struct node_base * prev; // offset 0x0, size 0x4
    struct node_base * next; // offset 0x4, size 0x4
};
// total size: 0x20
class pool_list_base {
    // Functions
    void push_front();

    void push_back();

    void create(int node_size, int max_size, unsigned int memtag, void * buffer);

    void reset(int node_size);

    struct node_base * insert(struct node_base * it);

    struct node_base * erase(struct node_base * it);

    struct node_base * erase(struct node_base * first, struct node_base * last);

    // Members
protected:
    int _size; // offset 0x0, size 0x4
    int _max_size; // offset 0x4, size 0x4
    struct node_base head; // offset 0x8, size 0x8
    struct node_base tail; // offset 0x10, size 0x8
    struct node_base * stack; // offset 0x18, size 0x4
    void * buffer; // offset 0x1C, size 0x4
};
// Range: 0x80240248 -> 0x802402AC
// this: r30
void pool_list_base::push_front() {
    // Local variables
    struct node_base * n; // r31
}

// Range: 0x802402AC -> 0x80240310
// this: r30
void pool_list_base::push_back() {
    // Local variables
    struct node_base * n; // r31
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80D65018
unsigned int gActiveHeap; // size: 0x4, address: 0x80D692A8
// Range: 0x80240310 -> 0x802404E0
// this: r31
void pool_list_base::create(int node_size /* r30 */, int max_size /* r29 */, unsigned int memtag /* r1+0x8 */, void * buffer /* r28 */) {
    // References
    // -> static char __FUNCTION__[7];
    // -> unsigned int gActiveHeap;
}

static char __FUNCTION__[6]; // size: 0x6, address: 0x80D6501F
// Range: 0x802404E0 -> 0x80240650
// this: r31
void pool_list_base::reset(int node_size /* r29 */) {
    // Local variables
    unsigned char * mem; // r30
    unsigned char * end_mem; // r28

    // References
    // -> static char __FUNCTION__[6];
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80D65025
// Range: 0x80240650 -> 0x80240744
// this: r29
struct node_base * pool_list_base::insert(struct node_base * it /* r28 */) {
    // Local variables
    struct node_base * alive; // r30
    struct node_base * n; // r31

    // References
    // -> static char __FUNCTION__[7];
}

static char __FUNCTION__[6]; // size: 0x6, address: 0x80D6502C
// Range: 0x80240744 -> 0x802408E8
// this: r31
struct node_base * pool_list_base::erase(struct node_base * it /* r29 */) {
    // Local variables
    struct node_base * alive; // r30
    struct node_base * next; // r28
    struct node_base * prev; // r27

    // References
    // -> static char __FUNCTION__[6];
}

static char __FUNCTION__[6]; // size: 0x6, address: 0x80D65032
// Range: 0x802408E8 -> 0x80240A28
// this: r29
struct node_base * pool_list_base::erase(struct node_base * first /* r1+0x8 */, struct node_base * last /* r27 */) {
    // Local variables
    struct node_base * n; // r31
    struct node_base * end; // r30
    struct node_base * next; // r28

    // References
    // -> static char __FUNCTION__[6];
}


