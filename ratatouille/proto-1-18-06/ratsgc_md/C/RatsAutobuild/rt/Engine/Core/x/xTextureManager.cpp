/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xTextureManager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80074B08 -> 0x8007576C
*/
// total size: 0x34
struct RwRaster {
    // Members
    struct RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    int width; // offset 0xC, size 0x4
    int height; // offset 0x10, size 0x4
    int depth; // offset 0x14, size 0x4
    int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    int originalWidth; // offset 0x28, size 0x4
    int originalHeight; // offset 0x2C, size 0x4
    int originalStride; // offset 0x30, size 0x4
};
// total size: 0x8
struct RwObject {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLLLink {
    // Members
    struct RwLLLink * next; // offset 0x0, size 0x4
    struct RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLinkList {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x18
struct RwTexDictionary {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList texturesInDict; // offset 0x8, size 0x8
    struct RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x58
struct RwTexture {
    // Members
    struct RwRaster * raster; // offset 0x0, size 0x4
    struct RwTexDictionary * dict; // offset 0x4, size 0x4
    struct RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    int refCount; // offset 0x54, size 0x4
};
// total size: 0x24
struct xInternalTextureNode {
    // Functions
    void FreeMemory();

    // Members
    struct PKRAssetTOCInfo info; // offset 0x0, size 0x18
    union { // inferred
        void * pAssetMemory; // offset 0x18, size 0x4
        struct RwTexture * pTexture; // offset 0x18, size 0x4
    };
    unsigned short LRU; // offset 0x1C, size 0x2
    unsigned char refCount; // offset 0x1E, size 0x1
    signed char state; // offset 0x1F, size 0x1
    unsigned char used; // offset 0x20, size 0x1
};
// Range: 0x80074B08 -> 0x80074BC0
// this: r28
void xInternalTextureNode::FreeMemory() {
    // Local variables
    int zeroIndex; // r30
    unsigned int i; // r29
}

// total size: 0x0
struct BINK {};
// total size: 0x20
struct DVDDiskID {
    // Members
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[22]; // offset 0xA, size 0x16
};
// total size: 0x30
struct DVDCommandBlock {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
// total size: 0x3C
struct DVDFileInfo {
    // Members
    struct DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned long startAddr; // offset 0x30, size 0x4
    unsigned long length; // offset 0x34, size 0x4
    void (* callback)(long, struct DVDFileInfo *); // offset 0x38, size 0x4
};
// total size: 0x50
struct MOVIE {
    // Members
    unsigned int aid; // offset 0x0, size 0x4
    struct BINK * hBink; // offset 0x4, size 0x4
    struct DVDFileInfo file; // offset 0x8, size 0x3C
    struct RwTexture * pBinkTexture; // offset 0x44, size 0x4
    unsigned int uMovieOffsetBytes; // offset 0x48, size 0x4
    unsigned int movie_is_suspended : 1; // offset 0x4C, size 0x4
    unsigned int other_movie_flags : 7; // offset 0x4C, size 0x4
    unsigned int disk_open_frame : 24; // offset 0x4C, size 0x4
};
// total size: 0x30
struct xInternalMovieNode {
    // Members
    unsigned int hash_id; // offset 0x0, size 0x4
    struct PKRAssetTOCInfo info; // offset 0x4, size 0x18
    struct MOVIE * pMovie; // offset 0x1C, size 0x4
    struct RwTexture * pTexture; // offset 0x20, size 0x4
    unsigned char used; // offset 0x24, size 0x1
    unsigned char m_looping; // offset 0x25, size 0x1
    unsigned short m_freezeframed; // offset 0x26, size 0x2
    unsigned int m_startframe; // offset 0x28, size 0x4
    unsigned int m_endframe; // offset 0x2C, size 0x4
};
// total size: 0x10
class xTextureHandle {
    // Functions
    xTextureHandle();

    void dereference(unsigned char clearPrev);

    void Reference(unsigned int assetID, unsigned char clearPrev);

    unsigned char IsMoviePlaying();

    void PlayMovie(unsigned int assetID, unsigned int looping, unsigned int freezeframed, unsigned int startframe, unsigned int endframe);

    void Reference(struct RwTexture * pTexture);

    ~xTextureHandle();

    struct RwTexture * GetTexture();

    unsigned char IsReady();

    class xTextureHandle & operator=(const class xTextureHandle & handle);

    // Members
    struct RwTexture * m_pTexture; // offset 0x0, size 0x4
    struct xInternalMovieNode * m_pMovie; // offset 0x4, size 0x4
    struct xInternalTextureNode * m_pNode; // offset 0x8, size 0x4
    struct xInternalTextureNode * m_pPrevNode; // offset 0xC, size 0x4
};
// Range: 0x80074BC0 -> 0x80074BD8
// this: r0
xTextureHandle::xTextureHandle() {}

// Range: 0x80074BD8 -> 0x80074C70
// this: r31
void xTextureHandle::dereference(unsigned char clearPrev /* r0 */) {}

// total size: 0xF0
struct tag_iFile {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    int fd; // offset 0x84, size 0x4
    struct DVDFileInfo file; // offset 0x88, size 0x3C
    void (* cb)(struct tag_xFile *); // offset 0xC4, size 0x4
    int akey; // offset 0xC8, size 0x4
    int buffer[8]; // offset 0xCC, size 0x20
    int real_pos; // offset 0xEC, size 0x4
};
// total size: 0x114
struct tag_xFile {
    // Members
    char relname[32]; // offset 0x0, size 0x20
    struct tag_iFile ps; // offset 0x20, size 0xF0
    void * user_data; // offset 0x110, size 0x4
};
// total size: 0x202C
class xTextureManager {
    // Functions
    xTextureManager();

    void AddTexture(class xTextureHandle * handle, struct PKRAssetTOCInfo * pInfo);

    void AddMovie(class xTextureHandle * handle, struct PKRAssetTOCInfo * pInfo);

    void reload(class xTextureHandle * pHandle);

    void freeNode(struct xInternalTextureNode * pNode);

    void clearNode(struct xInternalTextureNode * pNode);

    unsigned char freeElement(struct xInternalTextureNode * pPrevNode);

    void FreeMemory();

    // Members
    unsigned int m_maxPoolSize; // offset 0x0, size 0x4
    unsigned int m_currentPoolSize; // offset 0x4, size 0x4
    int m_lru; // offset 0x8, size 0x4
    struct xInternalTextureNode m_texture_nodes[192]; // offset 0xC, size 0x1B00
    struct xInternalMovieNode m_movie_nodes[4]; // offset 0x1B0C, size 0xC0
    struct tag_xFile m_files[4]; // offset 0x1BCC, size 0x450
    unsigned int m_clearIDs[4]; // offset 0x201C, size 0x10
};
// total size: 0x28
struct PKRAssetType {
    // Members
    unsigned int typetag; // offset 0x0, size 0x4
    unsigned int tflags; // offset 0x4, size 0x4
    int typalign; // offset 0x8, size 0x4
    void * (* readXForm)(void *, unsigned int, void *, unsigned int, unsigned int *); // offset 0xC, size 0x4
    void * (* writeXForm)(void *, unsigned int, void *, void *, unsigned int, unsigned int *); // offset 0x10, size 0x4
    int (* assetLoaded)(void *, unsigned int, void *, int); // offset 0x14, size 0x4
    void * (* makeData)(void *, unsigned int, void *, int *, int *); // offset 0x18, size 0x4
    void (* cleanup)(void *, unsigned int, void *); // offset 0x1C, size 0x4
    void (* assetUnloaded)(void *, unsigned int); // offset 0x20, size 0x4
    void (* writePeek)(void *, unsigned int, void *, char *); // offset 0x24, size 0x4
};
// total size: 0x18
struct PKRAssetTOCInfo {
    // Members
    unsigned int aid; // offset 0x0, size 0x4
    struct PKRAssetType * typeref; // offset 0x4, size 0x4
    unsigned int sector; // offset 0x8, size 0x4
    unsigned int plus_offset; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    void * mempos; // offset 0x14, size 0x4
};
// Range: 0x80074C70 -> 0x80074D0C
// this: r28
void xTextureHandle::Reference(unsigned int assetID /* r29 */, unsigned char clearPrev /* r30 */) {
    // Local variables
    struct RwTexture * pTexture; // r0
    struct PKRAssetTOCInfo info; // r1+0x8
    int found; // r0
}

// Range: 0x80074D0C -> 0x80074D1C
// this: r0
unsigned char xTextureHandle::IsMoviePlaying() {}

// Range: 0x80074D1C -> 0x80074DC4
// this: r26
void xTextureHandle::PlayMovie(unsigned int assetID /* r27 */, unsigned int looping /* r28 */, unsigned int freezeframed /* r29 */, unsigned int startframe /* r30 */, unsigned int endframe /* r31 */) {
    // Local variables
    struct PKRAssetTOCInfo info; // r1+0x8
    int found; // r0
}

// Range: 0x80074DC4 -> 0x80074E04
// this: r30
void xTextureHandle::Reference(struct RwTexture * pTexture /* r31 */) {}

// Range: 0x80074E04 -> 0x80074E50
// this: r30
xTextureHandle::~xTextureHandle() {}

// Range: 0x80074E50 -> 0x80074ED4
// this: r31
struct RwTexture * xTextureHandle::GetTexture() {}

// Range: 0x80074ED4 -> 0x80074F80
// this: r31
unsigned char xTextureHandle::IsReady() {}

// Range: 0x80074F80 -> 0x80074FA8
// this: r3
class xTextureHandle & xTextureHandle::operator=(const class xTextureHandle & handle /* r0 */) {}

void * RwEngineInstance; // size: 0x4, address: 0x803C4584
// Range: 0x80074FA8 -> 0x8007508C
void fileCallback(struct tag_xFile * file /* r30 */) {
    // Local variables
    struct xInternalTextureNode * pNode; // r29
    unsigned int i; // r30
    unsigned int size; // r1+0x8
    void * assetMem; // r30

    // References
    // -> void * RwEngineInstance;
}

static signed char init; // size: 0x1, address: 0x803C1598
static class xTextureManager mgr; // size: 0x202C, address: 0x80335EF0
// Range: 0x8007508C -> 0x800750D0
class xTextureManager & xTextureManager::Get() {
    // References
    // -> static class xTextureManager mgr;
    // -> static signed char init;
}

// Range: 0x800750D0 -> 0x80075154
// this: r29
xTextureManager::xTextureManager() {
    // Local variables
    unsigned int i; // r30
}

// Range: 0x80075154 -> 0x80075240
// this: r0
void xTextureManager::AddTexture(class xTextureHandle * handle /* r29 */, struct PKRAssetTOCInfo * pInfo /* r30 */) {
    // Local variables
    struct xInternalTextureNode * pNode; // r31
    unsigned int i; // r0
    unsigned int i; // r0
}

// Range: 0x80075240 -> 0x80075318
// this: r0
void xTextureManager::AddMovie(class xTextureHandle * handle /* r29 */, struct PKRAssetTOCInfo * pInfo /* r30 */) {
    // Local variables
    struct xInternalMovieNode * pNode; // r31
    unsigned int i; // r0
    unsigned int i; // r0
}

// Range: 0x80075318 -> 0x80075498
// this: r28
void xTextureManager::reload(class xTextureHandle * pHandle /* r26 */) {
    // Local variables
    struct tag_xFile * pFile; // r31
    unsigned int i; // r27
    struct xInternalTextureNode * pNode; // r30
    unsigned int size; // r29
    unsigned int doubleSize; // r27
    const char * pHipFilename; // r0
    int result; // r0

    // References
    // -> void * RwEngineInstance;
}

// Range: 0x80075498 -> 0x800754D8
static unsigned int DiskSize(unsigned int fileSize /* r31 */) {
    // Local variables
    unsigned int sectorSize; // r0
}

// Range: 0x800754D8 -> 0x8007551C
// this: r30
void xTextureManager::freeNode(struct xInternalTextureNode * pNode /* r31 */) {}

// Range: 0x8007551C -> 0x80075568
// this: r30
void xTextureManager::clearNode(struct xInternalTextureNode * pNode /* r31 */) {}

// Range: 0x80075568 -> 0x800755B4
void xTextureManager::freeNode(struct xInternalMovieNode * & pNode /* r31 */) {}

// Range: 0x800755B4 -> 0x800756E4
// this: r31
unsigned char xTextureManager::freeElement(struct xInternalTextureNode * pPrevNode /* r25 */) {
    // Local variables
    unsigned int i; // r28
    int index; // r28
    int lru; // r27
    unsigned int i; // r26
}

// Range: 0x800756E4 -> 0x8007576C
// this: r29
void xTextureManager::FreeMemory() {
    // Local variables
    unsigned int i; // r30
    unsigned int i; // r30
    struct xInternalMovieNode * pNode; // r1+0x8
}


