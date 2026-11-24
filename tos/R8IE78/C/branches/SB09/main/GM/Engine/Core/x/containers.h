/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\containers.h
*/
// signature: fixed_stack_list<zNPCBase *, 32>::iterator::operator++(int)
// Range: 0x80128110 -> 0x80128124
class iterator fixed_stack_list<zNPCBase *, 32>::iterator::operator++() {
}
// Range: 0x800F5780 -> 0x800F57D0
void fixed_stack_list<zNPCBase *, 32>::reset() {
    {
        // Range: 0x800F5794 -> 0x800F57C4
        // Local variables
        class node_type * end; // r7
        class node_type * it; // r6
    }
}
// signature: fixed_stack_list<zNPCBase *, 32>::push_back(zNPCBase *const &)
// Range: 0x800F5730 -> 0x800F5774
void fixed_stack_list<zNPCBase *, 32>::push_back() {
}
// signature: fixed_stack_list<zNPCNinjaManager::NinjaSlot, 32>::push_back(const zNPCNinjaManager::NinjaSlot &)
// Range: 0x800F6240 -> 0x800F628C
void fixed_stack_list<zNPCNinjaManager::NinjaSlot, 32>::push_back() {
}
// signature: fixed_stack_list<zNPCNinjaManager::NinjaSlot, 32>::free(fixed_stack_list<zNPCNinjaManager::NinjaSlot, 32>::node_type *)
// Range: 0x800F60D0 -> 0x800F60E0
void fixed_stack_list<zNPCNinjaManager::NinjaSlot, 32>::free() {
}
// signature: tier_queue_allocator::alloc_block(const unsigned int)
// Range: 0x800306A0 -> 0x80030744
unsigned char tier_queue_allocator::alloc_block() {
    // Local variables
    unsigned char index; // r31
    class block_data & block; // r30

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: tier_queue_allocator::free_block(unsigned char)
// Range: 0x800302B0 -> 0x80030300
void tier_queue_allocator::free_block() {
    // Local variables
    class block_data & block; // r6
}
// signature: tier_queue_allocator::log2_ceil(unsigned long) const
// Range: 0x80032600 -> 0x8003261C
unsigned long tier_queue_allocator::log2_ceil() const {
    // Local variables
    unsigned long power; // r3
}
// signature: tier_queue<FX::Ribbon::xFXRibbon::joint_data>::iterator::operator+=(int)
// Range: 0x800305B0 -> 0x800305CC
class iterator & tier_queue<FX::Ribbon::xFXRibbon::joint_data>::iterator::operator+=() {
}
// Range: 0x800305D0 -> 0x80030614
class joint_data & tier_queue<FX::Ribbon::xFXRibbon::joint_data>::iterator::operator*() const {
}
// Range: 0x800307B0 -> 0x800307F4
bool tier_queue<FX::Ribbon::xFXRibbon::joint_data>::front_full() const {
}
// Range: 0x80030220 -> 0x800302A8
void tier_queue<FX::Ribbon::xFXRibbon::joint_data>::clear(class tier_queue * this /* r29 */) {
    // Local variables
    unsigned long i; // r31
    unsigned long end; // r30
}
// signature: tier_queue<FX::Ribbon::xFXRibbon::joint_data>::push_front(const unsigned int)
// Range: 0x80030620 -> 0x8003069C
void tier_queue<FX::Ribbon::xFXRibbon::joint_data>::push_front(class tier_queue * this /* r30 */) {
    // Local variables
    unsigned long oldfirst; // r8
}
// Range: 0x80030750 -> 0x800307B0
void tier_queue<FX::Ribbon::xFXRibbon::joint_data>::pop_back(class tier_queue * this /* r7 */) {
}
// Range: 0x80030590 -> 0x800305B0
class iterator tier_queue<FX::Ribbon::xFXRibbon::joint_data>::begin() const {
}
// Range: 0x80030D00 -> 0x80030D2C
class iterator tier_queue<FX::Ribbon::xFXRibbon::joint_data>::end() const {
}
// signature: bit_array_base::get(unsigned int)
// Range: 0x80034450 -> 0x80034478
bool bit_array_base::get() {
}
// signature: bit_array_base::set(unsigned int, bool)
// Range: 0x800344A0 -> 0x800344F4
void bit_array_base::set() {
    // Local variables
    int which_byte; // r5
    int which_bit; // r6
}
// Range: 0x80051C90 -> 0x80051CA4
void * bit_array_alloc::bit_array_alloc() {
}
// Range: 0x80051CB0 -> 0x80051D08
void * bit_array_alloc::~bit_array_alloc(class bit_array_alloc * this /* r30 */) {
}
