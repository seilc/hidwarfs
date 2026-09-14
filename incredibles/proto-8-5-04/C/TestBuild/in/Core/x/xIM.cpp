/*
    Compile unit: C:\TestBuild\in\Core\x\xIM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x1C
class HIFastIMLockStruct {
    // Members
public:
    __int128 * dmaPacket; // offset 0x0, size 0x4
    signed int qwCount; // offset 0x4, size 0x4
    signed int format; // offset 0x8, size 0x4
    class xVec3 * pos; // offset 0xC, size 0x4
    class xVec2 * uv; // offset 0x10, size 0x4
    class xColor_tag * color; // offset 0x14, size 0x4
    signed int vertCount; // offset 0x18, size 0x4
};
// total size: 0x4
class xColor_tag {
    // Members
public:
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        class RwRGBA rgba; // offset 0x0, size 0x4
    };
};
// total size: 0x10
class xIMLockParameters {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    class xVec3 * cpos; // offset 0x4, size 0x4
    class xVec2 * cuv; // offset 0x8, size 0x4
    class xColor_tag * ccolor; // offset 0xC, size 0x4
};
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
enum xIMFormat {
    XIM_TRISTRIP = 0,
    XIM_TRILIST = 1,
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xIM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00499CE0 -> 0x00499FB8
*/
// Range: 0x499CE0 -> 0x499FB8
void xIMLock2(class HIFastIMLockStruct & context1 /* r21 */, class HIFastIMLockStruct & context2 /* r20 */, enum xIMFormat format /* r2 */, signed int vertCount /* r19 */, class xIMLockParameters & params1 /* r18 */, class xIMLockParameters & params2 /* r17 */) {
    /* anonymous block */ {
        // Range: 0x499CE0 -> 0x499FB8
        signed int pos_qwords; // r2
        signed int uv_qwords; // r2
        signed int color_qwords; // r2
        signed int chain_qwords; // r16
        signed int alloc_qwords1; // r5
        signed int alloc_qwords2; // r4
        signed int alloc_qwords; // r2
        __int128 * data_buffer; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xIM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00499FC0 -> 0x0049A154
*/
// Range: 0x499FC0 -> 0x49A154
void xIMLock(class HIFastIMLockStruct & context /* r21 */, enum xIMFormat format /* r2 */, signed int vertCount /* r20 */, class xIMLockParameters & params /* r19 */) {
    /* anonymous block */ {
        // Range: 0x499FC0 -> 0x49A154
        signed int pos_qwords; // r2
        signed int uv_qwords; // r2
        signed int color_qwords; // r2
        signed int chain_qwords; // r2
        signed int alloc_qwords; // r18
        __int128 * data_buffer; // r2
    }
}


