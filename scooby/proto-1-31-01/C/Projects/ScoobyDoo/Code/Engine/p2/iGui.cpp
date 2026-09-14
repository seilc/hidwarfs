/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
signed short gFX1Color; // size: 0x2, address: 0x4A4DE4
signed int gGameState; // size: 0x4, address: 0x4A4640
float gZOffset; // size: 0x4, address: 0x4A4DEC
float gZOffsetDelta; // size: 0x4, address: 0x4A4638
// total size: 0x20
class _iTexResource {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    unsigned int pad[3]; // offset 0x4, size 0xC
    class _PVRheader header; // offset 0x10, size 0x10
};
// total size: 0x60
class _xGuiItem {
    // Members
public:
    unsigned char m_idx; // offset 0x0, size 0x1
    unsigned char m_scriptCreateIndex; // offset 0x1, size 0x1
    signed short m_textOffset; // offset 0x2, size 0x2
    unsigned int m_flag; // offset 0x4, size 0x4
    unsigned int m_rgba; // offset 0x8, size 0x4
    unsigned int m_dataID; // offset 0xC, size 0x4
    class _xGuiMaya m_img; // offset 0x10, size 0x18
    void * m_edobjPad; // offset 0x28, size 0x4
    void * m_func[5]; // offset 0x2C, size 0x14
    class _xGuiItem * m_dir[6]; // offset 0x40, size 0x18
    class _xGuiItem * m_next; // offset 0x58, size 0x4
    class _xGuiItem * m_prev; // offset 0x5C, size 0x4
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
// total size: 0x3C
class _xGuiSys {
    // Members
public:
    unsigned char m_idx; // offset 0x0, size 0x1
    unsigned char m_scriptCreateCount; // offset 0x1, size 0x1
    unsigned char m_pad[2]; // offset 0x2, size 0x2
    unsigned int m_flag; // offset 0x4, size 0x4
    signed short m_off[2]; // offset 0x8, size 0x4
    void * m_data; // offset 0xC, size 0x4
    class _xGuiItem * m_item; // offset 0x10, size 0x4
    class _xGuiItem * m_select; // offset 0x14, size 0x4
    class _xGuiSys * m_dir[6]; // offset 0x18, size 0x18
    void * m_edobjPad; // offset 0x30, size 0x4
    void * m_func[2]; // offset 0x34, size 0x8
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
// total size: 0xC
class tagP2Weight {
    // Members
public:
    unsigned short m_joint0; // offset 0x0, size 0x2
    unsigned short m_joint1; // offset 0x2, size 0x2
    float m_weight0; // offset 0x4, size 0x4
    float m_weight1; // offset 0x8, size 0x4
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
// total size: 0x6
class _FCinfo {
    // Members
public:
    unsigned short nidx[3]; // offset 0x0, size 0x6
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
// total size: 0x8
class _iTexRuntime {
    // Members
public:
    void * surface; // offset 0x0, size 0x4
    unsigned int m_flags; // offset 0x4, size 0x4
};
// total size: 0x0
class tagiMesh {};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
// total size: 0x44
class xFontBox_t {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    unsigned int font; // offset 0x14, size 0x4
    unsigned int color; // offset 0x18, size 0x4
    unsigned int saved_color; // offset 0x1C, size 0x4
    float x_spacing; // offset 0x20, size 0x4
    float y_spacing; // offset 0x24, size 0x4
    float depth; // offset 0x28, size 0x4
    float inset_left; // offset 0x2C, size 0x4
    float inset_right; // offset 0x30, size 0x4
    float inset_top; // offset 0x34, size 0x4
    float inset_bottom; // offset 0x38, size 0x4
    char * text; // offset 0x3C, size 0x4
    unsigned int backdrop_color; // offset 0x40, size 0x4
};
// total size: 0x8
class _xTex {
    // Members
public:
    class _iTexResource * m_resource; // offset 0x0, size 0x4
    class _iTexRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x18
class _xGuiMaya {
    // Members
public:
    unsigned int m_modelID; // offset 0x0, size 0x4
    unsigned int m_texID; // offset 0x4, size 0x4
    signed char m_partID; // offset 0x8, size 0x1
    signed char m_val[3]; // offset 0x9, size 0x3
    signed short m_off[2]; // offset 0xC, size 0x4
    signed short m_bbox[4]; // offset 0x10, size 0x8
};
// total size: 0x10
class _PVRheader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int nTextureDataSize; // offset 0x4, size 0x4
    unsigned int nTextureType; // offset 0x8, size 0x4
    unsigned short nWidth; // offset 0xC, size 0x2
    unsigned short nHeight; // offset 0xE, size 0x2
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00384DF0 -> 0x00385328
*/
// Range: 0x384DF0 -> 0x385328
void iGuiItemRenderFunc_MayaClip(class _xGuiItem * gui /* r19 */, class _xGuiSys * sys /* r18 */) {
    /* anonymous block */ {
        // Range: 0x384DF0 -> 0x385328
        signed short offy; // r3
        signed short offx; // r6
        class Vector3D b; // r29+0xD0
        class Vector3D a; // r29+0xC0
        signed int meshCount; // r29+0xDC
        class tagP2Mesh * mesh; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00385330 -> 0x003857D0
*/
// Range: 0x385330 -> 0x3857D0
void iGuiItemRenderFunc_Maya(class _xGuiItem * gui /* r19 */, class _xGuiSys * sys /* r18 */) {
    /* anonymous block */ {
        // Range: 0x385330 -> 0x3857D0
        class Vector3D b; // r29+0x80
        class Vector3D a; // r29+0x70
        class _xTex * tex; // r17
        signed int meshCount; // r29+0x8C
        class tagP2Mesh * mesh; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003857D0 -> 0x00385F90
*/
// Range: 0x3857D0 -> 0x385F90
void iGuiItemRenderFunc_Text(class _xGuiItem * gui /* r19 */, class _xGuiSys * sys /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3857D0 -> 0x385F90
        char * off; // r2
        signed short offy; // r3
        signed short offx; // r16
        char * text; // r17
        class xFontBox_t * fontBox; // r16
        class _xTex * tex; // r2
        class Vector3D b; // r29+0x80
        class Vector3D a; // r29+0x70
        signed int meshCount; // r29+0x8C
        class tagP2Mesh * mesh; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00385F90 -> 0x00386524
*/
// Range: 0x385F90 -> 0x386524
void iGuiItemRenderFunc_TextNumber(class _xGuiItem * gui /* r18 */, class _xGuiSys * sys /* r17 */) {
    /* anonymous block */ {
        // Range: 0x385F90 -> 0x386524
        signed short offy; // r2
        signed short offx; // r16
        char text[16]; // r29+0x60
        class xFontBox_t * fontBox; // r16
        class Vector3D b; // r29+0x80
        class Vector3D a; // r29+0x70
        signed int meshCount; // r29+0x8C
        class tagP2Mesh * mesh; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00386530 -> 0x0038657C
*/
// Range: 0x386530 -> 0x38657C
void iGuiItemRenderFunc_Image(class _xGuiItem * gui /* r6 */, class _xGuiSys * sys /* r2 */) {
    /* anonymous block */ {
        // Range: 0x386530 -> 0x38657C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00386580 -> 0x00386588
*/
// Range: 0x386580 -> 0x386588
void iGuiItemRenderFunc_DebugOutline() {
    /* anonymous block */ {
        // Range: 0x386580 -> 0x386588
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iGui.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00386590 -> 0x00386598
*/
// Range: 0x386590 -> 0x386598
void iGuiInit() {
    /* anonymous block */ {
        // Range: 0x386590 -> 0x386598
    }
}


