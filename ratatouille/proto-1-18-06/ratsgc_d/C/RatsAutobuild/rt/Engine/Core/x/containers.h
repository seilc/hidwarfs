/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80042F70 -> 0x80043ED8
*/
// Range: 0x80042F70 -> 0x80042FEC
// this: r3
void fixed_stack_list::reset() {
    // Local variables
    struct node_type * it; // r31
    struct node_type * end; // r30
}

// Range: 0x80042FEC -> 0x80043060
// this: r3
void fixed_stack_list::reset() {
    // Local variables
    struct node_type * it; // r31
    struct node_type * end; // r30
}

// Range: 0x80043060 -> 0x80043068
unsigned long fixed_stack_list::max_size() {}

// Range: 0x80043068 -> 0x80043070
// this: r3
unsigned long fixed_stack_list::size() const {}

// Range: 0x80043070 -> 0x80043078
// this: r3
unsigned long fixed_stack_list::size() const {}

// Range: 0x80043078 -> 0x800430B4
// this: r1+0x8
unsigned char iterator::operator!=(const class iterator & c /* r1+0xC */) const {}

// Range: 0x800430B4 -> 0x800430CC
// this: r3
unsigned char iterator::operator==(const class iterator & c /* r4 */) const {}

// Range: 0x800430CC -> 0x800430FC
// this: r31
class iterator fixed_stack_list::end() const {}

// Range: 0x800430FC -> 0x80043110
class iterator fixed_stack_list::create_iterator(struct node_type * n /* r4 */) {
    // Local variables
    class iterator it; // r1+0x8
}

// Range: 0x80043110 -> 0x80043120
// this: r3
class iterator & iterator::operator++() {}

// Range: 0x80043140 -> 0x80043284
// this: r30
class iterator fixed_stack_list::erase(class iterator & it /* r31 */) {
    // Local variables
    struct node_type * next; // r29
    struct node_type * prev; // r28

    // References
    // -> char __FUNCTION__$localstatic1$erase__33fixed_stack_list<10tweak_info,64>FQ233fixed_stack_list<10tweak_info,64>8iterator[6];
}

// Range: 0x80043284 -> 0x80043320
// this: r30
void fixed_stack_list::free(struct node_type * n /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$free__33fixed_stack_list<10tweak_info,64>FPQ233fixed_stack_list<10tweak_info,64>9node_type[5];
}

// Range: 0x80043320 -> 0x800433B4
// this: r31
struct tweak_info & iterator::operator*() const {
    // References
    // -> char __FUNCTION__$localstatic1$__ml__Q233fixed_stack_list<10tweak_info,64>8iteratorCFv[5];
}

// Range: 0x800433B4 -> 0x80043448
// this: r31
struct tweak_info * iterator::operator->() const {
    // References
    // -> char __FUNCTION__$localstatic1$__rf__Q233fixed_stack_list<10tweak_info,64>8iteratorCFv[5];
}

// Range: 0x80043448 -> 0x80043478
// this: r31
class iterator fixed_stack_list::begin() const {}

// Range: 0x80043478 -> 0x800435BC
// this: r30
class iterator fixed_stack_list::erase(class iterator & it /* r31 */) {
    // Local variables
    struct node_type * next; // r29
    struct node_type * prev; // r28

    // References
    // -> char __FUNCTION__$localstatic1$erase__79fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>FQ279fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>8iterator[6];
}

// Range: 0x800435BC -> 0x800435D0
class iterator fixed_stack_list::create_iterator(struct node_type * n /* r4 */) {
    // Local variables
    class iterator it; // r1+0x8
}

// Range: 0x800435D0 -> 0x8004366C
// this: r30
void fixed_stack_list::free(struct node_type * n /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$free__79fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>FPQ279fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>9node_type[5];
}

// Range: 0x8004366C -> 0x800436A8
// this: r1+0x8
unsigned char iterator::operator!=(const class iterator & c /* r1+0xC */) const {}

// Range: 0x800436A8 -> 0x800436C0
// this: r3
unsigned char iterator::operator==(const class iterator & c /* r4 */) const {}

// Range: 0x800436C0 -> 0x800436F0
// this: r31
class iterator fixed_stack_list::end() const {}

// Range: 0x800436F0 -> 0x80043884
// this: r31
class iterator fixed_stack_list::get_iterator(const struct string_type * value /* r29 */) {
    // Local variables
    char * p; // r30

    // References
    // -> char __FUNCTION__$localstatic1$get_iterator__79fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>FPCQ325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type[13];
}

// Range: 0x80043884 -> 0x80043918
// this: r31
struct string_type & fixed_stack_list::back() {
    // References
    // -> char __FUNCTION__$localstatic1$back__79fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>Fv[5];
}

// Range: 0x80043918 -> 0x80043928
// this: r3
unsigned char fixed_stack_list::empty() const {}

// Range: 0x80043928 -> 0x8004398C
// this: r30
void fixed_stack_list::push_back() {
    // Local variables
    struct node_type * n; // r31
}

// Range: 0x8004398C -> 0x80043A44
// this: r31
struct node_type * fixed_stack_list::alloc() {
    // Local variables
    struct node_type * ret; // r30

    // References
    // -> char __FUNCTION__$localstatic1$alloc__79fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>Fv[6];
}

// Range: 0x80043A44 -> 0x80043AAC
// this: r31
void fixed_stack_list::clear() {}

// Range: 0x80043AAC -> 0x80043BEC
// this: r29
class iterator fixed_stack_list::erase(class iterator & first /* r26 */, class iterator & last /* r28 */) {
    // Local variables
    struct node_type * n; // r31
    struct node_type * end; // r30
    struct node_type * next; // r27

    // References
    // -> char __FUNCTION__$localstatic1$erase__33fixed_stack_list<10tweak_info,64>FQ233fixed_stack_list<10tweak_info,64>8iteratorQ233fixed_stack_list<10tweak_info,64>8iterator[6];
}

// Range: 0x80043CB4 -> 0x80043CC4
// this: r3
unsigned char fixed_stack_list::empty() const {}

// Range: 0x80043CC4 -> 0x80043D44
// this: r29
class iterator fixed_stack_list::insert(class iterator & it /* r30 */) {
    // Local variables
    struct node_type * n; // r31
}

// Range: 0x80043D44 -> 0x80043DFC
// this: r31
struct node_type * fixed_stack_list::alloc() {
    // Local variables
    struct node_type * ret; // r30

    // References
    // -> char __FUNCTION__$localstatic1$alloc__33fixed_stack_list<10tweak_info,64>Fv[6];
}

// Range: 0x80043DFC -> 0x80043E04
unsigned long fixed_stack_list::max_size() {}

// Range: 0x80043E04 -> 0x80043E14
// this: r3
class iterator & iterator::operator++() {}

// Range: 0x80043E14 -> 0x80043EA8
// this: r31
struct string_type * iterator::operator->() const {
    // References
    // -> char __FUNCTION__$localstatic1$__rf__Q279fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>8iteratorCFv[5];
}

// Range: 0x80043EA8 -> 0x80043ED8
// this: r31
class iterator fixed_stack_list::begin() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800508FC -> 0x800516D8
*/
// Range: 0x800508FC -> 0x80050904
// this: r3
struct node_type * pool_list::end() const {}

// Range: 0x80050904 -> 0x8005090C
// this: r3
struct node_type * pool_list::begin() const {}

// Range: 0x8005090C -> 0x800509A0
// this: r31
struct owner_group_type & pool_list::back() {
    // References
    // -> char __FUNCTION__$localstatic1$back__53pool_list<Q220@unnamed@xDecal_cpp@16owner_group_type>Fv[5];
}

// Range: 0x800509A0 -> 0x800509B0
// this: r3
unsigned char pool_list_base::empty() const {}

// Range: 0x800509B0 -> 0x800509D8
// this: r1+0x8
void pool_list::push_back() {}

// Range: 0x800509D8 -> 0x80050A08
// this: r1+0x8
struct node_type * pool_list::erase(struct node_type * it /* r1+0xC */) {}

// Range: 0x80050A08 -> 0x80050BA8
// this: r31
struct node_type * pool_list::get_iterator(const struct owner_group_type * value /* r29 */) {
    // Local variables
    unsigned char * p; // r30

    // References
    // -> char __FUNCTION__$localstatic1$get_iterator__53pool_list<Q220@unnamed@xDecal_cpp@16owner_group_type>FPCQ220@unnamed@xDecal_cpp@16owner_group_type[13];
}

// Range: 0x80050BA8 -> 0x80050BF4
// this: r31
unsigned char pool_list_base::full() const {}

// Range: 0x80050BF4 -> 0x80050BFC
// this: r3
int pool_list_base::max_size() const {}

// Range: 0x80050BFC -> 0x80050C04
// this: r3
int pool_list_base::size() const {}

// Range: 0x80050C04 -> 0x80050C48
// this: r1+0x8
void pool_list::create(int max_size /* r1+0xC */, unsigned int memtag /* r1+0x10 */, void * buffer /* r1+0x14 */) {}

// Range: 0x80050C48 -> 0x80050C74
// this: r1+0x8
void pool_list::reset() {}

// Range: 0x80050C74 -> 0x80050CA4
// this: r1+0x8
unsigned char static_queue::empty() const {}

// Range: 0x80050CA4 -> 0x80050CAC
// this: r3
unsigned long static_queue::size() const {}

// Range: 0x80050CAC -> 0x80050E1C
// this: r31
void static_queue::init(unsigned long size /* r30 */, unsigned int memtag /* r1+0x8 */) {
    // Local variables
    unsigned long power; // r29

    // References
    // -> char __FUNCTION__$localstatic1$init__41static_queue<Q213xDecalEmitter9unit_data>FUlUi[5];
    // -> unsigned int gActiveHeap;
}

// Range: 0x80050E1C -> 0x80050E2C
// this: r3
void static_queue::clear() {}

// Range: 0x80050E2C -> 0x80050F74
// this: r31
void static_queue::tweak_init(unsigned long size /* r30 */) {
    // Local variables
    unsigned long power; // r29

    // References
    // -> char __FUNCTION__$localstatic1$tweak_init__41static_queue<Q213xDecalEmitter9unit_data>FUl[11];
}

// Range: 0x80050F74 -> 0x80051028
// this: r30
struct unit_data & static_queue::front() {
    // References
    // -> char __FUNCTION__$localstatic1$front__41static_queue<Q213xDecalEmitter9unit_data>Fv[6];
}

// Range: 0x80051028 -> 0x800510C8
// this: r31
struct unit_data & iterator::operator*() const {
    // References
    // -> char __FUNCTION__$localstatic1$__ml__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorCFv[5];
}

// Range: 0x800510C8 -> 0x8005116C
// this: r31
unsigned char iterator::valid() const {
    // Local variables
    unsigned long i; // r30
}

// Range: 0x8005116C -> 0x8005119C
// this: r31
class iterator static_queue::begin() const {}

// Range: 0x8005119C -> 0x800511B8
// this: r3
class iterator static_queue::create_iterator(unsigned long i /* r4 */) const {
    // Local variables
    class iterator r; // r1+0x8
}

// Range: 0x800511B8 -> 0x80051270
// this: r31
struct unit_data & static_queue::push_front() {
    // References
    // -> char __FUNCTION__$localstatic1$push_front__41static_queue<Q213xDecalEmitter9unit_data>Fv[11];
}

// Range: 0x80051270 -> 0x8005127C
// this: r3
unsigned long static_queue::mod_max_size(unsigned long v /* r4 */) const {}

// Range: 0x8005127C -> 0x80051314
// this: r31
void static_queue::pop_back() {
    // References
    // -> char __FUNCTION__$localstatic1$pop_back__41static_queue<Q213xDecalEmitter9unit_data>Fv[9];
}

// Range: 0x80051314 -> 0x80051360
// this: r31
unsigned char static_queue::full() const {}

// Range: 0x80051360 -> 0x8005136C
// this: r3
unsigned long static_queue::max_size() const {}

// Range: 0x8005136C -> 0x8005150C
// this: r31
void static_queue::erase(const class iterator & first /* r29 */, const class iterator & last /* r30 */) {
    // Local variables
    unsigned long tail; // r27
    unsigned long diff; // r28

    // References
    // -> char __FUNCTION__$localstatic1$erase__41static_queue<Q213xDecalEmitter9unit_data>FRCQ241static_queue<Q213xDecalEmitter9unit_data>8iteratorRCQ241static_queue<Q213xDecalEmitter9unit_data>8iterator[6];
}

// Range: 0x8005150C -> 0x80051524
// this: r3
unsigned char iterator::operator==(const class iterator & c /* r4 */) const {}

// Range: 0x80051524 -> 0x80051540
// this: r3
unsigned char iterator::operator!=(const class iterator & c /* r4 */) const {}

// Range: 0x80051540 -> 0x80051584
// this: r31
class iterator static_queue::end() const {}

// Range: 0x80051584 -> 0x800515B8
// this: r31
class iterator & iterator::operator++() {}

// Range: 0x800515B8 -> 0x800516D8
// this: r31
class iterator & iterator::operator+=(int i /* r30 */) {
    // References
    // -> char __FUNCTION__$localstatic1$__apl__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorFi[6];
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007D1F0 -> 0x8007E5E0
*/
// Range: 0x8007D1F0 -> 0x8007D29C
// this: r31
void tier_queue::clear() {
    // Local variables
    unsigned long i; // r30
    unsigned long end; // r29
}

// ERROR: Failed to emit tag 30FE54 (GlobalSubroutine)
// Range: 0x8007D534 -> 0x8007D5B4
// this: r3
unsigned char tier_queue_allocator::valid() const {}

// Range: 0x8007D5B4 -> 0x8007D5BC
unsigned long tier_queue::wrap_block(unsigned long i /* r4 */) {}

// Range: 0x8007D5BC -> 0x8007D5C4
// this: r3
unsigned long tier_queue_allocator::block_size() const {}

// Range: 0x8007D5C4 -> 0x8007D600
// this: r31
unsigned long tier_queue::get_block(unsigned long i /* r1+0x8 */) const {}

// Range: 0x8007D600 -> 0x8007D608
// this: r3
unsigned long tier_queue_allocator::block_size_shift() const {}

// Range: 0x8007D608 -> 0x8007D6BC
// this: r30
struct joint_data & tier_queue::front() {
    // References
    // -> char __FUNCTION__$localstatic1$front__36tier_queue<Q29xFXRibbon10joint_data>Fv[6];
}

// Range: 0x8007D6BC -> 0x8007D6F0
// this: r31
struct joint_data & iterator::operator*() const {}

// ERROR: Failed to emit tag 31030A (GlobalSubroutine)
// Range: 0x8007D7AC -> 0x8007D7BC
// this: r3
unsigned long tier_queue_allocator::mod_block_size(unsigned long i /* r4 */) const {}

// ERROR: Failed to emit tag 3104D7 (GlobalSubroutine)
// Range: 0x8007D864 -> 0x8007D894
// this: r31
class iterator tier_queue::begin() const {}

// Range: 0x8007D894 -> 0x8007D8B0
// this: r3
class iterator tier_queue::create_iterator(unsigned long i /* r4 */) const {
    // Local variables
    class iterator it; // r1+0x8
}

// Range: 0x8007D8B0 -> 0x8007D9AC
// this: r31
void tier_queue::push_front(unsigned int memtag /* r1+0x8 */) {
    // Local variables
    unsigned long oldfirst; // r29
    unsigned long block_index; // r30

    // References
    // -> char __FUNCTION__$localstatic1$push_front__36tier_queue<Q29xFXRibbon10joint_data>FUi[11];
}

// ERROR: Failed to emit tag 3107EE (GlobalSubroutine)
// ERROR: Failed to emit tag 3108E6 (GlobalSubroutine)
// ERROR: Failed to emit tag 3109C9 (GlobalSubroutine)
// Range: 0x8007DD78 -> 0x8007DD84
// this: r3
unsigned long tier_queue::wrap_index(unsigned long i /* r4 */) const {}

// Range: 0x8007DD84 -> 0x8007DD94
// this: r3
unsigned char tier_queue::empty() const {}

// Range: 0x8007DD94 -> 0x8007DDE8
// this: r31
unsigned char tier_queue::front_full() const {}

// Range: 0x8007DDE8 -> 0x8007DEF4
// this: r31
void tier_queue::pop_back() {
    // Local variables
    unsigned long last; // r30
    unsigned long block_index; // r29

    // References
    // -> char __FUNCTION__$localstatic1$pop_back__36tier_queue<Q29xFXRibbon10joint_data>Fv[9];
}

// Range: 0x8007DEF4 -> 0x8007DF44
// this: r31
class iterator iterator::operator-(int i /* r1+0x8 */) const {
    // Local variables
    class iterator c; // r1+0xC
}

// Range: 0x8007DF44 -> 0x8007DF84
// this: r1+0x8
class iterator iterator::operator-=(int i /* r1+0xC */) {}

// Range: 0x8007DF84 -> 0x8007DFD0
// this: r31
class iterator & iterator::operator+=(int i /* r1+0x8 */) {}

// Range: 0x8007DFD0 -> 0x8007E014
// this: r31
class iterator tier_queue::end() const {}

// Range: 0x8007E014 -> 0x8007E01C
// this: r3
unsigned long tier_queue::size() const {}

// Range: 0x8007E01C -> 0x8007E0F4
// this: r29
struct joint_data & tier_queue::back() {
    // References
    // -> char __FUNCTION__$localstatic1$back__36tier_queue<Q29xFXRibbon10joint_data>Fv[5];
}

// Range: 0x8007E0F4 -> 0x8007E144
// this: r31
class iterator iterator::operator+(int i /* r1+0x8 */) const {
    // Local variables
    class iterator c; // r1+0xC
}

// Range: 0x8007E144 -> 0x8007E1FC
// this: r31
struct joint_data & tier_queue::operator[](int i /* r30 */) {
    // References
    // -> char __FUNCTION__$localstatic1$__vc__36tier_queue<Q29xFXRibbon10joint_data>Fi[5];
}

// Range: 0x8007E1FC -> 0x8007E224
// this: r1+0x8
struct joint_data * iterator::operator->() const {}

// Range: 0x8007E224 -> 0x8007E23C
// this: r3
unsigned char iterator::operator==(const class iterator & c /* r4 */) const {}

// Range: 0x8007E23C -> 0x8007E244
// this: r3
unsigned long iterator::global_index() const {}

// Range: 0x8007E244 -> 0x8007E260
// this: r3
unsigned char iterator::operator!=(const class iterator & c /* r4 */) const {}

// Range: 0x8007E260 -> 0x8007E294
// this: r31
class iterator & iterator::operator--() {}

// Range: 0x8007E294 -> 0x8007E2F0
// this: r31
void tier_queue::init(class tier_queue_allocator & alloc /* r30 */) {}

// ERROR: Failed to emit tag 3116AF (GlobalSubroutine)
// ERROR: Failed to emit tag 31186E (GlobalSubroutine)
// Range: 0x8007E5B0 -> 0x8007E5E0
unsigned long tier_queue_allocator::log2_ceil(unsigned long v /* r4 */) {
    // Local variables
    unsigned long power; // r31
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800EE60C -> 0x800EE94C
*/
// Range: 0x800EE60C -> 0x800EE660
// this: r1+0x8
void linear_pool::create(int max_size /* r31 */, unsigned int memtag /* r1+0xC */) {}

// Range: 0x800EE660 -> 0x800EE674
// this: r3
void linear_pool::create(int max_size /* r4 */, struct sound_fader * buffer /* r5 */) {}

// Range: 0x800EE674 -> 0x800EE680
// this: r3
void linear_pool::clear() {}

// Range: 0x800EE680 -> 0x800EE768
// this: r31
void linear_pool::erase(struct sound_fader * it /* r30 */) {
    // Local variables
    struct sound_fader * tail; // r29

    // References
    // -> char __FUNCTION__$localstatic1$erase__51linear_pool<Q221@unnamed@xSndMgr_cpp@11sound_fader>FPQ221@unnamed@xSndMgr_cpp@11sound_fader[6];
}

// Range: 0x800EE78C -> 0x800EE7A0
// this: r3
struct sound_fader * linear_pool::end() {}

// Range: 0x800EE7A0 -> 0x800EE7A8
// this: r3
struct sound_fader * linear_pool::begin() {}

// Range: 0x800EE7A8 -> 0x800EE848
// this: r31
struct sound_fader & linear_pool::back() {
    // References
    // -> char __FUNCTION__$localstatic1$back__51linear_pool<Q221@unnamed@xSndMgr_cpp@11sound_fader>Fv[5];
}

// Range: 0x800EE848 -> 0x800EE858
// this: r3
unsigned char linear_pool::empty() const {}

// Range: 0x800EE858 -> 0x800EE8F0
// this: r31
void linear_pool::push_back() {
    // References
    // -> char __FUNCTION__$localstatic1$push_back__51linear_pool<Q221@unnamed@xSndMgr_cpp@11sound_fader>Fv[10];
}

// Range: 0x800EE8F0 -> 0x800EE93C
// this: r31
unsigned char linear_pool::full() const {}

// Range: 0x800EE93C -> 0x800EE944
// this: r3
int linear_pool::max_size() const {}

// Range: 0x800EE944 -> 0x800EE94C
// this: r3
int linear_pool::size() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80132710 -> 0x80132770
*/
// Range: 0x80132710 -> 0x80132740
// this: r31
bit_array::bit_array() {}

// Range: 0x80132740 -> 0x80132770
// this: r1+0x8
void bit_array::clear() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013F16C -> 0x8013F16C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016A2C8 -> 0x8016A2EC
*/
// Range: 0x8016A2C8 -> 0x8016A2EC
class iterator tier_queue::dummy_iterator() {
    // Local variables
    class iterator it; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017B874 -> 0x8017B874
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C0A10 -> 0x801C1074
*/
// Range: 0x801C0A10 -> 0x801C0AE4
// this: r29
struct trigger_pair & fixed_queue::back() {
    // References
    // -> char __FUNCTION__$localstatic1$back__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv[5];
}

// Range: 0x801C0AE4 -> 0x801C0B80
// this: r31
struct trigger_pair & iterator::operator*() const {
    // References
    // -> char __FUNCTION__$localstatic1$__ml__Q256fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>8iteratorCFv[5];
}

// Range: 0x801C0B80 -> 0x801C0C64
// this: r3
unsigned char iterator::valid() const {}

// Range: 0x801C0C64 -> 0x801C0CB4
// this: r31
class iterator iterator::operator-(int i /* r1+0x8 */) const {
    // Local variables
    class iterator c; // r1+0xC
}

// Range: 0x801C0CB4 -> 0x801C0CF4
// this: r1+0x8
class iterator iterator::operator-=(int i /* r1+0xC */) {}

// Range: 0x801C0CF4 -> 0x801C0D20
// this: r3
class iterator & iterator::operator+=(int i /* r4 */) {}

// Range: 0x801C0D20 -> 0x801C0D50
// this: r31
class iterator fixed_queue::end() const {}

// Range: 0x801C0D50 -> 0x801C0D6C
// this: r3
class iterator fixed_queue::create_iterator(unsigned long i /* r4 */) const {
    // Local variables
    class iterator r; // r1+0x8
}

// Range: 0x801C0D6C -> 0x801C0D84
// this: r3
unsigned char fixed_queue::empty() const {}

// Range: 0x801C0D84 -> 0x801C0E30
// this: r31
void fixed_queue::push_back() {
    // References
    // -> char __FUNCTION__$localstatic1$push_back__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv[10];
}

// Range: 0x801C0E30 -> 0x801C0E7C
// this: r31
unsigned char fixed_queue::full() const {}

// Range: 0x801C0E7C -> 0x801C0E84
unsigned long fixed_queue::max_size() {}

// Range: 0x801C0E84 -> 0x801C0EB0
// this: r3
unsigned long fixed_queue::size() const {}

// Range: 0x801C0EB0 -> 0x801C0F5C
// this: r31
void fixed_queue::pop_front() {
    // References
    // -> char __FUNCTION__$localstatic1$pop_front__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv[10];
}

// Range: 0x801C0F5C -> 0x801C100C
// this: r30
struct trigger_pair & fixed_queue::front() {
    // References
    // -> char __FUNCTION__$localstatic1$front__56fixed_queue<Q222@unnamed@zTalkBox_cpp@12trigger_pair,32>Fv[6];
}

// Range: 0x801C100C -> 0x801C103C
// this: r31
class iterator fixed_queue::begin() const {}

// Range: 0x801C103C -> 0x801C1064
// this: r1+0x8
void fixed_queue::reset() {}

// Range: 0x801C1064 -> 0x801C1074
// this: r3
void fixed_queue::clear() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80220DFC -> 0x80220DFC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802397FC -> 0x80239830
*/
// Range: 0x802397FC -> 0x80239830
// this: r31
class iterator & iterator::operator++() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80240A28 -> 0x80240B74
*/
// ERROR: Failed to emit tag 1867956 (GlobalSubroutine)
// ERROR: Failed to emit tag 1867ADD (GlobalSubroutine)

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80258420 -> 0x80258B1C
*/
// Range: 0x80258420 -> 0x802584A4
// this: r1+0x8
void linear_pool::create(int max_size /* r29 */, unsigned int memtag /* r1+0xC */) {}

// Range: 0x802584A4 -> 0x802584E8
// this: r1+0x8
void pool_list::create(int max_size /* r1+0xC */, unsigned int memtag /* r1+0x10 */, void * buffer /* r1+0x14 */) {}

// Range: 0x802584E8 -> 0x802584FC
// this: r3
void linear_pool::create(int max_size /* r4 */, struct activity_data * buffer /* r5 */) {}

// Range: 0x802584FC -> 0x80258528
// this: r1+0x8
void pool_list::reset() {}

// Range: 0x80258528 -> 0x80258530
// this: r3
struct node_type * pool_list::begin() const {}

// Range: 0x80258530 -> 0x8025853C
// this: r3
void linear_pool::clear() {}

// Range: 0x8025853C -> 0x80258550
// this: r3
struct activity_data * linear_pool::end() {}

// Range: 0x80258550 -> 0x80258558
// this: r3
struct activity_data * linear_pool::begin() {}

// Range: 0x80258558 -> 0x80258588
// this: r1+0x8
struct node_type * pool_list::erase(struct node_type * it /* r1+0xC */) {}

// Range: 0x80258588 -> 0x80258644
// this: r29
void pool_list::move(struct node_type * it /* r31 */, struct node_type * at /* r30 */) {
    // References
    // -> char __FUNCTION__$localstatic1$move__64pool_list<Q229@unnamed@zTransientModel_cpp@18transient_instance>FPQ264pool_list<Q229@unnamed@zTransientModel_cpp@18transient_instance>9node_typePQ264pool_list<Q229@unnamed@zTransientModel_cpp@18transient_instance>9node_type[5];
}

// Range: 0x80258644 -> 0x80258664
void pool_list_base::link(struct node_base * it /* r4 */, struct node_base * at /* r5 */) {}

// ERROR: Failed to emit tag 19D4A98 (GlobalSubroutine)
// Range: 0x80258720 -> 0x80258728
// this: r3
struct node_type * pool_list::end() const {}

// Range: 0x80258728 -> 0x80258774
// this: r31
unsigned char linear_pool::full() const {}

// Range: 0x80258774 -> 0x8025877C
// this: r3
int linear_pool::max_size() const {}

// Range: 0x8025877C -> 0x80258784
// this: r3
int linear_pool::size() const {}

// Range: 0x80258784 -> 0x802587B4
// this: r1+0x8
struct node_type * pool_list::insert(struct node_type * it /* r1+0xC */) {}

// Range: 0x802587B4 -> 0x80258854
// this: r31
struct activity_data & linear_pool::back() {
    // References
    // -> char __FUNCTION__$localstatic1$back__54linear_pool<Q222zTransientModelEmitter13activity_data>Fv[5];
}

// Range: 0x80258854 -> 0x80258864
// this: r3
unsigned char linear_pool::empty() const {}

// Range: 0x80258864 -> 0x802588FC
// this: r31
void linear_pool::push_back() {
    // References
    // -> char __FUNCTION__$localstatic1$push_back__54linear_pool<Q222zTransientModelEmitter13activity_data>Fv[10];
}

// Range: 0x802588FC -> 0x802589E4
// this: r31
void linear_pool::erase(struct activity_data * it /* r30 */) {
    // Local variables
    struct activity_data * tail; // r29

    // References
    // -> char __FUNCTION__$localstatic1$erase__54linear_pool<Q222zTransientModelEmitter13activity_data>FPQ222zTransientModelEmitter13activity_data[6];
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80264084 -> 0x802640B8
*/
// Range: 0x80264084 -> 0x802640B8
// this: r31
void pool_list_base::clear() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029DC14 -> 0x8029DC14
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C3A0C -> 0x802C3B7C
*/
// Range: 0x802C3A0C -> 0x802C3A14
// this: r3
struct node_type * pool_list::get_buffer() const {}

// Range: 0x802C3A14 -> 0x802C3AA8
// this: r31
class zNPCProjectileFrozen & pool_list::front() {
    // References
    // -> char __FUNCTION__$localstatic1$front__71pool_list<Q234@unnamed@zNPCProjectileFrozen_cpp@20zNPCProjectileFrozen>Fv[6];
}

// Range: 0x802C3AA8 -> 0x802C3AD0
// this: r1+0x8
void pool_list::push_front() {}

// Range: 0x802C3AD0 -> 0x802C3B14
// this: r1+0x8
void pool_list::create(int max_size /* r1+0xC */, unsigned int memtag /* r1+0x10 */, void * buffer /* r1+0x14 */) {}

// Range: 0x802C3B3C -> 0x802C3B44
// this: r3
struct node_type * pool_list::end() const {}

// Range: 0x802C3B44 -> 0x802C3B4C
// this: r3
struct node_type * pool_list::begin() const {}

// Range: 0x802C3B4C -> 0x802C3B7C
// this: r1+0x8
struct node_type * pool_list::erase(struct node_type * it /* r1+0xC */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D1804 -> 0x802D1804
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\containers.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D5920 -> 0x802D5AFC
*/
// Range: 0x802D5920 -> 0x802D5A24
// this: r29
void bit_array::set(int index /* r30 */, unsigned char value /* r1+0x8 */) {
    // Local variables
    int which_byte; // r31
    int which_bit; // r28

    // References
    // -> char __FUNCTION__$localstatic1$set__12bit_array<3>Fib[4];
}

// Range: 0x802D5A24 -> 0x802D5AFC
// this: r28
unsigned char bit_array::get(int index /* r31 */) {
    // Local variables
    int which_byte; // r30
    int which_bit; // r29

    // References
    // -> char __FUNCTION__$localstatic1$get__12bit_array<3>Fi[4];
}


