/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012AB2C -> 0x8012AD54
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

    void create(int node_size, int max_size, void * buffer);

    void reset(int node_size);

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
// Range: 0x8012AB2C -> 0x8012AB84
// this: r31
void pool_list_base::push_front() {
    // Local variables
    struct node_base * n; // r0
}

// Range: 0x8012AB84 -> 0x8012ABDC
// this: r31
void pool_list_base::push_back() {
    // Local variables
    struct node_base * n; // r0
}

unsigned int gActiveHeap; // size: 0x4, address: 0x803BFB54
// Range: 0x8012ABDC -> 0x8012AC40
// this: r29
void pool_list_base::create(int node_size /* r30 */, int max_size /* r31 */, void * buffer /* r0 */) {
    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x8012AC40 -> 0x8012ACA0
// this: r0
void pool_list_base::reset(int node_size /* r0 */) {
    // Local variables
    unsigned char * mem; // r3
    unsigned char * end_mem; // r5
}

// Range: 0x8012ACA0 -> 0x8012ACEC
// this: r30
struct node_base * pool_list_base::erase(struct node_base * it /* r0 */) {
    // Local variables
    struct node_base * next; // r31
    struct node_base * prev; // r5
}

// Range: 0x8012ACEC -> 0x8012AD54
// this: r29
struct node_base * pool_list_base::erase(struct node_base * first /* r4 */, struct node_base * last /* r30 */) {
    // Local variables
    struct node_base * n; // r4
    struct node_base * next; // r31
}


