/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Util\Containers.cpp
*/
// Range: 0x802041E0 -> 0x80204218
void Util::PoolListBase::Clear() {
}
// Range: 0x80204220 -> 0x80204250
void Util::PoolListBase::PopFront() {
    // Local variables
    class NodeHeader * deadNode; // r5
}
// Range: 0x80204250 -> 0x802042A4
void Util::PoolListBase::PushBack() {
    // Local variables
    class NodeHeader * poolNext; // r6
}
// signature: Util::PoolListBase::SetPool(Util::PoolListBase::NodeHeader *, int)
// Range: 0x802042B0 -> 0x802042D4
void Util::PoolListBase::SetPool() {
}
// signature: Util::PoolListBase::Erase(Util::PoolListBase::NodeHeader *)
// Range: 0x802042E0 -> 0x80204318
class NodeHeader * Util::PoolListBase::Erase() {
}
// signature: Util::PoolListBase::Insert(Util::PoolListBase::NodeHeader *)
// Range: 0x80204320 -> 0x80204374
class NodeHeader * Util::PoolListBase::Insert() {
    // Local variables
    class NodeHeader * poolNext; // r6
}
// signature: Util::NodeListBase::PushBack(Util::NodeListBase::NodeHeader *)
// Range: 0x80204380 -> 0x8020439C
void Util::NodeListBase::PushBack() {
}
// signature: Util::NodeListBase::Unlink(Util::NodeListBase::NodeHeader *)
// Range: 0x802043A0 -> 0x802043BC
void Util::NodeListBase::Unlink() {
}
// Range: 0x802043C0 -> 0x80204410
void Util::PoolAllocatorBase::Reset() {
    // Local variables
    unsigned char * it; // r5
    unsigned char * end; // r6

    {
        // Range: 0x802043E4 -> 0x802043FC
        // Local variables
        unsigned char * next; // r0
    }
}
// signature: Util::PoolAllocatorBase::SetPool(void *, int, int)
// Range: 0x80204410 -> 0x80204428
void Util::PoolAllocatorBase::SetPool() {
}
