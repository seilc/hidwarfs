/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int g_AshModelCount; // size: 0x4, address: 0x4A4D38
signed int g_BossModelCount; // size: 0x4, address: 0x4A4D3C
signed int g_SNPCModelCount; // size: 0x4, address: 0x4A4D40
signed int g_DNPCModelCount; // size: 0x4, address: 0x4A4D44
class _xModel g_AshModel[1]; // size: 0x8, address: 0x4E03F0
class _xModel g_BossModel[2]; // size: 0x10, address: 0x4E0400
class _xModel g_SNPCModel[5]; // size: 0x28, address: 0x4E0410
class _xModel g_DNPCModel[5]; // size: 0x28, address: 0x4E0440
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
signed int g_RTObjModelCount; // size: 0x4, address: 0x4A4D34
class _xModel g_RTObjModel[110]; // size: 0x370, address: 0x4E0080
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};
// total size: 0xC
class tagP2Weight {
    // Members
public:
    unsigned short m_joint0; // offset 0x0, size 0x2
    unsigned short m_joint1; // offset 0x2, size 0x2
    float m_weight0; // offset 0x4, size 0x4
    float m_weight1; // offset 0x8, size 0x4
};
// total size: 0x8
class _xModel {
    // Members
public:
    class tagiModelResource * m_resource; // offset 0x0, size 0x4
    class tagiModelRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x6
class _FCinfo {
    // Members
public:
    unsigned short nidx[3]; // offset 0x0, size 0x6
};
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x14
class tagP2VERTEX {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float tu; // offset 0xC, size 0x4
    float tv; // offset 0x10, size 0x4
};
// total size: 0xC
class tagiModelResource {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    signed int m_meshCount; // offset 0x4, size 0x4
    class tagP2Mesh * m_mesh; // offset 0x8, size 0x4
};
// total size: 0x10
class Vector4D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float t; // offset 0xC, size 0x4
};
// total size: 0x4698
class XStreamHeader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int versionID; // offset 0x4, size 0x4
    unsigned char month; // offset 0x8, size 0x1
    unsigned char day; // offset 0x9, size 0x1
    unsigned char hour; // offset 0xA, size 0x1
    unsigned char minute; // offset 0xB, size 0x1
    unsigned int mdsOffset; // offset 0xC, size 0x4
    unsigned int mdsLength; // offset 0x10, size 0x4
    class tagXStreamMDSDirectory directory; // offset 0x14, size 0x3E84
    char safety[2048]; // offset 0x3E98, size 0x800
};
// total size: 0x0
class tagiMesh {};
// total size: 0xC
class tagP2MeshVertex {
    // Members
public:
    float m_x; // offset 0x0, size 0x4
    float m_y; // offset 0x4, size 0x4
    float m_z; // offset 0x8, size 0x4
};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
// total size: 0x38
class tagP2Mesh {
    // Members
public:
    signed int m_vertexCount; // offset 0x0, size 0x4
    class tagP2VERTEX * m_vertex; // offset 0x4, size 0x4
    class tagP2VERTEX * m_neutralPose0; // offset 0x8, size 0x4
    class tagP2MeshVertex * m_neutralPose1; // offset 0xC, size 0x4
    class tagP2Weight * m_joints; // offset 0x10, size 0x4
    signed int m_indexCount; // offset 0x14, size 0x4
    unsigned short * m_index; // offset 0x18, size 0x4
    signed int m_visible; // offset 0x1C, size 0x4
    class _FCinfo * fc; // offset 0x20, size 0x4
    class Vector3D * fnorm; // offset 0x24, size 0x4
    class Vector3D * m_vnorm; // offset 0x28, size 0x4
    class Vector4D * m_vtnorm; // offset 0x2C, size 0x4
    class tagiMesh * m_next; // offset 0x30, size 0x4
    signed int m_normalsBuilt; // offset 0x34, size 0x4
};
// total size: 0x4
class tagiModelRuntime {
    // Members
public:
    signed int placeholder; // offset 0x0, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356720 -> 0x00356838
*/
// Range: 0x356720 -> 0x356838
void xModelInit() {
    /* anonymous block */ {
        // Range: 0x356720 -> 0x356838
        signed int i; // r3
    }
}


