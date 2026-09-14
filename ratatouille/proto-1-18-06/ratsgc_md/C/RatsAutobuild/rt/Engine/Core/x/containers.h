/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80024280 -> 0x800246D8
*/
// Range: 0x80024280 -> 0x80024288
// this: r3
struct node_type * pool_list::end() const {}

// Range: 0x80024288 -> 0x80024290
// this: r3
struct node_type * pool_list::begin() const {}

// Range: 0x80024290 -> 0x8002429C
// this: r0
struct owner_group_type & pool_list::back() {}

// Range: 0x8002429C -> 0x800242BC
// this: r0
void pool_list::push_back() {}

// Range: 0x800242BC -> 0x800242DC
// this: r0
struct node_type * pool_list::erase(struct node_type * it /* r0 */) {}

// Range: 0x800242DC -> 0x800242E4
struct node_type * pool_list::get_iterator(const struct owner_group_type * value /* r0 */) {}

// Range: 0x800242E4 -> 0x80024328
// this: r30
unsigned char pool_list_base::full() const {}

// Range: 0x80024328 -> 0x80024330
// this: r3
int pool_list_base::max_size() const {}

// Range: 0x80024330 -> 0x80024338
// this: r3
int pool_list_base::size() const {}

// Range: 0x80024338 -> 0x80024370
// this: r0
void pool_list::create(int max_size /* r8 */, unsigned int memtag /* r0 */, void * buffer /* r7 */) {}

// Range: 0x80024370 -> 0x80024394
// this: r0
void pool_list::reset() {}

// Range: 0x80024394 -> 0x800243BC
// this: r0
unsigned char static_queue::empty() const {}

// Range: 0x800243BC -> 0x800243C4
// this: r3
unsigned long static_queue::size() const {}

// Range: 0x800243C4 -> 0x80024440
// this: r31
void static_queue::init(unsigned long size /* r0 */) {
    // Local variables
    unsigned long power; // r3

    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x80024440 -> 0x80024450
// this: r0
void static_queue::clear() {}

// Range: 0x80024450 -> 0x80024480
// this: r0
struct unit_data & static_queue::front() {}

// Range: 0x80024480 -> 0x80024498
// this: r0
struct unit_data & iterator::operator*() const {}

// Range: 0x80024498 -> 0x800244BC
// this: r0
class iterator static_queue::begin() const {}

// Range: 0x800244BC -> 0x800244DC
// this: r0
class iterator static_queue::create_iterator(unsigned long i /* r4 */) const {
    // Local variables
    class iterator r; // r1+0x8
}

// Range: 0x800244DC -> 0x80024528
// this: r31
struct unit_data & static_queue::push_front() {}

// Range: 0x80024528 -> 0x80024534
// this: r0
unsigned long static_queue::mod_max_size(unsigned long v /* r0 */) const {}

// Range: 0x80024534 -> 0x80024544
// this: r0
void static_queue::pop_back() {}

// Range: 0x80024544 -> 0x80024588
// this: r30
unsigned char static_queue::full() const {}

// Range: 0x80024588 -> 0x80024594
// this: r0
unsigned long static_queue::max_size() const {}

// Range: 0x80024594 -> 0x80024608
// this: r31
void static_queue::erase(const class iterator & first /* r0 */, const class iterator & last /* r0 */) {
    // Local variables
    unsigned long tail; // r4
    unsigned long diff; // r0
}

// Range: 0x80024608 -> 0x80024620
// this: r0
unsigned char iterator::operator!=(const class iterator & c /* r0 */) const {}

// Range: 0x80024620 -> 0x80024664
// this: r31
class iterator static_queue::end() const {}

// Range: 0x80024664 -> 0x80024698
// this: r31
class iterator & iterator::operator++() {}

// Range: 0x80024698 -> 0x800246D8
// this: r31
class iterator & iterator::operator+=(int i /* r4 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003AA88 -> 0x8003B358
*/
// Range: 0x8003AA88 -> 0x8003AB28
// this: r29
void tier_queue::clear() {
    // Local variables
    unsigned long i; // r30
    unsigned long end; // r0
}

// Range: 0x8003AB28 -> 0x8003AB7C
// this: r0
void tier_queue_allocator::free_block(unsigned char index /* r0 */) {
    // Local variables
    struct block_data & block; // r6
}

// Range: 0x8003AB7C -> 0x8003AB84
unsigned long tier_queue::wrap_block(unsigned long i /* r0 */) {}

// Range: 0x8003AB84 -> 0x8003AB8C
// this: r3
unsigned long tier_queue_allocator::block_size() const {}

// Range: 0x8003AB8C -> 0x8003ABC0
// this: r3
unsigned long tier_queue::get_block(unsigned long i /* r31 */) const {}

// Range: 0x8003ABC0 -> 0x8003ABC8
// this: r3
unsigned long tier_queue_allocator::block_size_shift() const {}

// Range: 0x8003ABC8 -> 0x8003ABF8
// this: r0
struct joint_data & tier_queue::front() {}

// Range: 0x8003ABF8 -> 0x8003AC24
// this: r4
struct joint_data & iterator::operator*() const {}

// Range: 0x8003AC24 -> 0x8003AC7C
// this: r29
struct joint_data & tier_queue::get_at(unsigned long i /* r30 */) const {
    // Local variables
    unsigned long block_index; // r4
    struct joint_data * data; // r0
    unsigned long unit_index; // r0
}

// Range: 0x8003AC7C -> 0x8003AC8C
// this: r0
unsigned long tier_queue_allocator::mod_block_size(unsigned long i /* r0 */) const {}

// Range: 0x8003AC8C -> 0x8003ACA0
// this: r0
void * tier_queue_allocator::get_block(unsigned long at /* r0 */) const {}

// Range: 0x8003ACA0 -> 0x8003ACC4
// this: r0
class iterator tier_queue::begin() const {}

// Range: 0x8003ACC4 -> 0x8003ACE4
// this: r0
class iterator tier_queue::create_iterator(unsigned long i /* r4 */) const {
    // Local variables
    class iterator it; // r1+0x8
}

// Range: 0x8003ACE4 -> 0x8003AD68
// this: r29
void tier_queue::push_front(unsigned int memtag /* r30 */) {
    // Local variables
    unsigned long oldfirst; // r31
    unsigned long block_index; // r0
}

// Range: 0x8003AD68 -> 0x8003ADE8
// this: r0
unsigned char tier_queue_allocator::alloc_block(unsigned int memtag /* r0 */) {
    // Local variables
    unsigned char index; // r31
    struct block_data & block; // r30
}

// Range: 0x8003ADE8 -> 0x8003AE20
// this: r6
void * tier_queue_allocator::alloc_block_data() const {
    // Local variables
    void * data; // r0

    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x8003AE20 -> 0x8003AE2C
// this: r0
unsigned long tier_queue::wrap_index(unsigned long i /* r0 */) const {}

// Range: 0x8003AE2C -> 0x8003AE3C
// this: r0
unsigned char tier_queue::empty() const {}

// Range: 0x8003AE3C -> 0x8003AE90
// this: r31
unsigned char tier_queue::front_full() const {}

// Range: 0x8003AE90 -> 0x8003AEB4
// this: r0
unsigned char tier_queue_allocator::full() const {}

// Range: 0x8003AEB4 -> 0x8003AF44
// this: r30
void tier_queue::pop_back() {
    // Local variables
    unsigned long last; // r31
    unsigned long block_index; // r0
}

// Range: 0x8003AF44 -> 0x8003AF80
// this: r0
class iterator iterator::operator-(int i /* r0 */) const {
    // Local variables
    class iterator c; // r1+0x8
}

// Range: 0x8003AF80 -> 0x8003AFB0
// this: r0
class iterator iterator::operator-=(int i /* r4 */) {}

// Range: 0x8003AFB0 -> 0x8003AFF0
// this: r31
class iterator & iterator::operator+=(int i /* r4 */) {}

// Range: 0x8003AFF0 -> 0x8003B034
// this: r31
class iterator tier_queue::end() const {}

// Range: 0x8003B034 -> 0x8003B03C
// this: r3
unsigned long tier_queue::size() const {}

// Range: 0x8003B03C -> 0x8003B080
// this: r0
struct joint_data & tier_queue::back() {}

// Range: 0x8003B080 -> 0x8003B0BC
// this: r0
class iterator iterator::operator+(int i /* r0 */) const {
    // Local variables
    class iterator c; // r1+0x8
}

// Range: 0x8003B0BC -> 0x8003B0FC
// this: r31
struct joint_data & tier_queue::operator[](int i /* r4 */) {}

// Range: 0x8003B0FC -> 0x8003B11C
// this: r0
struct joint_data * iterator::operator->() const {}

// Range: 0x8003B11C -> 0x8003B134
// this: r0
unsigned char iterator::operator==(const class iterator & c /* r0 */) const {}

// Range: 0x8003B134 -> 0x8003B13C
// this: r3
unsigned long iterator::global_index() const {}

// Range: 0x8003B13C -> 0x8003B154
// this: r0
unsigned char iterator::operator!=(const class iterator & c /* r0 */) const {}

// Range: 0x8003B154 -> 0x8003B188
// this: r31
class iterator & iterator::operator--() {}

// Range: 0x8003B188 -> 0x8003B1D8
// this: r30
void tier_queue::init(class tier_queue_allocator & alloc /* r31 */) {}

// Range: 0x8003B1D8 -> 0x8003B2E8
// this: r30
void tier_queue_allocator::init(unsigned long unit_size /* r0 */, unsigned long block_size /* r5 */, unsigned long max_blocks /* r28 */, unsigned int memtag /* r31 */) {
    // Local variables
    unsigned long i; // r0
    unsigned long end; // r0
    unsigned char arrayTempAllocs[31]; // r1+0x8
    int i; // r28
    int i; // r28

    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x8003B2E8 -> 0x8003B33C
// this: r0
void tier_queue_allocator::clear() {
    // Local variables
    unsigned long imask; // r7
    unsigned long i; // r8
    unsigned long end; // r0
}

// Range: 0x8003B33C -> 0x8003B358
unsigned long tier_queue_allocator::log2_ceil(unsigned long v /* r4 */) {
    // Local variables
    unsigned long power; // r3
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006D864 -> 0x8006D984
*/
// Range: 0x8006D864 -> 0x8006D8B0
// this: r30
void linear_pool::create(int max_size /* r31 */, unsigned int memtag /* r0 */) {}

// Range: 0x8006D8B0 -> 0x8006D8C4
// this: r0
void linear_pool::create(int max_size /* r0 */, struct sound_fader * buffer /* r0 */) {}

// Range: 0x8006D8C4 -> 0x8006D8D0
// this: r0
void linear_pool::clear() {}

// Range: 0x8006D8D0 -> 0x8006D91C
// this: r0
void linear_pool::erase(struct sound_fader * it /* r4 */) {
    // Local variables
    struct sound_fader * tail; // r0
}

// Range: 0x8006D940 -> 0x8006D954
// this: r0
struct sound_fader * linear_pool::end() {}

// Range: 0x8006D954 -> 0x8006D95C
// this: r3
struct sound_fader * linear_pool::begin() {}

// Range: 0x8006D95C -> 0x8006D974
// this: r0
struct sound_fader & linear_pool::back() {}

// Range: 0x8006D974 -> 0x8006D984
// this: r0
void linear_pool::push_back() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008F300 -> 0x8008F358
*/
// Range: 0x8008F300 -> 0x8008F330
// this: r31
bit_array::bit_array() {}

// Range: 0x8008F330 -> 0x8008F358
// this: r0
void bit_array::clear() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800972B4 -> 0x800972B4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800AEFA8 -> 0x800AEFC8
*/
// Range: 0x800AEFA8 -> 0x800AEFC8
class iterator tier_queue::dummy_iterator() {
    // Local variables
    class iterator it; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B8A0C -> 0x800B8A0C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E0EAC -> 0x800E10B8
*/
// Range: 0x800E0EAC -> 0x800E0EF0
// this: r0
struct trigger_pair & fixed_queue::back() {}

// Range: 0x800E0EF0 -> 0x800E0F08
// this: r0
struct trigger_pair & iterator::operator*() const {}

// Range: 0x800E0F08 -> 0x800E0F44
// this: r0
class iterator iterator::operator-(int i /* r0 */) const {
    // Local variables
    class iterator c; // r1+0x8
}

// Range: 0x800E0F44 -> 0x800E0F74
// this: r0
class iterator iterator::operator-=(int i /* r4 */) {}

// Range: 0x800E0F74 -> 0x800E0F98
// this: r0
class iterator & iterator::operator+=(int i /* r0 */) {}

// Range: 0x800E0F98 -> 0x800E0FBC
// this: r0
class iterator fixed_queue::end() const {}

// Range: 0x800E0FBC -> 0x800E0FDC
// this: r0
class iterator fixed_queue::create_iterator(unsigned long i /* r4 */) const {
    // Local variables
    class iterator r; // r1+0x8
}

// Range: 0x800E0FDC -> 0x800E0FFC
// this: r0
void fixed_queue::push_back() {}

// Range: 0x800E0FFC -> 0x800E1014
// this: r0
unsigned char fixed_queue::empty() const {}

// Range: 0x800E1014 -> 0x800E1034
// this: r0
void fixed_queue::pop_front() {}

// Range: 0x800E1034 -> 0x800E1064
// this: r0
struct trigger_pair & fixed_queue::front() {}

// Range: 0x800E1064 -> 0x800E1088
// this: r0
class iterator fixed_queue::begin() const {}

// Range: 0x800E1088 -> 0x800E10A8
// this: r0
void fixed_queue::reset() {}

// Range: 0x800E10A8 -> 0x800E10B8
// this: r0
void fixed_queue::clear() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80118468 -> 0x80118468
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80126A0C -> 0x80126A40
*/
// Range: 0x80126A0C -> 0x80126A40
// this: r31
class iterator & iterator::operator++() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012B0D8 -> 0x8012B0FC
*/
// Range: 0x8012B0D8 -> 0x8012B0EC
// this: r0
struct node_base * pool_list_base::alloc() {
    // Local variables
    struct node_base * ret; // r4
}

// Range: 0x8012B0EC -> 0x8012B0FC
// this: r0
void pool_list_base::free(struct node_base * n /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80134B64 -> 0x80134D20
*/
// Range: 0x80134B64 -> 0x80134B9C
// this: r0
void pool_list::create(int max_size /* r8 */, unsigned int memtag /* r0 */, void * buffer /* r7 */) {}

// Range: 0x80134B9C -> 0x80134C00
// this: r30
void linear_pool::create(int max_size /* r31 */, unsigned int memtag /* r0 */) {}

// Range: 0x80134C00 -> 0x80134C14
// this: r0
void linear_pool::create(int max_size /* r0 */, struct activity_data * buffer /* r0 */) {}

// Range: 0x80134C14 -> 0x80134C38
// this: r0
void pool_list::reset() {}

// Range: 0x80134C38 -> 0x80134C48
// this: r0
unsigned char pool_list_base::empty() const {}

// Range: 0x80134C48 -> 0x80134C50
// this: r3
struct node_type * pool_list::begin() const {}

// Range: 0x80134C50 -> 0x80134C5C
// this: r0
void linear_pool::clear() {}

// Range: 0x80134C5C -> 0x80134C70
// this: r0
struct activity_data * linear_pool::end() {}

// Range: 0x80134C70 -> 0x80134C78
// this: r3
struct activity_data * linear_pool::begin() {}

// Range: 0x80134C78 -> 0x80134C98
// this: r0
struct node_type * pool_list::erase(struct node_type * it /* r0 */) {}

// Range: 0x80134C98 -> 0x80134CDC
// this: r29
void pool_list::move(struct node_type * it /* r30 */, struct node_type * at /* r31 */) {}

// Range: 0x80134CDC -> 0x80134CFC
void pool_list_base::link(struct node_base * it /* r0 */, struct node_base * at /* r0 */) {}

// Range: 0x80134CFC -> 0x80134D18
void pool_list_base::unlink(struct node_base * it /* r0 */) {}

// Range: 0x80134D18 -> 0x80134D20
// this: r3
struct node_type * pool_list::end() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013C060 -> 0x8013C088
*/
// Range: 0x8013C060 -> 0x8013C088
// this: r0
void pool_list_base::clear() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80160630 -> 0x80160630
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801771C0 -> 0x80177280
*/
// Range: 0x801771C0 -> 0x801771C8
// this: r3
struct node_type * pool_list::get_buffer() const {}

// Range: 0x801771C8 -> 0x801771D4
// this: r0
class zNPCProjectileFrozen & pool_list::front() {}

// Range: 0x801771D4 -> 0x801771F4
// this: r0
void pool_list::push_front() {}

// Range: 0x801771F4 -> 0x8017722C
// this: r0
void pool_list::create(int max_size /* r8 */, unsigned int memtag /* r0 */, void * buffer /* r7 */) {}

// Range: 0x80177250 -> 0x80177258
// this: r3
struct node_type * pool_list::end() const {}

// Range: 0x80177258 -> 0x80177260
// this: r3
struct node_type * pool_list::begin() const {}

// Range: 0x80177260 -> 0x80177280
// this: r0
struct node_type * pool_list::erase(struct node_type * it /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80180A74 -> 0x80180A74
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801829D0 -> 0x80182A68
*/
// Range: 0x801829D0 -> 0x80182A30
// this: r0
void bit_array::set(int index /* r0 */, unsigned char value /* r0 */) {
    // Local variables
    int which_byte; // r6
    int which_bit; // r5
}

// Range: 0x80182A30 -> 0x80182A68
// this: r0
unsigned char bit_array::get(int index /* r0 */) {}


