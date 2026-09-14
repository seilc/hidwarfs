/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAnimData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0xC
struct /* @anon0 */ {} iAnimData::__vtable; // size: 0xC, address: 0x4A2890
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
// total size: 0x10
class _RpSkinAnim {
    // Members
public:
    signed int numFrames; // offset 0x0, size 0x4
    signed int flags; // offset 0x4, size 0x4
    float duration; // offset 0x8, size 0x4
    class _RpSkinFrame * pFrames; // offset 0xC, size 0x4
};
// total size: 0x10
class _RtQuat {
    // Members
public:
    class _RwV3d imag; // offset 0x0, size 0xC
    float real; // offset 0xC, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAnimData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00404280 -> 0x004042F0
*/
// Range: 0x404280 -> 0x4042F0
// this: r17
iAnimData::~iAnimData() {
    /* anonymous block */ {
        // Range: 0x404280 -> 0x4042F0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iAnimData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004042F0 -> 0x00404388
*/
// Range: 0x4042F0 -> 0x404388
// this: r18
iAnimData::iAnimData(char * filename /* r17 */, char * name /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4042F0 -> 0x404388
        char * act_name; // r16
    }
}


