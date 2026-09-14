/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnimData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0xC
struct /* @anon1 */ {} xAnimData::__vtable; // size: 0xC, address: 0x4A2920
// total size: 0xC
struct /* @anon0 */ {} iAnimInstance::__vtable; // size: 0xC, address: 0x4A2930
// total size: 0xC
struct /* @anon0 */ {};
// total size: 0xC
class _RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
class iAnimInstance {
    // Members
public:
    float time; // offset 0x0, size 0x4
};
// total size: 0x24
class _RpSkinFrame {
    // Members
public:
    class _RtQuat q; // offset 0x0, size 0x10
    class _RwV3d t; // offset 0x10, size 0xC
    float time; // offset 0x1C, size 0x4
    class _RpSkinFrame * prevFrame; // offset 0x20, size 0x4
};
// total size: 0x10
class iAnimData {
    // Members
public:
    class _RpSkinAnim * skin_anim; // offset 0x0, size 0x4
    char * m_name; // offset 0x4, size 0x4
    float duration; // offset 0x8, size 0x4
};
// total size: 0x14
class xAnimData : private iAnimInstance {
    // Members
public:
    unsigned int m_assetID; // offset 0x8, size 0x4
    unsigned int m_ID; // offset 0xC, size 0x4
    class iAnimData * m_resource; // offset 0x10, size 0x4
};
// total size: 0x10
class _RpSkinAnim {
    // Members
public:
    signed int numFrames; // offset 0x0, size 0x4
    signed int flags; // offset 0x4, size 0x4
    float duration; // offset 0x8, size 0x4
    class _RpSkinFrame * pFrames; // offset 0xC, size 0x4
};
// total size: 0xC
struct /* @anon1 */ {};
// total size: 0x10
class _RtQuat {
    // Members
public:
    class _RwV3d imag; // offset 0x0, size 0xC
    float real; // offset 0xC, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnimData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00404980 -> 0x004049EC
*/
// Range: 0x404980 -> 0x4049EC
// this: r16
xAnimData::~xAnimData() {
    /* anonymous block */ {
        // Range: 0x404980 -> 0x4049EC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnimData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004049F0 -> 0x00404A24
*/
// Range: 0x4049F0 -> 0x404A24
// this: r2
xAnimData::xAnimData(unsigned int asset_id /* r2 */, unsigned int anim_ID /* r2 */, class iAnimData * res /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4049F0 -> 0x404A24
    }
}


