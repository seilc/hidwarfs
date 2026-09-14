/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zTimeHandler.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F9F64 -> 0x800FA004
*/
// total size: 0xA08
class zTimeHandlerMgr : public zQueue {
    // Functions
    void update(float dt);
};
class zTimeHandlerMgr timehandler_mgr; // size: 0xA08, address: 0x8037F898
// Range: 0x800F9F64 -> 0x800FA004
// this: r29
void zTimeHandlerMgr::update(float dt /* f31 */) {
    // Local variables
    int i; // r31
    struct zTimeHandlerStruct * thandler; // r30
}

// total size: 0xA08
class zQueue {
    // Members
protected:
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    struct zTimeHandlerStruct data[64]; // offset 0x8, size 0xA00
};
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x28
struct zTimeHandlerStruct {
    // Members
    float elapsed; // offset 0x0, size 0x4
    float period; // offset 0x4, size 0x4
    void (* cb)(float, struct zTimeHandlerStruct *); // offset 0x8, size 0x4
    struct xVec3 pos; // offset 0xC, size 0xC
    struct xVec3 normal; // offset 0x18, size 0xC
    float num_particles; // offset 0x24, size 0x4
};

