/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x10
class _xFColor {
    // Members
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
// total size: 0x3C
class iLight {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    class RpLight * hw; // offset 0x4, size 0x4
    class xSphere sph; // offset 0x8, size 0x10
    float radius_sq; // offset 0x18, size 0x4
    class _xFColor color; // offset 0x1C, size 0x10
    class xVec3 dir; // offset 0x2C, size 0xC
    float coneangle; // offset 0x38, size 0x4
};
// total size: 0x20
class xLinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x64
class _zLight : public xBase {
    // Members
public:
    unsigned int flags; // offset 0x10, size 0x4
    class zLightAsset * tasset; // offset 0x14, size 0x4
    class iLight light; // offset 0x18, size 0x3C
    class xBase * attached_to; // offset 0x54, size 0x4
    signed int true_idx; // offset 0x58, size 0x4
    float * reg; // offset 0x5C, size 0x4
    signed int effect_idx; // offset 0x60, size 0x4
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
// total size: 0x40
class RpLight {
    // Members
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    class RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    class RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    class RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
};
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x44
class zLightAsset : public xBaseAsset {
    // Members
public:
    unsigned char lightType; // offset 0x8, size 0x1
    unsigned char lightEffect; // offset 0x9, size 0x1
    unsigned char lightPad[2]; // offset 0xA, size 0x2
    unsigned int lightFlags; // offset 0xC, size 0x4
    float lightColor[4]; // offset 0x10, size 0x10
    class xVec3 lightDir; // offset 0x20, size 0xC
    float lightConeAngle; // offset 0x2C, size 0x4
    class xSphere lightSphere; // offset 0x30, size 0x10
    unsigned int attachID; // offset 0x40, size 0x4
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
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00136F70 -> 0x001371FC
*/
// Range: 0x136F70 -> 0x1371FC
void zLightEffectCauldron(class _zLight * zlight /* r2 */, float seconds /* r20 */) {
    /* anonymous block */ {
        // Range: 0x136F70 -> 0x1371FC
        class iLight * l; // r17
        float * reg; // r2
        float amount; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137200 -> 0x00137210
*/
// Range: 0x137200 -> 0x137210
void zLightEffectInitCauldron(class _zLight * zlight /* r2 */) {
    /* anonymous block */ {
        // Range: 0x137200 -> 0x137210
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137210 -> 0x00137218
*/
// Range: 0x137210 -> 0x137218
void zLightEffectRandomColFast() {
    /* anonymous block */ {
        // Range: 0x137210 -> 0x137218
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137220 -> 0x00137228
*/
// Range: 0x137220 -> 0x137228
void zLightEffectRandomCol() {
    /* anonymous block */ {
        // Range: 0x137220 -> 0x137228
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137230 -> 0x00137238
*/
// Range: 0x137230 -> 0x137238
void zLightEffectRandomColSlow() {
    /* anonymous block */ {
        // Range: 0x137230 -> 0x137238
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137240 -> 0x00137248
*/
// Range: 0x137240 -> 0x137248
void zLightEffectHalfDimFast() {
    /* anonymous block */ {
        // Range: 0x137240 -> 0x137248
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137250 -> 0x00137258
*/
// Range: 0x137250 -> 0x137258
void zLightEffectHalfDim() {
    /* anonymous block */ {
        // Range: 0x137250 -> 0x137258
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137260 -> 0x00137268
*/
// Range: 0x137260 -> 0x137268
void zLightEffectHalfDimSlow() {
    /* anonymous block */ {
        // Range: 0x137260 -> 0x137268
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137270 -> 0x00137278
*/
// Range: 0x137270 -> 0x137278
void zLightEffectDimFast() {
    /* anonymous block */ {
        // Range: 0x137270 -> 0x137278
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137280 -> 0x00137288
*/
// Range: 0x137280 -> 0x137288
void zLightEffectDim() {
    /* anonymous block */ {
        // Range: 0x137280 -> 0x137288
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137290 -> 0x00137298
*/
// Range: 0x137290 -> 0x137298
void zLightEffectDimSlow() {
    /* anonymous block */ {
        // Range: 0x137290 -> 0x137298
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001372A0 -> 0x001372A8
*/
// Range: 0x1372A0 -> 0x1372A8
void zLightEffectStrobeFast() {
    /* anonymous block */ {
        // Range: 0x1372A0 -> 0x1372A8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001372B0 -> 0x001372B8
*/
// Range: 0x1372B0 -> 0x1372B8
void zLightEffectStrobe() {
    /* anonymous block */ {
        // Range: 0x1372B0 -> 0x1372B8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001372C0 -> 0x001372C8
*/
// Range: 0x1372C0 -> 0x1372C8
void zLightEffectStrobeSlow() {
    /* anonymous block */ {
        // Range: 0x1372C0 -> 0x1372C8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001372D0 -> 0x001372EC
*/
// Range: 0x1372D0 -> 0x1372EC
void zLightEffectFlickerErratic(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1372D0 -> 0x1372EC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001372F0 -> 0x00137314
*/
// Range: 0x1372F0 -> 0x137314
void zLightEffectFlickerSlow(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1372F0 -> 0x137314
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137320 -> 0x00137344
*/
// Range: 0x137320 -> 0x137344
void zLightEffectFlicker(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x137320 -> 0x137344
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137350 -> 0x00137644
*/
// Range: 0x137350 -> 0x137644
static void EffectFlicker(class _zLight * zlight /* r18 */, float seconds /* r29+0x50 */, float min /* r21 */, float rnd /* r20 */) {
    /* anonymous block */ {
        // Range: 0x137350 -> 0x137644
        class iLight * l; // r17
        float * reg; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137650 -> 0x00137660
*/
// Range: 0x137650 -> 0x137660
void zLightEffectInitFlicker(class _zLight * zlight /* r2 */) {
    /* anonymous block */ {
        // Range: 0x137650 -> 0x137660
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137660 -> 0x00137668
*/
// Range: 0x137660 -> 0x137668
void zLightEffectInitRandomCol() {
    /* anonymous block */ {
        // Range: 0x137660 -> 0x137668
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137670 -> 0x00137678
*/
// Range: 0x137670 -> 0x137678
void zLightEffectInitHalfDim() {
    /* anonymous block */ {
        // Range: 0x137670 -> 0x137678
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137680 -> 0x00137688
*/
// Range: 0x137680 -> 0x137688
void zLightEffectInitDim() {
    /* anonymous block */ {
        // Range: 0x137680 -> 0x137688
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137690 -> 0x00137698
*/
// Range: 0x137690 -> 0x137698
void zLightEffectInitStrobe() {
    /* anonymous block */ {
        // Range: 0x137690 -> 0x137698
    }
}


