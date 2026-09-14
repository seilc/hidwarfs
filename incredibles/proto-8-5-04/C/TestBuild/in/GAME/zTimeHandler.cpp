/*
    Compile unit: C:\TestBuild\in\GAME\zTimeHandler.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class zTimeHandlerMgr timehandler_mgr; // size: 0xA08, address: 0x6A5CD0
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
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x28
class zTimeHandlerStruct {
    // Members
public:
    float elapsed; // offset 0x0, size 0x4
    float period; // offset 0x4, size 0x4
    void (* cb)(float, class zTimeHandlerStruct *); // offset 0x8, size 0x4
    class xVec3 pos; // offset 0xC, size 0xC
    class xVec3 normal; // offset 0x18, size 0xC
    float num_particles; // offset 0x24, size 0x4
};
// total size: 0xA08
class zTimeHandlerMgr : public zQueue {};
// total size: 0xA08
class zQueue {
    // Members
public:
    signed int first; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
    class zTimeHandlerStruct data[64]; // offset 0x8, size 0xA00
};

/*
    Compile unit: C:\TestBuild\in\GAME\zTimeHandler.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00342EF0 -> 0x00343058
*/
// Range: 0x342EF0 -> 0x343058
// this: r18
void zTimeHandlerMgr::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x342EF0 -> 0x343058
        signed int i; // r17
    }
}


