/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80039528 -> 0x8003A29C
*/
// Range: 0x80039528 -> 0x80039580
// this: r0
void fixed_stack_list::reset() {
    // Local variables
    struct node_type * it; // r4
    struct node_type * end; // r7
}

// Range: 0x80039580 -> 0x800395D0
// this: r0
void fixed_stack_list::reset() {
    // Local variables
    struct node_type * it; // r4
    struct node_type * end; // r5
}

// Range: 0x800395D0 -> 0x800395D8
unsigned long fixed_stack_list::max_size() {}

// Range: 0x800395D8 -> 0x800395E0
// this: r3
unsigned long fixed_stack_list::size() const {}

// Range: 0x800395E0 -> 0x800395E8
// this: r3
unsigned long fixed_stack_list::size() const {}

// Range: 0x800395E8 -> 0x80039614
// this: r0
unsigned char iterator::operator!=(const class iterator & c /* r0 */) const {}

// Range: 0x80039614 -> 0x8003962C
// this: r0
unsigned char iterator::operator==(const class iterator & c /* r0 */) const {}

// Range: 0x8003962C -> 0x80039650
// this: r0
class iterator fixed_stack_list::end() const {}

// Range: 0x80039650 -> 0x80039664
class iterator fixed_stack_list::create_iterator(struct node_type * n /* r4 */) {
    // Local variables
    class iterator it; // r1+0x8
}

// Range: 0x80039664 -> 0x80039674
// this: r0
class iterator & iterator::operator++() {}

// Range: 0x80039694 -> 0x800397C0
// this: r29
class iterator fixed_stack_list::erase(class iterator & it /* r30 */) {
    // Local variables
    struct node_type * next; // r31
    struct node_type * prev; // r4

    // References
    // -> char __FUNCTION__$localstatic1$erase__33fixed_stack_list<10tweak_info,64>FQ233fixed_stack_list<10tweak_info,64>8iterator[6];
}

// Range: 0x800397C0 -> 0x8003984C
// this: r30
void fixed_stack_list::free(struct node_type * n /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$free__33fixed_stack_list<10tweak_info,64>FPQ233fixed_stack_list<10tweak_info,64>9node_type[5];
}

// Range: 0x8003984C -> 0x800398D0
// this: r31
struct tweak_info & iterator::operator*() const {
    // References
    // -> char __FUNCTION__$localstatic1$__ml__Q233fixed_stack_list<10tweak_info,64>8iteratorCFv[5];
}

// Range: 0x800398D0 -> 0x80039954
// this: r31
struct tweak_info * iterator::operator->() const {
    // References
    // -> char __FUNCTION__$localstatic1$__rf__Q233fixed_stack_list<10tweak_info,64>8iteratorCFv[5];
}

// Range: 0x80039954 -> 0x80039978
// this: r0
class iterator fixed_stack_list::begin() const {}

// Range: 0x80039978 -> 0x80039AA4
// this: r29
class iterator fixed_stack_list::erase(class iterator & it /* r30 */) {
    // Local variables
    struct node_type * next; // r31
    struct node_type * prev; // r4

    // References
    // -> char __FUNCTION__$localstatic1$erase__79fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>FQ279fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>8iterator[6];
}

// Range: 0x80039AA4 -> 0x80039AB8
class iterator fixed_stack_list::create_iterator(struct node_type * n /* r4 */) {
    // Local variables
    class iterator it; // r1+0x8
}

// Range: 0x80039AB8 -> 0x80039B44
// this: r30
void fixed_stack_list::free(struct node_type * n /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$free__79fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>FPQ279fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>9node_type[5];
}

// Range: 0x80039B44 -> 0x80039B70
// this: r0
unsigned char iterator::operator!=(const class iterator & c /* r0 */) const {}

// Range: 0x80039B70 -> 0x80039B88
// this: r0
unsigned char iterator::operator==(const class iterator & c /* r0 */) const {}

// Range: 0x80039B88 -> 0x80039BAC
// this: r0
class iterator fixed_stack_list::end() const {}

// Range: 0x80039BAC -> 0x80039D08
// this: r31
class iterator fixed_stack_list::get_iterator(const struct string_type * value /* r30 */) {
    // Local variables
    char * p; // r30

    // References
    // -> char __FUNCTION__$localstatic1$get_iterator__79fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>FPCQ325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type[13];
}

// Range: 0x80039D08 -> 0x80039D8C
// this: r31
struct string_type & fixed_stack_list::back() {
    // References
    // -> char __FUNCTION__$localstatic1$back__79fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>Fv[5];
}

// Range: 0x80039D8C -> 0x80039D9C
// this: r0
unsigned char fixed_stack_list::empty() const {}

// Range: 0x80039D9C -> 0x80039DF4
// this: r31
void fixed_stack_list::push_back() {
    // Local variables
    struct node_type * n; // r0
}

// Range: 0x80039DF4 -> 0x80039E90
// this: r30
struct node_type * fixed_stack_list::alloc() {
    // Local variables
    struct node_type * ret; // r3

    // References
    // -> char __FUNCTION__$localstatic1$alloc__79fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>Fv[6];
}

// Range: 0x80039E90 -> 0x80039EDC
// this: r31
void fixed_stack_list::clear() {}

// Range: 0x80039EDC -> 0x80039FF8
// this: r30
class iterator fixed_stack_list::erase(class iterator & first /* r0 */, class iterator & last /* r31 */) {
    // Local variables
    struct node_type * n; // r29
    struct node_type * end; // r28
    struct node_type * next; // r27

    // References
    // -> char __FUNCTION__$localstatic1$erase__33fixed_stack_list<10tweak_info,64>FQ233fixed_stack_list<10tweak_info,64>8iteratorQ233fixed_stack_list<10tweak_info,64>8iterator[6];
}

// Range: 0x8003A0C0 -> 0x8003A0D0
// this: r0
unsigned char fixed_stack_list::empty() const {}

// Range: 0x8003A0D0 -> 0x8003A140
// this: r30
class iterator fixed_stack_list::insert(class iterator & it /* r31 */) {
    // Local variables
    struct node_type * n; // r4
}

// Range: 0x8003A140 -> 0x8003A1DC
// this: r30
struct node_type * fixed_stack_list::alloc() {
    // Local variables
    struct node_type * ret; // r3

    // References
    // -> char __FUNCTION__$localstatic1$alloc__33fixed_stack_list<10tweak_info,64>Fv[6];
}

// Range: 0x8003A1DC -> 0x8003A1E4
unsigned long fixed_stack_list::max_size() {}

// Range: 0x8003A1E4 -> 0x8003A1F4
// this: r0
class iterator & iterator::operator++() {}

// Range: 0x8003A1F4 -> 0x8003A278
// this: r31
struct string_type * iterator::operator->() const {
    // References
    // -> char __FUNCTION__$localstatic1$__rf__Q279fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>8iteratorCFv[5];
}

// Range: 0x8003A278 -> 0x8003A29C
// this: r0
class iterator fixed_stack_list::begin() const {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800447BC -> 0x80045400
*/
// Range: 0x800447BC -> 0x800447C4
// this: r3
struct node_type * pool_list::end() const {}

// Range: 0x800447C4 -> 0x800447CC
// this: r3
struct node_type * pool_list::begin() const {}

// Range: 0x800447CC -> 0x80044850
// this: r31
struct owner_group_type & pool_list::back() {
    // References
    // -> char __FUNCTION__$localstatic1$back__53pool_list<Q220@unnamed@xDecal_cpp@16owner_group_type>Fv[5];
}

// Range: 0x80044850 -> 0x80044860
// this: r0
unsigned char pool_list_base::empty() const {}

// Range: 0x80044860 -> 0x80044880
// this: r0
void pool_list::push_back() {}

// Range: 0x80044880 -> 0x800448A0
// this: r0
struct node_type * pool_list::erase(struct node_type * it /* r0 */) {}

// Range: 0x800448A0 -> 0x80044A08
// this: r30
struct node_type * pool_list::get_iterator(const struct owner_group_type * value /* r31 */) {
    // Local variables
    unsigned char * p; // r31

    // References
    // -> char __FUNCTION__$localstatic1$get_iterator__53pool_list<Q220@unnamed@xDecal_cpp@16owner_group_type>FPCQ220@unnamed@xDecal_cpp@16owner_group_type[13];
}

// Range: 0x80044A08 -> 0x80044A54
// this: r30
unsigned char pool_list_base::full() const {}

// Range: 0x80044A54 -> 0x80044A5C
// this: r3
int pool_list_base::max_size() const {}

// Range: 0x80044A5C -> 0x80044A64
// this: r3
int pool_list_base::size() const {}

// Range: 0x80044A64 -> 0x80044A9C
// this: r0
void pool_list::create(int max_size /* r8 */, unsigned int memtag /* r0 */, void * buffer /* r7 */) {}

// Range: 0x80044A9C -> 0x80044AC0
// this: r0
void pool_list::reset() {}

// Range: 0x80044AC0 -> 0x80044AE8
// this: r0
unsigned char static_queue::empty() const {}

// Range: 0x80044AE8 -> 0x80044AF0
// this: r3
unsigned long static_queue::size() const {}

// Range: 0x80044AF0 -> 0x80044C28
// this: r29
void static_queue::init(unsigned long size /* r30 */, unsigned int memtag /* r31 */) {
    // Local variables
    unsigned long power; // r3

    // References
    // -> char __FUNCTION__$localstatic1$init__41static_queue<Q213xDecalEmitter9unit_data>FUlUi[5];
    // -> unsigned int gActiveHeap;
}

// Range: 0x80044C28 -> 0x80044C38
// this: r0
void static_queue::clear() {}

// Range: 0x80044C38 -> 0x80044D58
// this: r30
void static_queue::tweak_init(unsigned long size /* r31 */) {
    // Local variables
    unsigned long power; // r3

    // References
    // -> char __FUNCTION__$localstatic1$tweak_init__41static_queue<Q213xDecalEmitter9unit_data>FUl[11];
}

// Range: 0x80044D58 -> 0x80044DEC
// this: r31
struct unit_data & static_queue::front() {
    // References
    // -> char __FUNCTION__$localstatic1$front__41static_queue<Q213xDecalEmitter9unit_data>Fv[6];
}

// Range: 0x80044DEC -> 0x80044E7C
// this: r31
struct unit_data & iterator::operator*() const {
    // References
    // -> char __FUNCTION__$localstatic1$__ml__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorCFv[5];
}

// Range: 0x80044E7C -> 0x80044F0C
// this: r29
unsigned char iterator::valid() const {
    // Local variables
    unsigned long i; // r30
}

// Range: 0x80044F0C -> 0x80044F30
// this: r0
class iterator static_queue::begin() const {}

// Range: 0x80044F30 -> 0x80044F50
// this: r0
class iterator static_queue::create_iterator(unsigned long i /* r4 */) const {
    // Local variables
    class iterator r; // r1+0x8
}

// Range: 0x80044F50 -> 0x80044FF4
// this: r31
struct unit_data & static_queue::push_front() {
    // References
    // -> char __FUNCTION__$localstatic1$push_front__41static_queue<Q213xDecalEmitter9unit_data>Fv[11];
}

// Range: 0x80044FF4 -> 0x80045000
// this: r0
unsigned long static_queue::mod_max_size(unsigned long v /* r0 */) const {}

// Range: 0x80045000 -> 0x80045088
// this: r31
void static_queue::pop_back() {
    // References
    // -> char __FUNCTION__$localstatic1$pop_back__41static_queue<Q213xDecalEmitter9unit_data>Fv[9];
}

// Range: 0x80045088 -> 0x800450D4
// this: r30
unsigned char static_queue::full() const {}

// Range: 0x800450D4 -> 0x800450E0
// this: r0
unsigned long static_queue::max_size() const {}

// Range: 0x800450E0 -> 0x80045258
// this: r31
void static_queue::erase(const class iterator & first /* r29 */, const class iterator & last /* r30 */) {
    // Local variables
    unsigned long tail; // r4
    unsigned long diff; // r0

    // References
    // -> char __FUNCTION__$localstatic1$erase__41static_queue<Q213xDecalEmitter9unit_data>FRCQ241static_queue<Q213xDecalEmitter9unit_data>8iteratorRCQ241static_queue<Q213xDecalEmitter9unit_data>8iterator[6];
}

// Range: 0x80045258 -> 0x80045270
// this: r0
unsigned char iterator::operator==(const class iterator & c /* r0 */) const {}

// Range: 0x80045270 -> 0x8004528C
// this: r0
unsigned char iterator::operator!=(const class iterator & c /* r0 */) const {}

// Range: 0x8004528C -> 0x800452D0
// this: r31
class iterator static_queue::end() const {}

// Range: 0x800452D0 -> 0x80045304
// this: r31
class iterator & iterator::operator++() {}

// Range: 0x80045304 -> 0x80045400
// this: r30
class iterator & iterator::operator+=(int i /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$__apl__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorFi[6];
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006A6B4 -> 0x8006B870
*/
// Range: 0x8006A6B4 -> 0x8006A764
// this: r29
void tier_queue::clear() {
    // Local variables
    unsigned long i; // r30
    unsigned long end; // r0
}

// ERROR: Failed to emit tag 3069A5 (GlobalSubroutine)
// Range: 0x8006A8F0 -> 0x8006A930
// this: r0
unsigned char tier_queue_allocator::valid() const {}

// Range: 0x8006A930 -> 0x8006A938
unsigned long tier_queue::wrap_block(unsigned long i /* r0 */) {}

// Range: 0x8006A938 -> 0x8006A940
// this: r3
unsigned long tier_queue_allocator::block_size() const {}

// Range: 0x8006A940 -> 0x8006A974
// this: r3
unsigned long tier_queue::get_block(unsigned long i /* r31 */) const {}

// Range: 0x8006A974 -> 0x8006A97C
// this: r3
unsigned long tier_queue_allocator::block_size_shift() const {}

// Range: 0x8006A97C -> 0x8006AA10
// this: r31
struct joint_data & tier_queue::front() {
    // References
    // -> char __FUNCTION__$localstatic1$front__36tier_queue<Q29xFXRibbon10joint_data>Fv[6];
}

// Range: 0x8006AA10 -> 0x8006AA3C
// this: r4
struct joint_data & iterator::operator*() const {}

// ERROR: Failed to emit tag 306E55 (GlobalSubroutine)
// Range: 0x8006AAF0 -> 0x8006AB00
// this: r0
unsigned long tier_queue_allocator::mod_block_size(unsigned long i /* r0 */) const {}

// ERROR: Failed to emit tag 307022 (GlobalSubroutine)
// Range: 0x8006AB98 -> 0x8006ABBC
// this: r0
class iterator tier_queue::begin() const {}

// Range: 0x8006ABBC -> 0x8006ABDC
// this: r0
class iterator tier_queue::create_iterator(unsigned long i /* r4 */) const {
    // Local variables
    class iterator it; // r1+0x8
}

// Range: 0x8006ABDC -> 0x8006ACC8
// this: r29
void tier_queue::push_front(unsigned int memtag /* r30 */) {
    // Local variables
    unsigned long oldfirst; // r31
    unsigned long block_index; // r0

    // References
    // -> char __FUNCTION__$localstatic1$push_front__36tier_queue<Q29xFXRibbon10joint_data>FUi[11];
}

// ERROR: Failed to emit tag 307333 (GlobalSubroutine)
// ERROR: Failed to emit tag 307425 (GlobalSubroutine)
// ERROR: Failed to emit tag 307502 (GlobalSubroutine)
// Range: 0x8006AF4C -> 0x8006AF58
// this: r0
unsigned long tier_queue::wrap_index(unsigned long i /* r0 */) const {}

// Range: 0x8006AF58 -> 0x8006AF68
// this: r0
unsigned char tier_queue::empty() const {}

// Range: 0x8006AF68 -> 0x8006AFBC
// this: r31
unsigned char tier_queue::front_full() const {}

// Range: 0x8006AFBC -> 0x8006B0B0
// this: r30
void tier_queue::pop_back() {
    // Local variables
    unsigned long last; // r31
    unsigned long block_index; // r0

    // References
    // -> char __FUNCTION__$localstatic1$pop_back__36tier_queue<Q29xFXRibbon10joint_data>Fv[9];
}

// Range: 0x8006B0B0 -> 0x8006B0EC
// this: r0
class iterator iterator::operator-(int i /* r0 */) const {
    // Local variables
    class iterator c; // r1+0x8
}

// Range: 0x8006B0EC -> 0x8006B11C
// this: r0
class iterator iterator::operator-=(int i /* r4 */) {}

// Range: 0x8006B11C -> 0x8006B15C
// this: r31
class iterator & iterator::operator+=(int i /* r4 */) {}

// Range: 0x8006B15C -> 0x8006B1A0
// this: r31
class iterator tier_queue::end() const {}

// Range: 0x8006B1A0 -> 0x8006B1A8
// this: r3
unsigned long tier_queue::size() const {}

// Range: 0x8006B1A8 -> 0x8006B250
// this: r31
struct joint_data & tier_queue::back() {
    // References
    // -> char __FUNCTION__$localstatic1$back__36tier_queue<Q29xFXRibbon10joint_data>Fv[5];
}

// Range: 0x8006B250 -> 0x8006B28C
// this: r0
class iterator iterator::operator+(int i /* r0 */) const {
    // Local variables
    class iterator c; // r1+0x8
}

// Range: 0x8006B28C -> 0x8006B334
// this: r30
struct joint_data & tier_queue::operator[](int i /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$__vc__36tier_queue<Q29xFXRibbon10joint_data>Fi[5];
}

// Range: 0x8006B334 -> 0x8006B354
// this: r0
struct joint_data * iterator::operator->() const {}

// Range: 0x8006B354 -> 0x8006B36C
// this: r0
unsigned char iterator::operator==(const class iterator & c /* r0 */) const {}

// Range: 0x8006B36C -> 0x8006B374
// this: r3
unsigned long iterator::global_index() const {}

// Range: 0x8006B374 -> 0x8006B390
// this: r0
unsigned char iterator::operator!=(const class iterator & c /* r0 */) const {}

// Range: 0x8006B390 -> 0x8006B3C4
// this: r31
class iterator & iterator::operator--() {}

// Range: 0x8006B3C4 -> 0x8006B41C
// this: r30
void tier_queue::init(class tier_queue_allocator & alloc /* r31 */) {}

// ERROR: Failed to emit tag 3081C4 (GlobalSubroutine)
// ERROR: Failed to emit tag 308383 (GlobalSubroutine)
// Range: 0x8006B854 -> 0x8006B870
unsigned long tier_queue_allocator::log2_ceil(unsigned long v /* r4 */) {
    // Local variables
    unsigned long power; // r3
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C2184 -> 0x800C2484
*/
// Range: 0x800C2184 -> 0x800C21D8
// this: r30
void linear_pool::create(int max_size /* r31 */, unsigned int memtag /* r0 */) {}

// Range: 0x800C21D8 -> 0x800C21EC
// this: r0
void linear_pool::create(int max_size /* r0 */, struct sound_fader * buffer /* r0 */) {}

// Range: 0x800C21EC -> 0x800C21F8
// this: r0
void linear_pool::clear() {}

// Range: 0x800C21F8 -> 0x800C22C0
// this: r30
void linear_pool::erase(struct sound_fader * it /* r31 */) {
    // Local variables
    struct sound_fader * tail; // r4

    // References
    // -> char __FUNCTION__$localstatic1$erase__51linear_pool<Q221@unnamed@xSndMgr_cpp@11sound_fader>FPQ221@unnamed@xSndMgr_cpp@11sound_fader[6];
}

// Range: 0x800C22E4 -> 0x800C22F8
// this: r0
struct sound_fader * linear_pool::end() {}

// Range: 0x800C22F8 -> 0x800C2300
// this: r3
struct sound_fader * linear_pool::begin() {}

// Range: 0x800C2300 -> 0x800C2390
// this: r31
struct sound_fader & linear_pool::back() {
    // References
    // -> char __FUNCTION__$localstatic1$back__51linear_pool<Q221@unnamed@xSndMgr_cpp@11sound_fader>Fv[5];
}

// Range: 0x800C2390 -> 0x800C23A0
// this: r0
unsigned char linear_pool::empty() const {}

// Range: 0x800C23A0 -> 0x800C2428
// this: r31
void linear_pool::push_back() {
    // References
    // -> char __FUNCTION__$localstatic1$push_back__51linear_pool<Q221@unnamed@xSndMgr_cpp@11sound_fader>Fv[10];
}

// Range: 0x800C2428 -> 0x800C2474
// this: r30
unsigned char linear_pool::full() const {}

// Range: 0x800C2474 -> 0x800C247C
// this: r3
int linear_pool::max_size() const {}

// Range: 0x800C247C -> 0x800C2484
// this: r3
int linear_pool::size() const {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F78F0 -> 0x800F7948
*/
// Range: 0x800F78F0 -> 0x800F7920
// this: r31
bit_array::bit_array() {}

// Range: 0x800F7920 -> 0x800F7948
// this: r0
void bit_array::clear() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80102A50 -> 0x80102A50
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80127774 -> 0x80127794
*/
// Range: 0x80127774 -> 0x80127794
class iterator tier_queue::dummy_iterator() {
    // Local variables
    class iterator it; // r1+0x8
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80136430 -> 0x80136430
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017082C -> 0x80170D58
*/
// Range: 0x8017082C -> 0x801708D0
// this: r31
struct trigger_pair & fixed_queue::back() {
    // References
    // -> char __FUNCTION__$localstatic1$back__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv[5];
}

// Range: 0x801708D0 -> 0x8017095C
// this: r31
struct trigger_pair & iterator::operator*() const {
    // References
    // -> char __FUNCTION__$localstatic1$__ml__Q256fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>8iteratorCFv[5];
}

// Range: 0x8017095C -> 0x801709C8
// this: r0
unsigned char iterator::valid() const {}

// Range: 0x801709C8 -> 0x80170A04
// this: r0
class iterator iterator::operator-(int i /* r0 */) const {
    // Local variables
    class iterator c; // r1+0x8
}

// Range: 0x80170A04 -> 0x80170A34
// this: r0
class iterator iterator::operator-=(int i /* r4 */) {}

// Range: 0x80170A34 -> 0x80170A60
// this: r0
class iterator & iterator::operator+=(int i /* r0 */) {}

// Range: 0x80170A60 -> 0x80170A84
// this: r0
class iterator fixed_queue::end() const {}

// Range: 0x80170A84 -> 0x80170AA4
// this: r0
class iterator fixed_queue::create_iterator(unsigned long i /* r4 */) const {
    // Local variables
    class iterator r; // r1+0x8
}

// Range: 0x80170AA4 -> 0x80170ABC
// this: r0
unsigned char fixed_queue::empty() const {}

// Range: 0x80170ABC -> 0x80170B58
// this: r31
void fixed_queue::push_back() {
    // References
    // -> char __FUNCTION__$localstatic1$push_back__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv[10];
}

// Range: 0x80170B58 -> 0x80170BA4
// this: r30
unsigned char fixed_queue::full() const {}

// Range: 0x80170BA4 -> 0x80170BAC
unsigned long fixed_queue::max_size() {}

// Range: 0x80170BAC -> 0x80170BD8
// this: r0
unsigned long fixed_queue::size() const {}

// Range: 0x80170BD8 -> 0x80170C74
// this: r31
void fixed_queue::pop_front() {
    // References
    // -> char __FUNCTION__$localstatic1$pop_front__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv[10];
}

// Range: 0x80170C74 -> 0x80170D04
// this: r31
struct trigger_pair & fixed_queue::front() {
    // References
    // -> char __FUNCTION__$localstatic1$front__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv[6];
}

// Range: 0x80170D04 -> 0x80170D28
// this: r0
class iterator fixed_queue::begin() const {}

// Range: 0x80170D28 -> 0x80170D48
// this: r0
void fixed_queue::reset() {}

// Range: 0x80170D48 -> 0x80170D58
// this: r0
void fixed_queue::clear() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C3208 -> 0x801C3208
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D8E58 -> 0x801D8E8C
*/
// Range: 0x801D8E58 -> 0x801D8E8C
// this: r31
class iterator & iterator::operator++() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DF244 -> 0x801DF364
*/
// ERROR: Failed to emit tag 17C7563 (GlobalSubroutine)
// ERROR: Failed to emit tag 17C76EA (GlobalSubroutine)

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F3258 -> 0x801F389C
*/
// Range: 0x801F3258 -> 0x801F32C4
// this: r30
void linear_pool::create(int max_size /* r31 */, unsigned int memtag /* r0 */) {}

// Range: 0x801F32C4 -> 0x801F32FC
// this: r0
void pool_list::create(int max_size /* r8 */, unsigned int memtag /* r0 */, void * buffer /* r7 */) {}

// Range: 0x801F32FC -> 0x801F3310
// this: r0
void linear_pool::create(int max_size /* r0 */, struct activity_data * buffer /* r0 */) {}

// Range: 0x801F3310 -> 0x801F3334
// this: r0
void pool_list::reset() {}

// Range: 0x801F3334 -> 0x801F333C
// this: r3
struct node_type * pool_list::begin() const {}

// Range: 0x801F333C -> 0x801F3348
// this: r0
void linear_pool::clear() {}

// Range: 0x801F3348 -> 0x801F335C
// this: r0
struct activity_data * linear_pool::end() {}

// Range: 0x801F335C -> 0x801F3364
// this: r3
struct activity_data * linear_pool::begin() {}

// Range: 0x801F3364 -> 0x801F3384
// this: r0
struct node_type * pool_list::erase(struct node_type * it /* r0 */) {}

// Range: 0x801F3384 -> 0x801F3430
// this: r29
void pool_list::move(struct node_type * it /* r30 */, struct node_type * at /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$move__64pool_list<Q229@unnamed@zTransientModel_cpp@18transient_instance>FPQ264pool_list<Q229@unnamed@zTransientModel_cpp@18transient_instance>9node_typePQ264pool_list<Q229@unnamed@zTransientModel_cpp@18transient_instance>9node_type[5];
}

// Range: 0x801F3430 -> 0x801F3450
void pool_list_base::link(struct node_base * it /* r0 */, struct node_base * at /* r0 */) {}

// ERROR: Failed to emit tag 192FB3B (GlobalSubroutine)
// Range: 0x801F34F0 -> 0x801F34F8
// this: r3
struct node_type * pool_list::end() const {}

// Range: 0x801F34F8 -> 0x801F3544
// this: r30
unsigned char linear_pool::full() const {}

// Range: 0x801F3544 -> 0x801F354C
// this: r3
int linear_pool::max_size() const {}

// Range: 0x801F354C -> 0x801F3554
// this: r3
int linear_pool::size() const {}

// Range: 0x801F3554 -> 0x801F3574
// this: r0
struct node_type * pool_list::insert(struct node_type * it /* r0 */) {}

// Range: 0x801F3574 -> 0x801F3604
// this: r31
struct activity_data & linear_pool::back() {
    // References
    // -> char __FUNCTION__$localstatic1$back__54linear_pool<Q222zTransientModelEmitter13activity_data>Fv[5];
}

// Range: 0x801F3604 -> 0x801F3614
// this: r0
unsigned char linear_pool::empty() const {}

// Range: 0x801F3614 -> 0x801F369C
// this: r31
void linear_pool::push_back() {
    // References
    // -> char __FUNCTION__$localstatic1$push_back__54linear_pool<Q222zTransientModelEmitter13activity_data>Fv[10];
}

// Range: 0x801F369C -> 0x801F3764
// this: r30
void linear_pool::erase(struct activity_data * it /* r31 */) {
    // Local variables
    struct activity_data * tail; // r4

    // References
    // -> char __FUNCTION__$localstatic1$erase__54linear_pool<Q222zTransientModelEmitter13activity_data>FPQ222zTransientModelEmitter13activity_data[6];
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FD4E4 -> 0x801FD50C
*/
// Range: 0x801FD4E4 -> 0x801FD50C
// this: r0
void pool_list_base::clear() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80231A48 -> 0x80231A48
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80253680 -> 0x802537BC
*/
// Range: 0x80253680 -> 0x80253688
// this: r3
struct node_type * pool_list::get_buffer() const {}

// Range: 0x80253688 -> 0x8025370C
// this: r31
class zNPCProjectileFrozen & pool_list::front() {
    // References
    // -> char __FUNCTION__$localstatic1$front__71pool_list<Q234@unnamed@zNPCProjectileFrozen_cpp@20zNPCProjectileFrozen>Fv[6];
}

// Range: 0x8025370C -> 0x8025372C
// this: r0
void pool_list::push_front() {}

// Range: 0x8025372C -> 0x80253764
// this: r0
void pool_list::create(int max_size /* r8 */, unsigned int memtag /* r0 */, void * buffer /* r7 */) {}

// Range: 0x8025378C -> 0x80253794
// this: r3
struct node_type * pool_list::end() const {}

// Range: 0x80253794 -> 0x8025379C
// this: r3
struct node_type * pool_list::begin() const {}

// Range: 0x8025379C -> 0x802537BC
// this: r0
struct node_type * pool_list::erase(struct node_type * it /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025F7DC -> 0x8025F7DC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80262F9C -> 0x8026314C
*/
// Range: 0x80262F9C -> 0x8026308C
// this: r31
void bit_array::set(int index /* r29 */, unsigned char value /* r30 */) {
    // Local variables
    int which_byte; // r5
    int which_bit; // r4

    // References
    // -> char __FUNCTION__$localstatic1$set__12bit_array<3>Fib[4];
}

// Range: 0x8026308C -> 0x8026314C
// this: r30
unsigned char bit_array::get(int index /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$get__12bit_array<3>Fi[4];
}


