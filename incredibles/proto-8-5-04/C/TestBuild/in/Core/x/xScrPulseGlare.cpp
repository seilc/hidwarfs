/*
    Compile unit: C:\TestBuild\in\Core\x\xScrPulseGlare.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
static class xPulseGlareMgr glare_mgr; // size: 0x3600, address: 0x6A2640
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
void xPulseFn(class xPulse &, float); // size: 0x0, address: 0x338E50
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x30
class xMat3x3 {
    // Members
public:
    class xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// total size: 0x3600
class xPulseGlareMgr {
    // Members
public:
    class xPulseGlare glares[128]; // offset 0x0, size 0x3600
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
// total size: 0x14
class xPulse {
    // Members
public:
    float max_amp; // offset 0x0, size 0x4
    float elapsed; // offset 0x4, size 0x4
    float period; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float noise; // offset 0x10, size 0x4
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
// total size: 0x6C
class xPulseGlare {
    // Members
public:
    class config cfg; // offset 0x0, size 0xC
    void (* cb_update_size)(class xPulse &, float); // offset 0xC, size 0x4
    void (* cb_update_rot)(class xPulse &, float); // offset 0x10, size 0x4
    class xVec3 pos; // offset 0x14, size 0xC
    class xVec3 dir; // offset 0x20, size 0xC
    float scale_dir; // offset 0x2C, size 0x4
    float elapsed; // offset 0x30, size 0x4
    float lifetime; // offset 0x34, size 0x4
    float size; // offset 0x38, size 0x4
    float angle; // offset 0x3C, size 0x4
    class xPulse p; // offset 0x40, size 0x14
    signed int flags; // offset 0x54, size 0x4
    class RwRaster * raster; // offset 0x58, size 0x4
    class RwRGBAReal col; // offset 0x5C, size 0x10
};
// total size: 0x24
class RxObjSpace3DVertex {
    // Members
public:
    class RwV3d objVertex; // offset 0x0, size 0xC
    class RxColorUnion c; // offset 0xC, size 0x4
    class RwV3d objNormal; // offset 0x10, size 0xC
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
};
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
class config {
    // Members
public:
    float vis_angle; // offset 0x0, size 0x4
    float amp_freq; // offset 0x4, size 0x4
    float rot_freg; // offset 0x8, size 0x4
};
// total size: 0x4
class RxColorUnion {
    // Members
public:
    union { // inferred
        class RwRGBA preLitColor; // offset 0x0, size 0x4
        class RwRGBA color; // offset 0x0, size 0x4
    };
};
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
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x10
class RwRGBAReal {
    // Members
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
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
    Compile unit: C:\TestBuild\in\Core\x\xScrPulseGlare.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00337E10 -> 0x00337E40
*/
// Range: 0x337E10 -> 0x337E40
unsigned char xScrFX_PulseGlaresCheckFlag(signed int idx /* r2 */, signed int flag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x337E10 -> 0x337E40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScrPulseGlare.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00337E40 -> 0x00337E8C
*/
// Range: 0x337E40 -> 0x337E8C
void xScrFX_PulseGlaresSetFlag(signed int idx /* r2 */, signed int flag /* r2 */, unsigned char reverse /* r2 */) {
    /* anonymous block */ {
        // Range: 0x337E40 -> 0x337E8C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScrPulseGlare.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00337E90 -> 0x00337EB8
*/
// Range: 0x337E90 -> 0x337EB8
void xScrFX_PulseGlaresSetLifetime(signed int idx /* r2 */, float lifetime /* r29 */) {
    /* anonymous block */ {
        // Range: 0x337E90 -> 0x337EB8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScrPulseGlare.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00337EC0 -> 0x00337EE8
*/
// Range: 0x337EC0 -> 0x337EE8
void xScrFX_PulseGlaresSetScale(signed int idx /* r2 */, float scale /* r29 */) {
    /* anonymous block */ {
        // Range: 0x337EC0 -> 0x337EE8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScrPulseGlare.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00337EF0 -> 0x00337F18
*/
// Range: 0x337EF0 -> 0x337F18
void xScrFX_PulseGlaresUpdateSize(signed int idx /* r2 */, float size /* r29 */) {
    /* anonymous block */ {
        // Range: 0x337EF0 -> 0x337F18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScrPulseGlare.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00337F20 -> 0x00337F5C
*/
// Range: 0x337F20 -> 0x337F5C
void xScrFX_PulseGlaresUpdateDir(signed int idx /* r2 */, class xVec3 * dir /* r2 */) {
    /* anonymous block */ {
        // Range: 0x337F20 -> 0x337F5C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScrPulseGlare.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00337F60 -> 0x00337F9C
*/
// Range: 0x337F60 -> 0x337F9C
void xScrFX_PulseGlaresUpdatePos(signed int idx /* r2 */, class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x337F60 -> 0x337F9C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScrPulseGlare.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00337FA0 -> 0x00337FEC
*/
// Range: 0x337FA0 -> 0x337FEC
void xScrFX_PulseGlaresReset() {
    /* anonymous block */ {
        // Range: 0x337FA0 -> 0x337FEC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScrPulseGlare.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00337FF0 -> 0x00338100
*/
// Range: 0x337FF0 -> 0x338100
void xScrFX_PulseGlaresUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x337FF0 -> 0x338100
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScrPulseGlare.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338100 -> 0x00338178
*/
// Range: 0x338100 -> 0x338178
void xScrFX_PulseGlaresRender(class xMat4x3 & mat /* r18 */) {
    /* anonymous block */ {
        // Range: 0x338100 -> 0x338178
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScrPulseGlare.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338180 -> 0x0033825C
*/
// Range: 0x338180 -> 0x33825C
signed int xScrFX_PulseGlaresAdd(unsigned int glareID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x338180 -> 0x33825C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScrPulseGlare.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338260 -> 0x00338D9C
*/
// Range: 0x338260 -> 0x338D9C
static void render_pulse_glare(class xMat4x3 & mat /* r21 */, class xPulseGlare * g /* r20 */) {
    /* anonymous block */ {
        // Range: 0x338260 -> 0x338D9C
        class xVec3 w; // r29+0x110
        class xVec3 h; // r29+0x100
        class xVec3 g_pos; // r29+0xF0
        class xVec3 cam_dir; // r29+0xE0
        float dot; // r29+0x120
        float noise; // r8
        class xMat3x3 m; // r29+0x90
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RxObjSpace3DVertex sStripVert[4]; // @ 0x006A5C40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScrPulseGlare.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338DA0 -> 0x00338E50
*/
// Range: 0x338DA0 -> 0x338E50
static void init_pulse_glare(class xPulseGlare & glare /* r16 */) {
    /* anonymous block */ {
        // Range: 0x338DA0 -> 0x338E50
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScrPulseGlare.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338E50 -> 0x00338EA0
*/
// Range: 0x338E50 -> 0x338EA0
static void xPulseFn(class xPulse & p /* r16 */) {
    /* anonymous block */ {
        // Range: 0x338E50 -> 0x338EA0
    }
}


