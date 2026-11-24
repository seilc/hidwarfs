/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Util\Containers.cpp
*/
// Range: 0x802BA2C8 -> 0x802BA304
void Util::PoolListBase::Clear() {
}
// Range: 0x802BA304 -> 0x802BA334
void Util::PoolListBase::PopFront() {
    // Local variables
    class NodeHeader * deadNode; // r5
}
// Range: 0x802BA334 -> 0x802BA388
void Util::PoolListBase::PushBack() {
    // Local variables
    class NodeHeader * poolNext; // r6
}
// Range: 0x802BA388 -> 0x802BA38C
void * Util::PoolListBase::PoolListBase() {
}
// signature: Util::PoolListBase::SetPool(Util::PoolListBase::NodeHeader *, int)
// Range: 0x802BA38C -> 0x802BA3B0
void Util::PoolListBase::SetPool() {
}
// signature: Util::PoolListBase::Erase(Util::PoolListBase::NodeHeader *)
// Range: 0x802BA3B0 -> 0x802BA3E8
class NodeHeader * Util::PoolListBase::Erase() {
}
// signature: Util::PoolListBase::Erase(Util::PoolListBase::NodeHeader *, Util::PoolListBase::NodeHeader *)
// Range: 0x802BA3E8 -> 0x802BA43C
void Util::PoolListBase::Erase() {
    // Local variables
    int count; // r7
    class NodeHeader * back; // r8

    {
        // Range: 0x802BA3F4 -> 0x802BA3F4
        // Local variables
        class NodeHeader * n; // r6
    }
}
// Range: 0x802BA43C -> 0x802BA448
void Util::NodeListBase::Clear() {
}
// signature: Util::NodeListBase::PushBack(Util::NodeListBase::NodeHeader *)
// Range: 0x802BA448 -> 0x802BA464
void Util::NodeListBase::PushBack() {
}
// signature: Util::NodeListBase::Unlink(Util::NodeListBase::NodeHeader *)
// Range: 0x802BA464 -> 0x802BA480
void Util::NodeListBase::Unlink() {
}
// Range: 0x802BA480 -> 0x802BA484
void * Util::PoolAllocatorBase::PoolAllocatorBase() {
}
// Range: 0x802BA484 -> 0x802BA4D4
void Util::PoolAllocatorBase::Reset() {
    // Local variables
    unsigned char * it; // r4
    unsigned char * end; // r5

    {
        // Range: 0x802BA4A8 -> 0x802BA4B8
        // Local variables
        unsigned char * next; // r0
    }
}
// signature: Util::PoolAllocatorBase::SetPool(void *, int, int)
// Range: 0x802BA4D4 -> 0x802BA52C
void Util::PoolAllocatorBase::SetPool() {
}
