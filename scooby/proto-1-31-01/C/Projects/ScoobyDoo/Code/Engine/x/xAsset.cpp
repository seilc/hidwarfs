/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char * assetBuffer; // size: 0x4, address: 0x4A4E90
char * assetBufferNext; // size: 0x4, address: 0x4A4E94
unsigned int assetBufferRemain; // size: 0x4, address: 0x4A4E98
unsigned int assetBufferResetPoint; // size: 0x4, address: 0x4A4E9C
static void (* instanceTable[33])(unsigned int, void * *, void * *, void * *); // size: 0x84, address: 0x44F600
signed int g_RTObjModelCount; // size: 0x4, address: 0x4A4D34
class _xModel g_RTObjModel[]; // size: 0x0, address: 0x4E0080
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
signed int g_DNPCSkeletonCount; // size: 0x4, address: 0x4A4CC0
class xSkel g_DNPCSkeleton[]; // size: 0x0, address: 0x4B5340
signed int g_DNPCModelCount; // size: 0x4, address: 0x4A4D44
class _xModel g_DNPCModel[]; // size: 0x0, address: 0x4E0440
signed int g_SNPCSkeletonCount; // size: 0x4, address: 0x4A4CBC
class xSkel g_SNPCSkeleton[]; // size: 0x0, address: 0x4B5310
signed int g_SNPCModelCount; // size: 0x4, address: 0x4A4D40
class _xModel g_SNPCModel[]; // size: 0x0, address: 0x4E0410
signed int g_BossSkeletonCount; // size: 0x4, address: 0x4A4CB8
class xSkel g_BossSkeleton[]; // size: 0x0, address: 0x4B5300
signed int g_BossModelCount; // size: 0x4, address: 0x4A4D3C
class _xModel g_BossModel[]; // size: 0x0, address: 0x4E0400
signed int g_AshSkeletonCount; // size: 0x4, address: 0x4A4CB4
class xSkel g_AshSkeleton[]; // size: 0x0, address: 0x4B52F8
signed int g_AshModelCount; // size: 0x4, address: 0x4A4D38
class _xModel g_AshModel[]; // size: 0x0, address: 0x4E03F0
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
// total size: 0xC
class tagiModelResource {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    signed int m_meshCount; // offset 0x4, size 0x4
    class tagP2Mesh * m_mesh; // offset 0x8, size 0x4
};
// total size: 0x4
class tagiSkelRuntime {
    // Members
public:
    class tagiJointRuntime * m_joints; // offset 0x0, size 0x4
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
// total size: 0x4
class tagiModelRuntime {
    // Members
public:
    signed int placeholder; // offset 0x0, size 0x4
};
// total size: 0x6
class _FCinfo {
    // Members
public:
    unsigned short nidx[3]; // offset 0x0, size 0x6
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
class Vector4D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float t; // offset 0xC, size 0x4
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
class tagP2MeshVertex {
    // Members
public:
    float m_x; // offset 0x0, size 0x4
    float m_y; // offset 0x4, size 0x4
    float m_z; // offset 0x8, size 0x4
};
// total size: 0x0
class tagiMesh {};
// total size: 0x8
class _xModel {
    // Members
public:
    class tagiModelResource * m_resource; // offset 0x0, size 0x4
    class tagiModelRuntime * m_runtime; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003630F0 -> 0x003631F0
*/
// Range: 0x3630F0 -> 0x3631F0
void xCharRTObjGeometryInstance(unsigned int assetID /* r18 */, void * * resource /* r17 */, void * * runtime /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3630F0 -> 0x3631F0
        unsigned int id; // r5
        signed int i; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003631F0 -> 0x00363290
*/
// Range: 0x3631F0 -> 0x363290
class tagP2Mesh * xCharRTObjGeometryGetMesh(unsigned int assetID /* r2 */, signed int * meshCount /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3631F0 -> 0x363290
        unsigned int id; // r6
        signed int i; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00363290 -> 0x00363414
*/
// Range: 0x363290 -> 0x363414
void xCharDNPCSkeletonInstance(unsigned int assetID /* r18 */, void * * resource /* r17 */, void * * runtime /* r16 */) {
    /* anonymous block */ {
        // Range: 0x363290 -> 0x363414
        unsigned int id; // r5
        signed int i; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00363420 -> 0x00363660
*/
// Range: 0x363420 -> 0x363660
void xCharDNPCGeometryInstance(unsigned int assetID /* r18 */, void * * resource /* r17 */, void * * runtime /* r16 */) {
    /* anonymous block */ {
        // Range: 0x363420 -> 0x363660
        unsigned int id; // r5
        signed int i; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00363660 -> 0x003637E4
*/
// Range: 0x363660 -> 0x3637E4
void xCharSNPCSkeletonInstance(unsigned int assetID /* r18 */, void * * resource /* r17 */, void * * runtime /* r16 */) {
    /* anonymous block */ {
        // Range: 0x363660 -> 0x3637E4
        unsigned int id; // r5
        signed int i; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003637F0 -> 0x00363974
*/
// Range: 0x3637F0 -> 0x363974
void xCharSNPCGeometryInstance(unsigned int assetID /* r18 */, void * * resource /* r17 */, void * * runtime /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3637F0 -> 0x363974
        unsigned int id; // r5
        signed int i; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00363980 -> 0x00363B04
*/
// Range: 0x363980 -> 0x363B04
void xCharBossSkeletonInstance(unsigned int assetID /* r18 */, void * * resource /* r17 */, void * * runtime /* r16 */) {
    /* anonymous block */ {
        // Range: 0x363980 -> 0x363B04
        unsigned int id; // r5
        signed int i; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00363B10 -> 0x00363C94
*/
// Range: 0x363B10 -> 0x363C94
void xCharBossGeometryInstance(unsigned int assetID /* r18 */, void * * resource /* r17 */, void * * runtime /* r16 */) {
    /* anonymous block */ {
        // Range: 0x363B10 -> 0x363C94
        unsigned int id; // r5
        signed int i; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00363CA0 -> 0x00363E24
*/
// Range: 0x363CA0 -> 0x363E24
void xCharAshSkeletonInstance(unsigned int assetID /* r18 */, void * * resource /* r17 */, void * * runtime /* r16 */) {
    /* anonymous block */ {
        // Range: 0x363CA0 -> 0x363E24
        unsigned int id; // r5
        signed int i; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00363E30 -> 0x003640F8
*/
// Range: 0x363E30 -> 0x3640F8
void xCharAshGeometryInstance(unsigned int assetID /* r19 */, void * * resource /* r18 */, void * * runtime /* r17 */) {
    /* anonymous block */ {
        // Range: 0x363E30 -> 0x3640F8
        unsigned int id; // r4
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00364100 -> 0x00364254
*/
// Range: 0x364100 -> 0x364254
void xAssetInstance(unsigned int assetID /* r20 */, void * * resource /* r19 */, void * * persistent /* r18 */, void * * runtime /* r17 */) {
    /* anonymous block */ {
        // Range: 0x364100 -> 0x364254
        signed int type; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00364260 -> 0x00364288
*/
// Range: 0x364260 -> 0x364288
void xAssetLevelReset() {
    /* anonymous block */ {
        // Range: 0x364260 -> 0x364288
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00364290 -> 0x003642A0
*/
// Range: 0x364290 -> 0x3642A0
void xAssetSetLevelReset() {
    /* anonymous block */ {
        // Range: 0x364290 -> 0x3642A0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003642A0 -> 0x003642A8
*/
// Range: 0x3642A0 -> 0x3642A8
void xAssetInit() {
    /* anonymous block */ {
        // Range: 0x3642A0 -> 0x3642A8
    }
}


