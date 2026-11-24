/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GKernel\GRefCount.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805D2460 -> 0x805D26F4
*/
static class GRefCountImpl RefCountImpl_Null; // size: 0x8, address: 0x808DDC90
static class GRefCountImpl RefCountImpl_Normal; // size: 0x8, address: 0x808DDC98
static class GRefCountImpl RefCountImpl_ThreadSafe; // size: 0x8, address: 0x808DDCA0
struct {} __vt__17GRefCountBaseImpl; // size: 0xC, address: 0x8073FAE0
// signature: AddRef_Null(GRefCountBaseImpl *)
// Range: 0x805D2460 -> 0x805D2464
void AddRef_Null() {
}
// signature: Release_Null(GRefCountBaseImpl *, unsigned int)
// Range: 0x805D2470 -> 0x805D2474
void Release_Null() {
}
// signature: AddRef_Normal(GRefCountBaseImpl *)
// Range: 0x805D2480 -> 0x805D2490
void AddRef_Normal() {
}
// signature: Release_Normal(GRefCountBaseImpl *, unsigned int)
// Range: 0x805D2490 -> 0x805D24C8
void Release_Normal() {
}
// signature: AddRef_ThreadSafe(GRefCountBaseImpl *)
// Range: 0x805D24D0 -> 0x805D24E4
void AddRef_ThreadSafe() {
}
// signature: Release_ThreadSafe(GRefCountBaseImpl *, unsigned int)
// Range: 0x805D24F0 -> 0x805D2528
void Release_ThreadSafe() {
}
// Range: 0x805D2530 -> 0x805D258C
void * GRefCountBaseImpl::GRefCountBaseImpl() {
    // References
    // -> static class GRefCountImpl RefCountImpl_Null;
    // -> static class GRefCountImpl RefCountImpl_Normal;
    // -> struct {} __vt__17GRefCountBaseImpl;
}
// Range: 0x805D2590 -> 0x805D2618
void * GRefCountBaseImpl::~GRefCountBaseImpl(class GRefCountBaseImpl * this /* r30 */) {
    // References
    // -> struct {} __vt__17GRefCountBaseImpl;
}
// signature: GRefCountBaseImpl::SetRefCountMode(unsigned int)
// Range: 0x805D2620 -> 0x805D2674
bool GRefCountBaseImpl::SetRefCountMode() {
    // References
    // -> static class GRefCountImpl RefCountImpl_ThreadSafe;
    // -> static class GRefCountImpl RefCountImpl_Normal;
    // -> static class GRefCountImpl RefCountImpl_Null;
}
// Range: 0x805D2680 -> 0x805D26F4
class GWeakPtrProxy * GRefCountBaseImpl::CreateWeakProxy(class GRefCountBaseImpl * this /* r31 */) const {
}
