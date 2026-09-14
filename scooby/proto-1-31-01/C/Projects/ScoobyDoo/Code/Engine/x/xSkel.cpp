/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSkel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xSkel g_AshSkeleton[1]; // size: 0x8, address: 0x4B52F8
class xSkel g_BossSkeleton[2]; // size: 0x10, address: 0x4B5300
class xSkel g_SNPCSkeleton[5]; // size: 0x28, address: 0x4B5310
class xSkel g_DNPCSkeleton[5]; // size: 0x28, address: 0x4B5340
signed int g_AshSkeletonCount; // size: 0x4, address: 0x4A4CB4
signed int g_BossSkeletonCount; // size: 0x4, address: 0x4A4CB8
signed int g_SNPCSkeletonCount; // size: 0x4, address: 0x4A4CBC
signed int g_DNPCSkeletonCount; // size: 0x4, address: 0x4A4CC0
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0xA4
class tagiJointRuntime {
    // Members
public:
    float m_tx; // offset 0x0, size 0x4
    float m_ty; // offset 0x4, size 0x4
    float m_tz; // offset 0x8, size 0x4
    float m_rx; // offset 0xC, size 0x4
    float m_ry; // offset 0x10, size 0x4
    float m_rz; // offset 0x14, size 0x4
    class Vector3D m_worldHome; // offset 0x18, size 0xC
    class tagMATRIX m_localMatrix; // offset 0x24, size 0x40
    class tagMATRIX m_worldMatrix; // offset 0x64, size 0x40
};
// total size: 0x8
class xSkel {
    // Members
public:
    class tagiSkelResource * m_resource; // offset 0x0, size 0x4
    class tagiSkelRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0xC
class tagiSkelResource {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    unsigned int m_jointCount; // offset 0x4, size 0x4
    class tagiJointResource * m_joints; // offset 0x8, size 0x4
};
// total size: 0x4
class tagiSkelRuntime {
    // Members
public:
    class tagiJointRuntime * m_joints; // offset 0x0, size 0x4
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
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x50
class tagiJointResource {
    // Members
public:
    class tagMATRIX m_orientMatrix; // offset 0x0, size 0x40
    class Vector3D m_home; // offset 0x40, size 0xC
    unsigned int m_parent; // offset 0x4C, size 0x4
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
// total size: 0x40
class tagMATRIX {
    // Members
public:
    float _11; // offset 0x0, size 0x4
    float _12; // offset 0x4, size 0x4
    float _13; // offset 0x8, size 0x4
    float _14; // offset 0xC, size 0x4
    float _21; // offset 0x10, size 0x4
    float _22; // offset 0x14, size 0x4
    float _23; // offset 0x18, size 0x4
    float _24; // offset 0x1C, size 0x4
    float _31; // offset 0x20, size 0x4
    float _32; // offset 0x24, size 0x4
    float _33; // offset 0x28, size 0x4
    float _34; // offset 0x2C, size 0x4
    float _41; // offset 0x30, size 0x4
    float _42; // offset 0x34, size 0x4
    float _43; // offset 0x38, size 0x4
    float _44; // offset 0x3C, size 0x4
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xSkel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00332950 -> 0x00332968
*/
// Range: 0x332950 -> 0x332968
void xSkelInit() {
    /* anonymous block */ {
        // Range: 0x332950 -> 0x332968
    }
}


