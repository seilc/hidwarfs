/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxResource.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8052FB90 -> 0x805328A0
*/
// total size: 0x8
class table {
    // Members
    unsigned long EntryCount; // offset 0x0, size 0x4
    unsigned long SizeMask; // offset 0x4, size 0x4
};
// total size: 0x8
class ResourceNode {
    // Members
    enum NodeType Type; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0x4
    class ResourceSlot * pResolver; // offset 0x4, size 0x4
    class GFxResource * pResource; // offset 0x4, size 0x4
};
enum NodeType {
    Node_Resource = 0,
    Node_Resolver = 1,
};
// total size: 0x4
class @class {
    // Members
    class ResourceSlot * pResolver; // offset 0x0, size 0x4
    class GFxResource * pResource; // offset 0x0, size 0x4
};
// total size: 0x10
class ghashset_cached_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    unsigned long HashValue; // offset 0x4, size 0x4
    class ResourceNode value; // offset 0x8, size 0x8
};
// total size: 0x8
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class GFxResource * value; // offset 0x4, size 0x4
};
// total size: 0x8
class iterator : public const_iterator {};
// total size: 0x8
class const_iterator {
    // Members
    class ghash_set * pHash; // offset 0x0, size 0x4
    unsigned long Index; // offset 0x4, size 0x4
};
struct {} __vt__18GFxResourceWeakLib; // size: 0x18, address: 0x8073B240
struct {} __vt__14GFxResourceLib; // size: 0xC, address: 0x8073B258
struct {} __vt__Q214GFxResourceLib12ResourceSlot; // size: 0xC, address: 0x8073B264
// Range: 0x8052FB90 -> 0x8052FBA4
void GFxResource::AddRef() {
}
// Range: 0x8052FBB0 -> 0x8052FC40
void GFxResource::Release(class GFxResource * this /* r31 */) {
}
// Range: 0x8052FC40 -> 0x8052FCCC
void * GFxResourceLib::GFxResourceLib(class GFxResourceLib * this /* r31 */) {
    // References
    // -> struct {} __vt__14GFxResourceLib;
}
// Range: 0x8052FCD0 -> 0x8052FDDC
void * GFxResourceLib::~GFxResourceLib(class GFxResourceLib * this /* r29 */) {
    // References
    // -> struct {} __vt__14GFxResourceLib;
}
// Range: 0x8052FDE0 -> 0x80530104
void * GFxResourceLib::ResourceSlot::~ResourceSlot(class ResourceSlot * this /* r26 */) {
    // References
    // -> struct {} __vt__Q214GFxResourceLib12ResourceSlot;
}
// Range: 0x80530110 -> 0x8053011C
char * GFxResourceLib::ResourceSlot::GetError() const {
}
// Range: 0x80530120 -> 0x80530330
void GFxResourceLib::ResourceSlot::Resolve(class ResourceSlot * this /* r26 */, class GFxResource * pres /* r27 */) {
}
// Range: 0x80530330 -> 0x8053058C
void GFxResourceLib::ResourceSlot::CancelResolve(class ResourceSlot * this /* r27 */, char * perrorMessage /* r24 */) {
}
// Range: 0x80530590 -> 0x80530678
class GFxResource * GFxResourceLib::BindHandle::WaitForResolve(class BindHandle * this /* r29 */) {
    // Local variables
    class ResourceSlot * pslot; // r30
    class GFxResource * pres; // r0
}
// Range: 0x80530680 -> 0x805306E8
void * GFxResourceWeakLib::GFxResourceWeakLib(class GFxResourceWeakLib * this /* r30 */, class GFxResourceLib * pstrongLib /* r31 */) {
    // References
    // -> struct {} __vt__18GFxResourceWeakLib;
}
// Range: 0x805306F0 -> 0x80530968
void * GFxResourceWeakLib::~GFxResourceWeakLib(class GFxResourceWeakLib * this /* r29 */) {
    // References
    // -> struct {} __vt__18GFxResourceWeakLib;
}
// Range: 0x80530970 -> 0x80530FAC
enum ResolveState GFxResourceWeakLib::BindResourceKey(class GFxResourceWeakLib * this /* r26 */, class BindHandle * phandle /* r27 */, class GFxResourceKey & k /* r28 */) {
    // Local variables
    class ResourceNode * pnode; // r0
    class ResourceSlot * presSlot; // r0
    class ResourceNode n; // r1+0x20

    // References
    // -> struct {} __vt__Q214GFxResourceLib12ResourceSlot;
}
// Range: 0x80531730 -> 0x805318B0
void GFxResourceWeakLib::PinResource(class GFxResourceWeakLib * this /* r30 */, class GFxResource * pres /* r1+0x8 */) {
}
// Range: 0x80531F10 -> 0x805320F8
void GFxResourceWeakLib::UnpinResource(class GFxResourceWeakLib * this /* r29 */, class GFxResource * pres /* r30 */) {
}
// Range: 0x80532100 -> 0x80532438
void GFxResourceWeakLib::UnpinAll(class GFxResourceWeakLib * this /* r29 */) {
    {
        // Range: 0x8053212C -> 0x80532410
        // Local variables
        class iterator ihash; // r1+0x48
    }
}
// Range: 0x80532440 -> 0x805328A0
void GFxResourceWeakLib::RemoveResourceOnRelease(class GFxResourceWeakLib * this /* r27 */, class GFxResource * pres /* r28 */) {
    // Local variables
    class GFxResource * p; // reg65535
}
