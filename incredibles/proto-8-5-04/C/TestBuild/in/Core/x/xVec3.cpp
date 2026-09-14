/*
    Compile unit: C:\TestBuild\in\Core\x\xVec3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xVec3 m_Null; // size: 0xC, address: 0x5E7C40
class xVec3 m_Ones; // size: 0xC, address: 0x0
class xVec3 m_NegOnes; // size: 0xC, address: 0x0
class xVec3 m_UnitAxisX; // size: 0xC, address: 0x5E7C50
class xVec3 m_UnitAxisY; // size: 0xC, address: 0x5E7C60
class xVec3 m_UnitAxisZ; // size: 0xC, address: 0x5E7C70
class xVec3 m_HalfVec; // size: 0xC, address: 0x0
class xVec3 m_NegHalfVec; // size: 0xC, address: 0x0
class xVec3 m_DoubleVec; // size: 0xC, address: 0x0
class xVec3 m_NegDoubleVec; // size: 0xC, address: 0x0
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

/*
    Compile unit: C:\TestBuild\in\Core\x\xVec3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C38B0 -> 0x001C3964
*/
// Range: 0x1C38B0 -> 0x1C3964
float xVec3Normalize(class xVec3 * o /* r2 */, class xVec3 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C38B0 -> 0x1C3964
        float len; // r29
        float len2; // r29
        float len_inv; // r29
    }
}


