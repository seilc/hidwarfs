/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6A9D20
void fileCallback(class tag_xFile *); // size: 0x0, address: 0x2C98D0
// total size: 0x58
class RwTexture {
    // Members
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    signed int refCount; // offset 0x54, size 0x4
};
// total size: 0x24
class xInternalTextureNode {
    // Members
public:
    class PKRAssetTOCInfo info; // offset 0x0, size 0x18
    void * pAssetMemory; // offset 0x18, size 0x4
    class RwTexture * pTexture; // offset 0x1C, size 0x4
    unsigned short LRU; // offset 0x20, size 0x2
    unsigned char refCount; // offset 0x22, size 0x1
    signed char used; // offset 0x23, size 0x1
};
// total size: 0x30
class xInternalMovieNode {
    // Members
public:
    unsigned int hash_id; // offset 0x0, size 0x4
    class PKRAssetTOCInfo info; // offset 0x4, size 0x18
    class MOVIE * pMovie; // offset 0x1C, size 0x4
    class RwTexture * pTexture; // offset 0x20, size 0x4
    unsigned char used; // offset 0x24, size 0x1
    unsigned char m_looping; // offset 0x25, size 0x1
    unsigned short m_freezeframed; // offset 0x26, size 0x2
    unsigned int m_startframe; // offset 0x28, size 0x4
    unsigned int m_endframe; // offset 0x2C, size 0x4
};
// total size: 0x34
class RwRaster {
    // Members
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
// total size: 0x188C
class xTextureManager {
    // Members
public:
    unsigned int m_maxPoolSize; // offset 0x0, size 0x4
    unsigned int m_currentPoolSize; // offset 0x4, size 0x4
    signed int m_lru; // offset 0x8, size 0x4
    class xInternalTextureNode m_texture_nodes[128]; // offset 0xC, size 0x1200
    class xInternalMovieNode m_movie_nodes[4]; // offset 0x120C, size 0xC0
    class tag_xFile m_files[8]; // offset 0x12CC, size 0x5A0
    unsigned int m_clearIDs[8]; // offset 0x186C, size 0x20
};
// total size: 0x28
class PKRAssetType {
    // Members
public:
    unsigned int typetag; // offset 0x0, size 0x4
    unsigned int tflags; // offset 0x4, size 0x4
    signed int typalign; // offset 0x8, size 0x4
    void * (* readXForm)(void *, unsigned int, void *, unsigned int, unsigned int *); // offset 0xC, size 0x4
    void * (* writeXForm)(void *, unsigned int, void *, void *, unsigned int, unsigned int *); // offset 0x10, size 0x4
    signed int (* assetLoaded)(void *, unsigned int, void *, signed int); // offset 0x14, size 0x4
    void * (* makeData)(void *, unsigned int, void *, signed int *, signed int *); // offset 0x18, size 0x4
    void (* cleanup)(void *, unsigned int, void *); // offset 0x1C, size 0x4
    void (* assetUnloaded)(void *, unsigned int); // offset 0x20, size 0x4
    void (* writePeek)(void *, unsigned int, void *, char *); // offset 0x24, size 0x4
};
// total size: 0x10
class xTextureHandle {
    // Members
public:
    class RwTexture * m_pTexture; // offset 0x0, size 0x4
    class xInternalMovieNode * m_pMovie; // offset 0x4, size 0x4
    class xInternalTextureNode * m_pNode; // offset 0x8, size 0x4
    class xInternalTextureNode * m_pPrevNode; // offset 0xC, size 0x4
};
// total size: 0x18
class PKRAssetTOCInfo {
    // Members
public:
    unsigned int aid; // offset 0x0, size 0x4
    class PKRAssetType * typeref; // offset 0x4, size 0x4
    unsigned int sector; // offset 0x8, size 0x4
    unsigned int plus_offset; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    void * mempos; // offset 0x14, size 0x4
};
// total size: 0x0
class BINK {};
// total size: 0xB4
class tag_xFile {
    // Members
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x90
class tag_iFile {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    signed int offset; // offset 0x88, size 0x4
    signed int length; // offset 0x8C, size 0x4
};
// total size: 0x24
class MOVIE {
    // Members
public:
    class BINK * hBink; // offset 0x0, size 0x4
    class RwRaster * pBinkRaster; // offset 0x4, size 0x4
    signed int asyncReadKey; // offset 0x8, size 0x4
    class RwTexture * pBinkTexture; // offset 0xC, size 0x4
    unsigned char * pPreBuffer; // offset 0x10, size 0x4
    unsigned char * pPreBufferAligned; // offset 0x14, size 0x4
    unsigned int PreBufferSize; // offset 0x18, size 0x4
    signed int FileOffset; // offset 0x1C, size 0x4
    class tag_xFile * pFile; // offset 0x20, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x8
class RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C9190 -> 0x002C9230
*/
// Range: 0x2C9190 -> 0x2C9230
// this: r16
void xTextureManager::FreeMemory() {
    /* anonymous block */ {
        // Range: 0x2C9190 -> 0x2C9230
        unsigned int i; // r18
        unsigned int i; // r18
        class xInternalMovieNode * pNode; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C9230 -> 0x002C9458
*/
// Range: 0x2C9230 -> 0x2C9458
// this: r16
unsigned char xTextureManager::freeElement(class xInternalTextureNode * pPrevNode /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2C9230 -> 0x2C9458
        unsigned int i; // r4
        signed int index; // r7
        signed int lru; // r6
        unsigned int i; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C9460 -> 0x002C95F4
*/
// Range: 0x2C9460 -> 0x2C95F4
// this: r19
void xTextureManager::reload(class xTextureHandle * pHandle /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2C9460 -> 0x2C95F4
        class xInternalTextureNode * pNode; // r18
        unsigned int i; // r17
        char * pHipFilename; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C9600 -> 0x002C96F4
*/
// Range: 0x2C9600 -> 0x2C96F4
// this: r2
void xTextureManager::AddMovie(class xTextureHandle * handle /* r18 */, class PKRAssetTOCInfo * pInfo /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2C9600 -> 0x2C96F4
        class xInternalMovieNode * pNode; // r16
        unsigned int i; // r7
        unsigned int i; // r6
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C9700 -> 0x002C9804
*/
// Range: 0x2C9700 -> 0x2C9804
// this: r2
void xTextureManager::AddTexture(class xTextureHandle * handle /* r18 */, class PKRAssetTOCInfo * pInfo /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2C9700 -> 0x2C9804
        class xInternalTextureNode * pNode; // r16
        unsigned int i; // r7
        unsigned int i; // r6
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C9810 -> 0x002C98C8
*/
// Range: 0x2C9810 -> 0x2C98C8
class xTextureManager & Get() {
    /* anonymous block */ {
        // Range: 0x2C9810 -> 0x2C98C8
        signed char @3089; // @ 0x006123BC
        class xTextureManager mgr; // @ 0x0067E260
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C98D0 -> 0x002C9CC0
*/
// Range: 0x2C98D0 -> 0x2C9CC0
void fileCallback(class tag_xFile * file /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2C98D0 -> 0x2C9CC0
        class xInternalTextureNode * pNode; // r18
        unsigned int i; // r17
        unsigned int size; // r29+0x4C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C9CC0 -> 0x002C9CE8
*/
// Range: 0x2C9CC0 -> 0x2C9CE8
// this: r2
class xTextureHandle & xTextureHandle::operator=(class xTextureHandle & handle /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2C9CC0 -> 0x2C9CE8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C9CF0 -> 0x002C9EF4
*/
// Range: 0x2C9CF0 -> 0x2C9EF4
// this: r16
unsigned char xTextureHandle::IsReady() {
    /* anonymous block */ {
        // Range: 0x2C9CF0 -> 0x2C9EF4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C9F00 -> 0x002CA154
*/
// Range: 0x2C9F00 -> 0x2CA154
// this: r16
class RwTexture * xTextureHandle::GetTexture() {
    /* anonymous block */ {
        // Range: 0x2C9F00 -> 0x2CA154
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CA160 -> 0x002CA2A8
*/
// Range: 0x2CA160 -> 0x2CA2A8
// this: r17
xTextureHandle::~xTextureHandle() {
    /* anonymous block */ {
        // Range: 0x2CA160 -> 0x2CA2A8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CA2B0 -> 0x002CA3D4
*/
// Range: 0x2CA2B0 -> 0x2CA3D4
// this: r17
void xTextureHandle::Reference(class RwTexture * pTexture /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2CA2B0 -> 0x2CA3D4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CA3E0 -> 0x002CA714
*/
// Range: 0x2CA3E0 -> 0x2CA714
// this: r20
void xTextureHandle::PlayMovie(unsigned int assetID /* r19 */, unsigned int looping /* r18 */, unsigned int freezeframed /* r17 */, unsigned int startframe /* r16 */, unsigned int endframe /* r21 */) {
    /* anonymous block */ {
        // Range: 0x2CA3E0 -> 0x2CA714
        class PKRAssetTOCInfo info; // r29+0x70
        signed int found; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CA720 -> 0x002CA72C
*/
// Range: 0x2CA720 -> 0x2CA72C
// this: r2
unsigned char xTextureHandle::IsMoviePlaying() {
    /* anonymous block */ {
        // Range: 0x2CA720 -> 0x2CA72C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CA730 -> 0x002CAB2C
*/
// Range: 0x2CA730 -> 0x2CAB2C
// this: r19
void xTextureHandle::Reference(unsigned int assetID /* r18 */, unsigned char clearPrev /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2CA730 -> 0x2CAB2C
        class RwTexture * pTexture; // r2
        class PKRAssetTOCInfo info; // r29+0x50
        signed int found; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CAB30 -> 0x002CAC48
*/
// Range: 0x2CAB30 -> 0x2CAC48
// this: r16
void xTextureHandle::StopMovie() {
    /* anonymous block */ {
        // Range: 0x2CAB30 -> 0x2CAC48
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CAC50 -> 0x002CAC68
*/
// Range: 0x2CAC50 -> 0x2CAC68
// this: r2
xTextureHandle::xTextureHandle() {
    /* anonymous block */ {
        // Range: 0x2CAC50 -> 0x2CAC68
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CAC70 -> 0x002CB004
*/
// Range: 0x2CAC70 -> 0x2CB004
// this: r19
void xInternalTextureNode::FreeMemory() {
    /* anonymous block */ {
        // Range: 0x2CAC70 -> 0x2CB004
        signed int zeroIndex; // r18
        unsigned int i; // r17
    }
}


