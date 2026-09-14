/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801180E4 -> 0x801180E4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80126688 -> 0x801266BC
*/
// Range: 0x80126688 -> 0x801266BC
// this: r31
class iterator & iterator::operator++() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012AD54 -> 0x8012AD78
*/
// Range: 0x8012AD54 -> 0x8012AD68
// this: r0
struct node_base * pool_list_base::alloc() {
    // Local variables
    struct node_base * ret; // r4
}

// Range: 0x8012AD68 -> 0x8012AD78
// this: r0
void pool_list_base::free(struct node_base * n /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801347E0 -> 0x8013499C
*/
// Range: 0x801347E0 -> 0x80134818
// this: r0
void pool_list::create(int max_size /* r8 */, unsigned int memtag /* r0 */, void * buffer /* r7 */) {}

// Range: 0x80134818 -> 0x8013487C
// this: r30
void linear_pool::create(int max_size /* r31 */, unsigned int memtag /* r0 */) {}

// Range: 0x8013487C -> 0x80134890
// this: r0
void linear_pool::create(int max_size /* r0 */, struct activity_data * buffer /* r0 */) {}

// Range: 0x80134890 -> 0x801348B4
// this: r0
void pool_list::reset() {}

// Range: 0x801348B4 -> 0x801348C4
// this: r0
unsigned char pool_list_base::empty() const {}

// Range: 0x801348C4 -> 0x801348CC
// this: r3
struct node_type * pool_list::begin() const {}

// Range: 0x801348CC -> 0x801348D8
// this: r0
void linear_pool::clear() {}

// Range: 0x801348D8 -> 0x801348EC
// this: r0
struct activity_data * linear_pool::end() {}

// Range: 0x801348EC -> 0x801348F4
// this: r3
struct activity_data * linear_pool::begin() {}

// Range: 0x801348F4 -> 0x80134914
// this: r0
struct node_type * pool_list::erase(struct node_type * it /* r0 */) {}

// Range: 0x80134914 -> 0x80134958
// this: r29
void pool_list::move(struct node_type * it /* r30 */, struct node_type * at /* r31 */) {}

// Range: 0x80134958 -> 0x80134978
void pool_list_base::link(struct node_base * it /* r0 */, struct node_base * at /* r0 */) {}

// Range: 0x80134978 -> 0x80134994
void pool_list_base::unlink(struct node_base * it /* r0 */) {}

// Range: 0x80134994 -> 0x8013499C
// this: r3
struct node_type * pool_list::end() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013BCDC -> 0x8013BD04
*/
// Range: 0x8013BCDC -> 0x8013BD04
// this: r0
void pool_list_base::clear() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801602AC -> 0x801602AC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80176E3C -> 0x80176EFC
*/
// Range: 0x80176E3C -> 0x80176E44
// this: r3
struct node_type * pool_list::get_buffer() const {}

// Range: 0x80176E44 -> 0x80176E50
// this: r0
class zNPCProjectileFrozen & pool_list::front() {}

// Range: 0x80176E50 -> 0x80176E70
// this: r0
void pool_list::push_front() {}

// Range: 0x80176E70 -> 0x80176EA8
// this: r0
void pool_list::create(int max_size /* r8 */, unsigned int memtag /* r0 */, void * buffer /* r7 */) {}

// Range: 0x80176ECC -> 0x80176ED4
// this: r3
struct node_type * pool_list::end() const {}

// Range: 0x80176ED4 -> 0x80176EDC
// this: r3
struct node_type * pool_list::begin() const {}

// Range: 0x80176EDC -> 0x80176EFC
// this: r0
struct node_type * pool_list::erase(struct node_type * it /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801806F0 -> 0x801806F0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018264C -> 0x801826E4
*/
// Range: 0x8018264C -> 0x801826AC
// this: r0
void bit_array::set(int index /* r0 */, unsigned char value /* r0 */) {
    // Local variables
    int which_byte; // r6
    int which_bit; // r5
}

// Range: 0x801826AC -> 0x801826E4
// this: r0
unsigned char bit_array::get(int index /* r0 */) {}


