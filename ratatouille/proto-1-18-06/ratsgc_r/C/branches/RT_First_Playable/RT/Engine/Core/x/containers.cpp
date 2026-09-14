/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DEB64 -> 0x801DF244
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
// Range: 0x801DEB64 -> 0x801DEBBC
// this: r31
void pool_list_base::push_front() {
    // Local variables
    struct node_base * n; // r0
}

// Range: 0x801DEBBC -> 0x801DEC14
// this: r31
void pool_list_base::push_back() {
    // Local variables
    struct node_base * n; // r0
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80C033B8
unsigned int gActiveHeap; // size: 0x4, address: 0x80C07448
// Range: 0x801DEC14 -> 0x801DED84
// this: r27
void pool_list_base::create(int node_size /* r28 */, int max_size /* r29 */, unsigned int memtag /* r30 */, void * buffer /* r31 */) {
    // References
    // -> unsigned int gActiveHeap;
    // -> static char __FUNCTION__[7];
}

static char __FUNCTION__[6]; // size: 0x6, address: 0x80C033C0
// Range: 0x801DED84 -> 0x801DEEBC
// this: r30
void pool_list_base::reset(int node_size /* r31 */) {
    // Local variables
    unsigned char * mem; // r4
    unsigned char * end_mem; // r3

    // References
    // -> static char __FUNCTION__[6];
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80C033C8
// Range: 0x801DEEBC -> 0x801DEF8C
// this: r30
struct node_base * pool_list_base::insert(struct node_base * it /* r31 */) {
    // Local variables
    struct node_base * alive; // r3
    struct node_base * n; // r0

    // References
    // -> static char __FUNCTION__[7];
}

static char __FUNCTION__[6]; // size: 0x6, address: 0x80C033D0
// Range: 0x801DEF8C -> 0x801DF110
// this: r30
struct node_base * pool_list_base::erase(struct node_base * it /* r31 */) {
    // Local variables
    struct node_base * alive; // r3
    struct node_base * next; // r29
    struct node_base * prev; // r5

    // References
    // -> static char __FUNCTION__[6];
}

static char __FUNCTION__[6]; // size: 0x6, address: 0x80C033D8
// Range: 0x801DF110 -> 0x801DF244
// this: r31
struct node_base * pool_list_base::erase(struct node_base * first /* r29 */, struct node_base * last /* r28 */) {
    // Local variables
    struct node_base * n; // r30
    struct node_base * next; // r29

    // References
    // -> static char __FUNCTION__[6];
}


