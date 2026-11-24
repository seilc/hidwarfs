/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Util\Containers.cpp
*/
// Range: 0x803619B0 -> 0x803619EC
void Util::PoolListBase::Clear() {
}
// Range: 0x803619EC -> 0x80361A1C
void Util::PoolListBase::PopFront() {
    // Local variables
    class NodeHeader * deadNode; // r5
}
// Range: 0x80361A1C -> 0x80361A70
void Util::PoolListBase::PushBack() {
    // Local variables
    class NodeHeader * poolNext; // r6
}
// signature: Util::PoolListBase::SetPool(Util::PoolListBase::NodeHeader *, int)
// Range: 0x80361A70 -> 0x80361A94
void Util::PoolListBase::SetPool() {
}
// signature: Util::PoolListBase::Erase(Util::PoolListBase::NodeHeader *)
// Range: 0x80361A94 -> 0x80361ACC
class NodeHeader * Util::PoolListBase::Erase() {
}
// Range: 0x80361ACC -> 0x80361AD8
void Util::NodeListBase::Clear() {
}
// signature: Util::NodeListBase::PushBack(Util::NodeListBase::NodeHeader *)
// Range: 0x80361AD8 -> 0x80361AF4
void Util::NodeListBase::PushBack() {
}
// signature: Util::NodeListBase::Unlink(Util::NodeListBase::NodeHeader *)
// Range: 0x80361AF4 -> 0x80361B10
void Util::NodeListBase::Unlink() {
}
// Range: 0x80361B10 -> 0x80361B60
void Util::PoolAllocatorBase::Reset() {
    // Local variables
    unsigned char * it; // r4
    unsigned char * end; // r5

    {
        // Range: 0x80361B34 -> 0x80361B44
        // Local variables
        unsigned char * next; // r0
    }
}
// signature: Util::PoolAllocatorBase::SetPool(void *, int, int)
// Range: 0x80361B60 -> 0x80361BB8
void Util::PoolAllocatorBase::SetPool() {
}
